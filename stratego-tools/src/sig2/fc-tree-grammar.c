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
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_b_17;
ATerm term_e_16;
ATerm term_s_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_b_15;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_x_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_x_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_s_7;
ATerm term_q_7;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_g_6;
ATerm term_z_5;
ATerm term_o_5;
ATerm term_l_5;
ATerm term_i_5;
ATerm term_d_5;
ATerm term_o_4;
void init_constant_terms (void)
{
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_k_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_k_9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_k_9);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__3, term_c_14, term_d_14, (ATerm) ATempty);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Int_0 (ATerm);
ATerm String_0 (ATerm);
ATerm Param_1 (ATerm, ATerm o_0 (ATerm));
ATerm fc_Arg_0 (ATerm);
ATerm NonTermRef_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm fc_ProdItem_0 (ATerm);
ATerm Prod_2 (ATerm, ATerm x_49 (ATerm), ATerm y_49 (ATerm));
ATerm fc_Prod_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Id_1 (ATerm, ATerm c_50 (ATerm));
ATerm fc_Id_0 (ATerm);
ATerm NonTermDec_3 (ATerm, ATerm u_49 (ATerm), ATerm v_49 (ATerm), ATerm w_49 (ATerm));
ATerm fc_NonTermDec_0 (ATerm);
ATerm fc_List_1 (ATerm, ATerm w_55 (ATerm));
ATerm TreeGrammar_1 (ATerm, ATerm r_49 (ATerm));
ATerm fc_TreeGrammar_0 (ATerm);
ATerm _2 (ATerm, ATerm g_48 (ATerm), ATerm h_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_73 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_74 (ATerm));
ATerm debug_1 (ATerm, ATerm f_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_60 (ATerm), ATerm c_60 (ATerm));
ATerm input_file_0 (ATerm);
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
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm crush_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_73 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_77 (ATerm));
ATerm map_1 (ATerm, ATerm y_60 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_77 (ATerm));
ATerm Program_1 (ATerm, ATerm m_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_69 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_49 (ATerm), ATerm q_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_75 (ATerm));
ATerm io_fc_tree_grammar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Int_0 (ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  d_1 :
  if(match_cons(f_1, sym_Int_0))
    {
      ATerm s_3 = t;
      int t_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 = NULL,l_4 = NULL;
          ATerm u_3;
          u_3 = t;
          {
            ATerm x_3 = NULL;
            t = SSLgetAnnotations(not_null(f_1));
            {
              x_3 = t;
              if(((w_3 != NULL) && (w_3 != x_3)))
                _fail(x_3);
              else
                w_3 = x_3;
            }
          }
          t = u_3;
          {
            ATerm n_4 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_0), not_null(w_3));
            {
              n_4 = t;
              if(((l_4 != NULL) && (l_4 != n_4)))
                _fail(n_4);
              else
                l_4 = n_4;
            }
            t = not_null(l_4);
          }
          LocalPopChoice(t_3);
        }
      else
        {
          t = s_3;
          {
            ATerm z_4 = NULL,e_5 = NULL;
            ATerm v_3;
            v_3 = t;
            {
              ATerm a_5 = NULL;
              t = SSLgetAnnotations(not_null(f_1));
              {
                a_5 = t;
                if(((z_4 != NULL) && (z_4 != a_5)))
                  _fail(a_5);
                else
                  z_4 = a_5;
              }
            }
            t = v_3;
            {
              ATerm f_5 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_0), not_null(z_4));
              {
                f_5 = t;
                if(((e_5 != NULL) && (e_5 != f_5)))
                  _fail(f_5);
                else
                  e_5 = f_5;
              }
              t = not_null(e_5);
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
ATerm String_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  s_5 :
  if(match_cons(t_5, sym_String_0))
    {
      ATerm y_3 = t;
      int z_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL,x_5 = NULL;
          ATerm a_4;
          a_4 = t;
          {
            ATerm w_5 = NULL;
            t = SSLgetAnnotations(not_null(t_5));
            {
              w_5 = t;
              if(((v_5 != NULL) && (v_5 != w_5)))
                _fail(w_5);
              else
                v_5 = w_5;
            }
          }
          t = a_4;
          {
            ATerm y_5 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_String_0), not_null(v_5));
            {
              y_5 = t;
              if(((x_5 != NULL) && (x_5 != y_5)))
                _fail(y_5);
              else
                x_5 = y_5;
            }
            t = not_null(x_5);
          }
          LocalPopChoice(z_3);
        }
      else
        {
          t = y_3;
          {
            ATerm a_6 = NULL,c_6 = NULL;
            ATerm b_4;
            b_4 = t;
            {
              ATerm b_6 = NULL;
              t = SSLgetAnnotations(not_null(t_5));
              {
                b_6 = t;
                if(((a_6 != NULL) && (a_6 != b_6)))
                  _fail(b_6);
                else
                  a_6 = b_6;
              }
            }
            t = b_4;
            {
              ATerm d_6 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_String_0), not_null(a_6));
              {
                d_6 = t;
                if(((c_6 != NULL) && (c_6 != d_6)))
                  _fail(d_6);
                else
                  c_6 = d_6;
              }
              t = not_null(c_6);
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
ATerm Param_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Param_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL,z_6 = NULL;
            ATerm y_6 = NULL;
            t = SSLgetAnnotations(not_null(t_6));
            {
              y_6 = t;
              if(((x_6 != NULL) && (x_6 != y_6)))
                _fail(y_6);
              else
                x_6 = y_6;
            }
            {
              t = not_null(u_6);
              {
                ATerm b_7 = NULL;
                t = o_0(t);
                {
                  z_6 = t;
                  {
                    ATerm c_7 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, not_null(z_6)), not_null(x_6));
                    {
                      c_7 = t;
                      if(((b_7 != NULL) && (b_7 != c_7)))
                        _fail(c_7);
                      else
                        b_7 = c_7;
                    }
                    t = not_null(b_7);
                  }
                }
              }
            }
            LocalPopChoice(d_4);
          }
        else
          {
            t = c_4;
            {
              ATerm f_7 = NULL,h_7 = NULL;
              ATerm g_7 = NULL;
              t = SSLgetAnnotations(not_null(t_6));
              {
                g_7 = t;
                if(((f_7 != NULL) && (f_7 != g_7)))
                  _fail(g_7);
                else
                  f_7 = g_7;
              }
              {
                t = not_null(u_6);
                {
                  ATerm j_7 = NULL;
                  t = o_0(t);
                  {
                    h_7 = t;
                    {
                      ATerm k_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, not_null(h_7)), not_null(f_7));
                      {
                        k_7 = t;
                        if(((j_7 != NULL) && (j_7 != k_7)))
                          _fail(k_7);
                        else
                          j_7 = k_7;
                      }
                      t = not_null(j_7);
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
ATerm fc_Arg_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 = t;
      int h_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_0 (ATerm t)
          {
            t = fc_List_1(t, fc_Arg_0);
            return(t);
          }
          t = NonTermRef_2(t, fc_Id_0, b_0);
          LocalPopChoice(h_4);
        }
      else
        {
          t = g_4;
          {
            ATerm i_4 = t;
            int j_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1(t, is_int_0);
                LocalPopChoice(j_4);
              }
            else
              {
                t = i_4;
                {
                  ATerm k_4 = t;
                  int m_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = String_0(t);
                      LocalPopChoice(m_4);
                    }
                  else
                    {
                      t = k_4;
                      t = Int_0(t);
                    }
                }
              }
          }
        }
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm c_0 (ATerm t)
        {
          ATerm e_0 (ATerm t)
          {
            t = term_o_4;
            return(t);
          }
          t = debug_1(t, e_0);
          return(t);
        }
        t = if_verbose2_1(t, c_0);
      }
    }
  return(t);
}
ATerm NonTermRef_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_NonTermRef_2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 = NULL,r_8 = NULL;
            ATerm q_8 = NULL;
            t = SSLgetAnnotations(not_null(j_8));
            {
              q_8 = t;
              if(((p_8 != NULL) && (p_8 != q_8)))
                _fail(q_8);
              else
                p_8 = q_8;
            }
            {
              t = not_null(k_8);
              {
                ATerm t_8 = NULL;
                t = m_0(t);
                {
                  r_8 = t;
                  {
                    t = not_null(l_8);
                    {
                      ATerm v_8 = NULL;
                      t = n_0(t);
                      {
                        t_8 = t;
                        {
                          ATerm w_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, not_null(r_8), not_null(t_8)), not_null(p_8));
                          {
                            w_8 = t;
                            if(((v_8 != NULL) && (v_8 != w_8)))
                              _fail(w_8);
                            else
                              v_8 = w_8;
                          }
                          t = not_null(v_8);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm r_4 = t;
              int s_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_9 = NULL,c_9 = NULL;
                  ATerm b_9 = NULL;
                  t = SSLgetAnnotations(not_null(j_8));
                  {
                    b_9 = t;
                    if(((a_9 != NULL) && (a_9 != b_9)))
                      _fail(b_9);
                    else
                      a_9 = b_9;
                  }
                  {
                    t = not_null(k_8);
                    {
                      ATerm e_9 = NULL;
                      t = m_0(t);
                      {
                        c_9 = t;
                        {
                          t = not_null(l_8);
                          {
                            ATerm g_9 = NULL;
                            t = n_0(t);
                            {
                              e_9 = t;
                              {
                                ATerm h_9 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, not_null(c_9), not_null(e_9)), not_null(a_9));
                                {
                                  h_9 = t;
                                  if(((g_9 != NULL) && (g_9 != h_9)))
                                    _fail(h_9);
                                  else
                                    g_9 = h_9;
                                }
                                t = not_null(g_9);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  LocalPopChoice(s_4);
                }
              else
                {
                  t = r_4;
                  {
                    ATerm l_9 = NULL,n_9 = NULL;
                    ATerm m_9 = NULL;
                    t = SSLgetAnnotations(not_null(j_8));
                    {
                      m_9 = t;
                      if(((l_9 != NULL) && (l_9 != m_9)))
                        _fail(m_9);
                      else
                        l_9 = m_9;
                    }
                    {
                      t = not_null(k_8);
                      {
                        ATerm p_9 = NULL;
                        t = m_0(t);
                        {
                          n_9 = t;
                          {
                            t = not_null(l_8);
                            {
                              ATerm r_9 = NULL;
                              t = n_0(t);
                              {
                                p_9 = t;
                                {
                                  ATerm s_9 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, not_null(n_9), not_null(p_9)), not_null(l_9));
                                  {
                                    s_9 = t;
                                    if(((r_9 != NULL) && (r_9 != s_9)))
                                      _fail(s_9);
                                    else
                                      r_9 = s_9;
                                  }
                                  t = not_null(r_9);
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
ATerm fc_ProdItem_0 (ATerm t)
{
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 = t;
      int w_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_0 (ATerm t)
          {
            t = fc_List_1(t, fc_Arg_0);
            return(t);
          }
          t = NonTermRef_2(t, fc_Id_0, f_0);
          LocalPopChoice(w_4);
        }
      else
        {
          t = v_4;
          {
            ATerm x_4 = t;
            int y_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1(t, is_int_0);
                LocalPopChoice(y_4);
              }
            else
              {
                t = x_4;
                {
                  ATerm b_5 = t;
                  int c_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = String_0(t);
                      LocalPopChoice(c_5);
                    }
                  else
                    {
                      t = b_5;
                      t = Int_0(t);
                    }
                }
              }
          }
        }
      LocalPopChoice(u_4);
    }
  else
    {
      t = t_4;
      {
        ATerm p_0 (ATerm t)
        {
          ATerm q_0 (ATerm t)
          {
            t = term_d_5;
            return(t);
          }
          t = debug_1(t, q_0);
          return(t);
        }
        t = if_verbose2_1(t, p_0);
      }
    }
  return(t);
}
ATerm Prod_2 (ATerm t, ATerm x_49 (ATerm), ATerm y_49 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Prod_2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        ATerm u_10 = NULL,w_10 = NULL;
        ATerm v_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          v_10 = t;
          if(((u_10 != NULL) && (u_10 != v_10)))
            _fail(v_10);
          else
            u_10 = v_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm y_10 = NULL;
            t = x_49(t);
            {
              w_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm a_11 = NULL;
                  t = y_49(t);
                  {
                    y_10 = t;
                    {
                      ATerm b_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prod_2, not_null(w_10), not_null(y_10)), not_null(u_10));
                      {
                        b_11 = t;
                        if(((a_11 != NULL) && (a_11 != b_11)))
                          _fail(b_11);
                        else
                          a_11 = b_11;
                      }
                      t = not_null(a_11);
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
ATerm fc_Prod_0 (ATerm t)
{
  ATerm g_5 = t;
  int h_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 (ATerm t)
      {
        t = fc_List_1(t, fc_ProdItem_0);
        return(t);
      }
      t = Prod_2(t, fc_Id_0, r_0);
      LocalPopChoice(h_5);
    }
  else
    {
      t = g_5;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm t_0 (ATerm t)
          {
            t = term_i_5;
            return(t);
          }
          t = debug_1(t, t_0);
          return(t);
        }
        t = if_verbose2_1(t, s_0);
      }
    }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  t = SSL_is_int(not_null(i_11));
  return(t);
}
ATerm Id_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm q_11 = NULL,r_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym_Id_1))
    {
      r_11 = ATgetArgument(q_11, 0);
      {
        ATerm u_11 = NULL,w_11 = NULL;
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(q_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        {
          t = not_null(r_11);
          {
            ATerm y_11 = NULL;
            t = c_50(t);
            {
              w_11 = t;
              {
                ATerm z_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(w_11)), not_null(u_11));
                {
                  z_11 = t;
                  if(((y_11 != NULL) && (y_11 != z_11)))
                    _fail(z_11);
                  else
                    y_11 = z_11;
                }
                t = not_null(y_11);
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
ATerm fc_Id_0 (ATerm t)
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1(t, is_string_0);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_l_5;
            return(t);
          }
          t = debug_1(t, v_0);
          return(t);
        }
        t = if_verbose2_1(t, u_0);
      }
    }
  return(t);
}
ATerm NonTermDec_3 (ATerm t, ATerm u_49 (ATerm), ATerm v_49 (ATerm), ATerm w_49 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_NonTermDec_3))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      o_12 = ATgetArgument(l_12, 2);
      {
        ATerm t_12 = NULL,v_12 = NULL;
        ATerm u_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          u_12 = t;
          if(((t_12 != NULL) && (t_12 != u_12)))
            _fail(u_12);
          else
            t_12 = u_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm x_12 = NULL;
            t = u_49(t);
            {
              v_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm z_12 = NULL;
                  t = v_49(t);
                  {
                    x_12 = t;
                    {
                      t = not_null(o_12);
                      {
                        ATerm b_13 = NULL;
                        t = w_49(t);
                        {
                          z_12 = t;
                          {
                            ATerm c_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermDec_3, not_null(v_12), not_null(x_12), not_null(z_12)), not_null(t_12));
                            {
                              c_13 = t;
                              if(((b_13 != NULL) && (b_13 != c_13)))
                                _fail(c_13);
                              else
                                b_13 = c_13;
                            }
                            t = not_null(b_13);
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
ATerm fc_NonTermDec_0 (ATerm t)
{
  ATerm m_5 = t;
  int n_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = fc_List_1(t, fc_Prod_0);
        return(t);
      }
      t = NonTermDec_3(t, fc_Id_0, is_int_0, w_0);
      LocalPopChoice(n_5);
    }
  else
    {
      t = m_5;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            t = term_o_5;
            return(t);
          }
          t = debug_1(t, y_0);
          return(t);
        }
        t = if_verbose2_1(t, x_0);
      }
    }
  return(t);
}
ATerm fc_List_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = t;
      int u_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(u_5);
        }
      else
        {
          t = r_5;
          {
            ATerm z_0 (ATerm t)
            {
              t = fc_List_1(t, w_55);
              return(t);
            }
            t = Cons_2(t, w_55, z_0);
          }
        }
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            t = term_z_5;
            return(t);
          }
          t = debug_1(t, b_1);
          return(t);
        }
        t = if_verbose2_1(t, a_1);
      }
    }
  return(t);
}
ATerm TreeGrammar_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_TreeGrammar_1))
    {
      p_13 = ATgetArgument(o_13, 0);
      {
        ATerm s_13 = NULL,u_13 = NULL;
        ATerm t_13 = NULL;
        t = SSLgetAnnotations(not_null(o_13));
        {
          t_13 = t;
          if(((s_13 != NULL) && (s_13 != t_13)))
            _fail(t_13);
          else
            s_13 = t_13;
        }
        {
          t = not_null(p_13);
          {
            ATerm w_13 = NULL;
            t = r_49(t);
            {
              u_13 = t;
              {
                ATerm x_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_TreeGrammar_1, not_null(u_13)), not_null(s_13));
                {
                  x_13 = t;
                  if(((w_13 != NULL) && (w_13 != x_13)))
                    _fail(x_13);
                  else
                    w_13 = x_13;
                }
                t = not_null(w_13);
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
ATerm fc_TreeGrammar_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        t = fc_List_1(t, fc_NonTermDec_0);
        return(t);
      }
      t = TreeGrammar_1(t, c_1);
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm g_1 (ATerm t)
          {
            t = term_g_6;
            return(t);
          }
          t = debug_1(t, g_1);
          return(t);
        }
        t = if_verbose2_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm g_48 (ATerm), ATerm h_48 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm o_14 = NULL,q_14 = NULL;
        ATerm p_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        {
          t = not_null(j_14);
          {
            ATerm s_14 = NULL;
            t = g_48(t);
            {
              q_14 = t;
              {
                t = not_null(k_14);
                {
                  ATerm u_14 = NULL;
                  t = h_48(t);
                  {
                    s_14 = t;
                    {
                      ATerm v_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_14), not_null(s_14)), not_null(o_14));
                      {
                        v_14 = t;
                        if(((u_14 != NULL) && (u_14 != v_14)))
                          _fail(v_14);
                        else
                          u_14 = v_14;
                      }
                      t = not_null(u_14);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm h_6;
  h_6 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm e_15 = NULL,f_15 = NULL;
      e_15 = t;
      c_15 :
      if(match_cons(e_15, sym_Program_1))
        {
          f_15 = ATgetArgument(e_15, 0);
          if(((d_15 != NULL) && (d_15 != f_15)))
            _fail(f_15);
          else
            d_15 = f_15;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, h_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_6), not_null(d_15)), term_j_6));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        ATerm m_6;
        m_6 = t;
        t = SSL_printnl(not_null(k_15), not_null(l_15));
        t = m_6;
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
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_implode_string(not_null(q_15));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
        v_15 = t;
        u_15 :
        if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
          {
            w_15 = ATgetFirst((ATermList) v_15);
            x_15 = (ATerm) ATgetNext((ATermList) v_15);
            {
              t = not_null(w_15);
              {
                ATerm i_1 (ATerm t)
                {
                  t = not_null(x_15);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_1);
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
  ATerm h_16 = NULL;
  ATerm j_16 = NULL;
  h_16 = t;
  {
    ATerm k_16 = NULL;
    ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
    t = not_null(h_16);
    {
      k_16 = t;
      {
        t = SSL_explode_term(not_null(k_16));
        {
          m_16 = t;
          f_16 :
          if(match_cons(m_16, sym__2))
            {
              n_16 = ATgetArgument(m_16, 0);
              o_16 = ATgetArgument(m_16, 1);
              g_16 :
              if(match_string(n_16, ""))
                {
                  if(((j_16 != NULL) && (j_16 != o_16)))
                    _fail(o_16);
                  else
                    j_16 = o_16;
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
      t = not_null(j_16);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_61 (ATerm))
{
  ATerm s_16 (ATerm t)
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_16);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        {
          t = Nil_0(t);
          t = n_61(t);
        }
      }
    return(t);
  }
  t = s_16(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym__2))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      {
        t = not_null(w_16);
        {
          ATerm j_1 (ATerm t)
          {
            t = not_null(x_16);
            return(t);
          }
          t = at_end_1(t, j_1);
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
  ATerm r_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_6);
    }
  else
    {
      t = r_6;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  t = SSL_explode_string(not_null(c_17));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm w_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = w_6;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_17 = NULL;
  g_17 = t;
  t = SSL_is_string(not_null(g_17));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm i_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm m_7 = t;
              int n_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(n_7);
                }
              else
                {
                  t = m_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, k_1);
            LocalPopChoice(l_7);
          }
        else
          {
            t = i_7;
            {
              ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
              p_17 = t;
              o_17 :
              if(match_cons(p_17, sym_Path_1))
                {
                  q_17 = ATgetArgument(p_17, 0);
                  t = not_null(q_17);
                }
              else
                {
                  if(match_cons(p_17, sym_Var_1))
                    {
                      q_17 = ATgetArgument(p_17, 0);
                      {
                        t = not_null(q_17);
                        {
                          ATerm o_7 = t;
                          int p_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_7);
                            }
                          else
                            {
                              t = o_7;
                              {
                                ATerm l_1 (ATerm t)
                                {
                                  t = term_q_7;
                                  return(t);
                                }
                                t = debug_1(t, l_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_17, sym_Prefix_2))
                        {
                          q_17 = ATgetArgument(p_17, 0);
                          r_17 = ATgetArgument(p_17, 1);
                          {
                            ATerm w_17 = NULL,y_17 = NULL;
                            ATerm r_7;
                            r_7 = t;
                            {
                              ATerm x_17 = NULL;
                              t = not_null(q_17);
                              {
                                t = eval_config_0(t);
                                {
                                  x_17 = t;
                                  if(((w_17 != NULL) && (w_17 != x_17)))
                                    _fail(x_17);
                                  else
                                    w_17 = x_17;
                                }
                              }
                            }
                            t = r_7;
                            {
                              ATerm z_17 = NULL;
                              t = not_null(r_17);
                              {
                                t = eval_config_0(t);
                                {
                                  z_17 = t;
                                  if(((y_17 != NULL) && (y_17 != z_17)))
                                    _fail(z_17);
                                  else
                                    y_17 = z_17;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), not_null(y_17));
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
  ATerm h_18 = NULL;
  h_18 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(h_18));
    {
      t = table_get_0(t);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm v_7;
              v_7 = t;
              {
                ATerm j_18 = NULL;
                ATerm k_18 = NULL;
                k_18 = t;
                if(((j_18 != NULL) && (j_18 != k_18)))
                  _fail(k_18);
                else
                  j_18 = k_18;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_7, not_null(h_18), not_null(j_18));
                  t = table_put_0(t);
                }
              }
              t = v_7;
            }
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7;
      y_7 = t;
      {
        ATerm o_18 = NULL;
        ATerm p_18 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            p_18 = t;
            if(((o_18 != NULL) && (o_18 != p_18)))
              _fail(p_18);
            else
              o_18 = p_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), term_a_8);
          t = geq_0(t);
        }
      }
      t = y_7;
      t = i_73(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym__2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      t = SSL_WriteToTextFile(not_null(u_18), not_null(v_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      e_19 = ATgetArgument(b_19, 1);
      t = SSL_WriteToBinaryFile(not_null(c_19), not_null(e_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_19 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm q_19 = NULL,r_19 = NULL;
            q_19 = t;
            m_19 :
            if(match_cons(q_19, sym_Output_1))
              {
                r_19 = ATgetArgument(q_19, 0);
                if(((p_19 != NULL) && (p_19 != r_19)))
                  _fail(r_19);
                else
                  p_19 = r_19;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, n_1);
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          {
            ATerm s_19 = NULL;
            t = term_e_8;
            {
              s_19 = t;
              if(((p_19 != NULL) && (p_19 != s_19)))
                _fail(s_19);
              else
                p_19 = s_19;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_1, _id);
  }
  t = b_8;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(p_19);
        return(t);
      }
      t = split_2(t, p_1, _id);
      return(t);
    }
    t = _2(t, _id, o_1);
    {
      ATerm f_8 = t;
      int g_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm t_19 = NULL;
              t_19 = t;
              o_19 :
              if(!(match_cons(t_19, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
          LocalPopChoice(g_8);
        }
      else
        {
          t = f_8;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm z_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  ATerm h_8;
  h_8 = t;
  t = dtime_0(t);
  t = h_8;
  {
    t = z_74(t);
    {
      ATerm m_8;
      m_8 = t;
      {
        ATerm a_20 = NULL;
        t = dtime_0(t);
        {
          a_20 = t;
          if(((z_19 != NULL) && (z_19 != a_20)))
            _fail(a_20);
          else
            z_19 = a_20;
        }
      }
      t = m_8;
      {
        b_20 = t;
        y_19 :
        if(match_cons(b_20, sym__2))
          {
            c_20 = ATgetArgument(b_20, 0);
            d_20 = ATgetArgument(b_20, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_20)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_19))), not_null(d_20));
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
ATerm debug_1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm n_8;
  n_8 = t;
  {
    ATerm m_20 = NULL,p_20 = NULL;
    ATerm o_8;
    o_8 = t;
    {
      ATerm n_20 = NULL;
      t = f_69(t);
      {
        n_20 = t;
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
      }
    }
    t = o_8;
    {
      ATerm q_20 = NULL;
      q_20 = t;
      if(((p_20 != NULL) && (p_20 != q_20)))
        _fail(q_20);
      else
        p_20 = q_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_20)), not_null(m_20)));
        t = printnl_0(t);
      }
    }
  }
  t = n_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm u_20 = NULL;
  ATerm s_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_20 = NULL;
      v_20 = t;
      {
        if(((u_20 != NULL) && (u_20 != v_20)))
          _fail(v_20);
        else
          u_20 = v_20;
        t = SSL_ReadFromFile(not_null(u_20));
      }
      LocalPopChoice(u_8);
    }
  else
    {
      t = s_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_x_8;
          return(t);
        }
        t = debug_1(t, s_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_60 (ATerm), ATerm c_60 (ATerm))
{
  ATerm z_20 = NULL,b_21 = NULL;
  ATerm y_8;
  y_8 = t;
  {
    ATerm a_21 = NULL;
    t = b_60(t);
    {
      a_21 = t;
      if(((z_20 != NULL) && (z_20 != a_21)))
        _fail(a_21);
      else
        z_20 = a_21;
    }
  }
  t = y_8;
  {
    ATerm c_21 = NULL;
    t = c_60(t);
    {
      c_21 = t;
      if(((b_21 != NULL) && (b_21 != c_21)))
        _fail(c_21);
      else
        b_21 = c_21;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_20), not_null(b_21));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_21 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm d_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          ATerm m_21 = NULL,n_21 = NULL;
          m_21 = t;
          j_21 :
          if(match_cons(m_21, sym_Input_1))
            {
              n_21 = ATgetArgument(m_21, 0);
              if(((l_21 != NULL) && (l_21 != n_21)))
                _fail(n_21);
              else
                l_21 = n_21;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, t_1);
        LocalPopChoice(f_9);
      }
    else
      {
        t = d_9;
        {
          ATerm o_21 = NULL;
          t = term_i_9;
          {
            o_21 = t;
            if(((l_21 != NULL) && (l_21 != o_21)))
              _fail(o_21);
            else
              l_21 = o_21;
          }
        }
      }
  }
  t = z_8;
  {
    ATerm u_1 (ATerm t)
    {
      t = not_null(l_21);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm s_21 = NULL;
    s_21 = t;
    r_21 :
    if(!(match_string(s_21, "-v")))
      {
        if(!(match_string(s_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_o_9;
    t = set_config_0(t);
    t = term_q_9;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = Option_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm v_21 = NULL;
    v_21 = t;
    t_21 :
    if(!(match_string(v_21, "-k")))
      {
        if(!(match_string(v_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm u_9;
    u_9 = t;
    {
      ATerm w_21 = NULL;
      ATerm x_21 = NULL;
      t = string_to_int_0(t);
      {
        x_21 = t;
        if(((w_21 != NULL) && (w_21 != x_21)))
          _fail(x_21);
        else
          w_21 = x_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(w_21));
        t = set_config_0(t);
      }
    }
    t = u_9;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_w_9;
    return(t);
  }
  t = ArgOption_3(t, y_1, z_1, a_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  t = SSL_string_to_int(not_null(a_22));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm i_22 = NULL;
        i_22 = t;
        d_22 :
        if(!(match_string(i_22, "-S")))
          {
            if(!(match_string(i_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_a_10;
        t = set_config_0(t);
        t = term_b_10;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_c_10;
        return(t);
      }
      t = Option_3(t, b_2, c_2, d_2);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm j_22 = NULL;
              j_22 = t;
              e_22 :
              if(!(match_string(j_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm m_22 = NULL;
              ATerm f_10;
              f_10 = t;
              {
                ATerm k_22 = NULL;
                ATerm l_22 = NULL;
                t = string_to_int_0(t);
                {
                  l_22 = t;
                  if(((k_22 != NULL) && (k_22 != l_22)))
                    _fail(l_22);
                  else
                    k_22 = l_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(k_22));
                  t = set_config_0(t);
                }
              }
              t = f_10;
              {
                ATerm u_22 = NULL;
                u_22 = t;
                if(((m_22 != NULL) && (m_22 != u_22)))
                  _fail(u_22);
                else
                  m_22 = u_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_22));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_g_10;
              return(t);
            }
            t = ArgOption_3(t, e_2, f_2, g_2);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm h_2 (ATerm t)
              {
                ATerm v_22 = NULL;
                v_22 = t;
                h_22 :
                if(!(match_string(v_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_2 (ATerm t)
              {
                t = term_i_10;
                t = set_config_0(t);
                t = term_j_10;
                return(t);
              }
              ATerm j_2 (ATerm t)
              {
                t = term_k_10;
                return(t);
              }
              t = Option_3(t, h_2, i_2, j_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm b_23 = NULL;
    b_23 = t;
    y_22 :
    if(!(match_string(b_23, "-o")))
      {
        if(!(match_string(b_23, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm e_23 = NULL;
    ATerm t_10;
    t_10 = t;
    {
      ATerm c_23 = NULL;
      ATerm d_23 = NULL;
      d_23 = t;
      if(((c_23 != NULL) && (c_23 != d_23)))
        _fail(d_23);
      else
        c_23 = d_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(c_23));
        t = set_config_0(t);
      }
    }
    t = t_10;
    {
      ATerm f_23 = NULL;
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_23));
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_z_10;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm j_23 = NULL;
          j_23 = t;
          i_23 :
          if(!(match_string(j_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = term_f_11;
          t = set_config_0(t);
          t = term_g_11;
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = Option_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  n_23 :
  if(match_string(p_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
        {
          q_23 = ATgetFirst((ATermList) p_23);
          r_23 = (ATerm) ATgetNext((ATermList) p_23);
          o_23 :
          if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
            {
              s_23 = ATgetFirst((ATermList) r_23);
              t_23 = (ATerm) ATgetNext((ATermList) r_23);
              {
                ATerm x_23 = NULL;
                ATerm j_11;
                j_11 = t;
                {
                  t = not_null(q_23);
                  t = j_0(t);
                }
                t = j_11;
                {
                  ATerm y_23 = NULL;
                  t = not_null(s_23);
                  {
                    t = k_0(t);
                    {
                      y_23 = t;
                      if(((x_23 != NULL) && (x_23 != y_23)))
                        _fail(y_23);
                      else
                        x_23 = y_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_23)), not_null(x_23));
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
  ATerm q_2 (ATerm t)
  {
    ATerm f_24 = NULL;
    f_24 = t;
    c_24 :
    if(!(match_string(f_24, "-i")))
      {
        if(!(match_string(f_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm n_24 = NULL;
    ATerm k_11;
    k_11 = t;
    {
      ATerm l_24 = NULL;
      ATerm m_24 = NULL;
      m_24 = t;
      if(((l_24 != NULL) && (l_24 != m_24)))
        _fail(m_24);
      else
        l_24 = m_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(l_24));
        t = set_config_0(t);
      }
    }
    t = k_11;
    {
      ATerm o_24 = NULL;
      o_24 = t;
      if(((n_24 != NULL) && (n_24 != o_24)))
        _fail(o_24);
      else
        n_24 = o_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_24));
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_m_11;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, term_x_11));
  {
    t = printnl_0(t);
    {
      t = term_l_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_TicksToSeconds(not_null(s_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,c_25 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      c_25 = ATgetArgument(x_24, 1);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_24), not_null(c_25));
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = SSL_addr(not_null(y_24), not_null(c_25));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_67 (ATerm), ATerm n_67 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_67(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
        j_25 = t;
        i_25 :
        if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
          {
            k_25 = ATgetFirst((ATermList) j_25);
            l_25 = (ATerm) ATgetNext((ATermList) j_25);
            {
              ATerm o_25 = NULL;
              ATerm p_25 = NULL;
              t = not_null(l_25);
              {
                t = foldr_2(t, m_67, n_67);
                {
                  p_25 = t;
                  if(((o_25 != NULL) && (o_25 != p_25)))
                    _fail(p_25);
                  else
                    o_25 = p_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), not_null(o_25));
                t = n_67(t);
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
ATerm crush_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm w_25 = NULL;
  ATerm y_25 = NULL;
  w_25 = t;
  {
    ATerm z_25 = NULL;
    ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
    t = not_null(w_25);
    {
      z_25 = t;
      {
        t = SSL_explode_term(not_null(z_25));
        {
          b_26 = t;
          v_25 :
          if(match_cons(b_26, sym__2))
            {
              c_26 = ATgetArgument(b_26, 0);
              d_26 = ATgetArgument(b_26, 1);
              if(((y_25 != NULL) && (y_25 != d_26)))
                _fail(d_26);
              else
                y_25 = d_26;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_25);
      t = foldr_2(t, k_66, l_66);
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
    ATerm t_2 (ATerm t)
    {
      t = term_z_9;
      return(t);
    }
    t = crush_2(t, t_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm e_12;
        e_12 = t;
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_26), not_null(l_26));
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              t = SSL_gtr(not_null(k_26), not_null(l_26));
            }
        }
        t = e_12;
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
  ATerm r_26 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
      s_26 = t;
      q_26 :
      if(match_cons(s_26, sym__2))
        {
          t_26 = ATgetArgument(s_26, 0);
          u_26 = ATgetArgument(s_26, 1);
          {
            if(((r_26 != NULL) && (r_26 != t_26)))
              _fail(t_26);
            else
              r_26 = t_26;
            if(((r_26 != NULL) && (r_26 != u_26)))
              _fail(u_26);
            else
              r_26 = u_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm j_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_12;
      q_12 = t;
      {
        ATerm x_26 = NULL;
        ATerm y_26 = NULL;
        t = term_z_7;
        {
          t = get_config_0(t);
          {
            y_26 = t;
            if(((x_26 != NULL) && (x_26 != y_26)))
              _fail(y_26);
            else
              x_26 = y_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), term_l_6);
          t = geq_0(t);
        }
      }
      t = q_12;
      t = h_73(t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = j_12;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm c_27 = NULL,e_27 = NULL;
    ATerm r_12;
    r_12 = t;
    {
      ATerm d_27 = NULL;
      t = run_time_0(t);
      {
        d_27 = t;
        if(((c_27 != NULL) && (c_27 != d_27)))
          _fail(d_27);
        else
          c_27 = d_27;
      }
    }
    t = r_12;
    {
      ATerm f_27 = NULL;
      t = term_s_12;
      {
        t = get_config_0(t);
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_12), not_null(c_27)), term_w_12), not_null(e_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_2);
  {
    t = term_z_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym_Version_0))
    {
      ATerm o_27 = NULL,q_27 = NULL;
      ATerm a_13;
      a_13 = t;
      {
        ATerm p_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          p_27 = t;
          if(((o_27 != NULL) && (o_27 != p_27)))
            _fail(p_27);
          else
            o_27 = p_27;
        }
      }
      t = a_13;
      {
        ATerm r_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_27));
        {
          r_27 = t;
          if(((q_27 != NULL) && (q_27 != r_27)))
            _fail(r_27);
          else
            q_27 = r_27;
        }
        t = not_null(q_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_2);
  t = x_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_table_create(not_null(w_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  {
    ATerm h_13;
    h_13 = t;
    {
      t = term_i_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_13, term_j_13, not_null(a_28));
          t = table_put_0(t);
        }
      }
    }
    t = h_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  t = SSL_table_destroy(not_null(e_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_exit(not_null(i_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(((ATgetType(m_28) == AT_LIST) && ATisEmpty(m_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
        {
          n_28 = ATgetFirst((ATermList) m_28);
          o_28 = (ATerm) ATgetNext((ATermList) m_28);
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
  ATerm k_13;
  k_13 = t;
  {
    ATerm r_28 = NULL;
    ATerm u_28 = NULL;
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm s_28 = NULL;
          ATerm t_28 = NULL;
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
          t = (ATerm) ATinsert(ATempty, not_null(s_28));
        }
      }
    {
      u_28 = t;
      if(((r_28 != NULL) && (r_28 != u_28)))
        _fail(u_28);
      else
        r_28 = u_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(r_28));
      t = printnl_0(t);
    }
  }
  t = k_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm x_28 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = Cons_2(t, y_60, x_28);
      }
    return(t);
  }
  t = x_28(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  g_29 = t;
  d_29 :
  if(((ATgetType(g_29) == AT_LIST) && !(ATisEmpty(g_29))))
    {
      e_29 = ATgetFirst((ATermList) g_29);
      f_29 = (ATerm) ATgetNext((ATermList) g_29);
      {
        ATerm j_29 = NULL;
        t = not_null(f_29);
        {
          ATerm v_13;
          v_13 = t;
          {
            ATerm k_29 = NULL,m_29 = NULL,o_29 = NULL;
            ATerm y_13;
            y_13 = t;
            {
              ATerm l_29 = NULL;
              t = i_0(t);
              {
                l_29 = t;
                if(((k_29 != NULL) && (k_29 != l_29)))
                  _fail(l_29);
                else
                  k_29 = l_29;
              }
            }
            t = y_13;
            {
              ATerm n_29 = NULL;
              t = not_null(e_29);
              {
                t = h_0(t);
                {
                  n_29 = t;
                  if(((m_29 != NULL) && (m_29 != n_29)))
                    _fail(n_29);
                  else
                    m_29 = n_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_29)), not_null(m_29));
                {
                  o_29 = t;
                  if(((j_29 != NULL) && (j_29 != o_29)))
                    _fail(o_29);
                  else
                    j_29 = o_29;
                }
              }
            }
          }
          t = v_13;
          {
            ATerm w_2 (ATerm t)
            {
              t = not_null(j_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_29) == AT_LIST) && ATisEmpty(g_29)))
        {
          {
            t = term_k_9;
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Program_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm e_30 = NULL,g_30 = NULL;
        ATerm f_30 = NULL;
        t = SSLgetAnnotations(not_null(a_30));
        {
          f_30 = t;
          if(((e_30 != NULL) && (e_30 != f_30)))
            _fail(f_30);
          else
            e_30 = f_30;
        }
        {
          t = not_null(b_30);
          {
            ATerm i_30 = NULL;
            t = m_55(t);
            {
              g_30 = t;
              {
                ATerm j_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_30)), not_null(e_30));
                {
                  j_30 = t;
                  if(((i_30 != NULL) && (i_30 != j_30)))
                    _fail(j_30);
                  else
                    i_30 = j_30;
                }
                t = not_null(i_30);
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
  ATerm t_30 = NULL;
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_30 = NULL;
      t = term_s_12;
      {
        t = get_config_0(t);
        {
          u_30 = t;
          if(((t_30 != NULL) && (t_30 != u_30)))
            _fail(u_30);
          else
            t_30 = u_30;
        }
      }
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm v_30 = NULL;
            v_30 = t;
            if(((t_30 != NULL) && (t_30 != v_30)))
              _fail(v_30);
            else
              t_30 = v_30;
            return(t);
          }
          t = Program_1(t, z_2);
          return(t);
        }
        t = fetch_1(t, y_2);
      }
    }
  {
    t = term_b_14;
    {
      t = echo_0(t);
      {
        t = term_e_14;
        {
          t = table_get_0(t);
          {
            ATerm a_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, a_3);
            {
              ATerm b_3 (ATerm t)
              {
                ATerm w_30 = NULL;
                ATerm x_30 = NULL;
                x_30 = t;
                if(((w_30 != NULL) && (w_30 != x_30)))
                  _fail(x_30);
                else
                  w_30 = x_30;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_30)), term_f_14);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, b_3);
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
  ATerm g_14;
  g_14 = t;
  {
    ATerm c_31 = NULL;
    ATerm d_31 = NULL;
    d_31 = t;
    if(((c_31 != NULL) && (c_31 != d_31)))
      _fail(d_31);
    else
      c_31 = d_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, not_null(c_31)));
      t = printnl_0(t);
    }
  }
  t = g_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm l_14;
  l_14 = t;
  {
    t = g_69(t);
    t = debug_0(t);
  }
  t = l_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_Undefined_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      {
        ATerm o_31 = NULL,q_31 = NULL;
        ATerm p_31 = NULL;
        t = SSLgetAnnotations(not_null(k_31));
        {
          p_31 = t;
          if(((o_31 != NULL) && (o_31 != p_31)))
            _fail(p_31);
          else
            o_31 = p_31;
        }
        {
          t = not_null(l_31);
          {
            ATerm s_31 = NULL;
            t = n_55(t);
            {
              q_31 = t;
              {
                ATerm t_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_31)), not_null(o_31));
                {
                  t_31 = t;
                  if(((s_31 != NULL) && (s_31 != t_31)))
                    _fail(t_31);
                  else
                    s_31 = t_31;
                }
                t = not_null(s_31);
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
ATerm fetch_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm y_31 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_61, _id);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = Cons_2(t, _id, y_31);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_76 (ATerm))
{
  t = fetch_1(t, e_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Help_0))
    {
      ATerm f_32 = NULL,h_32 = NULL;
      ATerm r_14;
      r_14 = t;
      {
        ATerm g_32 = NULL;
        t = SSLgetAnnotations(not_null(d_32));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
      }
      t = r_14;
      {
        ATerm i_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_32));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        t = not_null(h_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm t_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_59(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = t_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,x_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym__2))
    {
      r_32 = ATgetArgument(q_32, 0);
      x_32 = ATgetArgument(q_32, 1);
      t = SSL_table_get(not_null(r_32), not_null(x_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym__3))
    {
      g_33 = ATgetArgument(f_33, 0);
      h_33 = ATgetArgument(f_33, 1);
      i_33 = ATgetArgument(f_33, 2);
      {
        ATerm x_14;
        x_14 = t;
        {
          ATerm m_33 = NULL;
          ATerm n_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(h_33));
          {
            ATerm y_14 = t;
            int z_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_14);
              }
            else
              {
                t = y_14;
                t = (ATerm) ATempty;
              }
            {
              n_33 = t;
              if(((m_33 != NULL) && (m_33 != n_33)))
                _fail(n_33);
              else
                m_33 = n_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_33), not_null(h_33), (ATerm) ATinsert(CheckATermList(not_null(m_33)), not_null(i_33)));
            t = table_put_0(t);
          }
        }
        t = x_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm r_33 = NULL;
  ATerm s_33 = NULL;
  t = term_k_9;
  {
    t = j_77(t);
    {
      s_33 = t;
      if(((r_33 != NULL) && (r_33 != s_33)))
        _fail(s_33);
      else
        r_33 = s_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_14, term_d_14, not_null(r_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
  y_33 = t;
  x_33 :
  if(match_string(y_33, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_33) == AT_LIST) && !(ATisEmpty(y_33))))
        {
          z_33 = ATgetFirst((ATermList) y_33);
          a_34 = (ATerm) ATgetNext((ATermList) y_33);
          {
            ATerm d_34 = NULL;
            ATerm a_15;
            a_15 = t;
            {
              t = not_null(z_33);
              t = a_0(t);
            }
            t = a_15;
            {
              ATerm e_34 = NULL;
              t = term_k_9;
              {
                t = d_0(t);
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_34)), not_null(d_34));
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
  ATerm c_3 (ATerm t)
  {
    ATerm j_34 = NULL;
    j_34 = t;
    i_34 :
    if(!(match_string(j_34, "--help")))
      {
        if(!(match_string(j_34, "-h")))
          {
            if(!(match_string(j_34, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_g_15;
    {
      t = set_config_0(t);
      t = term_h_15;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  l_34 :
  if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
    {
      n_34 = ATgetFirst((ATermList) m_34);
      o_34 = (ATerm) ATgetNext((ATermList) m_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_34)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_49 (ATerm), ATerm q_49 (ATerm))
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
    {
      z_34 = ATgetFirst((ATermList) y_34);
      a_35 = (ATerm) ATgetNext((ATermList) y_34);
      {
        ATerm e_35 = NULL,g_35 = NULL;
        ATerm f_35 = NULL;
        t = SSLgetAnnotations(not_null(y_34));
        {
          f_35 = t;
          if(((e_35 != NULL) && (e_35 != f_35)))
            _fail(f_35);
          else
            e_35 = f_35;
        }
        {
          t = not_null(z_34);
          {
            ATerm i_35 = NULL;
            t = p_49(t);
            {
              g_35 = t;
              {
                t = not_null(a_35);
                {
                  ATerm k_35 = NULL;
                  t = q_49(t);
                  {
                    i_35 = t;
                    {
                      ATerm l_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_35)), not_null(g_35)), not_null(e_35));
                      {
                        l_35 = t;
                        if(((k_35 != NULL) && (k_35 != l_35)))
                          _fail(l_35);
                        else
                          k_35 = l_35;
                      }
                      t = not_null(k_35);
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
  ATerm v_35 = NULL;
  v_35 = t;
  u_35 :
  if(((ATgetType(v_35) == AT_LIST) && ATisEmpty(v_35)))
    {
      {
        ATerm y_35 = NULL,a_36 = NULL;
        ATerm n_15;
        n_15 = t;
        {
          ATerm z_35 = NULL;
          t = SSLgetAnnotations(not_null(v_35));
          {
            z_35 = t;
            if(((y_35 != NULL) && (y_35 != z_35)))
              _fail(z_35);
            else
              y_35 = z_35;
          }
        }
        t = n_15;
        {
          ATerm b_36 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_35));
          {
            b_36 = t;
            if(((a_36 != NULL) && (a_36 != b_36)))
              _fail(b_36);
            else
              a_36 = b_36;
          }
          t = not_null(a_36);
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
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym__2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_7, not_null(i_36), not_null(j_36));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm o_15;
  o_15 = t;
  {
    ATerm p_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_15;
        t = h_77(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = p_15;
        {
        }
      }
  }
  t = o_15;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm r_36 = NULL;
      ATerm t_15;
      t_15 = t;
      {
        ATerm p_36 = NULL;
        ATerm q_36 = NULL;
        q_36 = t;
        if(((p_36 != NULL) && (p_36 != q_36)))
          _fail(q_36);
        else
          p_36 = q_36;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(p_36));
          t = set_config_0(t);
        }
      }
      t = t_15;
      {
        ATerm s_36 = NULL;
        s_36 = t;
        if(((r_36 != NULL) && (r_36 != s_36)))
          _fail(s_36);
        else
          r_36 = s_36;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_36));
      }
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              {
                t = h_77(t);
                t = Cons_2(t, _id, g_3);
              }
            }
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_3, g_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  ATerm c_16;
  c_16 = t;
  {
    ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
    b_37 = t;
    x_36 :
    if(match_cons(b_37, sym__3))
      {
        c_37 = ATgetArgument(b_37, 0);
        d_37 = ATgetArgument(b_37, 1);
        e_37 = ATgetArgument(b_37, 2);
        {
          if(((y_36 != NULL) && (y_36 != c_37)))
            _fail(c_37);
          else
            y_36 = c_37;
          {
            if(((z_36 != NULL) && (z_36 != d_37)))
              _fail(d_37);
            else
              z_36 = d_37;
            {
              if(((a_37 != NULL) && (a_37 != e_37)))
                _fail(e_37);
              else
                a_37 = e_37;
              t = SSL_table_put(not_null(y_36), not_null(z_36), not_null(a_37));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm h_37 = NULL;
  ATerm d_16;
  d_16 = t;
  {
    t = term_e_16;
    t = table_put_0(t);
  }
  t = d_16;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm i_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_77(t);
          LocalPopChoice(l_16);
        }
      else
        {
          t = i_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_3);
    {
      ATerm p_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_16;
          r_16 = t;
          {
            ATerm t_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_15;
                t = get_config_0(t);
                LocalPopChoice(y_16);
              }
            else
              {
                t = t_16;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_16;
          {
            t = system_usage_0(t);
            {
              t = term_z_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_16);
        }
      else
        {
          t = p_16;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm i_37 = NULL;
                    i_37 = t;
                    if(((h_37 != NULL) && (h_37 != i_37)))
                      _fail(i_37);
                    else
                      h_37 = i_37;
                    return(t);
                  }
                  t = Undefined_1(t, j_3);
                  return(t);
                }
                t = fetch_1(t, i_3);
                {
                  ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_37)), term_b_17);
                    return(t);
                  }
                  t = say_1(t, k_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                {
                }
              }
          }
        }
      {
        ATerm d_17;
        d_17 = t;
        {
          t = term_c_14;
          t = table_destroy_0(t);
        }
        t = d_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm), ATerm g_75 (ATerm))
{
  t = parse_options_1(t, d_75);
  {
    t = store_options_0(t);
    {
      t = f_75(t);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_75);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm h_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_75(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_75);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_3, w_75, x_75, m_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm l_17;
      l_17 = t;
      {
        ATerm l_37 = NULL;
        ATerm m_37 = NULL;
        t = term_s_12;
        {
          t = get_config_0(t);
          {
            m_37 = t;
            if(((l_37 != NULL) && (l_37 != m_37)))
              _fail(m_37);
            else
              l_37 = m_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATempty, not_null(l_37)));
          t = printnl_0(t);
        }
      }
      t = l_17;
      return(t);
    }
    t = if_verbose2_1(t, o_3);
    return(t);
  }
  t = iowrap_4(t, o_75, p_75, q_75, n_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  t = iowrap_3(t, m_75, n_75, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    t = _2(t, _id, j_75);
    return(t);
  }
  t = iowrap_2(t, p_3, _fail);
  return(t);
}
ATerm io_fc_tree_grammar_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm m_17;
    m_17 = t;
    t = fc_TreeGrammar_0(t);
    t = m_17;
    return(t);
  }
  t = iowrap_1(t, q_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    t = fc_TreeGrammar_0(t);
    t = n_17;
    return(t);
  }
  t = iowrap_1(t, r_3);
  return(t);
}