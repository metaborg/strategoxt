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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  init_constant_terms();
}
ATerm term_d_37;
ATerm term_r_36;
ATerm term_a_36;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_z_34;
ATerm term_q_34;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_u_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_o_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_s_24;
ATerm term_y_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_j_11;
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
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
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
ATerm term_p_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_q_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_v_22);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_x_25);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_s_7);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_n_11);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_11);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_s_7);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_e_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_s_7);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__3, term_d_33, term_e_33, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0 (ATerm);
ATerm xtc_close_fd_0 (ATerm);
ATerm fdcopy_0 (ATerm);
ATerm finally_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm File_as_fd_1 (ATerm, ATerm y_88 (ATerm));
ATerm STDERR__FILENO_0 (ATerm);
ATerm STDOUT__FILENO_0 (ATerm);
ATerm STDIN__FILENO_0 (ATerm);
ATerm open_0 (ATerm);
ATerm xtc_open_fd_0 (ATerm);
ATerm xtc_new_file_name_0 (ATerm);
ATerm xtc_cat_0 (ATerm);
ATerm print_0 (ATerm);
ATerm print_to_0 (ATerm);
ATerm create_footer_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm y_89 (ATerm), ATerm z_89 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm a_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm r_89 (ATerm), ATerm s_89 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm month2abbr_0 (ATerm);
ATerm month2text_0 (ATerm);
ATerm day_of_week2abbr_0 (ATerm);
ATerm day_of_week2text_0 (ATerm);
ATerm lt_0 (ATerm);
ATerm leq_lt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm comp_comp_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm leq_leq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm for_3 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm pos_0 (ATerm);
ATerm align_helper_0 (ATerm);
ATerm align_right_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm));
ATerm length_0 (ATerm);
ATerm string_length_0 (ATerm);
ATerm mod_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm month2index_0 (ATerm);
ATerm date_pattern_to_int_0 (ATerm);
ATerm date_pattern_to_string_0 (ATerm);
ATerm date_format_0 (ATerm);
ATerm index2day_of_week_0 (ATerm);
ATerm index2month_0 (ATerm);
ATerm prim_tuple_to_ComponentTime_0 (ATerm);
ATerm epoch2local_time_0 (ATerm);
ATerm now_epoch_time_0 (ATerm);
ATerm now_local_time_0 (ATerm);
ATerm create_time_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_title_0 (ATerm);
ATerm create_header_0 (ATerm);
ATerm xtc_io_1 (ATerm, ATerm g_89 (ATerm));
ATerm abox2html_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm q_79 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm a_88 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm v_74 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_76 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm z_87 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm b_88 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm));
ATerm union_1 (ATerm, ATerm b_73 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm o_78 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm p_89 (ATerm));
ATerm assert_1 (ATerm, ATerm l_78 (ATerm));
ATerm obsolete_1 (ATerm, ATerm x_62 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_generate_2 (ATerm, ATerm d_90 (ATerm), ATerm e_90 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_78 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_66 (ATerm), ATerm v_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_78 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm f_89 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm h_89 (ATerm));
ATerm gen_css_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2html_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm crush_2 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_61 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_80 (ATerm));
ATerm Program_1 (ATerm, ATerm d_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_62 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_67 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm c_54 (ATerm), ATerm d_54 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_62 (ATerm));
ATerm map_1 (ATerm, ATerm e_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm p_61 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm io_abox2html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm close_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_close(not_null(c_0));
  return(t);
}
ATerm xtc_close_fd_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_7;
            f_7 = t;
            {
              ATerm j_1 = NULL,y_1 = NULL;
              ATerm n_7;
              n_7 = t;
              {
                ATerm k_1 = NULL;
                k_1 = t;
                if(((j_1 != NULL) && (j_1 != k_1)))
                  _fail(k_1);
                else
                  j_1 = k_1;
              }
              t = n_7;
              {
                ATerm z_1 = NULL;
                t = term_s_7;
                {
                  t = STDIN__FILENO_0(t);
                  {
                    z_1 = t;
                    if(((y_1 != NULL) && (y_1 != z_1)))
                      _fail(z_1);
                    else
                      y_1 = z_1;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_1), not_null(y_1));
                  t = eq_0(t);
                }
              }
            }
            t = f_7;
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_7;
                  v_7 = t;
                  {
                    ATerm a_2 = NULL,t_2 = NULL;
                    ATerm w_7;
                    w_7 = t;
                    {
                      ATerm s_2 = NULL;
                      s_2 = t;
                      if(((a_2 != NULL) && (a_2 != s_2)))
                        _fail(s_2);
                      else
                        a_2 = s_2;
                    }
                    t = w_7;
                    {
                      ATerm u_2 = NULL;
                      t = term_s_7;
                      {
                        t = STDOUT__FILENO_0(t);
                        {
                          u_2 = t;
                          if(((t_2 != NULL) && (t_2 != u_2)))
                            _fail(u_2);
                          else
                            t_2 = u_2;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_2), not_null(t_2));
                        t = eq_0(t);
                      }
                    }
                  }
                  t = v_7;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                  {
                    ATerm x_7;
                    x_7 = t;
                    {
                      ATerm y_2 = NULL,a_3 = NULL;
                      ATerm y_7;
                      y_7 = t;
                      {
                        ATerm z_2 = NULL;
                        z_2 = t;
                        if(((y_2 != NULL) && (y_2 != z_2)))
                          _fail(z_2);
                        else
                          y_2 = z_2;
                      }
                      t = y_7;
                      {
                        ATerm b_3 = NULL;
                        t = term_s_7;
                        {
                          t = STDERR__FILENO_0(t);
                          {
                            b_3 = t;
                            if(((a_3 != NULL) && (a_3 != b_3)))
                              _fail(b_3);
                            else
                              a_3 = b_3;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
                          t = eq_0(t);
                        }
                      }
                    }
                    t = x_7;
                  }
                }
            }
          }
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = close_0(t);
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  t = finally_2(t, b_0, e_0);
  return(t);
}
ATerm fdcopy_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  j_3 :
  if(match_cons(k_3, sym__2))
    {
      l_3 = ATgetArgument(k_3, 0);
      m_3 = ATgetArgument(k_3, 1);
      t = SSL_fdcopy(not_null(l_3), not_null(m_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_66(t);
      LocalPopChoice(a_8);
      {
        ATerm d_8;
        d_8 = t;
        t = x_66(t);
        t = d_8;
      }
    }
  else
    {
      t = z_7;
      {
        ATerm i_8;
        i_8 = t;
        t = x_66(t);
        t = i_8;
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm r_3 = NULL;
  t = xtc_open_fd_0(t);
  {
    r_3 = t;
    {
      ATerm f_0 (ATerm t)
      {
        ATerm j_8;
        j_8 = t;
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(r_3);
            t = xtc_close_fd_0(t);
            return(t);
          }
          t = try_1(t, p_0);
        }
        t = j_8;
        return(t);
      }
      t = finally_2(t, y_88, f_0);
    }
  }
  return(t);
}
ATerm STDERR__FILENO_0 (ATerm t)
{
  t = SSL_STDERR_FILENO();
  return(t);
}
ATerm STDOUT__FILENO_0 (ATerm t)
{
  t = SSL_STDOUT_FILENO();
  return(t);
}
ATerm STDIN__FILENO_0 (ATerm t)
{
  t = SSL_STDIN_FILENO();
  return(t);
}
ATerm open_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  t = SSL_open(not_null(v_3));
  return(t);
}
ATerm xtc_open_fd_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  c_4 :
  if(match_cons(e_4, sym_FILE_1))
    {
      d_4 = ATgetArgument(e_4, 0);
      {
        t = not_null(d_4);
        t = open_0(t);
      }
    }
  else
    {
      if(match_cons(e_4, sym_stdin_0))
        {
          t = term_s_7;
          t = STDIN__FILENO_0(t);
        }
      else
        {
          if(match_cons(e_4, sym_stdout_0))
            {
              t = term_s_7;
              t = STDOUT__FILENO_0(t);
            }
          else
            {
              if(match_cons(e_4, sym_stderr_0))
                {
                  t = term_s_7;
                  t = STDERR__FILENO_0(t);
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
ATerm xtc_new_file_name_0 (ATerm t)
{
  ATerm l_4 = NULL;
  t = new_file_0(t);
  {
    l_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_s_7);
      {
        ATerm q_0 (ATerm t)
        {
          t = term_k_8;
          return(t);
        }
        t = assert_1(t, q_0);
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_4));
    }
  }
  return(t);
}
ATerm xtc_cat_0 (ATerm t)
{
  ATerm s_4 = NULL;
  ATerm u_4 = NULL,v_4 = NULL;
  s_4 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    t = xtc_new_file_name_0(t);
    {
      w_4 = t;
      {
        if(((u_4 != NULL) && (u_4 != w_4)))
          _fail(w_4);
        else
          u_4 = w_4;
        {
          t = not_null(u_4);
          {
            t = xtc_open_fd_0(t);
            {
              x_4 = t;
              {
                if(((v_4 != NULL) && (v_4 != x_4)))
                  _fail(x_4);
                else
                  v_4 = x_4;
                {
                  t = not_null(s_4);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm s_0 (ATerm t)
                      {
                        ATerm y_4 = NULL;
                        ATerm z_4 = NULL;
                        z_4 = t;
                        if(((y_4 != NULL) && (y_4 != z_4)))
                          _fail(z_4);
                        else
                          y_4 = z_4;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_4), not_null(v_4));
                          t = fdcopy_0(t);
                        }
                        return(t);
                      }
                      t = File_as_fd_1(t, s_0);
                      return(t);
                    }
                    t = map_1(t, r_0);
                    {
                      t = not_null(v_4);
                      t = xtc_close_fd_0(t);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(u_4);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym__2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      {
        ATerm l_8;
        l_8 = t;
        t = SSL_print(not_null(h_5), not_null(i_5));
        t = l_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm print_to_0 (ATerm t)
{
  ATerm o_5 = NULL;
  ATerm q_5 = NULL;
  o_5 = t;
  {
    ATerm r_5 = NULL;
    t = xtc_new_file_0(t);
    {
      r_5 = t;
      {
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(o_5));
          {
            t = print_0(t);
            {
              t = not_null(q_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_5));
  }
  return(t);
}
ATerm create_footer_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_8), term_m_8);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  z_5 = t;
  y_5 :
  if(match_cons(z_5, sym_stdin_0))
    {
      ATerm b_6 = NULL;
      ATerm c_6 = NULL;
      t = term_o_8;
      {
        t = ReadFromFile_0(t);
        {
          c_6 = t;
          if(((b_6 != NULL) && (b_6 != c_6)))
            _fail(c_6);
          else
            b_6 = c_6;
        }
      }
      t = not_null(b_6);
    }
  else
    {
      if(match_cons(z_5, sym_FILE_1))
        {
          a_6 = ATgetArgument(z_5, 0);
          {
            ATerm e_6 = NULL;
            ATerm f_6 = NULL;
            t = not_null(a_6);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_6 = t;
                  if(((e_6 != NULL) && (e_6 != f_6)))
                    _fail(f_6);
                  else
                    e_6 = f_6;
                }
              }
            }
            t = not_null(e_6);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  m_6 = t;
  l_6 :
  if(match_cons(m_6, sym__2))
    {
      n_6 = ATgetArgument(m_6, 0);
      o_6 = ATgetArgument(m_6, 1);
      t = SSL_WriteToBinaryFile(not_null(n_6), not_null(o_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm w_6 = NULL;
  u_6 = t;
  {
    ATerm x_6 = NULL;
    t = xtc_new_file_0(t);
    {
      x_6 = t;
      {
        if(((w_6 != NULL) && (w_6 != x_6)))
          _fail(x_6);
        else
          w_6 = x_6;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_6), not_null(u_6));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(w_6);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_6));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm y_89 (ATerm), ATerm z_89 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, y_89, z_89);
    t = read_from_0(t);
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym_stdin_0))
    {
      ATerm j_7 = NULL;
      ATerm k_7 = NULL;
      ATerm l_7 = NULL;
      t = xtc_new_file_0(t);
      {
        k_7 = t;
        {
          if(((j_7 != NULL) && (j_7 != k_7)))
            _fail(k_7);
          else
            j_7 = k_7;
          {
            ATerm m_7 = NULL;
            t = o_0(t);
            {
              m_7 = t;
              if(((l_7 != NULL) && (l_7 != m_7)))
                _fail(m_7);
              else
                l_7 = m_7;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_7)), term_s_8));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(j_7);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_7));
    }
  else
    {
      if(match_cons(h_7, sym_FILE_1))
        {
          i_7 = ATgetArgument(h_7, 0);
          {
            ATerm o_7 = NULL;
            ATerm p_7 = NULL;
            t = not_null(i_7);
            {
              ATerm q_7 = NULL;
              t = xtc_new_file_0(t);
              {
                p_7 = t;
                {
                  if(((o_7 != NULL) && (o_7 != p_7)))
                    _fail(p_7);
                  else
                    o_7 = p_7;
                  {
                    ATerm r_7 = NULL;
                    t = o_0(t);
                    {
                      r_7 = t;
                      if(((q_7 != NULL) && (q_7 != r_7)))
                        _fail(r_7);
                      else
                        q_7 = r_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_7)), term_s_8), not_null(i_7)), term_t_8));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(o_7);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_7));
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
  ATerm c_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_stdin_0))
    {
      ATerm e_8 = NULL,g_8 = NULL;
      ATerm x_8;
      x_8 = t;
      {
        ATerm f_8 = NULL;
        t = SSLgetAnnotations(not_null(c_8));
        {
          f_8 = t;
          if(((e_8 != NULL) && (e_8 != f_8)))
            _fail(f_8);
          else
            e_8 = f_8;
        }
      }
      t = x_8;
      {
        ATerm h_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(e_8));
        {
          h_8 = t;
          if(((g_8 != NULL) && (g_8 != h_8)))
            _fail(h_8);
          else
            g_8 = h_8;
        }
        t = not_null(g_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_FILE_1))
    {
      r_8 = ATgetArgument(q_8, 0);
      {
        ATerm u_8 = NULL,w_8 = NULL;
        ATerm v_8 = NULL;
        t = SSLgetAnnotations(not_null(q_8));
        {
          v_8 = t;
          if(((u_8 != NULL) && (u_8 != v_8)))
            _fail(v_8);
          else
            u_8 = v_8;
        }
        {
          t = not_null(r_8);
          {
            ATerm y_8 = NULL;
            t = a_61(t);
            {
              w_8 = t;
              {
                ATerm z_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(w_8)), not_null(u_8));
                {
                  z_8 = t;
                  if(((y_8 != NULL) && (y_8 != z_8)))
                    _fail(z_8);
                  else
                    y_8 = z_8;
                }
                t = not_null(y_8);
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
ATerm xtc_transform_2 (ATerm t, ATerm r_89 (ATerm), ATerm s_89 (ATerm))
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
          t = stdin_0(t);
        }
      LocalPopChoice(b_9);
      t = xtc_transform_file_2(t, r_89, s_89);
    }
  else
    {
      t = a_9;
      t = xtc_transform_term_2(t, r_89, s_89);
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
ATerm Fst_0 (ATerm t)
{
  ATerm k_9 = NULL;
  ATerm m_9 = NULL,n_9 = NULL;
  k_9 = t;
  {
    ATerm o_9 = NULL;
    ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
    t = not_null(k_9);
    {
      o_9 = t;
      {
        t = SSL_explode_term(not_null(o_9));
        {
          q_9 = t;
          h_9 :
          if(match_cons(q_9, sym__2))
            {
              r_9 = ATgetArgument(q_9, 0);
              s_9 = ATgetArgument(q_9, 1);
              i_9 :
              if(match_string(r_9, ""))
                {
                  j_9 :
                  if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
                    {
                      t_9 = ATgetFirst((ATermList) s_9);
                      u_9 = (ATerm) ATgetNext((ATermList) s_9);
                      {
                        if(((n_9 != NULL) && (n_9 != t_9)))
                          _fail(t_9);
                        else
                          n_9 = t_9;
                        if(((m_9 != NULL) && (m_9 != u_9)))
                          _fail(u_9);
                        else
                          m_9 = u_9;
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
    t = not_null(n_9);
  }
  return(t);
}
ATerm month2abbr_0 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_December_0))
    {
      t = term_e_9;
    }
  else
    {
      if(match_cons(l_10, sym_November_0))
        {
          t = term_f_9;
        }
      else
        {
          if(match_cons(l_10, sym_October_0))
            {
              t = term_g_9;
            }
          else
            {
              if(match_cons(l_10, sym_September_0))
                {
                  t = term_l_9;
                }
              else
                {
                  if(match_cons(l_10, sym_August_0))
                    {
                      t = term_p_9;
                    }
                  else
                    {
                      if(match_cons(l_10, sym_July_0))
                        {
                          t = term_v_9;
                        }
                      else
                        {
                          if(match_cons(l_10, sym_June_0))
                            {
                              t = term_w_9;
                            }
                          else
                            {
                              if(match_cons(l_10, sym_May_0))
                                {
                                  t = term_x_9;
                                }
                              else
                                {
                                  if(match_cons(l_10, sym_April_0))
                                    {
                                      t = term_y_9;
                                    }
                                  else
                                    {
                                      if(match_cons(l_10, sym_March_0))
                                        {
                                          t = term_z_9;
                                        }
                                      else
                                        {
                                          if(match_cons(l_10, sym_February_0))
                                            {
                                              t = term_a_10;
                                            }
                                          else
                                            {
                                              if(match_cons(l_10, sym_January_0))
                                                {
                                                  t = term_b_10;
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
  return(t);
}
ATerm month2text_0 (ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_December_0))
    {
      t = term_c_10;
    }
  else
    {
      if(match_cons(l_11, sym_November_0))
        {
          t = term_d_10;
        }
      else
        {
          if(match_cons(l_11, sym_October_0))
            {
              t = term_e_10;
            }
          else
            {
              if(match_cons(l_11, sym_September_0))
                {
                  t = term_f_10;
                }
              else
                {
                  if(match_cons(l_11, sym_August_0))
                    {
                      t = term_g_10;
                    }
                  else
                    {
                      if(match_cons(l_11, sym_July_0))
                        {
                          t = term_h_10;
                        }
                      else
                        {
                          if(match_cons(l_11, sym_June_0))
                            {
                              t = term_i_10;
                            }
                          else
                            {
                              if(match_cons(l_11, sym_May_0))
                                {
                                  t = term_x_9;
                                }
                              else
                                {
                                  if(match_cons(l_11, sym_April_0))
                                    {
                                      t = term_j_10;
                                    }
                                  else
                                    {
                                      if(match_cons(l_11, sym_March_0))
                                        {
                                          t = term_m_10;
                                        }
                                      else
                                        {
                                          if(match_cons(l_11, sym_February_0))
                                            {
                                              t = term_n_10;
                                            }
                                          else
                                            {
                                              if(match_cons(l_11, sym_January_0))
                                                {
                                                  t = term_o_10;
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
  return(t);
}
ATerm day_of_week2abbr_0 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_Saturday_0))
    {
      t = term_p_10;
    }
  else
    {
      if(match_cons(g_12, sym_Friday_0))
        {
          t = term_q_10;
        }
      else
        {
          if(match_cons(g_12, sym_Thursday_0))
            {
              t = term_r_10;
            }
          else
            {
              if(match_cons(g_12, sym_Wednesday_0))
                {
                  t = term_s_10;
                }
              else
                {
                  if(match_cons(g_12, sym_Tuesday_0))
                    {
                      t = term_t_10;
                    }
                  else
                    {
                      if(match_cons(g_12, sym_Monday_0))
                        {
                          t = term_u_10;
                        }
                      else
                        {
                          if(match_cons(g_12, sym_Sunday_0))
                            {
                              t = term_v_10;
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
ATerm day_of_week2text_0 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_Saturday_0))
    {
      t = term_w_10;
    }
  else
    {
      if(match_cons(w_12, sym_Friday_0))
        {
          t = term_x_10;
        }
      else
        {
          if(match_cons(w_12, sym_Thursday_0))
            {
              t = term_y_10;
            }
          else
            {
              if(match_cons(w_12, sym_Wednesday_0))
                {
                  t = term_z_10;
                }
              else
                {
                  if(match_cons(w_12, sym_Tuesday_0))
                    {
                      t = term_a_11;
                    }
                  else
                    {
                      if(match_cons(w_12, sym_Monday_0))
                        {
                          t = term_b_11;
                        }
                      else
                        {
                          if(match_cons(w_12, sym_Sunday_0))
                            {
                              t = term_c_11;
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
ATerm lt_0 (ATerm t)
{
  ATerm d_11 = t;
  if((PushChoice() == 0))
    {
      t = geq_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_11;
    }
  return(t);
}
ATerm leq_lt_0 (ATerm t)
{
  t = comp_comp_2(t, leq_0, lt_0);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm e_11 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_11;
    }
  return(t);
}
ATerm comp_comp_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__3))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      j_13 = ATgetArgument(g_13, 2);
      {
        ATerm f_11;
        f_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(i_13));
          {
            t = d_78(t);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(j_13));
              t = e_78(t);
            }
          }
        }
        t = f_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_leq_0 (ATerm t)
{
  t = comp_comp_2(t, leq_0, leq_0);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm o_13 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_77(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          t = f_77(t);
          t = o_13(t);
        }
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm))
{
  t = h_77(t);
  t = while_not_2(t, i_77, j_77);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
    x_13 = t;
    q_13 :
    if(match_cons(x_13, sym__2))
      {
        y_13 = ATgetArgument(x_13, 0);
        z_13 = ATgetArgument(x_13, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(y_13), not_null(z_13), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
    c_14 = t;
    s_13 :
    if(match_cons(c_14, sym__3))
      {
        d_14 = ATgetArgument(c_14, 0);
        e_14 = ATgetArgument(c_14, 1);
        f_14 = ATgetArgument(c_14, 2);
        t_13 :
        if(match_int(d_14, 0))
          {
            t = not_null(f_14);
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
  ATerm v_0 (ATerm t)
  {
    ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
    i_14 = t;
    w_13 :
    if(match_cons(i_14, sym__3))
      {
        j_14 = ATgetArgument(i_14, 0);
        k_14 = ATgetArgument(i_14, 1);
        l_14 = ATgetArgument(i_14, 2);
        {
          ATerm p_14 = NULL;
          ATerm i_11;
          i_11 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), term_j_11);
            t = geq_0(t);
          }
          t = i_11;
          {
            ATerm q_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_14), term_j_11);
            {
              t = subt_0(t);
              {
                q_14 = t;
                if(((p_14 != NULL) && (p_14 != q_14)))
                  _fail(q_14);
                else
                  p_14 = q_14;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_14), not_null(k_14), (ATerm) ATinsert(CheckATermList(not_null(l_14)), not_null(k_14)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, t_0, u_0, v_0);
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
  ATerm m_11;
  m_11 = t;
  {
    ATerm w_14 = NULL;
    ATerm x_14 = NULL;
    x_14 = t;
    if(((w_14 != NULL) && (w_14 != x_14)))
      _fail(x_14);
    else
      w_14 = x_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), term_n_11);
      t = geq_0(t);
    }
  }
  t = m_11;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__3))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      h_15 = ATgetArgument(e_15, 2);
      {
        ATerm l_15 = NULL;
        ATerm m_15 = NULL,q_15 = NULL;
        t = not_null(g_15);
        {
          t = string_length_0(t);
          {
            ATerm n_15 = NULL;
            n_15 = t;
            if(((m_15 != NULL) && (m_15 != n_15)))
              _fail(n_15);
            else
              m_15 = n_15;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), not_null(m_15));
              {
                t = subt_0(t);
                {
                  ATerm o_11 = t;
                  int p_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(p_11);
                      {
                        ATerm o_15 = NULL;
                        ATerm p_15 = NULL;
                        p_15 = t;
                        if(((o_15 != NULL) && (o_15 != p_15)))
                          _fail(p_15);
                        else
                          o_15 = p_15;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), not_null(f_15));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = o_11;
                      t = term_q_11;
                    }
                  {
                    q_15 = t;
                    if(((l_15 != NULL) && (l_15 != q_15)))
                      _fail(q_15);
                    else
                      l_15 = q_15;
                  }
                }
              }
            }
          }
        }
        t = not_null(l_15);
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym__3))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      b_16 = ATgetArgument(y_15, 2);
      {
        ATerm f_16 = NULL;
        ATerm g_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_15), not_null(a_16), not_null(b_16));
        {
          t = align_helper_0(t);
          {
            g_16 = t;
            if(((f_16 != NULL) && (f_16 != g_16)))
              _fail(g_16);
            else
              f_16 = g_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(a_16));
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
ATerm foldr_3 (ATerm t, ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm))
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_73(t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
        n_16 = t;
        m_16 :
        if(((ATgetType(n_16) == AT_LIST) && !(ATisEmpty(n_16))))
          {
            o_16 = ATgetFirst((ATermList) n_16);
            p_16 = (ATerm) ATgetNext((ATermList) n_16);
            {
              ATerm s_16 = NULL,u_16 = NULL;
              ATerm t_11;
              t_11 = t;
              {
                ATerm t_16 = NULL;
                t = not_null(o_16);
                {
                  t = w_73(t);
                  {
                    t_16 = t;
                    if(((s_16 != NULL) && (s_16 != t_16)))
                      _fail(t_16);
                    else
                      s_16 = t_16;
                  }
                }
              }
              t = t_11;
              {
                ATerm v_16 = NULL;
                t = not_null(p_16);
                {
                  t = foldr_3(t, u_73, v_73, w_73);
                  {
                    v_16 = t;
                    if(((u_16 != NULL) && (u_16 != v_16)))
                      _fail(v_16);
                    else
                      u_16 = v_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), not_null(u_16));
                  t = v_73(t);
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
  ATerm w_0 (ATerm t)
  {
    t = term_n_11;
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = foldr_3(t, w_0, add_0, x_0);
  return(t);
}
ATerm string_length_0 (ATerm t)
{
  t = explode_string_0(t);
  t = length_0(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      t = SSL_mod(not_null(c_17), not_null(d_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm i_17 = NULL;
  ATerm j_17 = NULL;
  j_17 = t;
  if(((i_17 != NULL) && (i_17 != j_17)))
    _fail(j_17);
  else
    i_17 = j_17;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), term_j_11);
    t = add_0(t);
  }
  return(t);
}
ATerm month2index_0 (ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_December_0))
    {
      t = term_u_11;
    }
  else
    {
      if(match_cons(y_17, sym_November_0))
        {
          t = term_v_11;
        }
      else
        {
          if(match_cons(y_17, sym_October_0))
            {
              t = term_w_11;
            }
          else
            {
              if(match_cons(y_17, sym_September_0))
                {
                  t = term_x_11;
                }
              else
                {
                  if(match_cons(y_17, sym_August_0))
                    {
                      t = term_y_11;
                    }
                  else
                    {
                      if(match_cons(y_17, sym_July_0))
                        {
                          t = term_z_11;
                        }
                      else
                        {
                          if(match_cons(y_17, sym_June_0))
                            {
                              t = term_a_12;
                            }
                          else
                            {
                              if(match_cons(y_17, sym_May_0))
                                {
                                  t = term_b_12;
                                }
                              else
                                {
                                  if(match_cons(y_17, sym_April_0))
                                    {
                                      t = term_c_12;
                                    }
                                  else
                                    {
                                      if(match_cons(y_17, sym_March_0))
                                        {
                                          t = term_d_12;
                                        }
                                      else
                                        {
                                          if(match_cons(y_17, sym_February_0))
                                            {
                                              t = term_j_11;
                                            }
                                          else
                                            {
                                              if(match_cons(y_17, sym_January_0))
                                                {
                                                  t = term_n_11;
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
  return(t);
}
ATerm date_pattern_to_int_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  ATerm f_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(i_20), term_h_12);
    t = leq_leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_e_12);
      t = subt_0(t);
    }
    return(t);
  }
  ATerm g_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_11, not_null(i_20), term_e_12);
    t = leq_leq_0(t);
    t = not_null(i_20);
    return(t);
  }
  ATerm i_22 (ATerm t)
  {
    t = term_e_12;
    return(t);
  }
  ATerm j_22 (ATerm t)
  {
    t = not_null(i_20);
    t = inc_0(t);
    return(t);
  }
  ATerm k_22 (ATerm t)
  {
    t = not_null(i_20);
    return(t);
  }
  ATerm l_22 (ATerm t)
  {
    t = not_null(m_20);
    return(t);
  }
  ATerm m_22 (ATerm t)
  {
    t = not_null(m_20);
    return(t);
  }
  ATerm n_22 (ATerm t)
  {
    t = not_null(t_20);
    return(t);
  }
  ATerm o_22 (ATerm t)
  {
    t = not_null(t_20);
    return(t);
  }
  ATerm p_22 (ATerm t)
  {
    t = not_null(s_20);
    {
      t = month2index_0(t);
      t = inc_0(t);
    }
    return(t);
  }
  ATerm q_22 (ATerm t)
  {
    t = not_null(s_20);
    {
      t = month2index_0(t);
      t = inc_0(t);
    }
    return(t);
  }
  ATerm r_22 (ATerm t)
  {
    ATerm n_21 = NULL;
    t = not_null(r_20);
    {
      ATerm o_21 = NULL;
      o_21 = t;
      if(((n_21 != NULL) && (n_21 != o_21)))
        _fail(o_21);
      else
        n_21 = o_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), term_i_12);
        t = mod_0(t);
      }
    }
    return(t);
  }
  ATerm s_22 (ATerm t)
  {
    t = not_null(r_20);
    return(t);
  }
  n_20 = t;
  d_19 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      e_19 :
      if(match_string(o_20, "ss"))
        {
          f_19 :
          if(match_cons(p_20, sym_ComponentTime_3))
            {
              q_20 = ATgetArgument(p_20, 0);
              u_20 = ATgetArgument(p_20, 1);
              v_20 = ATgetArgument(p_20, 2);
              g_19 :
              if(match_cons(u_20, sym_DayTime_3))
                {
                  i_20 = ATgetArgument(u_20, 0);
                  j_20 = ATgetArgument(u_20, 1);
                  k_20 = ATgetArgument(u_20, 2);
                  t = not_null(k_20);
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
          if(match_string(o_20, "mm"))
            {
              h_19 :
              if(match_cons(p_20, sym_ComponentTime_3))
                {
                  q_20 = ATgetArgument(p_20, 0);
                  u_20 = ATgetArgument(p_20, 1);
                  v_20 = ATgetArgument(p_20, 2);
                  i_19 :
                  if(match_cons(u_20, sym_DayTime_3))
                    {
                      i_20 = ATgetArgument(u_20, 0);
                      j_20 = ATgetArgument(u_20, 1);
                      k_20 = ATgetArgument(u_20, 2);
                      t = not_null(j_20);
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
              if(match_string(o_20, "KK"))
                {
                  j_19 :
                  if(match_cons(p_20, sym_ComponentTime_3))
                    {
                      q_20 = ATgetArgument(p_20, 0);
                      u_20 = ATgetArgument(p_20, 1);
                      v_20 = ATgetArgument(p_20, 2);
                      k_19 :
                      if(match_cons(u_20, sym_DayTime_3))
                        {
                          i_20 = ATgetArgument(u_20, 0);
                          j_20 = ATgetArgument(u_20, 1);
                          k_20 = ATgetArgument(u_20, 2);
                          {
                            ATerm j_12 = t;
                            int k_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(i_20), term_h_12);
                                t = leq_leq_0(t);
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_e_12);
                                  t = subt_0(t);
                                }
                                LocalPopChoice(k_12);
                              }
                            else
                              {
                                t = j_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, term_n_11, not_null(i_20), term_e_12);
                                  t = leq_lt_0(t);
                                  t = not_null(i_20);
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
              else
                {
                  if(match_string(o_20, "hh"))
                    {
                      l_19 :
                      if(match_cons(p_20, sym_ComponentTime_3))
                        {
                          q_20 = ATgetArgument(p_20, 0);
                          u_20 = ATgetArgument(p_20, 1);
                          v_20 = ATgetArgument(p_20, 2);
                          m_19 :
                          if(match_cons(u_20, sym_DayTime_3))
                            {
                              i_20 = ATgetArgument(u_20, 0);
                              j_20 = ATgetArgument(u_20, 1);
                              k_20 = ATgetArgument(u_20, 2);
                              n_19 :
                              if(match_int(i_20, 0))
                                {
                                  ATerm l_12 = t;
                                  int m_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = f_22(t);
                                      LocalPopChoice(m_12);
                                    }
                                  else
                                    {
                                      t = l_12;
                                      {
                                        ATerm n_12 = t;
                                        int o_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = g_22(t);
                                            LocalPopChoice(o_12);
                                          }
                                        else
                                          {
                                            t = n_12;
                                            t = i_22(t);
                                          }
                                      }
                                    }
                                }
                              else
                                {
                                  ATerm p_12 = t;
                                  int q_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = f_22(t);
                                      LocalPopChoice(q_12);
                                    }
                                  else
                                    {
                                      t = p_12;
                                      t = g_22(t);
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
                      if(match_string(o_20, "kk"))
                        {
                          o_19 :
                          if(match_cons(p_20, sym_ComponentTime_3))
                            {
                              q_20 = ATgetArgument(p_20, 0);
                              u_20 = ATgetArgument(p_20, 1);
                              v_20 = ATgetArgument(p_20, 2);
                              p_19 :
                              if(match_cons(u_20, sym_DayTime_3))
                                {
                                  i_20 = ATgetArgument(u_20, 0);
                                  j_20 = ATgetArgument(u_20, 1);
                                  k_20 = ATgetArgument(u_20, 2);
                                  t = j_22(t);
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
                          if(match_string(o_20, "HH"))
                            {
                              q_19 :
                              if(match_cons(p_20, sym_ComponentTime_3))
                                {
                                  q_20 = ATgetArgument(p_20, 0);
                                  u_20 = ATgetArgument(p_20, 1);
                                  v_20 = ATgetArgument(p_20, 2);
                                  r_19 :
                                  if(match_cons(u_20, sym_DayTime_3))
                                    {
                                      i_20 = ATgetArgument(u_20, 0);
                                      j_20 = ATgetArgument(u_20, 1);
                                      k_20 = ATgetArgument(u_20, 2);
                                      t = k_22(t);
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
                              if(match_string(o_20, "DD"))
                                {
                                  s_19 :
                                  if(match_cons(p_20, sym_ComponentTime_3))
                                    {
                                      q_20 = ATgetArgument(p_20, 0);
                                      u_20 = ATgetArgument(p_20, 1);
                                      v_20 = ATgetArgument(p_20, 2);
                                      t_19 :
                                      if(match_cons(v_20, sym_Dupl_2))
                                        {
                                          l_20 = ATgetArgument(v_20, 0);
                                          m_20 = ATgetArgument(v_20, 1);
                                          t = l_22(t);
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
                                  if(match_string(o_20, "D"))
                                    {
                                      u_19 :
                                      if(match_cons(p_20, sym_ComponentTime_3))
                                        {
                                          q_20 = ATgetArgument(p_20, 0);
                                          u_20 = ATgetArgument(p_20, 1);
                                          v_20 = ATgetArgument(p_20, 2);
                                          v_19 :
                                          if(match_cons(v_20, sym_Dupl_2))
                                            {
                                              l_20 = ATgetArgument(v_20, 0);
                                              m_20 = ATgetArgument(v_20, 1);
                                              t = m_22(t);
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
                                      if(match_string(o_20, "dd"))
                                        {
                                          w_19 :
                                          if(match_cons(p_20, sym_ComponentTime_3))
                                            {
                                              q_20 = ATgetArgument(p_20, 0);
                                              u_20 = ATgetArgument(p_20, 1);
                                              v_20 = ATgetArgument(p_20, 2);
                                              x_19 :
                                              if(match_cons(q_20, sym_Date_3))
                                                {
                                                  r_20 = ATgetArgument(q_20, 0);
                                                  s_20 = ATgetArgument(q_20, 1);
                                                  t_20 = ATgetArgument(q_20, 2);
                                                  t = n_22(t);
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
                                          if(match_string(o_20, "d"))
                                            {
                                              y_19 :
                                              if(match_cons(p_20, sym_ComponentTime_3))
                                                {
                                                  q_20 = ATgetArgument(p_20, 0);
                                                  u_20 = ATgetArgument(p_20, 1);
                                                  v_20 = ATgetArgument(p_20, 2);
                                                  z_19 :
                                                  if(match_cons(q_20, sym_Date_3))
                                                    {
                                                      r_20 = ATgetArgument(q_20, 0);
                                                      s_20 = ATgetArgument(q_20, 1);
                                                      t_20 = ATgetArgument(q_20, 2);
                                                      t = o_22(t);
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
                                              if(match_string(o_20, "MM"))
                                                {
                                                  a_20 :
                                                  if(match_cons(p_20, sym_ComponentTime_3))
                                                    {
                                                      q_20 = ATgetArgument(p_20, 0);
                                                      u_20 = ATgetArgument(p_20, 1);
                                                      v_20 = ATgetArgument(p_20, 2);
                                                      b_20 :
                                                      if(match_cons(q_20, sym_Date_3))
                                                        {
                                                          r_20 = ATgetArgument(q_20, 0);
                                                          s_20 = ATgetArgument(q_20, 1);
                                                          t_20 = ATgetArgument(q_20, 2);
                                                          t = p_22(t);
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
                                                  if(match_string(o_20, "M"))
                                                    {
                                                      c_20 :
                                                      if(match_cons(p_20, sym_ComponentTime_3))
                                                        {
                                                          q_20 = ATgetArgument(p_20, 0);
                                                          u_20 = ATgetArgument(p_20, 1);
                                                          v_20 = ATgetArgument(p_20, 2);
                                                          d_20 :
                                                          if(match_cons(q_20, sym_Date_3))
                                                            {
                                                              r_20 = ATgetArgument(q_20, 0);
                                                              s_20 = ATgetArgument(q_20, 1);
                                                              t_20 = ATgetArgument(q_20, 2);
                                                              t = q_22(t);
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
                                                      if(match_string(o_20, "yy"))
                                                        {
                                                          e_20 :
                                                          if(match_cons(p_20, sym_ComponentTime_3))
                                                            {
                                                              q_20 = ATgetArgument(p_20, 0);
                                                              u_20 = ATgetArgument(p_20, 1);
                                                              v_20 = ATgetArgument(p_20, 2);
                                                              f_20 :
                                                              if(match_cons(q_20, sym_Date_3))
                                                                {
                                                                  r_20 = ATgetArgument(q_20, 0);
                                                                  s_20 = ATgetArgument(q_20, 1);
                                                                  t_20 = ATgetArgument(q_20, 2);
                                                                  t = r_22(t);
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
                                                          if(match_string(o_20, "yyyy"))
                                                            {
                                                              g_20 :
                                                              if(match_cons(p_20, sym_ComponentTime_3))
                                                                {
                                                                  q_20 = ATgetArgument(p_20, 0);
                                                                  u_20 = ATgetArgument(p_20, 1);
                                                                  v_20 = ATgetArgument(p_20, 2);
                                                                  h_20 :
                                                                  if(match_cons(q_20, sym_Date_3))
                                                                    {
                                                                      r_20 = ATgetArgument(q_20, 0);
                                                                      s_20 = ATgetArgument(q_20, 1);
                                                                      t_20 = ATgetArgument(q_20, 2);
                                                                      t = s_22(t);
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
                                            }
                                        }
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
ATerm date_pattern_to_string_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  ATerm d_25 (ATerm t)
  {
    ATerm t_24 = NULL,v_24 = NULL;
    t = date_pattern_to_int_0(t);
    {
      ATerm r_12;
      r_12 = t;
      {
        ATerm u_24 = NULL;
        t = int_to_string_0(t);
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
      }
      t = r_12;
      {
        ATerm w_24 = NULL;
        t = not_null(k_24);
        {
          t = string_length_0(t);
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_12, not_null(t_24), not_null(v_24));
          t = align_right_0(t);
        }
      }
    }
    return(t);
  }
  ATerm e_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(e_24), term_h_12);
    t = leq_leq_0(t);
    t = term_t_12;
    return(t);
  }
  ATerm f_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_11, not_null(e_24), term_e_12);
    t = leq_lt_0(t);
    t = term_u_12;
    return(t);
  }
  ATerm g_25 (ATerm t)
  {
    t = not_null(h_24);
    t = day_of_week2text_0(t);
    return(t);
  }
  ATerm h_25 (ATerm t)
  {
    t = not_null(h_24);
    t = day_of_week2abbr_0(t);
    return(t);
  }
  ATerm i_25 (ATerm t)
  {
    t = not_null(o_24);
    t = month2text_0(t);
    return(t);
  }
  ATerm j_25 (ATerm t)
  {
    t = not_null(o_24);
    t = month2abbr_0(t);
    return(t);
  }
  j_24 = t;
  i_23 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      j_23 :
      if(match_cons(l_24, sym_ComponentTime_3))
        {
          m_24 = ATgetArgument(l_24, 0);
          q_24 = ATgetArgument(l_24, 1);
          r_24 = ATgetArgument(l_24, 2);
          k_23 :
          if(match_cons(r_24, sym_Dupl_2))
            {
              h_24 = ATgetArgument(r_24, 0);
              i_24 = ATgetArgument(r_24, 1);
              l_23 :
              if(match_cons(q_24, sym_DayTime_3))
                {
                  e_24 = ATgetArgument(q_24, 0);
                  f_24 = ATgetArgument(q_24, 1);
                  g_24 = ATgetArgument(q_24, 2);
                  m_23 :
                  if(match_cons(m_24, sym_Date_3))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      o_24 = ATgetArgument(m_24, 1);
                      p_24 = ATgetArgument(m_24, 2);
                      n_23 :
                      if(match_string(k_24, "a"))
                        {
                          ATerm x_12 = t;
                          int y_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
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
                                    t = e_25(t);
                                    LocalPopChoice(a_13);
                                  }
                                else
                                  {
                                    t = z_12;
                                    t = f_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(k_24, "EEEE"))
                            {
                              ATerm b_13 = t;
                              int c_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_25(t);
                                  LocalPopChoice(c_13);
                                }
                              else
                                {
                                  t = b_13;
                                  t = g_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(k_24, "EEE"))
                                {
                                  ATerm d_13 = t;
                                  int e_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_25(t);
                                      LocalPopChoice(e_13);
                                    }
                                  else
                                    {
                                      t = d_13;
                                      t = h_25(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(k_24, "MMMM"))
                                    {
                                      ATerm k_13 = t;
                                      int l_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = d_25(t);
                                          LocalPopChoice(l_13);
                                        }
                                      else
                                        {
                                          t = k_13;
                                          t = i_25(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(k_24, "MMM"))
                                        {
                                          ATerm m_13 = t;
                                          int n_13 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = d_25(t);
                                              LocalPopChoice(n_13);
                                            }
                                          else
                                            {
                                              t = m_13;
                                              t = j_25(t);
                                            }
                                        }
                                      else
                                        {
                                          t = d_25(t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      o_23 :
                      if(match_string(k_24, "a"))
                        {
                          ATerm p_13 = t;
                          int r_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
                              LocalPopChoice(r_13);
                            }
                          else
                            {
                              t = p_13;
                              {
                                ATerm u_13 = t;
                                int v_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_25(t);
                                    LocalPopChoice(v_13);
                                  }
                                else
                                  {
                                    t = u_13;
                                    t = f_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(k_24, "EEEE"))
                            {
                              ATerm a_14 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_25(t);
                                  LocalPopChoice(b_14);
                                }
                              else
                                {
                                  t = a_14;
                                  t = g_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(k_24, "EEE"))
                                {
                                  ATerm g_14 = t;
                                  int h_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_25(t);
                                      LocalPopChoice(h_14);
                                    }
                                  else
                                    {
                                      t = g_14;
                                      t = h_25(t);
                                    }
                                }
                              else
                                {
                                  t = d_25(t);
                                }
                            }
                        }
                    }
                }
              else
                {
                  p_23 :
                  if(match_cons(m_24, sym_Date_3))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      o_24 = ATgetArgument(m_24, 1);
                      p_24 = ATgetArgument(m_24, 2);
                      q_23 :
                      if(match_string(k_24, "EEEE"))
                        {
                          ATerm m_14 = t;
                          int n_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
                              LocalPopChoice(n_14);
                            }
                          else
                            {
                              t = m_14;
                              t = g_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(k_24, "EEE"))
                            {
                              ATerm o_14 = t;
                              int r_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_25(t);
                                  LocalPopChoice(r_14);
                                }
                              else
                                {
                                  t = o_14;
                                  t = h_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(k_24, "MMMM"))
                                {
                                  ATerm s_14 = t;
                                  int t_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_25(t);
                                      LocalPopChoice(t_14);
                                    }
                                  else
                                    {
                                      t = s_14;
                                      t = i_25(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(k_24, "MMM"))
                                    {
                                      ATerm u_14 = t;
                                      int v_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = d_25(t);
                                          LocalPopChoice(v_14);
                                        }
                                      else
                                        {
                                          t = u_14;
                                          t = j_25(t);
                                        }
                                    }
                                  else
                                    {
                                      t = d_25(t);
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      r_23 :
                      if(match_string(k_24, "EEEE"))
                        {
                          ATerm y_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
                              LocalPopChoice(z_14);
                            }
                          else
                            {
                              t = y_14;
                              t = g_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(k_24, "EEE"))
                            {
                              ATerm a_15 = t;
                              int b_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_25(t);
                                  LocalPopChoice(b_15);
                                }
                              else
                                {
                                  t = a_15;
                                  t = h_25(t);
                                }
                            }
                          else
                            {
                              t = d_25(t);
                            }
                        }
                    }
                }
            }
          else
            {
              s_23 :
              if(match_cons(q_24, sym_DayTime_3))
                {
                  e_24 = ATgetArgument(q_24, 0);
                  f_24 = ATgetArgument(q_24, 1);
                  g_24 = ATgetArgument(q_24, 2);
                  t_23 :
                  if(match_cons(m_24, sym_Date_3))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      o_24 = ATgetArgument(m_24, 1);
                      p_24 = ATgetArgument(m_24, 2);
                      x_23 :
                      if(match_string(k_24, "a"))
                        {
                          ATerm c_15 = t;
                          int i_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
                              LocalPopChoice(i_15);
                            }
                          else
                            {
                              t = c_15;
                              {
                                ATerm j_15 = t;
                                int k_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_25(t);
                                    LocalPopChoice(k_15);
                                  }
                                else
                                  {
                                    t = j_15;
                                    t = f_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(k_24, "MMMM"))
                            {
                              ATerm r_15 = t;
                              int s_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_25(t);
                                  LocalPopChoice(s_15);
                                }
                              else
                                {
                                  t = r_15;
                                  t = i_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(k_24, "MMM"))
                                {
                                  ATerm t_15 = t;
                                  int u_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_25(t);
                                      LocalPopChoice(u_15);
                                    }
                                  else
                                    {
                                      t = t_15;
                                      t = j_25(t);
                                    }
                                }
                              else
                                {
                                  t = d_25(t);
                                }
                            }
                        }
                    }
                  else
                    {
                      z_23 :
                      if(match_string(k_24, "a"))
                        {
                          ATerm v_15 = t;
                          int w_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
                              LocalPopChoice(w_15);
                            }
                          else
                            {
                              t = v_15;
                              {
                                ATerm c_16 = t;
                                int d_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_25(t);
                                    LocalPopChoice(d_16);
                                  }
                                else
                                  {
                                    t = c_16;
                                    t = f_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          t = d_25(t);
                        }
                    }
                }
              else
                {
                  a_24 :
                  if(match_cons(m_24, sym_Date_3))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      o_24 = ATgetArgument(m_24, 1);
                      p_24 = ATgetArgument(m_24, 2);
                      b_24 :
                      if(match_string(k_24, "MMMM"))
                        {
                          ATerm e_16 = t;
                          int h_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_25(t);
                              LocalPopChoice(h_16);
                            }
                          else
                            {
                              t = e_16;
                              t = i_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(k_24, "MMM"))
                            {
                              ATerm i_16 = t;
                              int j_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_25(t);
                                  LocalPopChoice(j_16);
                                }
                              else
                                {
                                  t = i_16;
                                  t = j_25(t);
                                }
                            }
                          else
                            {
                              t = d_25(t);
                            }
                        }
                    }
                  else
                    {
                      c_24 :
                      t = d_25(t);
                    }
                }
            }
        }
      else
        {
          d_24 :
          t = d_25(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm date_format_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym__2))
    {
      q_25 = ATgetArgument(p_25, 0);
      r_25 = ATgetArgument(p_25, 1);
      {
        t = not_null(q_25);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm u_25 = NULL;
            ATerm v_25 = NULL;
            v_25 = t;
            if(((u_25 != NULL) && (u_25 != v_25)))
              _fail(v_25);
            else
              u_25 = v_25;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_25), not_null(r_25));
              {
                ATerm k_16 = t;
                int l_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = date_pattern_to_string_0(t);
                    LocalPopChoice(l_16);
                  }
                else
                  {
                    t = k_16;
                    t = Fst_0(t);
                  }
              }
            }
            return(t);
          }
          t = map_1(t, y_0);
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
ATerm index2day_of_week_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_int(g_26, 6))
    {
      t = term_q_16;
    }
  else
    {
      if(match_int(g_26, 5))
        {
          t = term_r_16;
        }
      else
        {
          if(match_int(g_26, 4))
            {
              t = term_w_16;
            }
          else
            {
              if(match_int(g_26, 3))
                {
                  t = term_x_16;
                }
              else
                {
                  if(match_int(g_26, 2))
                    {
                      t = term_y_16;
                    }
                  else
                    {
                      if(match_int(g_26, 1))
                        {
                          t = term_z_16;
                        }
                      else
                        {
                          if(match_int(g_26, 0))
                            {
                              t = term_e_17;
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
ATerm index2month_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_int(b_27, 11))
    {
      t = term_f_17;
    }
  else
    {
      if(match_int(b_27, 10))
        {
          t = term_g_17;
        }
      else
        {
          if(match_int(b_27, 9))
            {
              t = term_h_17;
            }
          else
            {
              if(match_int(b_27, 8))
                {
                  t = term_k_17;
                }
              else
                {
                  if(match_int(b_27, 7))
                    {
                      t = term_l_17;
                    }
                  else
                    {
                      if(match_int(b_27, 6))
                        {
                          t = term_m_17;
                        }
                      else
                        {
                          if(match_int(b_27, 5))
                            {
                              t = term_n_17;
                            }
                          else
                            {
                              if(match_int(b_27, 4))
                                {
                                  t = term_o_17;
                                }
                              else
                                {
                                  if(match_int(b_27, 3))
                                    {
                                      t = term_p_17;
                                    }
                                  else
                                    {
                                      if(match_int(b_27, 2))
                                        {
                                          t = term_q_17;
                                        }
                                      else
                                        {
                                          if(match_int(b_27, 1))
                                            {
                                              t = term_r_17;
                                            }
                                          else
                                            {
                                              if(match_int(b_27, 0))
                                                {
                                                  t = term_s_17;
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
  return(t);
}
ATerm prim_tuple_to_ComponentTime_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__8))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      v_27 = ATgetArgument(s_27, 2);
      w_27 = ATgetArgument(s_27, 3);
      x_27 = ATgetArgument(s_27, 4);
      y_27 = ATgetArgument(s_27, 5);
      z_27 = ATgetArgument(s_27, 6);
      a_28 = ATgetArgument(s_27, 7);
      {
        ATerm j_28 = NULL,m_28 = NULL;
        ATerm t_17;
        t_17 = t;
        {
          ATerm l_28 = NULL;
          t = not_null(x_27);
          {
            t = index2month_0(t);
            {
              l_28 = t;
              if(((j_28 != NULL) && (j_28 != l_28)))
                _fail(l_28);
              else
                j_28 = l_28;
            }
          }
        }
        t = t_17;
        {
          ATerm n_28 = NULL;
          t = not_null(z_27);
          {
            t = index2day_of_week_0(t);
            {
              n_28 = t;
              if(((m_28 != NULL) && (m_28 != n_28)))
                _fail(n_28);
              else
                m_28 = n_28;
            }
          }
          t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, not_null(y_27), not_null(j_28), not_null(w_27)), (ATerm)ATmakeAppl(sym_DayTime_3, not_null(v_27), not_null(u_27), not_null(t_27)), (ATerm) ATmakeAppl(sym_Dupl_2, not_null(m_28), not_null(a_28)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm epoch2local_time_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym_EpochTime_1))
    {
      z_28 = ATgetArgument(y_28, 0);
      {
        t = SSL_epoch2localtime(not_null(z_28));
        t = prim_tuple_to_ComponentTime_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm now_epoch_time_0 (ATerm t)
{
  ATerm d_29 = NULL;
  t = SSL_now_epoch_time();
  {
    ATerm e_29 = NULL;
    e_29 = t;
    if(((d_29 != NULL) && (d_29 != e_29)))
      _fail(e_29);
    else
      d_29 = e_29;
    t = (ATerm) ATmakeAppl(sym_EpochTime_1, not_null(d_29));
  }
  return(t);
}
ATerm now_local_time_0 (ATerm t)
{
  t = now_epoch_time_0(t);
  t = epoch2local_time_0(t);
  return(t);
}
ATerm create_time_0 (ATerm t)
{
  ATerm h_29 = NULL;
  ATerm i_29 = NULL;
  t = term_s_7;
  {
    t = now_local_time_0(t);
    {
      i_29 = t;
      if(((h_29 != NULL) && (h_29 != i_29)))
        _fail(i_29);
      else
        h_29 = i_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), term_c_18), term_d_18), term_c_18), term_b_18), term_v_17), term_a_18), term_v_17), term_z_17), term_v_17), term_w_17), term_v_17), term_u_17), not_null(h_29));
    t = date_format_0(t);
  }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm f_18;
  f_18 = t;
  {
    t = error_0(t);
    {
      t = term_j_11;
      t = exit_0(t);
    }
  }
  t = f_18;
  return(t);
}
ATerm get_title_0 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_18;
      t = get_config_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        t = (ATerm) ATinsert(ATempty, term_j_18);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_header_0 (ATerm t)
{
  ATerm q_29 = NULL,s_29 = NULL;
  t = get_title_0(t);
  {
    ATerm k_18;
    k_18 = t;
    {
      ATerm r_29 = NULL;
      r_29 = t;
      if(((q_29 != NULL) && (q_29 != r_29)))
        _fail(r_29);
      else
        q_29 = r_29;
    }
    t = k_18;
    {
      ATerm a_30 = NULL;
      t = term_s_7;
      {
        t = create_time_0(t);
        {
          a_30 = t;
          if(((s_29 != NULL) && (s_29 != a_30)))
            _fail(a_30);
          else
            s_29 = a_30;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_18), term_w_18), term_v_18), term_u_18), not_null(q_29)), term_t_18), term_s_18), term_r_18), term_q_18), term_p_18), term_o_18), term_n_18), not_null(s_29)), term_m_18), term_l_18);
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL;
        ATerm f_30 = NULL;
        t = term_t_8;
        {
          t = get_config_0(t);
          {
            f_30 = t;
            if(((e_30 != NULL) && (e_30 != f_30)))
              _fail(f_30);
            else
              e_30 = f_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_30));
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = term_o_8;
      }
    {
      t = g_89(t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_s_8;
              t = get_config_0(t);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              t = term_c_19;
            }
          return(t);
        }
        t = copy_to_1(t, a_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, z_0);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm k_30 = NULL,m_30 = NULL,o_30 = NULL;
    ATerm w_20;
    w_20 = t;
    {
      ATerm l_30 = NULL;
      t = create_header_0(t);
      {
        t = print_to_0(t);
        {
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
        }
      }
    }
    t = w_20;
    {
      ATerm x_20;
      x_20 = t;
      {
        ATerm n_30 = NULL;
        ATerm c_1 (ATerm t)
        {
          t = term_y_20;
          return(t);
        }
        t = xtc_transform_2(t, c_1, pass_verbose_0);
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
      }
      t = x_20;
      {
        ATerm p_30 = NULL;
        t = create_footer_0(t);
        {
          t = print_to_0(t);
          {
            p_30 = t;
            if(((o_30 != NULL) && (o_30 != p_30)))
              _fail(p_30);
            else
              o_30 = p_30;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_30)), not_null(m_30)), not_null(k_30));
          t = xtc_cat_0(t);
        }
      }
    }
    return(t);
  }
  t = xtc_io_1(t, b_1);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  t = SSL_int_to_string(not_null(u_30));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_31), not_null(b_31));
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = SSL_subtr(not_null(a_31), not_null(b_31));
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
  ATerm h_31 = NULL;
  ATerm i_31 = NULL,k_31 = NULL;
  ATerm j_31 = NULL;
  t = term_b_21;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = term_j_11;
      }
    {
      j_31 = t;
      if(((i_31 != NULL) && (i_31 != j_31)))
        _fail(j_31);
      else
        i_31 = j_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), term_j_11);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          k_31 = t;
          if(((h_31 != NULL) && (h_31 != k_31)))
            _fail(k_31);
          else
            h_31 = k_31;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_31)), term_b_21);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = SSL_close_file(not_null(o_31));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym__2))
    {
      u_31 = ATgetArgument(t_31, 0);
      v_31 = ATgetArgument(t_31, 1);
      t = SSL_execvp(not_null(u_31), not_null(v_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  t = SSL_waitpid(not_null(a_32));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm k_32 = NULL;
  ATerm m_32 = NULL;
  k_32 = t;
  {
    t = fork_0(t);
    {
      m_32 = t;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_32 = NULL;
            o_32 = t;
            g_32 :
            if(match_int(o_32, 0))
              {
                t = not_null(k_32);
                t = q_79(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
              t = not_null(m_32);
              {
                t = waitpid_0(t);
                {
                  p_32 = t;
                  i_32 :
                  if(match_cons(p_32, sym_WaitStatus_3))
                    {
                      q_32 = ATgetArgument(p_32, 0);
                      r_32 = ATgetArgument(p_32, 1);
                      s_32 = ATgetArgument(p_32, 2);
                      j_32 :
                      if(match_int(q_32, 0))
                        {
                          t = not_null(k_32);
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
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      {
        ATerm d_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(b_33));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, d_1);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  t = SSL_table_keys(not_null(k_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm s_33 = NULL;
        ATerm u_33 = NULL;
        s_33 = t;
        {
          ATerm z_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
          {
            t = table_get_0(t);
            {
              z_33 = t;
              if(((u_33 != NULL) && (u_33 != z_33)))
                _fail(z_33);
              else
                u_33 = z_33;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(u_33));
        }
        return(t);
      }
      t = map_1(t, e_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_21;
    g_21 = t;
    {
      ATerm e_34 = NULL;
      ATerm f_34 = NULL;
      t = term_b_21;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_a_12);
        t = geq_0(t);
      }
    }
    t = g_21;
    t = a_88(t);
    return(t);
  }
  t = try_1(t, f_1);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm h_21;
  h_21 = t;
  {
    ATerm i_34 = NULL;
    ATerm j_34 = NULL;
    j_34 = t;
    if(((i_34 != NULL) && (i_34 != j_34)))
      _fail(j_34);
    else
      i_34 = j_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_21, not_null(i_34));
      t = printnl_0(t);
    }
  }
  t = h_21;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_34 = NULL;
  ATerm r_34 = NULL,s_34 = NULL;
  p_34 = t;
  {
    ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_34)));
    {
      t = table_get_0(t);
      {
        t_34 = t;
        n_34 :
        if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
          {
            u_34 = ATgetFirst((ATermList) t_34);
            x_34 = (ATerm) ATgetNext((ATermList) t_34);
            o_34 :
            if(match_cons(u_34, sym__2))
              {
                v_34 = ATgetArgument(u_34, 0);
                w_34 = ATgetArgument(u_34, 1);
                {
                  if(((r_34 != NULL) && (r_34 != v_34)))
                    _fail(v_34);
                  else
                    r_34 = v_34;
                  if(((s_34 != NULL) && (s_34 != w_34)))
                    _fail(w_34);
                  else
                    s_34 = w_34;
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
    t = not_null(s_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym__2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      {
        ATerm j_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_35)));
        {
          t = table_get_0(t);
          {
            ATerm g_1 (ATerm t)
            {
              ATerm k_35 = NULL,o_35 = NULL,p_35 = NULL;
              k_35 = t;
              c_35 :
              if(match_cons(k_35, sym__2))
                {
                  o_35 = ATgetArgument(k_35, 0);
                  p_35 = ATgetArgument(k_35, 1);
                  {
                    if(((g_35 != NULL) && (g_35 != o_35)))
                      _fail(o_35);
                    else
                      g_35 = o_35;
                    if(((j_35 != NULL) && (j_35 != p_35)))
                      _fail(p_35);
                    else
                      j_35 = p_35;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, g_1);
          }
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
ATerm filter_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm m_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = filter_1(t, v_74);
              return(t);
            }
            t = Cons_2(t, v_74, h_1);
            LocalPopChoice(p_21);
          }
        else
          {
            t = m_21;
            {
              ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
              w_35 = t;
              v_35 :
              if(((ATgetType(w_35) == AT_LIST) && !(ATisEmpty(w_35))))
                {
                  x_35 = ATgetFirst((ATermList) w_35);
                  y_35 = (ATerm) ATgetNext((ATermList) w_35);
                  {
                    t = not_null(y_35);
                    t = filter_1(t, v_74);
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
ATerm repeat_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm b_36 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = p_76(t);
      t = b_36(t);
      return(t);
    }
    t = try_1(t, i_1);
    return(t);
  }
  t = b_36(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_r_21;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm s_21 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_21;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, l_1);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    ATerm t_21;
    t_21 = t;
    {
      ATerm d_36 = NULL;
      ATerm e_36 = NULL;
      t = term_b_21;
      {
        t = get_config_0(t);
        {
          e_36 = t;
          if(((d_36 != NULL) && (d_36 != e_36)))
            _fail(e_36);
          else
            d_36 = e_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_36), term_b_12);
        t = geq_0(t);
      }
    }
    t = t_21;
    t = z_87(t);
    return(t);
  }
  t = try_1(t, m_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm h_36 = NULL;
      ATerm i_36 = NULL;
      t = term_b_21;
      {
        t = get_config_0(t);
        {
          i_36 = t;
          if(((h_36 != NULL) && (h_36 != i_36)))
            _fail(i_36);
          else
            h_36 = i_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_36), term_z_11);
        t = geq_0(t);
      }
    }
    t = u_21;
    t = b_88(t);
    return(t);
  }
  t = try_1(t, n_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      if(((n_36 != NULL) && (n_36 != o_36)))
        _fail(o_36);
      else
        n_36 = o_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,b_37 = NULL;
  u_36 = t;
  t_36 :
  if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
    {
      v_36 = ATgetFirst((ATermList) u_36);
      b_37 = (ATerm) ATgetNext((ATermList) u_36);
      {
        t = g_73(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm g_37 = NULL;
            g_37 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_36), not_null(g_37));
              t = f_73(t);
            }
            return(t);
          }
          t = fetch_1(t, o_1);
        }
        t = not_null(b_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        t = not_null(p_37);
        {
          ATerm u_37 (ATerm t)
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_37);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                {
                  ATerm x_21 = t;
                  int y_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = not_null(q_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_73, p_1);
                      t = u_37(t);
                      LocalPopChoice(y_21);
                    }
                  else
                    {
                      t = x_21;
                      t = Cons_2(t, _id, u_37);
                    }
                }
              }
            return(t);
          }
          t = u_37(t);
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
  ATerm z_37 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__3))
    {
      e_38 = ATgetArgument(z_37, 0);
      f_38 = ATgetArgument(z_37, 1);
      g_38 = ATgetArgument(z_37, 2);
      {
        ATerm z_21;
        z_21 = t;
        {
          ATerm v_38 = NULL;
          ATerm w_38 = NULL,d_39 = NULL;
          ATerm c_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), not_null(f_38));
          {
            ATerm a_22 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(b_22);
              }
            else
              {
                t = a_22;
                t = (ATerm) ATempty;
              }
            {
              c_39 = t;
              if(((w_38 != NULL) && (w_38 != c_39)))
                _fail(c_39);
              else
                w_38 = c_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_38), not_null(g_38));
            {
              t = union_0(t);
              {
                d_39 = t;
                if(((v_38 != NULL) && (v_38 != d_39)))
                  _fail(d_39);
                else
                  v_38 = d_39;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_38), not_null(f_38), not_null(v_38));
            t = set_0(t);
          }
        }
        t = z_21;
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
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__2))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      {
        t = not_null(n_39);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm q_39 = NULL,r_39 = NULL,x_39 = NULL;
            q_39 = t;
            j_39 :
            if(match_cons(q_39, sym__2))
              {
                r_39 = ATgetArgument(q_39, 0);
                x_39 = ATgetArgument(q_39, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_39), not_null(r_39), not_null(x_39));
                  t = o_78(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, q_1);
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
  ATerm o_40 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_40 = NULL;
      p_40 = t;
      {
        if(((o_40 != NULL) && (o_40 != p_40)))
          _fail(p_40);
        else
          o_40 = p_40;
        t = SSL_ReadFromFile(not_null(o_40));
      }
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_e_22;
          return(t);
        }
        t = debug_1(t, r_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm u_40 = NULL;
  ATerm w_40 = NULL;
  u_40 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        t = term_h_22;
        return(t);
      }
      t = debug_1(t, t_1);
      return(t);
    }
    t = if_verbose5_1(t, s_1);
    {
      ATerm t_22 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_40)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_22;
        }
      {
        ATerm u_22;
        u_22 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_21, term_v_22, (ATerm) ATinsert(ATempty, not_null(u_40)));
          t = table_put_0(t);
        }
        t = u_22;
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              t = term_w_22;
              return(t);
            }
            t = debug_1(t, v_1);
            return(t);
          }
          t = if_verbose4_1(t, u_1);
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
                t = (ATerm) ATempty;
              }
            {
              ATerm w_1 (ATerm t)
              {
                ATerm x_1 (ATerm t)
                {
                  t = term_z_22;
                  return(t);
                }
                t = say_1(t, x_1);
                return(t);
              }
              t = if_verbose6_1(t, w_1);
              {
                ATerm x_40 = NULL;
                x_40 = t;
                if(((w_40 != NULL) && (w_40 != x_40)))
                  _fail(x_40);
                else
                  w_40 = x_40;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(w_40));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm b_2 (ATerm t)
                      {
                        ATerm c_2 (ATerm t)
                        {
                          t = term_a_23;
                          return(t);
                        }
                        t = say_1(t, c_2);
                        return(t);
                      }
                      t = if_verbose6_1(t, b_2);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_j_21, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_40)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm e_2 (ATerm t)
                              {
                                t = term_z_22;
                                return(t);
                              }
                              t = say_1(t, e_2);
                              return(t);
                            }
                            t = if_verbose4_1(t, d_2);
                          }
                        }
                      }
                    }
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
  ATerm b_41 = NULL;
  b_41 = t;
  t = SSL_getenv(not_null(b_41));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_23;
      t = get_config_0(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_23;
            t = getenv_0(t);
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      t = term_h_23;
      return(t);
    }
    t = debug_1(t, g_2);
    return(t);
  }
  t = if_verbose5_1(t, f_2);
  {
    ATerm u_23;
    u_23 = t;
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_y_23;
          t = table_get_0(t);
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = u_23;
    {
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          t = term_s_24;
          return(t);
        }
        t = debug_1(t, i_2);
        return(t);
      }
      t = if_verbose5_1(t, h_2);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          t = term_z_24;
          return(t);
        }
        t = debug_1(t, k_2);
        return(t);
      }
      t = if_verbose5_1(t, j_2);
      {
        t = xtc_load_0(t);
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_2 (ATerm t)
            {
              ATerm m_2 (ATerm t)
              {
                t = term_z_24;
                return(t);
              }
              t = debug_1(t, m_2);
              return(t);
            }
            t = if_verbose5_1(t, l_2);
          }
        }
      }
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      {
        ATerm f_41 = NULL;
        ATerm g_41 = NULL;
        g_41 = t;
        if(((f_41 != NULL) && (f_41 != g_41)))
          _fail(g_41);
        else
          f_41 = g_41;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), not_null(f_41)), term_c_25);
          {
            t = error_0(t);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_j_21;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = term_l_25;
                      return(t);
                    }
                    t = debug_1(t, o_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, n_2);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm p_89 (ATerm))
{
  ATerm k_41 = NULL;
  ATerm m_25;
  m_25 = t;
  {
    ATerm l_41 = NULL;
    t = p_89(t);
    {
      t = xtc_find_warning_0(t);
      {
        l_41 = t;
        if(((k_41 != NULL) && (k_41 != l_41)))
          _fail(l_41);
        else
          k_41 = l_41;
      }
    }
  }
  t = m_25;
  {
    ATerm n_25;
    n_25 = t;
    {
      ATerm n_41 = NULL;
      ATerm o_41 = NULL;
      o_41 = t;
      if(((n_41 != NULL) && (n_41 != o_41)))
        _fail(o_41);
      else
        n_41 = o_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_41), not_null(n_41));
        t = call_0(t);
      }
    }
    t = n_25;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  c_42 :
  if(match_cons(f_42, sym__2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
        ATerm s_25;
        s_25 = t;
        {
          ATerm n_42 = NULL;
          ATerm o_42 = NULL,p_42 = NULL,u_42 = NULL;
          t = l_78(t);
          {
            n_42 = t;
            {
              if(((k_42 != NULL) && (k_42 != n_42)))
                _fail(n_42);
              else
                k_42 = n_42;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_42), not_null(g_42), not_null(h_42));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_25 = t;
                    int w_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), term_x_25);
                        t = table_get_0(t);
                        LocalPopChoice(w_25);
                      }
                    else
                      {
                        t = t_25;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_42 = t;
                      b_42 :
                      if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
                        {
                          p_42 = ATgetFirst((ATermList) o_42);
                          u_42 = (ATerm) ATgetNext((ATermList) o_42);
                          {
                            if(((l_42 != NULL) && (l_42 != p_42)))
                              _fail(p_42);
                            else
                              l_42 = p_42;
                            {
                              if(((m_42 != NULL) && (m_42 != u_42)))
                                _fail(u_42);
                              else
                                m_42 = u_42;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_42), term_x_25, (ATerm) ATinsert(CheckATermList(not_null(m_42)), (ATerm) ATinsert(CheckATermList(not_null(l_42)), not_null(g_42))));
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
        t = s_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm y_25;
  y_25 = t;
  {
    t = x_62(t);
    {
      ATerm p_2 (ATerm t)
      {
        t = term_z_25;
        return(t);
      }
      t = debug_1(t, p_2);
    }
  }
  t = y_25;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
      l_43 = t;
      g_43 :
      if(match_cons(l_43, sym__2))
        {
          m_43 = ATgetArgument(l_43, 0);
          n_43 = ATgetArgument(l_43, 1);
          {
            if(((k_43 != NULL) && (k_43 != m_43)))
              _fail(m_43);
            else
              k_43 = m_43;
            if(((j_43 != NULL) && (j_43 != n_43)))
              _fail(n_43);
            else
              j_43 = n_43;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_26);
      t = SSL_open_file(not_null(k_43), not_null(j_43));
    }
  else
    {
      t = a_26;
      {
        ATerm s_43 = NULL;
        ATerm t_43 = NULL;
        ATerm q_2 (ATerm t)
        {
          t = term_c_26;
          return(t);
        }
        t = obsolete_1(t, q_2);
        {
          s_43 = t;
          {
            if(((k_43 != NULL) && (k_43 != s_43)))
              _fail(s_43);
            else
              k_43 = s_43;
            {
              ATerm d_26;
              d_26 = t;
              {
                ATerm u_43 = NULL;
                t = term_e_26;
                {
                  u_43 = t;
                  if(((t_43 != NULL) && (t_43 != u_43)))
                    _fail(u_43);
                  else
                    t_43 = u_43;
                }
              }
              t = d_26;
              t = SSL_open_file(not_null(k_43), not_null(t_43));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_44 = NULL;
  ATerm c_44 = NULL;
  a_44 = t;
  {
    ATerm h_26;
    h_26 = t;
    {
      ATerm d_44 = NULL;
      t = term_i_26;
      {
        d_44 = t;
        if(((c_44 != NULL) && (c_44 != d_44)))
          _fail(d_44);
        else
          c_44 = d_44;
      }
    }
    t = h_26;
    {
      t = SSL_open_file(not_null(a_44), not_null(c_44));
      t = SSL_close_file(not_null(a_44));
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
  ATerm h_44 = NULL;
  ATerm i_44 = NULL;
  t = term_s_7;
  {
    t = new_0(t);
    {
      i_44 = t;
      if(((h_44 != NULL) && (h_44 != i_44)))
        _fail(i_44);
      else
        h_44 = i_44;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_44), term_j_26);
    {
      t = conc_strings_0(t);
      {
        ATerm r_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm m_44 = NULL;
  t = new_file_0(t);
  {
    m_44 = t;
    {
      ATerm k_26;
      k_26 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_44), term_e_26);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_44), term_s_7);
            {
              ATerm v_2 (ATerm t)
              {
                t = term_k_8;
                return(t);
              }
              t = assert_1(t, v_2);
            }
          }
        }
      }
      t = k_26;
    }
  }
  return(t);
}
ATerm xtc_generate_2 (ATerm t, ATerm d_90 (ATerm), ATerm e_90 (ATerm))
{
  ATerm r_44 = NULL;
  ATerm s_44 = NULL;
  t = term_s_7;
  {
    ATerm t_44 = NULL;
    t = xtc_new_file_0(t);
    {
      s_44 = t;
      {
        if(((r_44 != NULL) && (r_44 != s_44)))
          _fail(s_44);
        else
          r_44 = s_44;
        {
          ATerm u_44 = NULL;
          t = e_90(t);
          {
            u_44 = t;
            if(((t_44 != NULL) && (t_44 != u_44)))
              _fail(u_44);
            else
              t_44 = u_44;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_44), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_44)), term_s_8));
            {
              t = conc_0(t);
              {
                t = xtc_command_1(t, d_90);
                {
                  t = not_null(r_44);
                  t = close_file_0(t);
                }
              }
            }
          }
        }
      }
    }
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_44));
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym__2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      t = SSL_copy(not_null(a_45), not_null(b_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm j_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_stderr_0))
    {
      ATerm l_45 = NULL,n_45 = NULL;
      ATerm l_26;
      l_26 = t;
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
      t = l_26;
      {
        ATerm o_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_45));
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
ATerm stdout_0 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym_stdout_0))
    {
      ATerm y_45 = NULL,a_46 = NULL;
      ATerm m_26;
      m_26 = t;
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
      t = m_26;
      {
        ATerm b_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(y_45));
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
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm n_46 = NULL,o_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym_FILE_1))
    {
      o_46 = ATgetArgument(n_46, 0);
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_46 = NULL;
            ATerm r_46 = NULL;
            t = m_0(t);
            {
              r_46 = t;
              {
                if(((q_46 != NULL) && (q_46 != r_46)))
                  _fail(r_46);
                else
                  q_46 = r_46;
                {
                  ATerm p_26 = t;
                  int q_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(q_26);
                    }
                  else
                    {
                      t = p_26;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_46), not_null(q_46));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_46));
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            {
              ATerm r_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_46 = NULL;
                  ATerm u_46 = NULL;
                  t = m_0(t);
                  {
                    u_46 = t;
                    {
                      if(((t_46 != NULL) && (t_46 != u_46)))
                        _fail(u_46);
                      else
                        t_46 = u_46;
                      {
                        ATerm t_26 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm u_26 = t;
                            int v_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(v_26);
                              }
                            else
                              {
                                t = u_26;
                                {
                                  ATerm w_26 = t;
                                  int x_26 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(x_26);
                                    }
                                  else
                                    {
                                      t = w_26;
                                      {
                                        ATerm v_46 = NULL;
                                        v_46 = t;
                                        if(((o_46 != NULL) && (o_46 != v_46)))
                                          _fail(v_46);
                                        else
                                          o_46 = v_46;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = t_26;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_46), not_null(t_46));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_46));
                  LocalPopChoice(s_26);
                }
              else
                {
                  t = r_26;
                  {
                    ATerm x_46 = NULL;
                    t = m_0(t);
                    {
                      x_46 = t;
                      if(((o_46 != NULL) && (o_46 != x_46)))
                        _fail(x_46);
                      else
                        o_46 = x_46;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_46));
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
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
  h_47 = t;
  g_47 :
  if(((ATgetType(h_47) == AT_LIST) && !(ATisEmpty(h_47))))
    {
      i_47 = ATgetFirst((ATermList) h_47);
      j_47 = (ATerm) ATgetNext((ATermList) h_47);
      t = not_null(j_47);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym__2))
    {
      q_47 = ATgetArgument(p_47, 0);
      r_47 = ATgetArgument(p_47, 1);
      {
        ATerm y_26;
        y_26 = t;
        {
          ATerm u_47 = NULL;
          ATerm v_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), not_null(r_47));
          {
            ATerm z_26 = t;
            int c_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_27);
              }
            else
              {
                t = z_26;
                t = (ATerm) ATempty;
              }
            {
              v_47 = t;
              if(((u_47 != NULL) && (u_47 != v_47)))
                _fail(v_47);
              else
                u_47 = v_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_47), not_null(r_47), not_null(u_47));
            t = table_put_0(t);
          }
        }
        t = y_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm f_48 = NULL;
    ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
    t = i_78(t);
    {
      f_48 = t;
      {
        if(((e_48 != NULL) && (e_48 != f_48)))
          _fail(f_48);
        else
          e_48 = f_48;
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_48), term_x_25);
              t = table_get_0(t);
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_48 = t;
            b_48 :
            if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
              {
                h_48 = ATgetFirst((ATermList) g_48);
                i_48 = (ATerm) ATgetNext((ATermList) g_48);
                {
                  if(((d_48 != NULL) && (d_48 != h_48)))
                    _fail(h_48);
                  else
                    d_48 = h_48;
                  {
                    if(((c_48 != NULL) && (c_48 != i_48)))
                      _fail(i_48);
                    else
                      c_48 = i_48;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_48), term_x_25, not_null(c_48));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_48);
                          {
                            ATerm w_2 (ATerm t)
                            {
                              ATerm l_48 = NULL;
                              l_48 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_48), not_null(l_48));
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
  t = d_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  t = SSL_remove(not_null(r_48));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_66 (ATerm), ATerm v_66 (ATerm))
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_66(t);
      t = v_66(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        t = v_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm c_49 = NULL;
  ATerm i_27;
  i_27 = t;
  {
    ATerm d_49 = NULL;
    ATerm e_49 = NULL;
    t = h_78(t);
    {
      d_49 = t;
      {
        if(((c_49 != NULL) && (c_49 != d_49)))
          _fail(d_49);
        else
          c_49 = d_49;
        {
          ATerm f_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), term_x_25);
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                t = (ATerm) ATempty;
              }
            {
              f_49 = t;
              if(((e_49 != NULL) && (e_49 != f_49)))
                _fail(f_49);
              else
                e_49 = f_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_49), term_x_25, (ATerm) ATinsert(CheckATermList(not_null(e_49)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm k_49 = NULL,l_49 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = term_k_8;
    return(t);
  }
  t = begin_scope_1(t, x_2);
  {
    ATerm c_3 (ATerm t)
    {
      ATerm l_27;
      l_27 = t;
      {
        ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_27;
            t = table_get_0(t);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          m_49 = t;
          j_49 :
          if(((ATgetType(m_49) == AT_LIST) && !(ATisEmpty(m_49))))
            {
              n_49 = ATgetFirst((ATermList) m_49);
              o_49 = (ATerm) ATgetNext((ATermList) m_49);
              {
                if(((l_49 != NULL) && (l_49 != n_49)))
                  _fail(n_49);
                else
                  l_49 = n_49;
                {
                  if(((k_49 != NULL) && (k_49 != o_49)))
                    _fail(o_49);
                  else
                    k_49 = o_49;
                  {
                    t = not_null(l_49);
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, d_3);
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
      t = l_27;
      {
        ATerm e_3 (ATerm t)
        {
          t = term_k_8;
          return(t);
        }
        t = end_scope_1(t, e_3);
      }
      return(t);
    }
    t = restore_always_2(t, f_89, c_3);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    t = h_89(t);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_8;
            t = get_config_0(t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = term_c_19;
          }
        return(t);
      }
      t = copy_to_1(t, g_3);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, f_3);
  return(t);
}
ATerm gen_css_0 (ATerm t)
{
  ATerm b_28;
  b_28 = t;
  {
    ATerm r_49 = NULL;
    t = term_c_28;
    {
      t = get_config_0(t);
      {
        r_49 = t;
        q_49 :
        if(!(match_string(r_49, "gen-css")))
          {
            _fail(t);
          }
      }
    }
  }
  t = b_28;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm i_3 (ATerm t)
      {
        t = term_d_28;
        return(t);
      }
      t = xtc_generate_2(t, i_3, pass_verbose_0);
      return(t);
    }
    t = xtc_output_1(t, h_3);
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  x_49 = t;
  v_49 :
  if(match_string(x_49, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
        {
          y_49 = ATgetFirst((ATermList) x_49);
          z_49 = (ATerm) ATgetNext((ATermList) x_49);
          w_49 :
          if(((ATgetType(z_49) == AT_LIST) && !(ATisEmpty(z_49))))
            {
              a_50 = ATgetFirst((ATermList) z_49);
              b_50 = (ATerm) ATgetNext((ATermList) z_49);
              {
                ATerm f_50 = NULL;
                ATerm e_28;
                e_28 = t;
                {
                  t = not_null(y_49);
                  t = j_0(t);
                }
                t = e_28;
                {
                  ATerm g_50 = NULL;
                  t = not_null(a_50);
                  {
                    t = k_0(t);
                    {
                      g_50 = t;
                      if(((f_50 != NULL) && (f_50 != g_50)))
                        _fail(g_50);
                      else
                        f_50 = g_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_50)), not_null(f_50));
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
  ATerm n_3 (ATerm t)
  {
    ATerm l_50 = NULL;
    l_50 = t;
    k_50 :
    if(!(match_string(l_50, "-v")))
      {
        if(!(match_string(l_50, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_g_28;
    t = set_config_0(t);
    t = term_h_28;
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = Option_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm o_50 = NULL;
    o_50 = t;
    m_50 :
    if(!(match_string(o_50, "-k")))
      {
        if(!(match_string(o_50, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm k_28;
    k_28 = t;
    {
      ATerm p_50 = NULL;
      ATerm q_50 = NULL;
      t = string_to_int_0(t);
      {
        q_50 = t;
        if(((p_50 != NULL) && (p_50 != q_50)))
          _fail(q_50);
        else
          p_50 = q_50;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_28, not_null(p_50));
        t = set_config_0(t);
      }
    }
    t = k_28;
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  t = ArgOption_3(t, q_3, s_3, t_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  t = SSL_string_to_int(not_null(u_50));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_3 (ATerm t)
      {
        ATerm g_52 = NULL;
        g_52 = t;
        m_51 :
        if(!(match_string(g_52, "-S")))
          {
            if(!(match_string(g_52, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_s_28;
        t = set_config_0(t);
        t = term_t_28;
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_u_28;
        return(t);
      }
      t = Option_3(t, u_3, w_3, x_3);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm h_52 = NULL;
              h_52 = t;
              n_51 :
              if(!(match_string(h_52, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm l_52 = NULL;
              ATerm a_29;
              a_29 = t;
              {
                ATerm i_52 = NULL;
                ATerm k_52 = NULL;
                t = string_to_int_0(t);
                {
                  k_52 = t;
                  if(((i_52 != NULL) && (i_52 != k_52)))
                    _fail(k_52);
                  else
                    i_52 = k_52;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_21, not_null(i_52));
                  t = set_config_0(t);
                }
              }
              t = a_29;
              {
                ATerm m_52 = NULL;
                m_52 = t;
                if(((l_52 != NULL) && (l_52 != m_52)))
                  _fail(m_52);
                else
                  l_52 = m_52;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_52));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_b_29;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            {
              ATerm b_4 (ATerm t)
              {
                ATerm x_52 = NULL;
                x_52 = t;
                d_52 :
                if(!(match_string(x_52, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_4 (ATerm t)
              {
                t = term_f_29;
                t = set_config_0(t);
                t = term_g_29;
                return(t);
              }
              ATerm g_4 (ATerm t)
              {
                t = term_j_29;
                return(t);
              }
              t = Option_3(t, b_4, f_4, g_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm e_54 = NULL;
    e_54 = t;
    a_53 :
    if(!(match_string(e_54, "-o")))
      {
        if(!(match_string(e_54, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm h_54 = NULL;
    ATerm o_29;
    o_29 = t;
    {
      ATerm f_54 = NULL;
      ATerm g_54 = NULL;
      g_54 = t;
      if(((f_54 != NULL) && (f_54 != g_54)))
        _fail(g_54);
      else
        f_54 = g_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(f_54));
        t = set_config_0(t);
      }
    }
    t = o_29;
    {
      ATerm i_54 = NULL;
      i_54 = t;
      if(((h_54 != NULL) && (h_54 != i_54)))
        _fail(i_54);
      else
        h_54 = i_54;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_54));
    }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_p_29;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, j_4);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm o_54 = NULL;
    o_54 = t;
    l_54 :
    if(!(match_string(o_54, "-i")))
      {
        if(!(match_string(o_54, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm r_54 = NULL;
    ATerm t_29;
    t_29 = t;
    {
      ATerm p_54 = NULL;
      ATerm q_54 = NULL;
      q_54 = t;
      if(((p_54 != NULL) && (p_54 != q_54)))
        _fail(q_54);
      else
        p_54 = q_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(p_54));
        t = set_config_0(t);
      }
    }
    t = t_29;
    {
      ATerm s_54 = NULL;
      s_54 = t;
      if(((r_54 != NULL) && (r_54 != s_54)))
        _fail(s_54);
      else
        r_54 = s_54;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_54));
    }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_u_29;
    return(t);
  }
  t = ArgOption_3(t, k_4, m_4, n_4);
  return(t);
}
ATerm abox2html_options_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm z_29 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = z_29;
                  {
                    ATerm c_30 = t;
                    int d_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_4 (ATerm t)
                        {
                          ATerm y_54 = NULL;
                          y_54 = t;
                          v_54 :
                          if(!(match_string(y_54, "-c")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_4 (ATerm t)
                        {
                          ATerm g_30;
                          g_30 = t;
                          {
                            t = term_i_30;
                            t = set_config_0(t);
                          }
                          t = g_30;
                          return(t);
                        }
                        ATerm q_4 (ATerm t)
                        {
                          t = term_j_30;
                          return(t);
                        }
                        t = Option_3(t, o_4, p_4, q_4);
                        LocalPopChoice(d_30);
                      }
                    else
                      {
                        t = c_30;
                        {
                          ATerm r_4 (ATerm t)
                          {
                            ATerm z_54 = NULL;
                            z_54 = t;
                            w_54 :
                            if(!(match_string(z_54, "-t")))
                              {
                                if(!(match_string(z_54, "--title")))
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          ATerm t_4 (ATerm t)
                          {
                            ATerm q_30;
                            q_30 = t;
                            {
                              ATerm a_55 = NULL;
                              ATerm b_55 = NULL;
                              b_55 = t;
                              if(((a_55 != NULL) && (a_55 != b_55)))
                                _fail(b_55);
                              else
                                a_55 = b_55;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_i_18, not_null(a_55));
                                t = set_config_0(t);
                              }
                            }
                            t = q_30;
                            return(t);
                          }
                          ATerm a_5 (ATerm t)
                          {
                            t = term_r_30;
                            return(t);
                          }
                          t = ArgOption_3(t, r_4, t_4, a_5);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm f_55 = NULL;
  ATerm s_30;
  s_30 = t;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm g_55 = NULL,h_55 = NULL;
      g_55 = t;
      e_55 :
      if(match_cons(g_55, sym_Program_1))
        {
          h_55 = ATgetArgument(g_55, 0);
          if(((f_55 != NULL) && (f_55 != h_55)))
            _fail(h_55);
          else
            f_55 = h_55;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, b_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_30), not_null(f_55)), term_t_30));
      {
        t = printnl_0(t);
        {
          t = term_j_11;
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
  t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATempty, term_w_30));
  {
    t = printnl_0(t);
    {
      t = term_j_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  t = SSL_TicksToSeconds(not_null(k_55));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
  r_55 = t;
  q_55 :
  if(match_cons(r_55, sym__2))
    {
      s_55 = ATgetArgument(r_55, 0);
      t_55 = ATgetArgument(r_55, 1);
      {
        ATerm x_30 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_55), not_null(t_55));
            LocalPopChoice(c_31);
          }
        else
          {
            t = x_30;
            t = SSL_addr(not_null(s_55), not_null(t_55));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_73(t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
        a_56 = t;
        z_55 :
        if(((ATgetType(a_56) == AT_LIST) && !(ATisEmpty(a_56))))
          {
            b_56 = ATgetFirst((ATermList) a_56);
            c_56 = (ATerm) ATgetNext((ATermList) a_56);
            {
              ATerm f_56 = NULL;
              ATerm g_56 = NULL;
              t = not_null(c_56);
              {
                t = foldr_2(t, s_73, t_73);
                {
                  g_56 = t;
                  if(((f_56 != NULL) && (f_56 != g_56)))
                    _fail(g_56);
                  else
                    f_56 = g_56;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_56), not_null(f_56));
                t = t_73(t);
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
ATerm crush_2 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  ATerm n_56 = NULL;
  ATerm p_56 = NULL;
  n_56 = t;
  {
    ATerm q_56 = NULL;
    ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
    t = not_null(n_56);
    {
      q_56 = t;
      {
        t = SSL_explode_term(not_null(q_56));
        {
          s_56 = t;
          m_56 :
          if(match_cons(s_56, sym__2))
            {
              t_56 = ATgetArgument(s_56, 0);
              u_56 = ATgetArgument(s_56, 1);
              if(((p_56 != NULL) && (p_56 != u_56)))
                _fail(u_56);
              else
                p_56 = u_56;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_56);
      t = foldr_2(t, q_72, r_72);
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
    ATerm c_5 (ATerm t)
    {
      t = term_n_11;
      return(t);
    }
    t = crush_2(t, c_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  a_57 = t;
  z_56 :
  if(match_cons(a_57, sym__2))
    {
      b_57 = ATgetArgument(a_57, 0);
      c_57 = ATgetArgument(a_57, 1);
      {
        ATerm f_31;
        f_31 = t;
        {
          ATerm g_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_57), not_null(c_57));
              LocalPopChoice(l_31);
            }
          else
            {
              t = g_31;
              t = SSL_gtr(not_null(b_57), not_null(c_57));
            }
        }
        t = f_31;
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
  ATerm i_57 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
      j_57 = t;
      h_57 :
      if(match_cons(j_57, sym__2))
        {
          k_57 = ATgetArgument(j_57, 0);
          l_57 = ATgetArgument(j_57, 1);
          {
            if(((i_57 != NULL) && (i_57 != k_57)))
              _fail(k_57);
            else
              i_57 = k_57;
            if(((i_57 != NULL) && (i_57 != l_57)))
              _fail(l_57);
            else
              i_57 = l_57;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm p_31;
    p_31 = t;
    {
      ATerm o_57 = NULL;
      ATerm p_57 = NULL;
      t = term_b_21;
      {
        t = get_config_0(t);
        {
          p_57 = t;
          if(((o_57 != NULL) && (o_57 != p_57)))
            _fail(p_57);
          else
            o_57 = p_57;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_57), term_j_11);
        t = geq_0(t);
      }
    }
    t = p_31;
    t = w_87(t);
    return(t);
  }
  t = try_1(t, d_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm t_57 = NULL,v_57 = NULL;
    ATerm q_31;
    q_31 = t;
    {
      ATerm u_57 = NULL;
      t = run_time_0(t);
      {
        u_57 = t;
        if(((t_57 != NULL) && (t_57 != u_57)))
          _fail(u_57);
        else
          t_57 = u_57;
      }
    }
    t = q_31;
    {
      ATerm w_57 = NULL;
      t = term_r_31;
      {
        t = get_config_0(t);
        {
          w_57 = t;
          if(((v_57 != NULL) && (v_57 != w_57)))
            _fail(w_57);
          else
            v_57 = w_57;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_31), not_null(t_57)), term_w_31), not_null(v_57)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_5);
  {
    t = term_n_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym_Version_0))
    {
      ATerm f_58 = NULL,h_58 = NULL;
      ATerm y_31;
      y_31 = t;
      {
        ATerm g_58 = NULL;
        t = SSLgetAnnotations(not_null(d_58));
        {
          g_58 = t;
          if(((f_58 != NULL) && (f_58 != g_58)))
            _fail(g_58);
          else
            f_58 = g_58;
        }
      }
      t = y_31;
      {
        ATerm i_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_58));
        {
          i_58 = t;
          if(((h_58 != NULL) && (h_58 != i_58)))
            _fail(i_58);
          else
            h_58 = i_58;
        }
        t = not_null(h_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm z_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_32);
      }
    else
      {
        t = z_31;
        {
          ATerm c_32 = t;
          int d_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_32);
            }
          else
            {
              t = c_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_5);
  t = g_61(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_58 = NULL;
  n_58 = t;
  t = SSL_table_create(not_null(n_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  {
    ATerm e_32;
    e_32 = t;
    {
      t = term_f_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_32, term_h_32, not_null(r_58));
          t = table_put_0(t);
        }
      }
    }
    t = e_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_58 = NULL;
  v_58 = t;
  t = SSL_table_destroy(not_null(v_58));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_58 = NULL;
  z_58 = t;
  t = SSL_exit(not_null(z_58));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  d_59 = t;
  c_59 :
  if(((ATgetType(d_59) == AT_LIST) && ATisEmpty(d_59)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
        {
          e_59 = ATgetFirst((ATermList) d_59);
          f_59 = (ATerm) ATgetNext((ATermList) d_59);
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
  ATerm l_32;
  l_32 = t;
  {
    ATerm i_59 = NULL;
    ATerm l_59 = NULL;
    ATerm n_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = n_32;
        {
          ATerm j_59 = NULL;
          ATerm k_59 = NULL;
          k_59 = t;
          if(((j_59 != NULL) && (j_59 != k_59)))
            _fail(k_59);
          else
            j_59 = k_59;
          t = (ATerm) ATinsert(ATempty, not_null(j_59));
        }
      }
    {
      l_59 = t;
      if(((i_59 != NULL) && (i_59 != l_59)))
        _fail(l_59);
      else
        i_59 = l_59;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(i_59));
      t = printnl_0(t);
    }
  }
  t = l_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
  w_59 = t;
  t_59 :
  if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
    {
      u_59 = ATgetFirst((ATermList) w_59);
      v_59 = (ATerm) ATgetNext((ATermList) w_59);
      {
        ATerm z_59 = NULL;
        t = not_null(v_59);
        {
          ATerm u_32;
          u_32 = t;
          {
            ATerm a_60 = NULL,c_60 = NULL,g_60 = NULL;
            ATerm v_32;
            v_32 = t;
            {
              ATerm b_60 = NULL;
              t = i_0(t);
              {
                b_60 = t;
                if(((a_60 != NULL) && (a_60 != b_60)))
                  _fail(b_60);
                else
                  a_60 = b_60;
              }
            }
            t = v_32;
            {
              ATerm f_60 = NULL;
              t = not_null(u_59);
              {
                t = h_0(t);
                {
                  f_60 = t;
                  if(((c_60 != NULL) && (c_60 != f_60)))
                    _fail(f_60);
                  else
                    c_60 = f_60;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_60)), not_null(c_60));
                {
                  g_60 = t;
                  if(((z_59 != NULL) && (z_59 != g_60)))
                    _fail(g_60);
                  else
                    z_59 = g_60;
                }
              }
            }
          }
          t = u_32;
          {
            ATerm k_5 (ATerm t)
            {
              t = not_null(z_59);
              return(t);
            }
            t = reverse_acc_2(t, h_0, k_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_59) == AT_LIST) && ATisEmpty(w_59)))
        {
          {
            t = term_s_7;
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
  ATerm l_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm r_60 = NULL,s_60 = NULL;
  r_60 = t;
  q_60 :
  if(match_cons(r_60, sym_Program_1))
    {
      s_60 = ATgetArgument(r_60, 0);
      {
        ATerm v_60 = NULL,x_60 = NULL;
        ATerm w_60 = NULL;
        t = SSLgetAnnotations(not_null(r_60));
        {
          w_60 = t;
          if(((v_60 != NULL) && (v_60 != w_60)))
            _fail(w_60);
          else
            v_60 = w_60;
        }
        {
          t = not_null(s_60);
          {
            ATerm z_60 = NULL;
            t = d_60(t);
            {
              x_60 = t;
              {
                ATerm b_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_60)), not_null(v_60));
                {
                  b_61 = t;
                  if(((z_60 != NULL) && (z_60 != b_61)))
                    _fail(b_61);
                  else
                    z_60 = b_61;
                }
                t = not_null(z_60);
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
  ATerm l_61 = NULL;
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_61 = NULL;
      t = term_r_31;
      {
        t = get_config_0(t);
        {
          s_61 = t;
          if(((l_61 != NULL) && (l_61 != s_61)))
            _fail(s_61);
          else
            l_61 = s_61;
        }
      }
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm t_61 = NULL;
            t_61 = t;
            if(((l_61 != NULL) && (l_61 != t_61)))
              _fail(t_61);
            else
              l_61 = t_61;
            return(t);
          }
          t = Program_1(t, n_5);
          return(t);
        }
        t = option_defined_1(t, m_5);
      }
    }
  {
    ATerm p_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        t = not_null(l_61);
        return(t);
      }
      t = short_description_1(t, s_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_5);
    {
      t = term_c_33;
      {
        t = echo_0(t);
        {
          t = term_f_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm u_61 = NULL;
                  ATerm v_61 = NULL;
                  v_61 = t;
                  if(((u_61 != NULL) && (u_61 != v_61)))
                    _fail(v_61);
                  else
                    u_61 = v_61;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_61)), term_g_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_5);
                {
                  ATerm u_5 (ATerm t)
                  {
                    ATerm w_61 = NULL;
                    ATerm x_61 = NULL;
                    ATerm v_5 (ATerm t)
                    {
                      t = not_null(l_61);
                      return(t);
                    }
                    t = long_description_1(t, v_5);
                    {
                      x_61 = t;
                      if(((w_61 != NULL) && (w_61 != x_61)))
                        _fail(x_61);
                      else
                        w_61 = x_61;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_61)), term_h_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_5);
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
  ATerm i_33;
  i_33 = t;
  {
    ATerm d_62 = NULL;
    ATerm e_62 = NULL;
    e_62 = t;
    if(((d_62 != NULL) && (d_62 != e_62)))
      _fail(e_62);
    else
      d_62 = e_62;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATempty, not_null(d_62)));
      t = printnl_0(t);
    }
  }
  t = i_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm j_33;
  j_33 = t;
  {
    t = r_62(t);
    t = debug_0(t);
  }
  t = j_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm l_62 = NULL,n_62 = NULL;
  l_62 = t;
  k_62 :
  if(match_cons(l_62, sym_Undefined_1))
    {
      n_62 = ATgetArgument(l_62, 0);
      {
        ATerm s_62 = NULL,u_62 = NULL;
        ATerm t_62 = NULL;
        t = SSLgetAnnotations(not_null(l_62));
        {
          t_62 = t;
          if(((s_62 != NULL) && (s_62 != t_62)))
            _fail(t_62);
          else
            s_62 = t_62;
        }
        {
          t = not_null(n_62);
          {
            ATerm w_62 = NULL;
            t = e_60(t);
            {
              u_62 = t;
              {
                ATerm y_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_62)), not_null(s_62));
                {
                  y_62 = t;
                  if(((w_62 != NULL) && (w_62 != y_62)))
                    _fail(y_62);
                  else
                    w_62 = y_62;
                }
                t = not_null(w_62);
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
ATerm fetch_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm d_63 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_67, _id);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = Cons_2(t, _id, d_63);
      }
    return(t);
  }
  t = d_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_79 (ATerm))
{
  t = fetch_1(t, v_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_63 = NULL;
  i_63 = t;
  h_63 :
  if(match_cons(i_63, sym_Help_0))
    {
      ATerm k_63 = NULL,m_63 = NULL;
      ATerm n_33;
      n_33 = t;
      {
        ATerm l_63 = NULL;
        t = SSLgetAnnotations(not_null(i_63));
        {
          l_63 = t;
          if(((k_63 != NULL) && (k_63 != l_63)))
            _fail(l_63);
          else
            k_63 = l_63;
        }
      }
      t = n_33;
      {
        ATerm n_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_63));
        {
          n_63 = t;
          if(((m_63 != NULL) && (m_63 != n_63)))
            _fail(n_63);
          else
            m_63 = n_63;
        }
        t = not_null(m_63);
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
  ATerm s_63 = NULL;
  s_63 = t;
  t = SSL_implode_string(not_null(s_63));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      {
        ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
        x_63 = t;
        w_63 :
        if(((ATgetType(x_63) == AT_LIST) && !(ATisEmpty(x_63))))
          {
            y_63 = ATgetFirst((ATermList) x_63);
            z_63 = (ATerm) ATgetNext((ATermList) x_63);
            {
              t = not_null(y_63);
              {
                ATerm w_5 (ATerm t)
                {
                  t = not_null(z_63);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_5);
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
  ATerm j_64 = NULL;
  ATerm l_64 = NULL;
  j_64 = t;
  {
    ATerm m_64 = NULL;
    ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
    t = not_null(j_64);
    {
      m_64 = t;
      {
        t = SSL_explode_term(not_null(m_64));
        {
          o_64 = t;
          h_64 :
          if(match_cons(o_64, sym__2))
            {
              p_64 = ATgetArgument(o_64, 0);
              q_64 = ATgetArgument(o_64, 1);
              i_64 :
              if(match_string(p_64, ""))
                {
                  if(((l_64 != NULL) && (l_64 != q_64)))
                    _fail(q_64);
                  else
                    l_64 = q_64;
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
      t = not_null(l_64);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm u_64 (ATerm t)
  {
    ATerm r_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_64);
        LocalPopChoice(t_33);
      }
    else
      {
        t = r_33;
        {
          t = Nil_0(t);
          t = t_67(t);
        }
      }
    return(t);
  }
  t = u_64(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym__2))
    {
      y_64 = ATgetArgument(x_64, 0);
      z_64 = ATgetArgument(x_64, 1);
      {
        t = not_null(y_64);
        {
          ATerm x_5 (ATerm t)
          {
            t = not_null(z_64);
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
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_65 = NULL;
  e_65 = t;
  t = SSL_explode_string(not_null(e_65));
  return(t);
}
ATerm _2 (ATerm t, ATerm c_54 (ATerm), ATerm d_54 (ATerm))
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
  n_65 = t;
  m_65 :
  if(match_cons(n_65, sym__2))
    {
      o_65 = ATgetArgument(n_65, 0);
      p_65 = ATgetArgument(n_65, 1);
      {
        ATerm t_65 = NULL,v_65 = NULL;
        ATerm u_65 = NULL;
        t = SSLgetAnnotations(not_null(n_65));
        {
          u_65 = t;
          if(((t_65 != NULL) && (t_65 != u_65)))
            _fail(u_65);
          else
            t_65 = u_65;
        }
        {
          t = not_null(o_65);
          {
            ATerm x_65 = NULL;
            t = c_54(t);
            {
              v_65 = t;
              {
                t = not_null(p_65);
                {
                  ATerm z_65 = NULL;
                  t = d_54(t);
                  {
                    x_65 = t;
                    {
                      ATerm a_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_65), not_null(x_65)), not_null(t_65));
                      {
                        a_66 = t;
                        if(((z_65 != NULL) && (z_65 != a_66)))
                          _fail(a_66);
                        else
                          z_65 = a_66;
                      }
                      t = not_null(z_65);
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
  ATerm i_66 = NULL,j_66 = NULL,l_66 = NULL;
  i_66 = t;
  h_66 :
  if(match_cons(i_66, sym__2))
    {
      j_66 = ATgetArgument(i_66, 0);
      l_66 = ATgetArgument(i_66, 1);
      {
        ATerm x_33;
        x_33 = t;
        t = SSL_printnl(not_null(j_66), not_null(l_66));
        t = x_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm y_33;
  y_33 = t;
  {
    ATerm r_66 = NULL,t_66 = NULL;
    ATerm a_34;
    a_34 = t;
    {
      ATerm s_66 = NULL;
      t = q_62(t);
      {
        s_66 = t;
        if(((r_66 != NULL) && (r_66 != s_66)))
          _fail(s_66);
        else
          r_66 = s_66;
      }
    }
    t = a_34;
    {
      ATerm y_66 = NULL;
      y_66 = t;
      if(((t_66 != NULL) && (t_66 != y_66)))
        _fail(y_66);
      else
        t_66 = y_66;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_66)), not_null(r_66)));
        t = printnl_0(t);
      }
    }
  }
  t = y_33;
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm b_67 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = Cons_2(t, e_67, b_67);
      }
    return(t);
  }
  t = b_67(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_67 = NULL;
  g_67 = t;
  t = SSL_is_string(not_null(g_67));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = d_34;
      {
        ATerm h_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_6);
            LocalPopChoice(k_34);
          }
        else
          {
            t = h_34;
            {
              ATerm r_67 = NULL,s_67 = NULL,v_67 = NULL;
              r_67 = t;
              q_67 :
              if(match_cons(r_67, sym_Path_1))
                {
                  s_67 = ATgetArgument(r_67, 0);
                  t = not_null(s_67);
                }
              else
                {
                  if(match_cons(r_67, sym_Var_1))
                    {
                      s_67 = ATgetArgument(r_67, 0);
                      {
                        t = not_null(s_67);
                        {
                          ATerm l_34 = t;
                          int m_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_34);
                            }
                          else
                            {
                              t = l_34;
                              {
                                ATerm g_6 (ATerm t)
                                {
                                  t = term_q_34;
                                  return(t);
                                }
                                t = debug_1(t, g_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_67, sym_Prefix_2))
                        {
                          s_67 = ATgetArgument(r_67, 0);
                          v_67 = ATgetArgument(r_67, 1);
                          {
                            ATerm a_68 = NULL,c_68 = NULL;
                            ATerm y_34;
                            y_34 = t;
                            {
                              ATerm b_68 = NULL;
                              t = not_null(s_67);
                              {
                                t = eval_config_0(t);
                                {
                                  b_68 = t;
                                  if(((a_68 != NULL) && (a_68 != b_68)))
                                    _fail(b_68);
                                  else
                                    a_68 = b_68;
                                }
                              }
                            }
                            t = y_34;
                            {
                              ATerm d_68 = NULL;
                              t = not_null(v_67);
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
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_68), not_null(c_68));
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
  ATerm l_68 = NULL;
  l_68 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_34, not_null(l_68));
    {
      t = table_get_0(t);
      {
        ATerm h_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_35;
            a_35 = t;
            {
              ATerm n_68 = NULL;
              ATerm o_68 = NULL;
              o_68 = t;
              if(((n_68 != NULL) && (n_68 != o_68)))
                _fail(o_68);
              else
                n_68 = o_68;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_34, not_null(l_68), not_null(n_68));
                t = table_put_0(t);
              }
            }
            t = a_35;
          }
          return(t);
        }
        t = try_1(t, h_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_66 (ATerm))
{
  ATerm b_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_66(t);
      LocalPopChoice(h_35);
    }
  else
    {
      t = b_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  t_68 = t;
  s_68 :
  if(match_cons(t_68, sym__2))
    {
      u_68 = ATgetArgument(t_68, 0);
      v_68 = ATgetArgument(t_68, 1);
      t = SSL_table_get(not_null(u_68), not_null(v_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  c_69 = t;
  b_69 :
  if(match_cons(c_69, sym__3))
    {
      d_69 = ATgetArgument(c_69, 0);
      e_69 = ATgetArgument(c_69, 1);
      f_69 = ATgetArgument(c_69, 2);
      {
        ATerm i_35;
        i_35 = t;
        {
          ATerm j_69 = NULL;
          ATerm k_69 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), not_null(e_69));
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
                t = (ATerm) ATempty;
              }
            {
              k_69 = t;
              if(((j_69 != NULL) && (j_69 != k_69)))
                _fail(k_69);
              else
                j_69 = k_69;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_69), not_null(e_69), (ATerm) ATinsert(CheckATermList(not_null(j_69)), not_null(f_69)));
            t = table_put_0(t);
          }
        }
        t = i_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm o_69 = NULL;
  ATerm p_69 = NULL;
  t = term_s_7;
  {
    t = a_81(t);
    {
      p_69 = t;
      if(((o_69 != NULL) && (o_69 != p_69)))
        _fail(p_69);
      else
        o_69 = p_69;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_33, term_e_33, not_null(o_69));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  v_69 = t;
  u_69 :
  if(match_string(v_69, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_69) == AT_LIST) && !(ATisEmpty(v_69))))
        {
          w_69 = ATgetFirst((ATermList) v_69);
          x_69 = (ATerm) ATgetNext((ATermList) v_69);
          {
            ATerm a_70 = NULL;
            ATerm n_35;
            n_35 = t;
            {
              t = not_null(w_69);
              t = a_0(t);
            }
            t = n_35;
            {
              ATerm b_70 = NULL;
              t = term_s_7;
              {
                t = d_0(t);
                {
                  b_70 = t;
                  if(((a_70 != NULL) && (a_70 != b_70)))
                    _fail(b_70);
                  else
                    a_70 = b_70;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_69)), not_null(a_70));
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
  ATerm i_6 (ATerm t)
  {
    ATerm g_70 = NULL;
    g_70 = t;
    f_70 :
    if(!(match_string(g_70, "--help")))
      {
        if(!(match_string(g_70, "-h")))
          {
            if(!(match_string(g_70, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_r_35;
    {
      t = set_config_0(t);
      t = term_s_35;
    }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_t_35;
    return(t);
  }
  t = Option_3(t, i_6, j_6, k_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  j_70 = t;
  i_70 :
  if(((ATgetType(j_70) == AT_LIST) && !(ATisEmpty(j_70))))
    {
      k_70 = ATgetFirst((ATermList) j_70);
      l_70 = (ATerm) ATgetNext((ATermList) j_70);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_70)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_70)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  u_70 :
  if(((ATgetType(v_70) == AT_LIST) && !(ATisEmpty(v_70))))
    {
      w_70 = ATgetFirst((ATermList) v_70);
      x_70 = (ATerm) ATgetNext((ATermList) v_70);
      {
        ATerm b_71 = NULL,d_71 = NULL;
        ATerm c_71 = NULL;
        t = SSLgetAnnotations(not_null(v_70));
        {
          c_71 = t;
          if(((b_71 != NULL) && (b_71 != c_71)))
            _fail(c_71);
          else
            b_71 = c_71;
        }
        {
          t = not_null(w_70);
          {
            ATerm f_71 = NULL;
            t = l_55(t);
            {
              d_71 = t;
              {
                t = not_null(x_70);
                {
                  ATerm h_71 = NULL;
                  t = m_55(t);
                  {
                    f_71 = t;
                    {
                      ATerm i_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_71)), not_null(d_71)), not_null(b_71));
                      {
                        i_71 = t;
                        if(((h_71 != NULL) && (h_71 != i_71)))
                          _fail(i_71);
                        else
                          h_71 = i_71;
                      }
                      t = not_null(h_71);
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
  ATerm s_71 = NULL;
  s_71 = t;
  r_71 :
  if(((ATgetType(s_71) == AT_LIST) && ATisEmpty(s_71)))
    {
      {
        ATerm u_71 = NULL,w_71 = NULL;
        ATerm u_35;
        u_35 = t;
        {
          ATerm v_71 = NULL;
          t = SSLgetAnnotations(not_null(s_71));
          {
            v_71 = t;
            if(((u_71 != NULL) && (u_71 != v_71)))
              _fail(v_71);
            else
              u_71 = v_71;
          }
        }
        t = u_35;
        {
          ATerm x_71 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_71));
          {
            x_71 = t;
            if(((w_71 != NULL) && (w_71 != x_71)))
              _fail(x_71);
            else
              w_71 = x_71;
          }
          t = not_null(w_71);
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
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym__2))
    {
      e_72 = ATgetArgument(d_72, 0);
      f_72 = ATgetArgument(d_72, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_34, not_null(e_72), not_null(f_72));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm z_35;
  z_35 = t;
  {
    ATerm p_6 (ATerm t)
    {
      t = term_a_36;
      t = y_80(t);
      return(t);
    }
    t = try_1(t, p_6);
  }
  t = z_35;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm n_72 = NULL;
      ATerm c_36;
      c_36 = t;
      {
        ATerm l_72 = NULL;
        ATerm m_72 = NULL;
        m_72 = t;
        if(((l_72 != NULL) && (l_72 != m_72)))
          _fail(m_72);
        else
          l_72 = m_72;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_31, not_null(l_72));
          t = set_config_0(t);
        }
      }
      t = c_36;
      {
        ATerm o_72 = NULL;
        o_72 = t;
        if(((n_72 != NULL) && (n_72 != o_72)))
          _fail(o_72);
        else
          n_72 = o_72;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_72));
      }
      return(t);
    }
    ATerm r_6 (ATerm t)
    {
      ATerm f_36 = t;
      int g_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              {
                t = y_80(t);
                t = Cons_2(t, _id, r_6);
              }
            }
          LocalPopChoice(g_36);
        }
      else
        {
          t = f_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_6, r_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL;
  ATerm p_36;
  p_36 = t;
  {
    ATerm z_72 = NULL,a_73 = NULL,d_73 = NULL,e_73 = NULL;
    z_72 = t;
    v_72 :
    if(match_cons(z_72, sym__3))
      {
        a_73 = ATgetArgument(z_72, 0);
        d_73 = ATgetArgument(z_72, 1);
        e_73 = ATgetArgument(z_72, 2);
        {
          if(((w_72 != NULL) && (w_72 != a_73)))
            _fail(a_73);
          else
            w_72 = a_73;
          {
            if(((x_72 != NULL) && (x_72 != d_73)))
              _fail(d_73);
            else
              x_72 = d_73;
            {
              if(((y_72 != NULL) && (y_72 != e_73)))
                _fail(e_73);
              else
                y_72 = e_73;
              t = SSL_table_put(not_null(w_72), not_null(x_72), not_null(y_72));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm j_73 = NULL;
  ATerm q_36;
  q_36 = t;
  {
    t = term_r_36;
    t = table_put_0(t);
  }
  t = q_36;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm s_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_80(t);
          LocalPopChoice(w_36);
        }
      else
        {
          t = s_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_6);
    {
      ATerm t_6 (ATerm t)
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_36;
            z_36 = t;
            {
              ATerm a_37 = t;
              int c_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_35;
                  t = get_config_0(t);
                  LocalPopChoice(c_37);
                }
              else
                {
                  t = a_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_36;
            {
              t = system_usage_0(t);
              {
                t = term_n_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            {
              ATerm v_6 (ATerm t)
              {
                ATerm y_6 (ATerm t)
                {
                  ATerm k_73 = NULL;
                  k_73 = t;
                  if(((j_73 != NULL) && (j_73 != k_73)))
                    _fail(k_73);
                  else
                    j_73 = k_73;
                  return(t);
                }
                t = Undefined_1(t, y_6);
                return(t);
              }
              t = option_defined_1(t, v_6);
              {
                ATerm z_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_73)), term_d_37);
                  return(t);
                }
                t = say_1(t, z_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_6);
      {
        ATerm e_37;
        e_37 = t;
        {
          t = term_d_33;
          t = table_destroy_0(t);
        }
        t = e_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm p_61 (ATerm))
{
  t = parse_options_1(t, m_61);
  {
    t = store_options_0(t);
    {
      t = o_61(t);
      {
        ATerm f_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_61);
            LocalPopChoice(h_37);
          }
        else
          {
            t = f_37;
            {
              ATerm i_37 = t;
              int j_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_61(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_37);
                }
              else
                {
                  t = i_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  t = option_wrap_4(t, q_61, default_usage_0, _id, r_61);
  return(t);
}
ATerm io_abox2html_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = gen_css_0(t);
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = abox2html_0(t);
      }
    return(t);
  }
  t = option_wrap_2(t, abox2html_options_0, a_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2html_0(t);
  return(t);
}
