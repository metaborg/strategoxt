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
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_v_16;
ATerm term_a_16;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_z_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_s_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_v_5;
ATerm term_m_5;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Arg: ", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a ProdItem: ", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Prod: ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a Id: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a NonTermDec: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a List: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a TreeGrammar: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_p_9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_p_9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_p_9);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__3, term_z_13, term_a_14, (ATerm) ATempty);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Int_0 (ATerm);
ATerm String_0 (ATerm);
ATerm Param_1 (ATerm, ATerm o_0 (ATerm));
ATerm fc_Arg_0 (ATerm);
ATerm NonTermRef_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm fc_ProdItem_0 (ATerm);
ATerm Prod_2 (ATerm, ATerm e_50 (ATerm), ATerm f_50 (ATerm));
ATerm fc_Prod_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Id_1 (ATerm, ATerm j_50 (ATerm));
ATerm fc_Id_0 (ATerm);
ATerm NonTermDec_3 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm));
ATerm fc_NonTermDec_0 (ATerm);
ATerm fc_List_1 (ATerm, ATerm d_56 (ATerm));
ATerm TreeGrammar_1 (ATerm, ATerm y_49 (ATerm));
ATerm fc_TreeGrammar_0 (ATerm);
ATerm _2 (ATerm, ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_62 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_73 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_75 (ATerm));
ATerm debug_1 (ATerm, ATerm t_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_60 (ATerm), ATerm p_60 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm a_68 (ATerm), ATerm b_68 (ATerm));
ATerm crush_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_73 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_77 (ATerm));
ATerm map_1 (ATerm, ATerm m_61 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_77 (ATerm));
ATerm Program_1 (ATerm, ATerm u_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_69 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_49 (ATerm), ATerm x_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_75 (ATerm));
ATerm io_fc_tree_grammar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Int_0 (ATerm t)
{
  ATerm y_0 = NULL;
  y_0 = t;
  x_0 :
  if(match_cons(y_0, sym_Int_0))
    {
      ATerm d_4 = t;
      int e_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 = NULL,v_3 = NULL;
          ATerm f_4;
          f_4 = t;
          {
            ATerm f_1 = NULL;
            t = SSLgetAnnotations(not_null(y_0));
            {
              f_1 = t;
              if(((e_1 != NULL) && (e_1 != f_1)))
                _fail(f_1);
              else
                e_1 = f_1;
            }
          }
          t = f_4;
          {
            ATerm w_3 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_0), not_null(e_1));
            {
              w_3 = t;
              if(((v_3 != NULL) && (v_3 != w_3)))
                _fail(w_3);
              else
                v_3 = w_3;
            }
            t = not_null(v_3);
          }
          LocalPopChoice(e_4);
        }
      else
        {
          t = d_4;
          {
            ATerm l_4 = NULL,n_4 = NULL;
            ATerm g_4;
            g_4 = t;
            {
              ATerm m_4 = NULL;
              t = SSLgetAnnotations(not_null(y_0));
              {
                m_4 = t;
                if(((l_4 != NULL) && (l_4 != m_4)))
                  _fail(m_4);
                else
                  l_4 = m_4;
              }
            }
            t = g_4;
            {
              ATerm y_4 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_0), not_null(l_4));
              {
                y_4 = t;
                if(((n_4 != NULL) && (n_4 != y_4)))
                  _fail(y_4);
                else
                  n_4 = y_4;
              }
              t = not_null(n_4);
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
  ATerm p_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_String_0))
    {
      ATerm h_4 = t;
      int i_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_5 = NULL,t_5 = NULL;
          ATerm j_4;
          j_4 = t;
          {
            ATerm s_5 = NULL;
            t = SSLgetAnnotations(not_null(p_5));
            {
              s_5 = t;
              if(((r_5 != NULL) && (r_5 != s_5)))
                _fail(s_5);
              else
                r_5 = s_5;
            }
          }
          t = j_4;
          {
            ATerm u_5 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_String_0), not_null(r_5));
            {
              u_5 = t;
              if(((t_5 != NULL) && (t_5 != u_5)))
                _fail(u_5);
              else
                t_5 = u_5;
            }
            t = not_null(t_5);
          }
          LocalPopChoice(i_4);
        }
      else
        {
          t = h_4;
          {
            ATerm w_5 = NULL,y_5 = NULL;
            ATerm k_4;
            k_4 = t;
            {
              ATerm x_5 = NULL;
              t = SSLgetAnnotations(not_null(p_5));
              {
                x_5 = t;
                if(((w_5 != NULL) && (w_5 != x_5)))
                  _fail(x_5);
                else
                  w_5 = x_5;
              }
            }
            t = k_4;
            {
              ATerm z_5 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_String_0), not_null(w_5));
              {
                z_5 = t;
                if(((y_5 != NULL) && (y_5 != z_5)))
                  _fail(z_5);
                else
                  y_5 = z_5;
              }
              t = not_null(y_5);
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
  ATerm p_6 = NULL,q_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym_Param_1))
    {
      q_6 = ATgetArgument(p_6, 0);
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 = NULL,v_6 = NULL;
            ATerm u_6 = NULL;
            t = SSLgetAnnotations(not_null(p_6));
            {
              u_6 = t;
              if(((t_6 != NULL) && (t_6 != u_6)))
                _fail(u_6);
              else
                t_6 = u_6;
            }
            {
              t = not_null(q_6);
              {
                ATerm x_6 = NULL;
                t = o_0(t);
                {
                  v_6 = t;
                  {
                    ATerm y_6 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, not_null(v_6)), not_null(t_6));
                    {
                      y_6 = t;
                      if(((x_6 != NULL) && (x_6 != y_6)))
                        _fail(y_6);
                      else
                        x_6 = y_6;
                    }
                    t = not_null(x_6);
                  }
                }
              }
            }
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm b_7 = NULL,d_7 = NULL;
              ATerm c_7 = NULL;
              t = SSLgetAnnotations(not_null(p_6));
              {
                c_7 = t;
                if(((b_7 != NULL) && (b_7 != c_7)))
                  _fail(c_7);
                else
                  b_7 = c_7;
              }
              {
                t = not_null(q_6);
                {
                  ATerm f_7 = NULL;
                  t = o_0(t);
                  {
                    d_7 = t;
                    {
                      ATerm g_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Param_1, not_null(d_7)), not_null(b_7));
                      {
                        g_7 = t;
                        if(((f_7 != NULL) && (f_7 != g_7)))
                          _fail(g_7);
                        else
                          f_7 = g_7;
                      }
                      t = not_null(f_7);
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
  ATerm q_4 = t;
  int r_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 = t;
      int t_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_0 (ATerm t)
          {
            t = fc_List_1(t, fc_Arg_0);
            return(t);
          }
          t = NonTermRef_2(t, fc_Id_0, b_0);
          LocalPopChoice(t_4);
        }
      else
        {
          t = s_4;
          {
            ATerm u_4 = t;
            int v_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1(t, is_int_0);
                LocalPopChoice(v_4);
              }
            else
              {
                t = u_4;
                {
                  ATerm w_4 = t;
                  int x_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = String_0(t);
                      LocalPopChoice(x_4);
                    }
                  else
                    {
                      t = w_4;
                      t = Int_0(t);
                    }
                }
              }
          }
        }
      LocalPopChoice(r_4);
    }
  else
    {
      t = q_4;
      {
        ATerm c_0 (ATerm t)
        {
          ATerm e_0 (ATerm t)
          {
            t = term_z_4;
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
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_NonTermRef_2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      {
        ATerm a_5 = t;
        int b_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 = NULL,n_8 = NULL;
            ATerm m_8 = NULL;
            t = SSLgetAnnotations(not_null(f_8));
            {
              m_8 = t;
              if(((l_8 != NULL) && (l_8 != m_8)))
                _fail(m_8);
              else
                l_8 = m_8;
            }
            {
              t = not_null(g_8);
              {
                ATerm p_8 = NULL;
                t = m_0(t);
                {
                  n_8 = t;
                  {
                    t = not_null(h_8);
                    {
                      ATerm r_8 = NULL;
                      t = n_0(t);
                      {
                        p_8 = t;
                        {
                          ATerm s_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, not_null(n_8), not_null(p_8)), not_null(l_8));
                          {
                            s_8 = t;
                            if(((r_8 != NULL) && (r_8 != s_8)))
                              _fail(s_8);
                            else
                              r_8 = s_8;
                          }
                          t = not_null(r_8);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(b_5);
          }
        else
          {
            t = a_5;
            {
              ATerm c_5 = t;
              int d_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_8 = NULL,y_8 = NULL;
                  ATerm x_8 = NULL;
                  t = SSLgetAnnotations(not_null(f_8));
                  {
                    x_8 = t;
                    if(((w_8 != NULL) && (w_8 != x_8)))
                      _fail(x_8);
                    else
                      w_8 = x_8;
                  }
                  {
                    t = not_null(g_8);
                    {
                      ATerm a_9 = NULL;
                      t = m_0(t);
                      {
                        y_8 = t;
                        {
                          t = not_null(h_8);
                          {
                            ATerm c_9 = NULL;
                            t = n_0(t);
                            {
                              a_9 = t;
                              {
                                ATerm d_9 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, not_null(y_8), not_null(a_9)), not_null(w_8));
                                {
                                  d_9 = t;
                                  if(((c_9 != NULL) && (c_9 != d_9)))
                                    _fail(d_9);
                                  else
                                    c_9 = d_9;
                                }
                                t = not_null(c_9);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  LocalPopChoice(d_5);
                }
              else
                {
                  t = c_5;
                  {
                    ATerm h_9 = NULL,j_9 = NULL;
                    ATerm i_9 = NULL;
                    t = SSLgetAnnotations(not_null(f_8));
                    {
                      i_9 = t;
                      if(((h_9 != NULL) && (h_9 != i_9)))
                        _fail(i_9);
                      else
                        h_9 = i_9;
                    }
                    {
                      t = not_null(g_8);
                      {
                        ATerm l_9 = NULL;
                        t = m_0(t);
                        {
                          j_9 = t;
                          {
                            t = not_null(h_8);
                            {
                              ATerm n_9 = NULL;
                              t = n_0(t);
                              {
                                l_9 = t;
                                {
                                  ATerm o_9 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermRef_2, not_null(j_9), not_null(l_9)), not_null(h_9));
                                  {
                                    o_9 = t;
                                    if(((n_9 != NULL) && (n_9 != o_9)))
                                      _fail(o_9);
                                    else
                                      n_9 = o_9;
                                  }
                                  t = not_null(n_9);
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
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = t;
      int h_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_0 (ATerm t)
          {
            t = fc_List_1(t, fc_Arg_0);
            return(t);
          }
          t = NonTermRef_2(t, fc_Id_0, f_0);
          LocalPopChoice(h_5);
        }
      else
        {
          t = g_5;
          {
            ATerm i_5 = t;
            int j_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Param_1(t, is_int_0);
                LocalPopChoice(j_5);
              }
            else
              {
                t = i_5;
                {
                  ATerm k_5 = t;
                  int l_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = String_0(t);
                      LocalPopChoice(l_5);
                    }
                  else
                    {
                      t = k_5;
                      t = Int_0(t);
                    }
                }
              }
          }
        }
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm p_0 (ATerm t)
        {
          ATerm q_0 (ATerm t)
          {
            t = term_m_5;
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
ATerm Prod_2 (ATerm t, ATerm e_50 (ATerm), ATerm f_50 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_Prod_2))
    {
      l_10 = ATgetArgument(k_10, 0);
      m_10 = ATgetArgument(k_10, 1);
      {
        ATerm q_10 = NULL,s_10 = NULL;
        ATerm r_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
        {
          t = not_null(l_10);
          {
            ATerm u_10 = NULL;
            t = e_50(t);
            {
              s_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm w_10 = NULL;
                  t = f_50(t);
                  {
                    u_10 = t;
                    {
                      ATerm x_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prod_2, not_null(s_10), not_null(u_10)), not_null(q_10));
                      {
                        x_10 = t;
                        if(((w_10 != NULL) && (w_10 != x_10)))
                          _fail(x_10);
                        else
                          w_10 = x_10;
                      }
                      t = not_null(w_10);
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
  ATerm n_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 (ATerm t)
      {
        t = fc_List_1(t, fc_ProdItem_0);
        return(t);
      }
      t = Prod_2(t, fc_Id_0, r_0);
      LocalPopChoice(q_5);
    }
  else
    {
      t = n_5;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm t_0 (ATerm t)
          {
            t = term_v_5;
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
  ATerm e_11 = NULL;
  e_11 = t;
  t = SSL_is_int(not_null(e_11));
  return(t);
}
ATerm Id_1 (ATerm t, ATerm j_50 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_Id_1))
    {
      n_11 = ATgetArgument(m_11, 0);
      {
        ATerm q_11 = NULL,s_11 = NULL;
        ATerm r_11 = NULL;
        t = SSLgetAnnotations(not_null(m_11));
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
        {
          t = not_null(n_11);
          {
            ATerm u_11 = NULL;
            t = j_50(t);
            {
              s_11 = t;
              {
                ATerm v_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(s_11)), not_null(q_11));
                {
                  v_11 = t;
                  if(((u_11 != NULL) && (u_11 != v_11)))
                    _fail(v_11);
                  else
                    u_11 = v_11;
                }
                t = not_null(u_11);
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
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_1(t, is_string_0);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_c_6;
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
ATerm NonTermDec_3 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_NonTermDec_3))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      k_12 = ATgetArgument(h_12, 2);
      {
        ATerm p_12 = NULL,r_12 = NULL;
        ATerm q_12 = NULL;
        t = SSLgetAnnotations(not_null(h_12));
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
        {
          t = not_null(i_12);
          {
            ATerm t_12 = NULL;
            t = b_50(t);
            {
              r_12 = t;
              {
                t = not_null(j_12);
                {
                  ATerm v_12 = NULL;
                  t = c_50(t);
                  {
                    t_12 = t;
                    {
                      t = not_null(k_12);
                      {
                        ATerm x_12 = NULL;
                        t = d_50(t);
                        {
                          v_12 = t;
                          {
                            ATerm y_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NonTermDec_3, not_null(r_12), not_null(t_12), not_null(v_12)), not_null(p_12));
                            {
                              y_12 = t;
                              if(((x_12 != NULL) && (x_12 != y_12)))
                                _fail(y_12);
                              else
                                x_12 = y_12;
                            }
                            t = not_null(x_12);
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
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = fc_List_1(t, fc_Prod_0);
        return(t);
      }
      t = NonTermDec_3(t, fc_Id_0, is_int_0, w_0);
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = term_f_6;
            return(t);
          }
          t = debug_1(t, a_1);
          return(t);
        }
        t = if_verbose2_1(t, z_0);
      }
    }
  return(t);
}
ATerm fc_List_1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 = t;
      int j_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
          {
            ATerm b_1 (ATerm t)
            {
              t = fc_List_1(t, d_56);
              return(t);
            }
            t = Cons_2(t, d_56, b_1);
          }
        }
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_k_6;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose2_1(t, c_1);
      }
    }
  return(t);
}
ATerm TreeGrammar_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_TreeGrammar_1))
    {
      l_13 = ATgetArgument(k_13, 0);
      {
        ATerm o_13 = NULL,q_13 = NULL;
        ATerm p_13 = NULL;
        t = SSLgetAnnotations(not_null(k_13));
        {
          p_13 = t;
          if(((o_13 != NULL) && (o_13 != p_13)))
            _fail(p_13);
          else
            o_13 = p_13;
        }
        {
          t = not_null(l_13);
          {
            ATerm s_13 = NULL;
            t = y_49(t);
            {
              q_13 = t;
              {
                ATerm t_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_TreeGrammar_1, not_null(q_13)), not_null(o_13));
                {
                  t_13 = t;
                  if(((s_13 != NULL) && (s_13 != t_13)))
                    _fail(t_13);
                  else
                    s_13 = t_13;
                }
                t = not_null(s_13);
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
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        t = fc_List_1(t, fc_NonTermDec_0);
        return(t);
      }
      t = TreeGrammar_1(t, g_1);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            t = term_n_6;
            return(t);
          }
          t = debug_1(t, i_1);
          return(t);
        }
        t = if_verbose2_1(t, h_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm k_14 = NULL,m_14 = NULL;
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm o_14 = NULL;
            t = n_48(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = o_48(t);
                  {
                    o_14 = t;
                    {
                      ATerm r_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_14), not_null(o_14)), not_null(k_14));
                      {
                        r_14 = t;
                        if(((q_14 != NULL) && (q_14 != r_14)))
                          _fail(r_14);
                        else
                          q_14 = r_14;
                      }
                      t = not_null(q_14);
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
  ATerm z_14 = NULL;
  ATerm r_6;
  r_6 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm a_15 = NULL,b_15 = NULL;
      a_15 = t;
      y_14 :
      if(match_cons(a_15, sym_Program_1))
        {
          b_15 = ATgetArgument(a_15, 0);
          if(((z_14 != NULL) && (z_14 != b_15)))
            _fail(b_15);
          else
            z_14 = b_15;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(z_14)), term_w_6));
      {
        t = printnl_0(t);
        {
          t = term_a_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      {
        ATerm e_7;
        e_7 = t;
        t = SSL_printnl(not_null(g_15), not_null(h_15));
        t = e_7;
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
  ATerm m_15 = NULL;
  m_15 = t;
  t = SSL_implode_string(not_null(m_15));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
        r_15 = t;
        q_15 :
        if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
          {
            s_15 = ATgetFirst((ATermList) r_15);
            t_15 = (ATerm) ATgetNext((ATermList) r_15);
            {
              t = not_null(s_15);
              {
                ATerm k_1 (ATerm t)
                {
                  t = not_null(t_15);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_1);
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
  ATerm d_16 = NULL;
  ATerm f_16 = NULL;
  d_16 = t;
  {
    ATerm g_16 = NULL;
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
    t = not_null(d_16);
    {
      g_16 = t;
      {
        t = SSL_explode_term(not_null(g_16));
        {
          i_16 = t;
          b_16 :
          if(match_cons(i_16, sym__2))
            {
              j_16 = ATgetArgument(i_16, 0);
              k_16 = ATgetArgument(i_16, 1);
              c_16 :
              if(match_string(j_16, ""))
                {
                  if(((f_16 != NULL) && (f_16 != k_16)))
                    _fail(k_16);
                  else
                    f_16 = k_16;
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
      t = not_null(f_16);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm o_16 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_16);
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        {
          t = Nil_0(t);
          t = b_62(t);
        }
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym__2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      {
        t = not_null(s_16);
        {
          ATerm l_1 (ATerm t)
          {
            t = not_null(t_16);
            return(t);
          }
          t = at_end_1(t, l_1);
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
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = SSL_explode_string(not_null(y_16));
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
ATerm is_string_0 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  t = SSL_is_string(not_null(c_17));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_1);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            {
              ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
              l_17 = t;
              k_17 :
              if(match_cons(l_17, sym_Path_1))
                {
                  m_17 = ATgetArgument(l_17, 0);
                  t = not_null(m_17);
                }
              else
                {
                  if(match_cons(l_17, sym_Var_1))
                    {
                      m_17 = ATgetArgument(l_17, 0);
                      {
                        t = not_null(m_17);
                        {
                          ATerm r_7 = t;
                          int s_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_7);
                            }
                          else
                            {
                              t = r_7;
                              {
                                ATerm n_1 (ATerm t)
                                {
                                  t = term_t_7;
                                  return(t);
                                }
                                t = debug_1(t, n_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_17, sym_Prefix_2))
                        {
                          m_17 = ATgetArgument(l_17, 0);
                          n_17 = ATgetArgument(l_17, 1);
                          {
                            ATerm s_17 = NULL,u_17 = NULL;
                            ATerm u_7;
                            u_7 = t;
                            {
                              ATerm t_17 = NULL;
                              t = not_null(m_17);
                              {
                                t = eval_config_0(t);
                                {
                                  t_17 = t;
                                  if(((s_17 != NULL) && (s_17 != t_17)))
                                    _fail(t_17);
                                  else
                                    s_17 = t_17;
                                }
                              }
                            }
                            t = u_7;
                            {
                              ATerm v_17 = NULL;
                              t = not_null(n_17);
                              {
                                t = eval_config_0(t);
                                {
                                  v_17 = t;
                                  if(((u_17 != NULL) && (u_17 != v_17)))
                                    _fail(v_17);
                                  else
                                    u_17 = v_17;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(u_17));
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
  ATerm d_18 = NULL;
  d_18 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(d_18));
    {
      t = table_get_0(t);
      {
        ATerm o_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_7;
            w_7 = t;
            {
              ATerm f_18 = NULL;
              ATerm g_18 = NULL;
              g_18 = t;
              if(((f_18 != NULL) && (f_18 != g_18)))
                _fail(g_18);
              else
                f_18 = g_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(d_18), not_null(f_18));
                t = table_put_0(t);
              }
            }
            t = w_7;
          }
          return(t);
        }
        t = try_1(t, o_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm x_7;
    x_7 = t;
    {
      ATerm k_18 = NULL;
      ATerm l_18 = NULL;
      t = term_y_7;
      {
        t = get_config_0(t);
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), term_z_7);
        t = geq_0(t);
      }
    }
    t = x_7;
    t = x_73(t);
    return(t);
  }
  t = try_1(t, p_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym__2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      t = SSL_WriteToTextFile(not_null(q_18), not_null(r_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      t = SSL_WriteToBinaryFile(not_null(y_18), not_null(z_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_19 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            ATerm j_19 = NULL,n_19 = NULL;
            j_19 = t;
            e_19 :
            if(match_cons(j_19, sym_Output_1))
              {
                n_19 = ATgetArgument(j_19, 0);
                if(((i_19 != NULL) && (i_19 != n_19)))
                  _fail(n_19);
                else
                  i_19 = n_19;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_1);
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          {
            ATerm o_19 = NULL;
            t = term_d_8;
            {
              o_19 = t;
              if(((i_19 != NULL) && (i_19 != o_19)))
                _fail(o_19);
              else
                i_19 = o_19;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_1, _id);
  }
  t = a_8;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        t = not_null(i_19);
        return(t);
      }
      t = split_2(t, t_1, _id);
      return(t);
    }
    t = _2(t, _id, s_1);
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              ATerm p_19 = NULL;
              p_19 = t;
              h_19 :
              if(!(match_cons(p_19, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_1);
            return(t);
          }
          t = _2(t, u_1, WriteToBinaryFile_0);
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm v_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  ATerm k_8;
  k_8 = t;
  t = dtime_0(t);
  t = k_8;
  {
    t = o_75(t);
    {
      ATerm o_8;
      o_8 = t;
      {
        ATerm w_19 = NULL;
        t = dtime_0(t);
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
      }
      t = o_8;
      {
        x_19 = t;
        u_19 :
        if(match_cons(x_19, sym__2))
          {
            y_19 = ATgetArgument(x_19, 0);
            z_19 = ATgetArgument(x_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_19))), not_null(z_19));
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
ATerm debug_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm q_8;
  q_8 = t;
  {
    ATerm g_20 = NULL,i_20 = NULL;
    ATerm t_8;
    t_8 = t;
    {
      ATerm h_20 = NULL;
      t = t_69(t);
      {
        h_20 = t;
        if(((g_20 != NULL) && (g_20 != h_20)))
          _fail(h_20);
        else
          g_20 = h_20;
      }
    }
    t = t_8;
    {
      ATerm j_20 = NULL;
      j_20 = t;
      if(((i_20 != NULL) && (i_20 != j_20)))
        _fail(j_20);
      else
        i_20 = j_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_20)), not_null(g_20)));
        t = printnl_0(t);
      }
    }
  }
  t = q_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_20 = NULL;
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL;
      q_20 = t;
      {
        if(((p_20 != NULL) && (p_20 != q_20)))
          _fail(q_20);
        else
          p_20 = q_20;
        t = SSL_ReadFromFile(not_null(p_20));
      }
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_z_8;
          return(t);
        }
        t = debug_1(t, w_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_60 (ATerm), ATerm p_60 (ATerm))
{
  ATerm v_20 = NULL,x_20 = NULL;
  ATerm b_9;
  b_9 = t;
  {
    ATerm w_20 = NULL;
    t = o_60(t);
    {
      w_20 = t;
      if(((v_20 != NULL) && (v_20 != w_20)))
        _fail(w_20);
      else
        v_20 = w_20;
    }
  }
  t = b_9;
  {
    ATerm y_20 = NULL;
    t = p_60(t);
    {
      y_20 = t;
      if(((x_20 != NULL) && (x_20 != y_20)))
        _fail(y_20);
      else
        x_20 = y_20;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(x_20));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_21 = NULL;
  ATerm e_9;
  e_9 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          ATerm f_21 = NULL,j_21 = NULL;
          f_21 = t;
          c_21 :
          if(match_cons(f_21, sym_Input_1))
            {
              j_21 = ATgetArgument(f_21, 0);
              if(((e_21 != NULL) && (e_21 != j_21)))
                _fail(j_21);
              else
                e_21 = j_21;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_1);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm k_21 = NULL;
          t = term_k_9;
          {
            k_21 = t;
            if(((e_21 != NULL) && (e_21 != k_21)))
              _fail(k_21);
            else
              e_21 = k_21;
          }
        }
      }
  }
  t = e_9;
  {
    ATerm y_1 (ATerm t)
    {
      t = not_null(e_21);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm o_21 = NULL;
    o_21 = t;
    n_21 :
    if(!(match_string(o_21, "-v")))
      {
        if(!(match_string(o_21, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_q_9;
    t = set_config_0(t);
    t = term_r_9;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_s_9;
    return(t);
  }
  t = Option_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm r_21 = NULL;
    r_21 = t;
    p_21 :
    if(!(match_string(r_21, "-k")))
      {
        if(!(match_string(r_21, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm t_9;
    t_9 = t;
    {
      ATerm s_21 = NULL;
      ATerm t_21 = NULL;
      t = string_to_int_0(t);
      {
        t_21 = t;
        if(((s_21 != NULL) && (s_21 != t_21)))
          _fail(t_21);
        else
          s_21 = t_21;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(s_21));
        t = set_config_0(t);
      }
    }
    t = t_9;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  t = SSL_string_to_int(not_null(w_21));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm e_22 = NULL;
        e_22 = t;
        z_21 :
        if(!(match_string(e_22, "-S")))
          {
            if(!(match_string(e_22, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_z_9;
        t = set_config_0(t);
        t = term_a_10;
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_b_10;
        return(t);
      }
      t = Option_3(t, f_2, g_2, h_2);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              ATerm f_22 = NULL;
              f_22 = t;
              a_22 :
              if(!(match_string(f_22, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              ATerm i_22 = NULL;
              ATerm e_10;
              e_10 = t;
              {
                ATerm g_22 = NULL;
                ATerm h_22 = NULL;
                t = string_to_int_0(t);
                {
                  h_22 = t;
                  if(((g_22 != NULL) && (g_22 != h_22)))
                    _fail(h_22);
                  else
                    g_22 = h_22;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(g_22));
                  t = set_config_0(t);
                }
              }
              t = e_10;
              {
                ATerm j_22 = NULL;
                j_22 = t;
                if(((i_22 != NULL) && (i_22 != j_22)))
                  _fail(j_22);
                else
                  i_22 = j_22;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_22));
              }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              t = term_f_10;
              return(t);
            }
            t = ArgOption_3(t, i_2, j_2, k_2);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            {
              ATerm l_2 (ATerm t)
              {
                ATerm k_22 = NULL;
                k_22 = t;
                d_22 :
                if(!(match_string(k_22, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_h_10;
                t = set_config_0(t);
                t = term_i_10;
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_n_10;
                return(t);
              }
              t = Option_3(t, l_2, m_2, n_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm t_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_10);
          }
        else
          {
            t = t_10;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm x_22 = NULL;
    x_22 = t;
    n_22 :
    if(!(match_string(x_22, "-o")))
      {
        if(!(match_string(x_22, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm a_23 = NULL;
    ATerm y_10;
    y_10 = t;
    {
      ATerm y_22 = NULL;
      ATerm z_22 = NULL;
      z_22 = t;
      if(((y_22 != NULL) && (y_22 != z_22)))
        _fail(z_22);
      else
        y_22 = z_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(y_22));
        t = set_config_0(t);
      }
    }
    t = y_10;
    {
      ATerm b_23 = NULL;
      b_23 = t;
      if(((a_23 != NULL) && (a_23 != b_23)))
        _fail(b_23);
      else
        a_23 = b_23;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_23));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_a_11;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm f_23 = NULL;
          f_23 = t;
          e_23 :
          if(!(match_string(f_23, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = term_f_11;
          t = set_config_0(t);
          t = term_g_11;
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = Option_3(t, r_2, s_2, t_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  l_23 = t;
  j_23 :
  if(match_string(l_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
        {
          m_23 = ATgetFirst((ATermList) l_23);
          n_23 = (ATerm) ATgetNext((ATermList) l_23);
          k_23 :
          if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
            {
              o_23 = ATgetFirst((ATermList) n_23);
              p_23 = (ATerm) ATgetNext((ATermList) n_23);
              {
                ATerm t_23 = NULL;
                ATerm i_11;
                i_11 = t;
                {
                  t = not_null(m_23);
                  t = j_0(t);
                }
                t = i_11;
                {
                  ATerm u_23 = NULL;
                  t = not_null(o_23);
                  {
                    t = k_0(t);
                    {
                      u_23 = t;
                      if(((t_23 != NULL) && (t_23 != u_23)))
                        _fail(u_23);
                      else
                        t_23 = u_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_23)), not_null(t_23));
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
  ATerm u_2 (ATerm t)
  {
    ATerm b_24 = NULL;
    b_24 = t;
    y_23 :
    if(!(match_string(b_24, "-i")))
      {
        if(!(match_string(b_24, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm e_24 = NULL;
    ATerm j_11;
    j_11 = t;
    {
      ATerm c_24 = NULL;
      ATerm d_24 = NULL;
      d_24 = t;
      if(((c_24 != NULL) && (c_24 != d_24)))
        _fail(d_24);
      else
        c_24 = d_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(c_24));
        t = set_config_0(t);
      }
    }
    t = j_11;
    {
      ATerm f_24 = NULL;
      f_24 = t;
      if(((e_24 != NULL) && (e_24 != f_24)))
        _fail(f_24);
      else
        e_24 = f_24;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_24));
    }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_o_11;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = p_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATempty, term_y_11));
  {
    t = printnl_0(t);
    {
      t = term_a_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_TicksToSeconds(not_null(j_24));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_24), not_null(v_24));
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = SSL_addr(not_null(u_24), not_null(v_24));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm))
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_68(t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
        c_25 = t;
        b_25 :
        if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
          {
            d_25 = ATgetFirst((ATermList) c_25);
            e_25 = (ATerm) ATgetNext((ATermList) c_25);
            {
              ATerm k_25 = NULL;
              ATerm l_25 = NULL;
              t = not_null(e_25);
              {
                t = foldr_2(t, a_68, b_68);
                {
                  l_25 = t;
                  if(((k_25 != NULL) && (k_25 != l_25)))
                    _fail(l_25);
                  else
                    k_25 = l_25;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), not_null(k_25));
                t = b_68(t);
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
ATerm crush_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm s_25 = NULL;
  ATerm u_25 = NULL;
  s_25 = t;
  {
    ATerm v_25 = NULL;
    ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
    t = not_null(s_25);
    {
      v_25 = t;
      {
        t = SSL_explode_term(not_null(v_25));
        {
          x_25 = t;
          r_25 :
          if(match_cons(x_25, sym__2))
            {
              y_25 = ATgetArgument(x_25, 0);
              z_25 = ATgetArgument(x_25, 1);
              if(((u_25 != NULL) && (u_25 != z_25)))
                _fail(z_25);
              else
                u_25 = z_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_25);
      t = foldr_2(t, y_66, z_66);
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
    ATerm x_2 (ATerm t)
    {
      t = term_y_9;
      return(t);
    }
    t = crush_2(t, x_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        ATerm d_12;
        d_12 = t;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_26), not_null(h_26));
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              t = SSL_gtr(not_null(g_26), not_null(h_26));
            }
        }
        t = d_12;
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
  ATerm n_26 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
      o_26 = t;
      m_26 :
      if(match_cons(o_26, sym__2))
        {
          p_26 = ATgetArgument(o_26, 0);
          q_26 = ATgetArgument(o_26, 1);
          {
            if(((n_26 != NULL) && (n_26 != p_26)))
              _fail(p_26);
            else
              n_26 = p_26;
            if(((n_26 != NULL) && (n_26 != q_26)))
              _fail(q_26);
            else
              n_26 = q_26;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm n_12;
    n_12 = t;
    {
      ATerm t_26 = NULL;
      ATerm u_26 = NULL;
      t = term_y_7;
      {
        t = get_config_0(t);
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), term_a_7);
        t = geq_0(t);
      }
    }
    t = n_12;
    t = w_73(t);
    return(t);
  }
  t = try_1(t, y_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm y_26 = NULL,a_27 = NULL;
    ATerm o_12;
    o_12 = t;
    {
      ATerm z_26 = NULL;
      t = run_time_0(t);
      {
        z_26 = t;
        if(((y_26 != NULL) && (y_26 != z_26)))
          _fail(z_26);
        else
          y_26 = z_26;
      }
    }
    t = o_12;
    {
      ATerm b_27 = NULL;
      t = term_s_12;
      {
        t = get_config_0(t);
        {
          b_27 = t;
          if(((a_27 != NULL) && (a_27 != b_27)))
            _fail(b_27);
          else
            a_27 = b_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_12), not_null(y_26)), term_u_12), not_null(a_27)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  {
    t = term_y_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Version_0))
    {
      ATerm k_27 = NULL,m_27 = NULL;
      ATerm z_12;
      z_12 = t;
      {
        ATerm l_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
      }
      t = z_12;
      {
        ATerm n_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        t = not_null(m_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_3);
  t = m_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  t = SSL_table_create(not_null(s_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  {
    ATerm e_13;
    e_13 = t;
    {
      t = term_f_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_13, term_g_13, not_null(w_27));
          t = table_put_0(t);
        }
      }
    }
    t = e_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = SSL_table_destroy(not_null(a_28));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  t = SSL_exit(not_null(e_28));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  h_28 :
  if(((ATgetType(i_28) == AT_LIST) && ATisEmpty(i_28)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_28) == AT_LIST) && !(ATisEmpty(i_28))))
        {
          j_28 = ATgetFirst((ATermList) i_28);
          k_28 = (ATerm) ATgetNext((ATermList) i_28);
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
  ATerm h_13;
  h_13 = t;
  {
    ATerm n_28 = NULL;
    ATerm q_28 = NULL;
    ATerm i_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = i_13;
        {
          ATerm o_28 = NULL;
          ATerm p_28 = NULL;
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
          t = (ATerm) ATinsert(ATempty, not_null(o_28));
        }
      }
    {
      q_28 = t;
      if(((n_28 != NULL) && (n_28 != q_28)))
        _fail(q_28);
      else
        n_28 = q_28;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(n_28));
      t = printnl_0(t);
    }
  }
  t = h_13;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm t_28 (ATerm t)
  {
    ATerm n_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = n_13;
        t = Cons_2(t, m_61, t_28);
      }
    return(t);
  }
  t = t_28(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  c_29 = t;
  z_28 :
  if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
    {
      a_29 = ATgetFirst((ATermList) c_29);
      b_29 = (ATerm) ATgetNext((ATermList) c_29);
      {
        ATerm f_29 = NULL;
        t = not_null(b_29);
        {
          ATerm u_13;
          u_13 = t;
          {
            ATerm g_29 = NULL,i_29 = NULL,k_29 = NULL;
            ATerm v_13;
            v_13 = t;
            {
              ATerm h_29 = NULL;
              t = i_0(t);
              {
                h_29 = t;
                if(((g_29 != NULL) && (g_29 != h_29)))
                  _fail(h_29);
                else
                  g_29 = h_29;
              }
            }
            t = v_13;
            {
              ATerm j_29 = NULL;
              t = not_null(a_29);
              {
                t = h_0(t);
                {
                  j_29 = t;
                  if(((i_29 != NULL) && (i_29 != j_29)))
                    _fail(j_29);
                  else
                    i_29 = j_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_29)), not_null(i_29));
                {
                  k_29 = t;
                  if(((f_29 != NULL) && (f_29 != k_29)))
                    _fail(k_29);
                  else
                    f_29 = k_29;
                }
              }
            }
          }
          t = u_13;
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(f_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_29) == AT_LIST) && ATisEmpty(c_29)))
        {
          {
            t = term_p_9;
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
  ATerm c_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm v_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_Program_1))
    {
      x_29 = ATgetArgument(v_29, 0);
      {
        ATerm a_30 = NULL,c_30 = NULL;
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(v_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
        {
          t = not_null(x_29);
          {
            ATerm e_30 = NULL;
            t = u_55(t);
            {
              c_30 = t;
              {
                ATerm f_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_30)), not_null(a_30));
                {
                  f_30 = t;
                  if(((e_30 != NULL) && (e_30 != f_30)))
                    _fail(f_30);
                  else
                    e_30 = f_30;
                }
                t = not_null(e_30);
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
  ATerm o_30 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL;
      t = term_s_12;
      {
        t = get_config_0(t);
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
      }
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm e_3 (ATerm t)
          {
            ATerm q_30 = NULL;
            q_30 = t;
            if(((o_30 != NULL) && (o_30 != q_30)))
              _fail(q_30);
            else
              o_30 = q_30;
            return(t);
          }
          t = Program_1(t, e_3);
          return(t);
        }
        t = option_defined_1(t, d_3);
      }
    }
  {
    ATerm f_3 (ATerm t)
    {
      ATerm g_3 (ATerm t)
      {
        t = not_null(o_30);
        return(t);
      }
      t = short_description_1(t, g_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, f_3);
    {
      t = term_y_13;
      {
        t = echo_0(t);
        {
          t = term_b_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm r_30 = NULL;
                  ATerm s_30 = NULL;
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_30)), term_c_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_3);
                {
                  ATerm i_3 (ATerm t)
                  {
                    ATerm t_30 = NULL;
                    ATerm u_30 = NULL;
                    ATerm j_3 (ATerm t)
                    {
                      t = not_null(o_30);
                      return(t);
                    }
                    t = long_description_1(t, j_3);
                    {
                      u_30 = t;
                      if(((t_30 != NULL) && (t_30 != u_30)))
                        _fail(u_30);
                      else
                        t_30 = u_30;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), term_h_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_3);
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
  ATerm i_14;
  i_14 = t;
  {
    ATerm c_31 = NULL;
    ATerm d_31 = NULL;
    d_31 = t;
    if(((c_31 != NULL) && (c_31 != d_31)))
      _fail(d_31);
    else
      c_31 = d_31;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATempty, not_null(c_31)));
      t = printnl_0(t);
    }
  }
  t = i_14;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm j_14;
  j_14 = t;
  {
    t = u_69(t);
    t = debug_0(t);
  }
  t = j_14;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_55 (ATerm))
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
            t = v_55(t);
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
ATerm fetch_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm y_31 (ATerm t)
  {
    ATerm n_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_61, _id);
        LocalPopChoice(p_14);
      }
    else
      {
        t = n_14;
        t = Cons_2(t, _id, y_31);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_76 (ATerm))
{
  t = fetch_1(t, t_76);
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
      ATerm s_14;
      s_14 = t;
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
      t = s_14;
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
ATerm try_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_59(t);
      LocalPopChoice(u_14);
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
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  n_32 :
  if(match_cons(o_32, sym__2))
    {
      p_32 = ATgetArgument(o_32, 0);
      q_32 = ATgetArgument(o_32, 1);
      t = SSL_table_get(not_null(p_32), not_null(q_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  e_33 = t;
  y_32 :
  if(match_cons(e_33, sym__3))
    {
      g_33 = ATgetArgument(e_33, 0);
      h_33 = ATgetArgument(e_33, 1);
      i_33 = ATgetArgument(e_33, 2);
      {
        ATerm v_14;
        v_14 = t;
        {
          ATerm m_33 = NULL;
          ATerm n_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(h_33));
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
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
        t = v_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm r_33 = NULL;
  ATerm s_33 = NULL;
  t = term_p_9;
  {
    t = y_77(t);
    {
      s_33 = t;
      if(((r_33 != NULL) && (r_33 != s_33)))
        _fail(s_33);
      else
        r_33 = s_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_a_14, not_null(r_33));
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
            ATerm c_15;
            c_15 = t;
            {
              t = not_null(z_33);
              t = a_0(t);
            }
            t = c_15;
            {
              ATerm e_34 = NULL;
              t = term_p_9;
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
  ATerm k_3 (ATerm t)
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
  ATerm l_3 (ATerm t)
  {
    t = term_i_15;
    {
      t = set_config_0(t);
      t = term_j_15;
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  t = Option_3(t, k_3, l_3, m_3);
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
ATerm Cons_2 (ATerm t, ATerm w_49 (ATerm), ATerm x_49 (ATerm))
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
            t = w_49(t);
            {
              g_35 = t;
              {
                t = not_null(a_35);
                {
                  ATerm k_35 = NULL;
                  t = x_49(t);
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
        ATerm x_35 = NULL,z_35 = NULL;
        ATerm l_15;
        l_15 = t;
        {
          ATerm y_35 = NULL;
          t = SSLgetAnnotations(not_null(v_35));
          {
            y_35 = t;
            if(((x_35 != NULL) && (x_35 != y_35)))
              _fail(y_35);
            else
              x_35 = y_35;
          }
        }
        t = l_15;
        {
          ATerm a_36 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_35));
          {
            a_36 = t;
            if(((z_35 != NULL) && (z_35 != a_36)))
              _fail(a_36);
            else
              z_35 = a_36;
          }
          t = not_null(z_35);
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
        t = (ATerm) ATmakeAppl(sym__3, term_v_7, not_null(i_36), not_null(j_36));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    ATerm n_3 (ATerm t)
    {
      t = term_o_15;
      t = w_77(t);
      return(t);
    }
    t = try_1(t, n_3);
  }
  t = n_15;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm r_36 = NULL;
      ATerm p_15;
      p_15 = t;
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
      t = p_15;
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
    ATerm p_3 (ATerm t)
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              {
                t = w_77(t);
                t = Cons_2(t, _id, p_3);
              }
            }
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_3, p_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  ATerm y_15;
  y_15 = t;
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
  t = y_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm h_37 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    t = term_a_16;
    t = table_put_0(t);
  }
  t = z_15;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm e_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_77(t);
          LocalPopChoice(h_16);
        }
      else
        {
          t = e_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_3);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_16;
            n_16 = t;
            {
              ATerm p_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_15;
                  t = get_config_0(t);
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = p_16;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_16;
            {
              t = system_usage_0(t);
              {
                t = term_y_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm s_3 (ATerm t)
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm i_37 = NULL;
                  i_37 = t;
                  if(((h_37 != NULL) && (h_37 != i_37)))
                    _fail(i_37);
                  else
                    h_37 = i_37;
                  return(t);
                }
                t = Undefined_1(t, t_3);
                return(t);
              }
              t = option_defined_1(t, s_3);
              {
                ATerm u_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_37)), term_v_16);
                  return(t);
                }
                t = say_1(t, u_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_3);
      {
        ATerm w_16;
        w_16 = t;
        {
          t = term_z_13;
          t = table_destroy_0(t);
        }
        t = w_16;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  t = parse_options_1(t, s_75);
  {
    t = store_options_0(t);
    {
      t = u_75(t);
      {
        ATerm x_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_75);
            LocalPopChoice(z_16);
          }
        else
          {
            t = x_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_76(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_76);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_3, l_76, m_76, y_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm f_17;
      f_17 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATempty, not_null(l_37)));
          t = printnl_0(t);
        }
      }
      t = f_17;
      return(t);
    }
    t = if_verbose2_1(t, a_4);
    return(t);
  }
  t = iowrap_4(t, d_76, e_76, f_76, z_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  t = iowrap_3(t, b_76, c_76, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = _2(t, _id, y_75);
    return(t);
  }
  t = iowrap_2(t, b_4, _fail);
  return(t);
}
ATerm io_fc_tree_grammar_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm g_17;
    g_17 = t;
    t = fc_TreeGrammar_0(t);
    t = g_17;
    return(t);
  }
  t = iowrap_1(t, c_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_fc_tree_grammar_0(t);
  return(t);
}
