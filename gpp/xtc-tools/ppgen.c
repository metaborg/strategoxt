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
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
ATerm term_u_37;
ATerm term_d_37;
ATerm term_t_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_j_36;
ATerm term_v_35;
ATerm term_r_35;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_v_32;
ATerm term_t_32;
ATerm term_l_32;
ATerm term_a_32;
ATerm term_g_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_l_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_h_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_j_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_l_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_l_26;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_y_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_n_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_q_7;
void init_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_8, term_v_7, term_s_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_8, term_z_8, term_a_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_h_9, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_q_9, term_r_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_n_10, term_o_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_d_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_s_12, term_t_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_h_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_s_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_b_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_p_15, term_q_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_z_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_e_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_c_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_m_22);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_g_18);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_s_18);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_s_18);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_s_18);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_u_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_l_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_t_33);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_s_18);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__3, term_s_33, term_t_33, (ATerm) ATempty);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm i_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_83 (ATerm), ATerm n_83 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm m_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm w_63 (ATerm), ATerm x_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm y_63 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_83 (ATerm));
ATerm assert_1 (ATerm, ATerm o_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_65 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm t_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm n_80 (ATerm));
ATerm pass_v_verbose_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_80 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm q_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm o_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm union_1 (ATerm, ATerm a_73 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_80 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm access_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_sglr_1 (ATerm, ATerm w_83 (ATerm));
ATerm xtc_parse_sdf_0 (ATerm);
ATerm xtc_implode_asfix_0 (ATerm);
ATerm pre_process_sdf_0 (ATerm);
ATerm get_input_type_0 (ATerm);
ATerm ppgen_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_80 (ATerm), ATerm h_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm k_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_82 (ATerm));
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
ATerm ppgen_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm crush_2 (ATerm, ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_86 (ATerm));
ATerm Program_1 (ATerm, ATerm a_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_64 (ATerm));
ATerm map_1 (ATerm, ATerm b_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm io_ppgen_0 (ATerm);
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
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = term_v_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_1), term_v_7);
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
ATerm read_from_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym_stdin_0))
    {
      ATerm d_3 = NULL;
      ATerm e_3 = NULL;
      t = term_x_7;
      {
        t = ReadFromFile_0(t);
        {
          e_3 = t;
          if(((d_3 != NULL) && (d_3 != e_3)))
            _fail(e_3);
          else
            d_3 = e_3;
        }
      }
      t = not_null(d_3);
    }
  else
    {
      if(match_cons(b_3, sym_FILE_1))
        {
          c_3 = ATgetArgument(b_3, 0);
          {
            ATerm g_3 = NULL;
            ATerm h_3 = NULL;
            t = not_null(c_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  h_3 = t;
                  if(((g_3 != NULL) && (g_3 != h_3)))
                    _fail(h_3);
                  else
                    g_3 = h_3;
                }
              }
            }
            t = not_null(g_3);
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
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  q_3 = t;
  o_3 :
  if(match_cons(q_3, sym__2))
    {
      r_3 = ATgetArgument(q_3, 0);
      t_3 = ATgetArgument(q_3, 1);
      p_3 :
      if(match_cons(r_3, sym_Stream_1))
        {
          s_3 = ATgetArgument(r_3, 0);
          {
            ATerm w_3 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(s_3), not_null(t_3));
            {
              ATerm x_3 = NULL;
              x_3 = t;
              if(((w_3 != NULL) && (w_3 != x_3)))
                _fail(x_3);
              else
                w_3 = x_3;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_3));
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
ATerm WriteToFile_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      {
        ATerm j_4 = NULL,l_4 = NULL;
        t = not_null(f_4);
        {
          ATerm k_4 = NULL;
          k_4 = t;
          if(((j_4 != NULL) && (j_4 != k_4)))
            _fail(k_4);
          else
            j_4 = k_4;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), term_z_7);
            {
              t = open_stream_0(t);
              {
                ATerm m_4 = NULL;
                m_4 = t;
                if(((l_4 != NULL) && (l_4 != m_4)))
                  _fail(m_4);
                else
                  l_4 = m_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), not_null(g_4));
                  {
                    t = i_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(g_4);
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
  ATerm s_4 = NULL;
  ATerm u_4 = NULL;
  s_4 = t;
  {
    ATerm v_4 = NULL;
    t = xtc_new_file_0(t);
    {
      v_4 = t;
      {
        if(((u_4 != NULL) && (u_4 != v_4)))
          _fail(v_4);
        else
          u_4 = v_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), not_null(s_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(u_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm m_83 (ATerm), ATerm n_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_83, n_83);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  t = SSL_close_file(not_null(z_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      t = SSL_execvp(not_null(f_5), not_null(g_5));
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
  ATerm l_5 = NULL;
  l_5 = t;
  t = SSL_int_to_string(not_null(l_5));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym_UnknownSignal_1))
    {
      u_5 = ATgetArgument(t_5, 0);
      {
        ATerm y_5 = NULL;
        ATerm z_5 = NULL;
        t = not_null(u_5);
        {
          t = int_to_string_0(t);
          {
            z_5 = t;
            if(((y_5 != NULL) && (y_5 != z_5)))
              _fail(z_5);
            else
              y_5 = z_5;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_8), not_null(y_5)), term_a_8);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(t_5, sym_Signal_3))
        {
          u_5 = ATgetArgument(t_5, 0);
          v_5 = ATgetArgument(t_5, 1);
          w_5 = ATgetArgument(t_5, 2);
          {
            ATerm d_6 = NULL;
            ATerm e_6 = NULL;
            t = not_null(v_5);
            {
              t = int_to_string_0(t);
              {
                e_6 = t;
                if(((d_6 != NULL) && (d_6 != e_6)))
                  _fail(e_6);
                else
                  d_6 = e_6;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_5)), term_d_8), not_null(d_6)), term_c_8), not_null(u_5));
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
ATerm fetch_elem_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm k_6 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm l_6 = NULL;
    t = m_69(t);
    {
      l_6 = t;
      if(((k_6 != NULL) && (k_6 != l_6)))
        _fail(l_6);
      else
        k_6 = l_6;
    }
    return(t);
  }
  t = fetch_1(t, c_0);
  t = not_null(k_6);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  {
    ATerm l_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), term_x_16), term_s_16), term_k_16), term_a_16), term_s_15), term_j_15), term_w_14), term_l_14), term_c_14), term_w_13), term_o_13), term_k_13), term_d_13), term_x_12), term_n_12), term_j_12), term_z_11), term_v_11), term_n_11), term_c_11), term_y_10), term_r_10), term_d_10), term_z_9), term_j_9), term_b_9), term_x_8);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
            s_6 = t;
            p_6 :
            if(match_cons(s_6, sym_Signal_3))
              {
                t_6 = ATgetArgument(s_6, 0);
                u_6 = ATgetArgument(s_6, 1);
                v_6 = ATgetArgument(s_6, 2);
                if(((q_6 != NULL) && (q_6 != u_6)))
                  _fail(u_6);
                else
                  q_6 = u_6;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, h_0);
        }
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(q_6));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm h_17;
  h_17 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
      c_7 = t;
      b_7 :
      if(match_cons(c_7, sym_WaitStatus_3))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          f_7 = ATgetArgument(c_7, 2);
          {
            ATerm i_7 = NULL;
            t = not_null(e_7);
            {
              ATerm i_17 = t;
              if((PushChoice() == 0))
                {
                  ATerm h_7 = NULL;
                  h_7 = t;
                  z_6 :
                  if(!(match_int(h_7, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_17;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm j_7 = NULL;
                    j_7 = t;
                    if(((i_7 != NULL) && (i_7 != j_7)))
                      _fail(j_7);
                    else
                      i_7 = j_7;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_7)), term_p_17));
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
    t = try_1(t, p_0);
  }
  t = h_17;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm n_7 = NULL;
  n_7 = t;
  t = SSL_waitpid(not_null(n_7));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm))
{
  ATerm u_7 = NULL;
  ATerm w_7 = NULL;
  u_7 = t;
  {
    t = fork_0(t);
    {
      w_7 = t;
      {
        ATerm q_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL;
            y_7 = t;
            t_7 :
            if(match_int(y_7, 0))
              {
                t = not_null(u_7);
                t = w_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = q_17;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), not_null(u_7));
              t = x_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm h_8 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
    i_8 = t;
    g_8 :
    if(match_cons(i_8, sym__2))
      {
        j_8 = ATgetArgument(i_8, 0);
        k_8 = ATgetArgument(i_8, 1);
        {
          ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
          if(((h_8 != NULL) && (h_8 != k_8)))
            _fail(k_8);
          else
            h_8 = k_8;
          {
            t = not_null(j_8);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  m_8 = t;
                  e_8 :
                  if(match_cons(m_8, sym_WaitStatus_3))
                    {
                      n_8 = ATgetArgument(m_8, 0);
                      o_8 = ATgetArgument(m_8, 1);
                      p_8 = ATgetArgument(m_8, 2);
                      f_8 :
                      if(match_int(n_8, 0))
                        {
                          t = not_null(h_8);
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
  t = fork_2(t, y_63, q_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym__2))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      {
        ATerm r_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), not_null(w_8));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, r_0);
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
ATerm xtc_command_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm c_9 = NULL;
  ATerm w_17;
  w_17 = t;
  {
    ATerm d_9 = NULL;
    t = d_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        d_9 = t;
        if(((c_9 != NULL) && (c_9 != d_9)))
          _fail(d_9);
        else
          c_9 = d_9;
      }
    }
  }
  t = w_17;
  {
    ATerm x_17;
    x_17 = t;
    {
      ATerm e_9 = NULL;
      ATerm f_9 = NULL;
      f_9 = t;
      if(((e_9 != NULL) && (e_9 != f_9)))
        _fail(f_9);
      else
        e_9 = f_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), not_null(e_9));
        t = call_0(t);
      }
    }
    t = x_17;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      {
        ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
        ATerm y_17;
        y_17 = t;
        {
          ATerm v_9 = NULL;
          ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
          t = o_79(t);
          {
            v_9 = t;
            {
              if(((s_9 != NULL) && (s_9 != v_9)))
                _fail(v_9);
              else
                s_9 = v_9;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_9), not_null(o_9), not_null(p_9));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_17 = t;
                    int f_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), term_g_18);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(f_18);
                      }
                    else
                      {
                        t = z_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_9 = t;
                      l_9 :
                      if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                        {
                          x_9 = ATgetFirst((ATermList) w_9);
                          y_9 = (ATerm) ATgetNext((ATermList) w_9);
                          {
                            if(((t_9 != NULL) && (t_9 != x_9)))
                              _fail(x_9);
                            else
                              t_9 = x_9;
                            {
                              if(((u_9 != NULL) && (u_9 != y_9)))
                                _fail(y_9);
                              else
                                u_9 = y_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_9), term_g_18, (ATerm) ATinsert(CheckATermList(not_null(u_9)), (ATerm) ATinsert(CheckATermList(not_null(t_9)), not_null(o_9))));
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
        t = y_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm k_18;
  k_18 = t;
  {
    t = b_65(t);
    {
      ATerm s_0 (ATerm t)
      {
        t = term_l_18;
        return(t);
      }
      t = debug_1(t, s_0);
    }
  }
  t = k_18;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  ATerm p_10 (ATerm t)
  {
    ATerm m_18 = t;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
        k_10 = t;
        e_10 :
        if(match_cons(k_10, sym__2))
          {
            l_10 = ATgetArgument(k_10, 0);
            m_10 = ATgetArgument(k_10, 1);
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
        t = m_18;
      }
    {
      ATerm t_0 (ATerm t)
      {
        t = term_n_18;
        return(t);
      }
      t = obsolete_1(t, t_0);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_10), term_z_7);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm q_10 (ATerm t)
  {
    t = SSL_open_file(not_null(h_10), not_null(i_10));
    return(t);
  }
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        ATerm o_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_10(t);
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = o_18;
            t = q_10(t);
          }
      }
    }
  else
    {
      t = p_10(t);
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
  ATerm s_10 = NULL;
  ATerm t_10 = NULL;
  t = term_s_18;
  {
    t = new_0(t);
    {
      t_10 = t;
      if(((s_10 != NULL) && (s_10 != t_10)))
        _fail(t_10);
      else
        s_10 = t_10;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_t_18);
    {
      t = conc_strings_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, u_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = new_file_0(t);
  {
    x_10 = t;
    {
      ATerm x_18;
      x_18 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_z_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), term_s_18);
            {
              ATerm v_0 (ATerm t)
              {
                t = term_y_18;
                return(t);
              }
              t = assert_1(t, v_0);
            }
          }
        }
      }
      t = x_18;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_stdin_0))
    {
      ATerm j_11 = NULL;
      ATerm k_11 = NULL;
      ATerm l_11 = NULL;
      t = xtc_new_file_0(t);
      {
        k_11 = t;
        {
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
          {
            ATerm m_11 = NULL;
            t = o_0(t);
            {
              m_11 = t;
              if(((l_11 != NULL) && (l_11 != m_11)))
                _fail(m_11);
              else
                l_11 = m_11;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), term_z_18));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(j_11);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_11));
    }
  else
    {
      if(match_cons(h_11, sym_FILE_1))
        {
          i_11 = ATgetArgument(h_11, 0);
          {
            ATerm o_11 = NULL;
            ATerm p_11 = NULL;
            t = not_null(i_11);
            {
              ATerm q_11 = NULL;
              t = xtc_new_file_0(t);
              {
                p_11 = t;
                {
                  if(((o_11 != NULL) && (o_11 != p_11)))
                    _fail(p_11);
                  else
                    o_11 = p_11;
                  {
                    ATerm r_11 = NULL;
                    t = o_0(t);
                    {
                      r_11 = t;
                      if(((q_11 != NULL) && (q_11 != r_11)))
                        _fail(r_11);
                      else
                        q_11 = r_11;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_11)), term_z_18), not_null(i_11)), term_a_19));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(o_11);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_11));
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
  ATerm c_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_stdin_0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      ATerm b_19;
      b_19 = t;
      {
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(c_12));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
      }
      t = b_19;
      {
        ATerm h_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(e_12));
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
        t = not_null(g_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm q_12 = NULL,r_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym_FILE_1))
    {
      r_12 = ATgetArgument(q_12, 0);
      {
        ATerm u_12 = NULL,w_12 = NULL;
        ATerm v_12 = NULL;
        t = SSLgetAnnotations(not_null(q_12));
        {
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
        }
        {
          t = not_null(r_12);
          {
            ATerm y_12 = NULL;
            t = t_61(t);
            {
              w_12 = t;
              {
                ATerm z_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(w_12)), not_null(u_12));
                {
                  z_12 = t;
                  if(((y_12 != NULL) && (y_12 != z_12)))
                    _fail(z_12);
                  else
                    y_12 = z_12;
                }
                t = not_null(y_12);
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
ATerm xtc_transform_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm d_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          t = stdin_0(t);
        }
      LocalPopChoice(h_19);
      t = xtc_transform_file_2(t, f_83, g_83);
    }
  else
    {
      t = d_19;
      t = xtc_transform_term_2(t, f_83, g_83);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm k_19;
    k_19 = t;
    {
      ATerm f_13 = NULL;
      ATerm g_13 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          g_13 = t;
          if(((f_13 != NULL) && (f_13 != g_13)))
            _fail(g_13);
          else
            f_13 = g_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), term_h_9);
        t = geq_0(t);
      }
    }
    t = k_19;
    t = n_80(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm pass_v_verbose_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm z_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_p_19);
      return(t);
    }
    t = if_verbose3_1(t, z_0);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  t = SSL_table_keys(not_null(j_13));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  {
    t = table_keys_0(t);
    {
      ATerm a_1 (ATerm t)
      {
        ATerm r_13 = NULL;
        ATerm t_13 = NULL;
        r_13 = t;
        {
          ATerm u_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(r_13));
          {
            t = table_get_0(t);
            {
              u_13 = t;
              if(((t_13 != NULL) && (t_13 != u_13)))
                _fail(u_13);
              else
                t_13 = u_13;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), not_null(t_13));
        }
        return(t);
      }
      t = map_1(t, a_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm q_19;
    q_19 = t;
    {
      ATerm z_13 = NULL;
      ATerm a_14 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          a_14 = t;
          if(((z_13 != NULL) && (z_13 != a_14)))
            _fail(a_14);
          else
            z_13 = a_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), term_e_16);
        t = geq_0(t);
      }
    }
    t = q_19;
    t = p_80(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm t_19;
  t_19 = t;
  {
    ATerm d_14 = NULL;
    ATerm e_14 = NULL;
    e_14 = t;
    if(((d_14 != NULL) && (d_14 != e_14)))
      _fail(e_14);
    else
      d_14 = e_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, not_null(d_14));
      t = printnl_0(t);
    }
  }
  t = t_19;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm m_14 = NULL,n_14 = NULL;
  k_14 = t;
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_14)));
    {
      t = table_get_0(t);
      {
        o_14 = t;
        i_14 :
        if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
          {
            p_14 = ATgetFirst((ATermList) o_14);
            s_14 = (ATerm) ATgetNext((ATermList) o_14);
            j_14 :
            if(match_cons(p_14, sym__2))
              {
                q_14 = ATgetArgument(p_14, 0);
                r_14 = ATgetArgument(p_14, 1);
                {
                  if(((m_14 != NULL) && (m_14 != q_14)))
                    _fail(q_14);
                  else
                    m_14 = q_14;
                  if(((n_14 != NULL) && (n_14 != r_14)))
                    _fail(r_14);
                  else
                    n_14 = r_14;
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
    t = not_null(n_14);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym__2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      {
        ATerm e_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_15)));
        {
          t = table_get_0(t);
          {
            ATerm c_1 (ATerm t)
            {
              ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
              f_15 = t;
              x_14 :
              if(match_cons(f_15, sym__2))
                {
                  g_15 = ATgetArgument(f_15, 0);
                  h_15 = ATgetArgument(f_15, 1);
                  {
                    if(((b_15 != NULL) && (b_15 != g_15)))
                      _fail(g_15);
                    else
                      b_15 = g_15;
                    if(((e_15 != NULL) && (e_15 != h_15)))
                      _fail(h_15);
                    else
                      e_15 = h_15;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, c_1);
          }
        }
        t = not_null(e_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_76 (ATerm))
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = filter_1(t, q_76);
              return(t);
            }
            t = Cons_2(t, q_76, d_1);
            ;
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            {
              ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
              m_15 = t;
              l_15 :
              if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
                {
                  n_15 = ATgetFirst((ATermList) m_15);
                  o_15 = (ATerm) ATgetNext((ATermList) m_15);
                  {
                    t = not_null(o_15);
                    t = filter_1(t, q_76);
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
ATerm repeat_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = k_78(t);
      t = r_15(t);
      return(t);
    }
    t = try_1(t, e_1);
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm z_19;
  z_19 = t;
  {
    ATerm f_1 (ATerm t)
    {
      t = term_d_20;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm g_20 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_20;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, f_1);
  }
  t = z_19;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm h_20;
  h_20 = t;
  {
    ATerm t_15 = NULL;
    ATerm u_15 = NULL;
    u_15 = t;
    if(((t_15 != NULL) && (t_15 != u_15)))
      _fail(u_15);
    else
      t_15 = u_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATempty, not_null(t_15)));
      t = printnl_0(t);
    }
  }
  t = h_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm k_20;
  k_20 = t;
  {
    t = y_64(t);
    t = debug_0(t);
  }
  t = k_20;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm l_20;
    l_20 = t;
    {
      ATerm x_15 = NULL;
      ATerm y_15 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), term_d_12);
        t = geq_0(t);
      }
    }
    t = l_20;
    t = o_80(t);
    return(t);
  }
  t = try_1(t, g_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm m_20;
    m_20 = t;
    {
      ATerm b_16 = NULL;
      ATerm c_16 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), term_q_9);
        t = geq_0(t);
      }
    }
    t = m_20;
    t = q_80(t);
    return(t);
  }
  t = try_1(t, h_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      if(((h_16 != NULL) && (h_16 != i_16)))
        _fail(i_16);
      else
        h_16 = i_16;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
    {
      p_16 = ATgetFirst((ATermList) o_16);
      q_16 = (ATerm) ATgetNext((ATermList) o_16);
      {
        t = f_73(t);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm t_16 = NULL;
            t_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(t_16));
              t = e_73(t);
            }
            return(t);
          }
          t = fetch_1(t, i_1);
        }
        t = not_null(q_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        t = not_null(a_17);
        {
          ATerm f_17 (ATerm t)
          {
            ATerm n_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_17);
                ;
                LocalPopChoice(q_20);
              }
            else
              {
                t = n_20;
                {
                  ATerm r_20 = t;
                  int s_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_1 (ATerm t)
                      {
                        t = not_null(b_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_73, l_1);
                      t = f_17(t);
                      ;
                      LocalPopChoice(s_20);
                    }
                  else
                    {
                      t = r_20;
                      t = Cons_2(t, _id, f_17);
                    }
                }
              }
            return(t);
          }
          t = f_17(t);
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym__3))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      n_17 = ATgetArgument(k_17, 2);
      {
        ATerm t_20;
        t_20 = t;
        {
          ATerm r_17 = NULL;
          ATerm s_17 = NULL,u_17 = NULL;
          ATerm t_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_17), not_null(m_17));
          {
            ATerm u_20 = t;
            int v_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(v_20);
              }
            else
              {
                t = u_20;
                t = (ATerm) ATempty;
              }
            {
              t_17 = t;
              if(((s_17 != NULL) && (s_17 != t_17)))
                _fail(t_17);
              else
                s_17 = t_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(n_17));
            {
              t = union_0(t);
              {
                u_17 = t;
                if(((r_17 != NULL) && (r_17 != u_17)))
                  _fail(u_17);
                else
                  r_17 = u_17;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_17), not_null(m_17), not_null(r_17));
            t = set_0(t);
          }
        }
        t = t_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym__2))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
            h_18 = t;
            a_18 :
            if(match_cons(h_18, sym__2))
              {
                i_18 = ATgetArgument(h_18, 0);
                j_18 = ATgetArgument(h_18, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(i_18), not_null(j_18));
                  t = z_80(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, m_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm p_18 = NULL;
  ATerm q_18 = NULL;
  q_18 = t;
  if(((p_18 != NULL) && (p_18 != q_18)))
    _fail(q_18);
  else
    p_18 = q_18;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), (ATerm) ATinsert(ATempty, term_y_20));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  ATerm c_19 (ATerm t)
  {
    t = SSL_fclose(not_null(w_18));
    return(t);
  }
  w_18 = t;
  u_18 :
  if(match_cons(w_18, sym_Stream_1))
    {
      v_18 = ATgetArgument(w_18, 0);
      {
        ATerm z_20 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_18));
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = z_20;
            t = c_19(t);
          }
      }
    }
  else
    {
      t = c_19(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_Stream_1))
    {
      g_19 = ATgetArgument(f_19, 0);
      t = SSL_read_term_from_stream(not_null(g_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        ATerm r_19 = NULL;
        t = SSL_fopen(not_null(n_19), not_null(o_19));
        {
          ATerm s_19 = NULL;
          s_19 = t;
          if(((r_19 != NULL) && (r_19 != s_19)))
            _fail(s_19);
          else
            r_19 = s_19;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_19));
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
  ATerm a_20 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm b_20 = NULL;
    b_20 = t;
    if(((a_20 != NULL) && (a_20 != b_20)))
      _fail(b_20);
    else
      a_20 = b_20;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_20));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm e_20 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm f_20 = NULL;
    f_20 = t;
    if(((e_20 != NULL) && (e_20 != f_20)))
      _fail(f_20);
    else
      e_20 = f_20;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_20));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm i_20 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm j_20 = NULL;
    j_20 = t;
    if(((i_20 != NULL) && (i_20 != j_20)))
      _fail(j_20);
    else
      i_20 = j_20;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_20));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(p_20, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(p_20, sym_stdin_0))
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
  ATerm b_21 = NULL;
  ATerm d_21 = NULL,h_21 = NULL;
  b_21 = t;
  {
    ATerm i_21 = NULL;
    ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL,u_21 = NULL;
    t = not_null(b_21);
    {
      i_21 = t;
      {
        t = SSL_explode_term(not_null(i_21));
        {
          o_21 = t;
          w_20 :
          if(match_cons(o_21, sym__2))
            {
              p_21 = ATgetArgument(o_21, 0);
              q_21 = ATgetArgument(o_21, 1);
              x_20 :
              if(match_string(p_21, ""))
                {
                  a_21 :
                  if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
                    {
                      t_21 = ATgetFirst((ATermList) q_21);
                      u_21 = (ATerm) ATgetNext((ATermList) q_21);
                      {
                        if(((h_21 != NULL) && (h_21 != t_21)))
                          _fail(t_21);
                        else
                          h_21 = t_21;
                        if(((d_21 != NULL) && (d_21 != u_21)))
                          _fail(u_21);
                        else
                          d_21 = u_21;
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
    t = not_null(h_21);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym__2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm g_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm h_22 = NULL,i_22 = NULL;
                    h_22 = t;
                    c_22 :
                    if(match_cons(h_22, sym_Path_1))
                      {
                        i_22 = ATgetArgument(h_22, 0);
                        t = not_null(i_22);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, n_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(j_21);
                }
              else
                {
                  t = g_21;
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
  ATerm q_22 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL;
      ATerm p_22 = NULL;
      p_22 = t;
      if(((o_22 != NULL) && (o_22 != p_22)))
        _fail(p_22);
      else
        o_22 = p_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), term_m_21);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_n_21;
          return(t);
        }
        t = debug_1(t, o_1);
        _fail(t);
      }
    }
  {
    ATerm r_21;
    r_21 = t;
    {
      ATerm r_22 = NULL;
      t = read_from_stream_0(t);
      {
        r_22 = t;
        if(((q_22 != NULL) && (q_22 != r_22)))
          _fail(r_22);
        else
          q_22 = r_22;
      }
    }
    t = r_21;
    {
      t = fclose_0(t);
      t = not_null(q_22);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym__2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      t = SSL_access(not_null(x_22), not_null(y_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm d_23 = NULL;
  ATerm e_23 = NULL;
  e_23 = t;
  if(((d_23 != NULL) && (d_23 != e_23)))
    _fail(e_23);
  else
    d_23 = e_23;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), (ATerm) ATinsert(ATempty, term_s_21));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(w_21);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_21 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_21;
              }
            {
              ATerm p_1 (ATerm t)
              {
                t = term_a_22;
                return(t);
              }
              t = debug_1(t, p_1);
            }
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm q_1 (ATerm t)
              {
                t = term_b_22;
                return(t);
              }
              t = debug_1(t, q_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm i_23 = NULL;
  ATerm k_23 = NULL;
  i_23 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        t = term_j_22;
        return(t);
      }
      t = debug_1(t, s_1);
      return(t);
    }
    t = if_verbose5_1(t, r_1);
    {
      ATerm k_22 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_23)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_22;
        }
      {
        ATerm l_22;
        l_22 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_m_22, (ATerm) ATinsert(ATempty, not_null(i_23)));
          t = table_put_0(t);
        }
        t = l_22;
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              t = term_n_22;
              return(t);
            }
            t = debug_1(t, u_1);
            return(t);
          }
          t = if_verbose4_1(t, t_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm v_1 (ATerm t)
              {
                ATerm w_1 (ATerm t)
                {
                  t = term_s_22;
                  return(t);
                }
                t = say_1(t, w_1);
                return(t);
              }
              t = if_verbose6_1(t, v_1);
              {
                ATerm l_23 = NULL;
                l_23 = t;
                if(((k_23 != NULL) && (k_23 != l_23)))
                  _fail(l_23);
                else
                  k_23 = l_23;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_19, not_null(k_23));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm x_1 (ATerm t)
                      {
                        ATerm a_2 (ATerm t)
                        {
                          t = term_t_22;
                          return(t);
                        }
                        t = say_1(t, a_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, x_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_u_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_23)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm b_2 (ATerm t)
                            {
                              ATerm c_2 (ATerm t)
                              {
                                t = term_s_22;
                                return(t);
                              }
                              t = say_1(t, c_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, b_2);
                          }
                        }
                      }
                    }
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
  ATerm p_23 = NULL;
  p_23 = t;
  t = SSL_getenv(not_null(p_23));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm u_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_23;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = u_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_23;
            t = getenv_0(t);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      t = term_g_23;
      return(t);
    }
    t = debug_1(t, e_2);
    return(t);
  }
  t = if_verbose5_1(t, d_2);
  {
    ATerm h_23;
    h_23 = t;
    {
      ATerm j_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_23;
          t = table_get_0(t);
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = j_23;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = h_23;
    {
      ATerm f_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          t = term_o_23;
          return(t);
        }
        t = debug_1(t, g_2);
        return(t);
      }
      t = if_verbose5_1(t, f_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          t = term_s_23;
          return(t);
        }
        t = debug_1(t, i_2);
        return(t);
      }
      t = if_verbose5_1(t, h_2);
      {
        t = xtc_load_0(t);
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm j_2 (ATerm t)
            {
              ATerm k_2 (ATerm t)
              {
                t = term_s_23;
                return(t);
              }
              t = debug_1(t, k_2);
              return(t);
            }
            t = if_verbose5_1(t, j_2);
          }
        }
      }
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm t_23 = NULL;
        ATerm u_23 = NULL;
        u_23 = t;
        if(((t_23 != NULL) && (t_23 != u_23)))
          _fail(u_23);
        else
          t_23 = u_23;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_24), not_null(t_23)), term_x_23);
          {
            t = error_0(t);
            {
              ATerm l_2 (ATerm t)
              {
                t = term_u_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm m_2 (ATerm t)
                    {
                      t = term_d_24;
                      return(t);
                    }
                    t = debug_1(t, m_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, l_2);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_sglr_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    t = term_e_24;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm y_23 = NULL,a_24 = NULL;
    ATerm f_24;
    f_24 = t;
    {
      ATerm z_23 = NULL;
      t = term_s_18;
      {
        t = w_83(t);
        {
          t = xtc_find_0(t);
          {
            z_23 = t;
            if(((y_23 != NULL) && (y_23 != z_23)))
              _fail(z_23);
            else
              y_23 = z_23;
          }
        }
      }
    }
    t = f_24;
    {
      ATerm b_24 = NULL;
      t = term_s_18;
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_24)), not_null(y_23)), term_k_24), term_g_24);
    }
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm xtc_parse_sdf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_l_24;
    return(t);
  }
  t = xtc_sglr_1(t, p_2);
  t = xtc_implode_asfix_0(t);
  return(t);
}
ATerm xtc_implode_asfix_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = term_m_24;
    return(t);
  }
  t = xtc_transform_2(t, q_2, pass_verbose_0);
  return(t);
}
ATerm pre_process_sdf_0 (ATerm t)
{
  ATerm j_24 = NULL,o_24 = NULL,p_24 = NULL;
  j_24 = t;
  h_24 :
  if(match_cons(j_24, sym__2))
    {
      o_24 = ATgetArgument(j_24, 0);
      p_24 = ATgetArgument(j_24, 1);
      i_24 :
      if(match_cons(o_24, sym_AST_0))
        {
          t = not_null(p_24);
        }
      else
        {
          if(match_cons(o_24, sym_ParseTree_0))
            {
              t = not_null(p_24);
              t = xtc_implode_asfix_0(t);
            }
          else
            {
              if(match_cons(o_24, sym_PlainText_0))
                {
                  t = not_null(p_24);
                  t = xtc_parse_sdf_0(t);
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
ATerm get_input_type_0 (ATerm t)
{
  ATerm n_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_24;
      t = get_config_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = n_24;
      t = term_s_24;
    }
  return(t);
}
ATerm ppgen_0 (ATerm t)
{
  ATerm b_25 = NULL,d_25 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm c_25 = NULL;
    t = get_input_type_0(t);
    {
      c_25 = t;
      if(((b_25 != NULL) && (b_25 != c_25)))
        _fail(c_25);
      else
        b_25 = c_25;
    }
  }
  t = t_24;
  {
    ATerm e_25 = NULL;
    e_25 = t;
    if(((d_25 != NULL) && (d_25 != e_25)))
      _fail(e_25);
    else
      d_25 = e_25;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_25), not_null(d_25));
      {
        t = pre_process_sdf_0(t);
        {
          ATerm r_2 (ATerm t)
          {
            t = term_u_24;
            return(t);
          }
          t = xtc_transform_2(t, r_2, pass_verbose_0);
          {
            ATerm s_2 (ATerm t)
            {
              t = term_v_24;
              return(t);
            }
            t = xtc_transform_2(t, s_2, pass_verbose_0);
          }
        }
      }
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  i_25 :
  if(match_cons(l_25, sym__2))
    {
      m_25 = ATgetArgument(l_25, 0);
      n_25 = ATgetArgument(l_25, 1);
      t = SSL_copy(not_null(m_25), not_null(n_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_stderr_0))
    {
      ATerm x_25 = NULL,z_25 = NULL;
      ATerm w_24;
      w_24 = t;
      {
        ATerm y_25 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          y_25 = t;
          if(((x_25 != NULL) && (x_25 != y_25)))
            _fail(y_25);
          else
            x_25 = y_25;
        }
      }
      t = w_24;
      {
        ATerm a_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(x_25));
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
        t = not_null(z_25);
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
  ATerm n_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_stdout_0))
    {
      ATerm q_26 = NULL,s_26 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm r_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
        }
      }
      t = x_24;
      {
        ATerm t_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(q_26));
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
        t = not_null(s_26);
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
  ATerm j_27 = NULL,k_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_FILE_1))
    {
      k_27 = ATgetArgument(j_27, 0);
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27 = NULL;
            ATerm n_27 = NULL;
            t = m_0(t);
            {
              n_27 = t;
              {
                if(((m_27 != NULL) && (m_27 != n_27)))
                  _fail(n_27);
                else
                  m_27 = n_27;
                {
                  ATerm a_25 = t;
                  int f_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(f_25);
                    }
                  else
                    {
                      t = a_25;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(m_27));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_27));
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm g_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL;
                  ATerm q_27 = NULL;
                  t = m_0(t);
                  {
                    q_27 = t;
                    {
                      if(((p_27 != NULL) && (p_27 != q_27)))
                        _fail(q_27);
                      else
                        p_27 = q_27;
                      {
                        ATerm j_25 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm k_25 = t;
                            int o_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(o_25);
                              }
                            else
                              {
                                t = k_25;
                                {
                                  ATerm p_25 = t;
                                  int q_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(q_25);
                                    }
                                  else
                                    {
                                      t = p_25;
                                      {
                                        ATerm r_27 = NULL;
                                        r_27 = t;
                                        if(((k_27 != NULL) && (k_27 != r_27)))
                                          _fail(r_27);
                                        else
                                          k_27 = r_27;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = j_25;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(p_27));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_27));
                  ;
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = g_25;
                  {
                    ATerm t_27 = NULL;
                    t = m_0(t);
                    {
                      t_27 = t;
                      if(((k_27 != NULL) && (k_27 != t_27)))
                        _fail(t_27);
                      else
                        k_27 = t_27;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_27));
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
    {
      e_28 = ATgetFirst((ATermList) d_28);
      f_28 = (ATerm) ATgetNext((ATermList) d_28);
      t = not_null(f_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm r_25;
        r_25 = t;
        {
          ATerm q_28 = NULL;
          ATerm r_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), not_null(n_28));
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                t = (ATerm) ATempty;
              }
            {
              r_28 = t;
              if(((q_28 != NULL) && (q_28 != r_28)))
                _fail(r_28);
              else
                q_28 = r_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_28), not_null(n_28), not_null(q_28));
            t = table_put_0(t);
          }
        }
        t = r_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  ATerm w_25;
  w_25 = t;
  {
    ATerm b_29 = NULL;
    ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
    t = l_79(t);
    {
      b_29 = t;
      {
        if(((a_29 != NULL) && (a_29 != b_29)))
          _fail(b_29);
        else
          a_29 = b_29;
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), term_g_18);
              t = table_get_0(t);
              ;
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_29 = t;
            x_28 :
            if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
              {
                d_29 = ATgetFirst((ATermList) c_29);
                e_29 = (ATerm) ATgetNext((ATermList) c_29);
                {
                  if(((z_28 != NULL) && (z_28 != d_29)))
                    _fail(d_29);
                  else
                    z_28 = d_29;
                  {
                    if(((y_28 != NULL) && (y_28 != e_29)))
                      _fail(e_29);
                    else
                      y_28 = e_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_29), term_g_18, not_null(y_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(z_28);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm f_29 = NULL;
                              f_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(f_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_2);
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
  t = w_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  t = SSL_remove(not_null(l_29));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_80 (ATerm), ATerm h_80 (ATerm))
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_80(t);
      t = h_80(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        t = h_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm q_29 = NULL;
  ATerm f_26;
  f_26 = t;
  {
    ATerm r_29 = NULL;
    ATerm s_29 = NULL;
    t = k_79(t);
    {
      r_29 = t;
      {
        if(((q_29 != NULL) && (q_29 != r_29)))
          _fail(r_29);
        else
          q_29 = r_29;
        {
          ATerm t_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_29), term_g_18);
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_26);
              }
            else
              {
                t = g_26;
                t = (ATerm) ATempty;
              }
            {
              t_29 = t;
              if(((s_29 != NULL) && (s_29 != t_29)))
                _fail(t_29);
              else
                s_29 = t_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_29), term_g_18, (ATerm) ATinsert(CheckATermList(not_null(s_29)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = f_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm y_29 = NULL,z_29 = NULL;
  ATerm u_2 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  t = begin_scope_1(t, u_2);
  {
    ATerm v_2 (ATerm t)
    {
      ATerm i_26;
      i_26 = t;
      {
        ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_26;
            t = table_get_0(t);
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          a_30 = t;
          x_29 :
          if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
            {
              b_30 = ATgetFirst((ATermList) a_30);
              c_30 = (ATerm) ATgetNext((ATermList) a_30);
              {
                if(((z_29 != NULL) && (z_29 != b_30)))
                  _fail(b_30);
                else
                  z_29 = b_30;
                {
                  if(((y_29 != NULL) && (y_29 != c_30)))
                    _fail(c_30);
                  else
                    y_29 = c_30;
                  {
                    t = not_null(z_29);
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, w_2);
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
      t = i_26;
      {
        ATerm x_2 (ATerm t)
        {
          t = term_y_18;
          return(t);
        }
        t = end_scope_1(t, x_2);
      }
      return(t);
    }
    t = restore_always_2(t, p_82, v_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_30 = NULL;
        ATerm g_30 = NULL;
        t = term_a_19;
        {
          t = get_config_0(t);
          {
            g_30 = t;
            if(((f_30 != NULL) && (f_30 != g_30)))
              _fail(g_30);
            else
              f_30 = g_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_30));
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = term_x_7;
      }
    {
      t = q_82(t);
      {
        ATerm z_2 (ATerm t)
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_z_18;
              t = get_config_0(t);
              ;
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
              t = term_w_26;
            }
          return(t);
        }
        t = copy_to_1(t, z_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, y_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm j_30 = NULL;
    j_30 = t;
    i_30 :
    if(!(match_string(j_30, "-v")))
      {
        if(!(match_string(j_30, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_x_26;
    t = set_config_0(t);
    t = term_y_26;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  t = Option_3(t, f_3, i_3, j_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm m_30 = NULL;
    m_30 = t;
    k_30 :
    if(!(match_string(m_30, "-k")))
      {
        if(!(match_string(m_30, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm a_27;
    a_27 = t;
    {
      ATerm n_30 = NULL;
      ATerm o_30 = NULL;
      t = string_to_int_0(t);
      {
        o_30 = t;
        if(((n_30 != NULL) && (n_30 != o_30)))
          _fail(o_30);
        else
          n_30 = o_30;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_27, not_null(n_30));
        t = set_config_0(t);
      }
    }
    t = a_27;
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_c_27;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = SSL_string_to_int(not_null(r_30));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        ATerm z_30 = NULL;
        z_30 = t;
        u_30 :
        if(!(match_string(z_30, "-S")))
          {
            if(!(match_string(z_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_g_27;
        t = set_config_0(t);
        t = term_h_27;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_l_27;
        return(t);
      }
      t = Option_3(t, n_3, u_3, v_3);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm o_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm a_31 = NULL;
              a_31 = t;
              v_30 :
              if(!(match_string(a_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm d_31 = NULL;
              ATerm u_27;
              u_27 = t;
              {
                ATerm b_31 = NULL;
                ATerm c_31 = NULL;
                t = string_to_int_0(t);
                {
                  c_31 = t;
                  if(((b_31 != NULL) && (b_31 != c_31)))
                    _fail(c_31);
                  else
                    b_31 = c_31;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_7, not_null(b_31));
                  t = set_config_0(t);
                }
              }
              t = u_27;
              {
                ATerm e_31 = NULL;
                e_31 = t;
                if(((d_31 != NULL) && (d_31 != e_31)))
                  _fail(e_31);
                else
                  d_31 = e_31;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_31));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_v_27;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = o_27;
            {
              ATerm b_4 (ATerm t)
              {
                ATerm f_31 = NULL;
                f_31 = t;
                y_30 :
                if(!(match_string(f_31, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                t = term_x_27;
                t = set_config_0(t);
                t = term_y_27;
                return(t);
              }
              ATerm h_4 (ATerm t)
              {
                t = term_z_27;
                return(t);
              }
              t = Option_3(t, b_4, c_4, h_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm r_31 = NULL;
    r_31 = t;
    n_31 :
    if(!(match_string(r_31, "-o")))
      {
        if(!(match_string(r_31, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm u_31 = NULL;
    ATerm i_28;
    i_28 = t;
    {
      ATerm s_31 = NULL;
      ATerm t_31 = NULL;
      t_31 = t;
      if(((s_31 != NULL) && (s_31 != t_31)))
        _fail(t_31);
      else
        s_31 = t_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_18, not_null(s_31));
        t = set_config_0(t);
      }
    }
    t = i_28;
    {
      ATerm v_31 = NULL;
      v_31 = t;
      if(((u_31 != NULL) && (u_31 != v_31)))
        _fail(v_31);
      else
        u_31 = v_31;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_31));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_j_28;
    return(t);
  }
  t = ArgOption_3(t, i_4, n_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm p_4 (ATerm t)
        {
          ATerm z_31 = NULL;
          z_31 = t;
          y_31 :
          if(!(match_string(z_31, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_t_28;
          t = set_config_0(t);
          t = term_u_28;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_v_28;
          return(t);
        }
        t = Option_3(t, p_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  f_32 = t;
  d_32 :
  if(match_string(f_32, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
        {
          g_32 = ATgetFirst((ATermList) f_32);
          h_32 = (ATerm) ATgetNext((ATermList) f_32);
          e_32 :
          if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
            {
              i_32 = ATgetFirst((ATermList) h_32);
              j_32 = (ATerm) ATgetNext((ATermList) h_32);
              {
                ATerm n_32 = NULL;
                ATerm w_28;
                w_28 = t;
                {
                  t = not_null(g_32);
                  t = j_0(t);
                }
                t = w_28;
                {
                  ATerm o_32 = NULL;
                  t = not_null(i_32);
                  {
                    t = k_0(t);
                    {
                      o_32 = t;
                      if(((n_32 != NULL) && (n_32 != o_32)))
                        _fail(o_32);
                      else
                        n_32 = o_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_32)), not_null(n_32));
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
    ATerm x_32 = NULL;
    x_32 = t;
    u_32 :
    if(!(match_string(x_32, "-i")))
      {
        if(!(match_string(x_32, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm a_33 = NULL;
    ATerm g_29;
    g_29 = t;
    {
      ATerm y_32 = NULL;
      ATerm z_32 = NULL;
      z_32 = t;
      if(((y_32 != NULL) && (y_32 != z_32)))
        _fail(z_32);
      else
        y_32 = z_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_19, not_null(y_32));
        t = set_config_0(t);
      }
    }
    t = g_29;
    {
      ATerm b_33 = NULL;
      b_33 = t;
      if(((a_33 != NULL) && (a_33 != b_33)))
        _fail(b_33);
      else
        a_33 = b_33;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_33));
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_h_29;
    return(t);
  }
  t = ArgOption_3(t, t_4, w_4, x_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm k_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = k_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ppgen_options_0 (ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        ATerm g_33 = NULL;
        g_33 = t;
        e_33 :
        if(!(match_string(g_33, "-A")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm a_5 (ATerm t)
      {
        ATerm p_29;
        p_29 = t;
        {
          t = term_v_29;
          t = set_config_0(t);
        }
        t = p_29;
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_w_29;
        return(t);
      }
      t = Option_3(t, y_4, a_5, b_5);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 (ATerm t)
            {
              ATerm h_33 = NULL;
              h_33 = t;
              f_33 :
              if(!(match_string(h_33, "-a")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm h_30;
              h_30 = t;
              {
                t = term_p_30;
                t = set_config_0(t);
              }
              t = h_30;
              return(t);
            }
            ATerm i_5 (ATerm t)
            {
              t = term_q_30;
              return(t);
            }
            t = Option_3(t, c_5, h_5, i_5);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            t = io_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_30;
  s_30 = t;
  {
    ATerm j_33 = NULL;
    ATerm k_33 = NULL;
    t = term_s_18;
    {
      t = whoami_0(t);
      {
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_30), not_null(j_33)), term_t_30));
      {
        t = printnl_0(t);
        {
          t = term_v_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_30;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm n_33 = NULL;
  t = report_run_time_0(t);
  {
    ATerm o_33 = NULL;
    t = term_s_18;
    {
      t = whoami_0(t);
      {
        o_33 = t;
        if(((n_33 != NULL) && (n_33 != o_33)))
          _fail(o_33);
        else
          n_33 = o_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, term_x_30), not_null(n_33)));
      {
        t = printnl_0(t);
        {
          t = term_v_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_g_31;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_TicksToSeconds(not_null(r_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_33), not_null(y_33));
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            t = SSL_addr(not_null(x_33), not_null(y_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_75(t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      {
        ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
        f_34 = t;
        e_34 :
        if(((ATgetType(f_34) == AT_LIST) && !(ATisEmpty(f_34))))
          {
            g_34 = ATgetFirst((ATermList) f_34);
            h_34 = (ATerm) ATgetNext((ATermList) f_34);
            {
              ATerm k_34 = NULL;
              ATerm l_34 = NULL;
              t = not_null(h_34);
              {
                t = foldr_2(t, n_75, o_75);
                {
                  l_34 = t;
                  if(((k_34 != NULL) && (k_34 != l_34)))
                    _fail(l_34);
                  else
                    k_34 = l_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_34), not_null(k_34));
                t = o_75(t);
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
ATerm crush_2 (ATerm t, ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm s_34 = NULL;
  ATerm u_34 = NULL;
  s_34 = t;
  {
    ATerm v_34 = NULL;
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
    t = not_null(s_34);
    {
      v_34 = t;
      {
        t = SSL_explode_term(not_null(v_34));
        {
          x_34 = t;
          r_34 :
          if(match_cons(x_34, sym__2))
            {
              y_34 = ATgetArgument(x_34, 0);
              z_34 = ATgetArgument(x_34, 1);
              if(((u_34 != NULL) && (u_34 != z_34)))
                _fail(z_34);
              else
                u_34 = z_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_34);
      t = foldr_2(t, l_73, m_73);
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
      t = term_f_27;
      return(t);
    }
    t = crush_2(t, j_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  e_35 :
  if(match_cons(f_35, sym__2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      {
        ATerm l_31;
        l_31 = t;
        {
          ATerm m_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_35), not_null(h_35));
              ;
              LocalPopChoice(o_31);
            }
          else
            {
              t = m_31;
              t = SSL_gtr(not_null(g_35), not_null(h_35));
            }
        }
        t = l_31;
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
  ATerm n_35 = NULL;
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
      o_35 = t;
      m_35 :
      if(match_cons(o_35, sym__2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          {
            if(((n_35 != NULL) && (n_35 != p_35)))
              _fail(p_35);
            else
              n_35 = p_35;
            if(((n_35 != NULL) && (n_35 != q_35)))
              _fail(q_35);
            else
              n_35 = q_35;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm w_31;
    w_31 = t;
    {
      ATerm t_35 = NULL;
      ATerm u_35 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_35), term_v_7);
        t = geq_0(t);
      }
    }
    t = w_31;
    t = l_80(t);
    return(t);
  }
  t = try_1(t, k_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm y_35 = NULL,a_36 = NULL;
    ATerm x_31;
    x_31 = t;
    {
      ATerm z_35 = NULL;
      t = run_time_0(t);
      {
        z_35 = t;
        if(((y_35 != NULL) && (y_35 != z_35)))
          _fail(z_35);
        else
          y_35 = z_35;
      }
    }
    t = x_31;
    {
      ATerm b_36 = NULL;
      t = term_s_18;
      {
        t = whoami_0(t);
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_32), not_null(y_35)), term_c_8), not_null(a_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_f_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  h_36 :
  if(match_cons(i_36, sym_Version_0))
    {
      ATerm k_36 = NULL,m_36 = NULL;
      ATerm b_32;
      b_32 = t;
      {
        ATerm l_36 = NULL;
        t = SSLgetAnnotations(not_null(i_36));
        {
          l_36 = t;
          if(((k_36 != NULL) && (k_36 != l_36)))
            _fail(l_36);
          else
            k_36 = l_36;
        }
      }
      t = b_32;
      {
        ATerm n_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_36));
        {
          n_36 = t;
          if(((m_36 != NULL) && (m_36 != n_36)))
            _fail(n_36);
          else
            m_36 = n_36;
        }
        t = not_null(m_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm c_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_32;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = c_32;
      {
        ATerm n_5 (ATerm t)
        {
          ATerm m_32 = t;
          int p_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_32);
            }
          else
            {
              t = m_32;
              {
                ATerm q_32 = t;
                int r_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(r_32);
                  }
                else
                  {
                    t = q_32;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, n_5);
      }
    }
  t = x_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  t = SSL_table_create(not_null(s_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  {
    ATerm s_32;
    s_32 = t;
    {
      t = term_t_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_32, term_v_32, not_null(w_36));
          t = table_put_0(t);
        }
      }
    }
    t = s_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_table_destroy(not_null(a_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  t = SSL_exit(not_null(e_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  h_37 :
  if(((ATgetType(i_37) == AT_LIST) && ATisEmpty(i_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
        {
          j_37 = ATgetFirst((ATermList) i_37);
          k_37 = (ATerm) ATgetNext((ATermList) i_37);
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
  ATerm w_32;
  w_32 = t;
  {
    ATerm n_37 = NULL;
    ATerm q_37 = NULL;
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          ATerm o_37 = NULL;
          ATerm p_37 = NULL;
          p_37 = t;
          if(((o_37 != NULL) && (o_37 != p_37)))
            _fail(p_37);
          else
            o_37 = p_37;
          t = (ATerm) ATinsert(ATempty, not_null(o_37));
        }
      }
    {
      q_37 = t;
      if(((n_37 != NULL) && (n_37 != q_37)))
        _fail(q_37);
      else
        n_37 = q_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_26, not_null(n_37));
      t = printnl_0(t);
    }
  }
  t = w_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  b_38 = t;
  y_37 :
  if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
    {
      z_37 = ATgetFirst((ATermList) b_38);
      a_38 = (ATerm) ATgetNext((ATermList) b_38);
      {
        ATerm e_38 = NULL;
        t = not_null(a_38);
        {
          ATerm i_33;
          i_33 = t;
          {
            ATerm f_38 = NULL,h_38 = NULL,j_38 = NULL;
            ATerm l_33;
            l_33 = t;
            {
              ATerm g_38 = NULL;
              t = i_0(t);
              {
                g_38 = t;
                if(((f_38 != NULL) && (f_38 != g_38)))
                  _fail(g_38);
                else
                  f_38 = g_38;
              }
            }
            t = l_33;
            {
              ATerm i_38 = NULL;
              t = not_null(z_37);
              {
                t = g_0(t);
                {
                  i_38 = t;
                  if(((h_38 != NULL) && (h_38 != i_38)))
                    _fail(i_38);
                  else
                    h_38 = i_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_38)), not_null(h_38));
                {
                  j_38 = t;
                  if(((e_38 != NULL) && (e_38 != j_38)))
                    _fail(j_38);
                  else
                    e_38 = j_38;
                }
              }
            }
          }
          t = i_33;
          {
            ATerm o_5 (ATerm t)
            {
              t = not_null(e_38);
              return(t);
            }
            t = reverse_acc_2(t, g_0, o_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_38) == AT_LIST) && ATisEmpty(b_38)))
        {
          {
            t = term_s_18;
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
ATerm short_description_1 (ATerm t, ATerm s_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_Program_1))
    {
      y_38 = ATgetArgument(x_38, 0);
      {
        ATerm b_39 = NULL,d_39 = NULL;
        ATerm c_39 = NULL;
        t = SSLgetAnnotations(not_null(x_38));
        {
          c_39 = t;
          if(((b_39 != NULL) && (b_39 != c_39)))
            _fail(c_39);
          else
            b_39 = c_39;
        }
        {
          t = not_null(y_38);
          {
            ATerm f_39 = NULL;
            t = a_62(t);
            {
              d_39 = t;
              {
                ATerm g_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_39)), not_null(b_39));
                {
                  g_39 = t;
                  if(((f_39 != NULL) && (f_39 != g_39)))
                    _fail(g_39);
                  else
                    f_39 = g_39;
                }
                t = not_null(f_39);
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
  ATerm t_39 = NULL;
  ATerm m_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL;
      t = term_g_31;
      {
        t = get_config_0(t);
        {
          u_39 = t;
          if(((t_39 != NULL) && (t_39 != u_39)))
            _fail(u_39);
          else
            t_39 = u_39;
        }
      }
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = m_33;
      {
        ATerm q_5 (ATerm t)
        {
          ATerm r_5 (ATerm t)
          {
            ATerm v_39 = NULL;
            v_39 = t;
            if(((t_39 != NULL) && (t_39 != v_39)))
              _fail(v_39);
            else
              t_39 = v_39;
            return(t);
          }
          t = Program_1(t, r_5);
          return(t);
        }
        t = option_defined_1(t, q_5);
      }
    }
  {
    ATerm x_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        t = not_null(t_39);
        return(t);
      }
      t = short_description_1(t, a_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_5);
    {
      t = term_q_33;
      {
        t = echo_0(t);
        {
          t = term_u_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_6 (ATerm t)
                {
                  ATerm y_39 = NULL;
                  ATerm z_39 = NULL;
                  z_39 = t;
                  if(((y_39 != NULL) && (y_39 != z_39)))
                    _fail(z_39);
                  else
                    y_39 = z_39;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_39)), term_z_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_6);
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm a_40 = NULL;
                    ATerm b_40 = NULL;
                    ATerm f_6 (ATerm t)
                    {
                      t = not_null(t_39);
                      return(t);
                    }
                    t = long_description_1(t, f_6);
                    {
                      b_40 = t;
                      if(((a_40 != NULL) && (a_40 != b_40)))
                        _fail(b_40);
                      else
                        a_40 = b_40;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_40)), term_a_34);
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
ATerm printnl_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        ATerm b_34;
        b_34 = t;
        t = SSL_printnl(not_null(j_40), not_null(k_40));
        t = b_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm v_40 = NULL,h_41 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_Undefined_1))
    {
      h_41 = ATgetArgument(v_40, 0);
      {
        ATerm k_41 = NULL,o_41 = NULL;
        ATerm l_41 = NULL;
        t = SSLgetAnnotations(not_null(v_40));
        {
          l_41 = t;
          if(((k_41 != NULL) && (k_41 != l_41)))
            _fail(l_41);
          else
            k_41 = l_41;
        }
        {
          t = not_null(h_41);
          {
            ATerm z_41 = NULL;
            t = b_62(t);
            {
              o_41 = t;
              {
                ATerm a_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_41)), not_null(k_41));
                {
                  a_42 = t;
                  if(((z_41 != NULL) && (z_41 != a_42)))
                    _fail(a_42);
                  else
                    z_41 = a_42;
                }
                t = not_null(z_41);
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
ATerm fetch_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm f_42 (ATerm t)
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_69, _id);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = Cons_2(t, _id, f_42);
      }
    return(t);
  }
  t = f_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_85 (ATerm))
{
  t = fetch_1(t, s_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym_Help_0))
    {
      ATerm m_42 = NULL,o_42 = NULL;
      ATerm i_34;
      i_34 = t;
      {
        ATerm n_42 = NULL;
        t = SSLgetAnnotations(not_null(k_42));
        {
          n_42 = t;
          if(((m_42 != NULL) && (m_42 != n_42)))
            _fail(n_42);
          else
            m_42 = n_42;
        }
      }
      t = i_34;
      {
        ATerm u_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_42));
        {
          u_42 = t;
          if(((o_42 != NULL) && (o_42 != u_42)))
            _fail(u_42);
          else
            o_42 = u_42;
        }
        t = not_null(o_42);
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
  ATerm d_43 = NULL;
  d_43 = t;
  t = SSL_implode_string(not_null(d_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = j_34;
      {
        ATerm q_43 = NULL,r_43 = NULL,u_43 = NULL;
        q_43 = t;
        p_43 :
        if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
          {
            r_43 = ATgetFirst((ATermList) q_43);
            u_43 = (ATerm) ATgetNext((ATermList) q_43);
            {
              t = not_null(r_43);
              {
                ATerm g_6 (ATerm t)
                {
                  t = not_null(u_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_6);
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
  ATerm n_44 = NULL;
  ATerm p_44 = NULL;
  n_44 = t;
  {
    ATerm q_44 = NULL;
    ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
    t = not_null(n_44);
    {
      q_44 = t;
      {
        t = SSL_explode_term(not_null(q_44));
        {
          s_44 = t;
          h_44 :
          if(match_cons(s_44, sym__2))
            {
              t_44 = ATgetArgument(s_44, 0);
              u_44 = ATgetArgument(s_44, 1);
              m_44 :
              if(match_string(t_44, ""))
                {
                  if(((p_44 != NULL) && (p_44 != u_44)))
                    _fail(u_44);
                  else
                    p_44 = u_44;
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
      t = not_null(p_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm y_44 (ATerm t)
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_44);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        {
          t = Nil_0(t);
          t = q_69(t);
        }
      }
    return(t);
  }
  t = y_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym__2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        t = not_null(e_45);
        {
          ATerm h_6 (ATerm t)
          {
            t = not_null(f_45);
            return(t);
          }
          t = at_end_1(t, h_6);
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
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  t = SSL_explode_string(not_null(o_45));
  return(t);
}
ATerm _2 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm x_45 = NULL,i_46 = NULL,j_46 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym__2))
    {
      i_46 = ATgetArgument(x_45, 0);
      j_46 = ATgetArgument(x_45, 1);
      {
        ATerm q_46 = NULL,s_46 = NULL;
        ATerm r_46 = NULL;
        t = SSLgetAnnotations(not_null(x_45));
        {
          r_46 = t;
          if(((q_46 != NULL) && (q_46 != r_46)))
            _fail(r_46);
          else
            q_46 = r_46;
        }
        {
          t = not_null(i_46);
          {
            ATerm v_46 = NULL;
            t = k_55(t);
            {
              s_46 = t;
              {
                t = not_null(j_46);
                {
                  ATerm a_47 = NULL;
                  t = l_55(t);
                  {
                    v_46 = t;
                    {
                      ATerm h_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_46), not_null(v_46)), not_null(q_46));
                      {
                        h_47 = t;
                        if(((a_47 != NULL) && (a_47 != h_47)))
                          _fail(h_47);
                        else
                          a_47 = h_47;
                      }
                      t = not_null(a_47);
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
ATerm debug_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm t_34;
  t_34 = t;
  {
    ATerm p_47 = NULL,r_47 = NULL;
    ATerm w_34;
    w_34 = t;
    {
      ATerm q_47 = NULL;
      t = u_64(t);
      {
        q_47 = t;
        if(((p_47 != NULL) && (p_47 != q_47)))
          _fail(q_47);
        else
          p_47 = q_47;
      }
    }
    t = w_34;
    {
      ATerm s_47 = NULL;
      s_47 = t;
      if(((r_47 != NULL) && (r_47 != s_47)))
        _fail(s_47);
      else
        r_47 = s_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), not_null(p_47)));
        t = printnl_0(t);
      }
    }
  }
  t = t_34;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm b_48 (ATerm t)
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = Cons_2(t, b_69, b_48);
      }
    return(t);
  }
  t = b_48(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  t = SSL_is_string(not_null(d_48));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_6);
            ;
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            {
              ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
              q_48 = t;
              p_48 :
              if(match_cons(q_48, sym_Path_1))
                {
                  r_48 = ATgetArgument(q_48, 0);
                  t = not_null(r_48);
                }
              else
                {
                  if(match_cons(q_48, sym_Var_1))
                    {
                      r_48 = ATgetArgument(q_48, 0);
                      {
                        t = not_null(r_48);
                        {
                          ATerm k_35 = t;
                          int l_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(l_35);
                            }
                          else
                            {
                              t = k_35;
                              {
                                ATerm j_6 (ATerm t)
                                {
                                  t = term_r_35;
                                  return(t);
                                }
                                t = debug_1(t, j_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_48, sym_Prefix_2))
                        {
                          r_48 = ATgetArgument(q_48, 0);
                          s_48 = ATgetArgument(q_48, 1);
                          {
                            ATerm x_48 = NULL,z_48 = NULL;
                            ATerm s_35;
                            s_35 = t;
                            {
                              ATerm y_48 = NULL;
                              t = not_null(r_48);
                              {
                                t = eval_config_0(t);
                                {
                                  y_48 = t;
                                  if(((x_48 != NULL) && (x_48 != y_48)))
                                    _fail(y_48);
                                  else
                                    x_48 = y_48;
                                }
                              }
                            }
                            t = s_35;
                            {
                              ATerm a_49 = NULL;
                              t = not_null(s_48);
                              {
                                t = eval_config_0(t);
                                {
                                  a_49 = t;
                                  if(((z_48 != NULL) && (z_48 != a_49)))
                                    _fail(a_49);
                                  else
                                    z_48 = a_49;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_48), not_null(z_48));
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
  ATerm i_49 = NULL;
  i_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_35, not_null(i_49));
    {
      t = table_get_0(t);
      {
        ATerm m_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_35;
            w_35 = t;
            {
              ATerm k_49 = NULL;
              ATerm l_49 = NULL;
              l_49 = t;
              if(((k_49 != NULL) && (k_49 != l_49)))
                _fail(l_49);
              else
                k_49 = l_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_35, not_null(i_49), not_null(k_49));
                t = table_put_0(t);
              }
            }
            t = w_35;
          }
          return(t);
        }
        t = try_1(t, m_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm x_35 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_79(t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = x_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym__2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      t = SSL_table_get(not_null(r_49), not_null(s_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  z_49 = t;
  y_49 :
  if(match_cons(z_49, sym__3))
    {
      a_50 = ATgetArgument(z_49, 0);
      b_50 = ATgetArgument(z_49, 1);
      c_50 = ATgetArgument(z_49, 2);
      {
        ATerm d_36;
        d_36 = t;
        {
          ATerm g_50 = NULL;
          ATerm h_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_50), not_null(b_50));
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                t = (ATerm) ATempty;
              }
            {
              h_50 = t;
              if(((g_50 != NULL) && (g_50 != h_50)))
                _fail(h_50);
              else
                g_50 = h_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_50), not_null(b_50), (ATerm) ATinsert(CheckATermList(not_null(g_50)), not_null(c_50)));
            t = table_put_0(t);
          }
        }
        t = d_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm l_50 = NULL;
  ATerm m_50 = NULL;
  t = term_s_18;
  {
    t = x_86(t);
    {
      m_50 = t;
      if(((l_50 != NULL) && (l_50 != m_50)))
        _fail(m_50);
      else
        l_50 = m_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_33, term_t_33, not_null(l_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_string(s_50, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_50) == AT_LIST) && !(ATisEmpty(s_50))))
        {
          t_50 = ATgetFirst((ATermList) s_50);
          u_50 = (ATerm) ATgetNext((ATermList) s_50);
          {
            ATerm x_50 = NULL;
            ATerm g_36;
            g_36 = t;
            {
              t = not_null(t_50);
              t = a_0(t);
            }
            t = g_36;
            {
              ATerm y_50 = NULL;
              t = term_s_18;
              {
                t = b_0(t);
                {
                  y_50 = t;
                  if(((x_50 != NULL) && (x_50 != y_50)))
                    _fail(y_50);
                  else
                    x_50 = y_50;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_50)), not_null(x_50));
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
    ATerm d_51 = NULL;
    d_51 = t;
    c_51 :
    if(!(match_string(d_51, "--help")))
      {
        if(!(match_string(d_51, "-h")))
          {
            if(!(match_string(d_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_j_36;
    {
      t = set_config_0(t);
      t = term_o_36;
    }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_p_36;
    return(t);
  }
  t = Option_3(t, n_6, o_6, r_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  f_51 :
  if(((ATgetType(g_51) == AT_LIST) && !(ATisEmpty(g_51))))
    {
      h_51 = ATgetFirst((ATermList) g_51);
      i_51 = (ATerm) ATgetNext((ATermList) g_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  r_51 :
  if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
    {
      t_51 = ATgetFirst((ATermList) s_51);
      u_51 = (ATerm) ATgetNext((ATermList) s_51);
      {
        ATerm y_51 = NULL,a_52 = NULL;
        ATerm z_51 = NULL;
        t = SSLgetAnnotations(not_null(s_51));
        {
          z_51 = t;
          if(((y_51 != NULL) && (y_51 != z_51)))
            _fail(z_51);
          else
            y_51 = z_51;
        }
        {
          t = not_null(t_51);
          {
            ATerm c_52 = NULL;
            t = t_56(t);
            {
              a_52 = t;
              {
                t = not_null(u_51);
                {
                  ATerm e_52 = NULL;
                  t = u_56(t);
                  {
                    c_52 = t;
                    {
                      ATerm f_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_52)), not_null(a_52)), not_null(y_51));
                      {
                        f_52 = t;
                        if(((e_52 != NULL) && (e_52 != f_52)))
                          _fail(f_52);
                        else
                          e_52 = f_52;
                      }
                      t = not_null(e_52);
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
  ATerm p_52 = NULL;
  p_52 = t;
  o_52 :
  if(((ATgetType(p_52) == AT_LIST) && ATisEmpty(p_52)))
    {
      {
        ATerm r_52 = NULL,t_52 = NULL;
        ATerm q_36;
        q_36 = t;
        {
          ATerm s_52 = NULL;
          t = SSLgetAnnotations(not_null(p_52));
          {
            s_52 = t;
            if(((r_52 != NULL) && (r_52 != s_52)))
              _fail(s_52);
            else
              r_52 = s_52;
          }
        }
        t = q_36;
        {
          ATerm u_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_52));
          {
            u_52 = t;
            if(((t_52 != NULL) && (t_52 != u_52)))
              _fail(u_52);
            else
              t_52 = u_52;
          }
          t = not_null(t_52);
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
  ATerm a_53 = NULL,b_53 = NULL,d_53 = NULL;
  a_53 = t;
  z_52 :
  if(match_cons(a_53, sym__2))
    {
      b_53 = ATgetArgument(a_53, 0);
      d_53 = ATgetArgument(a_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_35, not_null(b_53), not_null(d_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm r_36;
  r_36 = t;
  {
    ATerm w_6 (ATerm t)
    {
      t = term_t_36;
      t = v_86(t);
      return(t);
    }
    t = try_1(t, w_6);
  }
  t = r_36;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm l_53 = NULL;
      ATerm u_36;
      u_36 = t;
      {
        ATerm j_53 = NULL;
        ATerm k_53 = NULL;
        k_53 = t;
        if(((j_53 != NULL) && (j_53 != k_53)))
          _fail(k_53);
        else
          j_53 = k_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_31, not_null(j_53));
          t = set_config_0(t);
        }
      }
      t = u_36;
      {
        ATerm m_53 = NULL;
        m_53 = t;
        if(((l_53 != NULL) && (l_53 != m_53)))
          _fail(m_53);
        else
          l_53 = m_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_53));
      }
      return(t);
    }
    ATerm y_6 (ATerm t)
    {
      ATerm v_36 = t;
      int x_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_36 = t;
          int z_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(z_36);
            }
          else
            {
              t = y_36;
              {
                t = v_86(t);
                t = Cons_2(t, _id, y_6);
              }
            }
          ;
          LocalPopChoice(x_36);
        }
      else
        {
          t = v_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_6, y_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  ATerm b_37;
  b_37 = t;
  {
    ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
    v_53 = t;
    r_53 :
    if(match_cons(v_53, sym__3))
      {
        w_53 = ATgetArgument(v_53, 0);
        x_53 = ATgetArgument(v_53, 1);
        y_53 = ATgetArgument(v_53, 2);
        {
          if(((s_53 != NULL) && (s_53 != w_53)))
            _fail(w_53);
          else
            s_53 = w_53;
          {
            if(((t_53 != NULL) && (t_53 != x_53)))
              _fail(x_53);
            else
              t_53 = x_53;
            {
              if(((u_53 != NULL) && (u_53 != y_53)))
                _fail(y_53);
              else
                u_53 = y_53;
              t = SSL_table_put(not_null(s_53), not_null(t_53), not_null(u_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm b_54 = NULL;
  ATerm c_37;
  c_37 = t;
  {
    t = term_d_37;
    t = table_put_0(t);
  }
  t = c_37;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm f_37 = t;
      int g_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_86(t);
          ;
          LocalPopChoice(g_37);
        }
      else
        {
          t = f_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_7);
    {
      ATerm g_7 (ATerm t)
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_37;
            r_37 = t;
            {
              ATerm s_37 = t;
              int t_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_37);
                }
              else
                {
                  t = s_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_37;
            {
              t = system_usage_0(t);
              {
                t = term_f_27;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm k_7 (ATerm t)
              {
                ATerm l_7 (ATerm t)
                {
                  ATerm c_54 = NULL;
                  c_54 = t;
                  if(((b_54 != NULL) && (b_54 != c_54)))
                    _fail(c_54);
                  else
                    b_54 = c_54;
                  return(t);
                }
                t = Undefined_1(t, l_7);
                return(t);
              }
              t = option_defined_1(t, k_7);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_u_37));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_7);
      {
        ATerm v_37;
        v_37 = t;
        {
          t = term_s_33;
          t = table_destroy_0(t);
        }
        t = v_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm))
{
  t = parse_options_1(t, z_84);
  {
    t = store_options_0(t);
    {
      t = b_85(t);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_85);
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            {
              ATerm c_38 = t;
              int d_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_85(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(d_38);
                }
              else
                {
                  t = c_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  t = option_wrap_4(t, d_85, default_usage_0, _id, e_85);
  return(t);
}
ATerm io_ppgen_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    t = xtc_io_1(t, ppgen_0);
    return(t);
  }
  t = option_wrap_2(t, ppgen_options_0, m_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ppgen_0(t);
  return(t);
}
