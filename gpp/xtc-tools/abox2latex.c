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
Symbol sym_Pipe_2;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_c_29;
ATerm term_d_28;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_n_26;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_i_19;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_x_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_r_7;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% `abs $LATEX_TABLES | fmt -75 | sed 's/^/%    /g'` \n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_k_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_k_13);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_r_7, term_s_15);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_x_6);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_h_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_x_6);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_n_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_x_6);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0 (ATerm);
ATerm xtc_close_fd_0 (ATerm);
ATerm fdcopy_0 (ATerm);
ATerm finally_2 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm File_as_fd_1 (ATerm, ATerm j_85 (ATerm));
ATerm STDERR__FILENO_0 (ATerm);
ATerm STDOUT__FILENO_0 (ATerm);
ATerm STDIN__FILENO_0 (ATerm);
ATerm open_0 (ATerm);
ATerm xtc_open_fd_0 (ATerm);
ATerm xtc_new_file_name_0 (ATerm);
ATerm xtc_cat_0 (ATerm);
ATerm print_0 (ATerm);
ATerm print_to_0 (ATerm);
ATerm create_header_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm create_table_file_0 (ATerm);
ATerm create_abox2latex_args_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm c_76 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm l_84 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_73 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm k_84 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm m_84 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_69 (ATerm), ATerm s_69 (ATerm));
ATerm union_1 (ATerm, ATerm n_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm a_75 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm e_86 (ATerm));
ATerm assert_1 (ATerm, ATerm x_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_59 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm w_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm g_86 (ATerm), ATerm h_86 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm u_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm j_63 (ATerm), ATerm k_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm q_85 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm r_85 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm));
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm));
ATerm crush_2 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_58 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_77 (ATerm));
ATerm Program_1 (ATerm, ATerm a_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_59 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_59 (ATerm));
ATerm map_1 (ATerm, ATerm u_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm));
ATerm io_abox2latex_0 (ATerm);
ATerm main_0 (ATerm);
ATerm close_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_close(not_null(e_0));
  return(t);
}
ATerm xtc_close_fd_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6;
            v_6 = t;
            {
              ATerm j_1 = NULL,y_1 = NULL;
              ATerm w_6;
              w_6 = t;
              {
                ATerm k_1 = NULL;
                k_1 = t;
                if(((j_1 != NULL) && (j_1 != k_1)))
                  _fail(k_1);
                else
                  j_1 = k_1;
              }
              t = w_6;
              {
                ATerm z_1 = NULL;
                t = term_x_6;
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
            t = v_6;
            ;
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            {
              ATerm y_6 = t;
              int z_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_7;
                  a_7 = t;
                  {
                    ATerm a_2 = NULL,t_2 = NULL;
                    ATerm b_7;
                    b_7 = t;
                    {
                      ATerm s_2 = NULL;
                      s_2 = t;
                      if(((a_2 != NULL) && (a_2 != s_2)))
                        _fail(s_2);
                      else
                        a_2 = s_2;
                    }
                    t = b_7;
                    {
                      ATerm u_2 = NULL;
                      t = term_x_6;
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
                  t = a_7;
                  ;
                  LocalPopChoice(z_6);
                }
              else
                {
                  t = y_6;
                  {
                    ATerm k_7;
                    k_7 = t;
                    {
                      ATerm y_2 = NULL,a_3 = NULL;
                      ATerm l_7;
                      l_7 = t;
                      {
                        ATerm z_2 = NULL;
                        z_2 = t;
                        if(((y_2 != NULL) && (y_2 != z_2)))
                          _fail(z_2);
                        else
                          y_2 = z_2;
                      }
                      t = l_7;
                      {
                        ATerm b_3 = NULL;
                        t = term_x_6;
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
                    t = k_7;
                  }
                }
            }
          }
        ;
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        t = close_0(t);
      }
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = term_x_6;
    return(t);
  }
  t = finally_2(t, b_0, f_0);
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
ATerm finally_2 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_63(t);
      LocalPopChoice(n_7);
      {
        ATerm o_7;
        o_7 = t;
        t = m_63(t);
        t = o_7;
      }
    }
  else
    {
      t = m_7;
      {
        ATerm p_7;
        p_7 = t;
        t = m_63(t);
        t = p_7;
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1 (ATerm t, ATerm j_85 (ATerm))
{
  ATerm r_3 = NULL;
  t = xtc_open_fd_0(t);
  {
    r_3 = t;
    {
      ATerm h_0 (ATerm t)
      {
        ATerm q_7;
        q_7 = t;
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(r_3);
            t = xtc_close_fd_0(t);
            return(t);
          }
          t = try_1(t, p_0);
        }
        t = q_7;
        return(t);
      }
      t = finally_2(t, j_85, h_0);
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
          t = term_x_6;
          t = STDIN__FILENO_0(t);
        }
      else
        {
          if(match_cons(e_4, sym_stdout_0))
            {
              t = term_x_6;
              t = STDOUT__FILENO_0(t);
            }
          else
            {
              if(match_cons(e_4, sym_stderr_0))
                {
                  t = term_x_6;
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_x_6);
      {
        ATerm q_0 (ATerm t)
        {
          t = term_r_7;
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
        ATerm x_7;
        x_7 = t;
        t = SSL_print(not_null(h_5), not_null(i_5));
        t = x_7;
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
ATerm create_header_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_8), term_t_8), term_s_8), term_a_8), term_p_8), term_n_8), term_m_8), term_l_8), term_k_8), term_a_8), term_j_8), term_e_8), term_d_8), term_a_8), term_c_8), term_a_8), term_b_8), term_a_8);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_int_to_string(not_null(v_5));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym__2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm u_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_6), not_null(c_6));
            ;
            LocalPopChoice(w_8);
          }
        else
          {
            t = u_8;
            t = SSL_subtr(not_null(b_6), not_null(c_6));
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
  ATerm i_6 = NULL;
  ATerm j_6 = NULL,l_6 = NULL;
  ATerm k_6 = NULL;
  t = term_x_8;
  {
    ATerm y_8 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = y_8;
        t = term_e_9;
      }
    {
      k_6 = t;
      if(((j_6 != NULL) && (j_6 != k_6)))
        _fail(k_6);
      else
        j_6 = k_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), term_e_9);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          l_6 = t;
          if(((i_6 != NULL) && (i_6 != l_6)))
            _fail(l_6);
          else
            i_6 = l_6;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_6)), term_x_8);
  return(t);
}
ATerm create_table_file_0 (ATerm t)
{
  ATerm r_6 = NULL,t_6 = NULL,u_6 = NULL;
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_9;
      t = get_config_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      t = (ATerm) ATempty;
    }
  {
    t = map_1(t, ReadFromFile_0);
    {
      ATerm s_6 = NULL;
      s_6 = t;
      if(((r_6 != NULL) && (r_6 != s_6)))
        _fail(s_6);
      else
        r_6 = s_6;
      {
        t = (ATerm) ATinsert(CheckATermList(not_null(r_6)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_e_10), term_d_10)), (ATerm) ATinsert(ATinsert(ATempty, term_c_10), term_b_10)), (ATerm) ATinsert(ATinsert(ATempty, term_a_10), term_u_9)), (ATerm) ATinsert(ATinsert(ATempty, term_s_9), term_o_9)), (ATerm) ATinsert(ATinsert(ATempty, term_m_9), term_l_9)), (ATerm) ATinsert(ATinsert(ATempty, term_k_9), term_j_9)));
        {
          t = concat_0(t);
          {
            t = write_to_0(t);
            {
              t_6 = t;
              q_6 :
              if(match_cons(t_6, sym_FILE_1))
                {
                  u_6 = ATgetArgument(t_6, 0);
                  t = not_null(u_6);
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
  ATerm c_7 = NULL,e_7 = NULL;
  ATerm j_10;
  j_10 = t;
  {
    ATerm d_7 = NULL;
    t = term_x_6;
    {
      t = create_table_file_0(t);
      {
        d_7 = t;
        if(((c_7 != NULL) && (c_7 != d_7)))
          _fail(d_7);
        else
          c_7 = d_7;
      }
    }
  }
  t = j_10;
  {
    ATerm f_7 = NULL;
    t = term_x_6;
    {
      t = pass_verbose_0(t);
      {
        f_7 = t;
        if(((e_7 != NULL) && (e_7 != f_7)))
          _fail(f_7);
        else
          e_7 = f_7;
      }
    }
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_7)), not_null(c_7)), term_k_10);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm g_7 = NULL,i_7 = NULL;
          ATerm l_10;
          l_10 = t;
          {
            ATerm h_7 = NULL;
            t = term_m_10;
            {
              t = get_config_0(t);
              {
                h_7 = t;
                if(((g_7 != NULL) && (g_7 != h_7)))
                  _fail(h_7);
                else
                  g_7 = h_7;
              }
            }
          }
          t = l_10;
          {
            ATerm j_7 = NULL;
            j_7 = t;
            if(((i_7 != NULL) && (i_7 != j_7)))
              _fail(j_7);
            else
              i_7 = j_7;
            t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_7)), not_null(g_7)), term_o_10);
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_stdin_0))
    {
      ATerm v_7 = NULL;
      ATerm w_7 = NULL;
      t = term_p_10;
      {
        t = ReadFromFile_0(t);
        {
          w_7 = t;
          if(((v_7 != NULL) && (v_7 != w_7)))
            _fail(w_7);
          else
            v_7 = w_7;
        }
      }
      t = not_null(v_7);
    }
  else
    {
      if(match_cons(t_7, sym_FILE_1))
        {
          u_7 = ATgetArgument(t_7, 0);
          {
            ATerm y_7 = NULL;
            ATerm z_7 = NULL;
            t = not_null(u_7);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  z_7 = t;
                  if(((y_7 != NULL) && (y_7 != z_7)))
                    _fail(z_7);
                  else
                    y_7 = z_7;
                }
              }
            }
            t = not_null(y_7);
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
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym__2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      t = SSL_WriteToBinaryFile(not_null(h_8), not_null(i_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm o_8 = NULL;
  ATerm q_8 = NULL;
  o_8 = t;
  {
    ATerm r_8 = NULL;
    t = xtc_new_file_0(t);
    {
      r_8 = t;
      {
        if(((q_8 != NULL) && (q_8 != r_8)))
          _fail(r_8);
        else
          q_8 = r_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(o_8));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(q_8);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, n_86, o_86);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_close_file(not_null(v_8));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      t = SSL_execvp(not_null(b_9), not_null(c_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm h_9 = NULL;
  h_9 = t;
  t = SSL_waitpid(not_null(h_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm r_9 = NULL;
  ATerm t_9 = NULL;
  r_9 = t;
  {
    t = fork_0(t);
    {
      t_9 = t;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL;
            v_9 = t;
            n_9 :
            if(match_int(v_9, 0))
              {
                t = not_null(r_9);
                t = c_76(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            {
              ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
              t = not_null(t_9);
              {
                t = waitpid_0(t);
                {
                  w_9 = t;
                  p_9 :
                  if(match_cons(w_9, sym_WaitStatus_3))
                    {
                      x_9 = ATgetArgument(w_9, 0);
                      y_9 = ATgetArgument(w_9, 1);
                      z_9 = ATgetArgument(w_9, 2);
                      q_9 :
                      if(match_int(x_9, 0))
                        {
                          t = not_null(r_9);
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      {
        ATerm u_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), not_null(i_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, u_0);
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
  ATerm n_10 = NULL;
  n_10 = t;
  t = SSL_table_keys(not_null(n_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm v_10 = NULL;
        ATerm x_10 = NULL;
        v_10 = t;
        {
          ATerm y_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(v_10));
          {
            t = table_get_0(t);
            {
              y_10 = t;
              if(((x_10 != NULL) && (x_10 != y_10)))
                _fail(y_10);
              else
                x_10 = y_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(x_10));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm s_10;
    s_10 = t;
    {
      ATerm d_11 = NULL;
      ATerm e_11 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_u_10);
        t = geq_0(t);
      }
    }
    t = s_10;
    t = l_84(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_10;
  w_10 = t;
  {
    ATerm h_11 = NULL;
    ATerm i_11 = NULL;
    i_11 = t;
    if(((h_11 != NULL) && (h_11 != i_11)))
      _fail(i_11);
    else
      h_11 = i_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(h_11));
      t = printnl_0(t);
    }
  }
  t = w_10;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm o_11 = NULL;
  ATerm q_11 = NULL,r_11 = NULL;
  o_11 = t;
  {
    ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_11)));
    {
      t = table_get_0(t);
      {
        s_11 = t;
        m_11 :
        if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
          {
            t_11 = ATgetFirst((ATermList) s_11);
            w_11 = (ATerm) ATgetNext((ATermList) s_11);
            n_11 :
            if(match_cons(t_11, sym__2))
              {
                u_11 = ATgetArgument(t_11, 0);
                v_11 = ATgetArgument(t_11, 1);
                {
                  if(((q_11 != NULL) && (q_11 != u_11)))
                    _fail(u_11);
                  else
                    q_11 = u_11;
                  if(((r_11 != NULL) && (r_11 != v_11)))
                    _fail(v_11);
                  else
                    r_11 = v_11;
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
    t = not_null(r_11);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym__2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      {
        ATerm i_12 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_12)));
        {
          t = table_get_0(t);
          {
            ATerm x_0 (ATerm t)
            {
              ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
              j_12 = t;
              b_12 :
              if(match_cons(j_12, sym__2))
                {
                  k_12 = ATgetArgument(j_12, 0);
                  l_12 = ATgetArgument(j_12, 1);
                  {
                    if(((f_12 != NULL) && (f_12 != k_12)))
                      _fail(k_12);
                    else
                      f_12 = k_12;
                    if(((i_12 != NULL) && (i_12 != l_12)))
                      _fail(l_12);
                    else
                      i_12 = l_12;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_0);
          }
        }
        t = not_null(i_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1(t, h_71);
              return(t);
            }
            t = Cons_2(t, h_71, y_0);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
              q_12 = t;
              p_12 :
              if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
                {
                  r_12 = ATgetFirst((ATermList) q_12);
                  s_12 = (ATerm) ATgetNext((ATermList) q_12);
                  {
                    t = not_null(s_12);
                    t = filter_1(t, h_71);
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
ATerm repeat_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm v_12 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = b_73(t);
      t = v_12(t);
      return(t);
    }
    t = try_1(t, z_0);
    return(t);
  }
  t = v_12(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm j_11;
  j_11 = t;
  {
    ATerm a_1 (ATerm t)
    {
      t = term_l_11;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm p_11 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_11;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, a_1);
  }
  t = j_11;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm k_84 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm x_11;
    x_11 = t;
    {
      ATerm x_12 = NULL;
      ATerm y_12 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_12), term_y_11);
        t = geq_0(t);
      }
    }
    t = x_11;
    t = k_84(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm z_11;
    z_11 = t;
    {
      ATerm b_13 = NULL;
      ATerm c_13 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          c_13 = t;
          if(((b_13 != NULL) && (b_13 != c_13)))
            _fail(c_13);
          else
            b_13 = c_13;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), term_a_12);
        t = geq_0(t);
      }
    }
    t = z_11;
    t = m_84(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      if(((h_13 != NULL) && (h_13 != i_13)))
        _fail(i_13);
      else
        h_13 = i_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_69 (ATerm), ATerm s_69 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
    {
      p_13 = ATgetFirst((ATermList) o_13);
      q_13 = (ATerm) ATgetNext((ATermList) o_13);
      {
        t = s_69(t);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm t_13 = NULL;
            t_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(t_13));
              t = r_69(t);
            }
            return(t);
          }
          t = fetch_1(t, d_1);
        }
        t = not_null(q_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym__2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      {
        t = not_null(a_14);
        {
          ATerm f_14 (ATerm t)
          {
            ATerm g_12 = t;
            int h_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_14);
                ;
                LocalPopChoice(h_12);
              }
            else
              {
                t = g_12;
                {
                  ATerm m_12 = t;
                  int n_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = not_null(b_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_69, e_1);
                      t = f_14(t);
                      ;
                      LocalPopChoice(n_12);
                    }
                  else
                    {
                      t = m_12;
                      t = Cons_2(t, _id, f_14);
                    }
                }
              }
            return(t);
          }
          t = f_14(t);
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
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym__3))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      n_14 = ATgetArgument(k_14, 2);
      {
        ATerm o_12;
        o_12 = t;
        {
          ATerm r_14 = NULL;
          ATerm s_14 = NULL,u_14 = NULL;
          ATerm t_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), not_null(m_14));
          {
            ATerm t_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(u_12);
              }
            else
              {
                t = t_12;
                t = (ATerm) ATempty;
              }
            {
              t_14 = t;
              if(((s_14 != NULL) && (s_14 != t_14)))
                _fail(t_14);
              else
                s_14 = t_14;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), not_null(n_14));
            {
              t = union_0(t);
              {
                u_14 = t;
                if(((r_14 != NULL) && (r_14 != u_14)))
                  _fail(u_14);
                else
                  r_14 = u_14;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_14), not_null(m_14), not_null(r_14));
            t = set_0(t);
          }
        }
        t = o_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      {
        t = not_null(e_15);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
            h_15 = t;
            a_15 :
            if(match_cons(h_15, sym__2))
              {
                i_15 = ATgetArgument(h_15, 0);
                j_15 = ATgetArgument(h_15, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_15), not_null(i_15), not_null(j_15));
                  t = a_75(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, f_1);
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
  ATerm p_15 = NULL;
  ATerm w_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = NULL;
      q_15 = t;
      {
        if(((p_15 != NULL) && (p_15 != q_15)))
          _fail(q_15);
        else
          p_15 = q_15;
        t = SSL_ReadFromFile(not_null(p_15));
      }
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = w_12;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_a_13;
          return(t);
        }
        t = debug_1(t, g_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm u_15 = NULL;
  ATerm w_15 = NULL;
  u_15 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = term_d_13;
        return(t);
      }
      t = debug_1(t, i_1);
      return(t);
    }
    t = if_verbose5_1(t, h_1);
    {
      ATerm e_13 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_15)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_13;
        }
      {
        ATerm j_13;
        j_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_11, term_k_13, (ATerm) ATinsert(ATempty, not_null(u_15)));
          t = table_put_0(t);
        }
        t = j_13;
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_1 (ATerm t)
            {
              t = term_l_13;
              return(t);
            }
            t = debug_1(t, m_1);
            return(t);
          }
          t = if_verbose4_1(t, l_1);
          {
            ATerm m_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = m_13;
                t = (ATerm) ATempty;
              }
            {
              ATerm n_1 (ATerm t)
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_s_13;
                  return(t);
                }
                t = say_1(t, o_1);
                return(t);
              }
              t = if_verbose6_1(t, n_1);
              {
                ATerm x_15 = NULL;
                x_15 = t;
                if(((w_15 != NULL) && (w_15 != x_15)))
                  _fail(x_15);
                else
                  w_15 = x_15;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(w_15));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = term_u_13;
                          return(t);
                        }
                        t = say_1(t, q_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, p_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_a_11, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_15)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm s_1 (ATerm t)
                              {
                                t = term_s_13;
                                return(t);
                              }
                              t = say_1(t, s_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, r_1);
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
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_getenv(not_null(b_16));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_14;
            t = getenv_0(t);
            ;
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = term_g_14;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose5_1(t, t_1);
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm i_14 = t;
      int o_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_p_14;
          t = table_get_0(t);
          ;
          LocalPopChoice(o_14);
        }
      else
        {
          t = i_14;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = h_14;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = term_q_14;
          return(t);
        }
        t = debug_1(t, w_1);
        return(t);
      }
      t = if_verbose5_1(t, v_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm b_2 (ATerm t)
        {
          t = term_x_14;
          return(t);
        }
        t = debug_1(t, b_2);
        return(t);
      }
      t = if_verbose5_1(t, x_1);
      {
        t = xtc_load_0(t);
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm c_2 (ATerm t)
            {
              ATerm d_2 (ATerm t)
              {
                t = term_x_14;
                return(t);
              }
              t = debug_1(t, d_2);
              return(t);
            }
            t = if_verbose5_1(t, c_2);
          }
        }
      }
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm f_16 = NULL;
        ATerm g_16 = NULL;
        g_16 = t;
        if(((f_16 != NULL) && (f_16 != g_16)))
          _fail(g_16);
        else
          f_16 = g_16;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_15), not_null(f_16)), term_f_15);
          {
            t = error_0(t);
            {
              ATerm e_2 (ATerm t)
              {
                t = term_a_11;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm f_2 (ATerm t)
                    {
                      t = term_k_15;
                      return(t);
                    }
                    t = debug_1(t, f_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, e_2);
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
ATerm xtc_command_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm k_16 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm l_16 = NULL;
    t = e_86(t);
    {
      t = xtc_find_warning_0(t);
      {
        l_16 = t;
        if(((k_16 != NULL) && (k_16 != l_16)))
          _fail(l_16);
        else
          k_16 = l_16;
      }
    }
  }
  t = l_15;
  {
    ATerm m_15;
    m_15 = t;
    {
      ATerm m_16 = NULL;
      ATerm n_16 = NULL;
      n_16 = t;
      if(((m_16 != NULL) && (m_16 != n_16)))
        _fail(n_16);
      else
        m_16 = n_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(m_16));
        t = call_0(t);
      }
    }
    t = m_15;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym__2))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      {
        ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
        ATerm n_15;
        n_15 = t;
        {
          ATerm d_17 = NULL;
          ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
          t = x_74(t);
          {
            d_17 = t;
            {
              if(((a_17 != NULL) && (a_17 != d_17)))
                _fail(d_17);
              else
                a_17 = d_17;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_17), not_null(w_16), not_null(x_16));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_15 = t;
                    int r_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), term_s_15);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(r_15);
                      }
                    else
                      {
                        t = o_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_17 = t;
                      t_16 :
                      if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                        {
                          f_17 = ATgetFirst((ATermList) e_17);
                          g_17 = (ATerm) ATgetNext((ATermList) e_17);
                          {
                            if(((b_17 != NULL) && (b_17 != f_17)))
                              _fail(f_17);
                            else
                              b_17 = f_17;
                            {
                              if(((c_17 != NULL) && (c_17 != g_17)))
                                _fail(g_17);
                              else
                                c_17 = g_17;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_17), term_s_15, (ATerm) ATinsert(CheckATermList(not_null(c_17)), (ATerm) ATinsert(CheckATermList(not_null(b_17)), not_null(w_16))));
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
        t = n_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm t_15;
  t_15 = t;
  {
    t = t_59(t);
    {
      ATerm g_2 (ATerm t)
      {
        t = term_v_15;
        return(t);
      }
      t = debug_1(t, g_2);
    }
  }
  t = t_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
      q_17 = t;
      l_17 :
      if(match_cons(q_17, sym__2))
        {
          r_17 = ATgetArgument(q_17, 0);
          s_17 = ATgetArgument(q_17, 1);
          {
            if(((p_17 != NULL) && (p_17 != r_17)))
              _fail(r_17);
            else
              p_17 = r_17;
            if(((o_17 != NULL) && (o_17 != s_17)))
              _fail(s_17);
            else
              o_17 = s_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_15);
      t = SSL_open_file(not_null(p_17), not_null(o_17));
    }
  else
    {
      t = y_15;
      {
        ATerm t_17 = NULL;
        ATerm u_17 = NULL;
        ATerm h_2 (ATerm t)
        {
          t = term_a_16;
          return(t);
        }
        t = obsolete_1(t, h_2);
        {
          t_17 = t;
          {
            if(((p_17 != NULL) && (p_17 != t_17)))
              _fail(t_17);
            else
              p_17 = t_17;
            {
              ATerm c_16;
              c_16 = t;
              {
                ATerm v_17 = NULL;
                t = term_d_16;
                {
                  v_17 = t;
                  if(((u_17 != NULL) && (u_17 != v_17)))
                    _fail(v_17);
                  else
                    u_17 = v_17;
                }
              }
              t = c_16;
              t = SSL_open_file(not_null(p_17), not_null(u_17));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm b_18 = NULL;
  ATerm d_18 = NULL;
  b_18 = t;
  {
    ATerm e_16;
    e_16 = t;
    {
      ATerm e_18 = NULL;
      t = term_h_16;
      {
        e_18 = t;
        if(((d_18 != NULL) && (d_18 != e_18)))
          _fail(e_18);
        else
          d_18 = e_18;
      }
    }
    t = e_16;
    {
      t = SSL_open_file(not_null(b_18), not_null(d_18));
      t = SSL_close_file(not_null(b_18));
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
  ATerm i_18 = NULL;
  ATerm j_18 = NULL;
  t = term_x_6;
  {
    t = new_0(t);
    {
      j_18 = t;
      if(((i_18 != NULL) && (i_18 != j_18)))
        _fail(j_18);
      else
        i_18 = j_18;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_18), term_i_16);
    {
      t = conc_strings_0(t);
      {
        ATerm i_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, i_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm n_18 = NULL;
  t = new_file_0(t);
  {
    n_18 = t;
    {
      ATerm j_16;
      j_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_d_16);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_x_6);
            {
              ATerm j_2 (ATerm t)
              {
                t = term_r_7;
                return(t);
              }
              t = assert_1(t, j_2);
            }
          }
        }
      }
      t = j_16;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  w_18 :
  if(match_cons(y_18, sym_stdin_0))
    {
      ATerm a_19 = NULL;
      ATerm b_19 = NULL;
      ATerm c_19 = NULL;
      t = xtc_new_file_0(t);
      {
        b_19 = t;
        {
          if(((a_19 != NULL) && (a_19 != b_19)))
            _fail(b_19);
          else
            a_19 = b_19;
          {
            ATerm e_19 = NULL;
            t = o_0(t);
            {
              e_19 = t;
              if(((c_19 != NULL) && (c_19 != e_19)))
                _fail(e_19);
              else
                c_19 = e_19;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_19)), term_o_16));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(a_19);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_19));
    }
  else
    {
      if(match_cons(y_18, sym_FILE_1))
        {
          z_18 = ATgetArgument(y_18, 0);
          {
            ATerm g_19 = NULL;
            ATerm l_19 = NULL;
            t = not_null(z_18);
            {
              ATerm q_19 = NULL;
              t = xtc_new_file_0(t);
              {
                l_19 = t;
                {
                  if(((g_19 != NULL) && (g_19 != l_19)))
                    _fail(l_19);
                  else
                    g_19 = l_19;
                  {
                    ATerm r_19 = NULL;
                    t = o_0(t);
                    {
                      r_19 = t;
                      if(((q_19 != NULL) && (q_19 != r_19)))
                        _fail(r_19);
                      else
                        q_19 = r_19;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_19)), term_o_16), not_null(z_18)), term_p_16));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(g_19);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_19));
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
  ATerm g_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_stdin_0))
    {
      ATerm i_20 = NULL,k_20 = NULL;
      ATerm q_16;
      q_16 = t;
      {
        ATerm j_20 = NULL;
        t = SSLgetAnnotations(not_null(g_20));
        {
          j_20 = t;
          if(((i_20 != NULL) && (i_20 != j_20)))
            _fail(j_20);
          else
            i_20 = j_20;
        }
      }
      t = q_16;
      {
        ATerm l_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(i_20));
        {
          l_20 = t;
          if(((k_20 != NULL) && (k_20 != l_20)))
            _fail(l_20);
          else
            k_20 = l_20;
        }
        t = not_null(k_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  t_20 :
  if(match_cons(z_20, sym_FILE_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      {
        ATerm d_21 = NULL,f_21 = NULL;
        ATerm e_21 = NULL;
        t = SSLgetAnnotations(not_null(z_20));
        {
          e_21 = t;
          if(((d_21 != NULL) && (d_21 != e_21)))
            _fail(e_21);
          else
            d_21 = e_21;
        }
        {
          t = not_null(a_21);
          {
            ATerm h_21 = NULL;
            t = w_57(t);
            {
              f_21 = t;
              {
                ATerm i_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(f_21)), not_null(d_21));
                {
                  i_21 = t;
                  if(((h_21 != NULL) && (h_21 != i_21)))
                    _fail(i_21);
                  else
                    h_21 = i_21;
                }
                t = not_null(h_21);
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
ATerm xtc_transform_2 (ATerm t, ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = y_16;
          t = stdin_0(t);
        }
      LocalPopChoice(s_16);
      t = xtc_transform_file_2(t, g_86, h_86);
    }
  else
    {
      t = r_16;
      t = xtc_transform_term_2(t, g_86, h_86);
    }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm t_21 = NULL,v_21 = NULL;
  ATerm h_17;
  h_17 = t;
  {
    ATerm u_21 = NULL;
    ATerm k_2 (ATerm t)
    {
      t = term_i_17;
      return(t);
    }
    t = xtc_transform_2(t, k_2, create_abox2latex_args_0);
    {
      u_21 = t;
      if(((t_21 != NULL) && (t_21 != u_21)))
        _fail(u_21);
      else
        t_21 = u_21;
    }
  }
  t = h_17;
  {
    ATerm w_21 = NULL;
    t = term_j_17;
    {
      t = create_header_0(t);
      {
        t = print_to_0(t);
        {
          w_21 = t;
          if(((v_21 != NULL) && (v_21 != w_21)))
            _fail(w_21);
          else
            v_21 = w_21;
        }
      }
    }
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_21)), not_null(v_21));
      t = xtc_cat_0(t);
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym__2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      t = SSL_copy(not_null(c_22), not_null(d_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_stderr_0))
    {
      ATerm n_22 = NULL,p_22 = NULL;
      ATerm k_17;
      k_17 = t;
      {
        ATerm o_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
      }
      t = k_17;
      {
        ATerm q_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        t = not_null(p_22);
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
  ATerm y_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_stdout_0))
    {
      ATerm a_23 = NULL,c_23 = NULL;
      ATerm m_17;
      m_17 = t;
      {
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(y_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
      }
      t = m_17;
      {
        ATerm d_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(a_23));
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
        t = not_null(c_23);
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
  ATerm p_23 = NULL,q_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_FILE_1))
    {
      q_23 = ATgetArgument(p_23, 0);
      {
        ATerm n_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_23 = NULL;
            ATerm t_23 = NULL;
            t = m_0(t);
            {
              t_23 = t;
              {
                if(((s_23 != NULL) && (s_23 != t_23)))
                  _fail(t_23);
                else
                  s_23 = t_23;
                {
                  ATerm x_17 = t;
                  int y_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(y_17);
                    }
                  else
                    {
                      t = x_17;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(s_23));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_23));
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = n_17;
            {
              ATerm z_17 = t;
              int a_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_23 = NULL;
                  ATerm w_23 = NULL;
                  t = m_0(t);
                  {
                    w_23 = t;
                    {
                      if(((v_23 != NULL) && (v_23 != w_23)))
                        _fail(w_23);
                      else
                        v_23 = w_23;
                      {
                        ATerm c_18 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_18 = t;
                            int g_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(g_18);
                              }
                            else
                              {
                                t = f_18;
                                {
                                  ATerm h_18 = t;
                                  int k_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(k_18);
                                    }
                                  else
                                    {
                                      t = h_18;
                                      {
                                        ATerm x_23 = NULL;
                                        x_23 = t;
                                        if(((q_23 != NULL) && (q_23 != x_23)))
                                          _fail(x_23);
                                        else
                                          q_23 = x_23;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = c_18;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(v_23));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_23));
                  ;
                  LocalPopChoice(a_18);
                }
              else
                {
                  t = z_17;
                  {
                    ATerm z_23 = NULL;
                    t = m_0(t);
                    {
                      z_23 = t;
                      if(((q_23 != NULL) && (q_23 != z_23)))
                        _fail(z_23);
                      else
                        q_23 = z_23;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_23));
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
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  i_24 :
  if(((ATgetType(j_24) == AT_LIST) && !(ATisEmpty(j_24))))
    {
      k_24 = ATgetFirst((ATermList) j_24);
      l_24 = (ATerm) ATgetNext((ATermList) j_24);
      t = not_null(l_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm w_24 = NULL;
          ATerm x_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(t_24));
          {
            ATerm m_18 = t;
            int o_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(o_18);
              }
            else
              {
                t = m_18;
                t = (ATerm) ATempty;
              }
            {
              x_24 = t;
              if(((w_24 != NULL) && (w_24 != x_24)))
                _fail(x_24);
              else
                w_24 = x_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_24), not_null(t_24), not_null(w_24));
            t = table_put_0(t);
          }
        }
        t = l_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  ATerm p_18;
  p_18 = t;
  {
    ATerm h_25 = NULL;
    ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
    t = u_74(t);
    {
      h_25 = t;
      {
        if(((g_25 != NULL) && (g_25 != h_25)))
          _fail(h_25);
        else
          g_25 = h_25;
        {
          ATerm q_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_s_15);
              t = table_get_0(t);
              ;
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_25 = t;
            d_25 :
            if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
              {
                j_25 = ATgetFirst((ATermList) i_25);
                k_25 = (ATerm) ATgetNext((ATermList) i_25);
                {
                  if(((f_25 != NULL) && (f_25 != j_25)))
                    _fail(j_25);
                  else
                    f_25 = j_25;
                  {
                    if(((e_25 != NULL) && (e_25 != k_25)))
                      _fail(k_25);
                    else
                      e_25 = k_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_25), term_s_15, not_null(e_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_25);
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm l_25 = NULL;
                              l_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(l_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_2);
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
  t = p_18;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_remove(not_null(r_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_63 (ATerm), ATerm k_63 (ATerm))
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_63(t);
      t = k_63(t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        t = k_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm w_25 = NULL;
  ATerm u_18;
  u_18 = t;
  {
    ATerm x_25 = NULL;
    ATerm y_25 = NULL;
    t = t_74(t);
    {
      x_25 = t;
      {
        if(((w_25 != NULL) && (w_25 != x_25)))
          _fail(x_25);
        else
          w_25 = x_25;
        {
          ATerm z_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), term_s_15);
          {
            ATerm v_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_18);
              }
            else
              {
                t = v_18;
                t = (ATerm) ATempty;
              }
            {
              z_25 = t;
              if(((y_25 != NULL) && (y_25 != z_25)))
                _fail(z_25);
              else
                y_25 = z_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_25), term_s_15, (ATerm) ATinsert(CheckATermList(not_null(y_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL;
  ATerm m_2 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  t = begin_scope_1(t, m_2);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm d_19;
      d_19 = t;
      {
        ATerm h_26 = NULL,i_26 = NULL,l_26 = NULL;
        ATerm f_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_19;
            t = table_get_0(t);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = f_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          h_26 = t;
          e_26 :
          if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
            {
              i_26 = ATgetFirst((ATermList) h_26);
              l_26 = (ATerm) ATgetNext((ATermList) h_26);
              {
                if(((g_26 != NULL) && (g_26 != i_26)))
                  _fail(i_26);
                else
                  g_26 = i_26;
                {
                  if(((f_26 != NULL) && (f_26 != l_26)))
                    _fail(l_26);
                  else
                    f_26 = l_26;
                  {
                    t = not_null(g_26);
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, o_2);
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
      t = d_19;
      {
        ATerm p_2 (ATerm t)
        {
          t = term_r_7;
          return(t);
        }
        t = end_scope_1(t, p_2);
      }
      return(t);
    }
    t = restore_always_2(t, q_85, n_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        t = term_p_16;
        {
          t = get_config_0(t);
          {
            s_26 = t;
            if(((r_26 != NULL) && (r_26 != s_26)))
              _fail(s_26);
            else
              r_26 = s_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_26));
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = term_p_10;
      }
    {
      t = r_85(t);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_o_16;
              t = get_config_0(t);
              ;
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              t = term_o_19;
            }
          return(t);
        }
        t = copy_to_1(t, r_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, q_2);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    t = term_p_19;
    return(t);
  }
  t = ArgOption_3(t, a_77, b_77, v_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym__2))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      {
        ATerm d_27 = NULL;
        ATerm e_27 = NULL,i_27 = NULL;
        ATerm h_27 = NULL;
        t = not_null(z_26);
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              t = (ATerm) ATempty;
            }
          {
            h_27 = t;
            if(((e_27 != NULL) && (e_27 != h_27)))
              _fail(h_27);
            else
              e_27 = h_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(e_27));
          {
            t = conc_0(t);
            {
              i_27 = t;
              if(((d_27 != NULL) && (d_27 != i_27)))
                _fail(i_27);
              else
                d_27 = i_27;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_19, not_null(z_26), not_null(d_27));
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
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  r_27 = t;
  p_27 :
  if(match_string(r_27, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
        {
          s_27 = ATgetFirst((ATermList) r_27);
          t_27 = (ATerm) ATgetNext((ATermList) r_27);
          q_27 :
          if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
            {
              u_27 = ATgetFirst((ATermList) t_27);
              v_27 = (ATerm) ATgetNext((ATermList) t_27);
              {
                ATerm z_27 = NULL;
                ATerm v_19;
                v_19 = t;
                {
                  t = not_null(s_27);
                  t = j_0(t);
                }
                t = v_19;
                {
                  ATerm a_28 = NULL;
                  t = not_null(u_27);
                  {
                    t = k_0(t);
                    {
                      a_28 = t;
                      if(((z_27 != NULL) && (z_27 != a_28)))
                        _fail(a_28);
                      else
                        z_27 = a_28;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_27)), not_null(z_27));
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
  ATerm w_2 (ATerm t)
  {
    ATerm f_28 = NULL;
    f_28 = t;
    e_28 :
    if(!(match_string(f_28, "-v")))
      {
        if(!(match_string(f_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_x_19;
    t = set_config_0(t);
    t = term_y_19;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  t = Option_3(t, w_2, x_2, c_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm i_28 = NULL;
    i_28 = t;
    g_28 :
    if(!(match_string(i_28, "-k")))
      {
        if(!(match_string(i_28, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm a_20;
    a_20 = t;
    {
      ATerm j_28 = NULL;
      ATerm k_28 = NULL;
      t = string_to_int_0(t);
      {
        k_28 = t;
        if(((j_28 != NULL) && (j_28 != k_28)))
          _fail(k_28);
        else
          j_28 = k_28;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_20, not_null(j_28));
        t = set_config_0(t);
      }
    }
    t = a_20;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_c_20;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  t = SSL_string_to_int(not_null(n_28));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm v_28 = NULL;
        v_28 = t;
        q_28 :
        if(!(match_string(v_28, "-S")))
          {
            if(!(match_string(v_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_m_20;
        t = set_config_0(t);
        t = term_n_20;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_o_20;
        return(t);
      }
      t = Option_3(t, g_3, h_3, i_3);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 (ATerm t)
            {
              ATerm w_28 = NULL;
              w_28 = t;
              r_28 :
              if(!(match_string(w_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm o_3 (ATerm t)
            {
              ATerm z_28 = NULL;
              ATerm r_20;
              r_20 = t;
              {
                ATerm x_28 = NULL;
                ATerm y_28 = NULL;
                t = string_to_int_0(t);
                {
                  y_28 = t;
                  if(((x_28 != NULL) && (x_28 != y_28)))
                    _fail(y_28);
                  else
                    x_28 = y_28;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(x_28));
                  t = set_config_0(t);
                }
              }
              t = r_20;
              {
                ATerm a_29 = NULL;
                a_29 = t;
                if(((z_28 != NULL) && (z_28 != a_29)))
                  _fail(a_29);
                else
                  z_28 = a_29;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_28));
              }
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              t = term_s_20;
              return(t);
            }
            t = ArgOption_3(t, n_3, o_3, p_3);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm q_3 (ATerm t)
              {
                ATerm b_29 = NULL;
                b_29 = t;
                u_28 :
                if(!(match_string(b_29, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm s_3 (ATerm t)
              {
                t = term_v_20;
                t = set_config_0(t);
                t = term_w_20;
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                t = term_x_20;
                return(t);
              }
              t = Option_3(t, q_3, s_3, t_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = y_20;
      {
        ATerm c_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = c_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm h_29 = NULL;
    h_29 = t;
    e_29 :
    if(!(match_string(h_29, "-o")))
      {
        if(!(match_string(h_29, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm k_29 = NULL;
    ATerm j_21;
    j_21 = t;
    {
      ATerm i_29 = NULL;
      ATerm j_29 = NULL;
      j_29 = t;
      if(((i_29 != NULL) && (i_29 != j_29)))
        _fail(j_29);
      else
        i_29 = j_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(i_29));
        t = set_config_0(t);
      }
    }
    t = j_21;
    {
      ATerm l_29 = NULL;
      l_29 = t;
      if(((k_29 != NULL) && (k_29 != l_29)))
        _fail(l_29);
      else
        k_29 = l_29;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_29));
    }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_k_21;
    return(t);
  }
  t = ArgOption_3(t, u_3, w_3, x_3);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm r_29 = NULL;
    r_29 = t;
    o_29 :
    if(!(match_string(r_29, "-i")))
      {
        if(!(match_string(r_29, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm u_29 = NULL;
    ATerm l_21;
    l_21 = t;
    {
      ATerm s_29 = NULL;
      ATerm t_29 = NULL;
      t_29 = t;
      if(((s_29 != NULL) && (s_29 != t_29)))
        _fail(t_29);
      else
        s_29 = t_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_16, not_null(s_29));
        t = set_config_0(t);
      }
    }
    t = l_21;
    {
      ATerm v_29 = NULL;
      v_29 = t;
      if(((u_29 != NULL) && (u_29 != v_29)))
        _fail(v_29);
      else
        u_29 = v_29;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_29));
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_m_21;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm abox2latex_options_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            {
              ATerm r_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  ;
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = r_21;
                  {
                    ATerm x_21 = t;
                    int y_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_4 (ATerm t)
                        {
                          ATerm c_30 = NULL;
                          c_30 = t;
                          y_29 :
                          if(!(match_string(c_30, "-t")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm z_21;
                          z_21 = t;
                          {
                            ATerm d_30 = NULL;
                            ATerm e_30 = NULL;
                            e_30 = t;
                            if(((d_30 != NULL) && (d_30 != e_30)))
                              _fail(e_30);
                            else
                              d_30 = e_30;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_9, (ATerm) ATinsert(ATempty, not_null(d_30)));
                              t = extend_config_0(t);
                            }
                          }
                          t = z_21;
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_e_22;
                          return(t);
                        }
                        t = ArgOption_3(t, b_4, f_4, g_4);
                        ;
                        LocalPopChoice(y_21);
                      }
                    else
                      {
                        t = x_21;
                        {
                          ATerm h_4 (ATerm t)
                          {
                            ATerm f_30 = NULL;
                            f_30 = t;
                            a_30 :
                            if(!(match_string(f_30, "-w")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm i_4 (ATerm t)
                          {
                            ATerm g_30 = NULL;
                            ATerm h_30 = NULL;
                            h_30 = t;
                            if(((g_30 != NULL) && (g_30 != h_30)))
                              _fail(h_30);
                            else
                              g_30 = h_30;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(g_30));
                              t = set_config_0(t);
                            }
                            return(t);
                          }
                          t = ArgOption_2(t, h_4, i_4);
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
  ATerm m_30 = NULL;
  ATerm f_22;
  f_22 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm n_30 = NULL,o_30 = NULL;
      n_30 = t;
      l_30 :
      if(match_cons(n_30, sym_Program_1))
        {
          o_30 = ATgetArgument(n_30, 0);
          if(((m_30 != NULL) && (m_30 != o_30)))
            _fail(o_30);
          else
            m_30 = o_30;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_22), not_null(m_30)), term_g_22));
      {
        t = printnl_0(t);
        {
          t = term_e_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATempty, term_i_22));
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
  ATerm r_30 = NULL;
  r_30 = t;
  t = SSL_TicksToSeconds(not_null(r_30));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym__2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      {
        ATerm j_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_30), not_null(y_30));
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = j_22;
            t = SSL_addr(not_null(x_30), not_null(y_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm))
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_70(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
        f_31 = t;
        e_31 :
        if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
          {
            g_31 = ATgetFirst((ATermList) f_31);
            h_31 = (ATerm) ATgetNext((ATermList) f_31);
            {
              ATerm k_31 = NULL;
              ATerm l_31 = NULL;
              t = not_null(h_31);
              {
                t = foldr_2(t, e_70, f_70);
                {
                  l_31 = t;
                  if(((k_31 != NULL) && (k_31 != l_31)))
                    _fail(l_31);
                  else
                    k_31 = l_31;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), not_null(k_31));
                t = f_70(t);
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
ATerm crush_2 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  ATerm s_31 = NULL;
  ATerm u_31 = NULL;
  s_31 = t;
  {
    ATerm v_31 = NULL;
    ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
    t = not_null(s_31);
    {
      v_31 = t;
      {
        t = SSL_explode_term(not_null(v_31));
        {
          x_31 = t;
          r_31 :
          if(match_cons(x_31, sym__2))
            {
              y_31 = ATgetArgument(x_31, 0);
              z_31 = ATgetArgument(x_31, 1);
              if(((u_31 != NULL) && (u_31 != z_31)))
                _fail(z_31);
              else
                u_31 = z_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_31);
      t = foldr_2(t, c_69, d_69);
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
    ATerm k_4 (ATerm t)
    {
      t = term_h_20;
      return(t);
    }
    t = crush_2(t, k_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym__2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm t_22;
        t_22 = t;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_32), not_null(h_32));
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = SSL_gtr(not_null(g_32), not_null(h_32));
            }
        }
        t = t_22;
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
  ATerm n_32 = NULL;
  ATerm w_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
      o_32 = t;
      m_32 :
      if(match_cons(o_32, sym__2))
        {
          p_32 = ATgetArgument(o_32, 0);
          q_32 = ATgetArgument(o_32, 1);
          {
            if(((n_32 != NULL) && (n_32 != p_32)))
              _fail(p_32);
            else
              n_32 = p_32;
            if(((n_32 != NULL) && (n_32 != q_32)))
              _fail(q_32);
            else
              n_32 = q_32;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = w_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm e_23;
    e_23 = t;
    {
      ATerm t_32 = NULL;
      ATerm u_32 = NULL;
      t = term_x_8;
      {
        t = get_config_0(t);
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), term_e_9);
        t = geq_0(t);
      }
    }
    t = e_23;
    t = h_84(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm y_32 = NULL,a_33 = NULL;
    ATerm f_23;
    f_23 = t;
    {
      ATerm z_32 = NULL;
      t = run_time_0(t);
      {
        z_32 = t;
        if(((y_32 != NULL) && (y_32 != z_32)))
          _fail(z_32);
        else
          y_32 = z_32;
      }
    }
    t = f_23;
    {
      ATerm b_33 = NULL;
      t = term_g_23;
      {
        t = get_config_0(t);
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_23), not_null(y_32)), term_h_23), not_null(a_33)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  {
    t = term_h_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym_Version_0))
    {
      ATerm n_33 = NULL,p_33 = NULL;
      ATerm j_23;
      j_23 = t;
      {
        ATerm o_33 = NULL;
        t = SSLgetAnnotations(not_null(l_33));
        {
          o_33 = t;
          if(((n_33 != NULL) && (n_33 != o_33)))
            _fail(o_33);
          else
            n_33 = o_33;
        }
      }
      t = j_23;
      {
        ATerm q_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_33));
        {
          q_33 = t;
          if(((p_33 != NULL) && (p_33 != q_33)))
            _fail(q_33);
          else
            p_33 = q_33;
        }
        t = not_null(p_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_4);
  t = c_58(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  t = SSL_table_create(not_null(v_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  {
    ATerm r_23;
    r_23 = t;
    {
      t = term_u_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_23, term_y_23, not_null(z_33));
          t = table_put_0(t);
        }
      }
    }
    t = r_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  t = SSL_table_destroy(not_null(d_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  t = SSL_exit(not_null(h_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  k_34 :
  if(((ATgetType(l_34) == AT_LIST) && ATisEmpty(l_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
        {
          m_34 = ATgetFirst((ATermList) l_34);
          n_34 = (ATerm) ATgetNext((ATermList) l_34);
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
  ATerm a_24;
  a_24 = t;
  {
    ATerm s_34 = NULL;
    ATerm x_34 = NULL;
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm t_34 = NULL;
          ATerm u_34 = NULL;
          u_34 = t;
          if(((t_34 != NULL) && (t_34 != u_34)))
            _fail(u_34);
          else
            t_34 = u_34;
          t = (ATerm) ATinsert(ATempty, not_null(t_34));
        }
      }
    {
      x_34 = t;
      if(((s_34 != NULL) && (s_34 != x_34)))
        _fail(x_34);
      else
        s_34 = x_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, not_null(s_34));
      t = printnl_0(t);
    }
  }
  t = a_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  k_35 = t;
  h_35 :
  if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
    {
      i_35 = ATgetFirst((ATermList) k_35);
      j_35 = (ATerm) ATgetNext((ATermList) k_35);
      {
        ATerm n_35 = NULL;
        t = not_null(j_35);
        {
          ATerm d_24;
          d_24 = t;
          {
            ATerm o_35 = NULL,q_35 = NULL,s_35 = NULL;
            ATerm e_24;
            e_24 = t;
            {
              ATerm p_35 = NULL;
              t = i_0(t);
              {
                p_35 = t;
                if(((o_35 != NULL) && (o_35 != p_35)))
                  _fail(p_35);
                else
                  o_35 = p_35;
              }
            }
            t = e_24;
            {
              ATerm r_35 = NULL;
              t = not_null(i_35);
              {
                t = g_0(t);
                {
                  r_35 = t;
                  if(((q_35 != NULL) && (q_35 != r_35)))
                    _fail(r_35);
                  else
                    q_35 = r_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_35)), not_null(q_35));
                {
                  s_35 = t;
                  if(((n_35 != NULL) && (n_35 != s_35)))
                    _fail(s_35);
                  else
                    n_35 = s_35;
                }
              }
            }
          }
          t = d_24;
          {
            ATerm p_4 (ATerm t)
            {
              t = not_null(n_35);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_35) == AT_LIST) && ATisEmpty(k_35)))
        {
          {
            t = term_x_6;
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
  ATerm q_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm v_36 = NULL,w_36 = NULL;
  v_36 = t;
  p_36 :
  if(match_cons(v_36, sym_Program_1))
    {
      w_36 = ATgetArgument(v_36, 0);
      {
        ATerm z_36 = NULL,b_37 = NULL;
        ATerm a_37 = NULL;
        t = SSLgetAnnotations(not_null(v_36));
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
        {
          t = not_null(w_36);
          {
            ATerm d_37 = NULL;
            t = a_57(t);
            {
              b_37 = t;
              {
                ATerm e_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_37)), not_null(z_36));
                {
                  e_37 = t;
                  if(((d_37 != NULL) && (d_37 != e_37)))
                    _fail(e_37);
                  else
                    d_37 = e_37;
                }
                t = not_null(d_37);
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
  ATerm s_37 = NULL;
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_37 = NULL;
      t = term_g_23;
      {
        t = get_config_0(t);
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
      }
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm r_4 (ATerm t)
        {
          ATerm t_4 (ATerm t)
          {
            ATerm y_37 = NULL;
            y_37 = t;
            if(((s_37 != NULL) && (s_37 != y_37)))
              _fail(y_37);
            else
              s_37 = y_37;
            return(t);
          }
          t = Program_1(t, t_4);
          return(t);
        }
        t = option_defined_1(t, r_4);
      }
    }
  {
    ATerm a_5 (ATerm t)
    {
      ATerm b_5 (ATerm t)
      {
        t = not_null(s_37);
        return(t);
      }
      t = short_description_1(t, b_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_5);
    {
      t = term_h_24;
      {
        t = echo_0(t);
        {
          t = term_o_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_5 (ATerm t)
                {
                  ATerm z_37 = NULL;
                  ATerm h_38 = NULL;
                  h_38 = t;
                  if(((z_37 != NULL) && (z_37 != h_38)))
                    _fail(h_38);
                  else
                    z_37 = h_38;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), term_p_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_5);
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm i_38 = NULL;
                    ATerm k_38 = NULL;
                    ATerm e_5 (ATerm t)
                    {
                      t = not_null(s_37);
                      return(t);
                    }
                    t = long_description_1(t, e_5);
                    {
                      k_38 = t;
                      if(((i_38 != NULL) && (i_38 != k_38)))
                        _fail(k_38);
                      else
                        i_38 = k_38;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_38)), term_u_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_5);
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
  ATerm v_24;
  v_24 = t;
  {
    ATerm q_38 = NULL;
    ATerm r_38 = NULL;
    r_38 = t;
    if(((q_38 != NULL) && (q_38 != r_38)))
      _fail(r_38);
    else
      q_38 = r_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATempty, not_null(q_38)));
      t = printnl_0(t);
    }
  }
  t = v_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm y_24;
  y_24 = t;
  {
    t = n_59(t);
    t = debug_0(t);
  }
  t = y_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm y_38 = NULL,z_38 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_Undefined_1))
    {
      z_38 = ATgetArgument(y_38, 0);
      {
        ATerm c_39 = NULL,e_39 = NULL;
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(y_38));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
        {
          t = not_null(z_38);
          {
            ATerm h_39 = NULL;
            t = b_57(t);
            {
              e_39 = t;
              {
                ATerm i_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_39)), not_null(c_39));
                {
                  i_39 = t;
                  if(((h_39 != NULL) && (h_39 != i_39)))
                    _fail(i_39);
                  else
                    h_39 = i_39;
                }
                t = not_null(h_39);
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
ATerm fetch_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm u_39 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_64, _id);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = Cons_2(t, _id, u_39);
      }
    return(t);
  }
  t = u_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_76 (ATerm))
{
  t = fetch_1(t, h_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  a_40 :
  if(match_cons(b_40, sym_Help_0))
    {
      ATerm d_40 = NULL,f_40 = NULL;
      ATerm b_25;
      b_25 = t;
      {
        ATerm e_40 = NULL;
        t = SSLgetAnnotations(not_null(b_40));
        {
          e_40 = t;
          if(((d_40 != NULL) && (d_40 != e_40)))
            _fail(e_40);
          else
            d_40 = e_40;
        }
      }
      t = b_25;
      {
        ATerm g_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_40));
        {
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
        }
        t = not_null(f_40);
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
  ATerm r_40 = NULL;
  r_40 = t;
  t = SSL_implode_string(not_null(r_40));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = c_25;
      {
        ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
        b_41 = t;
        a_41 :
        if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
          {
            c_41 = ATgetFirst((ATermList) b_41);
            d_41 = (ATerm) ATgetNext((ATermList) b_41);
            {
              t = not_null(c_41);
              {
                ATerm j_5 (ATerm t)
                {
                  t = not_null(d_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_5);
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
  ATerm r_41 = NULL;
  ATerm t_41 = NULL;
  r_41 = t;
  {
    ATerm u_41 = NULL;
    ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
    t = not_null(r_41);
    {
      u_41 = t;
      {
        t = SSL_explode_term(not_null(u_41));
        {
          w_41 = t;
          p_41 :
          if(match_cons(w_41, sym__2))
            {
              x_41 = ATgetArgument(w_41, 0);
              y_41 = ATgetArgument(w_41, 1);
              q_41 :
              if(match_string(x_41, ""))
                {
                  if(((t_41 != NULL) && (t_41 != y_41)))
                    _fail(y_41);
                  else
                    t_41 = y_41;
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
      t = not_null(t_41);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm c_42 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_42);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          t = Nil_0(t);
          t = j_64(t);
        }
      }
    return(t);
  }
  t = c_42(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym__2))
    {
      g_42 = ATgetArgument(f_42, 0);
      h_42 = ATgetArgument(f_42, 1);
      {
        t = not_null(g_42);
        {
          ATerm k_5 (ATerm t)
          {
            t = not_null(h_42);
            return(t);
          }
          t = at_end_1(t, k_5);
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
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_42 = NULL;
  m_42 = t;
  t = SSL_explode_string(not_null(m_42));
  return(t);
}
ATerm _2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        ATerm b_43 = NULL,d_43 = NULL;
        ATerm c_43 = NULL;
        t = SSLgetAnnotations(not_null(v_42));
        {
          c_43 = t;
          if(((b_43 != NULL) && (b_43 != c_43)))
            _fail(c_43);
          else
            b_43 = c_43;
        }
        {
          t = not_null(w_42);
          {
            ATerm f_43 = NULL;
            t = y_50(t);
            {
              d_43 = t;
              {
                t = not_null(x_42);
                {
                  ATerm h_43 = NULL;
                  t = z_50(t);
                  {
                    f_43 = t;
                    {
                      ATerm i_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_43), not_null(f_43)), not_null(b_43));
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
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
  q_43 = t;
  p_43 :
  if(match_cons(q_43, sym__2))
    {
      r_43 = ATgetArgument(q_43, 0);
      s_43 = ATgetArgument(q_43, 1);
      {
        ATerm s_25;
        s_25 = t;
        t = SSL_printnl(not_null(r_43), not_null(s_43));
        t = s_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm t_25;
  t_25 = t;
  {
    ATerm y_43 = NULL,a_44 = NULL;
    ATerm u_25;
    u_25 = t;
    {
      ATerm z_43 = NULL;
      t = m_59(t);
      {
        z_43 = t;
        if(((y_43 != NULL) && (y_43 != z_43)))
          _fail(z_43);
        else
          y_43 = z_43;
      }
    }
    t = u_25;
    {
      ATerm b_44 = NULL;
      b_44 = t;
      if(((a_44 != NULL) && (a_44 != b_44)))
        _fail(b_44);
      else
        a_44 = b_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_44)), not_null(y_43)));
        t = printnl_0(t);
      }
    }
  }
  t = t_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm v_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = v_25;
        t = Cons_2(t, u_63, e_44);
      }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_44 = NULL;
  g_44 = t;
  t = SSL_is_string(not_null(g_44));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_5);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = d_26;
            {
              ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
              p_44 = t;
              o_44 :
              if(match_cons(p_44, sym_Path_1))
                {
                  q_44 = ATgetArgument(p_44, 0);
                  t = not_null(q_44);
                }
              else
                {
                  if(match_cons(p_44, sym_Var_1))
                    {
                      q_44 = ATgetArgument(p_44, 0);
                      {
                        t = not_null(q_44);
                        {
                          ATerm k_26 = t;
                          int m_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm m_5 (ATerm t)
                                {
                                  t = term_n_26;
                                  return(t);
                                }
                                t = debug_1(t, m_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_44, sym_Prefix_2))
                        {
                          q_44 = ATgetArgument(p_44, 0);
                          r_44 = ATgetArgument(p_44, 1);
                          {
                            ATerm w_44 = NULL,y_44 = NULL;
                            ATerm o_26;
                            o_26 = t;
                            {
                              ATerm x_44 = NULL;
                              t = not_null(q_44);
                              {
                                t = eval_config_0(t);
                                {
                                  x_44 = t;
                                  if(((w_44 != NULL) && (w_44 != x_44)))
                                    _fail(x_44);
                                  else
                                    w_44 = x_44;
                                }
                              }
                            }
                            t = o_26;
                            {
                              ATerm z_44 = NULL;
                              t = not_null(r_44);
                              {
                                t = eval_config_0(t);
                                {
                                  z_44 = t;
                                  if(((y_44 != NULL) && (y_44 != z_44)))
                                    _fail(z_44);
                                  else
                                    y_44 = z_44;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(y_44));
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
  ATerm h_45 = NULL;
  h_45 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_19, not_null(h_45));
    {
      t = table_get_0(t);
      {
        ATerm n_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_26;
            p_26 = t;
            {
              ATerm j_45 = NULL;
              ATerm k_45 = NULL;
              k_45 = t;
              if(((j_45 != NULL) && (j_45 != k_45)))
                _fail(k_45);
              else
                j_45 = k_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_19, not_null(h_45), not_null(j_45));
                t = table_put_0(t);
              }
            }
            t = p_26;
          }
          return(t);
        }
        t = try_1(t, n_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm q_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_62(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = q_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  o_45 :
  if(match_cons(p_45, sym__2))
    {
      q_45 = ATgetArgument(p_45, 0);
      r_45 = ATgetArgument(p_45, 1);
      t = SSL_table_get(not_null(q_45), not_null(r_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  y_45 = t;
  x_45 :
  if(match_cons(y_45, sym__3))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      b_46 = ATgetArgument(y_45, 2);
      {
        ATerm u_26;
        u_26 = t;
        {
          ATerm j_46 = NULL;
          ATerm k_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(a_46));
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_26);
              }
            else
              {
                t = v_26;
                t = (ATerm) ATempty;
              }
            {
              k_46 = t;
              if(((j_46 != NULL) && (j_46 != k_46)))
                _fail(k_46);
              else
                j_46 = k_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_45), not_null(a_46), (ATerm) ATinsert(CheckATermList(not_null(j_46)), not_null(b_46)));
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
ATerm register_usage_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm u_46 = NULL;
  ATerm v_46 = NULL;
  t = term_x_6;
  {
    t = m_77(t);
    {
      v_46 = t;
      if(((u_46 != NULL) && (u_46 != v_46)))
        _fail(v_46);
      else
        u_46 = v_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, not_null(u_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_string(b_47, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
        {
          c_47 = ATgetFirst((ATermList) b_47);
          d_47 = (ATerm) ATgetNext((ATermList) b_47);
          {
            ATerm g_47 = NULL;
            ATerm b_27;
            b_27 = t;
            {
              t = not_null(c_47);
              t = a_0(t);
            }
            t = b_27;
            {
              ATerm h_47 = NULL;
              t = term_x_6;
              {
                t = c_0(t);
                {
                  h_47 = t;
                  if(((g_47 != NULL) && (g_47 != h_47)))
                    _fail(h_47);
                  else
                    g_47 = h_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_47)), not_null(g_47));
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
  ATerm p_5 (ATerm t)
  {
    ATerm m_47 = NULL;
    m_47 = t;
    l_47 :
    if(!(match_string(m_47, "--help")))
      {
        if(!(match_string(m_47, "-h")))
          {
            if(!(match_string(m_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_f_27;
    {
      t = set_config_0(t);
      t = term_g_27;
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_j_27;
    return(t);
  }
  t = Option_3(t, p_5, s_5, t_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  o_47 :
  if(((ATgetType(p_47) == AT_LIST) && !(ATisEmpty(p_47))))
    {
      q_47 = ATgetFirst((ATermList) p_47);
      r_47 = (ATerm) ATgetNext((ATermList) p_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  a_48 :
  if(((ATgetType(b_48) == AT_LIST) && !(ATisEmpty(b_48))))
    {
      c_48 = ATgetFirst((ATermList) b_48);
      d_48 = (ATerm) ATgetNext((ATermList) b_48);
      {
        ATerm h_48 = NULL,j_48 = NULL;
        ATerm i_48 = NULL;
        t = SSLgetAnnotations(not_null(b_48));
        {
          i_48 = t;
          if(((h_48 != NULL) && (h_48 != i_48)))
            _fail(i_48);
          else
            h_48 = i_48;
        }
        {
          t = not_null(c_48);
          {
            ATerm l_48 = NULL;
            t = h_52(t);
            {
              j_48 = t;
              {
                t = not_null(d_48);
                {
                  ATerm n_48 = NULL;
                  t = i_52(t);
                  {
                    l_48 = t;
                    {
                      ATerm o_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_48)), not_null(j_48)), not_null(h_48));
                      {
                        o_48 = t;
                        if(((n_48 != NULL) && (n_48 != o_48)))
                          _fail(o_48);
                        else
                          n_48 = o_48;
                      }
                      t = not_null(n_48);
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
  ATerm f_49 = NULL;
  f_49 = t;
  x_48 :
  if(((ATgetType(f_49) == AT_LIST) && ATisEmpty(f_49)))
    {
      {
        ATerm h_49 = NULL,t_49 = NULL;
        ATerm k_27;
        k_27 = t;
        {
          ATerm i_49 = NULL;
          t = SSLgetAnnotations(not_null(f_49));
          {
            i_49 = t;
            if(((h_49 != NULL) && (h_49 != i_49)))
              _fail(i_49);
            else
              h_49 = i_49;
          }
        }
        t = k_27;
        {
          ATerm u_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_49));
          {
            u_49 = t;
            if(((t_49 != NULL) && (t_49 != u_49)))
              _fail(u_49);
            else
              t_49 = u_49;
          }
          t = not_null(t_49);
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
  ATerm g_50 = NULL,h_50 = NULL,l_50 = NULL;
  g_50 = t;
  f_50 :
  if(match_cons(g_50, sym__2))
    {
      h_50 = ATgetArgument(g_50, 0);
      l_50 = ATgetArgument(g_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_19, not_null(h_50), not_null(l_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm l_27;
  l_27 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = term_m_27;
      t = k_77(t);
      return(t);
    }
    t = try_1(t, u_5);
  }
  t = l_27;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm b_51 = NULL;
      ATerm n_27;
      n_27 = t;
      {
        ATerm x_50 = NULL;
        ATerm a_51 = NULL;
        a_51 = t;
        if(((x_50 != NULL) && (x_50 != a_51)))
          _fail(a_51);
        else
          x_50 = a_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(x_50));
          t = set_config_0(t);
        }
      }
      t = n_27;
      {
        ATerm c_51 = NULL;
        c_51 = t;
        if(((b_51 != NULL) && (b_51 != c_51)))
          _fail(c_51);
        else
          b_51 = c_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_51));
      }
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      ATerm o_27 = t;
      int w_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              {
                t = k_77(t);
                t = Cons_2(t, _id, x_5);
              }
            }
          ;
          LocalPopChoice(w_27);
        }
      else
        {
          t = o_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_5, x_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  ATerm b_28;
  b_28 = t;
  {
    ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
    l_51 = t;
    h_51 :
    if(match_cons(l_51, sym__3))
      {
        m_51 = ATgetArgument(l_51, 0);
        n_51 = ATgetArgument(l_51, 1);
        o_51 = ATgetArgument(l_51, 2);
        {
          if(((i_51 != NULL) && (i_51 != m_51)))
            _fail(m_51);
          else
            i_51 = m_51;
          {
            if(((j_51 != NULL) && (j_51 != n_51)))
              _fail(n_51);
            else
              j_51 = n_51;
            {
              if(((k_51 != NULL) && (k_51 != o_51)))
                _fail(o_51);
              else
                k_51 = o_51;
              t = SSL_table_put(not_null(i_51), not_null(j_51), not_null(k_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm r_51 = NULL;
  ATerm c_28;
  c_28 = t;
  {
    t = term_d_28;
    t = table_put_0(t);
  }
  t = c_28;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm h_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_77(t);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = h_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, y_5);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm m_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_28;
            p_28 = t;
            {
              ATerm s_28 = t;
              int t_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_27;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = s_28;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = p_28;
            {
              t = system_usage_0(t);
              {
                t = term_h_20;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = m_28;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm s_51 = NULL;
                  s_51 = t;
                  if(((r_51 != NULL) && (r_51 != s_51)))
                    _fail(s_51);
                  else
                    r_51 = s_51;
                  return(t);
                }
                t = Undefined_1(t, f_6);
                return(t);
              }
              t = option_defined_1(t, e_6);
              {
                ATerm g_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_51)), term_c_29);
                  return(t);
                }
                t = say_1(t, g_6);
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
      t = try_1(t, d_6);
      {
        ATerm d_29;
        d_29 = t;
        {
          t = term_m_24;
          t = table_destroy_0(t);
        }
        t = d_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm l_58 (ATerm))
{
  t = parse_options_1(t, i_58);
  {
    t = store_options_0(t);
    {
      t = k_58(t);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_58);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm m_29 = t;
              int n_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_58(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_29);
                }
              else
                {
                  t = m_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm))
{
  t = option_wrap_4(t, m_58, default_usage_0, _id, n_58);
  return(t);
}
ATerm io_abox2latex_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    t = xtc_io_1(t, abox2latex_0);
    return(t);
  }
  t = option_wrap_2(t, abox2latex_options_0, h_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2latex_0(t);
  return(t);
}
