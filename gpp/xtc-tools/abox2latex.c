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
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
ATerm term_m_37;
ATerm term_y_36;
ATerm term_j_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_w_35;
ATerm term_a_35;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_q_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_e_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_x_27;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_b_25;
ATerm term_v_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_d_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_c_20;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_f_7;
ATerm term_c_7;
void init_constant_terms (void)
{
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%   ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_r_8, term_b_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_v_11, term_w_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_f_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_x_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_l_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_x_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_e_15, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_j_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_t_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_u_18, term_v_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_g_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_j_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_w_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_k_24);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_l_7);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_e_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_l_7);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_s_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_l_7);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__3, term_q_33, term_s_33, (ATerm) ATempty);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm tables2text_0 (ATerm);
ATerm create_header_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm create_table_file_0 (ATerm);
ATerm create_abox2latex_args_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm x_80 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_92 (ATerm), ATerm e_92 (ATerm));
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm d_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm d_80 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm b_90 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm t_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm n_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_80 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm a_90 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm c_90 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm union_1 (ATerm, ATerm r_72 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm s_76 (ATerm));
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_91 (ATerm));
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm e_62 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm));
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_76 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_80 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm print_to_0 (ATerm);
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
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_text_1 (ATerm, ATerm g_92 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_76 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm p_67 (ATerm), ATerm q_67 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_76 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_91 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm h_91 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm u_82 (ATerm), ATerm v_82 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2latex_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm crush_2 (ATerm, ATerm c_73 (ATerm), ATerm d_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_89 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_83 (ATerm));
ATerm Program_1 (ATerm, ATerm i_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm a_55 (ATerm), ATerm b_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_80 (ATerm));
ATerm map_1 (ATerm, ATerm s_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm o_63 (ATerm), ATerm p_63 (ATerm));
ATerm io_abox2latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm tables2text_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_7;
      t = get_config_0(t);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      t = (ATerm) ATempty;
    }
  {
    ATerm c_0 (ATerm t)
    {
      ATerm e_0 = NULL;
      ATerm f_0 = NULL;
      f_0 = t;
      if(((e_0 != NULL) && (e_0 != f_0)))
        _fail(f_0);
      else
        e_0 = f_0;
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_7), not_null(e_0)), term_f_7);
        t = concat_strings_0(t);
      }
      return(t);
    }
    t = map_1(t, c_0);
    t = concat_strings_0(t);
  }
  return(t);
}
ATerm create_header_0 (ATerm t)
{
  ATerm y_0 = NULL;
  ATerm c_1 = NULL;
  t = term_l_7;
  {
    t = tables2text_0(t);
    {
      c_1 = t;
      if(((y_0 != NULL) && (y_0 != c_1)))
        _fail(c_1);
      else
        y_0 = c_1;
    }
  }
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_7), term_j_8), term_g_8), term_m_7), term_f_8), term_e_8), term_d_8), term_c_8), term_a_8), term_m_7), not_null(y_0)), term_z_7), term_y_7), term_m_7), term_u_7), term_m_7), term_o_7), term_m_7);
    t = concat_strings_0(t);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,y_1 = NULL;
  j_1 = t;
  i_1 :
  if(match_cons(j_1, sym__2))
    {
      k_1 = ATgetArgument(j_1, 0);
      y_1 = ATgetArgument(j_1, 1);
      {
        ATerm l_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_1), not_null(y_1));
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = l_8;
            t = SSL_subtr(not_null(k_1), not_null(y_1));
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
  ATerm y_2 = NULL;
  ATerm z_2 = NULL,b_3 = NULL;
  ATerm a_3 = NULL;
  t = term_o_8;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = term_r_8;
      }
    {
      a_3 = t;
      if(((z_2 != NULL) && (z_2 != a_3)))
        _fail(a_3);
      else
        z_2 = a_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), term_r_8);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          b_3 = t;
          if(((y_2 != NULL) && (y_2 != b_3)))
            _fail(b_3);
          else
            y_2 = b_3;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_2)), term_o_8);
  return(t);
}
ATerm create_table_file_0 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,k_3 = NULL;
  ATerm z_8 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_7;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = z_8;
      t = (ATerm) ATempty;
    }
  {
    t = map_1(t, ReadFromFile_0);
    {
      ATerm i_3 = NULL;
      i_3 = t;
      if(((h_3 != NULL) && (h_3 != i_3)))
        _fail(i_3);
      else
        h_3 = i_3;
      {
        t = (ATerm) ATinsert(CheckATermList(not_null(h_3)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_w_9), term_u_9)), (ATerm) ATinsert(ATinsert(ATempty, term_t_9), term_s_9)), (ATerm) ATinsert(ATinsert(ATempty, term_r_9), term_q_9)), (ATerm) ATinsert(ATinsert(ATempty, term_o_9), term_n_9)), (ATerm) ATinsert(ATinsert(ATempty, term_m_9), term_l_9)), (ATerm) ATinsert(ATinsert(ATempty, term_g_9), term_f_9)));
        {
          t = concat_0(t);
          {
            t = write_to_0(t);
            {
              j_3 = t;
              g_3 :
              if(match_cons(j_3, sym_FILE_1))
                {
                  k_3 = ATgetArgument(j_3, 0);
                  t = not_null(k_3);
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
ATerm create_abox2latex_args_0 (ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm t_3 = NULL;
    t = term_l_7;
    {
      t = create_table_file_0(t);
      {
        t_3 = t;
        if(((s_3 != NULL) && (s_3 != t_3)))
          _fail(t_3);
        else
          s_3 = t_3;
      }
    }
  }
  t = y_9;
  {
    ATerm v_3 = NULL;
    t = term_l_7;
    {
      t = pass_verbose_0(t);
      {
        v_3 = t;
        if(((u_3 != NULL) && (u_3 != v_3)))
          _fail(v_3);
        else
          u_3 = v_3;
      }
    }
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_3)), not_null(s_3)), term_b_10);
      {
        ATerm h_0 (ATerm t)
        {
          ATerm w_3 = NULL,y_3 = NULL;
          ATerm c_10;
          c_10 = t;
          {
            ATerm x_3 = NULL;
            t = term_d_10;
            {
              t = get_config_0(t);
              {
                x_3 = t;
                if(((w_3 != NULL) && (w_3 != x_3)))
                  _fail(x_3);
                else
                  w_3 = x_3;
              }
            }
          }
          t = c_10;
          {
            ATerm z_3 = NULL;
            z_3 = t;
            if(((y_3 != NULL) && (y_3 != z_3)))
              _fail(z_3);
            else
              y_3 = z_3;
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_3)), not_null(w_3)), term_e_10);
          }
          return(t);
        }
        t = try_1(t, h_0);
      }
    }
  }
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  i_4 = t;
  g_4 :
  if(match_cons(i_4, sym__2))
    {
      j_4 = ATgetArgument(i_4, 0);
      l_4 = ATgetArgument(i_4, 1);
      h_4 :
      if(match_cons(j_4, sym_Stream_1))
        {
          k_4 = ATgetArgument(j_4, 0);
          {
            ATerm o_4 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(k_4), not_null(l_4));
            {
              ATerm p_4 = NULL;
              p_4 = t;
              if(((o_4 != NULL) && (o_4 != p_4)))
                _fail(p_4);
              else
                o_4 = p_4;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_4));
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
ATerm WriteToFile_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      {
        ATerm b_5 = NULL,d_5 = NULL;
        t = not_null(x_4);
        {
          ATerm c_5 = NULL;
          c_5 = t;
          if(((b_5 != NULL) && (b_5 != c_5)))
            _fail(c_5);
          else
            b_5 = c_5;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), term_h_10);
            {
              t = open_stream_0(t);
              {
                ATerm e_5 = NULL;
                e_5 = t;
                if(((d_5 != NULL) && (d_5 != e_5)))
                  _fail(e_5);
                else
                  d_5 = e_5;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_5), not_null(y_4));
                  {
                    t = x_80(t);
                    {
                      t = fclose_0(t);
                      t = not_null(y_4);
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
  ATerm k_5 = NULL;
  ATerm m_5 = NULL;
  k_5 = t;
  {
    ATerm n_5 = NULL;
    t = xtc_new_file_0(t);
    {
      n_5 = t;
      {
        if(((m_5 != NULL) && (m_5 != n_5)))
          _fail(n_5);
        else
          m_5 = n_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), not_null(k_5));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(m_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_5));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm d_92 (ATerm), ATerm e_92 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_92, e_92);
    t = read_from_0(t);
  }
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym__2))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      t = SSL_execvp(not_null(t_5), not_null(u_5));
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
  ATerm z_5 = NULL;
  z_5 = t;
  t = SSL_int_to_string(not_null(z_5));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_UnknownSignal_1))
    {
      i_6 = ATgetArgument(h_6, 0);
      {
        ATerm m_6 = NULL;
        ATerm n_6 = NULL;
        t = not_null(i_6);
        {
          t = int_to_string_0(t);
          {
            n_6 = t;
            if(((m_6 != NULL) && (m_6 != n_6)))
              _fail(n_6);
            else
              m_6 = n_6;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_10), not_null(m_6)), term_i_10);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(h_6, sym_Signal_3))
        {
          i_6 = ATgetArgument(h_6, 0);
          j_6 = ATgetArgument(h_6, 1);
          k_6 = ATgetArgument(h_6, 2);
          {
            ATerm r_6 = NULL;
            ATerm s_6 = NULL;
            t = not_null(j_6);
            {
              t = int_to_string_0(t);
              {
                s_6 = t;
                if(((r_6 != NULL) && (r_6 != s_6)))
                  _fail(s_6);
                else
                  r_6 = s_6;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_6)), term_n_10), not_null(r_6)), term_m_10), not_null(i_6));
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
ATerm fetch_elem_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm y_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm z_6 = NULL;
    t = d_69(t);
    {
      z_6 = t;
      if(((y_6 != NULL) && (y_6 != z_6)))
        _fail(z_6);
      else
        y_6 = z_6;
    }
    return(t);
  }
  t = fetch_1(t, p_0);
  t = not_null(y_6);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  {
    ATerm r_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_19), term_d_19), term_n_18), term_j_18), term_a_18), term_w_17), term_k_17), term_g_17), term_w_16), term_s_16), term_o_16), term_z_15), term_v_15), term_n_15), term_g_15), term_z_14), term_t_14), term_m_14), term_d_14), term_v_13), term_m_13), term_d_13), term_y_12), term_q_12), term_g_12), term_y_11), term_p_11), term_c_11);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
            g_7 = t;
            d_7 :
            if(match_cons(g_7, sym_Signal_3))
              {
                h_7 = ATgetArgument(g_7, 0);
                i_7 = ATgetArgument(g_7, 1);
                j_7 = ATgetArgument(g_7, 2);
                if(((e_7 != NULL) && (e_7 != i_7)))
                  _fail(i_7);
                else
                  e_7 = i_7;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, q_0);
        }
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(e_7));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm n_19;
  n_19 = t;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
      q_7 = t;
      p_7 :
      if(match_cons(q_7, sym_WaitStatus_3))
        {
          r_7 = ATgetArgument(q_7, 0);
          s_7 = ATgetArgument(q_7, 1);
          t_7 = ATgetArgument(q_7, 2);
          {
            ATerm w_7 = NULL;
            t = not_null(s_7);
            {
              ATerm r_19 = t;
              if((PushChoice() == 0))
                {
                  ATerm v_7 = NULL;
                  v_7 = t;
                  n_7 :
                  if(!(match_int(v_7, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_19;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm x_7 = NULL;
                    x_7 = t;
                    if(((w_7 != NULL) && (w_7 != x_7)))
                      _fail(x_7);
                    else
                      w_7 = x_7;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_7)), term_v_19));
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
    t = try_1(t, r_0);
  }
  t = n_19;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  t = SSL_waitpid(not_null(b_8));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm))
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    t = fork_0(t);
    {
      k_8 = t;
      {
        ATerm w_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_8 = NULL;
            m_8 = t;
            h_8 :
            if(match_int(m_8, 0))
              {
                t = not_null(i_8);
                t = b_80(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = w_19;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(i_8));
              t = c_80(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm v_8 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
    w_8 = t;
    u_8 :
    if(match_cons(w_8, sym__2))
      {
        x_8 = ATgetArgument(w_8, 0);
        y_8 = ATgetArgument(w_8, 1);
        {
          ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
          if(((v_8 != NULL) && (v_8 != y_8)))
            _fail(y_8);
          else
            v_8 = y_8;
          {
            t = not_null(x_8);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  a_9 = t;
                  s_8 :
                  if(match_cons(a_9, sym_WaitStatus_3))
                    {
                      b_9 = ATgetArgument(a_9, 0);
                      c_9 = ATgetArgument(a_9, 1);
                      d_9 = ATgetArgument(a_9, 2);
                      t_8 :
                      if(match_int(b_9, 0))
                        {
                          t = not_null(v_8);
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
  t = fork_2(t, d_80, s_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm t_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), not_null(k_9));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, t_0);
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
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_table_keys(not_null(p_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm x_9 = NULL;
        ATerm z_9 = NULL;
        x_9 = t;
        {
          ATerm a_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(x_9));
          {
            t = table_get_0(t);
            {
              a_10 = t;
              if(((z_9 != NULL) && (z_9 != a_10)))
                _fail(a_10);
              else
                z_9 = a_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(z_9));
        }
        return(t);
      }
      t = map_1(t, u_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm a_20;
    a_20 = t;
    {
      ATerm f_10 = NULL;
      ATerm g_10 = NULL;
      t = term_o_8;
      {
        t = get_config_0(t);
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), term_d_18);
        t = geq_0(t);
      }
    }
    t = a_20;
    t = b_90(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_20;
  b_20 = t;
  {
    ATerm j_10 = NULL;
    ATerm k_10 = NULL;
    k_10 = t;
    if(((j_10 != NULL) && (j_10 != k_10)))
      _fail(k_10);
    else
      j_10 = k_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_19, not_null(j_10));
      t = printnl_0(t);
    }
  }
  t = b_20;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm q_10 = NULL;
  ATerm s_10 = NULL,t_10 = NULL;
  q_10 = t;
  {
    ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_10)));
    {
      t = table_get_0(t);
      {
        u_10 = t;
        o_10 :
        if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
          {
            v_10 = ATgetFirst((ATermList) u_10);
            y_10 = (ATerm) ATgetNext((ATermList) u_10);
            p_10 :
            if(match_cons(v_10, sym__2))
              {
                w_10 = ATgetArgument(v_10, 0);
                x_10 = ATgetArgument(v_10, 1);
                {
                  if(((s_10 != NULL) && (s_10 != w_10)))
                    _fail(w_10);
                  else
                    s_10 = w_10;
                  if(((t_10 != NULL) && (t_10 != x_10)))
                    _fail(x_10);
                  else
                    t_10 = x_10;
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
    t = not_null(t_10);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym__2))
    {
      g_11 = ATgetArgument(f_11, 0);
      h_11 = ATgetArgument(f_11, 1);
      {
        ATerm k_11 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_11)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
              l_11 = t;
              d_11 :
              if(match_cons(l_11, sym__2))
                {
                  m_11 = ATgetArgument(l_11, 0);
                  n_11 = ATgetArgument(l_11, 1);
                  {
                    if(((h_11 != NULL) && (h_11 != m_11)))
                      _fail(m_11);
                    else
                      h_11 = m_11;
                    if(((k_11 != NULL) && (k_11 != n_11)))
                      _fail(n_11);
                    else
                      k_11 = n_11;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(k_11);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = filter_1(t, t_76);
              return(t);
            }
            t = Cons_2(t, t_76, x_0);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = f_20;
            {
              ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
              s_11 = t;
              r_11 :
              if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
                {
                  t_11 = ATgetFirst((ATermList) s_11);
                  u_11 = (ATerm) ATgetNext((ATermList) s_11);
                  {
                    t = not_null(u_11);
                    t = filter_1(t, t_76);
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
ATerm repeat_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm x_11 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = n_78(t);
      t = x_11(t);
      return(t);
    }
    t = try_1(t, z_0);
    return(t);
  }
  t = x_11(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm i_20;
  i_20 = t;
  {
    ATerm a_1 (ATerm t)
    {
      t = term_k_20;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, a_1);
  }
  t = i_20;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm p_20;
  p_20 = t;
  {
    ATerm z_11 = NULL;
    ATerm a_12 = NULL;
    a_12 = t;
    if(((z_11 != NULL) && (z_11 != a_12)))
      _fail(a_12);
    else
      z_11 = a_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATempty, not_null(z_11)));
      t = printnl_0(t);
    }
  }
  t = p_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm q_20;
  q_20 = t;
  {
    t = n_80(t);
    t = debug_0(t);
  }
  t = q_20;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm r_20;
    r_20 = t;
    {
      ATerm d_12 = NULL;
      ATerm e_12 = NULL;
      t = term_o_8;
      {
        t = get_config_0(t);
        {
          e_12 = t;
          if(((d_12 != NULL) && (d_12 != e_12)))
            _fail(e_12);
          else
            d_12 = e_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), term_r_14);
        t = geq_0(t);
      }
    }
    t = r_20;
    t = a_90(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm s_20;
    s_20 = t;
    {
      ATerm h_12 = NULL;
      ATerm i_12 = NULL;
      t = term_o_8;
      {
        t = get_config_0(t);
        {
          i_12 = t;
          if(((h_12 != NULL) && (h_12 != i_12)))
            _fail(i_12);
          else
            h_12 = i_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_12), term_c_12);
        t = geq_0(t);
      }
    }
    t = s_20;
    t = c_90(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym__2))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      if(((n_12 != NULL) && (n_12 != o_12)))
        _fail(o_12);
      else
        n_12 = o_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
    {
      v_12 = ATgetFirst((ATermList) u_12);
      w_12 = (ATerm) ATgetNext((ATermList) u_12);
      {
        t = w_72(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm z_12 = NULL;
            z_12 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), not_null(z_12));
              t = v_72(t);
            }
            return(t);
          }
          t = fetch_1(t, e_1);
        }
        t = not_null(w_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        t = not_null(g_13);
        {
          ATerm l_13 (ATerm t)
          {
            ATerm t_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_13);
                ;
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
                {
                  ATerm y_20 = t;
                  int z_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = not_null(h_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_72, f_1);
                      t = l_13(t);
                      ;
                      LocalPopChoice(z_20);
                    }
                  else
                    {
                      t = y_20;
                      t = Cons_2(t, _id, l_13);
                    }
                }
              }
            return(t);
          }
          t = l_13(t);
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
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym__3))
    {
      r_13 = ATgetArgument(q_13, 0);
      s_13 = ATgetArgument(q_13, 1);
      t_13 = ATgetArgument(q_13, 2);
      {
        ATerm a_21;
        a_21 = t;
        {
          ATerm x_13 = NULL;
          ATerm y_13 = NULL,a_14 = NULL;
          ATerm z_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), not_null(s_13));
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = (ATerm) ATempty;
              }
            {
              z_13 = t;
              if(((y_13 != NULL) && (y_13 != z_13)))
                _fail(z_13);
              else
                y_13 = z_13;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), not_null(t_13));
            {
              t = union_0(t);
              {
                a_14 = t;
                if(((x_13 != NULL) && (x_13 != a_14)))
                  _fail(a_14);
                else
                  x_13 = a_14;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_13), not_null(s_13), not_null(x_13));
            t = set_0(t);
          }
        }
        t = a_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        t = not_null(k_14);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
            n_14 = t;
            g_14 :
            if(match_cons(n_14, sym__2))
              {
                o_14 = ATgetArgument(n_14, 0);
                p_14 = ATgetArgument(n_14, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_14), not_null(o_14), not_null(p_14));
                  t = s_76(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_1);
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
  ATerm v_14 = NULL;
  ATerm w_14 = NULL;
  w_14 = t;
  if(((v_14 != NULL) && (v_14 != w_14)))
    _fail(w_14);
  else
    v_14 = w_14;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_14), (ATerm) ATinsert(ATempty, term_d_21));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(f_21);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = e_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_21 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_21;
              }
            {
              ATerm h_1 (ATerm t)
              {
                t = term_n_21;
                return(t);
              }
              t = debug_1(t, h_1);
            }
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm l_1 (ATerm t)
              {
                t = term_o_21;
                return(t);
              }
              t = debug_1(t, l_1);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm c_15 = NULL;
  a_15 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        t = term_p_21;
        return(t);
      }
      t = debug_1(t, n_1);
      return(t);
    }
    t = if_verbose5_1(t, m_1);
    {
      ATerm q_21 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATmakeAppl(sym_Imported_1, not_null(a_15)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_21;
        }
      {
        ATerm v_21;
        v_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_20, term_w_21, (ATerm) ATinsert(ATempty, not_null(a_15)));
          t = table_put_0(t);
        }
        t = v_21;
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              t = term_x_21;
              return(t);
            }
            t = debug_1(t, p_1);
            return(t);
          }
          t = if_verbose4_1(t, o_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                ATerm r_1 (ATerm t)
                {
                  t = term_y_21;
                  return(t);
                }
                t = say_1(t, r_1);
                return(t);
              }
              t = if_verbose6_1(t, q_1);
              {
                ATerm d_15 = NULL;
                d_15 = t;
                if(((c_15 != NULL) && (c_15 != d_15)))
                  _fail(d_15);
                else
                  c_15 = d_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_20, not_null(c_15));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm s_1 (ATerm t)
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = term_b_22;
                          return(t);
                        }
                        t = say_1(t, t_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, s_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_c_20, (ATerm)ATmakeAppl(sym_Imported_1, not_null(a_15)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              ATerm v_1 (ATerm t)
                              {
                                t = term_y_21;
                                return(t);
                              }
                              t = say_1(t, v_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, u_1);
                          }
                        }
                      }
                    }
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
  ATerm h_15 = NULL;
  h_15 = t;
  t = SSL_getenv(not_null(h_15));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_22;
      t = get_config_0(t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm h_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_22;
            t = getenv_0(t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = h_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      t = term_o_22;
      return(t);
    }
    t = debug_1(t, x_1);
    return(t);
  }
  t = if_verbose5_1(t, w_1);
  {
    ATerm p_22;
    p_22 = t;
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_22;
          t = table_get_0(t);
          ;
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = p_22;
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          t = term_t_22;
          return(t);
        }
        t = debug_1(t, a_2);
        return(t);
      }
      t = if_verbose5_1(t, z_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_w_22;
          return(t);
        }
        t = debug_1(t, c_2);
        return(t);
      }
      t = if_verbose5_1(t, b_2);
      {
        t = xtc_load_0(t);
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm d_2 (ATerm t)
            {
              ATerm e_2 (ATerm t)
              {
                t = term_w_22;
                return(t);
              }
              t = debug_1(t, e_2);
              return(t);
            }
            t = if_verbose5_1(t, d_2);
          }
        }
      }
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm l_15 = NULL;
        ATerm m_15 = NULL;
        m_15 = t;
        if(((l_15 != NULL) && (l_15 != m_15)))
          _fail(m_15);
        else
          l_15 = m_15;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), not_null(l_15)), term_b_23);
          {
            t = error_0(t);
            {
              ATerm f_2 (ATerm t)
              {
                t = term_c_20;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_d_23;
                      return(t);
                    }
                    t = debug_1(t, g_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, f_2);
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
ATerm xtc_command_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm q_15 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    ATerm r_15 = NULL;
    t = u_91(t);
    {
      t = xtc_find_warning_0(t);
      {
        r_15 = t;
        if(((q_15 != NULL) && (q_15 != r_15)))
          _fail(r_15);
        else
          q_15 = r_15;
      }
    }
  }
  t = e_23;
  {
    ATerm f_23;
    f_23 = t;
    {
      ATerm s_15 = NULL;
      ATerm t_15 = NULL;
      t_15 = t;
      if(((s_15 != NULL) && (s_15 != t_15)))
        _fail(t_15);
      else
        s_15 = t_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(s_15));
        t = call_0(t);
      }
    }
    t = f_23;
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_stdin_0))
    {
      ATerm f_16 = NULL;
      ATerm g_16 = NULL;
      ATerm h_16 = NULL;
      t = xtc_new_file_0(t);
      {
        g_16 = t;
        {
          if(((f_16 != NULL) && (f_16 != g_16)))
            _fail(g_16);
          else
            f_16 = g_16;
          {
            ATerm i_16 = NULL;
            t = o_0(t);
            {
              i_16 = t;
              if(((h_16 != NULL) && (h_16 != i_16)))
                _fail(i_16);
              else
                h_16 = i_16;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_16)), term_k_23));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(f_16);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_16));
    }
  else
    {
      if(match_cons(d_16, sym_FILE_1))
        {
          e_16 = ATgetArgument(d_16, 0);
          {
            ATerm k_16 = NULL;
            ATerm l_16 = NULL;
            t = not_null(e_16);
            {
              ATerm m_16 = NULL;
              t = xtc_new_file_0(t);
              {
                l_16 = t;
                {
                  if(((k_16 != NULL) && (k_16 != l_16)))
                    _fail(l_16);
                  else
                    k_16 = l_16;
                  {
                    ATerm n_16 = NULL;
                    t = o_0(t);
                    {
                      n_16 = t;
                      if(((m_16 != NULL) && (m_16 != n_16)))
                        _fail(n_16);
                      else
                        m_16 = n_16;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_16)), term_k_23), not_null(e_16)), term_l_23));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(k_16);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_16));
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
  ATerm y_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_stdin_0))
    {
      ATerm a_17 = NULL,c_17 = NULL;
      ATerm m_23;
      m_23 = t;
      {
        ATerm b_17 = NULL;
        t = SSLgetAnnotations(not_null(y_16));
        {
          b_17 = t;
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
        }
      }
      t = m_23;
      {
        ATerm d_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(a_17));
        {
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
        }
        t = not_null(c_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm m_17 = NULL,n_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym_FILE_1))
    {
      n_17 = ATgetArgument(m_17, 0);
      {
        ATerm q_17 = NULL,s_17 = NULL;
        ATerm r_17 = NULL;
        t = SSLgetAnnotations(not_null(m_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        {
          t = not_null(n_17);
          {
            ATerm u_17 = NULL;
            t = e_62(t);
            {
              s_17 = t;
              {
                ATerm v_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(s_17)), not_null(q_17));
                {
                  v_17 = t;
                  if(((u_17 != NULL) && (u_17 != v_17)))
                    _fail(v_17);
                  else
                    u_17 = v_17;
                }
                t = not_null(u_17);
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
ATerm xtc_transform_2 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm))
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(y_23);
        }
      else
        {
          t = s_23;
          t = stdin_0(t);
        }
      LocalPopChoice(o_23);
      t = xtc_transform_file_2(t, w_91, x_91);
    }
  else
    {
      t = n_23;
      t = xtc_transform_term_2(t, w_91, x_91);
    }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  t = SSL_close_file(not_null(b_18));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym__2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      {
        ATerm z_23;
        z_23 = t;
        t = SSL_print(not_null(h_18), not_null(i_18));
        t = z_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
        ATerm a_24;
        a_24 = t;
        {
          ATerm z_18 = NULL;
          ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
          t = p_76(t);
          {
            z_18 = t;
            {
              if(((w_18 != NULL) && (w_18 != z_18)))
                _fail(z_18);
              else
                w_18 = z_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_18), not_null(s_18), not_null(t_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_24 = t;
                    int c_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), term_k_24);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(c_24);
                      }
                    else
                      {
                        t = b_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_19 = t;
                      p_18 :
                      if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
                        {
                          b_19 = ATgetFirst((ATermList) a_19);
                          c_19 = (ATerm) ATgetNext((ATermList) a_19);
                          {
                            if(((x_18 != NULL) && (x_18 != b_19)))
                              _fail(b_19);
                            else
                              x_18 = b_19;
                            {
                              if(((y_18 != NULL) && (y_18 != c_19)))
                                _fail(c_19);
                              else
                                y_18 = c_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_18), term_k_24, (ATerm) ATinsert(CheckATermList(not_null(y_18)), (ATerm) ATinsert(CheckATermList(not_null(x_18)), not_null(s_18))));
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
        t = a_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm l_24;
  l_24 = t;
  {
    t = q_80(t);
    {
      ATerm h_2 (ATerm t)
      {
        t = term_m_24;
        return(t);
      }
      t = debug_1(t, h_2);
    }
  }
  t = l_24;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  ATerm t_19 (ATerm t)
  {
    ATerm n_24 = t;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
        o_19 = t;
        i_19 :
        if(match_cons(o_19, sym__2))
          {
            p_19 = ATgetArgument(o_19, 0);
            q_19 = ATgetArgument(o_19, 1);
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
        t = n_24;
      }
    {
      ATerm i_2 (ATerm t)
      {
        t = term_o_24;
        return(t);
      }
      t = obsolete_1(t, i_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), term_h_10);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm u_19 (ATerm t)
  {
    t = SSL_open_file(not_null(l_19), not_null(m_19));
    return(t);
  }
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym__2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_19(t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = u_19(t);
          }
      }
    }
  else
    {
      t = t_19(t);
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
  ATerm x_19 = NULL;
  ATerm y_19 = NULL;
  t = term_l_7;
  {
    t = new_0(t);
    {
      y_19 = t;
      if(((x_19 != NULL) && (x_19 != y_19)))
        _fail(y_19);
      else
        x_19 = y_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), term_v_24);
    {
      t = conc_strings_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, j_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm g_20 = NULL;
  t = new_file_0(t);
  {
    g_20 = t;
    {
      ATerm a_25;
      a_25 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_h_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_l_7);
            {
              ATerm k_2 (ATerm t)
              {
                t = term_b_25;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
        }
      }
      t = a_25;
    }
  }
  return(t);
}
ATerm print_to_0 (ATerm t)
{
  ATerm l_20 = NULL;
  ATerm n_20 = NULL;
  l_20 = t;
  {
    ATerm o_20 = NULL;
    t = xtc_new_file_0(t);
    {
      o_20 = t;
      {
        if(((n_20 != NULL) && (n_20 != o_20)))
          _fail(o_20);
        else
          n_20 = o_20;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(l_20));
          {
            t = print_0(t);
            {
              t = not_null(n_20);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_20));
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  ATerm i_21 (ATerm t)
  {
    t = SSL_fclose(not_null(x_20));
    return(t);
  }
  x_20 = t;
  v_20 :
  if(match_cons(x_20, sym_Stream_1))
    {
      w_20 = ATgetArgument(x_20, 0);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(w_20));
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = i_21(t);
          }
      }
    }
  else
    {
      t = i_21(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_Stream_1))
    {
      m_21 = ATgetArgument(l_21, 0);
      t = SSL_read_term_from_stream(not_null(m_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym__2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      {
        ATerm z_21 = NULL;
        t = SSL_fopen(not_null(t_21), not_null(u_21));
        {
          ATerm a_22 = NULL;
          a_22 = t;
          if(((z_21 != NULL) && (z_21 != a_22)))
            _fail(a_22);
          else
            z_21 = a_22;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_21));
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
  ATerm e_22 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm f_22 = NULL;
    f_22 = t;
    if(((e_22 != NULL) && (e_22 != f_22)))
      _fail(f_22);
    else
      e_22 = f_22;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_22));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm i_22 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm j_22 = NULL;
    j_22 = t;
    if(((i_22 != NULL) && (i_22 != j_22)))
      _fail(j_22);
    else
      i_22 = j_22;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_22));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm m_22 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm n_22 = NULL;
    n_22 = t;
    if(((m_22 != NULL) && (m_22 != n_22)))
      _fail(n_22);
    else
      m_22 = n_22;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_22));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(y_22, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(y_22, sym_stdin_0))
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
  ATerm j_23 = NULL;
  ATerm p_23 = NULL,q_23 = NULL;
  j_23 = t;
  {
    ATerm r_23 = NULL;
    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
    t = not_null(j_23);
    {
      r_23 = t;
      {
        t = SSL_explode_term(not_null(r_23));
        {
          t_23 = t;
          g_23 :
          if(match_cons(t_23, sym__2))
            {
              u_23 = ATgetArgument(t_23, 0);
              v_23 = ATgetArgument(t_23, 1);
              h_23 :
              if(match_string(u_23, ""))
                {
                  i_23 :
                  if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
                    {
                      w_23 = ATgetFirst((ATermList) v_23);
                      x_23 = (ATerm) ATgetNext((ATermList) v_23);
                      {
                        if(((q_23 != NULL) && (q_23 != w_23)))
                          _fail(w_23);
                        else
                          q_23 = w_23;
                        if(((p_23 != NULL) && (p_23 != x_23)))
                          _fail(x_23);
                        else
                          p_23 = x_23;
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
    t = not_null(q_23);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym__2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_2 (ATerm t)
                  {
                    ATerm i_24 = NULL,j_24 = NULL;
                    i_24 = t;
                    d_24 :
                    if(match_cons(i_24, sym_Path_1))
                      {
                        j_24 = ATgetArgument(i_24, 0);
                        t = not_null(j_24);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
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
  ATerm r_24 = NULL;
  ATerm k_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL;
      ATerm q_24 = NULL;
      q_24 = t;
      if(((p_24 != NULL) && (p_24 != q_24)))
        _fail(q_24);
      else
        p_24 = q_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), term_t_25);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = k_25;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_u_25;
          return(t);
        }
        t = debug_1(t, m_2);
        _fail(t);
      }
    }
  {
    ATerm v_25;
    v_25 = t;
    {
      ATerm s_24 = NULL;
      t = read_from_stream_0(t);
      {
        s_24 = t;
        if(((r_24 != NULL) && (r_24 != s_24)))
          _fail(s_24);
        else
          r_24 = s_24;
      }
    }
    t = v_25;
    {
      t = fclose_0(t);
      t = not_null(r_24);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      t = SSL_access(not_null(y_24), not_null(z_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_25 = NULL;
  ATerm f_25 = NULL;
  f_25 = t;
  if(((e_25 != NULL) && (e_25 != f_25)))
    _fail(f_25);
  else
    e_25 = f_25;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), (ATerm) ATinsert(ATempty, term_w_25));
    t = access_0(t);
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym_stdin_0))
    {
      ATerm o_25 = NULL;
      ATerm p_25 = NULL;
      t = term_x_25;
      {
        t = ReadFromFile_0(t);
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
      }
      t = not_null(o_25);
    }
  else
    {
      if(match_cons(m_25, sym_FILE_1))
        {
          n_25 = ATgetArgument(m_25, 0);
          {
            ATerm r_25 = NULL;
            ATerm s_25 = NULL;
            t = not_null(n_25);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  s_25 = t;
                  if(((r_25 != NULL) && (r_25 != s_25)))
                    _fail(s_25);
                  else
                    r_25 = s_25;
                }
              }
            }
            t = not_null(r_25);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_text_1 (ATerm t, ATerm g_92 (ATerm))
{
  t = read_from_0(t);
  {
    t = g_92(t);
    t = print_to_0(t);
  }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm z_25 = NULL,b_26 = NULL;
    ATerm y_25;
    y_25 = t;
    {
      ATerm a_26 = NULL;
      ATerm o_2 (ATerm t)
      {
        t = term_d_26;
        return(t);
      }
      t = xtc_transform_2(t, o_2, create_abox2latex_args_0);
      {
        a_26 = t;
        if(((z_25 != NULL) && (z_25 != a_26)))
          _fail(a_26);
        else
          z_25 = a_26;
      }
    }
    t = y_25;
    {
      ATerm c_26 = NULL;
      t = term_e_26;
      {
        t = create_header_0(t);
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
      }
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), not_null(b_26));
    }
    return(t);
  }
  t = xtc_io_transform_text_1(t, n_2);
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym__2))
    {
      i_26 = ATgetArgument(h_26, 0);
      j_26 = ATgetArgument(h_26, 1);
      t = SSL_copy(not_null(i_26), not_null(j_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_stderr_0))
    {
      ATerm t_26 = NULL,v_26 = NULL;
      ATerm f_26;
      f_26 = t;
      {
        ATerm u_26 = NULL;
        t = SSLgetAnnotations(not_null(r_26));
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      t = f_26;
      {
        ATerm w_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(t_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
        t = not_null(v_26);
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
  ATerm e_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_stdout_0))
    {
      ATerm g_27 = NULL,i_27 = NULL;
      ATerm k_26;
      k_26 = t;
      {
        ATerm h_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
      }
      t = k_26;
      {
        ATerm j_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(g_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        t = not_null(i_27);
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
  ATerm a_28 = NULL,c_28 = NULL;
  a_28 = t;
  w_27 :
  if(match_cons(a_28, sym_FILE_1))
    {
      c_28 = ATgetArgument(a_28, 0);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_28 = NULL;
            ATerm f_28 = NULL;
            t = m_0(t);
            {
              f_28 = t;
              {
                if(((e_28 != NULL) && (e_28 != f_28)))
                  _fail(f_28);
                else
                  e_28 = f_28;
                {
                  ATerm n_26 = t;
                  int o_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(o_26);
                    }
                  else
                    {
                      t = n_26;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(e_28));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_28));
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm p_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_28 = NULL;
                  ATerm i_28 = NULL;
                  t = m_0(t);
                  {
                    i_28 = t;
                    {
                      if(((h_28 != NULL) && (h_28 != i_28)))
                        _fail(i_28);
                      else
                        h_28 = i_28;
                      {
                        ATerm x_26 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_26 = t;
                            int z_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(z_26);
                              }
                            else
                              {
                                t = y_26;
                                {
                                  ATerm a_27 = t;
                                  int b_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(b_27);
                                    }
                                  else
                                    {
                                      t = a_27;
                                      {
                                        ATerm j_28 = NULL;
                                        j_28 = t;
                                        if(((c_28 != NULL) && (c_28 != j_28)))
                                          _fail(j_28);
                                        else
                                          c_28 = j_28;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = x_26;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(h_28));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_28));
                  ;
                  LocalPopChoice(s_26);
                }
              else
                {
                  t = p_26;
                  {
                    ATerm l_28 = NULL;
                    t = m_0(t);
                    {
                      l_28 = t;
                      if(((c_28 != NULL) && (c_28 != l_28)))
                        _fail(l_28);
                      else
                        c_28 = l_28;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_28));
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
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
    {
      w_28 = ATgetFirst((ATermList) v_28);
      x_28 = (ATerm) ATgetNext((ATermList) v_28);
      t = not_null(x_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  c_29 :
  if(match_cons(f_29, sym__2))
    {
      g_29 = ATgetArgument(f_29, 0);
      h_29 = ATgetArgument(f_29, 1);
      {
        ATerm c_27;
        c_27 = t;
        {
          ATerm k_29 = NULL;
          ATerm l_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(h_29));
          {
            ATerm f_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = f_27;
                t = (ATerm) ATempty;
              }
            {
              l_29 = t;
              if(((k_29 != NULL) && (k_29 != l_29)))
                _fail(l_29);
              else
                k_29 = l_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_29), not_null(h_29), not_null(k_29));
            t = table_put_0(t);
          }
        }
        t = c_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  ATerm l_27;
  l_27 = t;
  {
    ATerm v_29 = NULL;
    ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
    t = m_76(t);
    {
      v_29 = t;
      {
        if(((u_29 != NULL) && (u_29 != v_29)))
          _fail(v_29);
        else
          u_29 = v_29;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_29), term_k_24);
              t = table_get_0(t);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_29 = t;
            r_29 :
            if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
              {
                x_29 = ATgetFirst((ATermList) w_29);
                y_29 = (ATerm) ATgetNext((ATermList) w_29);
                {
                  if(((t_29 != NULL) && (t_29 != x_29)))
                    _fail(x_29);
                  else
                    t_29 = x_29;
                  {
                    if(((s_29 != NULL) && (s_29 != y_29)))
                      _fail(y_29);
                    else
                      s_29 = y_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_29), term_k_24, not_null(s_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_29);
                          {
                            ATerm p_2 (ATerm t)
                            {
                              ATerm z_29 = NULL;
                              z_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_29), not_null(z_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, p_2);
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
  t = l_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = SSL_remove(not_null(f_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm p_67 (ATerm), ATerm q_67 (ATerm))
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_67(t);
      t = q_67(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        t = q_67(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm k_30 = NULL;
  ATerm q_27;
  q_27 = t;
  {
    ATerm l_30 = NULL;
    ATerm m_30 = NULL;
    t = l_76(t);
    {
      l_30 = t;
      {
        if(((k_30 != NULL) && (k_30 != l_30)))
          _fail(l_30);
        else
          k_30 = l_30;
        {
          ATerm n_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), term_k_24);
          {
            ATerm r_27 = t;
            int s_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_27);
              }
            else
              {
                t = r_27;
                t = (ATerm) ATempty;
              }
            {
              n_30 = t;
              if(((m_30 != NULL) && (m_30 != n_30)))
                _fail(n_30);
              else
                m_30 = n_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_30), term_k_24, (ATerm) ATinsert(CheckATermList(not_null(m_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_27;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm s_30 = NULL,t_30 = NULL;
  ATerm q_2 (ATerm t)
  {
    t = term_b_25;
    return(t);
  }
  t = begin_scope_1(t, q_2);
  {
    ATerm r_2 (ATerm t)
    {
      ATerm t_27;
      t_27 = t;
      {
        ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_27;
            t = table_get_0(t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          u_30 = t;
          r_30 :
          if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
            {
              v_30 = ATgetFirst((ATermList) u_30);
              w_30 = (ATerm) ATgetNext((ATermList) u_30);
              {
                if(((t_30 != NULL) && (t_30 != v_30)))
                  _fail(v_30);
                else
                  t_30 = v_30;
                {
                  if(((s_30 != NULL) && (s_30 != w_30)))
                    _fail(w_30);
                  else
                    s_30 = w_30;
                  {
                    t = not_null(t_30);
                    {
                      ATerm s_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, s_2);
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
      t = t_27;
      {
        ATerm t_2 (ATerm t)
        {
          t = term_b_25;
          return(t);
        }
        t = end_scope_1(t, t_2);
      }
      return(t);
    }
    t = restore_always_2(t, g_91, r_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm h_91 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_30 = NULL;
        ATerm a_31 = NULL;
        t = term_l_23;
        {
          t = get_config_0(t);
          {
            a_31 = t;
            if(((z_30 != NULL) && (z_30 != a_31)))
              _fail(a_31);
            else
              z_30 = a_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_30));
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = term_x_25;
      }
    {
      t = h_91(t);
      {
        ATerm v_2 (ATerm t)
        {
          ATerm b_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_23;
              t = get_config_0(t);
              ;
              LocalPopChoice(d_28);
            }
          else
            {
              t = b_28;
              t = term_g_28;
            }
          return(t);
        }
        t = copy_to_1(t, v_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, u_2);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm u_82 (ATerm), ATerm v_82 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    t = term_k_28;
    return(t);
  }
  t = ArgOption_3(t, u_82, v_82, w_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  h_31 :
  if(match_cons(k_31, sym__2))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      {
        ATerm r_31 = NULL;
        ATerm s_31 = NULL,u_31 = NULL;
        ATerm t_31 = NULL;
        t = not_null(l_31);
        {
          ATerm m_28 = t;
          int n_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(n_28);
            }
          else
            {
              t = m_28;
              t = (ATerm) ATempty;
            }
          {
            t_31 = t;
            if(((s_31 != NULL) && (s_31 != t_31)))
              _fail(t_31);
            else
              s_31 = t_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(s_31));
          {
            t = conc_0(t);
            {
              u_31 = t;
              if(((r_31 != NULL) && (r_31 != u_31)))
                _fail(u_31);
              else
                r_31 = u_31;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_28, not_null(l_31), not_null(r_31));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  b_32 :
  if(match_string(d_32, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
        {
          e_32 = ATgetFirst((ATermList) d_32);
          f_32 = (ATerm) ATgetNext((ATermList) d_32);
          c_32 :
          if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
            {
              g_32 = ATgetFirst((ATermList) f_32);
              h_32 = (ATerm) ATgetNext((ATermList) f_32);
              {
                ATerm n_32 = NULL;
                ATerm p_28;
                p_28 = t;
                {
                  t = not_null(e_32);
                  t = j_0(t);
                }
                t = p_28;
                {
                  ATerm z_32 = NULL;
                  t = not_null(g_32);
                  {
                    t = k_0(t);
                    {
                      z_32 = t;
                      if(((n_32 != NULL) && (n_32 != z_32)))
                        _fail(z_32);
                      else
                        n_32 = z_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), not_null(n_32));
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
  ATerm x_2 (ATerm t)
  {
    ATerm j_33 = NULL;
    j_33 = t;
    i_33 :
    if(!(match_string(j_33, "-v")))
      {
        if(!(match_string(j_33, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_r_28;
    t = set_config_0(t);
    t = term_s_28;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_t_28;
    return(t);
  }
  t = Option_3(t, x_2, c_3, d_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm m_33 = NULL;
    m_33 = t;
    k_33 :
    if(!(match_string(m_33, "-k")))
      {
        if(!(match_string(m_33, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm y_28;
    y_28 = t;
    {
      ATerm n_33 = NULL;
      ATerm o_33 = NULL;
      t = string_to_int_0(t);
      {
        o_33 = t;
        if(((n_33 != NULL) && (n_33 != o_33)))
          _fail(o_33);
        else
          n_33 = o_33;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_28, not_null(n_33));
        t = set_config_0(t);
      }
    }
    t = y_28;
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_a_29;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, l_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_string_to_int(not_null(r_33));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm b_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        ATerm e_34 = NULL;
        e_34 = t;
        u_33 :
        if(!(match_string(e_34, "-S")))
          {
            if(!(match_string(e_34, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = term_i_29;
        t = set_config_0(t);
        t = term_j_29;
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_m_29;
        return(t);
      }
      t = Option_3(t, m_3, n_3, o_3);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = b_29;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 (ATerm t)
            {
              ATerm f_34 = NULL;
              f_34 = t;
              v_33 :
              if(!(match_string(f_34, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_3 (ATerm t)
            {
              ATerm m_34 = NULL;
              ATerm p_29;
              p_29 = t;
              {
                ATerm g_34 = NULL;
                ATerm l_34 = NULL;
                t = string_to_int_0(t);
                {
                  l_34 = t;
                  if(((g_34 != NULL) && (g_34 != l_34)))
                    _fail(l_34);
                  else
                    g_34 = l_34;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(g_34));
                  t = set_config_0(t);
                }
              }
              t = p_29;
              {
                ATerm u_34 = NULL;
                u_34 = t;
                if(((m_34 != NULL) && (m_34 != u_34)))
                  _fail(u_34);
                else
                  m_34 = u_34;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_34));
              }
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              t = term_q_29;
              return(t);
            }
            t = ArgOption_3(t, p_3, q_3, r_3);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm v_34 = NULL;
                v_34 = t;
                d_34 :
                if(!(match_string(v_34, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_b_30;
                t = set_config_0(t);
                t = term_c_30;
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                t = term_d_30;
                return(t);
              }
              t = Option_3(t, a_4, b_4, c_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = e_30;
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm c_35 = NULL;
    c_35 = t;
    z_34 :
    if(!(match_string(c_35, "-o")))
      {
        if(!(match_string(c_35, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm f_35 = NULL;
    ATerm j_30;
    j_30 = t;
    {
      ATerm d_35 = NULL;
      ATerm e_35 = NULL;
      e_35 = t;
      if(((d_35 != NULL) && (d_35 != e_35)))
        _fail(e_35);
      else
        d_35 = e_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_23, not_null(d_35));
        t = set_config_0(t);
      }
    }
    t = j_30;
    {
      ATerm g_35 = NULL;
      g_35 = t;
      if(((f_35 != NULL) && (f_35 != g_35)))
        _fail(g_35);
      else
        f_35 = g_35;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_35));
    }
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_o_30;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm m_35 = NULL;
    m_35 = t;
    j_35 :
    if(!(match_string(m_35, "-i")))
      {
        if(!(match_string(m_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm p_35 = NULL;
    ATerm p_30;
    p_30 = t;
    {
      ATerm n_35 = NULL;
      ATerm o_35 = NULL;
      o_35 = t;
      if(((n_35 != NULL) && (n_35 != o_35)))
        _fail(o_35);
      else
        n_35 = o_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_23, not_null(n_35));
        t = set_config_0(t);
      }
    }
    t = p_30;
    {
      ATerm q_35 = NULL;
      q_35 = t;
      if(((p_35 != NULL) && (p_35 != q_35)))
        _fail(q_35);
      else
        p_35 = q_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_35));
    }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_q_30;
    return(t);
  }
  t = ArgOption_3(t, m_4, n_4, q_4);
  return(t);
}
ATerm abox2latex_options_0 (ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            {
              ATerm d_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  ;
                  LocalPopChoice(e_31);
                }
              else
                {
                  t = d_31;
                  {
                    ATerm f_31 = t;
                    int g_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_4 (ATerm t)
                        {
                          ATerm x_35 = NULL;
                          x_35 = t;
                          t_35 :
                          if(!(match_string(x_35, "-t")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm s_4 (ATerm t)
                        {
                          ATerm i_31;
                          i_31 = t;
                          {
                            ATerm y_35 = NULL;
                            ATerm z_35 = NULL;
                            z_35 = t;
                            if(((y_35 != NULL) && (y_35 != z_35)))
                              _fail(z_35);
                            else
                              y_35 = z_35;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(y_35)));
                              t = extend_config_0(t);
                            }
                          }
                          t = i_31;
                          return(t);
                        }
                        ATerm t_4 (ATerm t)
                        {
                          t = term_j_31;
                          return(t);
                        }
                        t = ArgOption_3(t, r_4, s_4, t_4);
                        ;
                        LocalPopChoice(g_31);
                      }
                    else
                      {
                        t = f_31;
                        {
                          ATerm u_4 (ATerm t)
                          {
                            ATerm a_36 = NULL;
                            a_36 = t;
                            v_35 :
                            if(!(match_string(a_36, "-w")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm z_4 (ATerm t)
                          {
                            ATerm b_36 = NULL;
                            ATerm c_36 = NULL;
                            c_36 = t;
                            if(((b_36 != NULL) && (b_36 != c_36)))
                              _fail(c_36);
                            else
                              b_36 = c_36;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(b_36));
                              t = set_config_0(t);
                            }
                            return(t);
                          }
                          t = ArgOption_2(t, u_4, z_4);
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
  ATerm n_31;
  n_31 = t;
  {
    ATerm g_36 = NULL;
    ATerm h_36 = NULL;
    t = term_l_7;
    {
      t = whoami_0(t);
      {
        h_36 = t;
        if(((g_36 != NULL) && (g_36 != h_36)))
          _fail(h_36);
        else
          g_36 = h_36;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_31), not_null(g_36)), term_o_31));
      {
        t = printnl_0(t);
        {
          t = term_r_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_31;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm k_36 = NULL;
  t = report_run_time_0(t);
  {
    ATerm l_36 = NULL;
    t = term_l_7;
    {
      t = whoami_0(t);
      {
        l_36 = t;
        if(((k_36 != NULL) && (k_36 != l_36)))
          _fail(l_36);
        else
          k_36 = l_36;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, term_q_31), not_null(k_36)));
      {
        t = printnl_0(t);
        {
          t = term_r_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_v_31;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = SSL_TicksToSeconds(not_null(o_36));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym__2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_36), not_null(v_36));
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            t = SSL_addr(not_null(u_36), not_null(v_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_75(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      {
        ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
        c_37 = t;
        b_37 :
        if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
          {
            d_37 = ATgetFirst((ATermList) c_37);
            e_37 = (ATerm) ATgetNext((ATermList) c_37);
            {
              ATerm h_37 = NULL;
              ATerm i_37 = NULL;
              t = not_null(e_37);
              {
                t = foldr_2(t, e_75, f_75);
                {
                  i_37 = t;
                  if(((h_37 != NULL) && (h_37 != i_37)))
                    _fail(i_37);
                  else
                    h_37 = i_37;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_37), not_null(h_37));
                t = f_75(t);
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
ATerm crush_2 (ATerm t, ATerm c_73 (ATerm), ATerm d_73 (ATerm))
{
  ATerm p_37 = NULL;
  ATerm r_37 = NULL;
  p_37 = t;
  {
    ATerm s_37 = NULL;
    ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
    t = not_null(p_37);
    {
      s_37 = t;
      {
        t = SSL_explode_term(not_null(s_37));
        {
          u_37 = t;
          o_37 :
          if(match_cons(u_37, sym__2))
            {
              v_37 = ATgetArgument(u_37, 0);
              w_37 = ATgetArgument(u_37, 1);
              if(((r_37 != NULL) && (r_37 != w_37)))
                _fail(w_37);
              else
                r_37 = w_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_37);
      t = foldr_2(t, c_73, d_73);
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
    ATerm a_5 (ATerm t)
    {
      t = term_e_29;
      return(t);
    }
    t = crush_2(t, a_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
  c_38 = t;
  b_38 :
  if(match_cons(c_38, sym__2))
    {
      d_38 = ATgetArgument(c_38, 0);
      e_38 = ATgetArgument(c_38, 1);
      {
        ATerm a_32;
        a_32 = t;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_38), not_null(e_38));
              ;
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = SSL_gtr(not_null(d_38), not_null(e_38));
            }
        }
        t = a_32;
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
  ATerm k_38 = NULL;
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
      l_38 = t;
      j_38 :
      if(match_cons(l_38, sym__2))
        {
          m_38 = ATgetArgument(l_38, 0);
          n_38 = ATgetArgument(l_38, 1);
          {
            if(((k_38 != NULL) && (k_38 != m_38)))
              _fail(m_38);
            else
              k_38 = m_38;
            if(((k_38 != NULL) && (k_38 != n_38)))
              _fail(n_38);
            else
              k_38 = n_38;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm m_32;
    m_32 = t;
    {
      ATerm q_38 = NULL;
      ATerm r_38 = NULL;
      t = term_o_8;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), term_r_8);
        t = geq_0(t);
      }
    }
    t = m_32;
    t = x_89(t);
    return(t);
  }
  t = try_1(t, f_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm v_38 = NULL,x_38 = NULL;
    ATerm o_32;
    o_32 = t;
    {
      ATerm w_38 = NULL;
      t = run_time_0(t);
      {
        w_38 = t;
        if(((v_38 != NULL) && (v_38 != w_38)))
          _fail(w_38);
        else
          v_38 = w_38;
      }
    }
    t = o_32;
    {
      ATerm y_38 = NULL;
      t = term_l_7;
      {
        t = whoami_0(t);
        {
          y_38 = t;
          if(((x_38 != NULL) && (x_38 != y_38)))
            _fail(y_38);
          else
            x_38 = y_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_32), not_null(v_38)), term_m_10), not_null(x_38)));
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
    t = term_e_29;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_Version_0))
    {
      ATerm h_39 = NULL,j_39 = NULL;
      ATerm q_32;
      q_32 = t;
      {
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(f_39));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
      }
      t = q_32;
      {
        ATerm k_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_39));
        {
          k_39 = t;
          if(((j_39 != NULL) && (j_39 != k_39)))
            _fail(k_39);
          else
            j_39 = k_39;
        }
        t = not_null(j_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_32;
      t = get_config_0(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              {
                ATerm w_32 = t;
                int x_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(x_32);
                  }
                else
                  {
                    t = w_32;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, h_5);
      }
    }
  t = i_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  t = SSL_table_create(not_null(p_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  {
    ATerm y_32;
    y_32 = t;
    {
      t = term_a_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_33, term_b_33, not_null(w_39));
          t = table_put_0(t);
        }
      }
    }
    t = y_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  t = SSL_table_destroy(not_null(c_40));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  t = SSL_exit(not_null(i_40));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(((ATgetType(m_40) == AT_LIST) && ATisEmpty(m_40)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_40) == AT_LIST) && !(ATisEmpty(m_40))))
        {
          n_40 = ATgetFirst((ATermList) m_40);
          o_40 = (ATerm) ATgetNext((ATermList) m_40);
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
  ATerm c_33;
  c_33 = t;
  {
    ATerm r_40 = NULL;
    ATerm u_40 = NULL;
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        {
          ATerm s_40 = NULL;
          ATerm t_40 = NULL;
          t_40 = t;
          if(((s_40 != NULL) && (s_40 != t_40)))
            _fail(t_40);
          else
            s_40 = t_40;
          t = (ATerm) ATinsert(ATempty, not_null(s_40));
        }
      }
    {
      u_40 = t;
      if(((r_40 != NULL) && (r_40 != u_40)))
        _fail(u_40);
      else
        r_40 = u_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_28, not_null(r_40));
      t = printnl_0(t);
    }
  }
  t = c_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  f_41 = t;
  c_41 :
  if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
    {
      d_41 = ATgetFirst((ATermList) f_41);
      e_41 = (ATerm) ATgetNext((ATermList) f_41);
      {
        ATerm i_41 = NULL;
        t = not_null(e_41);
        {
          ATerm f_33;
          f_33 = t;
          {
            ATerm j_41 = NULL,l_41 = NULL,n_41 = NULL;
            ATerm g_33;
            g_33 = t;
            {
              ATerm k_41 = NULL;
              t = i_0(t);
              {
                k_41 = t;
                if(((j_41 != NULL) && (j_41 != k_41)))
                  _fail(k_41);
                else
                  j_41 = k_41;
              }
            }
            t = g_33;
            {
              ATerm m_41 = NULL;
              t = not_null(d_41);
              {
                t = g_0(t);
                {
                  m_41 = t;
                  if(((l_41 != NULL) && (l_41 != m_41)))
                    _fail(m_41);
                  else
                    l_41 = m_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_41)), not_null(l_41));
                {
                  n_41 = t;
                  if(((i_41 != NULL) && (i_41 != n_41)))
                    _fail(n_41);
                  else
                    i_41 = n_41;
                }
              }
            }
          }
          t = f_33;
          {
            ATerm i_5 (ATerm t)
            {
              t = not_null(i_41);
              return(t);
            }
            t = reverse_acc_2(t, g_0, i_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_41) == AT_LIST) && ATisEmpty(f_41)))
        {
          {
            t = term_l_7;
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
  ATerm j_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, j_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_Program_1))
    {
      z_41 = ATgetArgument(y_41, 0);
      {
        ATerm c_42 = NULL,e_42 = NULL;
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(y_41));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        {
          t = not_null(z_41);
          {
            ATerm g_42 = NULL;
            t = i_61(t);
            {
              e_42 = t;
              {
                ATerm h_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_42)), not_null(c_42));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm s_42 = NULL;
  ATerm h_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_42 = NULL;
      t = term_v_31;
      {
        t = get_config_0(t);
        {
          w_42 = t;
          if(((s_42 != NULL) && (s_42 != w_42)))
            _fail(w_42);
          else
            s_42 = w_42;
        }
      }
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = h_33;
      {
        ATerm l_5 (ATerm t)
        {
          ATerm o_5 (ATerm t)
          {
            ATerm x_42 = NULL;
            x_42 = t;
            if(((s_42 != NULL) && (s_42 != x_42)))
              _fail(x_42);
            else
              s_42 = x_42;
            return(t);
          }
          t = Program_1(t, o_5);
          return(t);
        }
        t = option_defined_1(t, l_5);
      }
    }
  {
    ATerm p_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        t = not_null(s_42);
        return(t);
      }
      t = short_description_1(t, q_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, p_5);
    {
      t = term_p_33;
      {
        t = echo_0(t);
        {
          t = term_t_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm d_43 = NULL;
                  ATerm e_43 = NULL;
                  e_43 = t;
                  if(((d_43 != NULL) && (d_43 != e_43)))
                    _fail(e_43);
                  else
                    d_43 = e_43;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_43)), term_w_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    ATerm j_43 = NULL;
                    ATerm k_43 = NULL;
                    ATerm x_5 (ATerm t)
                    {
                      t = not_null(s_42);
                      return(t);
                    }
                    t = long_description_1(t, x_5);
                    {
                      k_43 = t;
                      if(((j_43 != NULL) && (j_43 != k_43)))
                        _fail(k_43);
                      else
                        j_43 = k_43;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_43)), term_k_7);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_5);
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
  ATerm x_43 = NULL,b_44 = NULL,c_44 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym__2))
    {
      b_44 = ATgetArgument(x_43, 0);
      c_44 = ATgetArgument(x_43, 1);
      {
        ATerm x_33;
        x_33 = t;
        t = SSL_printnl(not_null(b_44), not_null(c_44));
        t = x_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm l_44 = NULL,m_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym_Undefined_1))
    {
      m_44 = ATgetArgument(l_44, 0);
      {
        ATerm p_44 = NULL,r_44 = NULL;
        ATerm q_44 = NULL;
        t = SSLgetAnnotations(not_null(l_44));
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
        {
          t = not_null(m_44);
          {
            ATerm t_44 = NULL;
            t = j_61(t);
            {
              r_44 = t;
              {
                ATerm u_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_44)), not_null(p_44));
                {
                  u_44 = t;
                  if(((t_44 != NULL) && (t_44 != u_44)))
                    _fail(u_44);
                  else
                    t_44 = u_44;
                }
                t = not_null(t_44);
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
ATerm fetch_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm e_45 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_69, _id);
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = Cons_2(t, _id, e_45);
      }
    return(t);
  }
  t = e_45(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_82 (ATerm))
{
  t = fetch_1(t, b_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_Help_0))
    {
      ATerm p_45 = NULL,r_45 = NULL;
      ATerm a_34;
      a_34 = t;
      {
        ATerm q_45 = NULL;
        t = SSLgetAnnotations(not_null(j_45));
        {
          q_45 = t;
          if(((p_45 != NULL) && (p_45 != q_45)))
            _fail(q_45);
          else
            p_45 = q_45;
        }
      }
      t = a_34;
      {
        ATerm s_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_45));
        {
          s_45 = t;
          if(((r_45 != NULL) && (r_45 != s_45)))
            _fail(s_45);
          else
            r_45 = s_45;
        }
        t = not_null(r_45);
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
  ATerm x_45 = NULL;
  x_45 = t;
  t = SSL_implode_string(not_null(x_45));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
        c_46 = t;
        b_46 :
        if(((ATgetType(c_46) == AT_LIST) && !(ATisEmpty(c_46))))
          {
            d_46 = ATgetFirst((ATermList) c_46);
            e_46 = (ATerm) ATgetNext((ATermList) c_46);
            {
              t = not_null(d_46);
              {
                ATerm y_5 (ATerm t)
                {
                  t = not_null(e_46);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm o_46 = NULL;
  ATerm q_46 = NULL;
  o_46 = t;
  {
    ATerm r_46 = NULL;
    ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
    t = not_null(o_46);
    {
      r_46 = t;
      {
        t = SSL_explode_term(not_null(r_46));
        {
          t_46 = t;
          m_46 :
          if(match_cons(t_46, sym__2))
            {
              u_46 = ATgetArgument(t_46, 0);
              v_46 = ATgetArgument(t_46, 1);
              n_46 :
              if(match_string(u_46, ""))
                {
                  if(((q_46 != NULL) && (q_46 != v_46)))
                    _fail(v_46);
                  else
                    q_46 = v_46;
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
      t = not_null(q_46);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm z_46 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_46);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          t = Nil_0(t);
          t = h_69(t);
        }
      }
    return(t);
  }
  t = z_46(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym__2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      {
        t = not_null(d_47);
        {
          ATerm a_6 (ATerm t)
          {
            t = not_null(e_47);
            return(t);
          }
          t = at_end_1(t, a_6);
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
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  t = SSL_explode_string(not_null(j_47));
  return(t);
}
ATerm _2 (ATerm t, ATerm a_55 (ATerm), ATerm b_55 (ATerm))
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym__2))
    {
      t_47 = ATgetArgument(s_47, 0);
      u_47 = ATgetArgument(s_47, 1);
      {
        ATerm y_47 = NULL,a_48 = NULL;
        ATerm z_47 = NULL;
        t = SSLgetAnnotations(not_null(s_47));
        {
          z_47 = t;
          if(((y_47 != NULL) && (y_47 != z_47)))
            _fail(z_47);
          else
            y_47 = z_47;
        }
        {
          t = not_null(t_47);
          {
            ATerm c_48 = NULL;
            t = a_55(t);
            {
              a_48 = t;
              {
                t = not_null(u_47);
                {
                  ATerm e_48 = NULL;
                  t = b_55(t);
                  {
                    c_48 = t;
                    {
                      ATerm f_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_48), not_null(c_48)), not_null(y_47));
                      {
                        f_48 = t;
                        if(((e_48 != NULL) && (e_48 != f_48)))
                          _fail(f_48);
                        else
                          e_48 = f_48;
                      }
                      t = not_null(e_48);
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
ATerm debug_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm n_34;
  n_34 = t;
  {
    ATerm n_48 = NULL,p_48 = NULL;
    ATerm o_34;
    o_34 = t;
    {
      ATerm o_48 = NULL;
      t = j_80(t);
      {
        o_48 = t;
        if(((n_48 != NULL) && (n_48 != o_48)))
          _fail(o_48);
        else
          n_48 = o_48;
      }
    }
    t = o_34;
    {
      ATerm q_48 = NULL;
      q_48 = t;
      if(((p_48 != NULL) && (p_48 != q_48)))
        _fail(q_48);
      else
        p_48 = q_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_48)), not_null(n_48)));
        t = printnl_0(t);
      }
    }
  }
  t = n_34;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm t_48 (ATerm t)
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = Cons_2(t, s_68, t_48);
      }
    return(t);
  }
  t = t_48(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  t = SSL_is_string(not_null(v_48));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm t_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_6);
            ;
            LocalPopChoice(w_34);
          }
        else
          {
            t = t_34;
            {
              ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
              e_49 = t;
              d_49 :
              if(match_cons(e_49, sym_Path_1))
                {
                  f_49 = ATgetArgument(e_49, 0);
                  t = not_null(f_49);
                }
              else
                {
                  if(match_cons(e_49, sym_Var_1))
                    {
                      f_49 = ATgetArgument(e_49, 0);
                      {
                        t = not_null(f_49);
                        {
                          ATerm x_34 = t;
                          int y_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_34);
                            }
                          else
                            {
                              t = x_34;
                              {
                                ATerm c_6 (ATerm t)
                                {
                                  t = term_a_35;
                                  return(t);
                                }
                                t = debug_1(t, c_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_49, sym_Prefix_2))
                        {
                          f_49 = ATgetArgument(e_49, 0);
                          g_49 = ATgetArgument(e_49, 1);
                          {
                            ATerm l_49 = NULL,n_49 = NULL;
                            ATerm b_35;
                            b_35 = t;
                            {
                              ATerm m_49 = NULL;
                              t = not_null(f_49);
                              {
                                t = eval_config_0(t);
                                {
                                  m_49 = t;
                                  if(((l_49 != NULL) && (l_49 != m_49)))
                                    _fail(m_49);
                                  else
                                    l_49 = m_49;
                                }
                              }
                            }
                            t = b_35;
                            {
                              ATerm o_49 = NULL;
                              t = not_null(g_49);
                              {
                                t = eval_config_0(t);
                                {
                                  o_49 = t;
                                  if(((n_49 != NULL) && (n_49 != o_49)))
                                    _fail(o_49);
                                  else
                                    n_49 = o_49;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_49), not_null(n_49));
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
  ATerm w_49 = NULL;
  w_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_28, not_null(w_49));
    {
      t = table_get_0(t);
      {
        ATerm d_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_35;
            h_35 = t;
            {
              ATerm y_49 = NULL;
              ATerm z_49 = NULL;
              z_49 = t;
              if(((y_49 != NULL) && (y_49 != z_49)))
                _fail(z_49);
              else
                y_49 = z_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_28, not_null(w_49), not_null(y_49));
                t = table_put_0(t);
              }
            }
            t = h_35;
          }
          return(t);
        }
        t = try_1(t, d_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm i_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_67(t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = i_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  d_50 :
  if(match_cons(g_50, sym__2))
    {
      h_50 = ATgetArgument(g_50, 0);
      i_50 = ATgetArgument(g_50, 1);
      t = SSL_table_get(not_null(h_50), not_null(i_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym__3))
    {
      y_50 = ATgetArgument(x_50, 0);
      z_50 = ATgetArgument(x_50, 1);
      a_51 = ATgetArgument(x_50, 2);
      {
        ATerm l_35;
        l_35 = t;
        {
          ATerm e_51 = NULL;
          ATerm f_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_50), not_null(z_50));
          {
            ATerm r_35 = t;
            int s_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(s_35);
              }
            else
              {
                t = r_35;
                t = (ATerm) ATempty;
              }
            {
              f_51 = t;
              if(((e_51 != NULL) && (e_51 != f_51)))
                _fail(f_51);
              else
                e_51 = f_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_50), not_null(z_50), (ATerm) ATinsert(CheckATermList(not_null(e_51)), not_null(a_51)));
            t = table_put_0(t);
          }
        }
        t = l_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm j_51 = NULL;
  ATerm k_51 = NULL;
  t = term_l_7;
  {
    t = g_83(t);
    {
      k_51 = t;
      if(((j_51 != NULL) && (j_51 != k_51)))
        _fail(k_51);
      else
        j_51 = k_51;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_33, term_s_33, not_null(j_51));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  p_51 :
  if(match_string(q_51, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_51) == AT_LIST) && !(ATisEmpty(q_51))))
        {
          r_51 = ATgetFirst((ATermList) q_51);
          s_51 = (ATerm) ATgetNext((ATermList) q_51);
          {
            ATerm v_51 = NULL;
            ATerm u_35;
            u_35 = t;
            {
              t = not_null(r_51);
              t = a_0(t);
            }
            t = u_35;
            {
              ATerm w_51 = NULL;
              t = term_l_7;
              {
                t = b_0(t);
                {
                  w_51 = t;
                  if(((v_51 != NULL) && (v_51 != w_51)))
                    _fail(w_51);
                  else
                    v_51 = w_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_51)), not_null(v_51));
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
  ATerm e_6 (ATerm t)
  {
    ATerm b_52 = NULL;
    b_52 = t;
    a_52 :
    if(!(match_string(b_52, "--help")))
      {
        if(!(match_string(b_52, "-h")))
          {
            if(!(match_string(b_52, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_w_35;
    {
      t = set_config_0(t);
      t = term_d_36;
    }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_e_36;
    return(t);
  }
  t = Option_3(t, e_6, f_6, l_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
  e_52 = t;
  d_52 :
  if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
    {
      f_52 = ATgetFirst((ATermList) e_52);
      g_52 = (ATerm) ATgetNext((ATermList) e_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_52)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(((ATgetType(q_52) == AT_LIST) && !(ATisEmpty(q_52))))
    {
      r_52 = ATgetFirst((ATermList) q_52);
      s_52 = (ATerm) ATgetNext((ATermList) q_52);
      {
        ATerm w_52 = NULL,y_52 = NULL;
        ATerm x_52 = NULL;
        t = SSLgetAnnotations(not_null(q_52));
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
        {
          t = not_null(r_52);
          {
            ATerm b_53 = NULL;
            t = j_56(t);
            {
              y_52 = t;
              {
                t = not_null(s_52);
                {
                  ATerm d_53 = NULL;
                  t = k_56(t);
                  {
                    b_53 = t;
                    {
                      ATerm e_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_53)), not_null(y_52)), not_null(w_52));
                      {
                        e_53 = t;
                        if(((d_53 != NULL) && (d_53 != e_53)))
                          _fail(e_53);
                        else
                          d_53 = e_53;
                      }
                      t = not_null(d_53);
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
  ATerm d_54 = NULL;
  d_54 = t;
  a_54 :
  if(((ATgetType(d_54) == AT_LIST) && ATisEmpty(d_54)))
    {
      {
        ATerm f_54 = NULL,i_54 = NULL;
        ATerm f_36;
        f_36 = t;
        {
          ATerm h_54 = NULL;
          t = SSLgetAnnotations(not_null(d_54));
          {
            h_54 = t;
            if(((f_54 != NULL) && (f_54 != h_54)))
              _fail(h_54);
            else
              f_54 = h_54;
          }
        }
        t = f_36;
        {
          ATerm j_54 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_54));
          {
            j_54 = t;
            if(((i_54 != NULL) && (i_54 != j_54)))
              _fail(j_54);
            else
              i_54 = j_54;
          }
          t = not_null(i_54);
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
  ATerm y_54 = NULL,z_54 = NULL,c_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym__2))
    {
      z_54 = ATgetArgument(y_54, 0);
      c_55 = ATgetArgument(y_54, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_28, not_null(z_54), not_null(c_55));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm i_36;
  i_36 = t;
  {
    ATerm o_6 (ATerm t)
    {
      t = term_j_36;
      t = e_83(t);
      return(t);
    }
    t = try_1(t, o_6);
  }
  t = i_36;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm k_55 = NULL;
      ATerm m_36;
      m_36 = t;
      {
        ATerm i_55 = NULL;
        ATerm j_55 = NULL;
        j_55 = t;
        if(((i_55 != NULL) && (i_55 != j_55)))
          _fail(j_55);
        else
          i_55 = j_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_31, not_null(i_55));
          t = set_config_0(t);
        }
      }
      t = m_36;
      {
        ATerm l_55 = NULL;
        l_55 = t;
        if(((k_55 != NULL) && (k_55 != l_55)))
          _fail(l_55);
        else
          k_55 = l_55;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_55));
      }
      return(t);
    }
    ATerm q_6 (ATerm t)
    {
      ATerm n_36 = t;
      int p_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              {
                t = e_83(t);
                t = Cons_2(t, _id, q_6);
              }
            }
          ;
          LocalPopChoice(p_36);
        }
      else
        {
          t = n_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_6, q_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
  ATerm w_36;
  w_36 = t;
  {
    ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
    u_55 = t;
    q_55 :
    if(match_cons(u_55, sym__3))
      {
        v_55 = ATgetArgument(u_55, 0);
        w_55 = ATgetArgument(u_55, 1);
        x_55 = ATgetArgument(u_55, 2);
        {
          if(((r_55 != NULL) && (r_55 != v_55)))
            _fail(v_55);
          else
            r_55 = v_55;
          {
            if(((s_55 != NULL) && (s_55 != w_55)))
              _fail(w_55);
            else
              s_55 = w_55;
            {
              if(((t_55 != NULL) && (t_55 != x_55)))
                _fail(x_55);
              else
                t_55 = x_55;
              t = SSL_table_put(not_null(r_55), not_null(s_55), not_null(t_55));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_36;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm a_56 = NULL;
  ATerm x_36;
  x_36 = t;
  {
    t = term_y_36;
    t = table_put_0(t);
  }
  t = x_36;
  {
    ATerm t_6 (ATerm t)
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_83(t);
          ;
          LocalPopChoice(a_37);
        }
      else
        {
          t = z_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_6);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_37;
            j_37 = t;
            {
              ATerm k_37 = t;
              int l_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_32;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_37);
                }
              else
                {
                  t = k_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_37;
            {
              t = system_usage_0(t);
              {
                t = term_e_29;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            {
              ATerm v_6 (ATerm t)
              {
                ATerm w_6 (ATerm t)
                {
                  ATerm b_56 = NULL;
                  b_56 = t;
                  if(((a_56 != NULL) && (a_56 != b_56)))
                    _fail(b_56);
                  else
                    a_56 = b_56;
                  return(t);
                }
                t = Undefined_1(t, w_6);
                return(t);
              }
              t = option_defined_1(t, v_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_56)), term_m_37));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_r_8;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_6);
      {
        ATerm n_37;
        n_37 = t;
        {
          t = term_q_33;
          t = table_destroy_0(t);
        }
        t = n_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm n_63 (ATerm))
{
  t = parse_options_1(t, k_63);
  {
    t = store_options_0(t);
    {
      t = m_63(t);
      {
        ATerm q_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_63);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = q_37;
            {
              ATerm x_37 = t;
              int y_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_63(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(y_37);
                }
              else
                {
                  t = x_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm o_63 (ATerm), ATerm p_63 (ATerm))
{
  t = option_wrap_4(t, o_63, default_usage_0, _id, p_63);
  return(t);
}
ATerm io_abox2latex_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    t = xtc_io_1(t, abox2latex_0);
    return(t);
  }
  t = option_wrap_2(t, abox2latex_options_0, x_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2latex_0(t);
  return(t);
}
