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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
ATerm term_i_17;
ATerm term_v_16;
ATerm term_f_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_g_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_k_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_e_7;
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
  term_s_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_s_6);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_i_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_a_11, term_s_6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_s_6);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_x_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_s_6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__3, term_w_14, term_x_14, (ATerm) ATempty);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Int_0 (ATerm);
ATerm String_0 (ATerm);
ATerm Param_1 (ATerm, ATerm o_0 (ATerm));
ATerm fc_Arg_0 (ATerm);
ATerm NonTermRef_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm fc_ProdItem_0 (ATerm);
ATerm Prod_2 (ATerm, ATerm i_54 (ATerm), ATerm j_54 (ATerm));
ATerm fc_Prod_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm Id_1 (ATerm, ATerm n_54 (ATerm));
ATerm fc_Id_0 (ATerm);
ATerm NonTermDec_3 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm), ATerm h_54 (ATerm));
ATerm fc_NonTermDec_0 (ATerm);
ATerm fc_List_1 (ATerm, ATerm n_60 (ATerm));
ATerm TreeGrammar_1 (ATerm, ATerm c_54 (ATerm));
ATerm fc_TreeGrammar_0 (ATerm);
ATerm _2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_75 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm r_80 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_77 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_80 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_63 (ATerm), ATerm t_63 (ATerm));
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
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_71 (ATerm), ATerm d_71 (ATerm));
ATerm crush_2 (ATerm, ATerm a_69 (ATerm), ATerm b_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_75 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_82 (ATerm));
ATerm map_1 (ATerm, ATerm q_64 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_82 (ATerm));
ATerm Program_1 (ATerm, ATerm s_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm t_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_82 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_77 (ATerm));
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
          ;
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
          ;
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
            ;
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
          ATerm c_0 (ATerm t)
          {
            t = fc_List_1(t, fc_Arg_0);
            return(t);
          }
          t = NonTermRef_2(t, fc_Id_0, c_0);
          ;
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
                ;
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
                      ;
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
      ;
      LocalPopChoice(r_4);
    }
  else
    {
      t = q_4;
      {
        ATerm e_0 (ATerm t)
        {
          ATerm f_0 (ATerm t)
          {
            t = term_z_4;
            return(t);
          }
          t = debug_1(t, f_0);
          return(t);
        }
        t = if_verbose2_1(t, e_0);
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
            ;
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
                  ;
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
          ATerm h_0 (ATerm t)
          {
            t = fc_List_1(t, fc_Arg_0);
            return(t);
          }
          t = NonTermRef_2(t, fc_Id_0, h_0);
          ;
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
                ;
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
                      ;
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
      ;
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
ATerm Prod_2 (ATerm t, ATerm i_54 (ATerm), ATerm j_54 (ATerm))
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
            t = i_54(t);
            {
              s_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm w_10 = NULL;
                  t = j_54(t);
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
      ;
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
ATerm Id_1 (ATerm t, ATerm n_54 (ATerm))
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
            t = n_54(t);
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
      ;
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
ATerm NonTermDec_3 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm), ATerm h_54 (ATerm))
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
            t = f_54(t);
            {
              r_12 = t;
              {
                t = not_null(j_12);
                {
                  ATerm v_12 = NULL;
                  t = g_54(t);
                  {
                    t_12 = t;
                    {
                      t = not_null(k_12);
                      {
                        ATerm x_12 = NULL;
                        t = h_54(t);
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
      ;
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
ATerm fc_List_1 (ATerm t, ATerm n_60 (ATerm))
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
          ;
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
          {
            ATerm b_1 (ATerm t)
            {
              t = fc_List_1(t, n_60);
              return(t);
            }
            t = Cons_2(t, n_60, b_1);
          }
        }
      ;
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
ATerm TreeGrammar_1 (ATerm t, ATerm c_54 (ATerm))
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
            t = c_54(t);
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
      ;
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
ATerm _2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
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
            t = r_52(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = s_52(t);
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
  ATerm r_6;
  r_6 = t;
  {
    ATerm y_14 = NULL;
    ATerm z_14 = NULL;
    t = term_s_6;
    {
      t = whoami_0(t);
      {
        z_14 = t;
        if(((y_14 != NULL) && (y_14 != z_14)))
          _fail(z_14);
        else
          y_14 = z_14;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(y_14)), term_z_6));
      {
        t = printnl_0(t);
        {
          t = term_e_7;
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
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym__2))
    {
      e_15 = ATgetArgument(d_15, 0);
      f_15 = ATgetArgument(d_15, 1);
      {
        ATerm h_7;
        h_7 = t;
        t = SSL_printnl(not_null(e_15), not_null(f_15));
        t = h_7;
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
  ATerm k_15 = NULL;
  k_15 = t;
  t = SSL_implode_string(not_null(k_15));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
        p_15 = t;
        o_15 :
        if(((ATgetType(p_15) == AT_LIST) && !(ATisEmpty(p_15))))
          {
            q_15 = ATgetFirst((ATermList) p_15);
            r_15 = (ATerm) ATgetNext((ATermList) p_15);
            {
              t = not_null(q_15);
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(r_15);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm d_16 = NULL;
  b_16 = t;
  {
    ATerm e_16 = NULL;
    ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
    t = not_null(b_16);
    {
      e_16 = t;
      {
        t = SSL_explode_term(not_null(e_16));
        {
          g_16 = t;
          z_15 :
          if(match_cons(g_16, sym__2))
            {
              h_16 = ATgetArgument(g_16, 0);
              i_16 = ATgetArgument(g_16, 1);
              a_16 :
              if(match_string(h_16, ""))
                {
                  if(((d_16 != NULL) && (d_16 != i_16)))
                    _fail(i_16);
                  else
                    d_16 = i_16;
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
      t = not_null(d_16);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm m_16 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_16);
        ;
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          t = Nil_0(t);
          t = f_65(t);
        }
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(r_16);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  t = SSL_explode_string(not_null(w_16));
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
ATerm eval_config_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_1);
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
            {
              ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
              f_17 = t;
              e_17 :
              if(match_cons(f_17, sym_Path_1))
                {
                  g_17 = ATgetArgument(f_17, 0);
                  t = not_null(g_17);
                }
              else
                {
                  if(match_cons(f_17, sym_Var_1))
                    {
                      g_17 = ATgetArgument(f_17, 0);
                      {
                        t = not_null(g_17);
                        {
                          ATerm s_7 = t;
                          int t_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(t_7);
                            }
                          else
                            {
                              t = s_7;
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_u_7;
                                  return(t);
                                }
                                t = debug_1(t, m_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_17, sym_Prefix_2))
                        {
                          g_17 = ATgetArgument(f_17, 0);
                          h_17 = ATgetArgument(f_17, 1);
                          {
                            ATerm m_17 = NULL,o_17 = NULL;
                            ATerm v_7;
                            v_7 = t;
                            {
                              ATerm n_17 = NULL;
                              t = not_null(g_17);
                              {
                                t = eval_config_0(t);
                                {
                                  n_17 = t;
                                  if(((m_17 != NULL) && (m_17 != n_17)))
                                    _fail(n_17);
                                  else
                                    m_17 = n_17;
                                }
                              }
                            }
                            t = v_7;
                            {
                              ATerm p_17 = NULL;
                              t = not_null(h_17);
                              {
                                t = eval_config_0(t);
                                {
                                  p_17 = t;
                                  if(((o_17 != NULL) && (o_17 != p_17)))
                                    _fail(p_17);
                                  else
                                    o_17 = p_17;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(o_17));
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
  ATerm x_17 = NULL;
  x_17 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(x_17));
    {
      t = table_get_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_7;
            x_7 = t;
            {
              ATerm z_17 = NULL;
              ATerm a_18 = NULL;
              a_18 = t;
              if(((z_17 != NULL) && (z_17 != a_18)))
                _fail(a_18);
              else
                z_17 = a_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(x_17), not_null(z_17));
                t = table_put_0(t);
              }
            }
            t = x_7;
          }
          return(t);
        }
        t = try_1(t, n_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm y_7;
    y_7 = t;
    {
      ATerm e_18 = NULL;
      ATerm f_18 = NULL;
      t = term_z_7;
      {
        t = get_config_0(t);
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), term_a_8);
        t = geq_0(t);
      }
    }
    t = y_7;
    t = q_75(t);
    return(t);
  }
  t = try_1(t, o_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  l_18 = t;
  j_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      k_18 :
      if(match_cons(n_18, sym_Stream_1))
        {
          o_18 = ATgetArgument(n_18, 0);
          {
            ATerm r_18 = NULL;
            t = SSL_fputc(not_null(m_18), not_null(o_18));
            {
              ATerm s_18 = NULL;
              s_18 = t;
              if(((r_18 != NULL) && (r_18 != s_18)))
                _fail(s_18);
              else
                r_18 = s_18;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_18));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  z_18 = t;
  x_18 :
  if(match_cons(z_18, sym__2))
    {
      a_19 = ATgetArgument(z_18, 0);
      c_19 = ATgetArgument(z_18, 1);
      y_18 :
      if(match_cons(a_19, sym_Stream_1))
        {
          b_19 = ATgetArgument(a_19, 0);
          {
            ATerm f_19 = NULL;
            t = SSL_write_term_to_stream_text(not_null(b_19), not_null(c_19));
            {
              ATerm g_19 = NULL;
              g_19 = t;
              if(((f_19 != NULL) && (f_19 != g_19)))
                _fail(g_19);
              else
                f_19 = g_19;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_19));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm k_19 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm l_19 = NULL;
      l_19 = t;
      if(((k_19 != NULL) && (k_19 != l_19)))
        _fail(l_19);
      else
        k_19 = l_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(k_19));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, p_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  r_19 = t;
  p_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      u_19 = ATgetArgument(r_19, 1);
      q_19 :
      if(match_cons(s_19, sym_Stream_1))
        {
          t_19 = ATgetArgument(s_19, 0);
          {
            ATerm x_19 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(t_19), not_null(u_19));
            {
              ATerm y_19 = NULL;
              y_19 = t;
              if(((x_19 != NULL) && (x_19 != y_19)))
                _fail(y_19);
              else
                x_19 = y_19;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_19));
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
ATerm WriteToFile_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        ATerm o_20 = NULL,q_20 = NULL;
        t = not_null(k_20);
        {
          ATerm p_20 = NULL;
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_c_8);
            {
              t = open_stream_0(t);
              {
                ATerm r_20 = NULL;
                r_20 = t;
                if(((q_20 != NULL) && (q_20 != r_20)))
                  _fail(r_20);
                else
                  q_20 = r_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(l_20));
                  {
                    t = r_80(t);
                    {
                      t = fclose_0(t);
                      t = not_null(l_20);
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
ATerm output_file_0 (ATerm t)
{
  ATerm z_20 = NULL;
  ATerm d_8;
  d_8 = t;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            ATerm a_21 = NULL,b_21 = NULL;
            a_21 = t;
            w_20 :
            if(match_cons(a_21, sym_Output_1))
              {
                b_21 = ATgetArgument(a_21, 0);
                if(((z_20 != NULL) && (z_20 != b_21)))
                  _fail(b_21);
                else
                  z_20 = b_21;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_1);
          ;
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm c_21 = NULL;
            t = term_k_8;
            {
              c_21 = t;
              if(((z_20 != NULL) && (z_20 != c_21)))
                _fail(c_21);
              else
                z_20 = c_21;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_1, _id);
  }
  t = d_8;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        t = not_null(z_20);
        return(t);
      }
      t = split_2(t, t_1, _id);
      return(t);
    }
    t = _2(t, _id, s_1);
    {
      ATerm o_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              ATerm d_21 = NULL;
              d_21 = t;
              y_20 :
              if(!(match_cons(d_21, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_1);
            return(t);
          }
          t = _2(t, u_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(q_8);
        }
      else
        {
          t = o_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm m_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  ATerm t_8;
  t_8 = t;
  t = dtime_0(t);
  t = t_8;
  {
    t = f_77(t);
    {
      ATerm u_8;
      u_8 = t;
      {
        ATerm n_21 = NULL;
        t = dtime_0(t);
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
      }
      t = u_8;
      {
        o_21 = t;
        l_21 :
        if(match_cons(o_21, sym__2))
          {
            p_21 = ATgetArgument(o_21, 0);
            q_21 = ATgetArgument(o_21, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_21)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_21))), not_null(q_21));
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
ATerm fclose_0 (ATerm t)
{
  ATerm y_21 = NULL,c_22 = NULL;
  ATerm i_22 (ATerm t)
  {
    t = SSL_fclose(not_null(c_22));
    return(t);
  }
  c_22 = t;
  x_21 :
  if(match_cons(c_22, sym_Stream_1))
    {
      y_21 = ATgetArgument(c_22, 0);
      {
        ATerm v_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_21));
            ;
            LocalPopChoice(z_8);
          }
        else
          {
            t = v_8;
            t = i_22(t);
          }
      }
    }
  else
    {
      t = i_22(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Stream_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      t = SSL_read_term_from_stream(not_null(m_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm b_9;
  b_9 = t;
  {
    ATerm r_22 = NULL,t_22 = NULL;
    ATerm e_9;
    e_9 = t;
    {
      ATerm s_22 = NULL;
      t = d_80(t);
      {
        s_22 = t;
        if(((r_22 != NULL) && (r_22 != s_22)))
          _fail(s_22);
        else
          r_22 = s_22;
      }
    }
    t = e_9;
    {
      ATerm u_22 = NULL;
      u_22 = t;
      if(((t_22 != NULL) && (t_22 != u_22)))
        _fail(u_22);
      else
        t_22 = u_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_22)), not_null(r_22)));
        t = printnl_0(t);
      }
    }
  }
  t = b_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym__2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      {
        ATerm f_23 = NULL;
        t = SSL_fopen(not_null(b_23), not_null(c_23));
        {
          ATerm g_23 = NULL;
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_23));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  t = SSL_is_string(not_null(r_23));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm w_23 = NULL;
    w_23 = t;
    if(((v_23 != NULL) && (v_23 != w_23)))
      _fail(w_23);
    else
      v_23 = w_23;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_23));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm z_23 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm a_24 = NULL;
    a_24 = t;
    if(((z_23 != NULL) && (z_23 != a_24)))
      _fail(a_24);
    else
      z_23 = a_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_23));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm d_24 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm e_24 = NULL;
    e_24 = t;
    if(((d_24 != NULL) && (d_24 != e_24)))
      _fail(e_24);
    else
      d_24 = e_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_24));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(m_24, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(m_24, sym_stdin_0))
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
  ATerm w_24 = NULL;
  ATerm y_24 = NULL,z_24 = NULL;
  w_24 = t;
  {
    ATerm a_25 = NULL;
    ATerm c_25 = NULL,d_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
    t = not_null(w_24);
    {
      a_25 = t;
      {
        t = SSL_explode_term(not_null(a_25));
        {
          c_25 = t;
          t_24 :
          if(match_cons(c_25, sym__2))
            {
              d_25 = ATgetArgument(c_25, 0);
              j_25 = ATgetArgument(c_25, 1);
              u_24 :
              if(match_string(d_25, ""))
                {
                  v_24 :
                  if(((ATgetType(j_25) == AT_LIST) && !(ATisEmpty(j_25))))
                    {
                      k_25 = ATgetFirst((ATermList) j_25);
                      l_25 = (ATerm) ATgetNext((ATermList) j_25);
                      {
                        if(((z_24 != NULL) && (z_24 != k_25)))
                          _fail(k_25);
                        else
                          z_24 = k_25;
                        if(((y_24 != NULL) && (y_24 != l_25)))
                          _fail(l_25);
                        else
                          y_24 = l_25;
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
    t = not_null(z_24);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym__2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm k_9 = t;
              int m_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm w_25 = NULL,a_26 = NULL;
                    w_25 = t;
                    r_25 :
                    if(match_cons(w_25, sym_Path_1))
                      {
                        a_26 = ATgetArgument(w_25, 0);
                        t = not_null(a_26);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, w_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(m_9);
                }
              else
                {
                  t = k_9;
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
  ATerm i_26 = NULL;
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_26 = NULL;
      ATerm h_26 = NULL;
      h_26 = t;
      if(((g_26 != NULL) && (g_26 != h_26)))
        _fail(h_26);
      else
        g_26 = h_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), term_r_9);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_s_9;
          return(t);
        }
        t = debug_1(t, x_1);
        _fail(t);
      }
    }
  {
    ATerm t_9;
    t_9 = t;
    {
      ATerm j_26 = NULL;
      t = read_from_stream_0(t);
      {
        j_26 = t;
        if(((i_26 != NULL) && (i_26 != j_26)))
          _fail(j_26);
        else
          i_26 = j_26;
      }
    }
    t = t_9;
    {
      t = fclose_0(t);
      t = not_null(i_26);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_63 (ATerm), ATerm t_63 (ATerm))
{
  ATerm o_26 = NULL,q_26 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm p_26 = NULL;
    t = s_63(t);
    {
      p_26 = t;
      if(((o_26 != NULL) && (o_26 != p_26)))
        _fail(p_26);
      else
        o_26 = p_26;
    }
  }
  t = u_9;
  {
    ATerm r_26 = NULL;
    t = t_63(t);
    {
      r_26 = t;
      if(((q_26 != NULL) && (q_26 != r_26)))
        _fail(r_26);
      else
        q_26 = r_26;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(q_26));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_26 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm y_26 = NULL,z_26 = NULL;
          y_26 = t;
          v_26 :
          if(match_cons(y_26, sym_Input_1))
            {
              z_26 = ATgetArgument(y_26, 0);
              if(((x_26 != NULL) && (x_26 != z_26)))
                _fail(z_26);
              else
                x_26 = z_26;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_1);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          ATerm a_27 = NULL;
          t = term_y_9;
          {
            a_27 = t;
            if(((x_26 != NULL) && (x_26 != a_27)))
              _fail(a_27);
            else
              x_26 = a_27;
          }
        }
      }
  }
  t = v_9;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(x_26);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm e_27 = NULL;
    e_27 = t;
    d_27 :
    if(!(match_string(e_27, "-v")))
      {
        if(!(match_string(e_27, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_a_10;
    t = set_config_0(t);
    t = term_b_10;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_c_10;
    return(t);
  }
  t = Option_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm h_27 = NULL;
    h_27 = t;
    f_27 :
    if(!(match_string(h_27, "-k")))
      {
        if(!(match_string(h_27, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm i_27 = NULL;
      ATerm j_27 = NULL;
      t = string_to_int_0(t);
      {
        j_27 = t;
        if(((i_27 != NULL) && (i_27 != j_27)))
          _fail(j_27);
        else
          i_27 = j_27;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(i_27));
        t = set_config_0(t);
      }
    }
    t = d_10;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_f_10;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = SSL_string_to_int(not_null(m_27));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm u_27 = NULL;
        u_27 = t;
        p_27 :
        if(!(match_string(u_27, "-S")))
          {
            if(!(match_string(u_27, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_n_10;
        t = set_config_0(t);
        t = term_o_10;
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_p_10;
        return(t);
      }
      t = Option_3(t, g_2, h_2, i_2);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm t_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm v_27 = NULL;
              v_27 = t;
              q_27 :
              if(!(match_string(v_27, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              ATerm y_27 = NULL;
              ATerm y_10;
              y_10 = t;
              {
                ATerm w_27 = NULL;
                ATerm x_27 = NULL;
                t = string_to_int_0(t);
                {
                  x_27 = t;
                  if(((w_27 != NULL) && (w_27 != x_27)))
                    _fail(x_27);
                  else
                    w_27 = x_27;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(w_27));
                  t = set_config_0(t);
                }
              }
              t = y_10;
              {
                ATerm z_27 = NULL;
                z_27 = t;
                if(((y_27 != NULL) && (y_27 != z_27)))
                  _fail(z_27);
                else
                  y_27 = z_27;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_27));
              }
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              t = term_z_10;
              return(t);
            }
            t = ArgOption_3(t, j_2, k_2, l_2);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = t_10;
            {
              ATerm m_2 (ATerm t)
              {
                ATerm a_28 = NULL;
                a_28 = t;
                t_27 :
                if(!(match_string(a_28, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_b_11;
                t = set_config_0(t);
                t = term_c_11;
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = term_d_11;
                return(t);
              }
              t = Option_3(t, m_2, n_2, o_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm g_28 = NULL;
    g_28 = t;
    d_28 :
    if(!(match_string(g_28, "-o")))
      {
        if(!(match_string(g_28, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm j_28 = NULL;
    ATerm j_11;
    j_11 = t;
    {
      ATerm h_28 = NULL;
      ATerm i_28 = NULL;
      i_28 = t;
      if(((h_28 != NULL) && (h_28 != i_28)))
        _fail(i_28);
      else
        h_28 = i_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(h_28));
        t = set_config_0(t);
      }
    }
    t = j_11;
    {
      ATerm k_28 = NULL;
      k_28 = t;
      if(((j_28 != NULL) && (j_28 != k_28)))
        _fail(k_28);
      else
        j_28 = k_28;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_28));
    }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_o_11;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = p_11;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm o_28 = NULL;
          o_28 = t;
          n_28 :
          if(!(match_string(o_28, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          t = term_x_11;
          t = set_config_0(t);
          t = term_y_11;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_z_11;
          return(t);
        }
        t = Option_3(t, s_2, t_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  u_28 = t;
  s_28 :
  if(match_string(u_28, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
        {
          v_28 = ATgetFirst((ATermList) u_28);
          w_28 = (ATerm) ATgetNext((ATermList) u_28);
          t_28 :
          if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
            {
              x_28 = ATgetFirst((ATermList) w_28);
              y_28 = (ATerm) ATgetNext((ATermList) w_28);
              {
                ATerm c_29 = NULL;
                ATerm a_12;
                a_12 = t;
                {
                  t = not_null(v_28);
                  t = j_0(t);
                }
                t = a_12;
                {
                  ATerm d_29 = NULL;
                  t = not_null(x_28);
                  {
                    t = k_0(t);
                    {
                      d_29 = t;
                      if(((c_29 != NULL) && (c_29 != d_29)))
                        _fail(d_29);
                      else
                        c_29 = d_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_28)), not_null(c_29));
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
  ATerm v_2 (ATerm t)
  {
    ATerm k_29 = NULL;
    k_29 = t;
    h_29 :
    if(!(match_string(k_29, "-i")))
      {
        if(!(match_string(k_29, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm n_29 = NULL;
    ATerm b_12;
    b_12 = t;
    {
      ATerm l_29 = NULL;
      ATerm m_29 = NULL;
      m_29 = t;
      if(((l_29 != NULL) && (l_29 != m_29)))
        _fail(m_29);
      else
        l_29 = m_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(l_29));
        t = set_config_0(t);
      }
    }
    t = b_12;
    {
      ATerm o_29 = NULL;
      o_29 = t;
      if(((n_29 != NULL) && (n_29 != o_29)))
        _fail(o_29);
      else
        n_29 = o_29;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_29));
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_d_12;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm s_29 = NULL;
  t = report_run_time_0(t);
  {
    ATerm t_29 = NULL;
    t = term_s_6;
    {
      t = whoami_0(t);
      {
        t_29 = t;
        if(((s_29 != NULL) && (s_29 != t_29)))
          _fail(t_29);
        else
          s_29 = t_29;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_n_12), not_null(s_29)));
      {
        t = printnl_0(t);
        {
          t = term_e_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_12;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_TicksToSeconds(not_null(w_29));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym__2))
    {
      c_30 = ATgetArgument(b_30, 0);
      d_30 = ATgetArgument(b_30, 1);
      {
        ATerm s_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_30), not_null(d_30));
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = s_12;
            t = SSL_addr(not_null(c_30), not_null(d_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_71 (ATerm), ATerm d_71 (ATerm))
{
  ATerm w_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_71(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = w_12;
      {
        ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
        k_30 = t;
        j_30 :
        if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
          {
            l_30 = ATgetFirst((ATermList) k_30);
            m_30 = (ATerm) ATgetNext((ATermList) k_30);
            {
              ATerm q_30 = NULL;
              ATerm r_30 = NULL;
              t = not_null(m_30);
              {
                t = foldr_2(t, c_71, d_71);
                {
                  r_30 = t;
                  if(((q_30 != NULL) && (q_30 != r_30)))
                    _fail(r_30);
                  else
                    q_30 = r_30;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(q_30));
                t = d_71(t);
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
ATerm crush_2 (ATerm t, ATerm a_69 (ATerm), ATerm b_69 (ATerm))
{
  ATerm y_30 = NULL;
  ATerm a_31 = NULL;
  y_30 = t;
  {
    ATerm b_31 = NULL;
    ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
    t = not_null(y_30);
    {
      b_31 = t;
      {
        t = SSL_explode_term(not_null(b_31));
        {
          d_31 = t;
          x_30 :
          if(match_cons(d_31, sym__2))
            {
              e_31 = ATgetArgument(d_31, 0);
              f_31 = ATgetArgument(d_31, 1);
              if(((a_31 != NULL) && (a_31 != f_31)))
                _fail(f_31);
              else
                a_31 = f_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_31);
      t = foldr_2(t, a_69, b_69);
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
    ATerm y_2 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    t = crush_2(t, y_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        ATerm a_13;
        a_13 = t;
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_31), not_null(n_31));
              ;
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = SSL_gtr(not_null(m_31), not_null(n_31));
            }
        }
        t = a_13;
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
  ATerm v_31 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
      w_31 = t;
      u_31 :
      if(match_cons(w_31, sym__2))
        {
          x_31 = ATgetArgument(w_31, 0);
          y_31 = ATgetArgument(w_31, 1);
          {
            if(((v_31 != NULL) && (v_31 != x_31)))
              _fail(x_31);
            else
              v_31 = x_31;
            if(((v_31 != NULL) && (v_31 != y_31)))
              _fail(y_31);
            else
              v_31 = y_31;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm f_13;
    f_13 = t;
    {
      ATerm b_32 = NULL;
      ATerm c_32 = NULL;
      t = term_z_7;
      {
        t = get_config_0(t);
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), term_e_7);
        t = geq_0(t);
      }
    }
    t = f_13;
    t = p_75(t);
    return(t);
  }
  t = try_1(t, z_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm g_32 = NULL,i_32 = NULL;
    ATerm g_13;
    g_13 = t;
    {
      ATerm h_32 = NULL;
      t = run_time_0(t);
      {
        h_32 = t;
        if(((g_32 != NULL) && (g_32 != h_32)))
          _fail(h_32);
        else
          g_32 = h_32;
      }
    }
    t = g_13;
    {
      ATerm j_32 = NULL;
      t = term_s_6;
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_13), not_null(g_32)), term_h_13), not_null(i_32)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_i_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Version_0))
    {
      ATerm s_32 = NULL,u_32 = NULL;
      ATerm m_13;
      m_13 = t;
      {
        ATerm t_32 = NULL;
        t = SSLgetAnnotations(not_null(q_32));
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
      }
      t = m_13;
      {
        ATerm v_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_32));
        {
          v_32 = t;
          if(((u_32 != NULL) && (u_32 != v_32)))
            _fail(v_32);
          else
            u_32 = v_32;
        }
        t = not_null(u_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm n_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = n_13;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              {
                ATerm x_13 = t;
                int y_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(y_13);
                  }
                else
                  {
                    t = x_13;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, b_3);
      }
    }
  t = d_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  t = SSL_table_create(not_null(a_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  {
    ATerm z_13;
    z_13 = t;
    {
      t = term_a_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, not_null(e_33));
          t = table_put_0(t);
        }
      }
    }
    t = z_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  t = SSL_table_destroy(not_null(i_33));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  t = SSL_exit(not_null(m_33));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(((ATgetType(q_33) == AT_LIST) && ATisEmpty(q_33)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(q_33) == AT_LIST) && !(ATisEmpty(q_33))))
        {
          r_33 = ATgetFirst((ATermList) q_33);
          s_33 = (ATerm) ATgetNext((ATermList) q_33);
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
  ATerm c_14;
  c_14 = t;
  {
    ATerm v_33 = NULL;
    ATerm y_33 = NULL;
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm w_33 = NULL;
          ATerm x_33 = NULL;
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
          t = (ATerm) ATinsert(ATempty, not_null(w_33));
        }
      }
    {
      y_33 = t;
      if(((v_33 != NULL) && (v_33 != y_33)))
        _fail(y_33);
      else
        v_33 = y_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(v_33));
      t = printnl_0(t);
    }
  }
  t = c_14;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm b_34 (ATerm t)
  {
    ATerm j_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = j_14;
        t = Cons_2(t, q_64, b_34);
      }
    return(t);
  }
  t = b_34(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  k_34 = t;
  h_34 :
  if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
    {
      i_34 = ATgetFirst((ATermList) k_34);
      j_34 = (ATerm) ATgetNext((ATermList) k_34);
      {
        ATerm n_34 = NULL;
        t = not_null(j_34);
        {
          ATerm p_14;
          p_14 = t;
          {
            ATerm o_34 = NULL,q_34 = NULL,s_34 = NULL;
            ATerm s_14;
            s_14 = t;
            {
              ATerm p_34 = NULL;
              t = i_0(t);
              {
                p_34 = t;
                if(((o_34 != NULL) && (o_34 != p_34)))
                  _fail(p_34);
                else
                  o_34 = p_34;
              }
            }
            t = s_14;
            {
              ATerm r_34 = NULL;
              t = not_null(i_34);
              {
                t = g_0(t);
                {
                  r_34 = t;
                  if(((q_34 != NULL) && (q_34 != r_34)))
                    _fail(r_34);
                  else
                    q_34 = r_34;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_34)), not_null(q_34));
                {
                  s_34 = t;
                  if(((n_34 != NULL) && (n_34 != s_34)))
                    _fail(s_34);
                  else
                    n_34 = s_34;
                }
              }
            }
          }
          t = p_14;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(n_34);
              return(t);
            }
            t = reverse_acc_2(t, g_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_34) == AT_LIST) && ATisEmpty(k_34)))
        {
          {
            t = term_s_6;
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
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm d_35 = NULL,e_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym_Program_1))
    {
      e_35 = ATgetArgument(d_35, 0);
      {
        ATerm h_35 = NULL,j_35 = NULL;
        ATerm i_35 = NULL;
        t = SSLgetAnnotations(not_null(d_35));
        {
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
        }
        {
          t = not_null(e_35);
          {
            ATerm l_35 = NULL;
            t = s_59(t);
            {
              j_35 = t;
              {
                ATerm m_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_35)), not_null(h_35));
                {
                  m_35 = t;
                  if(((l_35 != NULL) && (l_35 != m_35)))
                    _fail(m_35);
                  else
                    l_35 = m_35;
                }
                t = not_null(l_35);
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
  ATerm v_35 = NULL;
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_35 = NULL;
      t = term_o_12;
      {
        t = get_config_0(t);
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
      }
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm f_3 (ATerm t)
          {
            ATerm x_35 = NULL;
            x_35 = t;
            if(((v_35 != NULL) && (v_35 != x_35)))
              _fail(x_35);
            else
              v_35 = x_35;
            return(t);
          }
          t = Program_1(t, f_3);
          return(t);
        }
        t = option_defined_1(t, e_3);
      }
    }
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        t = not_null(v_35);
        return(t);
      }
      t = short_description_1(t, h_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_3);
    {
      t = term_v_14;
      {
        t = echo_0(t);
        {
          t = term_a_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm y_35 = NULL;
                  ATerm z_35 = NULL;
                  z_35 = t;
                  if(((y_35 != NULL) && (y_35 != z_35)))
                    _fail(z_35);
                  else
                    y_35 = z_35;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_35)), term_b_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_3);
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm a_36 = NULL;
                    ATerm b_36 = NULL;
                    ATerm k_3 (ATerm t)
                    {
                      t = not_null(v_35);
                      return(t);
                    }
                    t = long_description_1(t, k_3);
                    {
                      b_36 = t;
                      if(((a_36 != NULL) && (a_36 != b_36)))
                        _fail(b_36);
                      else
                        a_36 = b_36;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_36)), term_g_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_3);
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
ATerm Undefined_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm l_36 = NULL,m_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Undefined_1))
    {
      m_36 = ATgetArgument(l_36, 0);
      {
        ATerm p_36 = NULL,r_36 = NULL;
        ATerm q_36 = NULL;
        t = SSLgetAnnotations(not_null(l_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        {
          t = not_null(m_36);
          {
            ATerm t_36 = NULL;
            t = t_59(t);
            {
              r_36 = t;
              {
                ATerm u_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_36)), not_null(p_36));
                {
                  u_36 = t;
                  if(((t_36 != NULL) && (t_36 != u_36)))
                    _fail(u_36);
                  else
                    t_36 = u_36;
                }
                t = not_null(t_36);
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
ATerm fetch_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm z_36 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_64, _id);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = Cons_2(t, _id, z_36);
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_81 (ATerm))
{
  t = fetch_1(t, v_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym_Help_0))
    {
      ATerm g_37 = NULL,i_37 = NULL;
      ATerm j_15;
      j_15 = t;
      {
        ATerm h_37 = NULL;
        t = SSLgetAnnotations(not_null(e_37));
        {
          h_37 = t;
          if(((g_37 != NULL) && (g_37 != h_37)))
            _fail(h_37);
          else
            g_37 = h_37;
        }
      }
      t = j_15;
      {
        ATerm j_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_37));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_72(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,u_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym__2))
    {
      q_37 = ATgetArgument(p_37, 0);
      u_37 = ATgetArgument(p_37, 1);
      t = SSL_table_get(not_null(q_37), not_null(u_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,k_38 = NULL,l_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym__3))
    {
      e_38 = ATgetArgument(d_38, 0);
      k_38 = ATgetArgument(d_38, 1);
      l_38 = ATgetArgument(d_38, 2);
      {
        ATerm n_15;
        n_15 = t;
        {
          ATerm p_38 = NULL;
          ATerm q_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), not_null(k_38));
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                t = (ATerm) ATempty;
              }
            {
              q_38 = t;
              if(((p_38 != NULL) && (p_38 != q_38)))
                _fail(q_38);
              else
                p_38 = q_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_38), not_null(k_38), (ATerm) ATinsert(CheckATermList(not_null(p_38)), not_null(l_38)));
            t = table_put_0(t);
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
ATerm register_usage_1 (ATerm t, ATerm a_83 (ATerm))
{
  ATerm u_38 = NULL;
  ATerm v_38 = NULL;
  t = term_s_6;
  {
    t = a_83(t);
    {
      v_38 = t;
      if(((u_38 != NULL) && (u_38 != v_38)))
        _fail(v_38);
      else
        u_38 = v_38;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_14, term_x_14, not_null(u_38));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_string(h_39, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(h_39) == AT_LIST) && !(ATisEmpty(h_39))))
        {
          i_39 = ATgetFirst((ATermList) h_39);
          j_39 = (ATerm) ATgetNext((ATermList) h_39);
          {
            ATerm m_39 = NULL;
            ATerm u_15;
            u_15 = t;
            {
              t = not_null(i_39);
              t = a_0(t);
            }
            t = u_15;
            {
              ATerm n_39 = NULL;
              t = term_s_6;
              {
                t = b_0(t);
                {
                  n_39 = t;
                  if(((m_39 != NULL) && (m_39 != n_39)))
                    _fail(n_39);
                  else
                    m_39 = n_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_39)), not_null(m_39));
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
  ATerm l_3 (ATerm t)
  {
    ATerm s_39 = NULL;
    s_39 = t;
    r_39 :
    if(!(match_string(s_39, "--help")))
      {
        if(!(match_string(s_39, "-h")))
          {
            if(!(match_string(s_39, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_v_15;
    {
      t = set_config_0(t);
      t = term_w_15;
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_x_15;
    return(t);
  }
  t = Option_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
    {
      w_39 = ATgetFirst((ATermList) v_39);
      x_39 = (ATerm) ATgetNext((ATermList) v_39);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_39)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_39)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  g_40 :
  if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
    {
      o_40 = ATgetFirst((ATermList) n_40);
      p_40 = (ATerm) ATgetNext((ATermList) n_40);
      {
        ATerm t_40 = NULL,v_40 = NULL;
        ATerm u_40 = NULL;
        t = SSLgetAnnotations(not_null(n_40));
        {
          u_40 = t;
          if(((t_40 != NULL) && (t_40 != u_40)))
            _fail(u_40);
          else
            t_40 = u_40;
        }
        {
          t = not_null(o_40);
          {
            ATerm x_40 = NULL;
            t = a_54(t);
            {
              v_40 = t;
              {
                t = not_null(p_40);
                {
                  ATerm z_40 = NULL;
                  t = b_54(t);
                  {
                    x_40 = t;
                    {
                      ATerm a_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_40)), not_null(v_40)), not_null(t_40));
                      {
                        a_41 = t;
                        if(((z_40 != NULL) && (z_40 != a_41)))
                          _fail(a_41);
                        else
                          z_40 = a_41;
                      }
                      t = not_null(z_40);
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
  ATerm k_41 = NULL;
  k_41 = t;
  j_41 :
  if(((ATgetType(k_41) == AT_LIST) && ATisEmpty(k_41)))
    {
      {
        ATerm m_41 = NULL,o_41 = NULL;
        ATerm y_15;
        y_15 = t;
        {
          ATerm n_41 = NULL;
          t = SSLgetAnnotations(not_null(k_41));
          {
            n_41 = t;
            if(((m_41 != NULL) && (m_41 != n_41)))
              _fail(n_41);
            else
              m_41 = n_41;
          }
        }
        t = y_15;
        {
          ATerm p_41 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_41));
          {
            p_41 = t;
            if(((o_41 != NULL) && (o_41 != p_41)))
              _fail(p_41);
            else
              o_41 = p_41;
          }
          t = not_null(o_41);
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
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym__2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_7, not_null(w_41), not_null(x_41));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_82 (ATerm))
{
  ATerm c_16;
  c_16 = t;
  {
    ATerm o_3 (ATerm t)
    {
      t = term_f_16;
      t = y_82(t);
      return(t);
    }
    t = try_1(t, o_3);
  }
  t = c_16;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm f_42 = NULL;
      ATerm j_16;
      j_16 = t;
      {
        ATerm d_42 = NULL;
        ATerm e_42 = NULL;
        e_42 = t;
        if(((d_42 != NULL) && (d_42 != e_42)))
          _fail(e_42);
        else
          d_42 = e_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_12, not_null(d_42));
          t = set_config_0(t);
        }
      }
      t = j_16;
      {
        ATerm g_42 = NULL;
        g_42 = t;
        if(((f_42 != NULL) && (f_42 != g_42)))
          _fail(g_42);
        else
          f_42 = g_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_42));
      }
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_16);
            }
          else
            {
              t = n_16;
              {
                t = y_82(t);
                t = Cons_2(t, _id, q_3);
              }
            }
          ;
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_3, q_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  ATerm t_16;
  t_16 = t;
  {
    ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
    p_42 = t;
    l_42 :
    if(match_cons(p_42, sym__3))
      {
        q_42 = ATgetArgument(p_42, 0);
        r_42 = ATgetArgument(p_42, 1);
        s_42 = ATgetArgument(p_42, 2);
        {
          if(((m_42 != NULL) && (m_42 != q_42)))
            _fail(q_42);
          else
            m_42 = q_42;
          {
            if(((n_42 != NULL) && (n_42 != r_42)))
              _fail(r_42);
            else
              n_42 = r_42;
            {
              if(((o_42 != NULL) && (o_42 != s_42)))
                _fail(s_42);
              else
                o_42 = s_42;
              t = SSL_table_put(not_null(m_42), not_null(n_42), not_null(o_42));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_82 (ATerm))
{
  ATerm v_42 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    t = term_v_16;
    t = table_put_0(t);
  }
  t = u_16;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_82(t);
          ;
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_3);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_17;
            b_17 = t;
            {
              ATerm c_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = c_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_17;
            {
              t = system_usage_0(t);
              {
                t = term_i_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm t_3 (ATerm t)
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm w_42 = NULL;
                  w_42 = t;
                  if(((v_42 != NULL) && (v_42 != w_42)))
                    _fail(w_42);
                  else
                    v_42 = w_42;
                  return(t);
                }
                t = Undefined_1(t, u_3);
                return(t);
              }
              t = option_defined_1(t, t_3);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_42)), term_i_17));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_e_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_3);
      {
        ATerm j_17;
        j_17 = t;
        {
          t = term_w_14;
          t = table_destroy_0(t);
        }
        t = j_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm))
{
  t = parse_options_1(t, f_78);
  {
    t = store_options_0(t);
    {
      t = h_78(t);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_78);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm q_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = q_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_77(t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_77);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_3, w_77, x_77, y_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm u_17;
      u_17 = t;
      {
        ATerm z_42 = NULL;
        ATerm a_43 = NULL;
        t = term_o_12;
        {
          t = get_config_0(t);
          {
            a_43 = t;
            if(((z_42 != NULL) && (z_42 != a_43)))
              _fail(a_43);
            else
              z_42 = a_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(z_42)));
          t = printnl_0(t);
        }
      }
      t = u_17;
      return(t);
    }
    t = if_verbose2_1(t, a_4);
    return(t);
  }
  t = iowrap_4(t, o_77, p_77, q_77, z_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  t = iowrap_3(t, m_77, n_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = _2(t, _id, j_77);
    return(t);
  }
  t = iowrap_2(t, b_4, _fail);
  return(t);
}
ATerm io_fc_tree_grammar_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm v_17;
    v_17 = t;
    t = fc_TreeGrammar_0(t);
    t = v_17;
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
