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
ATerm term_z_35;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_u_35;
ATerm term_k_35;
ATerm term_v_34;
ATerm term_n_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_l_33;
ATerm term_e_33;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_j_30;
ATerm term_y_29;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_m_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_h_25;
ATerm term_i_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_m_7;
ATerm term_j_7;
void init_constant_terms (void)
{
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_o_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_o_10);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_u_7, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_c_9, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_l_15, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_x_15, term_y_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_h_16, term_i_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_r_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_a_9, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_w_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_c_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_z_19, term_a_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_j_20, term_k_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_p_20, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_a_8, term_z_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_d_21, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_j_22);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_x_22);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_f_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_x_22);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_x_22);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_p_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_x_22);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__3, term_j_31, term_p_31, (ATerm) ATempty);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.pp.af", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm xtc_abox2text_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox_format_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm e_78 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm j_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_84 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm d_78 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm f_78 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm union_1 (ATerm, ATerm t_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm o_78 (ATerm));
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
ATerm WriteToFile_1 (ATerm, ATerm b_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm f_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm r_63 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm s_80 (ATerm));
ATerm assert_1 (ATerm, ATerm d_77 (ATerm));
ATerm obsolete_1 (ATerm, ATerm u_64 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm m_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_77 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_76 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_80 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm f_80 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm crush_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_78 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_82 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_84 (ATerm));
ATerm Program_1 (ATerm, ATerm t_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_83 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_64 (ATerm));
ATerm map_1 (ATerm, ATerm u_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_84 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_84 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_84 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm i_80 (ATerm));
ATerm io_pp_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm xtc_abox2text_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_j_7;
    return(t);
  }
  t = xtc_transform_2(t, c_0, pass_verbose_0);
  return(t);
}
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
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_0), not_null(x_0));
            ;
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
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
  t = term_m_7;
  {
    ATerm n_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = n_7;
        t = term_u_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_1), term_u_7);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_1)), term_m_7);
  return(t);
}
ATerm xtc_abox_format_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  t = xtc_transform_2(t, h_0, pass_verbose_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t = SSL_table_keys(not_null(u_2));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm f_3 = NULL;
        ATerm h_3 = NULL;
        f_3 = t;
        {
          ATerm i_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(f_3));
          {
            t = table_get_0(t);
            {
              i_3 = t;
              if(((h_3 != NULL) && (h_3 != i_3)))
                _fail(i_3);
              else
                h_3 = i_3;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(h_3));
        }
        return(t);
      }
      t = map_1(t, p_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    ATerm z_7;
    z_7 = t;
    {
      ATerm n_3 = NULL;
      ATerm o_3 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          o_3 = t;
          if(((n_3 != NULL) && (n_3 != o_3)))
            _fail(o_3);
          else
            n_3 = o_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), term_a_8);
        t = geq_0(t);
      }
    }
    t = z_7;
    t = e_78(t);
    return(t);
  }
  t = try_1(t, q_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_8;
  b_8 = t;
  {
    ATerm r_3 = NULL;
    ATerm s_3 = NULL;
    s_3 = t;
    if(((r_3 != NULL) && (r_3 != s_3)))
      _fail(s_3);
    else
      r_3 = s_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, not_null(r_3));
      t = printnl_0(t);
    }
  }
  t = b_8;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_3 = NULL;
  ATerm a_4 = NULL,b_4 = NULL;
  y_3 = t;
  {
    ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_3)));
    {
      t = table_get_0(t);
      {
        c_4 = t;
        w_3 :
        if(((ATgetType(c_4) == AT_LIST) && !(ATisEmpty(c_4))))
          {
            d_4 = ATgetFirst((ATermList) c_4);
            g_4 = (ATerm) ATgetNext((ATermList) c_4);
            x_3 :
            if(match_cons(d_4, sym__2))
              {
                e_4 = ATgetArgument(d_4, 0);
                f_4 = ATgetArgument(d_4, 1);
                {
                  if(((a_4 != NULL) && (a_4 != e_4)))
                    _fail(e_4);
                  else
                    a_4 = e_4;
                  if(((b_4 != NULL) && (b_4 != f_4)))
                    _fail(f_4);
                  else
                    b_4 = f_4;
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
    t = not_null(b_4);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
  n_4 = t;
  m_4 :
  if(match_cons(n_4, sym__2))
    {
      o_4 = ATgetArgument(n_4, 0);
      p_4 = ATgetArgument(n_4, 1);
      {
        ATerm s_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_4)));
        {
          t = table_get_0(t);
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
              t_4 = t;
              l_4 :
              if(match_cons(t_4, sym__2))
                {
                  u_4 = ATgetArgument(t_4, 0);
                  v_4 = ATgetArgument(t_4, 1);
                  {
                    if(((p_4 != NULL) && (p_4 != u_4)))
                      _fail(u_4);
                    else
                      p_4 = u_4;
                    if(((s_4 != NULL) && (s_4 != v_4)))
                      _fail(v_4);
                    else
                      s_4 = v_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_0);
          }
        }
        t = not_null(s_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm j_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = filter_1(t, j_76);
              return(t);
            }
            t = Cons_2(t, j_76, s_0);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = j_8;
            {
              ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
              a_5 = t;
              z_4 :
              if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
                {
                  b_5 = ATgetFirst((ATermList) a_5);
                  c_5 = (ATerm) ATgetNext((ATermList) a_5);
                  {
                    t = not_null(c_5);
                    t = filter_1(t, j_76);
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
ATerm repeat_1 (ATerm t, ATerm k_84 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = k_84(t);
      t = f_5(t);
      return(t);
    }
    t = try_1(t, t_0);
    return(t);
  }
  t = f_5(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm n_8;
  n_8 = t;
  {
    ATerm u_0 (ATerm t)
    {
      t = term_q_8;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm r_8 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_8;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, u_0);
  }
  t = n_8;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm s_8;
  s_8 = t;
  {
    ATerm h_5 = NULL;
    ATerm i_5 = NULL;
    i_5 = t;
    if(((h_5 != NULL) && (h_5 != i_5)))
      _fail(i_5);
    else
      h_5 = i_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATempty, not_null(h_5)));
      t = printnl_0(t);
    }
  }
  t = s_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm v_8;
  v_8 = t;
  {
    t = r_64(t);
    t = debug_0(t);
  }
  t = v_8;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_8;
    w_8 = t;
    {
      ATerm l_5 = NULL;
      ATerm m_5 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          m_5 = t;
          if(((l_5 != NULL) && (l_5 != m_5)))
            _fail(m_5);
          else
            l_5 = m_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_a_9);
        t = geq_0(t);
      }
    }
    t = w_8;
    t = d_78(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm b_9;
    b_9 = t;
    {
      ATerm p_5 = NULL;
      ATerm q_5 = NULL;
      t = term_m_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), term_c_9);
        t = geq_0(t);
      }
    }
    t = b_9;
    t = f_78(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t_5 :
  if(match_cons(u_5, sym__2))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      if(((v_5 != NULL) && (v_5 != w_5)))
        _fail(w_5);
      else
        v_5 = w_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
    {
      d_6 = ATgetFirst((ATermList) c_6);
      e_6 = (ATerm) ATgetNext((ATermList) c_6);
      {
        t = y_72(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm h_6 = NULL;
            h_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(h_6));
              t = x_72(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(e_6);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      {
        t = not_null(o_6);
        {
          ATerm t_6 (ATerm t)
          {
            ATerm d_9 = t;
            int i_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_6);
                ;
                LocalPopChoice(i_9);
              }
            else
              {
                t = d_9;
                {
                  ATerm j_9 = t;
                  int k_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(p_6);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_72, a_1);
                      t = t_6(t);
                      ;
                      LocalPopChoice(k_9);
                    }
                  else
                    {
                      t = j_9;
                      t = Cons_2(t, _id, t_6);
                    }
                }
              }
            return(t);
          }
          t = t_6(t);
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
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym__3))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      b_7 = ATgetArgument(y_6, 2);
      {
        ATerm l_9;
        l_9 = t;
        {
          ATerm f_7 = NULL;
          ATerm g_7 = NULL,i_7 = NULL;
          ATerm h_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(a_7));
          {
            ATerm m_9 = t;
            int n_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(n_9);
              }
            else
              {
                t = m_9;
                t = (ATerm) ATempty;
              }
            {
              h_7 = t;
              if(((g_7 != NULL) && (g_7 != h_7)))
                _fail(h_7);
              else
                g_7 = h_7;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(b_7));
            {
              t = union_0(t);
              {
                i_7 = t;
                if(((f_7 != NULL) && (f_7 != i_7)))
                  _fail(i_7);
                else
                  f_7 = i_7;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_6), not_null(a_7), not_null(f_7));
            t = set_0(t);
          }
        }
        t = l_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym__2))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      {
        t = not_null(s_7);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
            v_7 = t;
            o_7 :
            if(match_cons(v_7, sym__2))
              {
                w_7 = ATgetArgument(v_7, 0);
                x_7 = ATgetArgument(v_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_7), not_null(w_7), not_null(x_7));
                  t = o_78(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_1);
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
  ATerm d_8 = NULL;
  ATerm e_8 = NULL;
  e_8 = t;
  if(((d_8 != NULL) && (d_8 != e_8)))
    _fail(e_8);
  else
    d_8 = e_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), (ATerm) ATinsert(ATempty, term_t_9));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(x_9);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = w_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_10 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_10;
              }
            {
              ATerm c_1 (ATerm t)
              {
                t = term_b_10;
                return(t);
              }
              t = debug_1(t, c_1);
            }
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm d_1 (ATerm t)
              {
                t = term_i_10;
                return(t);
              }
              t = debug_1(t, d_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = term_j_10;
        return(t);
      }
      t = debug_1(t, f_1);
      return(t);
    }
    t = if_verbose5_1(t, e_1);
    {
      ATerm m_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_8)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_10;
        }
      {
        ATerm n_10;
        n_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_8, term_o_10, (ATerm) ATinsert(ATempty, not_null(i_8)));
          t = table_put_0(t);
        }
        t = n_10;
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              t = term_p_10;
              return(t);
            }
            t = debug_1(t, h_1);
            return(t);
          }
          t = if_verbose4_1(t, g_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm l_1 (ATerm t)
                {
                  t = term_t_10;
                  return(t);
                }
                t = say_1(t, l_1);
                return(t);
              }
              t = if_verbose6_1(t, i_1);
              {
                ATerm l_8 = NULL;
                l_8 = t;
                if(((k_8 != NULL) && (k_8 != l_8)))
                  _fail(l_8);
                else
                  k_8 = l_8;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(k_8));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm m_1 (ATerm t)
                      {
                        ATerm n_1 (ATerm t)
                        {
                          t = term_u_10;
                          return(t);
                        }
                        t = say_1(t, n_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, m_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_f_8, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_8)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                t = term_t_10;
                                return(t);
                              }
                              t = say_1(t, p_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, o_1);
                          }
                        }
                      }
                    }
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
  ATerm p_8 = NULL;
  p_8 = t;
  t = SSL_getenv(not_null(p_8));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_11;
            t = getenv_0(t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = term_g_11;
      return(t);
    }
    t = debug_1(t, r_1);
    return(t);
  }
  t = if_verbose5_1(t, q_1);
  {
    ATerm j_11;
    j_11 = t;
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_11;
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = debug_1(t, t_1);
        return(t);
      }
      t = if_verbose5_1(t, s_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = term_w_11;
          return(t);
        }
        t = debug_1(t, v_1);
        return(t);
      }
      t = if_verbose5_1(t, u_1);
      {
        t = xtc_load_0(t);
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = term_w_11;
                return(t);
              }
              t = debug_1(t, x_1);
              return(t);
            }
            t = if_verbose5_1(t, w_1);
          }
        }
      }
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm t_8 = NULL;
        ATerm u_8 = NULL;
        u_8 = t;
        if(((t_8 != NULL) && (t_8 != u_8)))
          _fail(u_8);
        else
          t_8 = u_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), not_null(t_8)), term_z_11);
          {
            t = error_0(t);
            {
              ATerm a_2 (ATerm t)
              {
                t = term_f_8;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm b_2 (ATerm t)
                    {
                      t = term_d_12;
                      return(t);
                    }
                    t = debug_1(t, b_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, a_2);
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
  ATerm y_8 = NULL,z_8 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_Stream_1))
    {
      z_8 = ATgetArgument(y_8, 0);
      t = SSL_read_term_from_stream(not_null(z_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm g_9 = NULL;
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL;
      ATerm f_9 = NULL;
      f_9 = t;
      if(((e_9 != NULL) && (e_9 != f_9)))
        _fail(f_9);
      else
        e_9 = f_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), term_g_12);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm c_2 (ATerm t)
        {
          t = term_h_12;
          return(t);
        }
        t = debug_1(t, c_2);
        _fail(t);
      }
    }
  {
    ATerm m_12;
    m_12 = t;
    {
      ATerm h_9 = NULL;
      t = read_from_stream_0(t);
      {
        h_9 = t;
        if(((g_9 != NULL) && (g_9 != h_9)))
          _fail(h_9);
        else
          g_9 = h_9;
      }
    }
    t = m_12;
    {
      t = fclose_0(t);
      t = not_null(g_9);
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_stdin_0))
    {
      ATerm r_9 = NULL;
      ATerm s_9 = NULL;
      t = term_q_12;
      {
        t = ReadFromFile_0(t);
        {
          s_9 = t;
          if(((r_9 != NULL) && (r_9 != s_9)))
            _fail(s_9);
          else
            r_9 = s_9;
        }
      }
      t = not_null(r_9);
    }
  else
    {
      if(match_cons(p_9, sym_FILE_1))
        {
          q_9 = ATgetArgument(p_9, 0);
          {
            ATerm u_9 = NULL;
            ATerm v_9 = NULL;
            t = not_null(q_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  v_9 = t;
                  if(((u_9 != NULL) && (u_9 != v_9)))
                    _fail(v_9);
                  else
                    u_9 = v_9;
                }
              }
            }
            t = not_null(u_9);
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  e_10 = t;
  c_10 :
  if(match_cons(e_10, sym__2))
    {
      f_10 = ATgetArgument(e_10, 0);
      h_10 = ATgetArgument(e_10, 1);
      d_10 :
      if(match_cons(f_10, sym_Stream_1))
        {
          g_10 = ATgetArgument(f_10, 0);
          {
            ATerm k_10 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_10), not_null(h_10));
            {
              ATerm l_10 = NULL;
              l_10 = t;
              if(((k_10 != NULL) && (k_10 != l_10)))
                _fail(l_10);
              else
                k_10 = l_10;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_10));
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
  ATerm r_10 = NULL,s_10 = NULL;
  ATerm y_10 (ATerm t)
  {
    t = SSL_fclose(not_null(s_10));
    return(t);
  }
  s_10 = t;
  q_10 :
  if(match_cons(s_10, sym_Stream_1))
    {
      r_10 = ATgetArgument(s_10, 0);
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(r_10));
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            t = y_10(t);
          }
      }
    }
  else
    {
      t = y_10(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym__2))
    {
      d_11 = ATgetArgument(c_11, 0);
      e_11 = ATgetArgument(c_11, 1);
      {
        ATerm h_11 = NULL;
        t = SSL_fopen(not_null(d_11), not_null(e_11));
        {
          ATerm i_11 = NULL;
          i_11 = t;
          if(((h_11 != NULL) && (h_11 != i_11)))
            _fail(i_11);
          else
            h_11 = i_11;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_11));
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
  ATerm m_11 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm n_11 = NULL;
    n_11 = t;
    if(((m_11 != NULL) && (m_11 != n_11)))
      _fail(n_11);
    else
      m_11 = n_11;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_11));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm q_11 = NULL;
  t = SSL_stdout_stream();
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
ATerm stderr_stream_0 (ATerm t)
{
  ATerm u_11 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(b_12, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(b_12, sym_stdin_0))
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
  ATerm l_12 = NULL;
  ATerm n_12 = NULL,o_12 = NULL;
  l_12 = t;
  {
    ATerm p_12 = NULL;
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
    t = not_null(l_12);
    {
      p_12 = t;
      {
        t = SSL_explode_term(not_null(p_12));
        {
          r_12 = t;
          i_12 :
          if(match_cons(r_12, sym__2))
            {
              s_12 = ATgetArgument(r_12, 0);
              t_12 = ATgetArgument(r_12, 1);
              j_12 :
              if(match_string(s_12, ""))
                {
                  k_12 :
                  if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
                    {
                      u_12 = ATgetFirst((ATermList) t_12);
                      v_12 = (ATerm) ATgetNext((ATermList) t_12);
                      {
                        if(((o_12 != NULL) && (o_12 != u_12)))
                          _fail(u_12);
                        else
                          o_12 = u_12;
                        if(((n_12 != NULL) && (n_12 != v_12)))
                          _fail(v_12);
                        else
                          n_12 = v_12;
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
    t = not_null(o_12);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym__2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            {
              ATerm a_13 = t;
              int i_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm g_13 = NULL,h_13 = NULL;
                    g_13 = t;
                    b_13 :
                    if(match_cons(g_13, sym_Path_1))
                      {
                        h_13 = ATgetArgument(g_13, 0);
                        t = not_null(h_13);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(i_13);
                }
              else
                {
                  t = a_13;
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
ATerm WriteToFile_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        ATerm u_13 = NULL,w_13 = NULL;
        t = not_null(q_13);
        {
          ATerm v_13 = NULL;
          v_13 = t;
          if(((u_13 != NULL) && (u_13 != v_13)))
            _fail(v_13);
          else
            u_13 = v_13;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), term_j_13);
            {
              t = open_stream_0(t);
              {
                ATerm x_13 = NULL;
                x_13 = t;
                if(((w_13 != NULL) && (w_13 != x_13)))
                  _fail(x_13);
                else
                  w_13 = x_13;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), not_null(r_13));
                  {
                    t = b_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(r_13);
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
  ATerm d_14 = NULL;
  ATerm f_14 = NULL;
  d_14 = t;
  {
    ATerm g_14 = NULL;
    t = xtc_new_file_0(t);
    {
      g_14 = t;
      {
        if(((f_14 != NULL) && (f_14 != g_14)))
          _fail(g_14);
        else
          f_14 = g_14;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), not_null(d_14));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(f_14);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_14));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, b_81, c_81);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  t = SSL_close_file(not_null(k_14));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym__2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      t = SSL_execvp(not_null(q_14), not_null(r_14));
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
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_int_to_string(not_null(w_14));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_UnknownSignal_1))
    {
      f_15 = ATgetArgument(e_15, 0);
      {
        ATerm j_15 = NULL;
        ATerm k_15 = NULL;
        t = not_null(f_15);
        {
          t = int_to_string_0(t);
          {
            k_15 = t;
            if(((j_15 != NULL) && (j_15 != k_15)))
              _fail(k_15);
            else
              j_15 = k_15;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_13), not_null(j_15)), term_k_13);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(e_15, sym_Signal_3))
        {
          f_15 = ATgetArgument(e_15, 0);
          g_15 = ATgetArgument(e_15, 1);
          h_15 = ATgetArgument(e_15, 2);
          {
            ATerm o_15 = NULL;
            ATerm p_15 = NULL;
            t = not_null(g_15);
            {
              t = int_to_string_0(t);
              {
                p_15 = t;
                if(((o_15 != NULL) && (o_15 != p_15)))
                  _fail(p_15);
                else
                  o_15 = p_15;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_15)), term_n_13), not_null(o_15)), term_m_13), not_null(f_15));
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
ATerm fetch_elem_1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm v_15 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm w_15 = NULL;
    t = f_69(t);
    {
      w_15 = t;
      if(((v_15 != NULL) && (v_15 != w_15)))
        _fail(w_15);
      else
        v_15 = w_15;
    }
    return(t);
  }
  t = fetch_1(t, e_2);
  t = not_null(v_15);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), term_j_21), term_f_21), term_b_21), term_x_20), term_s_20), term_l_20), term_d_20), term_r_19), term_l_19), term_v_18), term_r_18), term_j_18), term_b_18), term_m_17), term_g_17), term_a_17), term_w_16), term_j_16), term_z_15), term_t_15), term_n_15), term_c_15), term_y_14), term_t_14), term_m_14), term_h_14), term_a_14);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
            d_16 = t;
            a_16 :
            if(match_cons(d_16, sym_Signal_3))
              {
                e_16 = ATgetArgument(d_16, 0);
                f_16 = ATgetArgument(d_16, 1);
                g_16 = ATgetArgument(d_16, 2);
                if(((b_16 != NULL) && (b_16 != f_16)))
                  _fail(f_16);
                else
                  b_16 = f_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, f_2);
        }
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(b_16));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm o_21;
  o_21 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
      n_16 = t;
      m_16 :
      if(match_cons(n_16, sym_WaitStatus_3))
        {
          o_16 = ATgetArgument(n_16, 0);
          p_16 = ATgetArgument(n_16, 1);
          q_16 = ATgetArgument(n_16, 2);
          {
            ATerm t_16 = NULL;
            t = not_null(p_16);
            {
              ATerm q_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm s_16 = NULL;
                  s_16 = t;
                  k_16 :
                  if(!(match_int(s_16, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_21;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm u_16 = NULL;
                    u_16 = t;
                    if(((t_16 != NULL) && (t_16 != u_16)))
                      _fail(u_16);
                    else
                      t_16 = u_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_16)), term_r_21));
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
    t = try_1(t, g_2);
  }
  t = o_21;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = SSL_waitpid(not_null(y_16));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm))
{
  ATerm f_17 = NULL;
  ATerm h_17 = NULL;
  f_17 = t;
  {
    t = fork_0(t);
    {
      h_17 = t;
      {
        ATerm y_21 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_17 = NULL;
            j_17 = t;
            e_17 :
            if(match_int(j_17, 0))
              {
                t = not_null(f_17);
                t = p_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = y_21;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(f_17));
              t = q_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm r_63 (ATerm))
{
  ATerm s_17 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
    t_17 = t;
    r_17 :
    if(match_cons(t_17, sym__2))
      {
        u_17 = ATgetArgument(t_17, 0);
        v_17 = ATgetArgument(t_17, 1);
        {
          ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
          if(((s_17 != NULL) && (s_17 != v_17)))
            _fail(v_17);
          else
            s_17 = v_17;
          {
            t = not_null(u_17);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  x_17 = t;
                  p_17 :
                  if(match_cons(x_17, sym_WaitStatus_3))
                    {
                      y_17 = ATgetArgument(x_17, 0);
                      z_17 = ATgetArgument(x_17, 1);
                      a_18 = ATgetArgument(x_17, 2);
                      q_17 :
                      if(match_int(y_17, 0))
                        {
                          t = not_null(s_17);
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
  t = fork_2(t, r_63, h_2);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      {
        ATerm i_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(h_18));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, i_2);
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
ATerm xtc_command_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm e_22;
  e_22 = t;
  {
    ATerm o_18 = NULL;
    t = s_80(t);
    {
      t = xtc_find_warning_0(t);
      {
        o_18 = t;
        if(((n_18 != NULL) && (n_18 != o_18)))
          _fail(o_18);
        else
          n_18 = o_18;
      }
    }
  }
  t = e_22;
  {
    ATerm f_22;
    f_22 = t;
    {
      ATerm p_18 = NULL;
      ATerm q_18 = NULL;
      q_18 = t;
      if(((p_18 != NULL) && (p_18 != q_18)))
        _fail(q_18);
      else
        p_18 = q_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(p_18));
        t = call_0(t);
      }
    }
    t = f_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      {
        ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
        ATerm g_22;
        g_22 = t;
        {
          ATerm g_19 = NULL;
          ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
          t = d_77(t);
          {
            g_19 = t;
            {
              if(((d_19 != NULL) && (d_19 != g_19)))
                _fail(g_19);
              else
                d_19 = g_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_19), not_null(z_18), not_null(a_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_22 = t;
                    int i_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), term_j_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(i_22);
                      }
                    else
                      {
                        t = h_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_19 = t;
                      w_18 :
                      if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
                        {
                          i_19 = ATgetFirst((ATermList) h_19);
                          j_19 = (ATerm) ATgetNext((ATermList) h_19);
                          {
                            if(((e_19 != NULL) && (e_19 != i_19)))
                              _fail(i_19);
                            else
                              e_19 = i_19;
                            {
                              if(((f_19 != NULL) && (f_19 != j_19)))
                                _fail(j_19);
                              else
                                f_19 = j_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_19), term_j_22, (ATerm) ATinsert(CheckATermList(not_null(f_19)), (ATerm) ATinsert(CheckATermList(not_null(e_19)), not_null(z_18))));
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
        t = g_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm k_22;
  k_22 = t;
  {
    t = u_64(t);
    {
      ATerm j_2 (ATerm t)
      {
        t = term_l_22;
        return(t);
      }
      t = debug_1(t, j_2);
    }
  }
  t = k_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  ATerm b_20 (ATerm t)
  {
    ATerm o_22 = t;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
        w_19 = t;
        p_19 :
        if(match_cons(w_19, sym__2))
          {
            x_19 = ATgetArgument(w_19, 0);
            y_19 = ATgetArgument(w_19, 1);
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
        t = o_22;
      }
    {
      ATerm k_2 (ATerm t)
      {
        t = term_t_22;
        return(t);
      }
      t = obsolete_1(t, k_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), term_j_13);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm c_20 (ATerm t)
  {
    t = SSL_open_file(not_null(t_19), not_null(u_19));
    return(t);
  }
  s_19 = t;
  q_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_20(t);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            t = c_20(t);
          }
      }
    }
  else
    {
      t = b_20(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym__2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      t = SSL_access(not_null(g_20), not_null(h_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_20 = NULL;
  ATerm n_20 = NULL;
  n_20 = t;
  if(((m_20 != NULL) && (m_20 != n_20)))
    _fail(n_20);
  else
    m_20 = n_20;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), (ATerm) ATinsert(ATempty, term_w_22));
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
  ATerm q_20 = NULL;
  ATerm t_20 = NULL;
  t = term_x_22;
  {
    t = new_0(t);
    {
      t_20 = t;
      if(((q_20 != NULL) && (q_20 != t_20)))
        _fail(t_20);
      else
        q_20 = t_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), term_y_22);
    {
      t = conc_strings_0(t);
      {
        ATerm l_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, l_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm a_21 = NULL;
  t = new_file_0(t);
  {
    a_21 = t;
    {
      ATerm z_22;
      z_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), term_j_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), term_x_22);
            {
              ATerm m_2 (ATerm t)
              {
                t = term_d_23;
                return(t);
              }
              t = assert_1(t, m_2);
            }
          }
        }
      }
      t = z_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  p_21 :
  if(match_cons(s_21, sym_stdin_0))
    {
      ATerm u_21 = NULL;
      ATerm v_21 = NULL;
      ATerm w_21 = NULL;
      t = xtc_new_file_0(t);
      {
        v_21 = t;
        {
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
          {
            ATerm x_21 = NULL;
            t = o_0(t);
            {
              x_21 = t;
              if(((w_21 != NULL) && (w_21 != x_21)))
                _fail(x_21);
              else
                w_21 = x_21;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_21)), term_e_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(u_21);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_21));
    }
  else
    {
      if(match_cons(s_21, sym_FILE_1))
        {
          t_21 = ATgetArgument(s_21, 0);
          {
            ATerm z_21 = NULL;
            ATerm a_22 = NULL;
            t = not_null(t_21);
            {
              ATerm b_22 = NULL;
              t = xtc_new_file_0(t);
              {
                a_22 = t;
                {
                  if(((z_21 != NULL) && (z_21 != a_22)))
                    _fail(a_22);
                  else
                    z_21 = a_22;
                  {
                    ATerm c_22 = NULL;
                    t = o_0(t);
                    {
                      c_22 = t;
                      if(((b_22 != NULL) && (b_22 != c_22)))
                        _fail(c_22);
                      else
                        b_22 = c_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_21)), term_e_23), not_null(t_21)), term_i_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(z_21);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_21));
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
  ATerm n_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_stdin_0))
    {
      ATerm p_22 = NULL,r_22 = NULL;
      ATerm l_23;
      l_23 = t;
      {
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
      }
      t = l_23;
      {
        ATerm s_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(p_22));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_FILE_1))
    {
      c_23 = ATgetArgument(b_23, 0);
      {
        ATerm f_23 = NULL,h_23 = NULL;
        ATerm g_23 = NULL;
        t = SSLgetAnnotations(not_null(b_23));
        {
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
        }
        {
          t = not_null(c_23);
          {
            ATerm j_23 = NULL;
            t = m_61(t);
            {
              h_23 = t;
              {
                ATerm k_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(h_23)), not_null(f_23));
                {
                  k_23 = t;
                  if(((j_23 != NULL) && (j_23 != k_23)))
                    _fail(k_23);
                  else
                    j_23 = k_23;
                }
                t = not_null(j_23);
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
ATerm xtc_transform_2 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm))
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          t = stdin_0(t);
        }
      LocalPopChoice(n_23);
      t = xtc_transform_file_2(t, u_80, v_80);
    }
  else
    {
      t = m_23;
      t = xtc_transform_term_2(t, u_80, v_80);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      t = SSL_copy(not_null(s_23), not_null(t_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_stderr_0))
    {
      ATerm h_24 = NULL,j_24 = NULL;
      ATerm u_23;
      u_23 = t;
      {
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(b_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
      }
      t = u_23;
      {
        ATerm k_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(h_24));
        {
          k_24 = t;
          if(((j_24 != NULL) && (j_24 != k_24)))
            _fail(k_24);
          else
            j_24 = k_24;
        }
        t = not_null(j_24);
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
  ATerm v_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_stdout_0))
    {
      ATerm x_24 = NULL,z_24 = NULL;
      ATerm v_23;
      v_23 = t;
      {
        ATerm y_24 = NULL;
        t = SSLgetAnnotations(not_null(v_24));
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
      }
      t = v_23;
      {
        ATerm a_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(x_24));
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
        t = not_null(z_24);
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
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_FILE_1))
    {
      p_25 = ATgetArgument(o_25, 0);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL;
            ATerm s_25 = NULL;
            t = m_0(t);
            {
              s_25 = t;
              {
                if(((r_25 != NULL) && (r_25 != s_25)))
                  _fail(s_25);
                else
                  r_25 = s_25;
                {
                  ATerm y_23 = t;
                  int z_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(z_23);
                    }
                  else
                    {
                      t = y_23;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(r_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_25));
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_25 = NULL;
                  ATerm v_25 = NULL;
                  t = m_0(t);
                  {
                    v_25 = t;
                    {
                      if(((u_25 != NULL) && (u_25 != v_25)))
                        _fail(v_25);
                      else
                        u_25 = v_25;
                      {
                        ATerm e_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_24 = t;
                            int g_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(g_24);
                              }
                            else
                              {
                                t = f_24;
                                {
                                  ATerm l_24 = t;
                                  int m_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(m_24);
                                    }
                                  else
                                    {
                                      t = l_24;
                                      {
                                        ATerm w_25 = NULL;
                                        w_25 = t;
                                        if(((p_25 != NULL) && (p_25 != w_25)))
                                          _fail(w_25);
                                        else
                                          p_25 = w_25;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = e_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(u_25));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_25));
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  {
                    ATerm d_26 = NULL;
                    t = m_0(t);
                    {
                      d_26 = t;
                      if(((p_25 != NULL) && (p_25 != d_26)))
                        _fail(d_26);
                      else
                        p_25 = d_26;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_25));
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
  ATerm o_26 = NULL,p_26 = NULL,t_26 = NULL;
  o_26 = t;
  n_26 :
  if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
    {
      p_26 = ATgetFirst((ATermList) o_26);
      t_26 = (ATerm) ATgetNext((ATermList) o_26);
      t = not_null(t_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm n_24;
        n_24 = t;
        {
          ATerm f_27 = NULL;
          ATerm g_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(c_27));
          {
            ATerm o_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(p_24);
              }
            else
              {
                t = o_24;
                t = (ATerm) ATempty;
              }
            {
              g_27 = t;
              if(((f_27 != NULL) && (f_27 != g_27)))
                _fail(g_27);
              else
                f_27 = g_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_27), not_null(c_27), not_null(f_27));
            t = table_put_0(t);
          }
        }
        t = n_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    ATerm q_27 = NULL;
    ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
    t = a_77(t);
    {
      q_27 = t;
      {
        if(((p_27 != NULL) && (p_27 != q_27)))
          _fail(q_27);
        else
          p_27 = q_27;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_j_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_27 = t;
            m_27 :
            if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
              {
                s_27 = ATgetFirst((ATermList) r_27);
                t_27 = (ATerm) ATgetNext((ATermList) r_27);
                {
                  if(((o_27 != NULL) && (o_27 != s_27)))
                    _fail(s_27);
                  else
                    o_27 = s_27;
                  {
                    if(((n_27 != NULL) && (n_27 != t_27)))
                      _fail(t_27);
                    else
                      n_27 = t_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_27), term_j_22, not_null(n_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_27);
                          {
                            ATerm n_2 (ATerm t)
                            {
                              ATerm u_27 = NULL;
                              u_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(u_27));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_2);
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
  t = q_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = SSL_remove(not_null(a_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm))
{
  ATerm t_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_77(t);
      t = w_77(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = t_24;
      {
        t = w_77(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm f_28 = NULL;
  ATerm b_25;
  b_25 = t;
  {
    ATerm g_28 = NULL;
    ATerm h_28 = NULL;
    t = z_76(t);
    {
      g_28 = t;
      {
        if(((f_28 != NULL) && (f_28 != g_28)))
          _fail(g_28);
        else
          f_28 = g_28;
        {
          ATerm i_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), term_j_22);
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = (ATerm) ATempty;
              }
            {
              i_28 = t;
              if(((h_28 != NULL) && (h_28 != i_28)))
                _fail(i_28);
              else
                h_28 = i_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_28), term_j_22, (ATerm) ATinsert(CheckATermList(not_null(h_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm n_28 = NULL,o_28 = NULL;
  ATerm o_2 (ATerm t)
  {
    t = term_d_23;
    return(t);
  }
  t = begin_scope_1(t, o_2);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm e_25;
      e_25 = t;
      {
        ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_28 = t;
          m_28 :
          if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
            {
              q_28 = ATgetFirst((ATermList) p_28);
              r_28 = (ATerm) ATgetNext((ATermList) p_28);
              {
                if(((o_28 != NULL) && (o_28 != q_28)))
                  _fail(q_28);
                else
                  o_28 = q_28;
                {
                  if(((n_28 != NULL) && (n_28 != r_28)))
                    _fail(r_28);
                  else
                    n_28 = r_28;
                  {
                    t = not_null(o_28);
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, q_2);
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
      t = e_25;
      {
        ATerm r_2 (ATerm t)
        {
          t = term_d_23;
          return(t);
        }
        t = end_scope_1(t, r_2);
      }
      return(t);
    }
    t = restore_always_2(t, e_80, p_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        ATerm v_28 = NULL;
        t = term_i_23;
        {
          t = get_config_0(t);
          {
            v_28 = t;
            if(((u_28 != NULL) && (u_28 != v_28)))
              _fail(v_28);
            else
              u_28 = v_28;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_28));
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = term_q_12;
      }
    {
      t = f_80(t);
      {
        ATerm t_2 (ATerm t)
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_e_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = term_m_25;
            }
          return(t);
        }
        t = copy_to_1(t, t_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, s_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm y_28 = NULL;
    y_28 = t;
    x_28 :
    if(!(match_string(y_28, "-v")))
      {
        if(!(match_string(y_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_t_25;
    t = set_config_0(t);
    t = term_x_25;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm b_29 = NULL;
    b_29 = t;
    z_28 :
    if(!(match_string(b_29, "-k")))
      {
        if(!(match_string(b_29, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm z_25;
    z_25 = t;
    {
      ATerm c_29 = NULL;
      ATerm d_29 = NULL;
      t = string_to_int_0(t);
      {
        d_29 = t;
        if(((c_29 != NULL) && (c_29 != d_29)))
          _fail(d_29);
        else
          c_29 = d_29;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_26, not_null(c_29));
        t = set_config_0(t);
      }
    }
    t = z_25;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_b_26;
    return(t);
  }
  t = ArgOption_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  t = SSL_string_to_int(not_null(g_29));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm o_29 = NULL;
        o_29 = t;
        j_29 :
        if(!(match_string(o_29, "-S")))
          {
            if(!(match_string(o_29, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_g_26;
        t = set_config_0(t);
        t = term_h_26;
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_i_26;
        return(t);
      }
      t = Option_3(t, b_3, c_3, e_3);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm p_29 = NULL;
              p_29 = t;
              k_29 :
              if(!(match_string(p_29, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              ATerm s_29 = NULL;
              ATerm l_26;
              l_26 = t;
              {
                ATerm q_29 = NULL;
                ATerm r_29 = NULL;
                t = string_to_int_0(t);
                {
                  r_29 = t;
                  if(((q_29 != NULL) && (q_29 != r_29)))
                    _fail(r_29);
                  else
                    q_29 = r_29;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_7, not_null(q_29));
                  t = set_config_0(t);
                }
              }
              t = l_26;
              {
                ATerm t_29 = NULL;
                t_29 = t;
                if(((s_29 != NULL) && (s_29 != t_29)))
                  _fail(t_29);
                else
                  s_29 = t_29;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_29));
              }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_m_26;
              return(t);
            }
            t = ArgOption_3(t, g_3, j_3, k_3);
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm u_29 = NULL;
                u_29 = t;
                n_29 :
                if(!(match_string(u_29, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_r_26;
                t = set_config_0(t);
                t = term_s_26;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_u_26;
                return(t);
              }
              t = Option_3(t, l_3, m_3, p_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm a_30 = NULL;
    a_30 = t;
    x_29 :
    if(!(match_string(a_30, "-o")))
      {
        if(!(match_string(a_30, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm d_30 = NULL;
    ATerm d_27;
    d_27 = t;
    {
      ATerm b_30 = NULL;
      ATerm c_30 = NULL;
      c_30 = t;
      if(((b_30 != NULL) && (b_30 != c_30)))
        _fail(c_30);
      else
        b_30 = c_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_23, not_null(b_30));
        t = set_config_0(t);
      }
    }
    t = d_27;
    {
      ATerm e_30 = NULL;
      e_30 = t;
      if(((d_30 != NULL) && (d_30 != e_30)))
        _fail(e_30);
      else
        d_30 = e_30;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_30));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  t = ArgOption_3(t, q_3, t_3, u_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm i_30 = NULL;
          i_30 = t;
          h_30 :
          if(!(match_string(i_30, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_k_27;
          t = set_config_0(t);
          t = term_l_27;
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_v_27;
          return(t);
        }
        t = Option_3(t, v_3, z_3, h_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  o_30 = t;
  m_30 :
  if(match_string(o_30, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          p_30 = ATgetFirst((ATermList) o_30);
          q_30 = (ATerm) ATgetNext((ATermList) o_30);
          n_30 :
          if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
            {
              r_30 = ATgetFirst((ATermList) q_30);
              s_30 = (ATerm) ATgetNext((ATermList) q_30);
              {
                ATerm w_30 = NULL;
                ATerm w_27;
                w_27 = t;
                {
                  t = not_null(p_30);
                  t = j_0(t);
                }
                t = w_27;
                {
                  ATerm x_30 = NULL;
                  t = not_null(r_30);
                  {
                    t = k_0(t);
                    {
                      x_30 = t;
                      if(((w_30 != NULL) && (w_30 != x_30)))
                        _fail(x_30);
                      else
                        w_30 = x_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_30)), not_null(w_30));
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
  ATerm i_4 (ATerm t)
  {
    ATerm k_31 = NULL;
    k_31 = t;
    g_31 :
    if(!(match_string(k_31, "-i")))
      {
        if(!(match_string(k_31, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm n_31 = NULL;
    ATerm x_27;
    x_27 = t;
    {
      ATerm l_31 = NULL;
      ATerm m_31 = NULL;
      m_31 = t;
      if(((l_31 != NULL) && (l_31 != m_31)))
        _fail(m_31);
      else
        l_31 = m_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_23, not_null(l_31));
        t = set_config_0(t);
      }
    }
    t = x_27;
    {
      ATerm o_31 = NULL;
      o_31 = t;
      if(((n_31 != NULL) && (n_31 != o_31)))
        _fail(o_31);
      else
        n_31 = o_31;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_31));
    }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_y_27;
    return(t);
  }
  t = ArgOption_3(t, i_4, j_4, k_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = z_27;
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm e_28;
  e_28 = t;
  {
    ATerm s_31 = NULL;
    ATerm t_31 = NULL;
    t = term_x_22;
    {
      t = whoami_0(t);
      {
        t_31 = t;
        if(((s_31 != NULL) && (s_31 != t_31)))
          _fail(t_31);
        else
          s_31 = t_31;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_28), not_null(s_31)), term_j_28));
      {
        t = printnl_0(t);
        {
          t = term_u_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm w_31 = NULL;
  t = report_run_time_0(t);
  {
    ATerm x_31 = NULL;
    t = term_x_22;
    {
      t = whoami_0(t);
      {
        x_31 = t;
        if(((w_31 != NULL) && (w_31 != x_31)))
          _fail(x_31);
        else
          w_31 = x_31;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, term_l_28), not_null(w_31)));
      {
        t = printnl_0(t);
        {
          t = term_u_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_s_28;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  t = SSL_TicksToSeconds(not_null(a_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym__2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm t_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_32), not_null(h_32));
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = t_28;
            t = SSL_addr(not_null(g_32), not_null(h_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  ATerm a_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_75(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = a_29;
      {
        ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
        q_32 = t;
        p_32 :
        if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
          {
            r_32 = ATgetFirst((ATermList) q_32);
            s_32 = (ATerm) ATgetNext((ATermList) q_32);
            {
              ATerm v_32 = NULL;
              ATerm w_32 = NULL;
              t = not_null(s_32);
              {
                t = foldr_2(t, g_75, h_75);
                {
                  w_32 = t;
                  if(((v_32 != NULL) && (v_32 != w_32)))
                    _fail(w_32);
                  else
                    v_32 = w_32;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_32), not_null(v_32));
                t = h_75(t);
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
ATerm crush_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm d_33 = NULL;
  ATerm f_33 = NULL;
  d_33 = t;
  {
    ATerm g_33 = NULL;
    ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
    t = not_null(d_33);
    {
      g_33 = t;
      {
        t = SSL_explode_term(not_null(g_33));
        {
          i_33 = t;
          c_33 :
          if(match_cons(i_33, sym__2))
            {
              j_33 = ATgetArgument(i_33, 0);
              k_33 = ATgetArgument(i_33, 1);
              if(((f_33 != NULL) && (f_33 != k_33)))
                _fail(k_33);
              else
                f_33 = k_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_33);
      t = foldr_2(t, e_73, f_73);
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
    ATerm q_4 (ATerm t)
    {
      t = term_f_26;
      return(t);
    }
    t = crush_2(t, q_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      {
        ATerm f_29;
        f_29 = t;
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_33), not_null(s_33));
              ;
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = SSL_gtr(not_null(r_33), not_null(s_33));
            }
        }
        t = f_29;
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
  ATerm y_33 = NULL;
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
      z_33 = t;
      x_33 :
      if(match_cons(z_33, sym__2))
        {
          a_34 = ATgetArgument(z_33, 0);
          b_34 = ATgetArgument(z_33, 1);
          {
            if(((y_33 != NULL) && (y_33 != a_34)))
              _fail(a_34);
            else
              y_33 = a_34;
            if(((y_33 != NULL) && (y_33 != b_34)))
              _fail(b_34);
            else
              y_33 = b_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm v_29;
    v_29 = t;
    {
      ATerm e_34 = NULL;
      ATerm f_34 = NULL;
      t = term_m_7;
      {
        t = get_config_0(t);
        {
          f_34 = t;
          if(((e_34 != NULL) && (e_34 != f_34)))
            _fail(f_34);
          else
            e_34 = f_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_u_7);
        t = geq_0(t);
      }
    }
    t = v_29;
    t = a_78(t);
    return(t);
  }
  t = try_1(t, r_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm j_34 = NULL,l_34 = NULL;
    ATerm w_29;
    w_29 = t;
    {
      ATerm k_34 = NULL;
      t = run_time_0(t);
      {
        k_34 = t;
        if(((j_34 != NULL) && (j_34 != k_34)))
          _fail(k_34);
        else
          j_34 = k_34;
      }
    }
    t = w_29;
    {
      ATerm m_34 = NULL;
      t = term_x_22;
      {
        t = whoami_0(t);
        {
          m_34 = t;
          if(((l_34 != NULL) && (l_34 != m_34)))
            _fail(m_34);
          else
            l_34 = m_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_29), not_null(j_34)), term_m_13), not_null(l_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_f_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym_Version_0))
    {
      ATerm z_34 = NULL,d_35 = NULL;
      ATerm z_29;
      z_29 = t;
      {
        ATerm c_35 = NULL;
        t = SSLgetAnnotations(not_null(x_34));
        {
          c_35 = t;
          if(((z_34 != NULL) && (z_34 != c_35)))
            _fail(c_35);
          else
            z_34 = c_35;
        }
      }
      t = z_29;
      {
        ATerm e_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_34));
        {
          e_35 = t;
          if(((d_35 != NULL) && (d_35 != e_35)))
            _fail(e_35);
          else
            d_35 = e_35;
        }
        t = not_null(d_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
              {
                ATerm t_30 = t;
                int u_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(u_30);
                  }
                else
                  {
                    t = t_30;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, x_4);
      }
    }
  t = g_82(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = SSL_table_create(not_null(j_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  {
    ATerm v_30;
    v_30 = t;
    {
      t = term_y_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, not_null(n_35));
          t = table_put_0(t);
        }
      }
    }
    t = v_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  t = SSL_table_destroy(not_null(r_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_exit(not_null(x_35));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(((ATgetType(m_36) == AT_LIST) && ATisEmpty(m_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
        {
          n_36 = ATgetFirst((ATermList) m_36);
          o_36 = (ATerm) ATgetNext((ATermList) m_36);
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
  ATerm a_31;
  a_31 = t;
  {
    ATerm t_36 = NULL;
    ATerm f_37 = NULL;
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
          ATerm d_37 = NULL;
          ATerm e_37 = NULL;
          e_37 = t;
          if(((d_37 != NULL) && (d_37 != e_37)))
            _fail(e_37);
          else
            d_37 = e_37;
          t = (ATerm) ATinsert(ATempty, not_null(d_37));
        }
      }
    {
      f_37 = t;
      if(((t_36 != NULL) && (t_36 != f_37)))
        _fail(f_37);
      else
        t_36 = f_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_25, not_null(t_36));
      t = printnl_0(t);
    }
  }
  t = a_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  q_37 = t;
  n_37 :
  if(((ATgetType(q_37) == AT_LIST) && !(ATisEmpty(q_37))))
    {
      o_37 = ATgetFirst((ATermList) q_37);
      p_37 = (ATerm) ATgetNext((ATermList) q_37);
      {
        ATerm y_37 = NULL;
        t = not_null(p_37);
        {
          ATerm d_31;
          d_31 = t;
          {
            ATerm z_37 = NULL,b_38 = NULL,h_38 = NULL;
            ATerm e_31;
            e_31 = t;
            {
              ATerm a_38 = NULL;
              t = i_0(t);
              {
                a_38 = t;
                if(((z_37 != NULL) && (z_37 != a_38)))
                  _fail(a_38);
                else
                  z_37 = a_38;
              }
            }
            t = e_31;
            {
              ATerm g_38 = NULL;
              t = not_null(o_37);
              {
                t = g_0(t);
                {
                  g_38 = t;
                  if(((b_38 != NULL) && (b_38 != g_38)))
                    _fail(g_38);
                  else
                    b_38 = g_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_37)), not_null(b_38));
                {
                  h_38 = t;
                  if(((y_37 != NULL) && (y_37 != h_38)))
                    _fail(h_38);
                  else
                    y_37 = h_38;
                }
              }
            }
          }
          t = d_31;
          {
            ATerm y_4 (ATerm t)
            {
              t = not_null(y_37);
              return(t);
            }
            t = reverse_acc_2(t, g_0, y_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_37) == AT_LIST) && ATisEmpty(q_37)))
        {
          {
            t = term_x_22;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym_Program_1))
    {
      d_39 = ATgetArgument(c_39, 0);
      {
        ATerm l_39 = NULL,r_39 = NULL;
        ATerm q_39 = NULL;
        t = SSLgetAnnotations(not_null(c_39));
        {
          q_39 = t;
          if(((l_39 != NULL) && (l_39 != q_39)))
            _fail(q_39);
          else
            l_39 = q_39;
        }
        {
          t = not_null(d_39);
          {
            ATerm t_39 = NULL;
            t = t_61(t);
            {
              r_39 = t;
              {
                ATerm u_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_39)), not_null(l_39));
                {
                  u_39 = t;
                  if(((t_39 != NULL) && (t_39 != u_39)))
                    _fail(u_39);
                  else
                    t_39 = u_39;
                }
                t = not_null(t_39);
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
  ATerm d_40 = NULL;
  ATerm f_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = NULL;
      t = term_s_28;
      {
        t = get_config_0(t);
        {
          g_40 = t;
          if(((d_40 != NULL) && (d_40 != g_40)))
            _fail(g_40);
          else
            d_40 = g_40;
        }
      }
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = f_31;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            ATerm h_40 = NULL;
            h_40 = t;
            if(((d_40 != NULL) && (d_40 != h_40)))
              _fail(h_40);
            else
              d_40 = h_40;
            return(t);
          }
          t = Program_1(t, g_5);
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = not_null(d_40);
        return(t);
      }
      t = short_description_1(t, k_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_5);
    {
      t = term_i_31;
      {
        t = echo_0(t);
        {
          t = term_q_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm i_40 = NULL;
                  ATerm j_40 = NULL;
                  j_40 = t;
                  if(((i_40 != NULL) && (i_40 != j_40)))
                    _fail(j_40);
                  else
                    i_40 = j_40;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_40)), term_r_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_5);
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm k_40 = NULL;
                    ATerm l_40 = NULL;
                    ATerm r_5 (ATerm t)
                    {
                      t = not_null(d_40);
                      return(t);
                    }
                    t = long_description_1(t, r_5);
                    {
                      l_40 = t;
                      if(((k_40 != NULL) && (k_40 != l_40)))
                        _fail(l_40);
                      else
                        k_40 = l_40;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_40)), term_u_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_5);
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
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym__2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm v_31;
        v_31 = t;
        t = SSL_printnl(not_null(x_40), not_null(y_40));
        t = v_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm u_41 = NULL,v_41 = NULL;
  u_41 = t;
  r_41 :
  if(match_cons(u_41, sym_Undefined_1))
    {
      v_41 = ATgetArgument(u_41, 0);
      {
        ATerm z_41 = NULL,e_42 = NULL;
        ATerm a_42 = NULL;
        t = SSLgetAnnotations(not_null(u_41));
        {
          a_42 = t;
          if(((z_41 != NULL) && (z_41 != a_42)))
            _fail(a_42);
          else
            z_41 = a_42;
        }
        {
          t = not_null(v_41);
          {
            ATerm g_42 = NULL;
            t = u_61(t);
            {
              e_42 = t;
              {
                ATerm h_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_42)), not_null(z_41));
                {
                  h_42 = t;
                  if(((g_42 != NULL) && (g_42 != h_42)))
                    _fail(h_42);
                  else
                    g_42 = h_42;
                }
                t = not_null(g_42);
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
ATerm fetch_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm s_42 (ATerm t)
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_69, _id);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = Cons_2(t, _id, s_42);
      }
    return(t);
  }
  t = s_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_83 (ATerm))
{
  t = fetch_1(t, b_83);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym_Help_0))
    {
      ATerm z_42 = NULL,f_43 = NULL;
      ATerm b_32;
      b_32 = t;
      {
        ATerm e_43 = NULL;
        t = SSLgetAnnotations(not_null(x_42));
        {
          e_43 = t;
          if(((z_42 != NULL) && (z_42 != e_43)))
            _fail(e_43);
          else
            z_42 = e_43;
        }
      }
      t = b_32;
      {
        ATerm g_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_42));
        {
          g_43 = t;
          if(((f_43 != NULL) && (f_43 != g_43)))
            _fail(g_43);
          else
            f_43 = g_43;
        }
        t = not_null(f_43);
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
  ATerm l_43 = NULL;
  l_43 = t;
  t = SSL_implode_string(not_null(l_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
        q_43 = t;
        p_43 :
        if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
          {
            r_43 = ATgetFirst((ATermList) q_43);
            s_43 = (ATerm) ATgetNext((ATermList) q_43);
            {
              t = not_null(r_43);
              {
                ATerm s_5 (ATerm t)
                {
                  t = not_null(s_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_5);
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
  ATerm c_44 = NULL;
  ATerm e_44 = NULL;
  c_44 = t;
  {
    ATerm f_44 = NULL;
    ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
    t = not_null(c_44);
    {
      f_44 = t;
      {
        t = SSL_explode_term(not_null(f_44));
        {
          h_44 = t;
          a_44 :
          if(match_cons(h_44, sym__2))
            {
              i_44 = ATgetArgument(h_44, 0);
              j_44 = ATgetArgument(h_44, 1);
              b_44 :
              if(match_string(i_44, ""))
                {
                  if(((e_44 != NULL) && (e_44 != j_44)))
                    _fail(j_44);
                  else
                    e_44 = j_44;
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
      t = not_null(e_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm n_44 (ATerm t)
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_44);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        {
          t = Nil_0(t);
          t = j_69(t);
        }
      }
    return(t);
  }
  t = n_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym__2))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      {
        t = not_null(r_44);
        {
          ATerm x_5 (ATerm t)
          {
            t = not_null(s_44);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  t = SSL_explode_string(not_null(x_44));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym__2))
    {
      h_45 = ATgetArgument(g_45, 0);
      i_45 = ATgetArgument(g_45, 1);
      {
        ATerm m_45 = NULL,o_45 = NULL;
        ATerm n_45 = NULL;
        t = SSLgetAnnotations(not_null(g_45));
        {
          n_45 = t;
          if(((m_45 != NULL) && (m_45 != n_45)))
            _fail(n_45);
          else
            m_45 = n_45;
        }
        {
          t = not_null(h_45);
          {
            ATerm q_45 = NULL;
            t = d_55(t);
            {
              o_45 = t;
              {
                t = not_null(i_45);
                {
                  ATerm s_45 = NULL;
                  t = e_55(t);
                  {
                    q_45 = t;
                    {
                      ATerm t_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_45), not_null(q_45)), not_null(m_45));
                      {
                        t_45 = t;
                        if(((s_45 != NULL) && (s_45 != t_45)))
                          _fail(t_45);
                        else
                          s_45 = t_45;
                      }
                      t = not_null(s_45);
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
ATerm debug_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm m_32;
  m_32 = t;
  {
    ATerm b_46 = NULL,d_46 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm c_46 = NULL;
      t = n_64(t);
      {
        c_46 = t;
        if(((b_46 != NULL) && (b_46 != c_46)))
          _fail(c_46);
        else
          b_46 = c_46;
      }
    }
    t = n_32;
    {
      ATerm e_46 = NULL;
      e_46 = t;
      if(((d_46 != NULL) && (d_46 != e_46)))
        _fail(e_46);
      else
        d_46 = e_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_46)), not_null(b_46)));
        t = printnl_0(t);
      }
    }
  }
  t = m_32;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm h_46 (ATerm t)
  {
    ATerm o_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = o_32;
        t = Cons_2(t, u_68, h_46);
      }
    return(t);
  }
  t = h_46(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_46 = NULL;
  j_46 = t;
  t = SSL_is_string(not_null(j_46));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = u_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_5);
            ;
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            {
              ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
              s_46 = t;
              r_46 :
              if(match_cons(s_46, sym_Path_1))
                {
                  t_46 = ATgetArgument(s_46, 0);
                  t = not_null(t_46);
                }
              else
                {
                  if(match_cons(s_46, sym_Var_1))
                    {
                      t_46 = ATgetArgument(s_46, 0);
                      {
                        t = not_null(t_46);
                        {
                          ATerm a_33 = t;
                          int b_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(b_33);
                            }
                          else
                            {
                              t = a_33;
                              {
                                ATerm z_5 (ATerm t)
                                {
                                  t = term_e_33;
                                  return(t);
                                }
                                t = debug_1(t, z_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_46, sym_Prefix_2))
                        {
                          t_46 = ATgetArgument(s_46, 0);
                          u_46 = ATgetArgument(s_46, 1);
                          {
                            ATerm z_46 = NULL,b_47 = NULL;
                            ATerm h_33;
                            h_33 = t;
                            {
                              ATerm a_47 = NULL;
                              t = not_null(t_46);
                              {
                                t = eval_config_0(t);
                                {
                                  a_47 = t;
                                  if(((z_46 != NULL) && (z_46 != a_47)))
                                    _fail(a_47);
                                  else
                                    z_46 = a_47;
                                }
                              }
                            }
                            t = h_33;
                            {
                              ATerm c_47 = NULL;
                              t = not_null(u_46);
                              {
                                t = eval_config_0(t);
                                {
                                  c_47 = t;
                                  if(((b_47 != NULL) && (b_47 != c_47)))
                                    _fail(c_47);
                                  else
                                    b_47 = c_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_46), not_null(b_47));
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
  ATerm k_47 = NULL;
  k_47 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(k_47));
    {
      t = table_get_0(t);
      {
        ATerm a_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_33;
            m_33 = t;
            {
              ATerm m_47 = NULL;
              ATerm n_47 = NULL;
              n_47 = t;
              if(((m_47 != NULL) && (m_47 != n_47)))
                _fail(n_47);
              else
                m_47 = n_47;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_33, not_null(k_47), not_null(m_47));
                t = table_put_0(t);
              }
            }
            t = m_33;
          }
          return(t);
        }
        t = try_1(t, a_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_77(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_47 = NULL,u_47 = NULL,v_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym__2))
    {
      u_47 = ATgetArgument(s_47, 0);
      v_47 = ATgetArgument(s_47, 1);
      t = SSL_table_get(not_null(u_47), not_null(v_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  c_48 = t;
  b_48 :
  if(match_cons(c_48, sym__3))
    {
      d_48 = ATgetArgument(c_48, 0);
      e_48 = ATgetArgument(c_48, 1);
      f_48 = ATgetArgument(c_48, 2);
      {
        ATerm t_33;
        t_33 = t;
        {
          ATerm j_48 = NULL;
          ATerm k_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_48), not_null(e_48));
          {
            ATerm u_33 = t;
            int v_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_33);
              }
            else
              {
                t = u_33;
                t = (ATerm) ATempty;
              }
            {
              k_48 = t;
              if(((j_48 != NULL) && (j_48 != k_48)))
                _fail(k_48);
              else
                j_48 = k_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_48), not_null(e_48), (ATerm) ATinsert(CheckATermList(not_null(j_48)), not_null(f_48)));
            t = table_put_0(t);
          }
        }
        t = t_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm o_48 = NULL;
  ATerm p_48 = NULL;
  t = term_x_22;
  {
    t = g_84(t);
    {
      p_48 = t;
      if(((o_48 != NULL) && (o_48 != p_48)))
        _fail(p_48);
      else
        o_48 = p_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_p_31, not_null(o_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  u_48 :
  if(match_string(v_48, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
        {
          w_48 = ATgetFirst((ATermList) v_48);
          x_48 = (ATerm) ATgetNext((ATermList) v_48);
          {
            ATerm a_49 = NULL;
            ATerm w_33;
            w_33 = t;
            {
              t = not_null(w_48);
              t = a_0(t);
            }
            t = w_33;
            {
              ATerm b_49 = NULL;
              t = term_x_22;
              {
                t = b_0(t);
                {
                  b_49 = t;
                  if(((a_49 != NULL) && (a_49 != b_49)))
                    _fail(b_49);
                  else
                    a_49 = b_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_48)), not_null(a_49));
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
  ATerm f_6 (ATerm t)
  {
    ATerm g_49 = NULL;
    g_49 = t;
    f_49 :
    if(!(match_string(g_49, "--help")))
      {
        if(!(match_string(g_49, "-h")))
          {
            if(!(match_string(g_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_c_34;
    {
      t = set_config_0(t);
      t = term_d_34;
    }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_g_34;
    return(t);
  }
  t = Option_3(t, f_6, g_6, i_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
    {
      k_49 = ATgetFirst((ATermList) j_49);
      l_49 = (ATerm) ATgetNext((ATermList) j_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  u_49 :
  if(((ATgetType(v_49) == AT_LIST) && !(ATisEmpty(v_49))))
    {
      w_49 = ATgetFirst((ATermList) v_49);
      x_49 = (ATerm) ATgetNext((ATermList) v_49);
      {
        ATerm h_50 = NULL,j_50 = NULL;
        ATerm i_50 = NULL;
        t = SSLgetAnnotations(not_null(v_49));
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
        {
          t = not_null(w_49);
          {
            ATerm l_50 = NULL;
            t = m_56(t);
            {
              j_50 = t;
              {
                t = not_null(x_49);
                {
                  ATerm n_50 = NULL;
                  t = n_56(t);
                  {
                    l_50 = t;
                    {
                      ATerm o_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_50)), not_null(j_50)), not_null(h_50));
                      {
                        o_50 = t;
                        if(((n_50 != NULL) && (n_50 != o_50)))
                          _fail(o_50);
                        else
                          n_50 = o_50;
                      }
                      t = not_null(n_50);
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
  ATerm y_50 = NULL;
  y_50 = t;
  x_50 :
  if(((ATgetType(y_50) == AT_LIST) && ATisEmpty(y_50)))
    {
      {
        ATerm a_51 = NULL,c_51 = NULL;
        ATerm h_34;
        h_34 = t;
        {
          ATerm b_51 = NULL;
          t = SSLgetAnnotations(not_null(y_50));
          {
            b_51 = t;
            if(((a_51 != NULL) && (a_51 != b_51)))
              _fail(b_51);
            else
              a_51 = b_51;
          }
        }
        t = h_34;
        {
          ATerm d_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_51));
          {
            d_51 = t;
            if(((c_51 != NULL) && (c_51 != d_51)))
              _fail(d_51);
            else
              c_51 = d_51;
          }
          t = not_null(c_51);
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
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  i_51 :
  if(match_cons(j_51, sym__2))
    {
      k_51 = ATgetArgument(j_51, 0);
      l_51 = ATgetArgument(j_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_33, not_null(k_51), not_null(l_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm i_34;
  i_34 = t;
  {
    ATerm j_6 (ATerm t)
    {
      t = term_n_34;
      t = e_84(t);
      return(t);
    }
    t = try_1(t, j_6);
  }
  t = i_34;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm t_51 = NULL;
      ATerm o_34;
      o_34 = t;
      {
        ATerm r_51 = NULL;
        ATerm s_51 = NULL;
        s_51 = t;
        if(((r_51 != NULL) && (r_51 != s_51)))
          _fail(s_51);
        else
          r_51 = s_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_28, not_null(r_51));
          t = set_config_0(t);
        }
      }
      t = o_34;
      {
        ATerm u_51 = NULL;
        u_51 = t;
        if(((t_51 != NULL) && (t_51 != u_51)))
          _fail(u_51);
        else
          t_51 = u_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_51));
      }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              {
                t = e_84(t);
                t = Cons_2(t, _id, l_6);
              }
            }
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_6, l_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  ATerm t_34;
  t_34 = t;
  {
    ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
    d_52 = t;
    z_51 :
    if(match_cons(d_52, sym__3))
      {
        e_52 = ATgetArgument(d_52, 0);
        f_52 = ATgetArgument(d_52, 1);
        g_52 = ATgetArgument(d_52, 2);
        {
          if(((a_52 != NULL) && (a_52 != e_52)))
            _fail(e_52);
          else
            a_52 = e_52;
          {
            if(((b_52 != NULL) && (b_52 != f_52)))
              _fail(f_52);
            else
              b_52 = f_52;
            {
              if(((c_52 != NULL) && (c_52 != g_52)))
                _fail(g_52);
              else
                c_52 = g_52;
              t = SSL_table_put(not_null(a_52), not_null(b_52), not_null(c_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm j_52 = NULL;
  ATerm u_34;
  u_34 = t;
  {
    t = term_v_34;
    t = table_put_0(t);
  }
  t = u_34;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm y_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_84(t);
          ;
          LocalPopChoice(a_35);
        }
      else
        {
          t = y_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_6);
    {
      ATerm r_6 (ATerm t)
      {
        ATerm b_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_35;
            g_35 = t;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = h_35;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_35;
            {
              t = system_usage_0(t);
              {
                t = term_f_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = b_35;
            {
              ATerm s_6 (ATerm t)
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm k_52 = NULL;
                  k_52 = t;
                  if(((j_52 != NULL) && (j_52 != k_52)))
                    _fail(k_52);
                  else
                    j_52 = k_52;
                  return(t);
                }
                t = Undefined_1(t, u_6);
                return(t);
              }
              t = option_defined_1(t, s_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_52)), term_k_35));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_u_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_6);
      {
        ATerm l_35;
        l_35 = t;
        {
          t = term_j_31;
          t = table_destroy_0(t);
        }
        t = l_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  t = parse_options_1(t, i_82);
  {
    t = store_options_0(t);
    {
      t = k_82(t);
      {
        ATerm m_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_82);
            ;
            LocalPopChoice(o_35);
          }
        else
          {
            t = m_35;
            {
              ATerm p_35 = t;
              int q_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_82(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(q_35);
                }
              else
                {
                  t = p_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  t = option_wrap_4(t, m_82, default_usage_0, _id, n_82);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80(t);
        ;
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    t = xtc_io_1(t, k_80);
    return(t);
  }
  t = option_wrap_2(t, v_6, w_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm i_80 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, i_80);
  return(t);
}
ATerm io_pp_pp_table_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm d_7 (ATerm t)
    {
      t = term_u_35;
      return(t);
    }
    ATerm e_7 (ATerm t)
    {
      ATerm o_52 = NULL,q_52 = NULL;
      ATerm v_35;
      v_35 = t;
      {
        ATerm p_52 = NULL;
        t = term_w_35;
        {
          t = xtc_find_0(t);
          {
            p_52 = t;
            if(((o_52 != NULL) && (o_52 != p_52)))
              _fail(p_52);
            else
              o_52 = p_52;
          }
        }
      }
      t = v_35;
      {
        ATerm r_52 = NULL;
        t = term_y_35;
        {
          t = xtc_find_0(t);
          {
            r_52 = t;
            if(((q_52 != NULL) && (q_52 != r_52)))
              _fail(r_52);
            else
              q_52 = r_52;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_52)), term_z_35), not_null(o_52)), term_z_35);
      }
      return(t);
    }
    t = xtc_transform_2(t, d_7, e_7);
    {
      t = xtc_abox_format_0(t);
      t = xtc_abox2text_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, c_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_pp_pp_table_0(t);
  return(t);
}
