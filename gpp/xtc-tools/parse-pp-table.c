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
ATerm term_u_36;
ATerm term_t_36;
ATerm term_c_36;
ATerm term_r_35;
ATerm term_d_35;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_b_34;
ATerm term_u_33;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_z_30;
ATerm term_o_30;
ATerm term_i_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_h_22;
ATerm term_t_21;
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
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_j_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_c_10;
ATerm term_n_9;
ATerm term_h_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_q_7;
void init_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_w_8);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_y_10);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_y_7, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_e_8, term_r_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_n_9, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_g_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_p_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_h_9, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_k_17, term_m_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_f_18, term_g_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_v_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_f_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_z_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_h_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_p_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_j_8, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_21, term_j_21, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_n_21, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_p_22);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_d_23);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_t_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_d_23);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_d_23);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_f_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_d_23);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__3, term_z_31, term_f_32, (ATerm) ATempty);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
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
ATerm xtc_sglr_2 (ATerm, ATerm s_92 (ATerm), ATerm t_92 (ATerm));
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
ATerm io_parse_pp_table_0 (ATerm);
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
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_0), not_null(x_0));
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
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
  t = term_q_7;
  {
    ATerm r_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = r_7;
        t = term_y_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_1), term_y_7);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_1)), term_q_7);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  t = xtc_transform_2(t, c_0, pass_verbose_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm h_0 (ATerm t)
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm u_2 = NULL;
      ATerm y_2 = NULL;
      t = term_q_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), term_e_8);
        t = geq_0(t);
      }
    }
    t = d_8;
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
      t = (ATerm) ATinsert(ATempty, term_f_8);
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
    ATerm g_8;
    g_8 = t;
    {
      ATerm r_3 = NULL;
      ATerm s_3 = NULL;
      t = term_q_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_3), term_j_8);
        t = geq_0(t);
      }
    }
    t = g_8;
    t = j_80(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_8;
  k_8 = t;
  {
    ATerm v_3 = NULL;
    ATerm w_3 = NULL;
    w_3 = t;
    if(((v_3 != NULL) && (v_3 != w_3)))
      _fail(w_3);
    else
      v_3 = w_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(v_3));
      t = printnl_0(t);
    }
  }
  t = k_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm e_4 = NULL,f_4 = NULL;
  c_4 = t;
  {
    ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_4)));
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
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_4)));
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
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = filter_1(t, k_76);
              return(t);
            }
            t = Cons_2(t, k_76, t_0);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = s_8;
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
  ATerm v_8;
  v_8 = t;
  {
    ATerm v_0 (ATerm t)
    {
      t = term_z_8;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm a_9 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_9;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, v_0);
  }
  t = v_8;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm e_9;
  e_9 = t;
  {
    ATerm l_5 = NULL;
    ATerm m_5 = NULL;
    m_5 = t;
    if(((l_5 != NULL) && (l_5 != m_5)))
      _fail(m_5);
    else
      l_5 = m_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATempty, not_null(l_5)));
      t = printnl_0(t);
    }
  }
  t = e_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm f_9;
  f_9 = t;
  {
    t = s_64(t);
    t = debug_0(t);
  }
  t = f_9;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm g_9;
    g_9 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_q_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_h_9);
        t = geq_0(t);
      }
    }
    t = g_9;
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
    ATerm m_9;
    m_9 = t;
    {
      ATerm t_5 = NULL;
      ATerm u_5 = NULL;
      t = term_q_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_n_9);
        t = geq_0(t);
      }
    }
    t = m_9;
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
            ATerm o_9 = t;
            int p_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_6);
                ;
                LocalPopChoice(p_9);
              }
            else
              {
                t = o_9;
                {
                  ATerm q_9 = t;
                  int r_9 = stack_ptr;
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
                      LocalPopChoice(r_9);
                    }
                  else
                    {
                      t = q_9;
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
        ATerm x_9;
        x_9 = t;
        {
          ATerm j_7 = NULL;
          ATerm k_7 = NULL,m_7 = NULL;
          ATerm l_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(e_7));
          {
            ATerm a_10 = t;
            int b_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(b_10);
              }
            else
              {
                t = a_10;
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
        t = x_9;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), (ATerm) ATinsert(ATempty, term_c_10));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(e_10);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = d_10;
      {
        ATerm f_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_10 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_10;
              }
            {
              ATerm d_1 (ATerm t)
              {
                t = term_q_10;
                return(t);
              }
              t = debug_1(t, d_1);
            }
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = f_10;
            {
              ATerm e_1 (ATerm t)
              {
                t = term_r_10;
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
        t = term_s_10;
        return(t);
      }
      t = debug_1(t, g_1);
      return(t);
    }
    t = if_verbose5_1(t, f_1);
    {
      ATerm t_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_10;
        }
      {
        ATerm x_10;
        x_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_8, term_y_10, (ATerm) ATinsert(ATempty, not_null(m_8)));
          t = table_put_0(t);
        }
        t = x_10;
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = term_z_10;
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
                  t = term_a_11;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(o_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = term_b_11;
                          return(t);
                        }
                        t = say_1(t, o_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, n_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_n_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm q_1 (ATerm t)
                              {
                                t = term_a_11;
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
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_11;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm k_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_11;
            t = getenv_0(t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = k_11;
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
      t = term_p_11;
      return(t);
    }
    t = debug_1(t, s_1);
    return(t);
  }
  t = if_verbose5_1(t, r_1);
  {
    ATerm s_11;
    s_11 = t;
    {
      ATerm t_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(w_11);
        }
      else
        {
          t = t_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_11;
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_a_12;
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
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = debug_1(t, w_1);
        return(t);
      }
      t = if_verbose5_1(t, v_1);
      {
        t = xtc_load_0(t);
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm x_1 (ATerm t)
            {
              ATerm a_2 (ATerm t)
              {
                t = term_d_12;
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
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm x_8 = NULL;
        ATerm y_8 = NULL;
        y_8 = t;
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_12), not_null(x_8)), term_i_12);
          {
            t = error_0(t);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_n_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = term_k_12;
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
  ATerm l_12 = t;
  int q_12 = stack_ptr;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), term_u_12);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = l_12;
      {
        ATerm d_2 (ATerm t)
        {
          t = term_a_13;
          return(t);
        }
        t = debug_1(t, d_2);
        _fail(t);
      }
    }
  {
    ATerm b_13;
    b_13 = t;
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
    t = b_13;
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
      t = term_c_13;
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
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_10));
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
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
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
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
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
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
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_q_13);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_13), not_null(n_15)), term_r_13);
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_15)), term_c_14), not_null(s_15)), term_x_13), not_null(j_15));
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
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_21), term_p_21), term_l_21), term_g_21), term_d_21), term_z_20), term_t_20), term_n_20), term_d_20), term_r_19), term_g_19), term_x_18), term_p_18), term_h_18), term_s_17), term_o_17), term_g_17), term_d_17), term_v_16), term_l_16), term_b_16), term_v_15), term_p_15), term_e_15), term_z_14), term_w_14), term_p_14), term_i_14);
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
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(f_16));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm u_21;
  u_21 = t;
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
              ATerm c_22 = t;
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
                  t = c_22;
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
                      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_16)), term_h_22));
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
  t = u_21;
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
        ATerm i_22 = t;
        int j_22 = stack_ptr;
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
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
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
  ATerm k_22;
  k_22 = t;
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
  t = k_22;
  {
    ATerm l_22;
    l_22 = t;
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
    t = l_22;
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
        ATerm m_22;
        m_22 = t;
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
                    ATerm n_22 = t;
                    int o_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), term_p_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(o_22);
                      }
                    else
                      {
                        t = n_22;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), term_p_22, (ATerm) ATinsert(CheckATermList(not_null(j_19)), (ATerm) ATinsert(CheckATermList(not_null(i_19)), not_null(d_19))));
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
        t = m_22;
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
  ATerm s_22;
  s_22 = t;
  {
    t = v_64(t);
    {
      ATerm k_2 (ATerm t)
      {
        t = term_x_22;
        return(t);
      }
      t = debug_1(t, k_2);
    }
  }
  t = s_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  ATerm f_20 (ATerm t)
  {
    ATerm y_22 = t;
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
        t = y_22;
      }
    {
      ATerm l_2 (ATerm t)
      {
        t = term_z_22;
        return(t);
      }
      t = obsolete_1(t, l_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_q_13);
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
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_20(t);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), (ATerm) ATinsert(ATempty, term_c_23));
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
  t = term_d_23;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), term_h_23);
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
      ATerm i_23;
      i_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_q_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_d_23);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_m_23;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
        }
      }
      t = i_23;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_p_23));
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_22)), term_p_23), not_null(x_21)), term_q_23));
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
      ATerm r_23;
      r_23 = t;
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
      t = r_23;
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
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(v_23);
        }
      else
        {
          t = u_23;
          t = stdin_0(t);
        }
      LocalPopChoice(t_23);
      t = xtc_transform_file_2(t, z_82, a_83);
    }
  else
    {
      t = s_23;
      t = xtc_transform_term_2(t, z_82, a_83);
    }
  return(t);
}
ATerm xtc_sglr_2 (ATerm t, ATerm s_92 (ATerm), ATerm t_92 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm w_23 = NULL,y_23 = NULL,a_24 = NULL;
    ATerm d_24;
    d_24 = t;
    {
      ATerm x_23 = NULL;
      t = term_d_23;
      {
        t = s_92(t);
        {
          t = xtc_find_0(t);
          {
            x_23 = t;
            if(((w_23 != NULL) && (w_23 != x_23)))
              _fail(x_23);
            else
              w_23 = x_23;
          }
        }
      }
    }
    t = d_24;
    {
      ATerm e_24;
      e_24 = t;
      {
        ATerm z_23 = NULL;
        t = term_d_23;
        {
          t = t_92(t);
          {
            z_23 = t;
            if(((y_23 != NULL) && (y_23 != z_23)))
              _fail(z_23);
            else
              y_23 = z_23;
          }
        }
      }
      t = e_24;
      {
        ATerm b_24 = NULL;
        t = term_d_23;
        {
          t = pass_v_verbose_0(t);
          {
            b_24 = t;
            if(((a_24 != NULL) && (a_24 != b_24)))
              _fail(b_24);
            else
              a_24 = b_24;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_24)), not_null(y_23)), term_h_24), not_null(w_23)), term_g_24), term_f_24);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, o_2, p_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm l_24 = NULL,p_24 = NULL,q_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym__2))
    {
      p_24 = ATgetArgument(l_24, 0);
      q_24 = ATgetArgument(l_24, 1);
      t = SSL_copy(not_null(p_24), not_null(q_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  x_24 :
  if(match_cons(y_24, sym_stderr_0))
    {
      ATerm a_25 = NULL,c_25 = NULL;
      ATerm i_24;
      i_24 = t;
      {
        ATerm b_25 = NULL;
        t = SSLgetAnnotations(not_null(y_24));
        {
          b_25 = t;
          if(((a_25 != NULL) && (a_25 != b_25)))
            _fail(b_25);
          else
            a_25 = b_25;
        }
      }
      t = i_24;
      {
        ATerm f_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(a_25));
        {
          f_25 = t;
          if(((c_25 != NULL) && (c_25 != f_25)))
            _fail(f_25);
          else
            c_25 = f_25;
        }
        t = not_null(c_25);
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
  ATerm n_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_stdout_0))
    {
      ATerm p_25 = NULL,r_25 = NULL;
      ATerm j_24;
      j_24 = t;
      {
        ATerm q_25 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
      }
      t = j_24;
      {
        ATerm s_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(p_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        t = not_null(r_25);
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
  ATerm k_26 = NULL,l_26 = NULL;
  k_26 = t;
  i_26 :
  if(match_cons(k_26, sym_FILE_1))
    {
      l_26 = ATgetArgument(k_26, 0);
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_26 = NULL;
            ATerm o_26 = NULL;
            t = m_0(t);
            {
              o_26 = t;
              {
                if(((n_26 != NULL) && (n_26 != o_26)))
                  _fail(o_26);
                else
                  n_26 = o_26;
                {
                  ATerm o_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = o_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), not_null(n_26));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_26));
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_26 = NULL;
                  ATerm u_26 = NULL;
                  t = m_0(t);
                  {
                    u_26 = t;
                    {
                      if(((q_26 != NULL) && (q_26 != u_26)))
                        _fail(u_26);
                      else
                        q_26 = u_26;
                      {
                        ATerm u_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_24 = t;
                            int w_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(w_24);
                              }
                            else
                              {
                                t = v_24;
                                {
                                  ATerm z_24 = t;
                                  int d_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(d_25);
                                    }
                                  else
                                    {
                                      t = z_24;
                                      {
                                        ATerm w_26 = NULL;
                                        w_26 = t;
                                        if(((l_26 != NULL) && (l_26 != w_26)))
                                          _fail(w_26);
                                        else
                                          l_26 = w_26;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), not_null(q_26));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_26));
                  ;
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm y_26 = NULL;
                    t = m_0(t);
                    {
                      y_26 = t;
                      if(((l_26 != NULL) && (l_26 != y_26)))
                        _fail(y_26);
                      else
                        l_26 = y_26;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_26));
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
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
    {
      j_27 = ATgetFirst((ATermList) i_27);
      k_27 = (ATerm) ATgetNext((ATermList) i_27);
      t = not_null(k_27);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym__2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      {
        ATerm e_25;
        e_25 = t;
        {
          ATerm v_27 = NULL;
          ATerm w_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(s_27));
          {
            ATerm g_25 = t;
            int h_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(h_25);
              }
            else
              {
                t = g_25;
                t = (ATerm) ATempty;
              }
            {
              w_27 = t;
              if(((v_27 != NULL) && (v_27 != w_27)))
                _fail(w_27);
              else
                v_27 = w_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_27), not_null(s_27), not_null(v_27));
            t = table_put_0(t);
          }
        }
        t = e_25;
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  ATerm i_25;
  i_25 = t;
  {
    ATerm g_28 = NULL;
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
    t = f_79(t);
    {
      g_28 = t;
      {
        if(((f_28 != NULL) && (f_28 != g_28)))
          _fail(g_28);
        else
          f_28 = g_28;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), term_p_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_28 = t;
            c_28 :
            if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
              {
                i_28 = ATgetFirst((ATermList) h_28);
                j_28 = (ATerm) ATgetNext((ATermList) h_28);
                {
                  if(((e_28 != NULL) && (e_28 != i_28)))
                    _fail(i_28);
                  else
                    e_28 = i_28;
                  {
                    if(((d_28 != NULL) && (d_28 != j_28)))
                      _fail(j_28);
                    else
                      d_28 = j_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(f_28), term_p_22, not_null(d_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_28);
                          {
                            ATerm q_2 (ATerm t)
                            {
                              ATerm k_28 = NULL;
                              k_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(k_28));
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
  t = i_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = SSL_remove(not_null(q_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm l_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_80(t);
      t = b_80(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = l_25;
      {
        t = b_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm v_28 = NULL;
  ATerm t_25;
  t_25 = t;
  {
    ATerm w_28 = NULL;
    ATerm x_28 = NULL;
    t = e_79(t);
    {
      w_28 = t;
      {
        if(((v_28 != NULL) && (v_28 != w_28)))
          _fail(w_28);
        else
          v_28 = w_28;
        {
          ATerm y_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), term_p_22);
          {
            ATerm u_25 = t;
            int v_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_25);
              }
            else
              {
                t = u_25;
                t = (ATerm) ATempty;
              }
            {
              y_28 = t;
              if(((x_28 != NULL) && (x_28 != y_28)))
                _fail(y_28);
              else
                x_28 = y_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_28), term_p_22, (ATerm) ATinsert(CheckATermList(not_null(x_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL;
  ATerm r_2 (ATerm t)
  {
    t = term_m_23;
    return(t);
  }
  t = begin_scope_1(t, r_2);
  {
    ATerm s_2 (ATerm t)
    {
      ATerm w_25;
      w_25 = t;
      {
        ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          f_29 = t;
          c_29 :
          if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
            {
              g_29 = ATgetFirst((ATermList) f_29);
              h_29 = (ATerm) ATgetNext((ATermList) f_29);
              {
                if(((e_29 != NULL) && (e_29 != g_29)))
                  _fail(g_29);
                else
                  e_29 = g_29;
                {
                  if(((d_29 != NULL) && (d_29 != h_29)))
                    _fail(h_29);
                  else
                    d_29 = h_29;
                  {
                    t = not_null(e_29);
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
      t = w_25;
      {
        ATerm v_2 (ATerm t)
        {
          t = term_m_23;
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
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL;
        ATerm l_29 = NULL;
        t = term_q_23;
        {
          t = get_config_0(t);
          {
            l_29 = t;
            if(((k_29 != NULL) && (k_29 != l_29)))
              _fail(l_29);
            else
              k_29 = l_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_29));
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = term_c_13;
      }
    {
      t = k_82(t);
      {
        ATerm x_2 (ATerm t)
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_p_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              t = term_e_26;
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
    ATerm o_29 = NULL;
    o_29 = t;
    n_29 :
    if(!(match_string(o_29, "-v")))
      {
        if(!(match_string(o_29, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_f_26;
    t = set_config_0(t);
    t = term_g_26;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  t = Option_3(t, z_2, a_3, c_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm r_29 = NULL;
    r_29 = t;
    p_29 :
    if(!(match_string(r_29, "-k")))
      {
        if(!(match_string(r_29, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm j_26;
    j_26 = t;
    {
      ATerm s_29 = NULL;
      ATerm t_29 = NULL;
      t = string_to_int_0(t);
      {
        t_29 = t;
        if(((s_29 != NULL) && (s_29 != t_29)))
          _fail(t_29);
        else
          s_29 = t_29;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_26, not_null(s_29));
        t = set_config_0(t);
      }
    }
    t = j_26;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_string_to_int(not_null(w_29));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm e_30 = NULL;
        e_30 = t;
        z_29 :
        if(!(match_string(e_30, "-S")))
          {
            if(!(match_string(e_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_v_26;
        t = set_config_0(t);
        t = term_x_26;
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        t = term_z_26;
        return(t);
      }
      t = Option_3(t, g_3, i_3, k_3);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm f_30 = NULL;
              f_30 = t;
              a_30 :
              if(!(match_string(f_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm i_30 = NULL;
              ATerm c_27;
              c_27 = t;
              {
                ATerm g_30 = NULL;
                ATerm h_30 = NULL;
                t = string_to_int_0(t);
                {
                  h_30 = t;
                  if(((g_30 != NULL) && (g_30 != h_30)))
                    _fail(h_30);
                  else
                    g_30 = h_30;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_7, not_null(g_30));
                  t = set_config_0(t);
                }
              }
              t = c_27;
              {
                ATerm j_30 = NULL;
                j_30 = t;
                if(((i_30 != NULL) && (i_30 != j_30)))
                  _fail(j_30);
                else
                  i_30 = j_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_30));
              }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = term_d_27;
              return(t);
            }
            t = ArgOption_3(t, n_3, o_3, p_3);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm k_30 = NULL;
                k_30 = t;
                d_30 :
                if(!(match_string(k_30, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                t = term_e_27;
                t = set_config_0(t);
                t = term_f_27;
                return(t);
              }
              ATerm u_3 (ATerm t)
              {
                t = term_g_27;
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
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
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
    ATerm q_30 = NULL;
    q_30 = t;
    n_30 :
    if(!(match_string(q_30, "-o")))
      {
        if(!(match_string(q_30, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm t_30 = NULL;
    ATerm t_27;
    t_27 = t;
    {
      ATerm r_30 = NULL;
      ATerm s_30 = NULL;
      s_30 = t;
      if(((r_30 != NULL) && (r_30 != s_30)))
        _fail(s_30);
      else
        r_30 = s_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, not_null(r_30));
        t = set_config_0(t);
      }
    }
    t = t_27;
    {
      ATerm u_30 = NULL;
      u_30 = t;
      if(((t_30 != NULL) && (t_30 != u_30)))
        _fail(u_30);
      else
        t_30 = u_30;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_30));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_u_27;
    return(t);
  }
  t = ArgOption_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm y_30 = NULL;
          y_30 = t;
          x_30 :
          if(!(match_string(y_30, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = term_a_28;
          t = set_config_0(t);
          t = term_b_28;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_l_28;
          return(t);
        }
        t = Option_3(t, d_4, l_4, m_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  k_31 = t;
  h_31 :
  if(match_string(k_31, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
        {
          l_31 = ATgetFirst((ATermList) k_31);
          m_31 = (ATerm) ATgetNext((ATermList) k_31);
          j_31 :
          if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
            {
              n_31 = ATgetFirst((ATermList) m_31);
              o_31 = (ATerm) ATgetNext((ATermList) m_31);
              {
                ATerm s_31 = NULL;
                ATerm m_28;
                m_28 = t;
                {
                  t = not_null(l_31);
                  t = j_0(t);
                }
                t = m_28;
                {
                  ATerm t_31 = NULL;
                  t = not_null(n_31);
                  {
                    t = k_0(t);
                    {
                      t_31 = t;
                      if(((s_31 != NULL) && (s_31 != t_31)))
                        _fail(t_31);
                      else
                        s_31 = t_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_31)), not_null(s_31));
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
    ATerm a_32 = NULL;
    a_32 = t;
    x_31 :
    if(!(match_string(a_32, "-i")))
      {
        if(!(match_string(a_32, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm d_32 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm b_32 = NULL;
      ATerm c_32 = NULL;
      c_32 = t;
      if(((b_32 != NULL) && (b_32 != c_32)))
        _fail(c_32);
      else
        b_32 = c_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(b_32));
        t = set_config_0(t);
      }
    }
    t = n_28;
    {
      ATerm e_32 = NULL;
      e_32 = t;
      if(((d_32 != NULL) && (d_32 != e_32)))
        _fail(e_32);
      else
        d_32 = e_32;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_32));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, u_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = p_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm u_28;
  u_28 = t;
  {
    ATerm i_32 = NULL;
    ATerm j_32 = NULL;
    t = term_d_23;
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
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_29), not_null(i_32)), term_z_28));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm o_32 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_32 = NULL;
    t = term_d_23;
    {
      t = whoami_0(t);
      {
        p_32 = t;
        if(((o_32 != NULL) && (o_32 != p_32)))
          _fail(p_32);
        else
          o_32 = p_32;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, term_b_29), not_null(o_32)));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_i_29;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = SSL_TicksToSeconds(not_null(s_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        ATerm j_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_32), not_null(z_32));
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = j_29;
            t = SSL_addr(not_null(y_32), not_null(z_32));
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
  ATerm q_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_75(t);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = q_29;
      {
        ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
        g_33 = t;
        f_33 :
        if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
          {
            h_33 = ATgetFirst((ATermList) g_33);
            i_33 = (ATerm) ATgetNext((ATermList) g_33);
            {
              ATerm l_33 = NULL;
              ATerm m_33 = NULL;
              t = not_null(i_33);
              {
                t = foldr_2(t, h_75, i_75);
                {
                  m_33 = t;
                  if(((l_33 != NULL) && (l_33 != m_33)))
                    _fail(m_33);
                  else
                    l_33 = m_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), not_null(l_33));
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
  ATerm t_33 = NULL;
  ATerm v_33 = NULL;
  t_33 = t;
  {
    ATerm w_33 = NULL;
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
    t = not_null(t_33);
    {
      w_33 = t;
      {
        t = SSL_explode_term(not_null(w_33));
        {
          y_33 = t;
          s_33 :
          if(match_cons(y_33, sym__2))
            {
              z_33 = ATgetArgument(y_33, 0);
              a_34 = ATgetArgument(y_33, 1);
              if(((v_33 != NULL) && (v_33 != a_34)))
                _fail(a_34);
              else
                v_33 = a_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_33);
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
      t = term_t_26;
      return(t);
    }
    t = crush_2(t, v_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        ATerm v_29;
        v_29 = t;
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_34), not_null(i_34));
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              t = SSL_gtr(not_null(h_34), not_null(i_34));
            }
        }
        t = v_29;
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
  ATerm o_34 = NULL;
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
      p_34 = t;
      n_34 :
      if(match_cons(p_34, sym__2))
        {
          q_34 = ATgetArgument(p_34, 0);
          r_34 = ATgetArgument(p_34, 1);
          {
            if(((o_34 != NULL) && (o_34 != q_34)))
              _fail(q_34);
            else
              o_34 = q_34;
            if(((o_34 != NULL) && (o_34 != r_34)))
              _fail(r_34);
            else
              o_34 = r_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm l_30;
    l_30 = t;
    {
      ATerm u_34 = NULL;
      ATerm v_34 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          v_34 = t;
          if(((u_34 != NULL) && (u_34 != v_34)))
            _fail(v_34);
          else
            u_34 = v_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), term_y_7);
        t = geq_0(t);
      }
    }
    t = l_30;
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
    ATerm z_34 = NULL,b_35 = NULL;
    ATerm m_30;
    m_30 = t;
    {
      ATerm a_35 = NULL;
      t = run_time_0(t);
      {
        a_35 = t;
        if(((z_34 != NULL) && (z_34 != a_35)))
          _fail(a_35);
        else
          z_34 = a_35;
      }
    }
    t = m_30;
    {
      ATerm c_35 = NULL;
      t = term_d_23;
      {
        t = whoami_0(t);
        {
          c_35 = t;
          if(((b_35 != NULL) && (b_35 != c_35)))
            _fail(c_35);
          else
            b_35 = c_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_30), not_null(z_34)), term_x_13), not_null(b_35)));
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
    t = term_t_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_Version_0))
    {
      ATerm l_35 = NULL,n_35 = NULL;
      ATerm p_30;
      p_30 = t;
      {
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(j_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
      }
      t = p_30;
      {
        ATerm o_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_35));
        {
          o_35 = t;
          if(((n_35 != NULL) && (n_35 != o_35)))
            _fail(o_35);
          else
            n_35 = o_35;
        }
        t = not_null(n_35);
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
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              {
                ATerm c_31 = t;
                int d_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(d_31);
                  }
                else
                  {
                    t = c_31;
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
  ATerm t_35 = NULL;
  t_35 = t;
  t = SSL_table_create(not_null(t_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  {
    ATerm e_31;
    e_31 = t;
    {
      t = term_f_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_31, term_g_31, not_null(x_35));
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
  ATerm b_36 = NULL;
  b_36 = t;
  t = SSL_table_destroy(not_null(b_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  t = SSL_exit(not_null(f_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(((ATgetType(j_36) == AT_LIST) && ATisEmpty(j_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
        {
          k_36 = ATgetFirst((ATermList) j_36);
          l_36 = (ATerm) ATgetNext((ATermList) j_36);
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
    ATerm o_36 = NULL;
    ATerm r_36 = NULL;
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        {
          ATerm p_36 = NULL;
          ATerm q_36 = NULL;
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
          t = (ATerm) ATinsert(ATempty, not_null(p_36));
        }
      }
    {
      r_36 = t;
      if(((o_36 != NULL) && (o_36 != r_36)))
        _fail(r_36);
      else
        o_36 = r_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_26, not_null(o_36));
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
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  c_37 = t;
  z_36 :
  if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
    {
      a_37 = ATgetFirst((ATermList) c_37);
      b_37 = (ATerm) ATgetNext((ATermList) c_37);
      {
        ATerm f_37 = NULL;
        t = not_null(b_37);
        {
          ATerm r_31;
          r_31 = t;
          {
            ATerm g_37 = NULL,i_37 = NULL,k_37 = NULL;
            ATerm u_31;
            u_31 = t;
            {
              ATerm h_37 = NULL;
              t = i_0(t);
              {
                h_37 = t;
                if(((g_37 != NULL) && (g_37 != h_37)))
                  _fail(h_37);
                else
                  g_37 = h_37;
              }
            }
            t = u_31;
            {
              ATerm j_37 = NULL;
              t = not_null(a_37);
              {
                t = g_0(t);
                {
                  j_37 = t;
                  if(((i_37 != NULL) && (i_37 != j_37)))
                    _fail(j_37);
                  else
                    i_37 = j_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_37)), not_null(i_37));
                {
                  k_37 = t;
                  if(((f_37 != NULL) && (f_37 != k_37)))
                    _fail(k_37);
                  else
                    f_37 = k_37;
                }
              }
            }
          }
          t = r_31;
          {
            ATerm h_5 (ATerm t)
            {
              t = not_null(f_37);
              return(t);
            }
            t = reverse_acc_2(t, g_0, h_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_37) == AT_LIST) && ATisEmpty(c_37)))
        {
          {
            t = term_d_23;
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
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym_Program_1))
    {
      w_37 = ATgetArgument(v_37, 0);
      {
        ATerm z_37 = NULL,b_38 = NULL;
        ATerm a_38 = NULL;
        t = SSLgetAnnotations(not_null(v_37));
        {
          a_38 = t;
          if(((z_37 != NULL) && (z_37 != a_38)))
            _fail(a_38);
          else
            z_37 = a_38;
        }
        {
          t = not_null(w_37);
          {
            ATerm d_38 = NULL;
            t = u_61(t);
            {
              b_38 = t;
              {
                ATerm e_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_38)), not_null(z_37));
                {
                  e_38 = t;
                  if(((d_38 != NULL) && (d_38 != e_38)))
                    _fail(e_38);
                  else
                    d_38 = e_38;
                }
                t = not_null(d_38);
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
  ATerm q_38 = NULL;
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_38 = NULL;
      t = term_i_29;
      {
        t = get_config_0(t);
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
      }
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm k_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm s_38 = NULL;
            s_38 = t;
            if(((q_38 != NULL) && (q_38 != s_38)))
              _fail(s_38);
            else
              q_38 = s_38;
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
        t = not_null(q_38);
        return(t);
      }
      t = short_description_1(t, r_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_5);
    {
      t = term_y_31;
      {
        t = echo_0(t);
        {
          t = term_g_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm t_38 = NULL;
                  ATerm u_38 = NULL;
                  u_38 = t;
                  if(((t_38 != NULL) && (t_38 != u_38)))
                    _fail(u_38);
                  else
                    t_38 = u_38;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_38)), term_h_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm v_38 = NULL;
                    ATerm w_38 = NULL;
                    ATerm w_5 (ATerm t)
                    {
                      t = not_null(q_38);
                      return(t);
                    }
                    t = long_description_1(t, w_5);
                    {
                      w_38 = t;
                      if(((v_38 != NULL) && (v_38 != w_38)))
                        _fail(w_38);
                      else
                        v_38 = w_38;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_38)), term_k_32);
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
  ATerm d_39 = NULL,g_39 = NULL,h_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym__2))
    {
      g_39 = ATgetArgument(d_39, 0);
      h_39 = ATgetArgument(d_39, 1);
      {
        ATerm l_32;
        l_32 = t;
        t = SSL_printnl(not_null(g_39), not_null(h_39));
        t = l_32;
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
  ATerm u_39 = NULL,v_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym_Undefined_1))
    {
      v_39 = ATgetArgument(u_39, 0);
      {
        ATerm y_39 = NULL,a_40 = NULL;
        ATerm z_39 = NULL;
        t = SSLgetAnnotations(not_null(u_39));
        {
          z_39 = t;
          if(((y_39 != NULL) && (y_39 != z_39)))
            _fail(z_39);
          else
            y_39 = z_39;
        }
        {
          t = not_null(v_39);
          {
            ATerm c_40 = NULL;
            t = v_61(t);
            {
              a_40 = t;
              {
                ATerm d_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_40)), not_null(y_39));
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
  ATerm i_40 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_69, _id);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = Cons_2(t, _id, i_40);
      }
    return(t);
  }
  t = i_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_85 (ATerm))
{
  t = fetch_1(t, g_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Help_0))
    {
      ATerm c_41 = NULL,e_41 = NULL;
      ATerm q_32;
      q_32 = t;
      {
        ATerm d_41 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
      }
      t = q_32;
      {
        ATerm f_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_41));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        t = not_null(e_41);
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
  ATerm v_41 = NULL;
  v_41 = t;
  t = SSL_implode_string(not_null(v_41));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = r_32;
      {
        ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
        a_42 = t;
        z_41 :
        if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
          {
            b_42 = ATgetFirst((ATermList) a_42);
            c_42 = (ATerm) ATgetNext((ATermList) a_42);
            {
              t = not_null(b_42);
              {
                ATerm b_6 (ATerm t)
                {
                  t = not_null(c_42);
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
  ATerm r_42 = NULL;
  ATerm x_42 = NULL;
  r_42 = t;
  {
    ATerm f_43 = NULL;
    ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
    t = not_null(r_42);
    {
      f_43 = t;
      {
        t = SSL_explode_term(not_null(f_43));
        {
          i_43 = t;
          p_42 :
          if(match_cons(i_43, sym__2))
            {
              j_43 = ATgetArgument(i_43, 0);
              k_43 = ATgetArgument(i_43, 1);
              q_42 :
              if(match_string(j_43, ""))
                {
                  if(((x_42 != NULL) && (x_42 != k_43)))
                    _fail(k_43);
                  else
                    x_42 = k_43;
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
      t = not_null(x_42);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm q_43 (ATerm t)
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_43);
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        {
          t = Nil_0(t);
          t = k_69(t);
        }
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,a_44 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym__2))
    {
      u_43 = ATgetArgument(t_43, 0);
      a_44 = ATgetArgument(t_43, 1);
      {
        t = not_null(u_43);
        {
          ATerm c_6 (ATerm t)
          {
            t = not_null(a_44);
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
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  t = SSL_explode_string(not_null(j_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm s_44 = NULL,t_44 = NULL,w_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym__2))
    {
      t_44 = ATgetArgument(s_44, 0);
      w_44 = ATgetArgument(s_44, 1);
      {
        ATerm a_45 = NULL,g_45 = NULL;
        ATerm b_45 = NULL;
        t = SSLgetAnnotations(not_null(s_44));
        {
          b_45 = t;
          if(((a_45 != NULL) && (a_45 != b_45)))
            _fail(b_45);
          else
            a_45 = b_45;
        }
        {
          t = not_null(t_44);
          {
            ATerm i_45 = NULL;
            t = e_55(t);
            {
              g_45 = t;
              {
                t = not_null(w_44);
                {
                  ATerm k_45 = NULL;
                  t = f_55(t);
                  {
                    i_45 = t;
                    {
                      ATerm l_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_45), not_null(i_45)), not_null(a_45));
                      {
                        l_45 = t;
                        if(((k_45 != NULL) && (k_45 != l_45)))
                          _fail(l_45);
                        else
                          k_45 = l_45;
                      }
                      t = not_null(k_45);
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
  ATerm c_33;
  c_33 = t;
  {
    ATerm d_46 = NULL,f_46 = NULL;
    ATerm d_33;
    d_33 = t;
    {
      ATerm e_46 = NULL;
      t = o_64(t);
      {
        e_46 = t;
        if(((d_46 != NULL) && (d_46 != e_46)))
          _fail(e_46);
        else
          d_46 = e_46;
      }
    }
    t = d_33;
    {
      ATerm h_46 = NULL;
      h_46 = t;
      if(((f_46 != NULL) && (f_46 != h_46)))
        _fail(h_46);
      else
        f_46 = h_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_46)), not_null(d_46)));
        t = printnl_0(t);
      }
    }
  }
  t = c_33;
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm m_46 (ATerm t)
  {
    ATerm e_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = e_33;
        t = Cons_2(t, v_68, m_46);
      }
    return(t);
  }
  t = m_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  t = SSL_is_string(not_null(p_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = k_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_6);
            ;
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm c_47 = NULL,i_47 = NULL,j_47 = NULL;
              c_47 = t;
              b_47 :
              if(match_cons(c_47, sym_Path_1))
                {
                  i_47 = ATgetArgument(c_47, 0);
                  t = not_null(i_47);
                }
              else
                {
                  if(match_cons(c_47, sym_Var_1))
                    {
                      i_47 = ATgetArgument(c_47, 0);
                      {
                        t = not_null(i_47);
                        {
                          ATerm q_33 = t;
                          int r_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_33);
                            }
                          else
                            {
                              t = q_33;
                              {
                                ATerm e_6 (ATerm t)
                                {
                                  t = term_u_33;
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
                      if(match_cons(c_47, sym_Prefix_2))
                        {
                          i_47 = ATgetArgument(c_47, 0);
                          j_47 = ATgetArgument(c_47, 1);
                          {
                            ATerm o_47 = NULL,u_47 = NULL;
                            ATerm x_33;
                            x_33 = t;
                            {
                              ATerm p_47 = NULL;
                              t = not_null(i_47);
                              {
                                t = eval_config_0(t);
                                {
                                  p_47 = t;
                                  if(((o_47 != NULL) && (o_47 != p_47)))
                                    _fail(p_47);
                                  else
                                    o_47 = p_47;
                                }
                              }
                            }
                            t = x_33;
                            {
                              ATerm v_47 = NULL;
                              t = not_null(j_47);
                              {
                                t = eval_config_0(t);
                                {
                                  v_47 = t;
                                  if(((u_47 != NULL) && (u_47 != v_47)))
                                    _fail(v_47);
                                  else
                                    u_47 = v_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), not_null(u_47));
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
  ATerm d_48 = NULL;
  d_48 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_34, not_null(d_48));
    {
      t = table_get_0(t);
      {
        ATerm j_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_34;
            c_34 = t;
            {
              ATerm f_48 = NULL;
              ATerm g_48 = NULL;
              g_48 = t;
              if(((f_48 != NULL) && (f_48 != g_48)))
                _fail(g_48);
              else
                f_48 = g_48;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_34, not_null(d_48), not_null(f_48));
                t = table_put_0(t);
              }
            }
            t = c_34;
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
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_79(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym__2))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      t = SSL_table_get(not_null(m_48), not_null(n_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  u_48 = t;
  t_48 :
  if(match_cons(u_48, sym__3))
    {
      v_48 = ATgetArgument(u_48, 0);
      w_48 = ATgetArgument(u_48, 1);
      x_48 = ATgetArgument(u_48, 2);
      {
        ATerm j_34;
        j_34 = t;
        {
          ATerm b_49 = NULL;
          ATerm c_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_48), not_null(w_48));
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
                t = (ATerm) ATempty;
              }
            {
              c_49 = t;
              if(((b_49 != NULL) && (b_49 != c_49)))
                _fail(c_49);
              else
                b_49 = c_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_48), not_null(w_48), (ATerm) ATinsert(CheckATermList(not_null(b_49)), not_null(x_48)));
            t = table_put_0(t);
          }
        }
        t = j_34;
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
  ATerm g_49 = NULL;
  ATerm h_49 = NULL;
  t = term_d_23;
  {
    t = l_86(t);
    {
      h_49 = t;
      if(((g_49 != NULL) && (g_49 != h_49)))
        _fail(h_49);
      else
        g_49 = h_49;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_31, term_f_32, not_null(g_49));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_string(n_49, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(n_49) == AT_LIST) && !(ATisEmpty(n_49))))
        {
          o_49 = ATgetFirst((ATermList) n_49);
          p_49 = (ATerm) ATgetNext((ATermList) n_49);
          {
            ATerm s_49 = NULL;
            ATerm m_34;
            m_34 = t;
            {
              t = not_null(o_49);
              t = a_0(t);
            }
            t = m_34;
            {
              ATerm t_49 = NULL;
              t = term_d_23;
              {
                t = b_0(t);
                {
                  t_49 = t;
                  if(((s_49 != NULL) && (s_49 != t_49)))
                    _fail(t_49);
                  else
                    s_49 = t_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_49)), not_null(s_49));
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
    ATerm y_49 = NULL;
    y_49 = t;
    x_49 :
    if(!(match_string(y_49, "--help")))
      {
        if(!(match_string(y_49, "-h")))
          {
            if(!(match_string(y_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_s_34;
    {
      t = set_config_0(t);
      t = term_t_34;
    }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_w_34;
    return(t);
  }
  t = Option_3(t, k_6, m_6, n_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
    {
      c_50 = ATgetFirst((ATermList) b_50);
      d_50 = (ATerm) ATgetNext((ATermList) b_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_50)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_50)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
    {
      o_50 = ATgetFirst((ATermList) n_50);
      p_50 = (ATerm) ATgetNext((ATermList) n_50);
      {
        ATerm t_50 = NULL,v_50 = NULL;
        ATerm u_50 = NULL;
        t = SSLgetAnnotations(not_null(n_50));
        {
          u_50 = t;
          if(((t_50 != NULL) && (t_50 != u_50)))
            _fail(u_50);
          else
            t_50 = u_50;
        }
        {
          t = not_null(o_50);
          {
            ATerm x_50 = NULL;
            t = n_56(t);
            {
              v_50 = t;
              {
                t = not_null(p_50);
                {
                  ATerm z_50 = NULL;
                  t = o_56(t);
                  {
                    x_50 = t;
                    {
                      ATerm a_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_50)), not_null(v_50)), not_null(t_50));
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
ATerm Nil_0 (ATerm t)
{
  ATerm k_51 = NULL;
  k_51 = t;
  j_51 :
  if(((ATgetType(k_51) == AT_LIST) && ATisEmpty(k_51)))
    {
      {
        ATerm m_51 = NULL,o_51 = NULL;
        ATerm x_34;
        x_34 = t;
        {
          ATerm n_51 = NULL;
          t = SSLgetAnnotations(not_null(k_51));
          {
            n_51 = t;
            if(((m_51 != NULL) && (m_51 != n_51)))
              _fail(n_51);
            else
              m_51 = n_51;
          }
        }
        t = x_34;
        {
          ATerm p_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_51));
          {
            p_51 = t;
            if(((o_51 != NULL) && (o_51 != p_51)))
              _fail(p_51);
            else
              o_51 = p_51;
          }
          t = not_null(o_51);
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
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym__2))
    {
      w_51 = ATgetArgument(v_51, 0);
      x_51 = ATgetArgument(v_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_34, not_null(w_51), not_null(x_51));
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
  ATerm y_34;
  y_34 = t;
  {
    ATerm o_6 (ATerm t)
    {
      t = term_d_35;
      t = j_86(t);
      return(t);
    }
    t = try_1(t, o_6);
  }
  t = y_34;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm f_52 = NULL;
      ATerm e_35;
      e_35 = t;
      {
        ATerm d_52 = NULL;
        ATerm e_52 = NULL;
        e_52 = t;
        if(((d_52 != NULL) && (d_52 != e_52)))
          _fail(e_52);
        else
          d_52 = e_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_29, not_null(d_52));
          t = set_config_0(t);
        }
      }
      t = e_35;
      {
        ATerm g_52 = NULL;
        g_52 = t;
        if(((f_52 != NULL) && (f_52 != g_52)))
          _fail(g_52);
        else
          f_52 = g_52;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_52));
      }
      return(t);
    }
    ATerm u_6 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = h_35;
              {
                t = j_86(t);
                t = Cons_2(t, _id, u_6);
              }
            }
          ;
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
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
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  ATerm p_35;
  p_35 = t;
  {
    ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
    q_52 = t;
    m_52 :
    if(match_cons(q_52, sym__3))
      {
        r_52 = ATgetArgument(q_52, 0);
        s_52 = ATgetArgument(q_52, 1);
        t_52 = ATgetArgument(q_52, 2);
        {
          if(((n_52 != NULL) && (n_52 != r_52)))
            _fail(r_52);
          else
            n_52 = r_52;
          {
            if(((o_52 != NULL) && (o_52 != s_52)))
              _fail(s_52);
            else
              o_52 = s_52;
            {
              if(((p_52 != NULL) && (p_52 != t_52)))
                _fail(t_52);
              else
                p_52 = t_52;
              t = SSL_table_put(not_null(n_52), not_null(o_52), not_null(p_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm w_52 = NULL;
  ATerm q_35;
  q_35 = t;
  {
    t = term_r_35;
    t = table_put_0(t);
  }
  t = q_35;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm s_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_86(t);
          ;
          LocalPopChoice(u_35);
        }
      else
        {
          t = s_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_6);
    {
      ATerm w_6 (ATerm t)
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_35;
            y_35 = t;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_35;
            {
              t = system_usage_0(t);
              {
                t = term_t_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            {
              ATerm y_6 (ATerm t)
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm x_52 = NULL;
                  x_52 = t;
                  if(((w_52 != NULL) && (w_52 != x_52)))
                    _fail(x_52);
                  else
                    w_52 = x_52;
                  return(t);
                }
                t = Undefined_1(t, z_6);
                return(t);
              }
              t = option_defined_1(t, y_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_52)), term_c_36));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_7;
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
        ATerm d_36;
        d_36 = t;
        {
          t = term_z_31;
          t = table_destroy_0(t);
        }
        t = d_36;
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
        ATerm e_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_84);
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = e_36;
            {
              ATerm h_36 = t;
              int m_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_36);
                }
              else
                {
                  t = h_36;
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
    ATerm n_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_82(t);
        ;
        LocalPopChoice(s_36);
      }
    else
      {
        t = n_36;
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
ATerm io_parse_pp_table_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      t = term_t_36;
      return(t);
    }
    ATerm n_7 (ATerm t)
    {
      t = term_u_36;
      return(t);
    }
    t = xtc_sglr_2(t, i_7, n_7);
    t = xtc_implode_asfix_0(t);
    return(t);
  }
  t = xtc_io_wrap_1(t, h_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_parse_pp_table_0(t);
  return(t);
}
