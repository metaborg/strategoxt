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
ATerm term_m_29;
ATerm term_l_28;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_f_26;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_p_18;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_p_14;
ATerm term_i_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_n_11;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_l_5;
void init_constant_terms (void)
{
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% \n", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% This file is generated automatically on `date +%c` by \n", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("%    abox2latex (C) 2001 Merijn de Jonge (mdejonge@cwi.nl) \n", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% Tokens from the BOX term are formatted using the LaTeX macros  \n", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% defined in the table(s):  \n", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% `abs $LATEX_TABLES | fmt -75 | sed 's/^/%    /g'` \n", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("% To use this file add: \n", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\usepackage{boxenv} to your documents preamble \n", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% and  \n", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%    \\input{<this_file>}  \n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% to your LaTeX document. \n", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("% If you don't have boxenv.sty already, generate it with:: \n", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("%    gen-latex-boxstyle -o boxenv.sty \n", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--latex-tables", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("->", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\rightarrow}", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\/", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\vee}", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/\\", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\wedge}", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("==", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{\\equiv}", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("++", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\\ensuremath{+\\kern-.4em+}", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free syntax", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("context-free~syntax", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-w", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_j_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_s_11);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-latex", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Test", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_l_6, term_i_14);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_l_5);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_l_5);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-t file   Table containing box to latex macro mappings", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_e_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_l_5);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__3, term_d_24, term_e_24, (ATerm) ATempty);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_0 (ATerm);
ATerm xtc_close_fd_0 (ATerm);
ATerm fdcopy_0 (ATerm);
ATerm finally_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm File_as_fd_1 (ATerm, ATerm i_85 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm a_76 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_84 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm j_84 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm l_84 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm union_1 (ATerm, ATerm m_69 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_74 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm z_85 (ATerm));
ATerm assert_1 (ATerm, ATerm v_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_59 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm m_57 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm));
ATerm abox2latex_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_85 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_85 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm crush_2 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_57 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_77 (ATerm));
ATerm Program_1 (ATerm, ATerm p_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_59 (ATerm));
ATerm Undefined_1 (ATerm, ATerm q_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm o_50 (ATerm), ATerm p_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_59 (ATerm));
ATerm map_1 (ATerm, ATerm p_63 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_57 (ATerm), ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm io_abox2latex_0 (ATerm);
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
    ATerm y_4 = t;
    int z_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5;
            j_5 = t;
            {
              ATerm t_2 = NULL,y_2 = NULL;
              ATerm k_5;
              k_5 = t;
              {
                ATerm u_2 = NULL;
                u_2 = t;
                if(((t_2 != NULL) && (t_2 != u_2)))
                  _fail(u_2);
                else
                  t_2 = u_2;
              }
              t = k_5;
              {
                ATerm z_2 = NULL;
                t = term_l_5;
                {
                  t = STDIN__FILENO_0(t);
                  {
                    z_2 = t;
                    if(((y_2 != NULL) && (y_2 != z_2)))
                      _fail(z_2);
                    else
                      y_2 = z_2;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_2), not_null(y_2));
                  t = eq_0(t);
                }
              }
            }
            t = j_5;
            LocalPopChoice(i_5);
          }
        else
          {
            t = b_5;
            {
              ATerm m_5 = t;
              int r_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_5;
                  s_5 = t;
                  {
                    ATerm a_3 = NULL,d_3 = NULL;
                    ATerm t_5;
                    t_5 = t;
                    {
                      ATerm c_3 = NULL;
                      c_3 = t;
                      if(((a_3 != NULL) && (a_3 != c_3)))
                        _fail(c_3);
                      else
                        a_3 = c_3;
                    }
                    t = t_5;
                    {
                      ATerm e_3 = NULL;
                      t = term_l_5;
                      {
                        t = STDOUT__FILENO_0(t);
                        {
                          e_3 = t;
                          if(((d_3 != NULL) && (d_3 != e_3)))
                            _fail(e_3);
                          else
                            d_3 = e_3;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), not_null(d_3));
                        t = eq_0(t);
                      }
                    }
                  }
                  t = s_5;
                  LocalPopChoice(r_5);
                }
              else
                {
                  t = m_5;
                  {
                    ATerm u_5;
                    u_5 = t;
                    {
                      ATerm g_3 = NULL,i_3 = NULL;
                      ATerm v_5;
                      v_5 = t;
                      {
                        ATerm h_3 = NULL;
                        h_3 = t;
                        if(((g_3 != NULL) && (g_3 != h_3)))
                          _fail(h_3);
                        else
                          g_3 = h_3;
                      }
                      t = v_5;
                      {
                        ATerm j_3 = NULL;
                        t = term_l_5;
                        {
                          t = STDERR__FILENO_0(t);
                          {
                            j_3 = t;
                            if(((i_3 != NULL) && (i_3 != j_3)))
                              _fail(j_3);
                            else
                              i_3 = j_3;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(i_3));
                          t = eq_0(t);
                        }
                      }
                    }
                    t = u_5;
                  }
                }
            }
          }
        LocalPopChoice(z_4);
      }
    else
      {
        t = y_4;
        t = close_0(t);
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    t = term_l_5;
    return(t);
  }
  t = finally_2(t, b_0, e_0);
  return(t);
}
ATerm fdcopy_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym__2))
    {
      t_3 = ATgetArgument(s_3, 0);
      u_3 = ATgetArgument(s_3, 1);
      t = SSL_fdcopy(not_null(t_3), not_null(u_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm finally_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm x_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_63(t);
      LocalPopChoice(a_6);
      {
        ATerm b_6;
        b_6 = t;
        t = j_63(t);
        t = b_6;
      }
    }
  else
    {
      t = x_5;
      {
        ATerm c_6;
        c_6 = t;
        t = j_63(t);
        t = c_6;
        _fail(t);
      }
    }
  return(t);
}
ATerm File_as_fd_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm z_3 = NULL;
  t = xtc_open_fd_0(t);
  {
    z_3 = t;
    {
      ATerm f_0 (ATerm t)
      {
        ATerm e_6;
        e_6 = t;
        {
          ATerm f_6 = t;
          int g_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(z_3);
              t = xtc_close_fd_0(t);
              LocalPopChoice(g_6);
            }
          else
            {
              t = f_6;
              {
              }
            }
        }
        t = e_6;
        return(t);
      }
      t = finally_2(t, i_85, f_0);
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
  ATerm d_4 = NULL;
  d_4 = t;
  t = SSL_open(not_null(d_4));
  return(t);
}
ATerm xtc_open_fd_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  m_4 = t;
  k_4 :
  if(match_cons(m_4, sym_FILE_1))
    {
      l_4 = ATgetArgument(m_4, 0);
      {
        t = not_null(l_4);
        t = open_0(t);
      }
    }
  else
    {
      if(match_cons(m_4, sym_stdin_0))
        {
          t = term_l_5;
          t = STDIN__FILENO_0(t);
        }
      else
        {
          if(match_cons(m_4, sym_stdout_0))
            {
              t = term_l_5;
              t = STDOUT__FILENO_0(t);
            }
          else
            {
              if(match_cons(m_4, sym_stderr_0))
                {
                  t = term_l_5;
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
  ATerm t_4 = NULL;
  t = new_file_0(t);
  {
    t_4 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), term_l_5);
      {
        ATerm p_0 (ATerm t)
        {
          t = term_l_6;
          return(t);
        }
        t = assert_1(t, p_0);
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_4));
    }
  }
  return(t);
}
ATerm xtc_cat_0 (ATerm t)
{
  ATerm a_5 = NULL;
  ATerm c_5 = NULL,d_5 = NULL;
  a_5 = t;
  {
    ATerm e_5 = NULL;
    ATerm f_5 = NULL;
    t = xtc_new_file_name_0(t);
    {
      e_5 = t;
      {
        if(((c_5 != NULL) && (c_5 != e_5)))
          _fail(e_5);
        else
          c_5 = e_5;
        {
          t = not_null(c_5);
          {
            t = xtc_open_fd_0(t);
            {
              f_5 = t;
              {
                if(((d_5 != NULL) && (d_5 != f_5)))
                  _fail(f_5);
                else
                  d_5 = f_5;
                {
                  t = not_null(a_5);
                  {
                    ATerm q_0 (ATerm t)
                    {
                      ATerm r_0 (ATerm t)
                      {
                        ATerm g_5 = NULL;
                        ATerm h_5 = NULL;
                        h_5 = t;
                        if(((g_5 != NULL) && (g_5 != h_5)))
                          _fail(h_5);
                        else
                          g_5 = h_5;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), not_null(d_5));
                          t = fdcopy_0(t);
                        }
                        return(t);
                      }
                      t = File_as_fd_1(t, r_0);
                      return(t);
                    }
                    t = map_1(t, q_0);
                    {
                      t = not_null(d_5);
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
    t = not_null(c_5);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        ATerm m_6;
        m_6 = t;
        t = SSL_print(not_null(p_5), not_null(q_5));
        t = m_6;
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
  ATerm w_5 = NULL;
  ATerm y_5 = NULL;
  w_5 = t;
  {
    ATerm z_5 = NULL;
    t = xtc_new_file_0(t);
    {
      z_5 = t;
      {
        if(((y_5 != NULL) && (y_5 != z_5)))
          _fail(z_5);
        else
          y_5 = z_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_5), not_null(w_5));
          {
            t = print_0(t);
            {
              t = not_null(y_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_5));
  }
  return(t);
}
ATerm create_header_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), term_i_7), term_h_7), term_n_6), term_g_7), term_f_7), term_e_7), term_d_7), term_x_6), term_n_6), term_w_6), term_v_6), term_u_6), term_n_6), term_p_6), term_n_6), term_o_6), term_n_6);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_int_to_string(not_null(d_6));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym__2))
    {
      j_6 = ATgetArgument(i_6, 0);
      k_6 = ATgetArgument(i_6, 1);
      {
        ATerm j_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_6), not_null(k_6));
            LocalPopChoice(s_7);
          }
        else
          {
            t = j_7;
            t = SSL_subtr(not_null(j_6), not_null(k_6));
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
  ATerm q_6 = NULL;
  ATerm r_6 = NULL,t_6 = NULL;
  ATerm s_6 = NULL;
  t = term_t_7;
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = term_w_7;
      }
    {
      s_6 = t;
      if(((r_6 != NULL) && (r_6 != s_6)))
        _fail(s_6);
      else
        r_6 = s_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), term_w_7);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          t_6 = t;
          if(((q_6 != NULL) && (q_6 != t_6)))
            _fail(t_6);
          else
            q_6 = t_6;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_t_7);
  return(t);
}
ATerm create_table_file_0 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL,c_7 = NULL;
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_7;
      t = get_config_0(t);
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = (ATerm) ATempty;
    }
  {
    t = map_1(t, ReadFromFile_0);
    {
      ATerm a_7 = NULL;
      a_7 = t;
      if(((z_6 != NULL) && (z_6 != a_7)))
        _fail(a_7);
      else
        z_6 = a_7;
      {
        t = (ATerm) ATinsert(CheckATermList(not_null(z_6)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_x_8), term_v_8)), (ATerm) ATinsert(ATinsert(ATempty, term_u_8), term_t_8)), (ATerm) ATinsert(ATinsert(ATempty, term_s_8), term_r_8)), (ATerm) ATinsert(ATinsert(ATempty, term_m_8), term_l_8)), (ATerm) ATinsert(ATinsert(ATempty, term_k_8), term_j_8)), (ATerm) ATinsert(ATinsert(ATempty, term_i_8), term_f_8)));
        {
          t = concat_0(t);
          {
            t = write_to_0(t);
            {
              b_7 = t;
              y_6 :
              if(match_cons(b_7, sym_FILE_1))
                {
                  c_7 = ATgetArgument(b_7, 0);
                  t = not_null(c_7);
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
  ATerm k_7 = NULL,m_7 = NULL;
  ATerm a_9;
  a_9 = t;
  {
    ATerm l_7 = NULL;
    t = term_l_5;
    {
      t = create_table_file_0(t);
      {
        l_7 = t;
        if(((k_7 != NULL) && (k_7 != l_7)))
          _fail(l_7);
        else
          k_7 = l_7;
      }
    }
  }
  t = a_9;
  {
    ATerm n_7 = NULL;
    t = term_l_5;
    {
      t = pass_verbose_0(t);
      {
        n_7 = t;
        if(((m_7 != NULL) && (m_7 != n_7)))
          _fail(n_7);
        else
          m_7 = n_7;
      }
    }
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_7)), not_null(k_7)), term_b_9);
      {
        ATerm c_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,q_7 = NULL;
            ATerm f_9;
            f_9 = t;
            {
              ATerm p_7 = NULL;
              t = term_g_9;
              {
                t = get_config_0(t);
                {
                  p_7 = t;
                  if(((o_7 != NULL) && (o_7 != p_7)))
                    _fail(p_7);
                  else
                    o_7 = p_7;
                }
              }
            }
            t = f_9;
            {
              ATerm r_7 = NULL;
              r_7 = t;
              if(((q_7 != NULL) && (q_7 != r_7)))
                _fail(r_7);
              else
                q_7 = r_7;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_7)), not_null(o_7)), term_l_9);
            }
            LocalPopChoice(e_9);
          }
        else
          {
            t = c_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_stdin_0))
    {
      ATerm d_8 = NULL;
      ATerm e_8 = NULL;
      t = term_m_9;
      {
        t = ReadFromFile_0(t);
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
      }
      t = not_null(d_8);
    }
  else
    {
      if(match_cons(b_8, sym_FILE_1))
        {
          c_8 = ATgetArgument(b_8, 0);
          {
            ATerm g_8 = NULL;
            ATerm h_8 = NULL;
            t = not_null(c_8);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  h_8 = t;
                  if(((g_8 != NULL) && (g_8 != h_8)))
                    _fail(h_8);
                  else
                    g_8 = h_8;
                }
              }
            }
            t = not_null(g_8);
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
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym__2))
    {
      p_8 = ATgetArgument(o_8, 0);
      q_8 = ATgetArgument(o_8, 1);
      t = SSL_WriteToBinaryFile(not_null(p_8), not_null(q_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm w_8 = NULL;
  ATerm y_8 = NULL;
  w_8 = t;
  {
    ATerm z_8 = NULL;
    t = xtc_new_file_0(t);
    {
      z_8 = t;
      {
        if(((y_8 != NULL) && (y_8 != z_8)))
          _fail(z_8);
        else
          y_8 = z_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), not_null(w_8));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(y_8);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, i_86, j_86);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  t = SSL_close_file(not_null(d_9));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      t = SSL_execvp(not_null(j_9), not_null(k_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_waitpid(not_null(p_9));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm z_9 = NULL;
  ATerm b_10 = NULL;
  z_9 = t;
  {
    t = fork_0(t);
    {
      b_10 = t;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 = NULL;
            d_10 = t;
            v_9 :
            if(match_int(d_10, 0))
              {
                t = not_null(z_9);
                t = a_76(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
              t = not_null(b_10);
              {
                t = waitpid_0(t);
                {
                  e_10 = t;
                  x_9 :
                  if(match_cons(e_10, sym_WaitStatus_3))
                    {
                      f_10 = ATgetArgument(e_10, 0);
                      g_10 = ATgetArgument(e_10, 1);
                      h_10 = ATgetArgument(e_10, 2);
                      y_9 :
                      if(match_int(f_10, 0))
                        {
                          t = not_null(z_9);
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym__2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        ATerm s_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(q_10));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, s_0);
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
  ATerm v_10 = NULL;
  v_10 = t;
  t = SSL_table_keys(not_null(v_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm t_0 (ATerm t)
      {
        ATerm d_11 = NULL;
        ATerm f_11 = NULL;
        d_11 = t;
        {
          ATerm g_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(d_11));
          {
            t = table_get_0(t);
            {
              g_11 = t;
              if(((f_11 != NULL) && (f_11 != g_11)))
                _fail(g_11);
              else
                f_11 = g_11;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(f_11));
        }
        return(t);
      }
      t = map_1(t, t_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_84 (ATerm))
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9;
      s_9 = t;
      {
        ATerm l_11 = NULL;
        ATerm m_11 = NULL;
        t = term_t_7;
        {
          t = get_config_0(t);
          {
            m_11 = t;
            if(((l_11 != NULL) && (l_11 != m_11)))
              _fail(m_11);
            else
              l_11 = m_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_t_9);
          t = geq_0(t);
        }
      }
      t = s_9;
      t = k_84(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_9;
  u_9 = t;
  {
    ATerm p_11 = NULL;
    ATerm q_11 = NULL;
    q_11 = t;
    if(((p_11 != NULL) && (p_11 != q_11)))
      _fail(q_11);
    else
      p_11 = q_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, not_null(p_11));
      t = printnl_0(t);
    }
  }
  t = u_9;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm w_11 = NULL;
  ATerm y_11 = NULL,z_11 = NULL;
  w_11 = t;
  {
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_11)));
    {
      t = table_get_0(t);
      {
        a_12 = t;
        u_11 :
        if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
          {
            b_12 = ATgetFirst((ATermList) a_12);
            e_12 = (ATerm) ATgetNext((ATermList) a_12);
            v_11 :
            if(match_cons(b_12, sym__2))
              {
                c_12 = ATgetArgument(b_12, 0);
                d_12 = ATgetArgument(b_12, 1);
                {
                  if(((y_11 != NULL) && (y_11 != c_12)))
                    _fail(c_12);
                  else
                    y_11 = c_12;
                  if(((z_11 != NULL) && (z_11 != d_12)))
                    _fail(d_12);
                  else
                    z_11 = d_12;
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
    t = not_null(z_11);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm q_12 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_12)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
              r_12 = t;
              j_12 :
              if(match_cons(r_12, sym__2))
                {
                  s_12 = ATgetArgument(r_12, 0);
                  t_12 = ATgetArgument(r_12, 1);
                  {
                    if(((n_12 != NULL) && (n_12 != s_12)))
                      _fail(s_12);
                    else
                      n_12 = s_12;
                    if(((q_12 != NULL) && (q_12 != t_12)))
                      _fail(t_12);
                    else
                      q_12 = t_12;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
          }
        }
        t = not_null(q_12);
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
  ATerm c_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_10;
      {
        t = table_get_0(t);
        {
          ATerm v_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, v_0);
        }
      }
      LocalPopChoice(i_10);
    }
  else
    {
      t = c_10;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10;
      r_10 = t;
      {
        ATerm x_12 = NULL;
        ATerm y_12 = NULL;
        t = term_t_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_12), term_s_10);
          t = geq_0(t);
        }
      }
      t = r_10;
      t = j_84(t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10;
      w_10 = t;
      {
        ATerm b_13 = NULL;
        ATerm c_13 = NULL;
        t = term_t_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), term_x_10);
          t = geq_0(t);
        }
      }
      t = w_10;
      t = l_84(t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
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
ATerm HdMember_p__2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
    {
      p_13 = ATgetFirst((ATermList) o_13);
      q_13 = (ATerm) ATgetNext((ATermList) o_13);
      {
        t = r_69(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm t_13 = NULL;
            t_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(t_13));
              t = q_69(t);
            }
            return(t);
          }
          t = fetch_1(t, w_0);
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
ATerm union_1 (ATerm t, ATerm m_69 (ATerm))
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
            ATerm y_10 = t;
            int z_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_14);
                LocalPopChoice(z_10);
              }
            else
              {
                t = y_10;
                {
                  ATerm a_11 = t;
                  int c_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_0 (ATerm t)
                      {
                        t = not_null(b_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_69, x_0);
                      t = f_14(t);
                      LocalPopChoice(c_11);
                    }
                  else
                    {
                      t = a_11;
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
        ATerm e_11;
        e_11 = t;
        {
          ATerm r_14 = NULL;
          ATerm s_14 = NULL,u_14 = NULL;
          ATerm t_14 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), not_null(m_14));
          {
            ATerm h_11 = t;
            int i_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_11);
              }
            else
              {
                t = h_11;
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
              t = union_1(t, eq_0);
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
            t = table_put_0(t);
          }
        }
        t = e_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_74 (ATerm))
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
          ATerm y_0 (ATerm t)
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
                  t = y_74(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, y_0);
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
  ATerm j_11 = t;
  int k_11 = stack_ptr;
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
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_n_11;
          return(t);
        }
        t = debug_1(t, z_0);
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
    ATerm o_11 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_15)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_11;
      }
    {
      ATerm r_11;
      r_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_s_11, (ATerm) ATinsert(ATempty, not_null(u_15)));
        t = table_put_0(t);
      }
      t = r_11;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            t = term_t_11;
            return(t);
          }
          t = debug_1(t, b_1);
          return(t);
        }
        t = if_verbose4_1(t, a_1);
        {
          ATerm x_11 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(f_12);
            }
          else
            {
              t = x_11;
              t = (ATerm) ATempty;
            }
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = term_g_12;
                return(t);
              }
              t = say_1(t, d_1);
              return(t);
            }
            t = if_verbose6_1(t, c_1);
            {
              ATerm x_15 = NULL;
              x_15 = t;
              if(((w_15 != NULL) && (w_15 != x_15)))
                _fail(x_15);
              else
                w_15 = x_15;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(w_15));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm e_1 (ATerm t)
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = term_h_12;
                        return(t);
                      }
                      t = say_1(t, f_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, e_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_a_10, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_15)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm g_1 (ATerm t)
                          {
                            ATerm h_1 (ATerm t)
                            {
                              t = term_g_12;
                              return(t);
                            }
                            t = say_1(t, h_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, g_1);
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
  ATerm i_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_12;
      t = get_config_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = i_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_12;
            t = getenv_0(t);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = term_z_12;
      return(t);
    }
    t = debug_1(t, j_1);
    return(t);
  }
  t = if_verbose5_1(t, i_1);
  {
    ATerm a_13;
    a_13 = t;
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_13;
          t = table_get_0(t);
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = a_13;
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = term_k_13;
          return(t);
        }
        t = debug_1(t, l_1);
        return(t);
      }
      t = if_verbose5_1(t, k_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_r_13;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
      {
        t = xtc_load_0(t);
        {
          ATerm s_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(u_13);
            }
          else
            {
              t = s_13;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = term_r_13;
                return(t);
              }
              t = debug_1(t, p_1);
              return(t);
            }
            t = if_verbose5_1(t, o_1);
          }
        }
      }
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm f_16 = NULL;
        ATerm g_16 = NULL;
        g_16 = t;
        if(((f_16 != NULL) && (f_16 != g_16)))
          _fail(g_16);
        else
          f_16 = g_16;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_13), not_null(f_16)), term_v_13);
          {
            t = error_0(t);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_a_10;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = term_x_13;
                      return(t);
                    }
                    t = debug_1(t, r_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, q_1);
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
ATerm xtc_command_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm k_16 = NULL;
  ATerm c_14;
  c_14 = t;
  {
    ATerm l_16 = NULL;
    t = z_85(t);
    {
      t = xtc_find_0(t);
      {
        l_16 = t;
        if(((k_16 != NULL) && (k_16 != l_16)))
          _fail(l_16);
        else
          k_16 = l_16;
      }
    }
  }
  t = c_14;
  {
    ATerm d_14;
    d_14 = t;
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
    t = d_14;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_74 (ATerm))
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
        ATerm e_14;
        e_14 = t;
        {
          ATerm d_17 = NULL;
          ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
          t = v_74(t);
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
                    ATerm g_14 = t;
                    int h_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), term_i_14);
                        t = table_get_0(t);
                        LocalPopChoice(h_14);
                      }
                    else
                      {
                        t = g_14;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_17), term_i_14, (ATerm) ATinsert(CheckATermList(not_null(c_17)), (ATerm) ATinsert(CheckATermList(not_null(b_17)), not_null(w_16))));
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
        t = e_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm o_14;
  o_14 = t;
  {
    t = j_59(t);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_p_14;
        return(t);
      }
      t = debug_1(t, s_1);
    }
  }
  t = o_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  ATerm q_14 = t;
  int v_14 = stack_ptr;
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
      LocalPopChoice(v_14);
      t = SSL_open_file(not_null(p_17), not_null(o_17));
    }
  else
    {
      t = q_14;
      {
        ATerm t_17 = NULL;
        ATerm u_17 = NULL;
        ATerm t_1 (ATerm t)
        {
          t = term_w_14;
          return(t);
        }
        t = obsolete_1(t, t_1);
        {
          t_17 = t;
          {
            if(((p_17 != NULL) && (p_17 != t_17)))
              _fail(t_17);
            else
              p_17 = t_17;
            {
              ATerm x_14;
              x_14 = t;
              {
                ATerm v_17 = NULL;
                t = term_y_14;
                {
                  v_17 = t;
                  if(((u_17 != NULL) && (u_17 != v_17)))
                    _fail(v_17);
                  else
                    u_17 = v_17;
                }
              }
              t = x_14;
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
    ATerm z_14;
    z_14 = t;
    {
      ATerm e_18 = NULL;
      t = term_f_15;
      {
        e_18 = t;
        if(((d_18 != NULL) && (d_18 != e_18)))
          _fail(e_18);
        else
          d_18 = e_18;
      }
    }
    t = z_14;
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
  t = term_l_5;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_18), term_g_15);
    {
      t = conc_strings_0(t);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
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
  ATerm n_18 = NULL;
  t = new_file_0(t);
  {
    n_18 = t;
    {
      ATerm m_15;
      m_15 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_y_14);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_l_5);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_l_6;
                return(t);
              }
              t = assert_1(t, u_1);
            }
          }
        }
      }
      t = m_15;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm y_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_stdin_0))
    {
      ATerm b_19 = NULL;
      ATerm c_19 = NULL;
      ATerm h_19 = NULL;
      t = xtc_new_file_0(t);
      {
        c_19 = t;
        {
          if(((b_19 != NULL) && (b_19 != c_19)))
            _fail(c_19);
          else
            b_19 = c_19;
          {
            ATerm m_19 = NULL;
            t = o_0(t);
            {
              m_19 = t;
              if(((h_19 != NULL) && (h_19 != m_19)))
                _fail(m_19);
              else
                h_19 = m_19;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_19)), term_n_15));
              {
                ATerm o_15 = t;
                int r_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(r_15);
                  }
                else
                  {
                    t = o_15;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(b_19);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_19));
    }
  else
    {
      if(match_cons(y_18, sym_FILE_1))
        {
          a_19 = ATgetArgument(y_18, 0);
          {
            ATerm o_19 = NULL;
            ATerm p_19 = NULL;
            t = not_null(a_19);
            {
              ATerm t_19 = NULL;
              t = xtc_new_file_0(t);
              {
                p_19 = t;
                {
                  if(((o_19 != NULL) && (o_19 != p_19)))
                    _fail(p_19);
                  else
                    o_19 = p_19;
                  {
                    ATerm u_19 = NULL;
                    t = o_0(t);
                    {
                      u_19 = t;
                      if(((t_19 != NULL) && (t_19 != u_19)))
                        _fail(u_19);
                      else
                        t_19 = u_19;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_19)), term_n_15), not_null(a_19)), term_s_15));
                      {
                        ATerm t_15 = t;
                        int v_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(v_15);
                          }
                        else
                          {
                            t = t_15;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(o_19);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_19));
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
      ATerm y_15;
      y_15 = t;
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
      t = y_15;
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
ATerm FILE_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_FILE_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      {
        ATerm d_21 = NULL,i_21 = NULL;
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
            ATerm l_21 = NULL;
            t = m_57(t);
            {
              i_21 = t;
              {
                ATerm m_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(i_21)), not_null(d_21));
                {
                  m_21 = t;
                  if(((l_21 != NULL) && (l_21 != m_21)))
                    _fail(m_21);
                  else
                    l_21 = m_21;
                }
                t = not_null(l_21);
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
ATerm xtc_transform_2 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm))
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_16 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(d_16);
        }
      else
        {
          t = c_16;
          t = stdin_0(t);
        }
      LocalPopChoice(a_16);
      t = xtc_transform_file_2(t, b_86, c_86);
    }
  else
    {
      t = z_15;
      t = xtc_transform_term_2(t, b_86, c_86);
    }
  return(t);
}
ATerm abox2latex_0 (ATerm t)
{
  ATerm t_21 = NULL,v_21 = NULL;
  ATerm e_16;
  e_16 = t;
  {
    ATerm u_21 = NULL;
    ATerm v_1 (ATerm t)
    {
      t = term_h_16;
      return(t);
    }
    t = xtc_transform_2(t, v_1, create_abox2latex_args_0);
    {
      u_21 = t;
      if(((t_21 != NULL) && (t_21 != u_21)))
        _fail(u_21);
      else
        t_21 = u_21;
    }
  }
  t = e_16;
  {
    ATerm w_21 = NULL;
    t = term_i_16;
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
      ATerm j_16;
      j_16 = t;
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
      t = j_16;
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
      ATerm o_16;
      o_16 = t;
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
      t = o_16;
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
        ATerm p_16 = t;
        int q_16 = stack_ptr;
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
                  ATerm r_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = r_16;
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
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
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
                        ATerm h_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm i_17 = t;
                            int j_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(j_17);
                              }
                            else
                              {
                                t = i_17;
                                {
                                  ATerm k_17 = t;
                                  int m_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(m_17);
                                    }
                                  else
                                    {
                                      t = k_17;
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
                            t = h_17;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(v_23));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_23));
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
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
        ATerm n_17;
        n_17 = t;
        {
          ATerm w_24 = NULL;
          ATerm x_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(t_24));
          {
            ATerm w_17 = t;
            int x_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_17);
              }
            else
              {
                t = w_17;
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
        t = n_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  ATerm y_17;
  y_17 = t;
  {
    ATerm h_25 = NULL;
    ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
    t = s_74(t);
    {
      h_25 = t;
      {
        if(((g_25 != NULL) && (g_25 != h_25)))
          _fail(h_25);
        else
          g_25 = h_25;
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_i_14);
              t = table_get_0(t);
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_25), term_i_14, not_null(e_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_25);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm l_25 = NULL;
                              l_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(l_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_1);
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
  t = y_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_remove(not_null(r_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm c_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_63(t);
      t = h_63(t);
      LocalPopChoice(f_18);
    }
  else
    {
      t = c_18;
      {
        t = h_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm x_25 = NULL;
  ATerm g_18;
  g_18 = t;
  {
    ATerm y_25 = NULL;
    ATerm z_25 = NULL;
    t = r_74(t);
    {
      y_25 = t;
      {
        if(((x_25 != NULL) && (x_25 != y_25)))
          _fail(y_25);
        else
          x_25 = y_25;
        {
          ATerm a_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), term_i_14);
          {
            ATerm h_18 = t;
            int k_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_18);
              }
            else
              {
                t = h_18;
                t = (ATerm) ATempty;
              }
            {
              a_26 = t;
              if(((z_25 != NULL) && (z_25 != a_26)))
                _fail(a_26);
              else
                z_25 = a_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_25), term_i_14, (ATerm) ATinsert(CheckATermList(not_null(z_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_18;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = begin_scope_1(t, x_1);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm l_18;
      l_18 = t;
      {
        ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
        ATerm m_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_18;
            t = table_get_0(t);
            LocalPopChoice(o_18);
          }
        else
          {
            t = m_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          m_26 = t;
          j_26 :
          if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
            {
              n_26 = ATgetFirst((ATermList) m_26);
              o_26 = (ATerm) ATgetNext((ATermList) m_26);
              {
                if(((l_26 != NULL) && (l_26 != n_26)))
                  _fail(n_26);
                else
                  l_26 = n_26;
                {
                  if(((k_26 != NULL) && (k_26 != o_26)))
                    _fail(o_26);
                  else
                    k_26 = o_26;
                  {
                    t = not_null(l_26);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        ATerm q_18 = t;
                        int r_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(r_18);
                          }
                        else
                          {
                            t = q_18;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, z_1);
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
      t = l_18;
      {
        ATerm a_2 (ATerm t)
        {
          t = term_l_6;
          return(t);
        }
        t = end_scope_1(t, a_2);
      }
      return(t);
    }
    t = restore_always_2(t, p_85, y_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        t = term_s_15;
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
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = term_m_9;
      }
    {
      t = q_85(t);
      {
        ATerm c_2 (ATerm t)
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_15;
              t = get_config_0(t);
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = term_w_18;
            }
          return(t);
        }
        t = copy_to_1(t, c_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, b_2);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  t = ArgOption_3(t, y_76, z_76, d_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm f_27 = NULL;
        ATerm g_27 = NULL,i_27 = NULL;
        ATerm h_27 = NULL;
        t = not_null(b_27);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = (ATerm) ATempty;
            }
          {
            h_27 = t;
            if(((g_27 != NULL) && (g_27 != h_27)))
              _fail(h_27);
            else
              g_27 = h_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_27), not_null(g_27));
          {
            ATerm f_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(g_19);
              }
            else
              {
                t = f_19;
                t = conc_more_lists_0(t);
              }
            {
              i_27 = t;
              if(((f_27 != NULL) && (f_27 != i_27)))
                _fail(i_27);
              else
                f_27 = i_27;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_19, not_null(b_27), not_null(f_27));
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
                ATerm j_19;
                j_19 = t;
                {
                  t = not_null(s_27);
                  t = j_0(t);
                }
                t = j_19;
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
  ATerm e_2 (ATerm t)
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
  ATerm f_2 (ATerm t)
  {
    t = term_l_19;
    t = set_config_0(t);
    t = term_n_19;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  t = Option_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
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
  ATerm i_2 (ATerm t)
  {
    ATerm r_19;
    r_19 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_s_19, not_null(j_28));
        t = set_config_0(t);
      }
    }
    t = r_19;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_v_19;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
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
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
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
      ATerm l_2 (ATerm t)
      {
        t = term_z_19;
        t = set_config_0(t);
        t = term_a_20;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_b_20;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
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
            ATerm o_2 (ATerm t)
            {
              ATerm z_28 = NULL;
              ATerm e_20;
              e_20 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(x_28));
                  t = set_config_0(t);
                }
              }
              t = e_20;
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
            ATerm p_2 (ATerm t)
            {
              t = term_h_20;
              return(t);
            }
            t = ArgOption_3(t, n_2, o_2, p_2);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm q_2 (ATerm t)
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
              ATerm r_2 (ATerm t)
              {
                t = term_n_20;
                t = set_config_0(t);
                t = term_o_20;
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_p_20;
                return(t);
              }
              t = Option_3(t, q_2, r_2, s_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
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
  ATerm w_2 (ATerm t)
  {
    ATerm k_29 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm i_29 = NULL;
      ATerm j_29 = NULL;
      j_29 = t;
      if(((i_29 != NULL) && (i_29 != j_29)))
        _fail(j_29);
      else
        i_29 = j_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, not_null(i_29));
        t = set_config_0(t);
      }
    }
    t = u_20;
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
  ATerm x_2 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
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
  ATerm f_3 (ATerm t)
  {
    ATerm u_29 = NULL;
    ATerm w_20;
    w_20 = t;
    {
      ATerm s_29 = NULL;
      ATerm t_29 = NULL;
      t_29 = t;
      if(((s_29 != NULL) && (s_29 != t_29)))
        _fail(t_29);
      else
        s_29 = t_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(s_29));
        t = set_config_0(t);
      }
    }
    t = w_20;
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
  ATerm k_3 (ATerm t)
  {
    t = term_x_20;
    return(t);
  }
  t = ArgOption_3(t, b_3, f_3, k_3);
  return(t);
}
ATerm abox2latex_options_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm h_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  LocalPopChoice(j_21);
                }
              else
                {
                  t = h_21;
                  {
                    ATerm k_21 = t;
                    int n_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_3 (ATerm t)
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
                        ATerm m_3 (ATerm t)
                        {
                          ATerm o_21;
                          o_21 = t;
                          {
                            ATerm d_30 = NULL;
                            ATerm e_30 = NULL;
                            e_30 = t;
                            if(((d_30 != NULL) && (d_30 != e_30)))
                              _fail(e_30);
                            else
                              d_30 = e_30;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATempty, not_null(d_30)));
                              t = extend_config_0(t);
                            }
                          }
                          t = o_21;
                          return(t);
                        }
                        ATerm n_3 (ATerm t)
                        {
                          t = term_p_21;
                          return(t);
                        }
                        t = ArgOption_3(t, l_3, m_3, n_3);
                        LocalPopChoice(n_21);
                      }
                    else
                      {
                        t = k_21;
                        {
                          ATerm o_3 (ATerm t)
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
                          ATerm p_3 (ATerm t)
                          {
                            ATerm g_30 = NULL;
                            ATerm h_30 = NULL;
                            h_30 = t;
                            if(((g_30 != NULL) && (g_30 != h_30)))
                              _fail(h_30);
                            else
                              g_30 = h_30;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(g_30));
                              t = set_config_0(t);
                            }
                            return(t);
                          }
                          t = ArgOption_2(t, o_3, p_3);
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
  ATerm q_21;
  q_21 = t;
  {
    ATerm q_3 (ATerm t)
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
    t = fetch_1(t, q_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_21), not_null(m_30)), term_r_21));
      {
        t = printnl_0(t);
        {
          t = term_w_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, term_x_21));
  {
    t = printnl_0(t);
    {
      t = term_w_7;
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
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_30), not_null(y_30));
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
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
ATerm foldr_2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_70(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
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
                t = foldr_2(t, d_70, e_70);
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
                t = e_70(t);
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
ATerm crush_2 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm))
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
      t = foldr_2(t, b_69, c_69);
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
    ATerm v_3 (ATerm t)
    {
      t = term_y_19;
      return(t);
    }
    t = crush_2(t, v_3, add_0);
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
        ATerm g_22;
        g_22 = t;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_32), not_null(h_32));
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = SSL_gtr(not_null(g_32), not_null(h_32));
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
ATerm geq_0 (ATerm t)
{
  ATerm n_32 = NULL;
  ATerm j_22 = t;
  int m_22 = stack_ptr;
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
      LocalPopChoice(m_22);
    }
  else
    {
      t = j_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22;
      t_22 = t;
      {
        ATerm t_32 = NULL;
        ATerm u_32 = NULL;
        t = term_t_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_32), term_w_7);
          t = geq_0(t);
        }
      }
      t = t_22;
      t = g_84(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm b_33 = NULL,d_33 = NULL;
    ATerm u_22;
    u_22 = t;
    {
      ATerm c_33 = NULL;
      t = run_time_0(t);
      {
        c_33 = t;
        if(((b_33 != NULL) && (b_33 != c_33)))
          _fail(c_33);
        else
          b_33 = c_33;
      }
    }
    t = u_22;
    {
      ATerm e_33 = NULL;
      t = term_v_22;
      {
        t = get_config_0(t);
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), not_null(b_33)), term_w_22), not_null(d_33)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_3);
  {
    t = term_y_19;
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
      ATerm e_23;
      e_23 = t;
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
      t = e_23;
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
ATerm need_help_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_3);
  t = s_57(t);
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
    ATerm j_23;
    j_23 = t;
    {
      t = term_k_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_23, term_l_23, not_null(z_33));
          t = table_put_0(t);
        }
      }
    }
    t = j_23;
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
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_exit(not_null(j_34));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  m_34 :
  if(((ATgetType(p_34) == AT_LIST) && ATisEmpty(p_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
        {
          q_34 = ATgetFirst((ATermList) p_34);
          r_34 = (ATerm) ATgetNext((ATermList) p_34);
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
  ATerm m_23;
  m_23 = t;
  {
    ATerm w_34 = NULL;
    ATerm z_34 = NULL;
    ATerm n_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = n_23;
        {
          ATerm x_34 = NULL;
          ATerm y_34 = NULL;
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
          t = (ATerm) ATinsert(ATempty, not_null(x_34));
        }
      }
    {
      z_34 = t;
      if(((w_34 != NULL) && (w_34 != z_34)))
        _fail(z_34);
      else
        w_34 = z_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_18, not_null(w_34));
      t = printnl_0(t);
    }
  }
  t = m_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  k_35 = t;
  h_35 :
  if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
    {
      i_35 = ATgetFirst((ATermList) k_35);
      j_35 = (ATerm) ATgetNext((ATermList) k_35);
      {
        ATerm p_35 = NULL;
        t = not_null(j_35);
        {
          ATerm u_23;
          u_23 = t;
          {
            ATerm q_35 = NULL,s_35 = NULL,f_36 = NULL;
            ATerm y_23;
            y_23 = t;
            {
              ATerm r_35 = NULL;
              t = i_0(t);
              {
                r_35 = t;
                if(((q_35 != NULL) && (q_35 != r_35)))
                  _fail(r_35);
                else
                  q_35 = r_35;
              }
            }
            t = y_23;
            {
              ATerm e_36 = NULL;
              t = not_null(i_35);
              {
                t = h_0(t);
                {
                  e_36 = t;
                  if(((s_35 != NULL) && (s_35 != e_36)))
                    _fail(e_36);
                  else
                    s_35 = e_36;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_35)), not_null(s_35));
                {
                  f_36 = t;
                  if(((p_35 != NULL) && (p_35 != f_36)))
                    _fail(f_36);
                  else
                    p_35 = f_36;
                }
              }
            }
          }
          t = u_23;
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(p_35);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_35) == AT_LIST) && ATisEmpty(k_35)))
        {
          {
            t = term_l_5;
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
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm v_36 = NULL,w_36 = NULL;
  v_36 = t;
  u_36 :
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
            ATerm i_37 = NULL;
            t = p_56(t);
            {
              b_37 = t;
              {
                ATerm j_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_37)), not_null(z_36));
                {
                  j_37 = t;
                  if(((i_37 != NULL) && (i_37 != j_37)))
                    _fail(j_37);
                  else
                    i_37 = j_37;
                }
                t = not_null(i_37);
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
  ATerm d_38 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_38 = NULL;
      t = term_v_22;
      {
        t = get_config_0(t);
        {
          e_38 = t;
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
        }
      }
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm c_4 (ATerm t)
          {
            ATerm f_38 = NULL;
            f_38 = t;
            if(((d_38 != NULL) && (d_38 != f_38)))
              _fail(f_38);
            else
              d_38 = f_38;
            return(t);
          }
          t = Program_1(t, c_4);
          return(t);
        }
        t = fetch_1(t, b_4);
      }
    }
  {
    t = term_c_24;
    {
      t = echo_0(t);
      {
        t = term_f_24;
        {
          t = table_get_0(t);
          {
            ATerm e_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, e_4);
            {
              ATerm f_4 (ATerm t)
              {
                ATerm g_38 = NULL;
                ATerm h_38 = NULL;
                h_38 = t;
                if(((g_38 != NULL) && (g_38 != h_38)))
                  _fail(h_38);
                else
                  g_38 = h_38;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_38)), term_g_24);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, f_4);
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
  ATerm h_24;
  h_24 = t;
  {
    ATerm m_38 = NULL;
    ATerm n_38 = NULL;
    n_38 = t;
    if(((m_38 != NULL) && (m_38 != n_38)))
      _fail(n_38);
    else
      m_38 = n_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, not_null(m_38)));
      t = printnl_0(t);
    }
  }
  t = h_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm m_24;
  m_24 = t;
  {
    t = d_59(t);
    t = debug_0(t);
  }
  t = m_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_56 (ATerm))
{
  ATerm u_38 = NULL,v_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym_Undefined_1))
    {
      v_38 = ATgetArgument(u_38, 0);
      {
        ATerm z_38 = NULL,b_39 = NULL;
        ATerm a_39 = NULL;
        t = SSLgetAnnotations(not_null(u_38));
        {
          a_39 = t;
          if(((z_38 != NULL) && (z_38 != a_39)))
            _fail(a_39);
          else
            z_38 = a_39;
        }
        {
          t = not_null(v_38);
          {
            ATerm k_39 = NULL;
            t = q_56(t);
            {
              b_39 = t;
              {
                ATerm l_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_39)), not_null(z_38));
                {
                  l_39 = t;
                  if(((k_39 != NULL) && (k_39 != l_39)))
                    _fail(l_39);
                  else
                    k_39 = l_39;
                }
                t = not_null(k_39);
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
ATerm fetch_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm s_39 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_63, _id);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = Cons_2(t, _id, s_39);
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_76 (ATerm))
{
  t = fetch_1(t, f_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym_Help_0))
    {
      ATerm z_39 = NULL,f_40 = NULL;
      ATerm p_24;
      p_24 = t;
      {
        ATerm a_40 = NULL;
        t = SSLgetAnnotations(not_null(x_39));
        {
          a_40 = t;
          if(((z_39 != NULL) && (z_39 != a_40)))
            _fail(a_40);
          else
            z_39 = a_40;
        }
      }
      t = p_24;
      {
        ATerm g_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_39));
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
  ATerm s_40 = NULL;
  s_40 = t;
  t = SSL_implode_string(not_null(s_40));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        ATerm x_40 = NULL,y_40 = NULL,d_41 = NULL;
        x_40 = t;
        w_40 :
        if(((ATgetType(x_40) == AT_LIST) && !(ATisEmpty(x_40))))
          {
            y_40 = ATgetFirst((ATermList) x_40);
            d_41 = (ATerm) ATgetNext((ATermList) x_40);
            {
              t = not_null(y_40);
              {
                ATerm g_4 (ATerm t)
                {
                  t = not_null(d_41);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_4);
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
  ATerm n_41 = NULL;
  ATerm p_41 = NULL;
  n_41 = t;
  {
    ATerm q_41 = NULL;
    ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
    t = not_null(n_41);
    {
      q_41 = t;
      {
        t = SSL_explode_term(not_null(q_41));
        {
          s_41 = t;
          l_41 :
          if(match_cons(s_41, sym__2))
            {
              t_41 = ATgetArgument(s_41, 0);
              u_41 = ATgetArgument(s_41, 1);
              m_41 :
              if(match_string(t_41, ""))
                {
                  if(((p_41 != NULL) && (p_41 != u_41)))
                    _fail(u_41);
                  else
                    p_41 = u_41;
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
      t = not_null(p_41);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm y_41 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_41);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        {
          t = Nil_0(t);
          t = e_64(t);
        }
      }
    return(t);
  }
  t = y_41(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym__2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      {
        t = not_null(c_42);
        {
          ATerm h_4 (ATerm t)
          {
            t = not_null(d_42);
            return(t);
          }
          t = at_end_1(t, h_4);
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
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  t = SSL_explode_string(not_null(i_42));
  return(t);
}
ATerm _2 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm))
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym__2))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      {
        ATerm x_42 = NULL,z_42 = NULL;
        ATerm y_42 = NULL;
        t = SSLgetAnnotations(not_null(r_42));
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
        {
          t = not_null(s_42);
          {
            ATerm b_43 = NULL;
            t = o_50(t);
            {
              z_42 = t;
              {
                t = not_null(t_42);
                {
                  ATerm d_43 = NULL;
                  t = p_50(t);
                  {
                    b_43 = t;
                    {
                      ATerm e_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_42), not_null(b_43)), not_null(x_42));
                      {
                        e_43 = t;
                        if(((d_43 != NULL) && (d_43 != e_43)))
                          _fail(e_43);
                        else
                          d_43 = e_43;
                      }
                      t = not_null(d_43);
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
    ATerm c_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = c_25;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  l_43 :
  if(match_cons(m_43, sym__2))
    {
      n_43 = ATgetArgument(m_43, 0);
      o_43 = ATgetArgument(m_43, 1);
      {
        ATerm n_25;
        n_25 = t;
        t = SSL_printnl(not_null(n_43), not_null(o_43));
        t = n_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm o_25;
  o_25 = t;
  {
    ATerm u_43 = NULL,w_43 = NULL;
    ATerm p_25;
    p_25 = t;
    {
      ATerm v_43 = NULL;
      t = c_59(t);
      {
        v_43 = t;
        if(((u_43 != NULL) && (u_43 != v_43)))
          _fail(v_43);
        else
          u_43 = v_43;
      }
    }
    t = p_25;
    {
      ATerm x_43 = NULL;
      x_43 = t;
      if(((w_43 != NULL) && (w_43 != x_43)))
        _fail(x_43);
      else
        w_43 = x_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_43)), not_null(u_43)));
        t = printnl_0(t);
      }
    }
  }
  t = o_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm a_44 (ATerm t)
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = q_25;
        t = Cons_2(t, p_63, a_44);
      }
    return(t);
  }
  t = a_44(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  t = SSL_is_string(not_null(c_44));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm b_26 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(c_26);
                }
              else
                {
                  t = b_26;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, i_4);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
              l_44 = t;
              k_44 :
              if(match_cons(l_44, sym_Path_1))
                {
                  m_44 = ATgetArgument(l_44, 0);
                  t = not_null(m_44);
                }
              else
                {
                  if(match_cons(l_44, sym_Var_1))
                    {
                      m_44 = ATgetArgument(l_44, 0);
                      {
                        t = not_null(m_44);
                        {
                          ATerm d_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_26);
                            }
                          else
                            {
                              t = d_26;
                              {
                                ATerm j_4 (ATerm t)
                                {
                                  t = term_f_26;
                                  return(t);
                                }
                                t = debug_1(t, j_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_44, sym_Prefix_2))
                        {
                          m_44 = ATgetArgument(l_44, 0);
                          n_44 = ATgetArgument(l_44, 1);
                          {
                            ATerm s_44 = NULL,u_44 = NULL;
                            ATerm g_26;
                            g_26 = t;
                            {
                              ATerm t_44 = NULL;
                              t = not_null(m_44);
                              {
                                t = eval_config_0(t);
                                {
                                  t_44 = t;
                                  if(((s_44 != NULL) && (s_44 != t_44)))
                                    _fail(t_44);
                                  else
                                    s_44 = t_44;
                                }
                              }
                            }
                            t = g_26;
                            {
                              ATerm v_44 = NULL;
                              t = not_null(n_44);
                              {
                                t = eval_config_0(t);
                                {
                                  v_44 = t;
                                  if(((u_44 != NULL) && (u_44 != v_44)))
                                    _fail(v_44);
                                  else
                                    u_44 = v_44;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(u_44));
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
  ATerm d_45 = NULL;
  d_45 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_19, not_null(d_45));
    {
      t = table_get_0(t);
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_26;
              p_26 = t;
              {
                ATerm f_45 = NULL;
                ATerm g_45 = NULL;
                g_45 = t;
                if(((f_45 != NULL) && (f_45 != g_45)))
                  _fail(g_45);
                else
                  f_45 = g_45;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_19, not_null(d_45), not_null(f_45));
                  t = table_put_0(t);
                }
              }
              t = p_26;
            }
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm q_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_62(t);
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
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym__2))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      t = SSL_table_get(not_null(m_45), not_null(n_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,b_46 = NULL;
  w_45 = t;
  t_45 :
  if(match_cons(w_45, sym__3))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      b_46 = ATgetArgument(w_45, 2);
      {
        ATerm u_26;
        u_26 = t;
        {
          ATerm l_46 = NULL;
          ATerm m_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_45), not_null(y_45));
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_26);
              }
            else
              {
                t = v_26;
                t = (ATerm) ATempty;
              }
            {
              m_46 = t;
              if(((l_46 != NULL) && (l_46 != m_46)))
                _fail(m_46);
              else
                l_46 = m_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_45), not_null(y_45), (ATerm) ATinsert(CheckATermList(not_null(l_46)), not_null(b_46)));
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
ATerm register_usage_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm q_46 = NULL;
  ATerm r_46 = NULL;
  t = term_l_5;
  {
    t = k_77(t);
    {
      r_46 = t;
      if(((q_46 != NULL) && (q_46 != r_46)))
        _fail(r_46);
      else
        q_46 = r_46;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_24, term_e_24, not_null(q_46));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(match_string(x_46, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_46) == AT_LIST) && !(ATisEmpty(x_46))))
        {
          y_46 = ATgetFirst((ATermList) x_46);
          z_46 = (ATerm) ATgetNext((ATermList) x_46);
          {
            ATerm c_47 = NULL;
            ATerm x_26;
            x_26 = t;
            {
              t = not_null(y_46);
              t = a_0(t);
            }
            t = x_26;
            {
              ATerm d_47 = NULL;
              t = term_l_5;
              {
                t = d_0(t);
                {
                  d_47 = t;
                  if(((c_47 != NULL) && (c_47 != d_47)))
                    _fail(d_47);
                  else
                    c_47 = d_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), not_null(c_47));
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
  ATerm n_4 (ATerm t)
  {
    ATerm i_47 = NULL;
    i_47 = t;
    h_47 :
    if(!(match_string(i_47, "--help")))
      {
        if(!(match_string(i_47, "-h")))
          {
            if(!(match_string(i_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_d_27;
    {
      t = set_config_0(t);
      t = term_e_27;
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_j_27;
    return(t);
  }
  t = Option_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  k_47 :
  if(((ATgetType(l_47) == AT_LIST) && !(ATisEmpty(l_47))))
    {
      m_47 = ATgetFirst((ATermList) l_47);
      n_47 = (ATerm) ATgetNext((ATermList) l_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(((ATgetType(x_47) == AT_LIST) && !(ATisEmpty(x_47))))
    {
      y_47 = ATgetFirst((ATermList) x_47);
      z_47 = (ATerm) ATgetNext((ATermList) x_47);
      {
        ATerm d_48 = NULL,f_48 = NULL;
        ATerm e_48 = NULL;
        t = SSLgetAnnotations(not_null(x_47));
        {
          e_48 = t;
          if(((d_48 != NULL) && (d_48 != e_48)))
            _fail(e_48);
          else
            d_48 = e_48;
        }
        {
          t = not_null(y_47);
          {
            ATerm h_48 = NULL;
            t = x_51(t);
            {
              f_48 = t;
              {
                t = not_null(z_47);
                {
                  ATerm j_48 = NULL;
                  t = y_51(t);
                  {
                    h_48 = t;
                    {
                      ATerm k_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_48)), not_null(f_48)), not_null(d_48));
                      {
                        k_48 = t;
                        if(((j_48 != NULL) && (j_48 != k_48)))
                          _fail(k_48);
                        else
                          j_48 = k_48;
                      }
                      t = not_null(j_48);
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
  ATerm o_49 = NULL;
  o_49 = t;
  k_49 :
  if(((ATgetType(o_49) == AT_LIST) && ATisEmpty(o_49)))
    {
      {
        ATerm s_49 = NULL,v_49 = NULL;
        ATerm k_27;
        k_27 = t;
        {
          ATerm t_49 = NULL;
          t = SSLgetAnnotations(not_null(o_49));
          {
            t_49 = t;
            if(((s_49 != NULL) && (s_49 != t_49)))
              _fail(t_49);
            else
              s_49 = t_49;
          }
        }
        t = k_27;
        {
          ATerm w_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_49));
          {
            w_49 = t;
            if(((v_49 != NULL) && (v_49 != w_49)))
              _fail(w_49);
            else
              v_49 = w_49;
          }
          t = not_null(v_49);
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
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__2))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_19, not_null(m_50), not_null(n_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm l_27;
  l_27 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_27;
        t = i_77(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        {
        }
      }
  }
  t = l_27;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm x_50 = NULL;
      ATerm w_27;
      w_27 = t;
      {
        ATerm v_50 = NULL;
        ATerm w_50 = NULL;
        w_50 = t;
        if(((v_50 != NULL) && (v_50 != w_50)))
          _fail(w_50);
        else
          v_50 = w_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(v_50));
          t = set_config_0(t);
        }
      }
      t = w_27;
      {
        ATerm y_50 = NULL;
        y_50 = t;
        if(((x_50 != NULL) && (x_50 != y_50)))
          _fail(y_50);
        else
          x_50 = y_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_50));
      }
      return(t);
    }
    ATerm r_4 (ATerm t)
    {
      ATerm x_27 = t;
      int y_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                t = i_77(t);
                t = Cons_2(t, _id, r_4);
              }
            }
          LocalPopChoice(y_27);
        }
      else
        {
          t = x_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_4, r_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
    h_51 = t;
    d_51 :
    if(match_cons(h_51, sym__3))
      {
        i_51 = ATgetArgument(h_51, 0);
        j_51 = ATgetArgument(h_51, 1);
        k_51 = ATgetArgument(h_51, 2);
        {
          if(((e_51 != NULL) && (e_51 != i_51)))
            _fail(i_51);
          else
            e_51 = i_51;
          {
            if(((f_51 != NULL) && (f_51 != j_51)))
              _fail(j_51);
            else
              f_51 = j_51;
            {
              if(((g_51 != NULL) && (g_51 != k_51)))
                _fail(k_51);
              else
                g_51 = k_51;
              t = SSL_table_put(not_null(e_51), not_null(f_51), not_null(g_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm n_51 = NULL;
  ATerm h_28;
  h_28 = t;
  {
    t = term_l_28;
    t = table_put_0(t);
  }
  t = h_28;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm m_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_77(t);
          LocalPopChoice(o_28);
        }
      else
        {
          t = m_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_4);
    {
      ATerm p_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28;
          t_28 = t;
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_26;
                t = get_config_0(t);
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
                t = fetch_1(t, Help_0);
              }
          }
          t = t_28;
          {
            t = system_usage_0(t);
            {
              t = term_y_19;
              t = exit_0(t);
            }
          }
          LocalPopChoice(s_28);
        }
      else
        {
          t = p_28;
          {
            ATerm f_29 = t;
            int g_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm o_51 = NULL;
                    o_51 = t;
                    if(((n_51 != NULL) && (n_51 != o_51)))
                      _fail(o_51);
                    else
                      n_51 = o_51;
                    return(t);
                  }
                  t = Undefined_1(t, v_4);
                  return(t);
                }
                t = fetch_1(t, u_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_51)), term_m_29);
                    return(t);
                  }
                  t = say_1(t, w_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(g_29);
              }
            else
              {
                t = f_29;
                {
                }
              }
          }
        }
      {
        ATerm n_29;
        n_29 = t;
        {
          t = term_d_24;
          t = table_destroy_0(t);
        }
        t = n_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_57 (ATerm), ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  t = parse_options_1(t, y_57);
  {
    t = store_options_0(t);
    {
      t = a_58(t);
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_57);
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_58(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_29);
                }
              else
                {
                  t = w_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  t = option_wrap_4(t, c_58, default_usage_0, _id, d_58);
  return(t);
}
ATerm io_abox2latex_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    t = xtc_io_1(t, abox2latex_0);
    return(t);
  }
  t = option_wrap_2(t, abox2latex_options_0, x_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_abox2latex_0(t);
  return(t);
}