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
ATerm term_i_37;
ATerm term_u_36;
ATerm term_h_36;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_n_35;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_t_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_m_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_l_29;
ATerm term_j_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_k_27;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_y_24;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_y_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_d_6;
void init_constant_terms (void)
{
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("  </body>\n", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</html>\n", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Dec", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Nov", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Oct", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Sep", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Aug", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Jul", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Jun", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("May", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Apr", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Mar", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Feb", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Jan", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("December", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("November", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("October", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("September", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("August", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("July", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("June", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("April", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("March", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("February", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("January", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sat", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Fri", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Thu", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Wed", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tue", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Mon", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sun", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Saturday", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Friday", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Thursday", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Wednesday", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuesday", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Monday", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Sunday", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(100);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("p.m.", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a.m.", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Saturday_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Friday_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Thursday_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Wednesday_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Tuesday_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Monday_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Sunday_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_December_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_November_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_October_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_September_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_August_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_July_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_June_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_May_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_April_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_March_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_February_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_January_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("EEEE", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("MMMM", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("yyyy", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("HH", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("mm", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ss", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--title", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no title specified for HTML document", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<!-- \n", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   This file is generated at ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" \n", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   by abox2html (C) 2001 Merijn de Jonge (mdejonge@cwi.nl)\n", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-->\n", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<!doctype html public \"-//W3C//DTD WWW HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/loose.dtd\"> \n", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<html>\n", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  <head>\n", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("    <title>", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("</title>\n", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("    <link rel=\"stylesheet\" type=\"text/css\" href=\"boxstyle.css\">\n", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  </head>\n", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  <body>\n", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-html", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_e_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_y_21);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_y_24);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css-boxstyle", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_d_6);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_b_11);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_11);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_d_6);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("gen-css", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_x_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Only generate cascading style sheet", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t title    Title of HTML document", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_a_33);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_d_6);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__3, term_z_32, term_a_33, (ATerm) ATempty);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0 (ATerm);
ATerm xtc_close_fd_0 (ATerm);
ATerm fdcopy_0 (ATerm);
ATerm finally_2 (ATerm, ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm File_as_fd_1 (ATerm, ATerm s_88 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm s_89 (ATerm), ATerm t_89 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm w_60 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm l_89 (ATerm), ATerm m_89 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm month2abbr_0 (ATerm);
ATerm month2text_0 (ATerm);
ATerm day_of_week2abbr_0 (ATerm);
ATerm day_of_week2text_0 (ATerm);
ATerm lt_0 (ATerm);
ATerm leq_lt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm comp_comp_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm leq_leq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm for_3 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm copy_0 (ATerm);
ATerm copy_char_0 (ATerm);
ATerm pos_0 (ATerm);
ATerm align_helper_0 (ATerm);
ATerm align_right_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm));
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
ATerm xtc_io_1 (ATerm, ATerm a_89 (ATerm));
ATerm abox2html_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm k_79 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm u_87 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm t_87 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm v_87 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm union_1 (ATerm, ATerm w_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_78 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm j_89 (ATerm));
ATerm assert_1 (ATerm, ATerm f_78 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_62 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_generate_2 (ATerm, ATerm x_89 (ATerm), ATerm y_89 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_78 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_78 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm z_88 (ATerm));
ATerm xtc_output_1 (ATerm, ATerm b_89 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm));
ATerm crush_2 (ATerm, ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_61 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_80 (ATerm));
ATerm Program_1 (ATerm, ATerm z_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_62 (ATerm));
ATerm Undefined_1 (ATerm, ATerm a_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_67 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_67 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_62 (ATerm));
ATerm map_1 (ATerm, ATerm z_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_61 (ATerm), ATerm n_61 (ATerm));
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
    ATerm v_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6;
            b_6 = t;
            {
              ATerm a_2 = NULL,t_2 = NULL;
              ATerm c_6;
              c_6 = t;
              {
                ATerm s_2 = NULL;
                s_2 = t;
                if(((a_2 != NULL) && (a_2 != s_2)))
                  _fail(s_2);
                else
                  a_2 = s_2;
              }
              t = c_6;
              {
                ATerm u_2 = NULL;
                t = term_d_6;
                {
                  t = STDIN__FILENO_0(t);
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
            t = b_6;
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
            {
              ATerm j_6 = t;
              int m_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_6;
                  n_6 = t;
                  {
                    ATerm z_2 = NULL,b_3 = NULL;
                    ATerm o_6;
                    o_6 = t;
                    {
                      ATerm a_3 = NULL;
                      a_3 = t;
                      if(((z_2 != NULL) && (z_2 != a_3)))
                        _fail(a_3);
                      else
                        z_2 = a_3;
                    }
                    t = o_6;
                    {
                      ATerm d_3 = NULL;
                      t = term_d_6;
                      {
                        t = STDOUT__FILENO_0(t);
                        {
                          d_3 = t;
                          if(((b_3 != NULL) && (b_3 != d_3)))
                            _fail(d_3);
                          else
                            b_3 = d_3;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), not_null(b_3));
                        t = eq_0(t);
                      }
                    }
                  }
                  t = n_6;
                  LocalPopChoice(m_6);
                }
              else
                {
                  t = j_6;
                  {
                    ATerm p_6;
                    p_6 = t;
                    {
                      ATerm e_3 = NULL,g_3 = NULL;
                      ATerm q_6;
                      q_6 = t;
                      {
                        ATerm f_3 = NULL;
                        f_3 = t;
                        if(((e_3 != NULL) && (e_3 != f_3)))
                          _fail(f_3);
                        else
                          e_3 = f_3;
                      }
                      t = q_6;
                      {
                        ATerm h_3 = NULL;
                        t = term_d_6;
                        {
                          t = STDERR__FILENO_0(t);
                          {
                            h_3 = t;
                            if(((g_3 != NULL) && (g_3 != h_3)))
                              _fail(h_3);
                            else
                              g_3 = h_3;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(g_3));
                          t = eq_0(t);
                        }
                      }
                    }
                    t = p_6;
                  }
                }
            }
          }
        LocalPopChoice(y_5);
      }
    else
      {
        t = v_5;
        t = close_0(t);
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = term_d_6;
    return(t);
  }
  t = finally_2(t, b_0, e_0);
  return(t);
}
ATerm fdcopy_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym__2))
    {
      r_3 = ATgetArgument(q_3, 0);
      s_3 = ATgetArgument(q_3, 1);
      t = SSL_fdcopy(not_null(r_3), not_null(s_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_66(t);
      LocalPopChoice(w_6);
      {
        ATerm x_6;
        x_6 = t;
        t = t_66(t);
        t = x_6;
      }
    }
  else
    {
      t = v_6;
      {
        ATerm y_6;
        y_6 = t;
        t = t_66(t);
        t = y_6;
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm x_3 = NULL;
  t = xtc_open_fd_0(t);
  {
    x_3 = t;
    {
      ATerm f_0 (ATerm t)
      {
        ATerm z_6;
        z_6 = t;
        {
          ATerm b_7 = t;
          int e_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(x_3);
              t = xtc_close_fd_0(t);
              LocalPopChoice(e_7);
            }
          else
            {
              t = b_7;
              {
              }
            }
        }
        t = z_6;
        return(t);
      }
      t = finally_2(t, s_88, f_0);
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
  ATerm b_4 = NULL;
  b_4 = t;
  t = SSL_open(not_null(b_4));
  return(t);
}
ATerm xtc_open_fd_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  k_4 = t;
  i_4 :
  if(match_cons(k_4, sym_FILE_1))
    {
      j_4 = ATgetArgument(k_4, 0);
      {
        t = not_null(j_4);
        t = open_0(t);
      }
    }
  else
    {
      if(match_cons(k_4, sym_stdin_0))
        {
          t = term_d_6;
          t = STDIN__FILENO_0(t);
        }
      else
        {
          if(match_cons(k_4, sym_stdout_0))
            {
              t = term_d_6;
              t = STDOUT__FILENO_0(t);
            }
          else
            {
              if(match_cons(k_4, sym_stderr_0))
                {
                  t = term_d_6;
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
  ATerm r_4 = NULL;
  t = new_file_0(t);
  {
    r_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), term_d_6);
      {
        ATerm p_0 (ATerm t)
        {
          t = term_f_7;
          return(t);
        }
        t = assert_1(t, p_0);
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_4));
    }
  }
  return(t);
}
ATerm xtc_cat_0 (ATerm t)
{
  ATerm y_4 = NULL;
  ATerm a_5 = NULL,b_5 = NULL;
  y_4 = t;
  {
    ATerm c_5 = NULL;
    ATerm d_5 = NULL;
    t = xtc_new_file_name_0(t);
    {
      c_5 = t;
      {
        if(((a_5 != NULL) && (a_5 != c_5)))
          _fail(c_5);
        else
          a_5 = c_5;
        {
          t = not_null(a_5);
          {
            t = xtc_open_fd_0(t);
            {
              d_5 = t;
              {
                if(((b_5 != NULL) && (b_5 != d_5)))
                  _fail(d_5);
                else
                  b_5 = d_5;
                {
                  t = not_null(y_4);
                  {
                    ATerm q_0 (ATerm t)
                    {
                      ATerm r_0 (ATerm t)
                      {
                        ATerm e_5 = NULL;
                        ATerm f_5 = NULL;
                        f_5 = t;
                        if(((e_5 != NULL) && (e_5 != f_5)))
                          _fail(f_5);
                        else
                          e_5 = f_5;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_5), not_null(b_5));
                          t = fdcopy_0(t);
                        }
                        return(t);
                      }
                      t = File_as_fd_1(t, r_0);
                      return(t);
                    }
                    t = map_1(t, q_0);
                    {
                      t = not_null(b_5);
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
    t = not_null(a_5);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(match_cons(m_5, sym__2))
    {
      n_5 = ATgetArgument(m_5, 0);
      o_5 = ATgetArgument(m_5, 1);
      {
        ATerm g_7;
        g_7 = t;
        t = SSL_print(not_null(n_5), not_null(o_5));
        t = g_7;
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
  ATerm u_5 = NULL;
  ATerm w_5 = NULL;
  u_5 = t;
  {
    ATerm x_5 = NULL;
    t = xtc_new_file_0(t);
    {
      x_5 = t;
      {
        if(((w_5 != NULL) && (w_5 != x_5)))
          _fail(x_5);
        else
          w_5 = x_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(u_5));
          {
            t = print_0(t);
            {
              t = not_null(w_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_5));
  }
  return(t);
}
ATerm create_footer_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_7), term_h_7);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_stdin_0))
    {
      ATerm h_6 = NULL;
      ATerm i_6 = NULL;
      t = term_j_7;
      {
        t = ReadFromFile_0(t);
        {
          i_6 = t;
          if(((h_6 != NULL) && (h_6 != i_6)))
            _fail(i_6);
          else
            h_6 = i_6;
        }
      }
      t = not_null(h_6);
    }
  else
    {
      if(match_cons(f_6, sym_FILE_1))
        {
          g_6 = ATgetArgument(f_6, 0);
          {
            ATerm k_6 = NULL;
            ATerm l_6 = NULL;
            t = not_null(g_6);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  l_6 = t;
                  if(((k_6 != NULL) && (k_6 != l_6)))
                    _fail(l_6);
                  else
                    k_6 = l_6;
                }
              }
            }
            t = not_null(k_6);
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
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym__2))
    {
      t_6 = ATgetArgument(s_6, 0);
      u_6 = ATgetArgument(s_6, 1);
      t = SSL_WriteToBinaryFile(not_null(t_6), not_null(u_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_7 = NULL;
  ATerm c_7 = NULL;
  a_7 = t;
  {
    ATerm d_7 = NULL;
    t = xtc_new_file_0(t);
    {
      d_7 = t;
      {
        if(((c_7 != NULL) && (c_7 != d_7)))
          _fail(d_7);
        else
          c_7 = d_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), not_null(a_7));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_7);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_7));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm s_89 (ATerm), ATerm t_89 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, s_89, t_89);
    t = read_from_0(t);
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm n_7 = NULL,o_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym_stdin_0))
    {
      ATerm p_7 = NULL;
      ATerm q_7 = NULL;
      ATerm r_7 = NULL;
      t = xtc_new_file_0(t);
      {
        q_7 = t;
        {
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
          {
            ATerm s_7 = NULL;
            t = o_0(t);
            {
              s_7 = t;
              if(((r_7 != NULL) && (r_7 != s_7)))
                _fail(s_7);
              else
                r_7 = s_7;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), term_k_7));
              {
                ATerm l_7 = t;
                int t_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(t_7);
                  }
                else
                  {
                    t = l_7;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(p_7);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_7));
    }
  else
    {
      if(match_cons(n_7, sym_FILE_1))
        {
          o_7 = ATgetArgument(n_7, 0);
          {
            ATerm u_7 = NULL;
            ATerm v_7 = NULL;
            t = not_null(o_7);
            {
              ATerm w_7 = NULL;
              t = xtc_new_file_0(t);
              {
                v_7 = t;
                {
                  if(((u_7 != NULL) && (u_7 != v_7)))
                    _fail(v_7);
                  else
                    u_7 = v_7;
                  {
                    ATerm x_7 = NULL;
                    t = o_0(t);
                    {
                      x_7 = t;
                      if(((w_7 != NULL) && (w_7 != x_7)))
                        _fail(x_7);
                      else
                        w_7 = x_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_k_7), not_null(o_7)), term_y_7));
                      {
                        ATerm z_7 = t;
                        int a_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(a_8);
                          }
                        else
                          {
                            t = z_7;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_7);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_7));
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
  ATerm i_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_stdin_0))
    {
      ATerm k_8 = NULL,m_8 = NULL;
      ATerm b_8;
      b_8 = t;
      {
        ATerm l_8 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          l_8 = t;
          if(((k_8 != NULL) && (k_8 != l_8)))
            _fail(l_8);
          else
            k_8 = l_8;
        }
      }
      t = b_8;
      {
        ATerm n_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_8));
        {
          n_8 = t;
          if(((m_8 != NULL) && (m_8 != n_8)))
            _fail(n_8);
          else
            m_8 = n_8;
        }
        t = not_null(m_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm w_8 = NULL,x_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_FILE_1))
    {
      x_8 = ATgetArgument(w_8, 0);
      {
        ATerm a_9 = NULL,c_9 = NULL;
        ATerm b_9 = NULL;
        t = SSLgetAnnotations(not_null(w_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
        {
          t = not_null(x_8);
          {
            ATerm e_9 = NULL;
            t = w_60(t);
            {
              c_9 = t;
              {
                ATerm f_9 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_9)), not_null(a_9));
                {
                  f_9 = t;
                  if(((e_9 != NULL) && (e_9 != f_9)))
                    _fail(f_9);
                  else
                    e_9 = f_9;
                }
                t = not_null(e_9);
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
ATerm xtc_transform_2 (ATerm t, ATerm l_89 (ATerm), ATerm m_89 (ATerm))
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          t = stdin_0(t);
        }
      LocalPopChoice(d_8);
      t = xtc_transform_file_2(t, l_89, m_89);
    }
  else
    {
      t = c_8;
      t = xtc_transform_term_2(t, l_89, m_89);
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
  ATerm q_9 = NULL;
  ATerm s_9 = NULL,t_9 = NULL;
  q_9 = t;
  {
    ATerm u_9 = NULL;
    ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
    t = not_null(q_9);
    {
      u_9 = t;
      {
        t = SSL_explode_term(not_null(u_9));
        {
          w_9 = t;
          n_9 :
          if(match_cons(w_9, sym__2))
            {
              x_9 = ATgetArgument(w_9, 0);
              y_9 = ATgetArgument(w_9, 1);
              o_9 :
              if(match_string(x_9, ""))
                {
                  p_9 :
                  if(((ATgetType(y_9) == AT_LIST) && !(ATisEmpty(y_9))))
                    {
                      z_9 = ATgetFirst((ATermList) y_9);
                      a_10 = (ATerm) ATgetNext((ATermList) y_9);
                      {
                        if(((t_9 != NULL) && (t_9 != z_9)))
                          _fail(z_9);
                        else
                          t_9 = z_9;
                        if(((s_9 != NULL) && (s_9 != a_10)))
                          _fail(a_10);
                        else
                          s_9 = a_10;
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
    t = not_null(t_9);
  }
  return(t);
}
ATerm month2abbr_0 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_December_0))
    {
      t = term_g_8;
    }
  else
    {
      if(match_cons(r_10, sym_November_0))
        {
          t = term_j_8;
        }
      else
        {
          if(match_cons(r_10, sym_October_0))
            {
              t = term_o_8;
            }
          else
            {
              if(match_cons(r_10, sym_September_0))
                {
                  t = term_p_8;
                }
              else
                {
                  if(match_cons(r_10, sym_August_0))
                    {
                      t = term_q_8;
                    }
                  else
                    {
                      if(match_cons(r_10, sym_July_0))
                        {
                          t = term_r_8;
                        }
                      else
                        {
                          if(match_cons(r_10, sym_June_0))
                            {
                              t = term_s_8;
                            }
                          else
                            {
                              if(match_cons(r_10, sym_May_0))
                                {
                                  t = term_t_8;
                                }
                              else
                                {
                                  if(match_cons(r_10, sym_April_0))
                                    {
                                      t = term_u_8;
                                    }
                                  else
                                    {
                                      if(match_cons(r_10, sym_March_0))
                                        {
                                          t = term_y_8;
                                        }
                                      else
                                        {
                                          if(match_cons(r_10, sym_February_0))
                                            {
                                              t = term_z_8;
                                            }
                                          else
                                            {
                                              if(match_cons(r_10, sym_January_0))
                                                {
                                                  t = term_d_9;
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
  ATerm r_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_December_0))
    {
      t = term_g_9;
    }
  else
    {
      if(match_cons(r_11, sym_November_0))
        {
          t = term_h_9;
        }
      else
        {
          if(match_cons(r_11, sym_October_0))
            {
              t = term_i_9;
            }
          else
            {
              if(match_cons(r_11, sym_September_0))
                {
                  t = term_j_9;
                }
              else
                {
                  if(match_cons(r_11, sym_August_0))
                    {
                      t = term_k_9;
                    }
                  else
                    {
                      if(match_cons(r_11, sym_July_0))
                        {
                          t = term_l_9;
                        }
                      else
                        {
                          if(match_cons(r_11, sym_June_0))
                            {
                              t = term_m_9;
                            }
                          else
                            {
                              if(match_cons(r_11, sym_May_0))
                                {
                                  t = term_t_8;
                                }
                              else
                                {
                                  if(match_cons(r_11, sym_April_0))
                                    {
                                      t = term_r_9;
                                    }
                                  else
                                    {
                                      if(match_cons(r_11, sym_March_0))
                                        {
                                          t = term_v_9;
                                        }
                                      else
                                        {
                                          if(match_cons(r_11, sym_February_0))
                                            {
                                              t = term_b_10;
                                            }
                                          else
                                            {
                                              if(match_cons(r_11, sym_January_0))
                                                {
                                                  t = term_c_10;
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
  ATerm m_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_Saturday_0))
    {
      t = term_d_10;
    }
  else
    {
      if(match_cons(m_12, sym_Friday_0))
        {
          t = term_e_10;
        }
      else
        {
          if(match_cons(m_12, sym_Thursday_0))
            {
              t = term_f_10;
            }
          else
            {
              if(match_cons(m_12, sym_Wednesday_0))
                {
                  t = term_g_10;
                }
              else
                {
                  if(match_cons(m_12, sym_Tuesday_0))
                    {
                      t = term_h_10;
                    }
                  else
                    {
                      if(match_cons(m_12, sym_Monday_0))
                        {
                          t = term_i_10;
                        }
                      else
                        {
                          if(match_cons(m_12, sym_Sunday_0))
                            {
                              t = term_j_10;
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
  ATerm c_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_Saturday_0))
    {
      t = term_k_10;
    }
  else
    {
      if(match_cons(c_13, sym_Friday_0))
        {
          t = term_l_10;
        }
      else
        {
          if(match_cons(c_13, sym_Thursday_0))
            {
              t = term_m_10;
            }
          else
            {
              if(match_cons(c_13, sym_Wednesday_0))
                {
                  t = term_n_10;
                }
              else
                {
                  if(match_cons(c_13, sym_Tuesday_0))
                    {
                      t = term_o_10;
                    }
                  else
                    {
                      if(match_cons(c_13, sym_Monday_0))
                        {
                          t = term_p_10;
                        }
                      else
                        {
                          if(match_cons(c_13, sym_Sunday_0))
                            {
                              t = term_s_10;
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
  ATerm t_10 = t;
  if((PushChoice() == 0))
    {
      t = geq_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_10;
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
  ATerm u_10 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_10;
    }
  return(t);
}
ATerm comp_comp_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__3))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      p_13 = ATgetArgument(m_13, 2);
      {
        ATerm v_10;
        v_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_13), not_null(o_13));
          {
            t = x_77(t);
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(p_13));
              t = y_77(t);
            }
          }
        }
        t = v_10;
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
ATerm while_not_2 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm u_13 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_76(t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          t = z_76(t);
          t = u_13(t);
        }
      }
    return(t);
  }
  t = u_13(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  t = b_77(t);
  t = while_not_2(t, c_77, d_77);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
    d_14 = t;
    w_13 :
    if(match_cons(d_14, sym__2))
      {
        e_14 = ATgetArgument(d_14, 0);
        f_14 = ATgetArgument(d_14, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_14), not_null(f_14), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
    i_14 = t;
    y_13 :
    if(match_cons(i_14, sym__3))
      {
        j_14 = ATgetArgument(i_14, 0);
        k_14 = ATgetArgument(i_14, 1);
        l_14 = ATgetArgument(i_14, 2);
        z_13 :
        if(match_int(j_14, 0))
          {
            t = not_null(l_14);
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
  ATerm u_0 (ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
    o_14 = t;
    c_14 :
    if(match_cons(o_14, sym__3))
      {
        p_14 = ATgetArgument(o_14, 0);
        q_14 = ATgetArgument(o_14, 1);
        r_14 = ATgetArgument(o_14, 2);
        {
          ATerm v_14 = NULL;
          ATerm y_10;
          y_10 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_z_10);
            t = geq_0(t);
          }
          t = y_10;
          {
            ATerm w_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_z_10);
            {
              t = subt_0(t);
              {
                w_14 = t;
                if(((v_14 != NULL) && (v_14 != w_14)))
                  _fail(w_14);
                else
                  v_14 = w_14;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_14), not_null(q_14), (ATerm) ATinsert(CheckATermList(not_null(r_14)), not_null(q_14)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, s_0, t_0, u_0);
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
  ATerm a_11;
  a_11 = t;
  {
    ATerm c_15 = NULL;
    ATerm d_15 = NULL;
    d_15 = t;
    if(((c_15 != NULL) && (c_15 != d_15)))
      _fail(d_15);
    else
      c_15 = d_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), term_b_11);
      t = geq_0(t);
    }
  }
  t = a_11;
  return(t);
}
ATerm align_helper_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym__3))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      n_15 = ATgetArgument(k_15, 2);
      {
        ATerm r_15 = NULL;
        ATerm s_15 = NULL,w_15 = NULL;
        t = not_null(m_15);
        {
          t = string_length_0(t);
          {
            ATerm t_15 = NULL;
            t_15 = t;
            if(((s_15 != NULL) && (s_15 != t_15)))
              _fail(t_15);
            else
              s_15 = t_15;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(s_15));
              {
                t = subt_0(t);
                {
                  ATerm c_11 = t;
                  int d_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = pos_0(t);
                      LocalPopChoice(d_11);
                      {
                        ATerm u_15 = NULL;
                        ATerm v_15 = NULL;
                        v_15 = t;
                        if(((u_15 != NULL) && (u_15 != v_15)))
                          _fail(v_15);
                        else
                          u_15 = v_15;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), not_null(l_15));
                          t = copy_char_0(t);
                        }
                      }
                    }
                  else
                    {
                      t = c_11;
                      t = term_e_11;
                    }
                  {
                    w_15 = t;
                    if(((r_15 != NULL) && (r_15 != w_15)))
                      _fail(w_15);
                    else
                      r_15 = w_15;
                  }
                }
              }
            }
          }
        }
        t = not_null(r_15);
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym__3))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      h_16 = ATgetArgument(e_16, 2);
      {
        ATerm l_16 = NULL;
        ATerm m_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_16), not_null(g_16), not_null(h_16));
        {
          t = align_helper_0(t);
          {
            m_16 = t;
            if(((l_16 != NULL) && (l_16 != m_16)))
              _fail(m_16);
            else
              l_16 = m_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(g_16));
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
ATerm foldr_3 (ATerm t, ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_73(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
        t_16 = t;
        s_16 :
        if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
          {
            u_16 = ATgetFirst((ATermList) t_16);
            v_16 = (ATerm) ATgetNext((ATermList) t_16);
            {
              ATerm y_16 = NULL,a_17 = NULL;
              ATerm h_11;
              h_11 = t;
              {
                ATerm z_16 = NULL;
                t = not_null(u_16);
                {
                  t = r_73(t);
                  {
                    z_16 = t;
                    if(((y_16 != NULL) && (y_16 != z_16)))
                      _fail(z_16);
                    else
                      y_16 = z_16;
                  }
                }
              }
              t = h_11;
              {
                ATerm b_17 = NULL;
                t = not_null(v_16);
                {
                  t = foldr_3(t, p_73, q_73, r_73);
                  {
                    b_17 = t;
                    if(((a_17 != NULL) && (a_17 != b_17)))
                      _fail(b_17);
                    else
                      a_17 = b_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), not_null(a_17));
                  t = q_73(t);
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
  ATerm v_0 (ATerm t)
  {
    t = term_b_11;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = term_z_10;
    return(t);
  }
  t = foldr_3(t, v_0, add_0, w_0);
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
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym__2))
    {
      i_17 = ATgetArgument(h_17, 0);
      j_17 = ATgetArgument(h_17, 1);
      t = SSL_mod(not_null(i_17), not_null(j_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm o_17 = NULL;
  ATerm p_17 = NULL;
  p_17 = t;
  if(((o_17 != NULL) && (o_17 != p_17)))
    _fail(p_17);
  else
    o_17 = p_17;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), term_z_10);
    t = add_0(t);
  }
  return(t);
}
ATerm month2index_0 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_December_0))
    {
      t = term_i_11;
    }
  else
    {
      if(match_cons(e_18, sym_November_0))
        {
          t = term_j_11;
        }
      else
        {
          if(match_cons(e_18, sym_October_0))
            {
              t = term_k_11;
            }
          else
            {
              if(match_cons(e_18, sym_September_0))
                {
                  t = term_l_11;
                }
              else
                {
                  if(match_cons(e_18, sym_August_0))
                    {
                      t = term_m_11;
                    }
                  else
                    {
                      if(match_cons(e_18, sym_July_0))
                        {
                          t = term_n_11;
                        }
                      else
                        {
                          if(match_cons(e_18, sym_June_0))
                            {
                              t = term_o_11;
                            }
                          else
                            {
                              if(match_cons(e_18, sym_May_0))
                                {
                                  t = term_p_11;
                                }
                              else
                                {
                                  if(match_cons(e_18, sym_April_0))
                                    {
                                      t = term_s_11;
                                    }
                                  else
                                    {
                                      if(match_cons(e_18, sym_March_0))
                                        {
                                          t = term_t_11;
                                        }
                                      else
                                        {
                                          if(match_cons(e_18, sym_February_0))
                                            {
                                              t = term_z_10;
                                            }
                                          else
                                            {
                                              if(match_cons(e_18, sym_January_0))
                                                {
                                                  t = term_b_11;
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
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  ATerm m_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_11, not_null(o_20), term_v_11);
    t = leq_leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_u_11);
      t = subt_0(t);
    }
    return(t);
  }
  ATerm n_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_10, not_null(o_20), term_u_11);
    t = leq_leq_0(t);
    t = not_null(o_20);
    return(t);
  }
  ATerm o_22 (ATerm t)
  {
    t = term_u_11;
    return(t);
  }
  ATerm p_22 (ATerm t)
  {
    t = not_null(o_20);
    t = inc_0(t);
    return(t);
  }
  ATerm q_22 (ATerm t)
  {
    t = not_null(o_20);
    return(t);
  }
  ATerm r_22 (ATerm t)
  {
    t = not_null(s_20);
    return(t);
  }
  ATerm s_22 (ATerm t)
  {
    t = not_null(s_20);
    return(t);
  }
  ATerm t_22 (ATerm t)
  {
    t = not_null(z_20);
    return(t);
  }
  ATerm u_22 (ATerm t)
  {
    t = not_null(z_20);
    return(t);
  }
  ATerm v_22 (ATerm t)
  {
    t = not_null(y_20);
    {
      t = month2index_0(t);
      t = inc_0(t);
    }
    return(t);
  }
  ATerm w_22 (ATerm t)
  {
    t = not_null(y_20);
    {
      t = month2index_0(t);
      t = inc_0(t);
    }
    return(t);
  }
  ATerm c_23 (ATerm t)
  {
    ATerm e_22 = NULL;
    t = not_null(x_20);
    {
      ATerm f_22 = NULL;
      f_22 = t;
      if(((e_22 != NULL) && (e_22 != f_22)))
        _fail(f_22);
      else
        e_22 = f_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_22), term_w_11);
        t = mod_0(t);
      }
    }
    return(t);
  }
  ATerm d_23 (ATerm t)
  {
    t = not_null(x_20);
    return(t);
  }
  t_20 = t;
  j_19 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      k_19 :
      if(match_string(u_20, "ss"))
        {
          l_19 :
          if(match_cons(v_20, sym_ComponentTime_3))
            {
              w_20 = ATgetArgument(v_20, 0);
              a_21 = ATgetArgument(v_20, 1);
              b_21 = ATgetArgument(v_20, 2);
              m_19 :
              if(match_cons(a_21, sym_DayTime_3))
                {
                  o_20 = ATgetArgument(a_21, 0);
                  p_20 = ATgetArgument(a_21, 1);
                  q_20 = ATgetArgument(a_21, 2);
                  t = not_null(q_20);
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
          if(match_string(u_20, "mm"))
            {
              n_19 :
              if(match_cons(v_20, sym_ComponentTime_3))
                {
                  w_20 = ATgetArgument(v_20, 0);
                  a_21 = ATgetArgument(v_20, 1);
                  b_21 = ATgetArgument(v_20, 2);
                  o_19 :
                  if(match_cons(a_21, sym_DayTime_3))
                    {
                      o_20 = ATgetArgument(a_21, 0);
                      p_20 = ATgetArgument(a_21, 1);
                      q_20 = ATgetArgument(a_21, 2);
                      t = not_null(p_20);
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
              if(match_string(u_20, "KK"))
                {
                  p_19 :
                  if(match_cons(v_20, sym_ComponentTime_3))
                    {
                      w_20 = ATgetArgument(v_20, 0);
                      a_21 = ATgetArgument(v_20, 1);
                      b_21 = ATgetArgument(v_20, 2);
                      q_19 :
                      if(match_cons(a_21, sym_DayTime_3))
                        {
                          o_20 = ATgetArgument(a_21, 0);
                          p_20 = ATgetArgument(a_21, 1);
                          q_20 = ATgetArgument(a_21, 2);
                          {
                            ATerm x_11 = t;
                            int y_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__3, term_u_11, not_null(o_20), term_v_11);
                                t = leq_leq_0(t);
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_u_11);
                                  t = subt_0(t);
                                }
                                LocalPopChoice(y_11);
                              }
                            else
                              {
                                t = x_11;
                                {
                                  t = (ATerm) ATmakeAppl(sym__3, term_b_11, not_null(o_20), term_u_11);
                                  t = leq_lt_0(t);
                                  t = not_null(o_20);
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
                  if(match_string(u_20, "hh"))
                    {
                      r_19 :
                      if(match_cons(v_20, sym_ComponentTime_3))
                        {
                          w_20 = ATgetArgument(v_20, 0);
                          a_21 = ATgetArgument(v_20, 1);
                          b_21 = ATgetArgument(v_20, 2);
                          s_19 :
                          if(match_cons(a_21, sym_DayTime_3))
                            {
                              o_20 = ATgetArgument(a_21, 0);
                              p_20 = ATgetArgument(a_21, 1);
                              q_20 = ATgetArgument(a_21, 2);
                              t_19 :
                              if(match_int(o_20, 0))
                                {
                                  ATerm z_11 = t;
                                  int a_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = m_22(t);
                                      LocalPopChoice(a_12);
                                    }
                                  else
                                    {
                                      t = z_11;
                                      {
                                        ATerm b_12 = t;
                                        int c_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = n_22(t);
                                            LocalPopChoice(c_12);
                                          }
                                        else
                                          {
                                            t = b_12;
                                            t = o_22(t);
                                          }
                                      }
                                    }
                                }
                              else
                                {
                                  ATerm d_12 = t;
                                  int e_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = m_22(t);
                                      LocalPopChoice(e_12);
                                    }
                                  else
                                    {
                                      t = d_12;
                                      t = n_22(t);
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
                      if(match_string(u_20, "kk"))
                        {
                          u_19 :
                          if(match_cons(v_20, sym_ComponentTime_3))
                            {
                              w_20 = ATgetArgument(v_20, 0);
                              a_21 = ATgetArgument(v_20, 1);
                              b_21 = ATgetArgument(v_20, 2);
                              v_19 :
                              if(match_cons(a_21, sym_DayTime_3))
                                {
                                  o_20 = ATgetArgument(a_21, 0);
                                  p_20 = ATgetArgument(a_21, 1);
                                  q_20 = ATgetArgument(a_21, 2);
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
                          if(match_string(u_20, "HH"))
                            {
                              w_19 :
                              if(match_cons(v_20, sym_ComponentTime_3))
                                {
                                  w_20 = ATgetArgument(v_20, 0);
                                  a_21 = ATgetArgument(v_20, 1);
                                  b_21 = ATgetArgument(v_20, 2);
                                  x_19 :
                                  if(match_cons(a_21, sym_DayTime_3))
                                    {
                                      o_20 = ATgetArgument(a_21, 0);
                                      p_20 = ATgetArgument(a_21, 1);
                                      q_20 = ATgetArgument(a_21, 2);
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
                              if(match_string(u_20, "DD"))
                                {
                                  y_19 :
                                  if(match_cons(v_20, sym_ComponentTime_3))
                                    {
                                      w_20 = ATgetArgument(v_20, 0);
                                      a_21 = ATgetArgument(v_20, 1);
                                      b_21 = ATgetArgument(v_20, 2);
                                      z_19 :
                                      if(match_cons(b_21, sym_Dupl_2))
                                        {
                                          r_20 = ATgetArgument(b_21, 0);
                                          s_20 = ATgetArgument(b_21, 1);
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
                                  if(match_string(u_20, "D"))
                                    {
                                      a_20 :
                                      if(match_cons(v_20, sym_ComponentTime_3))
                                        {
                                          w_20 = ATgetArgument(v_20, 0);
                                          a_21 = ATgetArgument(v_20, 1);
                                          b_21 = ATgetArgument(v_20, 2);
                                          b_20 :
                                          if(match_cons(b_21, sym_Dupl_2))
                                            {
                                              r_20 = ATgetArgument(b_21, 0);
                                              s_20 = ATgetArgument(b_21, 1);
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
                                      if(match_string(u_20, "dd"))
                                        {
                                          c_20 :
                                          if(match_cons(v_20, sym_ComponentTime_3))
                                            {
                                              w_20 = ATgetArgument(v_20, 0);
                                              a_21 = ATgetArgument(v_20, 1);
                                              b_21 = ATgetArgument(v_20, 2);
                                              d_20 :
                                              if(match_cons(w_20, sym_Date_3))
                                                {
                                                  x_20 = ATgetArgument(w_20, 0);
                                                  y_20 = ATgetArgument(w_20, 1);
                                                  z_20 = ATgetArgument(w_20, 2);
                                                  t = t_22(t);
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
                                          if(match_string(u_20, "d"))
                                            {
                                              e_20 :
                                              if(match_cons(v_20, sym_ComponentTime_3))
                                                {
                                                  w_20 = ATgetArgument(v_20, 0);
                                                  a_21 = ATgetArgument(v_20, 1);
                                                  b_21 = ATgetArgument(v_20, 2);
                                                  f_20 :
                                                  if(match_cons(w_20, sym_Date_3))
                                                    {
                                                      x_20 = ATgetArgument(w_20, 0);
                                                      y_20 = ATgetArgument(w_20, 1);
                                                      z_20 = ATgetArgument(w_20, 2);
                                                      t = u_22(t);
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
                                              if(match_string(u_20, "MM"))
                                                {
                                                  g_20 :
                                                  if(match_cons(v_20, sym_ComponentTime_3))
                                                    {
                                                      w_20 = ATgetArgument(v_20, 0);
                                                      a_21 = ATgetArgument(v_20, 1);
                                                      b_21 = ATgetArgument(v_20, 2);
                                                      h_20 :
                                                      if(match_cons(w_20, sym_Date_3))
                                                        {
                                                          x_20 = ATgetArgument(w_20, 0);
                                                          y_20 = ATgetArgument(w_20, 1);
                                                          z_20 = ATgetArgument(w_20, 2);
                                                          t = v_22(t);
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
                                                  if(match_string(u_20, "M"))
                                                    {
                                                      i_20 :
                                                      if(match_cons(v_20, sym_ComponentTime_3))
                                                        {
                                                          w_20 = ATgetArgument(v_20, 0);
                                                          a_21 = ATgetArgument(v_20, 1);
                                                          b_21 = ATgetArgument(v_20, 2);
                                                          j_20 :
                                                          if(match_cons(w_20, sym_Date_3))
                                                            {
                                                              x_20 = ATgetArgument(w_20, 0);
                                                              y_20 = ATgetArgument(w_20, 1);
                                                              z_20 = ATgetArgument(w_20, 2);
                                                              t = w_22(t);
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
                                                      if(match_string(u_20, "yy"))
                                                        {
                                                          k_20 :
                                                          if(match_cons(v_20, sym_ComponentTime_3))
                                                            {
                                                              w_20 = ATgetArgument(v_20, 0);
                                                              a_21 = ATgetArgument(v_20, 1);
                                                              b_21 = ATgetArgument(v_20, 2);
                                                              l_20 :
                                                              if(match_cons(w_20, sym_Date_3))
                                                                {
                                                                  x_20 = ATgetArgument(w_20, 0);
                                                                  y_20 = ATgetArgument(w_20, 1);
                                                                  z_20 = ATgetArgument(w_20, 2);
                                                                  t = c_23(t);
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
                                                          if(match_string(u_20, "yyyy"))
                                                            {
                                                              m_20 :
                                                              if(match_cons(v_20, sym_ComponentTime_3))
                                                                {
                                                                  w_20 = ATgetArgument(v_20, 0);
                                                                  a_21 = ATgetArgument(v_20, 1);
                                                                  b_21 = ATgetArgument(v_20, 2);
                                                                  n_20 :
                                                                  if(match_cons(w_20, sym_Date_3))
                                                                    {
                                                                      x_20 = ATgetArgument(w_20, 0);
                                                                      y_20 = ATgetArgument(w_20, 1);
                                                                      z_20 = ATgetArgument(w_20, 2);
                                                                      t = d_23(t);
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
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  ATerm j_25 (ATerm t)
  {
    ATerm z_24 = NULL,b_25 = NULL;
    t = date_pattern_to_int_0(t);
    {
      ATerm f_12;
      f_12 = t;
      {
        ATerm a_25 = NULL;
        t = int_to_string_0(t);
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
      }
      t = f_12;
      {
        ATerm c_25 = NULL;
        t = not_null(q_24);
        {
          t = string_length_0(t);
          {
            c_25 = t;
            if(((b_25 != NULL) && (b_25 != c_25)))
              _fail(c_25);
            else
              b_25 = c_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_12, not_null(z_24), not_null(b_25));
          t = align_right_0(t);
        }
      }
    }
    return(t);
  }
  ATerm k_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_11, not_null(k_24), term_v_11);
    t = leq_leq_0(t);
    t = term_h_12;
    return(t);
  }
  ATerm l_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_11, not_null(k_24), term_u_11);
    t = leq_lt_0(t);
    t = term_i_12;
    return(t);
  }
  ATerm m_25 (ATerm t)
  {
    t = not_null(n_24);
    t = day_of_week2text_0(t);
    return(t);
  }
  ATerm n_25 (ATerm t)
  {
    t = not_null(n_24);
    t = day_of_week2abbr_0(t);
    return(t);
  }
  ATerm o_25 (ATerm t)
  {
    t = not_null(u_24);
    t = month2text_0(t);
    return(t);
  }
  ATerm p_25 (ATerm t)
  {
    t = not_null(u_24);
    t = month2abbr_0(t);
    return(t);
  }
  p_24 = t;
  o_23 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      p_23 :
      if(match_cons(r_24, sym_ComponentTime_3))
        {
          s_24 = ATgetArgument(r_24, 0);
          w_24 = ATgetArgument(r_24, 1);
          x_24 = ATgetArgument(r_24, 2);
          t_23 :
          if(match_cons(x_24, sym_Dupl_2))
            {
              n_24 = ATgetArgument(x_24, 0);
              o_24 = ATgetArgument(x_24, 1);
              v_23 :
              if(match_cons(w_24, sym_DayTime_3))
                {
                  k_24 = ATgetArgument(w_24, 0);
                  l_24 = ATgetArgument(w_24, 1);
                  m_24 = ATgetArgument(w_24, 2);
                  w_23 :
                  if(match_cons(s_24, sym_Date_3))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      u_24 = ATgetArgument(s_24, 1);
                      v_24 = ATgetArgument(s_24, 2);
                      x_23 :
                      if(match_string(q_24, "a"))
                        {
                          ATerm j_12 = t;
                          int k_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
                              LocalPopChoice(k_12);
                            }
                          else
                            {
                              t = j_12;
                              {
                                ATerm n_12 = t;
                                int o_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_25(t);
                                    LocalPopChoice(o_12);
                                  }
                                else
                                  {
                                    t = n_12;
                                    t = l_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(q_24, "EEEE"))
                            {
                              ATerm p_12 = t;
                              int q_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_25(t);
                                  LocalPopChoice(q_12);
                                }
                              else
                                {
                                  t = p_12;
                                  t = m_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(q_24, "EEE"))
                                {
                                  ATerm r_12 = t;
                                  int s_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_25(t);
                                      LocalPopChoice(s_12);
                                    }
                                  else
                                    {
                                      t = r_12;
                                      t = n_25(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(q_24, "MMMM"))
                                    {
                                      ATerm t_12 = t;
                                      int u_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = j_25(t);
                                          LocalPopChoice(u_12);
                                        }
                                      else
                                        {
                                          t = t_12;
                                          t = o_25(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(q_24, "MMM"))
                                        {
                                          ATerm v_12 = t;
                                          int w_12 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = j_25(t);
                                              LocalPopChoice(w_12);
                                            }
                                          else
                                            {
                                              t = v_12;
                                              t = p_25(t);
                                            }
                                        }
                                      else
                                        {
                                          t = j_25(t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      y_23 :
                      if(match_string(q_24, "a"))
                        {
                          ATerm x_12 = t;
                          int y_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
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
                                    t = k_25(t);
                                    LocalPopChoice(a_13);
                                  }
                                else
                                  {
                                    t = z_12;
                                    t = l_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(q_24, "EEEE"))
                            {
                              ATerm d_13 = t;
                              int e_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_25(t);
                                  LocalPopChoice(e_13);
                                }
                              else
                                {
                                  t = d_13;
                                  t = m_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(q_24, "EEE"))
                                {
                                  ATerm f_13 = t;
                                  int g_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_25(t);
                                      LocalPopChoice(g_13);
                                    }
                                  else
                                    {
                                      t = f_13;
                                      t = n_25(t);
                                    }
                                }
                              else
                                {
                                  t = j_25(t);
                                }
                            }
                        }
                    }
                }
              else
                {
                  z_23 :
                  if(match_cons(s_24, sym_Date_3))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      u_24 = ATgetArgument(s_24, 1);
                      v_24 = ATgetArgument(s_24, 2);
                      a_24 :
                      if(match_string(q_24, "EEEE"))
                        {
                          ATerm h_13 = t;
                          int i_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
                              LocalPopChoice(i_13);
                            }
                          else
                            {
                              t = h_13;
                              t = m_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(q_24, "EEE"))
                            {
                              ATerm j_13 = t;
                              int k_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_25(t);
                                  LocalPopChoice(k_13);
                                }
                              else
                                {
                                  t = j_13;
                                  t = n_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(q_24, "MMMM"))
                                {
                                  ATerm q_13 = t;
                                  int r_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_25(t);
                                      LocalPopChoice(r_13);
                                    }
                                  else
                                    {
                                      t = q_13;
                                      t = o_25(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(q_24, "MMM"))
                                    {
                                      ATerm s_13 = t;
                                      int t_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = j_25(t);
                                          LocalPopChoice(t_13);
                                        }
                                      else
                                        {
                                          t = s_13;
                                          t = p_25(t);
                                        }
                                    }
                                  else
                                    {
                                      t = j_25(t);
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      b_24 :
                      if(match_string(q_24, "EEEE"))
                        {
                          ATerm v_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
                              LocalPopChoice(x_13);
                            }
                          else
                            {
                              t = v_13;
                              t = m_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(q_24, "EEE"))
                            {
                              ATerm a_14 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_25(t);
                                  LocalPopChoice(b_14);
                                }
                              else
                                {
                                  t = a_14;
                                  t = n_25(t);
                                }
                            }
                          else
                            {
                              t = j_25(t);
                            }
                        }
                    }
                }
            }
          else
            {
              c_24 :
              if(match_cons(w_24, sym_DayTime_3))
                {
                  k_24 = ATgetArgument(w_24, 0);
                  l_24 = ATgetArgument(w_24, 1);
                  m_24 = ATgetArgument(w_24, 2);
                  d_24 :
                  if(match_cons(s_24, sym_Date_3))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      u_24 = ATgetArgument(s_24, 1);
                      v_24 = ATgetArgument(s_24, 2);
                      e_24 :
                      if(match_string(q_24, "a"))
                        {
                          ATerm g_14 = t;
                          int h_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
                              LocalPopChoice(h_14);
                            }
                          else
                            {
                              t = g_14;
                              {
                                ATerm m_14 = t;
                                int n_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_25(t);
                                    LocalPopChoice(n_14);
                                  }
                                else
                                  {
                                    t = m_14;
                                    t = l_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          if(match_string(q_24, "MMMM"))
                            {
                              ATerm s_14 = t;
                              int t_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_25(t);
                                  LocalPopChoice(t_14);
                                }
                              else
                                {
                                  t = s_14;
                                  t = o_25(t);
                                }
                            }
                          else
                            {
                              if(match_string(q_24, "MMM"))
                                {
                                  ATerm u_14 = t;
                                  int x_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_25(t);
                                      LocalPopChoice(x_14);
                                    }
                                  else
                                    {
                                      t = u_14;
                                      t = p_25(t);
                                    }
                                }
                              else
                                {
                                  t = j_25(t);
                                }
                            }
                        }
                    }
                  else
                    {
                      f_24 :
                      if(match_string(q_24, "a"))
                        {
                          ATerm y_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
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
                                    t = k_25(t);
                                    LocalPopChoice(b_15);
                                  }
                                else
                                  {
                                    t = a_15;
                                    t = l_25(t);
                                  }
                              }
                            }
                        }
                      else
                        {
                          t = j_25(t);
                        }
                    }
                }
              else
                {
                  g_24 :
                  if(match_cons(s_24, sym_Date_3))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      u_24 = ATgetArgument(s_24, 1);
                      v_24 = ATgetArgument(s_24, 2);
                      h_24 :
                      if(match_string(q_24, "MMMM"))
                        {
                          ATerm e_15 = t;
                          int f_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_25(t);
                              LocalPopChoice(f_15);
                            }
                          else
                            {
                              t = e_15;
                              t = o_25(t);
                            }
                        }
                      else
                        {
                          if(match_string(q_24, "MMM"))
                            {
                              ATerm g_15 = t;
                              int h_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_25(t);
                                  LocalPopChoice(h_15);
                                }
                              else
                                {
                                  t = g_15;
                                  t = p_25(t);
                                }
                            }
                          else
                            {
                              t = j_25(t);
                            }
                        }
                    }
                  else
                    {
                      i_24 :
                      t = j_25(t);
                    }
                }
            }
        }
      else
        {
          j_24 :
          t = j_25(t);
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
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        t = not_null(w_25);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm a_26 = NULL;
            ATerm b_26 = NULL;
            b_26 = t;
            if(((a_26 != NULL) && (a_26 != b_26)))
              _fail(b_26);
            else
              a_26 = b_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), not_null(x_25));
              {
                ATerm i_15 = t;
                int o_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = date_pattern_to_string_0(t);
                    LocalPopChoice(o_15);
                  }
                else
                  {
                    t = i_15;
                    t = Fst_0(t);
                  }
              }
            }
            return(t);
          }
          t = map_1(t, x_0);
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
  ATerm m_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_int(m_26, 6))
    {
      t = term_p_15;
    }
  else
    {
      if(match_int(m_26, 5))
        {
          t = term_q_15;
        }
      else
        {
          if(match_int(m_26, 4))
            {
              t = term_x_15;
            }
          else
            {
              if(match_int(m_26, 3))
                {
                  t = term_y_15;
                }
              else
                {
                  if(match_int(m_26, 2))
                    {
                      t = term_z_15;
                    }
                  else
                    {
                      if(match_int(m_26, 1))
                        {
                          t = term_a_16;
                        }
                      else
                        {
                          if(match_int(m_26, 0))
                            {
                              t = term_b_16;
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
  ATerm h_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_int(h_27, 11))
    {
      t = term_c_16;
    }
  else
    {
      if(match_int(h_27, 10))
        {
          t = term_i_16;
        }
      else
        {
          if(match_int(h_27, 9))
            {
              t = term_j_16;
            }
          else
            {
              if(match_int(h_27, 8))
                {
                  t = term_k_16;
                }
              else
                {
                  if(match_int(h_27, 7))
                    {
                      t = term_n_16;
                    }
                  else
                    {
                      if(match_int(h_27, 6))
                        {
                          t = term_o_16;
                        }
                      else
                        {
                          if(match_int(h_27, 5))
                            {
                              t = term_p_16;
                            }
                          else
                            {
                              if(match_int(h_27, 4))
                                {
                                  t = term_q_16;
                                }
                              else
                                {
                                  if(match_int(h_27, 3))
                                    {
                                      t = term_r_16;
                                    }
                                  else
                                    {
                                      if(match_int(h_27, 2))
                                        {
                                          t = term_w_16;
                                        }
                                      else
                                        {
                                          if(match_int(h_27, 1))
                                            {
                                              t = term_x_16;
                                            }
                                          else
                                            {
                                              if(match_int(h_27, 0))
                                                {
                                                  t = term_c_17;
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
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym__8))
    {
      z_27 = ATgetArgument(y_27, 0);
      a_28 = ATgetArgument(y_27, 1);
      b_28 = ATgetArgument(y_27, 2);
      c_28 = ATgetArgument(y_27, 3);
      d_28 = ATgetArgument(y_27, 4);
      e_28 = ATgetArgument(y_27, 5);
      f_28 = ATgetArgument(y_27, 6);
      h_28 = ATgetArgument(y_27, 7);
      {
        ATerm v_28 = NULL,x_28 = NULL;
        ATerm d_17;
        d_17 = t;
        {
          ATerm w_28 = NULL;
          t = not_null(d_28);
          {
            t = index2month_0(t);
            {
              w_28 = t;
              if(((v_28 != NULL) && (v_28 != w_28)))
                _fail(w_28);
              else
                v_28 = w_28;
            }
          }
        }
        t = d_17;
        {
          ATerm y_28 = NULL;
          t = not_null(f_28);
          {
            t = index2day_of_week_0(t);
            {
              y_28 = t;
              if(((x_28 != NULL) && (x_28 != y_28)))
                _fail(y_28);
              else
                x_28 = y_28;
            }
          }
          t = (ATerm) ATmakeAppl(sym_ComponentTime_3, (ATerm)ATmakeAppl(sym_Date_3, not_null(e_28), not_null(v_28), not_null(c_28)), (ATerm)ATmakeAppl(sym_DayTime_3, not_null(b_28), not_null(a_28), not_null(z_27)), (ATerm) ATmakeAppl(sym_Dupl_2, not_null(x_28), not_null(h_28)));
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
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_EpochTime_1))
    {
      f_29 = ATgetArgument(e_29, 0);
      {
        t = SSL_epoch2localtime(not_null(f_29));
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
  ATerm n_29 = NULL;
  t = SSL_now_epoch_time();
  {
    ATerm o_29 = NULL;
    o_29 = t;
    if(((n_29 != NULL) && (n_29 != o_29)))
      _fail(o_29);
    else
      n_29 = o_29;
    t = (ATerm) ATmakeAppl(sym_EpochTime_1, not_null(n_29));
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
  ATerm y_29 = NULL;
  ATerm z_29 = NULL;
  t = term_d_6;
  {
    t = now_local_time_0(t);
    {
      z_29 = t;
      if(((y_29 != NULL) && (y_29 != z_29)))
        _fail(z_29);
      else
        y_29 = z_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_17), term_q_17), term_r_17), term_q_17), term_n_17), term_f_17), term_m_17), term_f_17), term_l_17), term_f_17), term_k_17), term_f_17), term_e_17), not_null(y_29));
    t = date_format_0(t);
  }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm t_17;
  t_17 = t;
  {
    t = error_0(t);
    {
      t = term_z_10;
      t = exit_0(t);
    }
  }
  t = t_17;
  return(t);
}
ATerm get_title_0 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_17;
      t = get_config_0(t);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      {
        t = (ATerm) ATinsert(ATempty, term_x_17);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm create_header_0 (ATerm t)
{
  ATerm d_30 = NULL,f_30 = NULL;
  t = get_title_0(t);
  {
    ATerm y_17;
    y_17 = t;
    {
      ATerm e_30 = NULL;
      e_30 = t;
      if(((d_30 != NULL) && (d_30 != e_30)))
        _fail(e_30);
      else
        d_30 = e_30;
    }
    t = y_17;
    {
      ATerm g_30 = NULL;
      t = term_d_6;
      {
        t = create_time_0(t);
        {
          g_30 = t;
          if(((f_30 != NULL) && (f_30 != g_30)))
            _fail(g_30);
          else
            f_30 = g_30;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_18), term_m_18), term_l_18), term_k_18), not_null(d_30)), term_j_18), term_i_18), term_h_18), term_g_18), term_f_18), term_c_18), term_b_18), not_null(f_30)), term_a_18), term_z_17);
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm a_89 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_30 = NULL;
        ATerm l_30 = NULL;
        t = term_y_7;
        {
          t = get_config_0(t);
          {
            l_30 = t;
            if(((k_30 != NULL) && (k_30 != l_30)))
              _fail(l_30);
            else
              k_30 = l_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_30));
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = term_j_7;
      }
    {
      t = a_89(t);
      {
        ATerm z_0 (ATerm t)
        {
          ATerm q_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_7;
              t = get_config_0(t);
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
              t = term_s_18;
            }
          return(t);
        }
        t = copy_to_1(t, z_0);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, y_0);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm q_30 = NULL,s_30 = NULL,u_30 = NULL;
    ATerm t_18;
    t_18 = t;
    {
      ATerm r_30 = NULL;
      t = create_header_0(t);
      {
        t = print_to_0(t);
        {
          r_30 = t;
          if(((q_30 != NULL) && (q_30 != r_30)))
            _fail(r_30);
          else
            q_30 = r_30;
        }
      }
    }
    t = t_18;
    {
      ATerm u_18;
      u_18 = t;
      {
        ATerm t_30 = NULL;
        ATerm b_1 (ATerm t)
        {
          t = term_v_18;
          return(t);
        }
        t = xtc_transform_2(t, b_1, pass_verbose_0);
        {
          t_30 = t;
          if(((s_30 != NULL) && (s_30 != t_30)))
            _fail(t_30);
          else
            s_30 = t_30;
        }
      }
      t = u_18;
      {
        ATerm v_30 = NULL;
        t = create_footer_0(t);
        {
          t = print_to_0(t);
          {
            v_30 = t;
            if(((u_30 != NULL) && (u_30 != v_30)))
              _fail(v_30);
            else
              u_30 = v_30;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_30)), not_null(s_30)), not_null(q_30));
          t = xtc_cat_0(t);
        }
      }
    }
    return(t);
  }
  t = xtc_io_1(t, a_1);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  t = SSL_int_to_string(not_null(a_31));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym__2))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_31), not_null(h_31));
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = SSL_subtr(not_null(g_31), not_null(h_31));
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
  ATerm n_31 = NULL;
  ATerm o_31 = NULL,q_31 = NULL;
  ATerm p_31 = NULL;
  t = term_y_18;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = term_z_10;
      }
    {
      p_31 = t;
      if(((o_31 != NULL) && (o_31 != p_31)))
        _fail(p_31);
      else
        o_31 = p_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_z_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          q_31 = t;
          if(((n_31 != NULL) && (n_31 != q_31)))
            _fail(q_31);
          else
            n_31 = q_31;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_31)), term_y_18);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  t = SSL_close_file(not_null(u_31));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym__2))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      t = SSL_execvp(not_null(a_32), not_null(b_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  t = SSL_waitpid(not_null(g_32));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm q_32 = NULL;
  ATerm s_32 = NULL;
  q_32 = t;
  {
    t = fork_0(t);
    {
      s_32 = t;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_32 = NULL;
            u_32 = t;
            m_32 :
            if(match_int(u_32, 0))
              {
                t = not_null(q_32);
                t = k_79(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
              t = not_null(s_32);
              {
                t = waitpid_0(t);
                {
                  v_32 = t;
                  o_32 :
                  if(match_cons(v_32, sym_WaitStatus_3))
                    {
                      w_32 = ATgetArgument(v_32, 0);
                      x_32 = ATgetArgument(v_32, 1);
                      y_32 = ATgetArgument(v_32, 2);
                      p_32 :
                      if(match_int(w_32, 0))
                        {
                          t = not_null(q_32);
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
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  i_33 :
  if(match_cons(j_33, sym__2))
    {
      k_33 = ATgetArgument(j_33, 0);
      l_33 = ATgetArgument(j_33, 1);
      {
        ATerm c_1 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_33), not_null(l_33));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, c_1);
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
  ATerm q_33 = NULL;
  q_33 = t;
  t = SSL_table_keys(not_null(q_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  {
    t = table_keys_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm c_34 = NULL;
        ATerm e_34 = NULL;
        c_34 = t;
        {
          ATerm f_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), not_null(c_34));
          {
            t = table_get_0(t);
            {
              f_34 = t;
              if(((e_34 != NULL) && (e_34 != f_34)))
                _fail(f_34);
              else
                e_34 = f_34;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), not_null(e_34));
        }
        return(t);
      }
      t = map_1(t, d_1);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_19;
      f_19 = t;
      {
        ATerm k_34 = NULL;
        ATerm l_34 = NULL;
        t = term_y_18;
        {
          t = get_config_0(t);
          {
            l_34 = t;
            if(((k_34 != NULL) && (k_34 != l_34)))
              _fail(l_34);
            else
              k_34 = l_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_34), term_o_11);
          t = geq_0(t);
        }
      }
      t = f_19;
      t = u_87(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_19;
  g_19 = t;
  {
    ATerm o_34 = NULL;
    ATerm p_34 = NULL;
    p_34 = t;
    if(((o_34 != NULL) && (o_34 != p_34)))
      _fail(p_34);
    else
      o_34 = p_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(o_34));
      t = printnl_0(t);
    }
  }
  t = g_19;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm v_34 = NULL;
  ATerm x_34 = NULL,y_34 = NULL;
  v_34 = t;
  {
    ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(v_34)));
    {
      t = table_get_0(t);
      {
        z_34 = t;
        t_34 :
        if(((ATgetType(z_34) == AT_LIST) && !(ATisEmpty(z_34))))
          {
            a_35 = ATgetFirst((ATermList) z_34);
            d_35 = (ATerm) ATgetNext((ATermList) z_34);
            u_34 :
            if(match_cons(a_35, sym__2))
              {
                b_35 = ATgetArgument(a_35, 0);
                c_35 = ATgetArgument(a_35, 1);
                {
                  if(((x_34 != NULL) && (x_34 != b_35)))
                    _fail(b_35);
                  else
                    x_34 = b_35;
                  if(((y_34 != NULL) && (y_34 != c_35)))
                    _fail(c_35);
                  else
                    y_34 = c_35;
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
    t = not_null(y_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym__2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm u_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_35)));
        {
          t = table_get_0(t);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
              v_35 = t;
              l_35 :
              if(match_cons(v_35, sym__2))
                {
                  w_35 = ATgetArgument(v_35, 0);
                  x_35 = ATgetArgument(v_35, 1);
                  {
                    if(((r_35 != NULL) && (r_35 != w_35)))
                      _fail(w_35);
                    else
                      r_35 = w_35;
                    if(((u_35 != NULL) && (u_35 != x_35)))
                      _fail(x_35);
                    else
                      u_35 = x_35;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, e_1);
          }
        }
        t = not_null(u_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_21;
      {
        t = table_get_0(t);
        {
          ATerm f_1 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, f_1);
        }
      }
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21;
      i_21 = t;
      {
        ATerm b_36 = NULL;
        ATerm c_36 = NULL;
        t = term_y_18;
        {
          t = get_config_0(t);
          {
            c_36 = t;
            if(((b_36 != NULL) && (b_36 != c_36)))
              _fail(c_36);
            else
              b_36 = c_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), term_p_11);
          t = geq_0(t);
        }
      }
      t = i_21;
      t = t_87(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21;
      l_21 = t;
      {
        ATerm f_36 = NULL;
        ATerm g_36 = NULL;
        t = term_y_18;
        {
          t = get_config_0(t);
          {
            g_36 = t;
            if(((f_36 != NULL) && (f_36 != g_36)))
              _fail(g_36);
            else
              f_36 = g_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), term_n_11);
          t = geq_0(t);
        }
      }
      t = l_21;
      t = v_87(t);
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
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym__2))
    {
      l_36 = ATgetArgument(k_36, 0);
      m_36 = ATgetArgument(k_36, 1);
      if(((l_36 != NULL) && (l_36 != m_36)))
        _fail(m_36);
      else
        l_36 = m_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm x_36 = NULL,a_37 = NULL,b_37 = NULL;
  x_36 = t;
  r_36 :
  if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
    {
      a_37 = ATgetFirst((ATermList) x_36);
      b_37 = (ATerm) ATgetNext((ATermList) x_36);
      {
        t = b_73(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm g_37 = NULL;
            g_37 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_37), not_null(g_37));
              t = a_73(t);
            }
            return(t);
          }
          t = fetch_1(t, g_1);
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
ATerm union_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym__2))
    {
      n_37 = ATgetArgument(m_37, 0);
      o_37 = ATgetArgument(m_37, 1);
      {
        t = not_null(n_37);
        {
          ATerm s_37 (ATerm t)
          {
            ATerm m_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(o_37);
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                {
                  ATerm o_21 = t;
                  int p_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(o_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_72, h_1);
                      t = s_37(t);
                      LocalPopChoice(p_21);
                    }
                  else
                    {
                      t = o_21;
                      t = Cons_2(t, _id, s_37);
                    }
                }
              }
            return(t);
          }
          t = s_37(t);
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
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,p_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_cons(b_38, sym__3))
    {
      c_38 = ATgetArgument(b_38, 0);
      d_38 = ATgetArgument(b_38, 1);
      p_38 = ATgetArgument(b_38, 2);
      {
        ATerm q_21;
        q_21 = t;
        {
          ATerm y_38 = NULL;
          ATerm z_38 = NULL,b_39 = NULL;
          ATerm a_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(d_38));
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
                t = (ATerm) ATempty;
              }
            {
              a_39 = t;
              if(((z_38 != NULL) && (z_38 != a_39)))
                _fail(a_39);
              else
                z_38 = a_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_38), not_null(p_38));
            {
              t = union_1(t, eq_0);
              {
                b_39 = t;
                if(((y_38 != NULL) && (y_38 != b_39)))
                  _fail(b_39);
                else
                  y_38 = b_39;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_38), not_null(d_38), not_null(y_38));
            t = table_put_0(t);
          }
        }
        t = q_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym__2))
    {
      k_39 = ATgetArgument(j_39, 0);
      l_39 = ATgetArgument(j_39, 1);
      {
        t = not_null(l_39);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
            t_39 = t;
            h_39 :
            if(match_cons(t_39, sym__2))
              {
                u_39 = ATgetArgument(t_39, 0);
                v_39 = ATgetArgument(t_39, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(k_39), not_null(u_39), not_null(v_39));
                  t = i_78(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_1);
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
  ATerm n_40 = NULL;
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_40 = NULL;
      o_40 = t;
      {
        if(((n_40 != NULL) && (n_40 != o_40)))
          _fail(o_40);
        else
          n_40 = o_40;
        t = SSL_ReadFromFile(not_null(n_40));
      }
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_v_21;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm s_40 = NULL;
  ATerm u_40 = NULL;
  s_40 = t;
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_40)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
    {
      ATerm x_21;
      x_21 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_19, term_y_21, (ATerm) ATinsert(ATempty, not_null(s_40)));
        t = table_put_0(t);
      }
      t = x_21;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            t = term_z_21;
            return(t);
          }
          t = debug_1(t, l_1);
          return(t);
        }
        t = if_verbose4_1(t, k_1);
        {
          ATerm a_22 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(b_22);
            }
          else
            {
              t = a_22;
              t = (ATerm) ATempty;
            }
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = term_c_22;
                return(t);
              }
              t = say_1(t, n_1);
              return(t);
            }
            t = if_verbose6_1(t, m_1);
            {
              ATerm v_40 = NULL;
              v_40 = t;
              if(((u_40 != NULL) && (u_40 != v_40)))
                _fail(v_40);
              else
                u_40 = v_40;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_19, not_null(u_40));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = term_d_22;
                        return(t);
                      }
                      t = say_1(t, p_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, o_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_i_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_40)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm r_1 (ATerm t)
                            {
                              t = term_c_22;
                              return(t);
                            }
                            t = say_1(t, r_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, q_1);
                        }
                      }
                    }
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
  ATerm z_40 = NULL;
  z_40 = t;
  t = SSL_getenv(not_null(z_40));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_22;
      t = get_config_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_22;
            t = getenv_0(t);
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      t = term_x_22;
      return(t);
    }
    t = debug_1(t, t_1);
    return(t);
  }
  t = if_verbose5_1(t, s_1);
  {
    ATerm y_22;
    y_22 = t;
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_b_23;
          t = table_get_0(t);
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = y_22;
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = term_e_23;
          return(t);
        }
        t = debug_1(t, v_1);
        return(t);
      }
      t = if_verbose5_1(t, u_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          t = term_h_23;
          return(t);
        }
        t = debug_1(t, x_1);
        return(t);
      }
      t = if_verbose5_1(t, w_1);
      {
        t = xtc_load_0(t);
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm y_1 (ATerm t)
            {
              ATerm z_1 (ATerm t)
              {
                t = term_h_23;
                return(t);
              }
              t = debug_1(t, z_1);
              return(t);
            }
            t = if_verbose5_1(t, y_1);
          }
        }
      }
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm d_41 = NULL;
        ATerm e_41 = NULL;
        e_41 = t;
        if(((d_41 != NULL) && (d_41 != e_41)))
          _fail(e_41);
        else
          d_41 = e_41;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), not_null(d_41)), term_k_23);
          {
            t = error_0(t);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_i_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_2 (ATerm t)
                    {
                      t = term_m_23;
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
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm j_41 = NULL;
  ATerm n_23;
  n_23 = t;
  {
    ATerm k_41 = NULL;
    t = j_89(t);
    {
      t = xtc_find_0(t);
      {
        k_41 = t;
        if(((j_41 != NULL) && (j_41 != k_41)))
          _fail(k_41);
        else
          j_41 = k_41;
      }
    }
  }
  t = n_23;
  {
    ATerm q_23;
    q_23 = t;
    {
      ATerm l_41 = NULL;
      ATerm m_41 = NULL;
      m_41 = t;
      if(((l_41 != NULL) && (l_41 != m_41)))
        _fail(m_41);
      else
        l_41 = m_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), not_null(l_41));
        t = call_0(t);
      }
    }
    t = q_23;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym__2))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      {
        ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
        ATerm r_23;
        r_23 = t;
        {
          ATerm l_42 = NULL;
          ATerm q_42 = NULL,r_42 = NULL,u_42 = NULL;
          t = f_78(t);
          {
            l_42 = t;
            {
              if(((i_42 != NULL) && (i_42 != l_42)))
                _fail(l_42);
              else
                i_42 = l_42;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_42), not_null(e_42), not_null(f_42));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_23 = t;
                    int u_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_42), term_y_24);
                        t = table_get_0(t);
                        LocalPopChoice(u_23);
                      }
                    else
                      {
                        t = s_23;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_42 = t;
                      b_42 :
                      if(((ATgetType(q_42) == AT_LIST) && !(ATisEmpty(q_42))))
                        {
                          r_42 = ATgetFirst((ATermList) q_42);
                          u_42 = (ATerm) ATgetNext((ATermList) q_42);
                          {
                            if(((j_42 != NULL) && (j_42 != r_42)))
                              _fail(r_42);
                            else
                              j_42 = r_42;
                            {
                              if(((k_42 != NULL) && (k_42 != u_42)))
                                _fail(u_42);
                              else
                                k_42 = u_42;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_42), term_y_24, (ATerm) ATinsert(CheckATermList(not_null(k_42)), (ATerm) ATinsert(CheckATermList(not_null(j_42)), not_null(e_42))));
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
        t = r_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm d_25;
  d_25 = t;
  {
    t = t_62(t);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_e_25;
        return(t);
      }
      t = debug_1(t, d_2);
    }
  }
  t = d_25;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_43 = NULL,o_43 = NULL,p_43 = NULL;
      j_43 = t;
      e_43 :
      if(match_cons(j_43, sym__2))
        {
          o_43 = ATgetArgument(j_43, 0);
          p_43 = ATgetArgument(j_43, 1);
          {
            if(((i_43 != NULL) && (i_43 != o_43)))
              _fail(o_43);
            else
              i_43 = o_43;
            if(((h_43 != NULL) && (h_43 != p_43)))
              _fail(p_43);
            else
              h_43 = p_43;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_25);
      t = SSL_open_file(not_null(i_43), not_null(h_43));
    }
  else
    {
      t = f_25;
      {
        ATerm q_43 = NULL;
        ATerm r_43 = NULL;
        ATerm e_2 (ATerm t)
        {
          t = term_h_25;
          return(t);
        }
        t = obsolete_1(t, e_2);
        {
          q_43 = t;
          {
            if(((i_43 != NULL) && (i_43 != q_43)))
              _fail(q_43);
            else
              i_43 = q_43;
            {
              ATerm i_25;
              i_25 = t;
              {
                ATerm s_43 = NULL;
                t = term_q_25;
                {
                  s_43 = t;
                  if(((r_43 != NULL) && (r_43 != s_43)))
                    _fail(s_43);
                  else
                    r_43 = s_43;
                }
              }
              t = i_25;
              t = SSL_open_file(not_null(i_43), not_null(r_43));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm y_43 = NULL;
  ATerm a_44 = NULL;
  y_43 = t;
  {
    ATerm r_25;
    r_25 = t;
    {
      ATerm b_44 = NULL;
      t = term_s_25;
      {
        b_44 = t;
        if(((a_44 != NULL) && (a_44 != b_44)))
          _fail(b_44);
        else
          a_44 = b_44;
      }
    }
    t = r_25;
    {
      t = SSL_open_file(not_null(y_43), not_null(a_44));
      t = SSL_close_file(not_null(y_43));
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
  ATerm f_44 = NULL;
  ATerm g_44 = NULL;
  t = term_d_6;
  {
    t = new_0(t);
    {
      g_44 = t;
      if(((f_44 != NULL) && (f_44 != g_44)))
        _fail(g_44);
      else
        f_44 = g_44;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), term_t_25);
    {
      t = conc_strings_0(t);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
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
  ATerm k_44 = NULL;
  t = new_file_0(t);
  {
    k_44 = t;
    {
      ATerm c_26;
      c_26 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), term_q_25);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), term_d_6);
            {
              ATerm f_2 (ATerm t)
              {
                t = term_f_7;
                return(t);
              }
              t = assert_1(t, f_2);
            }
          }
        }
      }
      t = c_26;
    }
  }
  return(t);
}
ATerm xtc_generate_2 (ATerm t, ATerm x_89 (ATerm), ATerm y_89 (ATerm))
{
  ATerm p_44 = NULL;
  ATerm q_44 = NULL;
  t = term_d_6;
  {
    ATerm r_44 = NULL;
    t = xtc_new_file_0(t);
    {
      q_44 = t;
      {
        if(((p_44 != NULL) && (p_44 != q_44)))
          _fail(q_44);
        else
          p_44 = q_44;
        {
          ATerm s_44 = NULL;
          t = y_89(t);
          {
            s_44 = t;
            if(((r_44 != NULL) && (r_44 != s_44)))
              _fail(s_44);
            else
              r_44 = s_44;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_44), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_44)), term_k_7));
            {
              ATerm d_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = conc_two_lists_0(t);
                  LocalPopChoice(e_26);
                }
              else
                {
                  t = d_26;
                  t = conc_more_lists_0(t);
                }
              {
                t = xtc_command_1(t, x_89);
                {
                  t = not_null(p_44);
                  t = close_file_0(t);
                }
              }
            }
          }
        }
      }
    }
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_44));
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym__2))
    {
      y_44 = ATgetArgument(x_44, 0);
      z_44 = ATgetArgument(x_44, 1);
      t = SSL_copy(not_null(y_44), not_null(z_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_stderr_0))
    {
      ATerm j_45 = NULL,l_45 = NULL;
      ATerm f_26;
      f_26 = t;
      {
        ATerm k_45 = NULL;
        t = SSLgetAnnotations(not_null(h_45));
        {
          k_45 = t;
          if(((j_45 != NULL) && (j_45 != k_45)))
            _fail(k_45);
          else
            j_45 = k_45;
        }
      }
      t = f_26;
      {
        ATerm m_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_45));
        {
          m_45 = t;
          if(((l_45 != NULL) && (l_45 != m_45)))
            _fail(m_45);
          else
            l_45 = m_45;
        }
        t = not_null(l_45);
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
  ATerm u_45 = NULL;
  u_45 = t;
  t_45 :
  if(match_cons(u_45, sym_stdout_0))
    {
      ATerm w_45 = NULL,y_45 = NULL;
      ATerm g_26;
      g_26 = t;
      {
        ATerm x_45 = NULL;
        t = SSLgetAnnotations(not_null(u_45));
        {
          x_45 = t;
          if(((w_45 != NULL) && (w_45 != x_45)))
            _fail(x_45);
          else
            w_45 = x_45;
        }
      }
      t = g_26;
      {
        ATerm z_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(w_45));
        {
          z_45 = t;
          if(((y_45 != NULL) && (y_45 != z_45)))
            _fail(z_45);
          else
            y_45 = z_45;
        }
        t = not_null(y_45);
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
  ATerm l_46 = NULL,m_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_FILE_1))
    {
      m_46 = ATgetArgument(l_46, 0);
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_46 = NULL;
            ATerm p_46 = NULL;
            t = m_0(t);
            {
              p_46 = t;
              {
                if(((o_46 != NULL) && (o_46 != p_46)))
                  _fail(p_46);
                else
                  o_46 = p_46;
                {
                  ATerm j_26 = t;
                  int k_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(k_26);
                    }
                  else
                    {
                      t = j_26;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_46), not_null(o_46));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_46));
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            {
              ATerm n_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_46 = NULL;
                  ATerm s_46 = NULL;
                  t = m_0(t);
                  {
                    s_46 = t;
                    {
                      if(((r_46 != NULL) && (r_46 != s_46)))
                        _fail(s_46);
                      else
                        r_46 = s_46;
                      {
                        ATerm p_26 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_26 = t;
                            int r_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(r_26);
                              }
                            else
                              {
                                t = q_26;
                                {
                                  ATerm s_26 = t;
                                  int t_26 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(t_26);
                                    }
                                  else
                                    {
                                      t = s_26;
                                      {
                                        ATerm t_46 = NULL;
                                        t_46 = t;
                                        if(((m_46 != NULL) && (m_46 != t_46)))
                                          _fail(t_46);
                                        else
                                          m_46 = t_46;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_26;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_46), not_null(r_46));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_46));
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = n_26;
                  {
                    ATerm v_46 = NULL;
                    t = m_0(t);
                    {
                      v_46 = t;
                      if(((m_46 != NULL) && (m_46 != v_46)))
                        _fail(v_46);
                      else
                        m_46 = v_46;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_46));
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
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  e_47 :
  if(((ATgetType(f_47) == AT_LIST) && !(ATisEmpty(f_47))))
    {
      g_47 = ATgetFirst((ATermList) f_47);
      h_47 = (ATerm) ATgetNext((ATermList) f_47);
      t = not_null(h_47);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  m_47 :
  if(match_cons(n_47, sym__2))
    {
      o_47 = ATgetArgument(n_47, 0);
      p_47 = ATgetArgument(n_47, 1);
      {
        ATerm u_26;
        u_26 = t;
        {
          ATerm s_47 = NULL;
          ATerm t_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), not_null(p_47));
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(w_26);
              }
            else
              {
                t = v_26;
                t = (ATerm) ATempty;
              }
            {
              t_47 = t;
              if(((s_47 != NULL) && (s_47 != t_47)))
                _fail(t_47);
              else
                s_47 = t_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_47), not_null(p_47), not_null(s_47));
            t = table_put_0(t);
          }
        }
        t = u_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  ATerm x_26;
  x_26 = t;
  {
    ATerm d_48 = NULL;
    ATerm e_48 = NULL,h_48 = NULL,i_48 = NULL;
    t = c_78(t);
    {
      d_48 = t;
      {
        if(((c_48 != NULL) && (c_48 != d_48)))
          _fail(d_48);
        else
          c_48 = d_48;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_48), term_y_24);
              t = table_get_0(t);
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_48 = t;
            z_47 :
            if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
              {
                h_48 = ATgetFirst((ATermList) e_48);
                i_48 = (ATerm) ATgetNext((ATermList) e_48);
                {
                  if(((b_48 != NULL) && (b_48 != h_48)))
                    _fail(h_48);
                  else
                    b_48 = h_48;
                  {
                    if(((a_48 != NULL) && (a_48 != i_48)))
                      _fail(i_48);
                    else
                      a_48 = i_48;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_48), term_y_24, not_null(a_48));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_48);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm j_48 = NULL;
                              j_48 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_48), not_null(j_48));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_2);
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
  t = x_26;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  t = SSL_remove(not_null(v_48));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_66(t);
      t = r_66(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        t = r_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm a_49 = NULL;
  ATerm c_27;
  c_27 = t;
  {
    ATerm b_49 = NULL;
    ATerm c_49 = NULL;
    t = b_78(t);
    {
      b_49 = t;
      {
        if(((a_49 != NULL) && (a_49 != b_49)))
          _fail(b_49);
        else
          a_49 = b_49;
        {
          ATerm d_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), term_y_24);
          {
            ATerm d_27 = t;
            int e_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_27);
              }
            else
              {
                t = d_27;
                t = (ATerm) ATempty;
              }
            {
              d_49 = t;
              if(((c_49 != NULL) && (c_49 != d_49)))
                _fail(d_49);
              else
                c_49 = d_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_49), term_y_24, (ATerm) ATinsert(CheckATermList(not_null(c_49)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = c_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm z_88 (ATerm))
{
  ATerm i_49 = NULL,j_49 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = term_f_7;
    return(t);
  }
  t = begin_scope_1(t, h_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm f_27;
      f_27 = t;
      {
        ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_27;
            t = table_get_0(t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          k_49 = t;
          h_49 :
          if(((ATgetType(k_49) == AT_LIST) && !(ATisEmpty(k_49))))
            {
              l_49 = ATgetFirst((ATermList) k_49);
              m_49 = (ATerm) ATgetNext((ATermList) k_49);
              {
                if(((j_49 != NULL) && (j_49 != l_49)))
                  _fail(l_49);
                else
                  j_49 = l_49;
                {
                  if(((i_49 != NULL) && (i_49 != m_49)))
                    _fail(m_49);
                  else
                    i_49 = m_49;
                  {
                    t = not_null(j_49);
                    {
                      ATerm j_2 (ATerm t)
                      {
                        ATerm l_27 = t;
                        int m_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(m_27);
                          }
                        else
                          {
                            t = l_27;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, j_2);
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
      t = f_27;
      {
        ATerm k_2 (ATerm t)
        {
          t = term_f_7;
          return(t);
        }
        t = end_scope_1(t, k_2);
      }
      return(t);
    }
    t = restore_always_2(t, z_88, i_2);
  }
  return(t);
}
ATerm xtc_output_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    t = b_89(t);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_7;
            t = get_config_0(t);
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            t = term_s_18;
          }
        return(t);
      }
      t = copy_to_1(t, m_2);
    }
    return(t);
  }
  t = xtc_temp_files_1(t, l_2);
  return(t);
}
ATerm gen_css_0 (ATerm t)
{
  ATerm p_27;
  p_27 = t;
  {
    ATerm p_49 = NULL;
    t = term_q_27;
    {
      t = get_config_0(t);
      {
        p_49 = t;
        o_49 :
        if(!(match_string(p_49, "gen-css")))
          {
            _fail(t);
          }
      }
    }
  }
  t = p_27;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm o_2 (ATerm t)
      {
        t = term_r_27;
        return(t);
      }
      t = xtc_generate_2(t, o_2, pass_verbose_0);
      return(t);
    }
    t = xtc_output_1(t, n_2);
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
  v_49 = t;
  t_49 :
  if(match_string(v_49, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(v_49) == AT_LIST) && !(ATisEmpty(v_49))))
        {
          w_49 = ATgetFirst((ATermList) v_49);
          x_49 = (ATerm) ATgetNext((ATermList) v_49);
          u_49 :
          if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
            {
              y_49 = ATgetFirst((ATermList) x_49);
              z_49 = (ATerm) ATgetNext((ATermList) x_49);
              {
                ATerm d_50 = NULL;
                ATerm s_27;
                s_27 = t;
                {
                  t = not_null(w_49);
                  t = j_0(t);
                }
                t = s_27;
                {
                  ATerm e_50 = NULL;
                  t = not_null(y_49);
                  {
                    t = k_0(t);
                    {
                      e_50 = t;
                      if(((d_50 != NULL) && (d_50 != e_50)))
                        _fail(e_50);
                      else
                        d_50 = e_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_49)), not_null(d_50));
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
  ATerm p_2 (ATerm t)
  {
    ATerm j_50 = NULL;
    j_50 = t;
    i_50 :
    if(!(match_string(j_50, "-v")))
      {
        if(!(match_string(j_50, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_u_27;
    t = set_config_0(t);
    t = term_v_27;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_w_27;
    return(t);
  }
  t = Option_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm m_50 = NULL;
    m_50 = t;
    k_50 :
    if(!(match_string(m_50, "-k")))
      {
        if(!(match_string(m_50, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm g_28;
    g_28 = t;
    {
      ATerm n_50 = NULL;
      ATerm o_50 = NULL;
      t = string_to_int_0(t);
      {
        o_50 = t;
        if(((n_50 != NULL) && (n_50 != o_50)))
          _fail(o_50);
        else
          n_50 = o_50;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(n_50));
        t = set_config_0(t);
      }
    }
    t = g_28;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_j_28;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_51 = NULL;
  h_51 = t;
  t = SSL_string_to_int(not_null(h_51));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm e_52 = NULL;
        e_52 = t;
        u_51 :
        if(!(match_string(e_52, "-S")))
          {
            if(!(match_string(e_52, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_m_28;
        t = set_config_0(t);
        t = term_n_28;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_o_28;
        return(t);
      }
      t = Option_3(t, y_2, c_3, i_3);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              ATerm g_52 = NULL;
              g_52 = t;
              v_51 :
              if(!(match_string(g_52, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm t_52 = NULL;
              ATerm r_28;
              r_28 = t;
              {
                ATerm h_52 = NULL;
                ATerm i_52 = NULL;
                t = string_to_int_0(t);
                {
                  i_52 = t;
                  if(((h_52 != NULL) && (h_52 != i_52)))
                    _fail(i_52);
                  else
                    h_52 = i_52;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_18, not_null(h_52));
                  t = set_config_0(t);
                }
              }
              t = r_28;
              {
                ATerm u_52 = NULL;
                u_52 = t;
                if(((t_52 != NULL) && (t_52 != u_52)))
                  _fail(u_52);
                else
                  t_52 = u_52;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_52));
              }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_s_28;
              return(t);
            }
            t = ArgOption_3(t, j_3, k_3, l_3);
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm m_3 (ATerm t)
              {
                ATerm v_52 = NULL;
                v_52 = t;
                d_52 :
                if(!(match_string(v_52, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_u_28;
                t = set_config_0(t);
                t = term_z_28;
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_a_29;
                return(t);
              }
              t = Option_3(t, m_3, n_3, o_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm c_54 = NULL;
    c_54 = t;
    x_53 :
    if(!(match_string(c_54, "-o")))
      {
        if(!(match_string(c_54, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm f_54 = NULL;
    ATerm i_29;
    i_29 = t;
    {
      ATerm d_54 = NULL;
      ATerm e_54 = NULL;
      e_54 = t;
      if(((d_54 != NULL) && (d_54 != e_54)))
        _fail(e_54);
      else
        d_54 = e_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, not_null(d_54));
        t = set_config_0(t);
      }
    }
    t = i_29;
    {
      ATerm g_54 = NULL;
      g_54 = t;
      if(((f_54 != NULL) && (f_54 != g_54)))
        _fail(g_54);
      else
        f_54 = g_54;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_54));
    }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_j_29;
    return(t);
  }
  t = ArgOption_3(t, t_3, u_3, v_3);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm m_54 = NULL;
    m_54 = t;
    j_54 :
    if(!(match_string(m_54, "-i")))
      {
        if(!(match_string(m_54, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm p_54 = NULL;
    ATerm k_29;
    k_29 = t;
    {
      ATerm n_54 = NULL;
      ATerm o_54 = NULL;
      o_54 = t;
      if(((n_54 != NULL) && (n_54 != o_54)))
        _fail(o_54);
      else
        n_54 = o_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(n_54));
        t = set_config_0(t);
      }
    }
    t = k_29;
    {
      ATerm q_54 = NULL;
      q_54 = t;
      if(((p_54 != NULL) && (p_54 != q_54)))
        _fail(q_54);
      else
        p_54 = q_54;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_54));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_l_29;
    return(t);
  }
  t = ArgOption_3(t, w_3, y_3, z_3);
  return(t);
}
ATerm abox2html_options_0 (ATerm t)
{
  ATerm m_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = m_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm s_29 = t;
              int t_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(t_29);
                }
              else
                {
                  t = s_29;
                  {
                    ATerm u_29 = t;
                    int v_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_4 (ATerm t)
                        {
                          ATerm w_54 = NULL;
                          w_54 = t;
                          t_54 :
                          if(!(match_string(w_54, "-c")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_4 (ATerm t)
                        {
                          ATerm w_29;
                          w_29 = t;
                          {
                            t = term_a_30;
                            t = set_config_0(t);
                          }
                          t = w_29;
                          return(t);
                        }
                        ATerm d_4 (ATerm t)
                        {
                          t = term_b_30;
                          return(t);
                        }
                        t = Option_3(t, a_4, c_4, d_4);
                        LocalPopChoice(v_29);
                      }
                    else
                      {
                        t = u_29;
                        {
                          ATerm e_4 (ATerm t)
                          {
                            ATerm x_54 = NULL;
                            x_54 = t;
                            u_54 :
                            if(!(match_string(x_54, "-t")))
                              {
                                if(!(match_string(x_54, "--title")))
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          ATerm f_4 (ATerm t)
                          {
                            ATerm c_30;
                            c_30 = t;
                            {
                              ATerm y_54 = NULL;
                              ATerm z_54 = NULL;
                              z_54 = t;
                              if(((y_54 != NULL) && (y_54 != z_54)))
                                _fail(z_54);
                              else
                                y_54 = z_54;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(y_54));
                                t = set_config_0(t);
                              }
                            }
                            t = c_30;
                            return(t);
                          }
                          ATerm g_4 (ATerm t)
                          {
                            t = term_h_30;
                            return(t);
                          }
                          t = ArgOption_3(t, e_4, f_4, g_4);
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
  ATerm d_55 = NULL;
  ATerm i_30;
  i_30 = t;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm e_55 = NULL,f_55 = NULL;
      e_55 = t;
      c_55 :
      if(match_cons(e_55, sym_Program_1))
        {
          f_55 = ATgetArgument(e_55, 0);
          if(((d_55 != NULL) && (d_55 != f_55)))
            _fail(f_55);
          else
            d_55 = f_55;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_30), not_null(d_55)), term_j_30));
      {
        t = printnl_0(t);
        {
          t = term_z_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_30;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATempty, term_n_30));
  {
    t = printnl_0(t);
    {
      t = term_z_10;
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
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  o_55 :
  if(match_cons(p_55, sym__2))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_55), not_null(r_55));
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            t = SSL_addr(not_null(q_55), not_null(r_55));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_73(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
        y_55 = t;
        x_55 :
        if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
          {
            z_55 = ATgetFirst((ATermList) y_55);
            a_56 = (ATerm) ATgetNext((ATermList) y_55);
            {
              ATerm d_56 = NULL;
              ATerm e_56 = NULL;
              t = not_null(a_56);
              {
                t = foldr_2(t, n_73, o_73);
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_55), not_null(d_56));
                t = o_73(t);
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
ATerm crush_2 (ATerm t, ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm l_56 = NULL;
  ATerm n_56 = NULL;
  l_56 = t;
  {
    ATerm o_56 = NULL;
    ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
    t = not_null(l_56);
    {
      o_56 = t;
      {
        t = SSL_explode_term(not_null(o_56));
        {
          q_56 = t;
          k_56 :
          if(match_cons(q_56, sym__2))
            {
              r_56 = ATgetArgument(q_56, 0);
              s_56 = ATgetArgument(q_56, 1);
              if(((n_56 != NULL) && (n_56 != s_56)))
                _fail(s_56);
              else
                n_56 = s_56;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_56);
      t = foldr_2(t, l_72, m_72);
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
    ATerm l_4 (ATerm t)
    {
      t = term_b_11;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  x_56 :
  if(match_cons(y_56, sym__2))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      {
        ATerm y_30;
        y_30 = t;
        {
          ATerm z_30 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_56), not_null(a_57));
              LocalPopChoice(b_31);
            }
          else
            {
              t = z_30;
              t = SSL_gtr(not_null(z_56), not_null(a_57));
            }
        }
        t = y_30;
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
  ATerm g_57 = NULL;
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
      h_57 = t;
      f_57 :
      if(match_cons(h_57, sym__2))
        {
          i_57 = ATgetArgument(h_57, 0);
          j_57 = ATgetArgument(h_57, 1);
          {
            if(((g_57 != NULL) && (g_57 != i_57)))
              _fail(i_57);
            else
              g_57 = i_57;
            if(((g_57 != NULL) && (g_57 != j_57)))
              _fail(j_57);
            else
              g_57 = j_57;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_31;
      k_31 = t;
      {
        ATerm m_57 = NULL;
        ATerm n_57 = NULL;
        t = term_y_18;
        {
          t = get_config_0(t);
          {
            n_57 = t;
            if(((m_57 != NULL) && (m_57 != n_57)))
              _fail(n_57);
            else
              m_57 = n_57;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_57), term_z_10);
          t = geq_0(t);
        }
      }
      t = k_31;
      t = q_87(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm r_57 = NULL,t_57 = NULL;
    ATerm l_31;
    l_31 = t;
    {
      ATerm s_57 = NULL;
      t = run_time_0(t);
      {
        s_57 = t;
        if(((r_57 != NULL) && (r_57 != s_57)))
          _fail(s_57);
        else
          r_57 = s_57;
      }
    }
    t = l_31;
    {
      ATerm u_57 = NULL;
      t = term_m_31;
      {
        t = get_config_0(t);
        {
          u_57 = t;
          if(((t_57 != NULL) && (t_57 != u_57)))
            _fail(u_57);
          else
            t_57 = u_57;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_31), not_null(r_57)), term_r_31), not_null(t_57)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_4);
  {
    t = term_b_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  a_58 :
  if(match_cons(b_58, sym_Version_0))
    {
      ATerm d_58 = NULL,f_58 = NULL;
      ATerm t_31;
      t_31 = t;
      {
        ATerm e_58 = NULL;
        t = SSLgetAnnotations(not_null(b_58));
        {
          e_58 = t;
          if(((d_58 != NULL) && (d_58 != e_58)))
            _fail(e_58);
          else
            d_58 = e_58;
        }
      }
      t = t_31;
      {
        ATerm g_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_58));
        {
          g_58 = t;
          if(((f_58 != NULL) && (f_58 != g_58)))
            _fail(g_58);
          else
            f_58 = g_58;
        }
        t = not_null(f_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm x_31 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_32);
            }
          else
            {
              t = x_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, n_4);
  t = c_61(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  t = SSL_table_create(not_null(l_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  {
    ATerm d_32;
    d_32 = t;
    {
      t = term_e_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, not_null(p_58));
          t = table_put_0(t);
        }
      }
    }
    t = d_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_58 = NULL;
  t_58 = t;
  t = SSL_table_destroy(not_null(t_58));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  t = SSL_exit(not_null(x_58));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  a_59 :
  if(((ATgetType(b_59) == AT_LIST) && ATisEmpty(b_59)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_59) == AT_LIST) && !(ATisEmpty(b_59))))
        {
          c_59 = ATgetFirst((ATermList) b_59);
          d_59 = (ATerm) ATgetNext((ATermList) b_59);
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
  ATerm h_32;
  h_32 = t;
  {
    ATerm g_59 = NULL;
    ATerm j_59 = NULL;
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        {
          ATerm h_59 = NULL;
          ATerm i_59 = NULL;
          i_59 = t;
          if(((h_59 != NULL) && (h_59 != i_59)))
            _fail(i_59);
          else
            h_59 = i_59;
          t = (ATerm) ATinsert(ATempty, not_null(h_59));
        }
      }
    {
      j_59 = t;
      if(((g_59 != NULL) && (g_59 != j_59)))
        _fail(j_59);
      else
        g_59 = j_59;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_18, not_null(g_59));
      t = printnl_0(t);
    }
  }
  t = h_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
  u_59 = t;
  r_59 :
  if(((ATgetType(u_59) == AT_LIST) && !(ATisEmpty(u_59))))
    {
      s_59 = ATgetFirst((ATermList) u_59);
      t_59 = (ATerm) ATgetNext((ATermList) u_59);
      {
        ATerm x_59 = NULL;
        t = not_null(t_59);
        {
          ATerm k_32;
          k_32 = t;
          {
            ATerm y_59 = NULL,c_60 = NULL,e_60 = NULL;
            ATerm l_32;
            l_32 = t;
            {
              ATerm b_60 = NULL;
              t = i_0(t);
              {
                b_60 = t;
                if(((y_59 != NULL) && (y_59 != b_60)))
                  _fail(b_60);
                else
                  y_59 = b_60;
              }
            }
            t = l_32;
            {
              ATerm d_60 = NULL;
              t = not_null(s_59);
              {
                t = h_0(t);
                {
                  d_60 = t;
                  if(((c_60 != NULL) && (c_60 != d_60)))
                    _fail(d_60);
                  else
                    c_60 = d_60;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_59)), not_null(c_60));
                {
                  e_60 = t;
                  if(((x_59 != NULL) && (x_59 != e_60)))
                    _fail(e_60);
                  else
                    x_59 = e_60;
                }
              }
            }
          }
          t = k_32;
          {
            ATerm o_4 (ATerm t)
            {
              t = not_null(x_59);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_59) == AT_LIST) && ATisEmpty(u_59)))
        {
          {
            t = term_d_6;
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
  ATerm p_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm p_60 = NULL,q_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym_Program_1))
    {
      q_60 = ATgetArgument(p_60, 0);
      {
        ATerm t_60 = NULL,v_60 = NULL;
        ATerm u_60 = NULL;
        t = SSLgetAnnotations(not_null(p_60));
        {
          u_60 = t;
          if(((t_60 != NULL) && (t_60 != u_60)))
            _fail(u_60);
          else
            t_60 = u_60;
        }
        {
          t = not_null(q_60);
          {
            ATerm y_60 = NULL;
            t = z_59(t);
            {
              v_60 = t;
              {
                ATerm z_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_60)), not_null(t_60));
                {
                  z_60 = t;
                  if(((y_60 != NULL) && (y_60 != z_60)))
                    _fail(z_60);
                  else
                    y_60 = z_60;
                }
                t = not_null(y_60);
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
  ATerm o_61 = NULL;
  ATerm n_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_61 = NULL;
      t = term_m_31;
      {
        t = get_config_0(t);
        {
          p_61 = t;
          if(((o_61 != NULL) && (o_61 != p_61)))
            _fail(p_61);
          else
            o_61 = p_61;
        }
      }
      LocalPopChoice(r_32);
    }
  else
    {
      t = n_32;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm q_61 = NULL;
            q_61 = t;
            if(((o_61 != NULL) && (o_61 != q_61)))
              _fail(q_61);
            else
              o_61 = q_61;
            return(t);
          }
          t = Program_1(t, s_4);
          return(t);
        }
        t = fetch_1(t, q_4);
      }
    }
  {
    t = term_t_32;
    {
      t = echo_0(t);
      {
        t = term_b_33;
        {
          t = table_get_0(t);
          {
            ATerm t_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, t_4);
            {
              ATerm u_4 (ATerm t)
              {
                ATerm r_61 = NULL;
                ATerm s_61 = NULL;
                s_61 = t;
                if(((r_61 != NULL) && (r_61 != s_61)))
                  _fail(s_61);
                else
                  r_61 = s_61;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_61)), term_c_33);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, u_4);
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
  ATerm d_33;
  d_33 = t;
  {
    ATerm x_61 = NULL;
    ATerm y_61 = NULL;
    y_61 = t;
    if(((x_61 != NULL) && (x_61 != y_61)))
      _fail(y_61);
    else
      x_61 = y_61;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATempty, not_null(x_61)));
      t = printnl_0(t);
    }
  }
  t = d_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm e_33;
  e_33 = t;
  {
    t = n_62(t);
    t = debug_0(t);
  }
  t = e_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm f_62 = NULL,g_62 = NULL;
  f_62 = t;
  e_62 :
  if(match_cons(f_62, sym_Undefined_1))
    {
      g_62 = ATgetArgument(f_62, 0);
      {
        ATerm k_62 = NULL,o_62 = NULL;
        ATerm l_62 = NULL;
        t = SSLgetAnnotations(not_null(f_62));
        {
          l_62 = t;
          if(((k_62 != NULL) && (k_62 != l_62)))
            _fail(l_62);
          else
            k_62 = l_62;
        }
        {
          t = not_null(g_62);
          {
            ATerm q_62 = NULL;
            t = a_60(t);
            {
              o_62 = t;
              {
                ATerm r_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_62)), not_null(k_62));
                {
                  r_62 = t;
                  if(((q_62 != NULL) && (q_62 != r_62)))
                    _fail(r_62);
                  else
                    q_62 = r_62;
                }
                t = not_null(q_62);
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
ATerm fetch_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm x_62 (ATerm t)
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_67, _id);
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        t = Cons_2(t, _id, x_62);
      }
    return(t);
  }
  t = x_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_79 (ATerm))
{
  t = fetch_1(t, p_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_63 = NULL;
  c_63 = t;
  b_63 :
  if(match_cons(c_63, sym_Help_0))
    {
      ATerm e_63 = NULL,g_63 = NULL;
      ATerm h_33;
      h_33 = t;
      {
        ATerm f_63 = NULL;
        t = SSLgetAnnotations(not_null(c_63));
        {
          f_63 = t;
          if(((e_63 != NULL) && (e_63 != f_63)))
            _fail(f_63);
          else
            e_63 = f_63;
        }
      }
      t = h_33;
      {
        ATerm h_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_63));
        {
          h_63 = t;
          if(((g_63 != NULL) && (g_63 != h_63)))
            _fail(h_63);
          else
            g_63 = h_63;
        }
        t = not_null(g_63);
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
  ATerm m_63 = NULL;
  m_63 = t;
  t = SSL_implode_string(not_null(m_63));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
        r_63 = t;
        q_63 :
        if(((ATgetType(r_63) == AT_LIST) && !(ATisEmpty(r_63))))
          {
            s_63 = ATgetFirst((ATermList) r_63);
            t_63 = (ATerm) ATgetNext((ATermList) r_63);
            {
              t = not_null(s_63);
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(t_63);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_4);
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
  ATerm d_64 = NULL;
  ATerm f_64 = NULL;
  d_64 = t;
  {
    ATerm g_64 = NULL;
    ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
    t = not_null(d_64);
    {
      g_64 = t;
      {
        t = SSL_explode_term(not_null(g_64));
        {
          i_64 = t;
          b_64 :
          if(match_cons(i_64, sym__2))
            {
              j_64 = ATgetArgument(i_64, 0);
              k_64 = ATgetArgument(i_64, 1);
              c_64 :
              if(match_string(j_64, ""))
                {
                  if(((f_64 != NULL) && (f_64 != k_64)))
                    _fail(k_64);
                  else
                    f_64 = k_64;
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
      t = not_null(f_64);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm o_64 (ATerm t)
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_64);
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        {
          t = Nil_0(t);
          t = o_67(t);
        }
      }
    return(t);
  }
  t = o_64(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
  r_64 = t;
  q_64 :
  if(match_cons(r_64, sym__2))
    {
      s_64 = ATgetArgument(r_64, 0);
      t_64 = ATgetArgument(r_64, 1);
      {
        t = not_null(s_64);
        {
          ATerm w_4 (ATerm t)
          {
            t = not_null(t_64);
            return(t);
          }
          t = at_end_1(t, w_4);
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
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_64 = NULL;
  y_64 = t;
  t = SSL_explode_string(not_null(y_64));
  return(t);
}
ATerm _2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  h_65 = t;
  g_65 :
  if(match_cons(h_65, sym__2))
    {
      i_65 = ATgetArgument(h_65, 0);
      j_65 = ATgetArgument(h_65, 1);
      {
        ATerm n_65 = NULL,p_65 = NULL;
        ATerm o_65 = NULL;
        t = SSLgetAnnotations(not_null(h_65));
        {
          o_65 = t;
          if(((n_65 != NULL) && (n_65 != o_65)))
            _fail(o_65);
          else
            n_65 = o_65;
        }
        {
          t = not_null(i_65);
          {
            ATerm r_65 = NULL;
            t = y_53(t);
            {
              p_65 = t;
              {
                t = not_null(j_65);
                {
                  ATerm t_65 = NULL;
                  t = z_53(t);
                  {
                    r_65 = t;
                    {
                      ATerm u_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_65), not_null(r_65)), not_null(n_65));
                      {
                        u_65 = t;
                        if(((t_65 != NULL) && (t_65 != u_65)))
                          _fail(u_65);
                        else
                          t_65 = u_65;
                      }
                      t = not_null(t_65);
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
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym__2))
    {
      d_66 = ATgetArgument(c_66, 0);
      e_66 = ATgetArgument(c_66, 1);
      {
        ATerm v_33;
        v_33 = t;
        t = SSL_printnl(not_null(d_66), not_null(e_66));
        t = v_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm w_33;
  w_33 = t;
  {
    ATerm l_66 = NULL,n_66 = NULL;
    ATerm x_33;
    x_33 = t;
    {
      ATerm m_66 = NULL;
      t = m_62(t);
      {
        m_66 = t;
        if(((l_66 != NULL) && (l_66 != m_66)))
          _fail(m_66);
        else
          l_66 = m_66;
      }
    }
    t = x_33;
    {
      ATerm o_66 = NULL;
      o_66 = t;
      if(((n_66 != NULL) && (n_66 != o_66)))
        _fail(o_66);
      else
        n_66 = o_66;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_66)), not_null(l_66)));
        t = printnl_0(t);
      }
    }
  }
  t = w_33;
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm v_66 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = Cons_2(t, z_66, v_66);
      }
    return(t);
  }
  t = v_66(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_66 = NULL;
  y_66 = t;
  t = SSL_is_string(not_null(y_66));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = b_34;
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_4 (ATerm t)
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, x_4);
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            {
              ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
              l_67 = t;
              k_67 :
              if(match_cons(l_67, sym_Path_1))
                {
                  m_67 = ATgetArgument(l_67, 0);
                  t = not_null(m_67);
                }
              else
                {
                  if(match_cons(l_67, sym_Var_1))
                    {
                      m_67 = ATgetArgument(l_67, 0);
                      {
                        t = not_null(m_67);
                        {
                          ATerm m_34 = t;
                          int n_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_34);
                            }
                          else
                            {
                              t = m_34;
                              {
                                ATerm z_4 (ATerm t)
                                {
                                  t = term_q_34;
                                  return(t);
                                }
                                t = debug_1(t, z_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_67, sym_Prefix_2))
                        {
                          m_67 = ATgetArgument(l_67, 0);
                          n_67 = ATgetArgument(l_67, 1);
                          {
                            ATerm u_67 = NULL,w_67 = NULL;
                            ATerm r_34;
                            r_34 = t;
                            {
                              ATerm v_67 = NULL;
                              t = not_null(m_67);
                              {
                                t = eval_config_0(t);
                                {
                                  v_67 = t;
                                  if(((u_67 != NULL) && (u_67 != v_67)))
                                    _fail(v_67);
                                  else
                                    u_67 = v_67;
                                }
                              }
                            }
                            t = r_34;
                            {
                              ATerm x_67 = NULL;
                              t = not_null(n_67);
                              {
                                t = eval_config_0(t);
                                {
                                  x_67 = t;
                                  if(((w_67 != NULL) && (w_67 != x_67)))
                                    _fail(x_67);
                                  else
                                    w_67 = x_67;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_67), not_null(w_67));
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
  ATerm f_68 = NULL;
  f_68 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_34, not_null(f_68));
    {
      t = table_get_0(t);
      {
        ATerm w_34 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_35;
              f_35 = t;
              {
                ATerm h_68 = NULL;
                ATerm i_68 = NULL;
                i_68 = t;
                if(((h_68 != NULL) && (h_68 != i_68)))
                  _fail(i_68);
                else
                  h_68 = i_68;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_34, not_null(f_68), not_null(h_68));
                  t = table_put_0(t);
                }
              }
              t = f_35;
            }
            LocalPopChoice(e_35);
          }
        else
          {
            t = w_34;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_66 (ATerm))
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_66(t);
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  m_68 :
  if(match_cons(n_68, sym__2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      t = SSL_table_get(not_null(o_68), not_null(p_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
  w_68 = t;
  v_68 :
  if(match_cons(w_68, sym__3))
    {
      x_68 = ATgetArgument(w_68, 0);
      y_68 = ATgetArgument(w_68, 1);
      z_68 = ATgetArgument(w_68, 2);
      {
        ATerm i_35;
        i_35 = t;
        {
          ATerm d_69 = NULL;
          ATerm e_69 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), not_null(y_68));
          {
            ATerm j_35 = t;
            int k_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_35);
              }
            else
              {
                t = j_35;
                t = (ATerm) ATempty;
              }
            {
              e_69 = t;
              if(((d_69 != NULL) && (d_69 != e_69)))
                _fail(e_69);
              else
                d_69 = e_69;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_68), not_null(y_68), (ATerm) ATinsert(CheckATermList(not_null(d_69)), not_null(z_68)));
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
ATerm register_usage_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm i_69 = NULL;
  ATerm j_69 = NULL;
  t = term_d_6;
  {
    t = u_80(t);
    {
      j_69 = t;
      if(((i_69 != NULL) && (i_69 != j_69)))
        _fail(j_69);
      else
        i_69 = j_69;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_32, term_a_33, not_null(i_69));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  p_69 = t;
  o_69 :
  if(match_string(p_69, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_69) == AT_LIST) && !(ATisEmpty(p_69))))
        {
          q_69 = ATgetFirst((ATermList) p_69);
          r_69 = (ATerm) ATgetNext((ATermList) p_69);
          {
            ATerm u_69 = NULL;
            ATerm m_35;
            m_35 = t;
            {
              t = not_null(q_69);
              t = a_0(t);
            }
            t = m_35;
            {
              ATerm v_69 = NULL;
              t = term_d_6;
              {
                t = d_0(t);
                {
                  v_69 = t;
                  if(((u_69 != NULL) && (u_69 != v_69)))
                    _fail(v_69);
                  else
                    u_69 = v_69;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_69)), not_null(u_69));
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
  ATerm g_5 (ATerm t)
  {
    ATerm a_70 = NULL;
    a_70 = t;
    z_69 :
    if(!(match_string(a_70, "--help")))
      {
        if(!(match_string(a_70, "-h")))
          {
            if(!(match_string(a_70, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_s_35;
    {
      t = set_config_0(t);
      t = term_t_35;
    }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_y_35;
    return(t);
  }
  t = Option_3(t, g_5, h_5, i_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  d_70 = t;
  c_70 :
  if(((ATgetType(d_70) == AT_LIST) && !(ATisEmpty(d_70))))
    {
      e_70 = ATgetFirst((ATermList) d_70);
      f_70 = (ATerm) ATgetNext((ATermList) d_70);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_70)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_70)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  o_70 :
  if(((ATgetType(p_70) == AT_LIST) && !(ATisEmpty(p_70))))
    {
      q_70 = ATgetFirst((ATermList) p_70);
      r_70 = (ATerm) ATgetNext((ATermList) p_70);
      {
        ATerm v_70 = NULL,x_70 = NULL;
        ATerm w_70 = NULL;
        t = SSLgetAnnotations(not_null(p_70));
        {
          w_70 = t;
          if(((v_70 != NULL) && (v_70 != w_70)))
            _fail(w_70);
          else
            v_70 = w_70;
        }
        {
          t = not_null(q_70);
          {
            ATerm z_70 = NULL;
            t = h_55(t);
            {
              x_70 = t;
              {
                t = not_null(r_70);
                {
                  ATerm b_71 = NULL;
                  t = i_55(t);
                  {
                    z_70 = t;
                    {
                      ATerm c_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_70)), not_null(x_70)), not_null(v_70));
                      {
                        c_71 = t;
                        if(((b_71 != NULL) && (b_71 != c_71)))
                          _fail(c_71);
                        else
                          b_71 = c_71;
                      }
                      t = not_null(b_71);
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
  ATerm m_71 = NULL;
  m_71 = t;
  l_71 :
  if(((ATgetType(m_71) == AT_LIST) && ATisEmpty(m_71)))
    {
      {
        ATerm o_71 = NULL,q_71 = NULL;
        ATerm z_35;
        z_35 = t;
        {
          ATerm p_71 = NULL;
          t = SSLgetAnnotations(not_null(m_71));
          {
            p_71 = t;
            if(((o_71 != NULL) && (o_71 != p_71)))
              _fail(p_71);
            else
              o_71 = p_71;
          }
        }
        t = z_35;
        {
          ATerm r_71 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_71));
          {
            r_71 = t;
            if(((q_71 != NULL) && (q_71 != r_71)))
              _fail(r_71);
            else
              q_71 = r_71;
          }
          t = not_null(q_71);
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
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  w_71 :
  if(match_cons(x_71, sym__2))
    {
      y_71 = ATgetArgument(x_71, 0);
      z_71 = ATgetArgument(x_71, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_34, not_null(y_71), not_null(z_71));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm a_36;
  a_36 = t;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_36;
        t = s_80(t);
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        {
        }
      }
  }
  t = a_36;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm h_72 = NULL;
      ATerm i_36;
      i_36 = t;
      {
        ATerm f_72 = NULL;
        ATerm g_72 = NULL;
        g_72 = t;
        if(((f_72 != NULL) && (f_72 != g_72)))
          _fail(g_72);
        else
          f_72 = g_72;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_31, not_null(f_72));
          t = set_config_0(t);
        }
      }
      t = i_36;
      {
        ATerm i_72 = NULL;
        i_72 = t;
        if(((h_72 != NULL) && (h_72 != i_72)))
          _fail(i_72);
        else
          h_72 = i_72;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_72));
      }
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              {
                t = s_80(t);
                t = Cons_2(t, _id, k_5);
              }
            }
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_5, k_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  ATerm s_36;
  s_36 = t;
  {
    ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,y_72 = NULL;
    t_72 = t;
    p_72 :
    if(match_cons(t_72, sym__3))
      {
        u_72 = ATgetArgument(t_72, 0);
        v_72 = ATgetArgument(t_72, 1);
        y_72 = ATgetArgument(t_72, 2);
        {
          if(((q_72 != NULL) && (q_72 != u_72)))
            _fail(u_72);
          else
            q_72 = u_72;
          {
            if(((r_72 != NULL) && (r_72 != v_72)))
              _fail(v_72);
            else
              r_72 = v_72;
            {
              if(((s_72 != NULL) && (s_72 != y_72)))
                _fail(y_72);
              else
                s_72 = y_72;
              t = SSL_table_put(not_null(q_72), not_null(r_72), not_null(s_72));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm d_73 = NULL;
  ATerm t_36;
  t_36 = t;
  {
    t = term_u_36;
    t = table_put_0(t);
  }
  t = t_36;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_80(t);
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_5);
    {
      ATerm y_36 = t;
      int z_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_37;
          c_37 = t;
          {
            ATerm d_37 = t;
            int e_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_n_35;
                t = get_config_0(t);
                LocalPopChoice(e_37);
              }
            else
              {
                t = d_37;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_37;
          {
            t = system_usage_0(t);
            {
              t = term_b_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(z_36);
        }
      else
        {
          t = y_36;
          {
            ATerm f_37 = t;
            int h_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm r_5 (ATerm t)
                  {
                    ATerm e_73 = NULL;
                    e_73 = t;
                    if(((d_73 != NULL) && (d_73 != e_73)))
                      _fail(e_73);
                    else
                      d_73 = e_73;
                    return(t);
                  }
                  t = Undefined_1(t, r_5);
                  return(t);
                }
                t = fetch_1(t, q_5);
                {
                  ATerm s_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_73)), term_i_37);
                    return(t);
                  }
                  t = say_1(t, s_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_10;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(h_37);
              }
            else
              {
                t = f_37;
                {
                }
              }
          }
        }
      {
        ATerm j_37;
        j_37 = t;
        {
          t = term_z_32;
          t = table_destroy_0(t);
        }
        t = j_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  t = parse_options_1(t, i_61);
  {
    t = store_options_0(t);
    {
      t = k_61(t);
      {
        ATerm k_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_61);
            LocalPopChoice(p_37);
          }
        else
          {
            t = k_37;
            {
              ATerm q_37 = t;
              int r_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_61(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_37);
                }
              else
                {
                  t = q_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_61 (ATerm), ATerm n_61 (ATerm))
{
  t = option_wrap_4(t, m_61, default_usage_0, _id, n_61);
  return(t);
}
ATerm io_abox2html_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = gen_css_0(t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        t = abox2html_0(t);
      }
    return(t);
  }
  t = option_wrap_2(t, abox2html_options_0, t_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2html_0(t);
  return(t);
}