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
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
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
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_z_34;
ATerm term_y_34;
ATerm term_p_34;
ATerm term_d_34;
ATerm term_t_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_s_32;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_y_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_a_26;
ATerm term_r_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_v_24;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_d_20;
ATerm term_x_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_l_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_i_12;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_c_10;
ATerm term_v_9;
void init_constant_terms (void)
{
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Syntax_1, term_c_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_g_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_z_20);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_v_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_o_10);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_f_11);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_22);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_f_11);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_f_11);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_k_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_f_11);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__3, term_j_30, term_k_30, (ATerm) ATempty);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm t_74 (ATerm), ATerm u_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm g_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm k_74 (ATerm));
ATerm assert_1 (ATerm, ATerm g_75 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_78 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm k_79 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm f_73 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm m_59 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm l_74 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm e_58 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_59 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm z_64 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm i_79 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm w_52 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm o_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm n_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm p_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm union_1 (ATerm, ATerm l_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm parse_stratego_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_75 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_75 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm a_74 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm b_74 (ATerm));
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_71 (ATerm), ATerm d_71 (ATerm));
ATerm crush_2 (ATerm, ATerm a_70 (ATerm), ATerm b_70 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_77 (ATerm));
ATerm Program_1 (ATerm, ATerm d_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm f_78 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm y_50 (ATerm), ATerm z_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_78 (ATerm));
ATerm map_1 (ATerm, ATerm o_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm t_75 (ATerm), ATerm u_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm parse_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_int_to_string(not_null(c_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,u_2 = NULL;
  z_1 = t;
  l_1 :
  if(match_cons(z_1, sym__2))
    {
      b_2 = ATgetArgument(z_1, 0);
      u_2 = ATgetArgument(z_1, 1);
      {
        ATerm o_7 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_2), not_null(u_2));
            LocalPopChoice(u_9);
          }
        else
          {
            t = o_7;
            t = SSL_subtr(not_null(b_2), not_null(u_2));
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
  ATerm e_3 = NULL;
  ATerm f_3 = NULL,i_3 = NULL;
  ATerm h_3 = NULL;
  t = term_v_9;
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = term_c_10;
      }
    {
      h_3 = t;
      if(((f_3 != NULL) && (f_3 != h_3)))
        _fail(h_3);
      else
        f_3 = h_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), term_c_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          i_3 = t;
          if(((e_3 != NULL) && (e_3 != i_3)))
            _fail(i_3);
          else
            e_3 = i_3;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_3)), term_v_9);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(match_cons(o_3, sym__2))
    {
      p_3 = ATgetArgument(o_3, 0);
      q_3 = ATgetArgument(o_3, 1);
      t = SSL_WriteToBinaryFile(not_null(p_3), not_null(q_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm w_3 = NULL;
  ATerm y_3 = NULL;
  w_3 = t;
  {
    ATerm z_3 = NULL;
    t = xtc_new_file_0(t);
    {
      z_3 = t;
      {
        if(((y_3 != NULL) && (y_3 != z_3)))
          _fail(z_3);
        else
          y_3 = z_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), not_null(w_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(y_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_3));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, t_74, u_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  t = SSL_close_file(not_null(d_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym__2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      t = SSL_execvp(not_null(j_4), not_null(k_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = SSL_waitpid(not_null(p_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm z_4 = NULL;
  ATerm b_5 = NULL;
  z_4 = t;
  {
    t = fork_0(t);
    {
      b_5 = t;
      {
        ATerm d_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL;
            d_5 = t;
            v_4 :
            if(match_int(d_5, 0))
              {
                t = not_null(z_4);
                t = g_59(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(i_10);
          }
        else
          {
            t = d_10;
            {
              ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
              t = not_null(b_5);
              {
                t = waitpid_0(t);
                {
                  e_5 = t;
                  x_4 :
                  if(match_cons(e_5, sym_WaitStatus_3))
                    {
                      f_5 = ATgetArgument(e_5, 0);
                      g_5 = ATgetArgument(e_5, 1);
                      h_5 = ATgetArgument(e_5, 2);
                      y_4 :
                      if(match_int(f_5, 0))
                        {
                          t = not_null(z_4);
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
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), not_null(q_5));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, b_0);
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
ATerm xtc_command_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm w_5 = NULL;
  ATerm j_10;
  j_10 = t;
  {
    ATerm x_5 = NULL;
    t = k_74(t);
    {
      t = xtc_find_0(t);
      {
        x_5 = t;
        if(((w_5 != NULL) && (w_5 != x_5)))
          _fail(x_5);
        else
          w_5 = x_5;
      }
    }
  }
  t = j_10;
  {
    ATerm k_10;
    k_10 = t;
    {
      ATerm y_5 = NULL;
      ATerm z_5 = NULL;
      z_5 = t;
      if(((y_5 != NULL) && (y_5 != z_5)))
        _fail(z_5);
      else
        y_5 = z_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), not_null(y_5));
        t = call_0(t);
      }
    }
    t = k_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym__2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      {
        ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
        ATerm l_10;
        l_10 = t;
        {
          ATerm p_6 = NULL;
          ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
          t = g_75(t);
          {
            p_6 = t;
            {
              if(((m_6 != NULL) && (m_6 != p_6)))
                _fail(p_6);
              else
                m_6 = p_6;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_6), not_null(i_6), not_null(j_6));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_10 = t;
                    int n_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), term_o_10);
                        t = table_get_0(t);
                        LocalPopChoice(n_10);
                      }
                    else
                      {
                        t = m_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_6 = t;
                      f_6 :
                      if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
                        {
                          r_6 = ATgetFirst((ATermList) q_6);
                          s_6 = (ATerm) ATgetNext((ATermList) q_6);
                          {
                            if(((n_6 != NULL) && (n_6 != r_6)))
                              _fail(r_6);
                            else
                              n_6 = r_6;
                            {
                              if(((o_6 != NULL) && (o_6 != s_6)))
                                _fail(s_6);
                              else
                                o_6 = s_6;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_6), term_o_10, (ATerm) ATinsert(CheckATermList(not_null(o_6)), (ATerm) ATinsert(CheckATermList(not_null(n_6)), not_null(i_6))));
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
        t = l_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm q_10;
  q_10 = t;
  {
    t = l_78(t);
    {
      ATerm e_0 (ATerm t)
      {
        t = term_r_10;
        return(t);
      }
      t = debug_1(t, e_0);
    }
  }
  t = q_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  ATerm s_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
      c_7 = t;
      x_6 :
      if(match_cons(c_7, sym__2))
        {
          d_7 = ATgetArgument(c_7, 0);
          e_7 = ATgetArgument(c_7, 1);
          {
            if(((b_7 != NULL) && (b_7 != d_7)))
              _fail(d_7);
            else
              b_7 = d_7;
            if(((a_7 != NULL) && (a_7 != e_7)))
              _fail(e_7);
            else
              a_7 = e_7;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_10);
      t = SSL_open_file(not_null(b_7), not_null(a_7));
    }
  else
    {
      t = s_10;
      {
        ATerm f_7 = NULL;
        ATerm g_7 = NULL;
        ATerm f_0 (ATerm t)
        {
          t = term_y_10;
          return(t);
        }
        t = obsolete_1(t, f_0);
        {
          f_7 = t;
          {
            if(((b_7 != NULL) && (b_7 != f_7)))
              _fail(f_7);
            else
              b_7 = f_7;
            {
              ATerm c_11;
              c_11 = t;
              {
                ATerm h_7 = NULL;
                t = term_e_11;
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
              }
              t = c_11;
              t = SSL_open_file(not_null(b_7), not_null(g_7));
            }
          }
        }
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
  ATerm m_7 = NULL;
  ATerm n_7 = NULL;
  t = term_f_11;
  {
    t = new_0(t);
    {
      n_7 = t;
      if(((m_7 != NULL) && (m_7 != n_7)))
        _fail(n_7);
      else
        m_7 = n_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_7), term_g_11);
    {
      t = conc_strings_0(t);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
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
  ATerm r_7 = NULL;
  t = new_file_0(t);
  {
    r_7 = t;
    {
      ATerm j_11;
      j_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_e_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_f_11);
            {
              ATerm q_0 (ATerm t)
              {
                t = term_k_11;
                return(t);
              }
              t = assert_1(t, q_0);
            }
          }
        }
      }
      t = j_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym_stdin_0))
    {
      ATerm d_8 = NULL;
      ATerm e_8 = NULL;
      ATerm f_8 = NULL;
      t = xtc_new_file_0(t);
      {
        e_8 = t;
        {
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
          {
            ATerm g_8 = NULL;
            t = p_0(t);
            {
              g_8 = t;
              if(((f_8 != NULL) && (f_8 != g_8)))
                _fail(g_8);
              else
                f_8 = g_8;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_8)), term_l_11));
              {
                ATerm m_11 = t;
                int n_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(n_11);
                  }
                else
                  {
                    t = m_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(d_8);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_8));
    }
  else
    {
      if(match_cons(b_8, sym_FILE_1))
        {
          c_8 = ATgetArgument(b_8, 0);
          {
            ATerm i_8 = NULL;
            ATerm j_8 = NULL;
            t = not_null(c_8);
            {
              ATerm k_8 = NULL;
              t = xtc_new_file_0(t);
              {
                j_8 = t;
                {
                  if(((i_8 != NULL) && (i_8 != j_8)))
                    _fail(j_8);
                  else
                    i_8 = j_8;
                  {
                    ATerm l_8 = NULL;
                    t = p_0(t);
                    {
                      l_8 = t;
                      if(((k_8 != NULL) && (k_8 != l_8)))
                        _fail(l_8);
                      else
                        k_8 = l_8;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_8)), term_l_11), not_null(c_8)), term_o_11));
                      {
                        ATerm x_11 = t;
                        int y_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(y_11);
                          }
                        else
                          {
                            t = x_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(i_8);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_8));
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
  ATerm w_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_stdin_0))
    {
      ATerm y_8 = NULL,a_9 = NULL;
      ATerm z_11;
      z_11 = t;
      {
        ATerm z_8 = NULL;
        t = SSLgetAnnotations(not_null(w_8));
        {
          z_8 = t;
          if(((y_8 != NULL) && (y_8 != z_8)))
            _fail(z_8);
          else
            y_8 = z_8;
        }
      }
      t = z_11;
      {
        ATerm b_9 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(y_8));
        {
          b_9 = t;
          if(((a_9 != NULL) && (a_9 != b_9)))
            _fail(b_9);
          else
            a_9 = b_9;
        }
        t = not_null(a_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = t;
      int h_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(h_12);
        }
      else
        {
          t = c_12;
          t = stdin_0(t);
        }
      LocalPopChoice(b_12);
      t = xtc_transform_file_2(t, m_74, n_74);
    }
  else
    {
      t = a_12;
      t = xtc_transform_term_2(t, m_74, n_74);
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym__2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_9)), term_i_12), not_null(i_9));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm p_9 = NULL,r_9 = NULL;
  ATerm l_12;
  l_12 = t;
  {
    ATerm q_9 = NULL;
    t = r_63(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
  }
  t = l_12;
  {
    ATerm s_9 = NULL;
    t = s_63(t);
    {
      s_9 = t;
      if(((r_9 != NULL) && (r_9 != s_9)))
        _fail(s_9);
      else
        r_9 = s_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(r_9));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm k_79 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm r_0 (ATerm t)
    {
      t = term_f_11;
      t = k_79(t);
      return(t);
    }
    t = split_2(t, _id, r_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm if_keep1_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_12;
      o_12 = t;
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = term_t_12;
        {
          t = get_config_0(t);
          {
            x_9 = t;
            if(((w_9 != NULL) && (w_9 != x_9)))
              _fail(x_9);
            else
              w_9 = x_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_c_10);
          t = geq_0(t);
        }
      }
      t = o_12;
      t = f_73(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12;
      w_12 = t;
      {
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            b_10 = t;
            if(((a_10 != NULL) && (a_10 != b_10)))
              _fail(b_10);
            else
              a_10 = b_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_x_12);
          t = geq_0(t);
        }
      }
      t = w_12;
      t = m_59(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym__2))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      t = SSL_rename(not_null(g_10), not_null(h_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_FILE_1))
    {
      v_10 = ATgetArgument(u_10, 0);
      {
        ATerm z_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL;
            t = n_0(t);
            {
              x_10 = t;
              p_10 :
              if(match_cons(x_10, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), term_e_13);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(v_10);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_e_13;
            LocalPopChoice(b_13);
          }
        else
          {
            t = z_12;
            {
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_10 = NULL;
                  ATerm a_11 = NULL;
                  t = n_0(t);
                  {
                    a_11 = t;
                    {
                      if(((z_10 != NULL) && (z_10 != a_11)))
                        _fail(a_11);
                      else
                        z_10 = a_11;
                      {
                        ATerm h_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm k_13 = t;
                            int l_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(l_13);
                              }
                            else
                              {
                                t = k_13;
                                {
                                  ATerm b_11 = NULL;
                                  b_11 = t;
                                  if(((v_10 != NULL) && (v_10 != b_11)))
                                    _fail(b_11);
                                  else
                                    v_10 = b_11;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(z_10));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_10));
                  LocalPopChoice(g_13);
                }
              else
                {
                  t = f_13;
                  {
                    ATerm d_11 = NULL;
                    t = n_0(t);
                    {
                      d_11 = t;
                      if(((v_10 != NULL) && (v_10 != d_11)))
                        _fail(d_11);
                      else
                        v_10 = d_11;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_10));
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
ATerm xtc_transform_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, l_74, s_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_o_13;
      return(t);
    }
    t = debug_1(t, u_0);
    return(t);
  }
  t = if_verbose6_1(t, t_0);
  {
    ATerm p_13;
    p_13 = t;
    {
      ATerm q_11 = NULL;
      ATerm v_0 (ATerm t)
      {
        t = term_q_13;
        return(t);
      }
      t = guarantee_extension_1(t, v_0);
      {
        q_11 = t;
        if(((p_11 != NULL) && (p_11 != q_11)))
          _fail(q_11);
        else
          p_11 = q_11;
      }
    }
    t = p_13;
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_11 = NULL;
          t = not_null(p_11);
          {
            ATerm w_0 (ATerm t)
            {
              t = term_y_13;
              return(t);
            }
            t = find_in_includes_1(t, w_0);
            {
              ATerm s_11 = NULL;
              s_11 = t;
              if(((r_11 != NULL) && (r_11 != s_11)))
                _fail(s_11);
              else
                r_11 = s_11;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_11));
            }
          }
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm t_11 = NULL;
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = term_b_14;
                return(t);
              }
              t = say_1(t, y_0);
              return(t);
            }
            t = if_verbose2_1(t, x_0);
            {
              ATerm u_11 = NULL;
              ATerm z_0 (ATerm t)
              {
                t = term_c_14;
                return(t);
              }
              t = guarantee_extension_1(t, z_0);
              {
                u_11 = t;
                if(((t_11 != NULL) && (t_11 != u_11)))
                  _fail(u_11);
                else
                  t_11 = u_11;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_11));
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_d_14;
                    return(t);
                  }
                  ATerm b_1 (ATerm t)
                  {
                    t = term_e_14;
                    {
                      t = get_config_0(t);
                      {
                        ATerm c_1 (ATerm t)
                        {
                          ATerm v_11 = NULL;
                          ATerm w_11 = NULL;
                          w_11 = t;
                          if(((v_11 != NULL) && (v_11 != w_11)))
                            _fail(w_11);
                          else
                            v_11 = w_11;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_11)), term_e_14);
                          return(t);
                        }
                        t = map_1(t, c_1);
                        t = concat_0(t);
                      }
                    }
                    return(t);
                  }
                  t = xtc_transform_2(t, a_1, b_1);
                  {
                    ATerm d_1 (ATerm t)
                    {
                      t = term_f_14;
                      return(t);
                    }
                    t = xtc_transform_1(t, d_1);
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = not_null(p_11);
                        return(t);
                      }
                      t = rename_to_1(t, e_1);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        t = not_null(g_12);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm j_12 = NULL;
            ATerm k_12 = NULL;
            k_12 = t;
            if(((j_12 != NULL) && (j_12 != k_12)))
              _fail(k_12);
            else
              j_12 = k_12;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_12)), term_g_14), not_null(j_12));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, f_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_includes_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm p_12 = NULL,r_12 = NULL;
  ATerm h_14;
  h_14 = t;
  {
    ATerm q_12 = NULL;
    q_12 = t;
    if(((p_12 != NULL) && (p_12 != q_12)))
      _fail(q_12);
    else
      p_12 = q_12;
  }
  t = h_14;
  {
    ATerm s_12 = NULL;
    t = term_e_14;
    {
      t = get_config_0(t);
      {
        s_12 = t;
        if(((r_12 != NULL) && (r_12 != s_12)))
          _fail(s_12);
        else
          r_12 = s_12;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), not_null(r_12));
      {
        t = find_in_path_0(t);
        {
          ATerm g_1 (ATerm t)
          {
            t = debug_1(t, e_58);
            return(t);
          }
          t = if_verbose2_1(t, g_1);
        }
      }
    }
  }
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm a_13 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = term_l_14;
      return(t);
    }
    t = debug_1(t, i_1);
    return(t);
  }
  t = if_verbose6_1(t, h_1);
  {
    y_12 = t;
    {
      ATerm j_1 (ATerm t)
      {
        t = term_n_14;
        return(t);
      }
      t = guarantee_extension_1(t, j_1);
      {
        a_13 = t;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_13 = NULL;
              ATerm k_1 (ATerm t)
              {
                t = term_t_14;
                return(t);
              }
              t = find_in_includes_1(t, k_1);
              {
                ATerm d_13 = NULL;
                d_13 = t;
                if(((c_13 != NULL) && (c_13 != d_13)))
                  _fail(d_13);
                else
                  c_13 = d_13;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_13));
              }
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = term_u_14;
                    return(t);
                  }
                  t = say_1(t, n_1);
                  return(t);
                }
                t = if_verbose2_1(t, m_1);
                {
                  t = not_null(y_12);
                  {
                    t = get_syntax_definition_0(t);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        t = term_v_14;
                        return(t);
                      }
                      ATerm p_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_12)), term_w_14);
                        return(t);
                      }
                      t = xtc_transform_2(t, o_1, p_1);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = not_null(a_13);
                          return(t);
                        }
                        t = rename_to_1(t, q_1);
                      }
                    }
                  }
                }
              }
            }
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = term_t_14;
                return(t);
              }
              t = debug_1(t, s_1);
              return(t);
            }
            t = if_verbose6_1(t, r_1);
          }
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm z_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_15;
      g_15 = t;
      {
        ATerm i_13 = NULL;
        ATerm j_13 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            j_13 = t;
            if(((i_13 != NULL) && (i_13 != j_13)))
              _fail(j_13);
            else
              i_13 = j_13;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), term_j_15);
          t = geq_0(t);
        }
      }
      t = g_15;
      t = l_59(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = z_14;
      {
      }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm m_13 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm n_13 = NULL;
    t = z_64(t);
    {
      n_13 = t;
      if(((m_13 != NULL) && (m_13 != n_13)))
        _fail(n_13);
      else
        m_13 = n_13;
    }
    return(t);
  }
  t = fetch_1(t, t_1);
  t = not_null(m_13);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_stdin_0))
    {
      ATerm w_13 = NULL;
      ATerm x_13 = NULL;
      t = term_m_15;
      {
        t = ReadFromFile_0(t);
        {
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
        }
      }
      t = not_null(w_13);
    }
  else
    {
      if(match_cons(u_13, sym_FILE_1))
        {
          v_13 = ATgetArgument(u_13, 0);
          {
            ATerm z_13 = NULL;
            ATerm a_14 = NULL;
            t = not_null(v_13);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  a_14 = t;
                  if(((z_13 != NULL) && (z_13 != a_14)))
                    _fail(a_14);
                  else
                    z_13 = a_14;
                }
              }
            }
            t = not_null(z_13);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm get_meta_0 (ATerm t)
{
  ATerm j_14 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_n_15;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose6_1(t, u_1);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_v_15;
            return(t);
          }
          t = guarantee_extension_1(t, x_1);
          return(t);
        }
        t = FILE_1(t, w_1);
        t = read_from_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_14 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm a_2 (ATerm t)
                {
                  t = term_y_15;
                  return(t);
                }
                t = guarantee_extension_1(t, a_2);
                return(t);
              }
              t = FILE_1(t, y_1);
              {
                t = read_from_0(t);
                {
                  k_14 = t;
                  {
                    ATerm m_14 = NULL;
                    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
                    t = not_null(k_14);
                    {
                      m_14 = t;
                      {
                        t = SSL_explode_term(not_null(m_14));
                        {
                          o_14 = t;
                          i_14 :
                          if(match_cons(o_14, sym__2))
                            {
                              p_14 = ATgetArgument(o_14, 0);
                              q_14 = ATgetArgument(o_14, 1);
                              if(((j_14 != NULL) && (j_14 != p_14)))
                                _fail(p_14);
                              else
                                j_14 = p_14;
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(j_14))));
                  }
                }
              }
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_d_16));
            }
        }
      }
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_n_15;
          return(t);
        }
        t = debug_1(t, d_2);
        return(t);
      }
      t = if_verbose6_1(t, c_2);
    }
  }
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_h_16;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose6_1(t, e_2);
  {
    b_15 = t;
    a_15 :
    if(match_cons(b_15, sym_FILE_1))
      {
        c_15 = ATgetArgument(b_15, 0);
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_16;
              t = get_config_0(t);
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              {
                t = get_meta_0(t);
                {
                  ATerm n_16 = t;
                  int o_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_15 = NULL,f_15 = NULL;
                      e_15 = t;
                      y_14 :
                      if(match_cons(e_15, sym_Meta_1))
                        {
                          f_15 = ATgetArgument(e_15, 0);
                          {
                            t = not_null(f_15);
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm h_15 = NULL,i_15 = NULL;
                                h_15 = t;
                                x_14 :
                                if(match_cons(h_15, sym_Syntax_1))
                                  {
                                    i_15 = ATgetArgument(h_15, 0);
                                    t = not_null(i_15);
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = fetch_elem_1(t, g_2);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      LocalPopChoice(o_16);
                    }
                  else
                    {
                      t = n_16;
                      {
                        ATerm k_15 = NULL;
                        ATerm l_15 = NULL;
                        l_15 = t;
                        if(((k_15 != NULL) && (k_15 != l_15)))
                          _fail(l_15);
                        else
                          k_15 = l_15;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), not_null(c_15)), term_r_16), not_null(k_15)), term_p_16);
                          {
                            t = error_0(t);
                            _fail(t);
                          }
                        }
                      }
                    }
                }
              }
            }
          {
            ATerm h_2 (ATerm t)
            {
              ATerm i_2 (ATerm t)
              {
                t = term_a_17;
                return(t);
              }
              t = debug_1(t, i_2);
              return(t);
            }
            t = if_verbose2_1(t, h_2);
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
ATerm basename_1 (ATerm t, ATerm i_79 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 (ATerm t)
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, u_15);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                ATerm j_17 = t;
                int k_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm s_15 = NULL;
                      s_15 = t;
                      q_15 :
                      if(!(match_int(s_15, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, j_2, _id);
                    LocalPopChoice(k_17);
                  }
                else
                  {
                    t = j_17;
                    {
                      ATerm k_2 (ATerm t)
                      {
                        ATerm t_15 = NULL;
                        t_15 = t;
                        r_15 :
                        if(!(match_int(t_15, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, k_2, i_79);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = u_15(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_FILE_1))
    {
      b_16 = ATgetArgument(a_16, 0);
      {
        ATerm e_16 = NULL,g_16 = NULL;
        ATerm f_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
        {
          t = not_null(b_16);
          {
            ATerm i_16 = NULL;
            t = w_52(t);
            {
              g_16 = t;
              {
                ATerm j_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(g_16)), not_null(e_16));
                {
                  j_16 = t;
                  if(((i_16 != NULL) && (i_16 != j_16)))
                    _fail(j_16);
                  else
                    i_16 = j_16;
                }
                t = not_null(i_16);
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
ATerm parse_module_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      t = term_p_17;
      return(t);
    }
    t = debug_1(t, m_2);
    return(t);
  }
  t = if_verbose6_1(t, l_2);
  {
    ATerm q_17;
    q_17 = t;
    {
      ATerm v_16 = NULL,w_16 = NULL;
      ATerm n_2 (ATerm t)
      {
        ATerm u_16 = NULL;
        t = basename_1(t, _id);
        {
          u_16 = t;
          if(((t_16 != NULL) && (t_16 != u_16)))
            _fail(u_16);
          else
            t_16 = u_16;
        }
        return(t);
      }
      t = FILE_1(t, n_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            v_16 = t;
            q_16 :
            if(match_cons(v_16, sym_FILE_1))
              {
                w_16 = ATgetArgument(v_16, 0);
                if(((s_16 != NULL) && (s_16 != w_16)))
                  _fail(w_16);
                else
                  s_16 = w_16;
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = q_17;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_r_17;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm x_16 = NULL;
        ATerm y_16 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm q_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_v_17);
            return(t);
          }
          t = if_verbose3_1(t, q_2);
          {
            y_16 = t;
            if(((x_16 != NULL) && (x_16 != y_16)))
              _fail(y_16);
            else
              x_16 = y_16;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_16)), not_null(s_16)), term_y_17), term_x_17);
        return(t);
      }
      t = xtc_transform_2(t, o_2, p_2);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_z_17;
          return(t);
        }
        t = xtc_transform_2(t, r_2, pass_verbose_0);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(t_16);
              {
                ATerm v_2 (ATerm t)
                {
                  t = term_a_18;
                  return(t);
                }
                t = guarantee_extension_1(t, v_2);
              }
              return(t);
            }
            t = copy_to_1(t, t_2);
            return(t);
          }
          t = if_keep1_1(t, s_2);
          {
            ATerm w_2 (ATerm t)
            {
              t = term_b_18;
              return(t);
            }
            t = xtc_transform_2(t, w_2, pass_verbose_0);
            {
              ATerm x_2 (ATerm t)
              {
                t = term_d_18;
                return(t);
              }
              t = xtc_transform_2(t, x_2, pass_verbose_0);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      {
        ATerm l_17 = NULL;
        ATerm m_17 = NULL,o_17 = NULL;
        ATerm n_17 = NULL;
        t = not_null(h_17);
        {
          ATerm f_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(i_18);
            }
          else
            {
              t = f_18;
              t = (ATerm) ATempty;
            }
          {
            n_17 = t;
            if(((m_17 != NULL) && (m_17 != n_17)))
              _fail(n_17);
            else
              m_17 = n_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(m_17));
          {
            ATerm j_18 = t;
            int k_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(k_18);
              }
            else
              {
                t = j_18;
                t = conc_more_lists_0(t);
              }
            {
              o_17 = t;
              if(((l_17 != NULL) && (l_17 != o_17)))
                _fail(o_17);
              else
                l_17 = o_17;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_18, not_null(h_17), not_null(l_17));
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
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 (ATerm t)
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, u_17);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm t_17 = NULL;
                  t_17 = t;
                  s_17 :
                  if(!(match_int(t_17, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm z_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, y_2, z_2);
              }
            }
          return(t);
        }
        t = u_17(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  t = SSL_table_keys(not_null(w_17));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  {
    t = table_keys_0(t);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm e_18 = NULL;
        ATerm g_18 = NULL;
        e_18 = t;
        {
          ATerm h_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), not_null(e_18));
          {
            t = table_get_0(t);
            {
              h_18 = t;
              if(((g_18 != NULL) && (g_18 != h_18)))
                _fail(h_18);
              else
                g_18 = h_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(g_18));
        }
        return(t);
      }
      t = map_1(t, a_3);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm u_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_18;
      x_18 = t;
      {
        ATerm m_18 = NULL;
        ATerm n_18 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            n_18 = t;
            if(((m_18 != NULL) && (m_18 != n_18)))
              _fail(n_18);
            else
              m_18 = n_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), term_y_18);
          t = geq_0(t);
        }
      }
      t = x_18;
      t = o_59(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = u_18;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_18;
  z_18 = t;
  {
    ATerm q_18 = NULL;
    ATerm r_18 = NULL;
    r_18 = t;
    if(((q_18 != NULL) && (q_18 != r_18)))
      _fail(r_18);
    else
      q_18 = r_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_19, not_null(q_18));
      t = printnl_0(t);
    }
  }
  t = z_18;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm f_19 = NULL;
  ATerm h_19 = NULL,i_19 = NULL;
  f_19 = t;
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_19)));
    {
      t = table_get_0(t);
      {
        j_19 = t;
        v_18 :
        if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
          {
            k_19 = ATgetFirst((ATermList) j_19);
            n_19 = (ATerm) ATgetNext((ATermList) j_19);
            e_19 :
            if(match_cons(k_19, sym__2))
              {
                l_19 = ATgetArgument(k_19, 0);
                m_19 = ATgetArgument(k_19, 1);
                {
                  if(((h_19 != NULL) && (h_19 != l_19)))
                    _fail(l_19);
                  else
                    h_19 = l_19;
                  if(((i_19 != NULL) && (i_19 != m_19)))
                    _fail(m_19);
                  else
                    i_19 = m_19;
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
    t = not_null(i_19);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym__2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm a_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(v_19)));
        {
          t = table_get_0(t);
          {
            ATerm b_3 (ATerm t)
            {
              ATerm b_20 = NULL,h_20 = NULL,i_20 = NULL;
              b_20 = t;
              s_19 :
              if(match_cons(b_20, sym__2))
                {
                  h_20 = ATgetArgument(b_20, 0);
                  i_20 = ATgetArgument(b_20, 1);
                  {
                    if(((w_19 != NULL) && (w_19 != h_20)))
                      _fail(h_20);
                    else
                      w_19 = h_20;
                    if(((a_20 != NULL) && (a_20 != i_20)))
                      _fail(i_20);
                    else
                      a_20 = i_20;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, b_3);
          }
        }
        t = not_null(a_20);
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
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_19;
      {
        t = table_get_0(t);
        {
          ATerm c_3 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, c_3);
        }
      }
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_19;
      r_19 = t;
      {
        ATerm m_20 = NULL;
        ATerm n_20 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            n_20 = t;
            if(((m_20 != NULL) && (m_20 != n_20)))
              _fail(n_20);
            else
              m_20 = n_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), term_x_19);
          t = geq_0(t);
        }
      }
      t = r_19;
      t = n_59(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20;
      c_20 = t;
      {
        ATerm s_20 = NULL;
        ATerm t_20 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            t_20 = t;
            if(((s_20 != NULL) && (s_20 != t_20)))
              _fail(t_20);
            else
              s_20 = t_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), term_d_20);
          t = geq_0(t);
        }
      }
      t = c_20;
      t = p_59(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  w_20 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  j_21 :
  if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
    {
      l_21 = ATgetFirst((ATermList) k_21);
      m_21 = (ATerm) ATgetNext((ATermList) k_21);
      {
        t = q_70(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm p_21 = NULL;
            p_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_21), not_null(p_21));
              t = p_70(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(m_21);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm a_22 = NULL,f_22 = NULL,g_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym__2))
    {
      f_22 = ATgetArgument(a_22, 0);
      g_22 = ATgetArgument(a_22, 1);
      {
        t = not_null(f_22);
        {
          ATerm s_22 (ATerm t)
          {
            ATerm e_20 = t;
            int f_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_22);
                LocalPopChoice(f_20);
              }
            else
              {
                t = e_20;
                {
                  ATerm g_20 = t;
                  int j_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(g_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_70, g_3);
                      t = s_22(t);
                      LocalPopChoice(j_20);
                    }
                  else
                    {
                      t = g_20;
                      t = Cons_2(t, _id, s_22);
                    }
                }
              }
            return(t);
          }
          t = s_22(t);
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
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__3))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      b_23 = ATgetArgument(y_22, 2);
      {
        ATerm k_20;
        k_20 = t;
        {
          ATerm f_23 = NULL;
          ATerm g_23 = NULL,i_23 = NULL;
          ATerm h_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
          {
            ATerm l_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_20);
              }
            else
              {
                t = l_20;
                t = (ATerm) ATempty;
              }
            {
              h_23 = t;
              if(((g_23 != NULL) && (g_23 != h_23)))
                _fail(h_23);
              else
                g_23 = h_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(b_23));
            {
              t = union_1(t, eq_0);
              {
                i_23 = t;
                if(((f_23 != NULL) && (f_23 != i_23)))
                  _fail(i_23);
                else
                  f_23 = i_23;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_22), not_null(a_23), not_null(f_23));
            t = table_put_0(t);
          }
        }
        t = k_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      s_23 = ATgetArgument(q_23, 1);
      {
        t = not_null(s_23);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
            v_23 = t;
            o_23 :
            if(match_cons(v_23, sym__2))
              {
                w_23 = ATgetArgument(v_23, 0);
                x_23 = ATgetArgument(v_23, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_23), not_null(w_23), not_null(x_23));
                  t = y_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_3);
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
  ATerm i_24 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL;
      j_24 = t;
      {
        if(((i_24 != NULL) && (i_24 != j_24)))
          _fail(j_24);
        else
          i_24 = j_24;
        t = SSL_ReadFromFile(not_null(i_24));
      }
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm k_3 (ATerm t)
        {
          t = term_r_20;
          return(t);
        }
        t = debug_1(t, k_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm o_24 = NULL;
  ATerm q_24 = NULL;
  o_24 = t;
  {
    ATerm u_20;
    u_20 = t;
    {
      ATerm r_24 = NULL;
      t = term_v_20;
      {
        r_24 = t;
        if(((q_24 != NULL) && (q_24 != r_24)))
          _fail(r_24);
        else
          q_24 = r_24;
      }
    }
    t = u_20;
    {
      t = SSL_open_file(not_null(o_24), not_null(q_24));
      t = SSL_close_file(not_null(o_24));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm a_25 = NULL;
  ATerm c_25 = NULL;
  a_25 = t;
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(a_25)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
    {
      ATerm y_20;
      y_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_z_20, (ATerm) ATinsert(ATempty, not_null(a_25)));
        t = table_put_0(t);
      }
      t = y_20;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            t = term_a_21;
            return(t);
          }
          t = debug_1(t, m_3);
          return(t);
        }
        t = if_verbose4_1(t, l_3);
        {
          ATerm b_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = b_21;
              t = (ATerm) ATempty;
            }
          {
            ATerm r_3 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                t = term_g_21;
                return(t);
              }
              t = say_1(t, s_3);
              return(t);
            }
            t = if_verbose6_1(t, r_3);
            {
              ATerm d_25 = NULL;
              d_25 = t;
              if(((c_25 != NULL) && (c_25 != d_25)))
                _fail(d_25);
              else
                c_25 = d_25;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(c_25));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = term_h_21;
                        return(t);
                      }
                      t = say_1(t, u_3);
                      return(t);
                    }
                    t = if_verbose6_1(t, t_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_b_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(a_25)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm v_3 (ATerm t)
                          {
                            ATerm x_3 (ATerm t)
                            {
                              t = term_g_21;
                              return(t);
                            }
                            t = say_1(t, x_3);
                            return(t);
                          }
                          t = if_verbose4_1(t, v_3);
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
  ATerm h_25 = NULL;
  h_25 = t;
  t = SSL_getenv(not_null(h_25));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm i_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = i_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_21;
            t = getenv_0(t);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_4 (ATerm t)
    {
      t = term_t_21;
      return(t);
    }
    t = debug_1(t, b_4);
    return(t);
  }
  t = if_verbose5_1(t, a_4);
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_21;
          t = table_get_0(t);
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = u_21;
    {
      ATerm c_4 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          t = term_y_21;
          return(t);
        }
        t = debug_1(t, e_4);
        return(t);
      }
      t = if_verbose5_1(t, c_4);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        ATerm g_4 (ATerm t)
        {
          t = term_d_22;
          return(t);
        }
        t = debug_1(t, g_4);
        return(t);
      }
      t = if_verbose5_1(t, f_4);
      {
        t = xtc_load_0(t);
        {
          ATerm e_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(h_22);
            }
          else
            {
              t = e_22;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm l_4 (ATerm t)
            {
              ATerm m_4 (ATerm t)
              {
                t = term_d_22;
                return(t);
              }
              t = debug_1(t, m_4);
              return(t);
            }
            t = if_verbose5_1(t, l_4);
          }
        }
      }
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm l_25 = NULL;
        ATerm m_25 = NULL;
        m_25 = t;
        if(((l_25 != NULL) && (l_25 != m_25)))
          _fail(m_25);
        else
          l_25 = m_25;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_22), not_null(l_25)), term_i_22);
          {
            t = error_0(t);
            {
              ATerm n_4 (ATerm t)
              {
                t = term_b_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm o_4 (ATerm t)
                    {
                      t = term_k_22;
                      return(t);
                    }
                    t = debug_1(t, o_4);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, n_4);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_path_0 (ATerm t)
{
  t = xtc_find_0(t);
  t = get_path_0(t);
  return(t);
}
ATerm parse_stratego_options_0 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm t_25 = NULL;
        t_25 = t;
        o_25 :
        if(!(match_string(t_25, "-I")))
          {
            if(!(match_string(t_25, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        ATerm n_22;
        n_22 = t;
        {
          ATerm u_25 = NULL;
          ATerm v_25 = NULL;
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATempty, not_null(u_25)));
            t = extend_config_0(t);
          }
        }
        t = n_22;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_o_22;
        return(t);
      }
      t = ArgOption_3(t, q_4, r_4, s_4);
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm w_25 = NULL;
              w_25 = t;
              q_25 :
              if(!(match_string(w_25, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm r_22;
              r_22 = t;
              {
                ATerm x_25 = NULL;
                ATerm y_25 = NULL;
                y_25 = t;
                if(((x_25 != NULL) && (x_25 != y_25)))
                  _fail(y_25);
                else
                  x_25 = y_25;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(x_25));
                  t = set_config_0(t);
                }
              }
              t = r_22;
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = term_t_22;
              return(t);
            }
            t = ArgOption_3(t, t_4, u_4, w_4);
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm a_5 (ATerm t)
              {
                ATerm z_25 = NULL;
                z_25 = t;
                s_25 :
                if(!(match_string(z_25, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                ATerm u_22;
                u_22 = t;
                {
                  t = term_w_22;
                  t = set_config_0(t);
                }
                t = u_22;
                return(t);
              }
              ATerm i_5 (ATerm t)
              {
                t = term_c_23;
                return(t);
              }
              t = Option_3(t, a_5, c_5, i_5);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      t = SSL_copy(not_null(f_26), not_null(g_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_stderr_0))
    {
      ATerm q_26 = NULL,s_26 = NULL;
      ATerm d_23;
      d_23 = t;
      {
        ATerm r_26 = NULL;
        t = SSLgetAnnotations(not_null(o_26));
        {
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
        }
      }
      t = d_23;
      {
        ATerm t_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_26));
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
ATerm stdout_0 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_stdout_0))
    {
      ATerm d_27 = NULL,f_27 = NULL;
      ATerm e_23;
      e_23 = t;
      {
        ATerm e_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
      }
      t = e_23;
      {
        ATerm g_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(d_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        t = not_null(f_27);
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
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym_FILE_1))
    {
      t_27 = ATgetArgument(s_27, 0);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_27 = NULL;
            ATerm w_27 = NULL;
            t = m_0(t);
            {
              w_27 = t;
              {
                if(((v_27 != NULL) && (v_27 != w_27)))
                  _fail(w_27);
                else
                  v_27 = w_27;
                {
                  ATerm l_23 = t;
                  int m_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(m_23);
                    }
                  else
                    {
                      t = l_23;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(v_27));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_27));
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm n_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_27 = NULL;
                  ATerm z_27 = NULL;
                  t = m_0(t);
                  {
                    z_27 = t;
                    {
                      if(((y_27 != NULL) && (y_27 != z_27)))
                        _fail(z_27);
                      else
                        y_27 = z_27;
                      {
                        ATerm u_23 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_23 = t;
                            int z_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(z_23);
                              }
                            else
                              {
                                t = y_23;
                                {
                                  ATerm a_24 = t;
                                  int b_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(b_24);
                                    }
                                  else
                                    {
                                      t = a_24;
                                      {
                                        ATerm a_28 = NULL;
                                        a_28 = t;
                                        if(((t_27 != NULL) && (t_27 != a_28)))
                                          _fail(a_28);
                                        else
                                          t_27 = a_28;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = u_23;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(y_27));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_27));
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = n_23;
                  {
                    ATerm c_28 = NULL;
                    t = m_0(t);
                    {
                      c_28 = t;
                      if(((t_27 != NULL) && (t_27 != c_28)))
                        _fail(c_28);
                      else
                        t_27 = c_28;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_27));
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
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  l_28 :
  if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
    {
      n_28 = ATgetFirst((ATermList) m_28);
      o_28 = (ATerm) ATgetNext((ATermList) m_28);
      t = not_null(o_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym__2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      {
        ATerm c_24;
        c_24 = t;
        {
          ATerm z_28 = NULL;
          ATerm a_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(w_28));
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_24);
              }
            else
              {
                t = d_24;
                t = (ATerm) ATempty;
              }
            {
              a_29 = t;
              if(((z_28 != NULL) && (z_28 != a_29)))
                _fail(a_29);
              else
                z_28 = a_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_28), not_null(w_28), not_null(z_28));
            t = table_put_0(t);
          }
        }
        t = c_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL,k_29 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    ATerm l_29 = NULL;
    ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
    t = d_75(t);
    {
      l_29 = t;
      {
        if(((k_29 != NULL) && (k_29 != l_29)))
          _fail(l_29);
        else
          k_29 = l_29;
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_29), term_o_10);
              t = table_get_0(t);
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_29 = t;
            g_29 :
            if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
              {
                n_29 = ATgetFirst((ATermList) m_29);
                o_29 = (ATerm) ATgetNext((ATermList) m_29);
                {
                  if(((i_29 != NULL) && (i_29 != n_29)))
                    _fail(n_29);
                  else
                    i_29 = n_29;
                  {
                    if(((h_29 != NULL) && (h_29 != o_29)))
                      _fail(o_29);
                    else
                      h_29 = o_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_29), term_o_10, not_null(h_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(i_29);
                          {
                            ATerm j_5 (ATerm t)
                            {
                              ATerm r_29 = NULL;
                              r_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_29), not_null(r_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_5);
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
  t = f_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  t = SSL_remove(not_null(a_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_63(t);
      t = o_63(t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        t = o_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm f_30 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    ATerm g_30 = NULL;
    ATerm h_30 = NULL;
    t = c_75(t);
    {
      g_30 = t;
      {
        if(((f_30 != NULL) && (f_30 != g_30)))
          _fail(g_30);
        else
          f_30 = g_30;
        {
          ATerm i_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_30), term_o_10);
          {
            ATerm n_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_24);
              }
            else
              {
                t = n_24;
                t = (ATerm) ATempty;
              }
            {
              i_30 = t;
              if(((h_30 != NULL) && (h_30 != i_30)))
                _fail(i_30);
              else
                h_30 = i_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_30), term_o_10, (ATerm) ATinsert(CheckATermList(not_null(h_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_24;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm p_30 = NULL,q_30 = NULL;
  ATerm k_5 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = begin_scope_1(t, k_5);
  {
    ATerm l_5 (ATerm t)
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_24;
            t = table_get_0(t);
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          r_30 = t;
          o_30 :
          if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
            {
              s_30 = ATgetFirst((ATermList) r_30);
              t_30 = (ATerm) ATgetNext((ATermList) r_30);
              {
                if(((q_30 != NULL) && (q_30 != s_30)))
                  _fail(s_30);
                else
                  q_30 = s_30;
                {
                  if(((p_30 != NULL) && (p_30 != t_30)))
                    _fail(t_30);
                  else
                    p_30 = t_30;
                  {
                    t = not_null(q_30);
                    {
                      ATerm m_5 (ATerm t)
                      {
                        ATerm w_24 = t;
                        int x_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(x_24);
                          }
                        else
                          {
                            t = w_24;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, m_5);
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
      t = s_24;
      {
        ATerm r_5 (ATerm t)
        {
          t = term_k_11;
          return(t);
        }
        t = end_scope_1(t, r_5);
      }
      return(t);
    }
    t = restore_always_2(t, a_74, l_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm b_74 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_30 = NULL;
        ATerm x_30 = NULL;
        t = term_o_11;
        {
          t = get_config_0(t);
          {
            x_30 = t;
            if(((w_30 != NULL) && (w_30 != x_30)))
              _fail(x_30);
            else
              w_30 = x_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_30));
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = term_m_15;
      }
    {
      t = b_74(t);
      {
        ATerm t_5 (ATerm t)
        {
          ATerm b_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_11;
              t = get_config_0(t);
              LocalPopChoice(e_25);
            }
          else
            {
              t = b_25;
              t = term_e_13;
            }
          return(t);
        }
        t = copy_to_1(t, t_5);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, s_5);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm a_31 = NULL;
    a_31 = t;
    z_30 :
    if(!(match_string(a_31, "-v")))
      {
        if(!(match_string(a_31, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_f_25;
    t = set_config_0(t);
    t = term_g_25;
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = Option_3(t, u_5, v_5, a_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm d_31 = NULL;
    d_31 = t;
    b_31 :
    if(!(match_string(d_31, "-k")))
      {
        if(!(match_string(d_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm j_25;
    j_25 = t;
    {
      ATerm e_31 = NULL;
      ATerm f_31 = NULL;
      t = string_to_int_0(t);
      {
        f_31 = t;
        if(((e_31 != NULL) && (e_31 != f_31)))
          _fail(f_31);
        else
          e_31 = f_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(e_31));
        t = set_config_0(t);
      }
    }
    t = j_25;
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_k_25;
    return(t);
  }
  t = ArgOption_3(t, b_6, c_6, d_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  t = SSL_string_to_int(not_null(i_31));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 (ATerm t)
      {
        ATerm q_31 = NULL;
        q_31 = t;
        l_31 :
        if(!(match_string(q_31, "-S")))
          {
            if(!(match_string(q_31, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_w_22;
        t = set_config_0(t);
        t = term_r_25;
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        t = term_a_26;
        return(t);
      }
      t = Option_3(t, e_6, k_6, l_6);
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 (ATerm t)
            {
              ATerm r_31 = NULL;
              r_31 = t;
              m_31 :
              if(!(match_string(r_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              ATerm u_31 = NULL;
              ATerm h_26;
              h_26 = t;
              {
                ATerm s_31 = NULL;
                ATerm t_31 = NULL;
                t = string_to_int_0(t);
                {
                  t_31 = t;
                  if(((s_31 != NULL) && (s_31 != t_31)))
                    _fail(t_31);
                  else
                    s_31 = t_31;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(s_31));
                  t = set_config_0(t);
                }
              }
              t = h_26;
              {
                ATerm v_31 = NULL;
                v_31 = t;
                if(((u_31 != NULL) && (u_31 != v_31)))
                  _fail(v_31);
                else
                  u_31 = v_31;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_31));
              }
              return(t);
            }
            ATerm v_6 (ATerm t)
            {
              t = term_i_26;
              return(t);
            }
            t = ArgOption_3(t, t_6, u_6, v_6);
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            {
              ATerm w_6 (ATerm t)
              {
                ATerm w_31 = NULL;
                w_31 = t;
                p_31 :
                if(!(match_string(w_31, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_6 (ATerm t)
              {
                t = term_k_26;
                t = set_config_0(t);
                t = term_l_26;
                return(t);
              }
              ATerm z_6 (ATerm t)
              {
                t = term_m_26;
                return(t);
              }
              t = Option_3(t, w_6, y_6, z_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = p_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm e_32 = NULL;
    e_32 = t;
    z_31 :
    if(!(match_string(e_32, "-o")))
      {
        if(!(match_string(e_32, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    ATerm o_32 = NULL;
    ATerm x_26;
    x_26 = t;
    {
      ATerm h_32 = NULL;
      ATerm i_32 = NULL;
      i_32 = t;
      if(((h_32 != NULL) && (h_32 != i_32)))
        _fail(i_32);
      else
        h_32 = i_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(h_32));
        t = set_config_0(t);
      }
    }
    t = x_26;
    {
      ATerm p_32 = NULL;
      p_32 = t;
      if(((o_32 != NULL) && (o_32 != p_32)))
        _fail(p_32);
      else
        o_32 = p_32;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_32));
    }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  t = ArgOption_3(t, i_7, j_7, k_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_26 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = z_26;
      {
        ATerm l_7 (ATerm t)
        {
          ATerm x_32 = NULL;
          x_32 = t;
          w_32 :
          if(!(match_string(x_32, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = term_i_27;
          t = set_config_0(t);
          t = term_j_27;
          return(t);
        }
        ATerm q_7 (ATerm t)
        {
          t = term_k_27;
          return(t);
        }
        t = Option_3(t, l_7, p_7, q_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,x_33 = NULL;
  f_33 = t;
  d_33 :
  if(match_string(f_33, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_33) == AT_LIST) && !(ATisEmpty(f_33))))
        {
          g_33 = ATgetFirst((ATermList) f_33);
          h_33 = (ATerm) ATgetNext((ATermList) f_33);
          e_33 :
          if(((ATgetType(h_33) == AT_LIST) && !(ATisEmpty(h_33))))
            {
              i_33 = ATgetFirst((ATermList) h_33);
              x_33 = (ATerm) ATgetNext((ATermList) h_33);
              {
                ATerm c_34 = NULL;
                ATerm l_27;
                l_27 = t;
                {
                  t = not_null(g_33);
                  t = j_0(t);
                }
                t = l_27;
                {
                  ATerm f_34 = NULL;
                  t = not_null(i_33);
                  {
                    t = k_0(t);
                    {
                      f_34 = t;
                      if(((c_34 != NULL) && (c_34 != f_34)))
                        _fail(f_34);
                      else
                        c_34 = f_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_33)), not_null(c_34));
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
  ATerm s_7 (ATerm t)
  {
    ATerm a_35 = NULL;
    a_35 = t;
    k_34 :
    if(!(match_string(a_35, "-i")))
      {
        if(!(match_string(a_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm d_35 = NULL;
    ATerm m_27;
    m_27 = t;
    {
      ATerm b_35 = NULL;
      ATerm c_35 = NULL;
      c_35 = t;
      if(((b_35 != NULL) && (b_35 != c_35)))
        _fail(c_35);
      else
        b_35 = c_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(b_35));
        t = set_config_0(t);
      }
    }
    t = m_27;
    {
      ATerm f_35 = NULL;
      f_35 = t;
      if(((d_35 != NULL) && (d_35 != f_35)))
        _fail(f_35);
      else
        d_35 = f_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_35));
    }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_n_27;
    return(t);
  }
  t = ArgOption_3(t, s_7, t_7, u_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm q_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = q_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm l_35 = NULL;
  ATerm x_27;
  x_27 = t;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm m_35 = NULL,s_35 = NULL;
      m_35 = t;
      j_35 :
      if(match_cons(m_35, sym_Program_1))
        {
          s_35 = ATgetArgument(m_35, 0);
          if(((l_35 != NULL) && (l_35 != s_35)))
            _fail(s_35);
          else
            l_35 = s_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, v_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_28), not_null(l_35)), term_b_28));
      {
        t = printnl_0(t);
        {
          t = term_c_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATempty, term_e_28));
  {
    t = printnl_0(t);
    {
      t = term_c_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  t = SSL_TicksToSeconds(not_null(v_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_36 = NULL,g_36 = NULL,h_36 = NULL;
  e_36 = t;
  z_35 :
  if(match_cons(e_36, sym__2))
    {
      g_36 = ATgetArgument(e_36, 0);
      h_36 = ATgetArgument(e_36, 1);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_36), not_null(h_36));
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            t = SSL_addr(not_null(g_36), not_null(h_36));
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
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_71(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
        o_36 = t;
        n_36 :
        if(((ATgetType(o_36) == AT_LIST) && !(ATisEmpty(o_36))))
          {
            p_36 = ATgetFirst((ATermList) o_36);
            q_36 = (ATerm) ATgetNext((ATermList) o_36);
            {
              ATerm t_36 = NULL;
              ATerm u_36 = NULL;
              t = not_null(q_36);
              {
                t = foldr_2(t, c_71, d_71);
                {
                  u_36 = t;
                  if(((t_36 != NULL) && (t_36 != u_36)))
                    _fail(u_36);
                  else
                    t_36 = u_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(t_36));
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
ATerm crush_2 (ATerm t, ATerm a_70 (ATerm), ATerm b_70 (ATerm))
{
  ATerm b_37 = NULL;
  ATerm d_37 = NULL;
  b_37 = t;
  {
    ATerm e_37 = NULL;
    ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
    t = not_null(b_37);
    {
      e_37 = t;
      {
        t = SSL_explode_term(not_null(e_37));
        {
          g_37 = t;
          a_37 :
          if(match_cons(g_37, sym__2))
            {
              h_37 = ATgetArgument(g_37, 0);
              i_37 = ATgetArgument(g_37, 1);
              if(((d_37 != NULL) && (d_37 != i_37)))
                _fail(i_37);
              else
                d_37 = i_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_37);
      t = foldr_2(t, a_70, b_70);
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
    ATerm w_7 (ATerm t)
    {
      t = term_v_22;
      return(t);
    }
    t = crush_2(t, w_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        ATerm j_28;
        j_28 = t;
        {
          ATerm k_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_37), not_null(q_37));
              LocalPopChoice(p_28);
            }
          else
            {
              t = k_28;
              t = SSL_gtr(not_null(p_37), not_null(q_37));
            }
        }
        t = j_28;
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
  ATerm w_37 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      x_37 = t;
      v_37 :
      if(match_cons(x_37, sym__2))
        {
          y_37 = ATgetArgument(x_37, 0);
          z_37 = ATgetArgument(x_37, 1);
          {
            if(((w_37 != NULL) && (w_37 != y_37)))
              _fail(y_37);
            else
              w_37 = y_37;
            if(((w_37 != NULL) && (w_37 != z_37)))
              _fail(z_37);
            else
              w_37 = z_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm s_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_28;
      y_28 = t;
      {
        ATerm c_38 = NULL;
        ATerm d_38 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            d_38 = t;
            if(((c_38 != NULL) && (c_38 != d_38)))
              _fail(d_38);
            else
              c_38 = d_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), term_c_10);
          t = geq_0(t);
        }
      }
      t = y_28;
      t = k_59(t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = s_28;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm h_38 = NULL,j_38 = NULL;
    ATerm b_29;
    b_29 = t;
    {
      ATerm i_38 = NULL;
      t = run_time_0(t);
      {
        i_38 = t;
        if(((h_38 != NULL) && (h_38 != i_38)))
          _fail(i_38);
        else
          h_38 = i_38;
      }
    }
    t = b_29;
    {
      ATerm k_38 = NULL;
      t = term_c_29;
      {
        t = get_config_0(t);
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_29), not_null(h_38)), term_d_29), not_null(j_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_7);
  {
    t = term_v_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_Version_0))
    {
      ATerm c_39 = NULL,e_39 = NULL;
      ATerm f_29;
      f_29 = t;
      {
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(x_38));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
      }
      t = f_29;
      {
        ATerm f_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_39));
        {
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
        }
        t = not_null(e_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm y_7 (ATerm t)
  {
    ATerm j_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = j_29;
        {
          ATerm q_29 = t;
          int s_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_29);
            }
          else
            {
              t = q_29;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, y_7);
  t = j_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  t = SSL_table_create(not_null(k_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  {
    ATerm t_29;
    t_29 = t;
    {
      t = term_u_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_29, term_v_29, not_null(o_39));
          t = table_put_0(t);
        }
      }
    }
    t = t_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  t = SSL_table_destroy(not_null(s_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  t = SSL_exit(not_null(w_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(((ATgetType(a_40) == AT_LIST) && ATisEmpty(a_40)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          b_40 = ATgetFirst((ATermList) a_40);
          c_40 = (ATerm) ATgetNext((ATermList) a_40);
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
  ATerm w_29;
  w_29 = t;
  {
    ATerm f_40 = NULL;
    ATerm i_40 = NULL;
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          ATerm g_40 = NULL;
          ATerm h_40 = NULL;
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
          t = (ATerm) ATinsert(ATempty, not_null(g_40));
        }
      }
    {
      i_40 = t;
      if(((f_40 != NULL) && (f_40 != i_40)))
        _fail(i_40);
      else
        f_40 = i_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(f_40));
      t = printnl_0(t);
    }
  }
  t = w_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  t_40 = t;
  q_40 :
  if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
    {
      r_40 = ATgetFirst((ATermList) t_40);
      s_40 = (ATerm) ATgetNext((ATermList) t_40);
      {
        ATerm w_40 = NULL;
        t = not_null(s_40);
        {
          ATerm z_29;
          z_29 = t;
          {
            ATerm x_40 = NULL,z_40 = NULL,b_41 = NULL;
            ATerm b_30;
            b_30 = t;
            {
              ATerm y_40 = NULL;
              t = i_0(t);
              {
                y_40 = t;
                if(((x_40 != NULL) && (x_40 != y_40)))
                  _fail(y_40);
                else
                  x_40 = y_40;
              }
            }
            t = b_30;
            {
              ATerm a_41 = NULL;
              t = not_null(r_40);
              {
                t = h_0(t);
                {
                  a_41 = t;
                  if(((z_40 != NULL) && (z_40 != a_41)))
                    _fail(a_41);
                  else
                    z_40 = a_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_40)), not_null(z_40));
                {
                  b_41 = t;
                  if(((w_40 != NULL) && (w_40 != b_41)))
                    _fail(b_41);
                  else
                    w_40 = b_41;
                }
              }
            }
          }
          t = z_29;
          {
            ATerm z_7 (ATerm t)
            {
              t = not_null(w_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(t_40) == AT_LIST) && ATisEmpty(t_40)))
        {
          {
            t = term_f_11;
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
  ATerm h_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm m_41 = NULL,n_41 = NULL;
  m_41 = t;
  l_41 :
  if(match_cons(m_41, sym_Program_1))
    {
      n_41 = ATgetArgument(m_41, 0);
      {
        ATerm q_41 = NULL,s_41 = NULL;
        ATerm r_41 = NULL;
        t = SSLgetAnnotations(not_null(m_41));
        {
          r_41 = t;
          if(((q_41 != NULL) && (q_41 != r_41)))
            _fail(r_41);
          else
            q_41 = r_41;
        }
        {
          t = not_null(n_41);
          {
            ATerm u_41 = NULL;
            t = d_53(t);
            {
              s_41 = t;
              {
                ATerm v_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_41)), not_null(q_41));
                {
                  v_41 = t;
                  if(((u_41 != NULL) && (u_41 != v_41)))
                    _fail(v_41);
                  else
                    u_41 = v_41;
                }
                t = not_null(u_41);
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
  ATerm d_42 = NULL;
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_42 = NULL;
      t = term_c_29;
      {
        t = get_config_0(t);
        {
          e_42 = t;
          if(((d_42 != NULL) && (d_42 != e_42)))
            _fail(e_42);
          else
            d_42 = e_42;
        }
      }
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm m_8 (ATerm t)
        {
          ATerm n_8 (ATerm t)
          {
            ATerm f_42 = NULL;
            f_42 = t;
            if(((d_42 != NULL) && (d_42 != f_42)))
              _fail(f_42);
            else
              d_42 = f_42;
            return(t);
          }
          t = Program_1(t, n_8);
          return(t);
        }
        t = fetch_1(t, m_8);
      }
    }
  {
    t = term_e_30;
    {
      t = echo_0(t);
      {
        t = term_l_30;
        {
          t = table_get_0(t);
          {
            ATerm o_8 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, o_8);
            {
              ATerm p_8 (ATerm t)
              {
                ATerm g_42 = NULL;
                ATerm h_42 = NULL;
                h_42 = t;
                if(((g_42 != NULL) && (g_42 != h_42)))
                  _fail(h_42);
                else
                  g_42 = h_42;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_42)), term_m_30);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, p_8);
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
  ATerm n_30;
  n_30 = t;
  {
    ATerm o_42 = NULL;
    ATerm p_42 = NULL;
    p_42 = t;
    if(((o_42 != NULL) && (o_42 != p_42)))
      _fail(p_42);
    else
      o_42 = p_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATempty, not_null(o_42)));
      t = printnl_0(t);
    }
  }
  t = n_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm u_30;
  u_30 = t;
  {
    t = f_78(t);
    t = debug_0(t);
  }
  t = u_30;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_53 (ATerm))
{
  ATerm w_42 = NULL,x_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym_Undefined_1))
    {
      x_42 = ATgetArgument(w_42, 0);
      {
        ATerm a_43 = NULL,c_43 = NULL;
        ATerm b_43 = NULL;
        t = SSLgetAnnotations(not_null(w_42));
        {
          b_43 = t;
          if(((a_43 != NULL) && (a_43 != b_43)))
            _fail(b_43);
          else
            a_43 = b_43;
        }
        {
          t = not_null(x_42);
          {
            ATerm e_43 = NULL;
            t = e_53(t);
            {
              c_43 = t;
              {
                ATerm f_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_43)), not_null(a_43));
                {
                  f_43 = t;
                  if(((e_43 != NULL) && (e_43 != f_43)))
                    _fail(f_43);
                  else
                    e_43 = f_43;
                }
                t = not_null(e_43);
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
ATerm fetch_1 (ATerm t, ATerm x_64 (ATerm))
{
  ATerm k_43 (ATerm t)
  {
    ATerm v_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_64, _id);
        LocalPopChoice(y_30);
      }
    else
      {
        t = v_30;
        t = Cons_2(t, _id, k_43);
      }
    return(t);
  }
  t = k_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_76 (ATerm))
{
  t = fetch_1(t, q_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  o_43 :
  if(match_cons(s_43, sym_Help_0))
    {
      ATerm u_43 = NULL,w_43 = NULL;
      ATerm c_31;
      c_31 = t;
      {
        ATerm v_43 = NULL;
        t = SSLgetAnnotations(not_null(s_43));
        {
          v_43 = t;
          if(((u_43 != NULL) && (u_43 != v_43)))
            _fail(v_43);
          else
            u_43 = v_43;
        }
      }
      t = c_31;
      {
        ATerm x_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_43));
        {
          x_43 = t;
          if(((w_43 != NULL) && (w_43 != x_43)))
            _fail(x_43);
          else
            w_43 = x_43;
        }
        t = not_null(w_43);
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
  ATerm c_44 = NULL;
  c_44 = t;
  t = SSL_implode_string(not_null(c_44));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      {
        ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
        h_44 = t;
        g_44 :
        if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
          {
            i_44 = ATgetFirst((ATermList) h_44);
            j_44 = (ATerm) ATgetNext((ATermList) h_44);
            {
              t = not_null(i_44);
              {
                ATerm q_8 (ATerm t)
                {
                  t = not_null(j_44);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_8);
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
  ATerm z_44 = NULL;
  ATerm b_45 = NULL;
  z_44 = t;
  {
    ATerm c_45 = NULL;
    ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
    t = not_null(z_44);
    {
      c_45 = t;
      {
        t = SSL_explode_term(not_null(c_45));
        {
          e_45 = t;
          v_44 :
          if(match_cons(e_45, sym__2))
            {
              f_45 = ATgetArgument(e_45, 0);
              g_45 = ATgetArgument(e_45, 1);
              y_44 :
              if(match_string(f_45, ""))
                {
                  if(((b_45 != NULL) && (b_45 != g_45)))
                    _fail(g_45);
                  else
                    b_45 = g_45;
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
      t = not_null(b_45);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm k_45 (ATerm t)
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_45);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          t = Nil_0(t);
          t = d_65(t);
        }
      }
    return(t);
  }
  t = k_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym__2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        t = not_null(o_45);
        {
          ATerm r_8 (ATerm t)
          {
            t = not_null(p_45);
            return(t);
          }
          t = at_end_1(t, r_8);
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
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  t = SSL_explode_string(not_null(d_46));
  return(t);
}
ATerm _2 (ATerm t, ATerm y_50 (ATerm), ATerm z_50 (ATerm))
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym__2))
    {
      n_46 = ATgetArgument(m_46, 0);
      o_46 = ATgetArgument(m_46, 1);
      {
        ATerm s_46 = NULL,u_46 = NULL;
        ATerm t_46 = NULL;
        t = SSLgetAnnotations(not_null(m_46));
        {
          t_46 = t;
          if(((s_46 != NULL) && (s_46 != t_46)))
            _fail(t_46);
          else
            s_46 = t_46;
        }
        {
          t = not_null(n_46);
          {
            ATerm w_46 = NULL;
            t = y_50(t);
            {
              u_46 = t;
              {
                t = not_null(o_46);
                {
                  ATerm y_46 = NULL;
                  t = z_50(t);
                  {
                    w_46 = t;
                    {
                      ATerm z_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_46), not_null(w_46)), not_null(s_46));
                      {
                        z_46 = t;
                        if(((y_46 != NULL) && (y_46 != z_46)))
                          _fail(z_46);
                        else
                          y_46 = z_46;
                      }
                      t = not_null(y_46);
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
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
  h_47 = t;
  g_47 :
  if(match_cons(h_47, sym__2))
    {
      i_47 = ATgetArgument(h_47, 0);
      j_47 = ATgetArgument(h_47, 1);
      {
        ATerm a_32;
        a_32 = t;
        t = SSL_printnl(not_null(i_47), not_null(j_47));
        t = a_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm b_32;
  b_32 = t;
  {
    ATerm p_47 = NULL,r_47 = NULL;
    ATerm c_32;
    c_32 = t;
    {
      ATerm q_47 = NULL;
      t = e_78(t);
      {
        q_47 = t;
        if(((p_47 != NULL) && (p_47 != q_47)))
          _fail(q_47);
        else
          p_47 = q_47;
      }
    }
    t = c_32;
    {
      ATerm s_47 = NULL;
      s_47 = t;
      if(((r_47 != NULL) && (r_47 != s_47)))
        _fail(s_47);
      else
        r_47 = s_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), not_null(p_47)));
        t = printnl_0(t);
      }
    }
  }
  t = b_32;
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm v_47 (ATerm t)
  {
    ATerm d_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = d_32;
        t = Cons_2(t, o_64, v_47);
      }
    return(t);
  }
  t = v_47(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = SSL_is_string(not_null(x_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = g_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_8 (ATerm t)
            {
              ATerm m_32 = t;
              int n_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(n_32);
                }
              else
                {
                  t = m_32;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, s_8);
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            {
              ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
              h_48 = t;
              g_48 :
              if(match_cons(h_48, sym_Path_1))
                {
                  i_48 = ATgetArgument(h_48, 0);
                  t = not_null(i_48);
                }
              else
                {
                  if(match_cons(h_48, sym_Var_1))
                    {
                      i_48 = ATgetArgument(h_48, 0);
                      {
                        t = not_null(i_48);
                        {
                          ATerm q_32 = t;
                          int r_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_32);
                            }
                          else
                            {
                              t = q_32;
                              {
                                ATerm t_8 (ATerm t)
                                {
                                  t = term_s_32;
                                  return(t);
                                }
                                t = debug_1(t, t_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_48, sym_Prefix_2))
                        {
                          i_48 = ATgetArgument(h_48, 0);
                          j_48 = ATgetArgument(h_48, 1);
                          {
                            ATerm o_48 = NULL,q_48 = NULL;
                            ATerm t_32;
                            t_32 = t;
                            {
                              ATerm p_48 = NULL;
                              t = not_null(i_48);
                              {
                                t = eval_config_0(t);
                                {
                                  p_48 = t;
                                  if(((o_48 != NULL) && (o_48 != p_48)))
                                    _fail(p_48);
                                  else
                                    o_48 = p_48;
                                }
                              }
                            }
                            t = t_32;
                            {
                              ATerm r_48 = NULL;
                              t = not_null(j_48);
                              {
                                t = eval_config_0(t);
                                {
                                  r_48 = t;
                                  if(((q_48 != NULL) && (q_48 != r_48)))
                                    _fail(r_48);
                                  else
                                    q_48 = r_48;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_48), not_null(q_48));
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
  ATerm z_48 = NULL;
  z_48 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_18, not_null(z_48));
    {
      t = table_get_0(t);
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm y_32;
              y_32 = t;
              {
                ATerm b_49 = NULL;
                ATerm c_49 = NULL;
                c_49 = t;
                if(((b_49 != NULL) && (b_49 != c_49)))
                  _fail(c_49);
                else
                  b_49 = c_49;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_l_18, not_null(z_48), not_null(b_49));
                  t = table_put_0(t);
                }
              }
              t = y_32;
            }
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_63(t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  g_49 :
  if(match_cons(h_49, sym__2))
    {
      i_49 = ATgetArgument(h_49, 0);
      j_49 = ATgetArgument(h_49, 1);
      t = SSL_table_get(not_null(i_49), not_null(j_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym__3))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      t_49 = ATgetArgument(q_49, 2);
      {
        ATerm b_33;
        b_33 = t;
        {
          ATerm x_49 = NULL;
          ATerm y_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_49), not_null(s_49));
          {
            ATerm c_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_33);
              }
            else
              {
                t = c_33;
                t = (ATerm) ATempty;
              }
            {
              y_49 = t;
              if(((x_49 != NULL) && (x_49 != y_49)))
                _fail(y_49);
              else
                x_49 = y_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_49), not_null(s_49), (ATerm) ATinsert(CheckATermList(not_null(x_49)), not_null(t_49)));
            t = table_put_0(t);
          }
        }
        t = b_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm c_50 = NULL;
  ATerm d_50 = NULL;
  t = term_f_11;
  {
    t = v_77(t);
    {
      d_50 = t;
      if(((c_50 != NULL) && (c_50 != d_50)))
        _fail(d_50);
      else
        c_50 = d_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_30, term_k_30, not_null(c_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_string(j_50, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_50) == AT_LIST) && !(ATisEmpty(j_50))))
        {
          k_50 = ATgetFirst((ATermList) j_50);
          l_50 = (ATerm) ATgetNext((ATermList) j_50);
          {
            ATerm o_50 = NULL;
            ATerm k_33;
            k_33 = t;
            {
              t = not_null(k_50);
              t = a_0(t);
            }
            t = k_33;
            {
              ATerm p_50 = NULL;
              t = term_f_11;
              {
                t = d_0(t);
                {
                  p_50 = t;
                  if(((o_50 != NULL) && (o_50 != p_50)))
                    _fail(p_50);
                  else
                    o_50 = p_50;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_50)), not_null(o_50));
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
  ATerm u_8 (ATerm t)
  {
    ATerm u_50 = NULL;
    u_50 = t;
    t_50 :
    if(!(match_string(u_50, "--help")))
      {
        if(!(match_string(u_50, "-h")))
          {
            if(!(match_string(u_50, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_m_33;
    {
      t = set_config_0(t);
      t = term_n_33;
    }
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = term_o_33;
    return(t);
  }
  t = Option_3(t, u_8, x_8, c_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_50 = NULL,a_51 = NULL,b_51 = NULL;
  x_50 = t;
  w_50 :
  if(((ATgetType(x_50) == AT_LIST) && !(ATisEmpty(x_50))))
    {
      a_51 = ATgetFirst((ATermList) x_50);
      b_51 = (ATerm) ATgetNext((ATermList) x_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
  l_51 = t;
  k_51 :
  if(((ATgetType(l_51) == AT_LIST) && !(ATisEmpty(l_51))))
    {
      m_51 = ATgetFirst((ATermList) l_51);
      n_51 = (ATerm) ATgetNext((ATermList) l_51);
      {
        ATerm r_51 = NULL,t_51 = NULL;
        ATerm s_51 = NULL;
        t = SSLgetAnnotations(not_null(l_51));
        {
          s_51 = t;
          if(((r_51 != NULL) && (r_51 != s_51)))
            _fail(s_51);
          else
            r_51 = s_51;
        }
        {
          t = not_null(m_51);
          {
            ATerm v_51 = NULL;
            t = h_52(t);
            {
              t_51 = t;
              {
                t = not_null(n_51);
                {
                  ATerm x_51 = NULL;
                  t = i_52(t);
                  {
                    v_51 = t;
                    {
                      ATerm y_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_51)), not_null(t_51)), not_null(r_51));
                      {
                        y_51 = t;
                        if(((x_51 != NULL) && (x_51 != y_51)))
                          _fail(y_51);
                        else
                          x_51 = y_51;
                      }
                      t = not_null(x_51);
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
  ATerm k_52 = NULL;
  k_52 = t;
  j_52 :
  if(((ATgetType(k_52) == AT_LIST) && ATisEmpty(k_52)))
    {
      {
        ATerm m_52 = NULL,o_52 = NULL;
        ATerm p_33;
        p_33 = t;
        {
          ATerm n_52 = NULL;
          t = SSLgetAnnotations(not_null(k_52));
          {
            n_52 = t;
            if(((m_52 != NULL) && (m_52 != n_52)))
              _fail(n_52);
            else
              m_52 = n_52;
          }
        }
        t = p_33;
        {
          ATerm p_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_52));
          {
            p_52 = t;
            if(((o_52 != NULL) && (o_52 != p_52)))
              _fail(p_52);
            else
              o_52 = p_52;
          }
          t = not_null(o_52);
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
  ATerm v_52 = NULL,x_52 = NULL,y_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym__2))
    {
      x_52 = ATgetArgument(v_52, 0);
      y_52 = ATgetArgument(v_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_18, not_null(x_52), not_null(y_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_77 (ATerm))
{
  ATerm q_33;
  q_33 = t;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_33;
        t = t_77(t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
        }
      }
  }
  t = q_33;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm i_53 = NULL;
      ATerm u_33;
      u_33 = t;
      {
        ATerm g_53 = NULL;
        ATerm h_53 = NULL;
        h_53 = t;
        if(((g_53 != NULL) && (g_53 != h_53)))
          _fail(h_53);
        else
          g_53 = h_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_29, not_null(g_53));
          t = set_config_0(t);
        }
      }
      t = u_33;
      {
        ATerm j_53 = NULL;
        j_53 = t;
        if(((i_53 != NULL) && (i_53 != j_53)))
          _fail(j_53);
        else
          i_53 = j_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_53));
      }
      return(t);
    }
    ATerm e_9 (ATerm t)
    {
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
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
              {
                t = t_77(t);
                t = Cons_2(t, _id, e_9);
              }
            }
          LocalPopChoice(w_33);
        }
      else
        {
          t = v_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_9, e_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
  ATerm a_34;
  a_34 = t;
  {
    ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
    s_53 = t;
    o_53 :
    if(match_cons(s_53, sym__3))
      {
        t_53 = ATgetArgument(s_53, 0);
        u_53 = ATgetArgument(s_53, 1);
        v_53 = ATgetArgument(s_53, 2);
        {
          if(((p_53 != NULL) && (p_53 != t_53)))
            _fail(t_53);
          else
            p_53 = t_53;
          {
            if(((q_53 != NULL) && (q_53 != u_53)))
              _fail(u_53);
            else
              q_53 = u_53;
            {
              if(((r_53 != NULL) && (r_53 != v_53)))
                _fail(v_53);
              else
                r_53 = v_53;
              t = SSL_table_put(not_null(p_53), not_null(q_53), not_null(r_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm y_53 = NULL;
  ATerm b_34;
  b_34 = t;
  {
    t = term_d_34;
    t = table_put_0(t);
  }
  t = b_34;
  {
    ATerm f_9 (ATerm t)
    {
      ATerm e_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_77(t);
          LocalPopChoice(g_34);
        }
      else
        {
          t = e_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_9);
    {
      ATerm h_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_34;
          j_34 = t;
          {
            ATerm l_34 = t;
            int m_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_l_33;
                t = get_config_0(t);
                LocalPopChoice(m_34);
              }
            else
              {
                t = l_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = j_34;
          {
            t = system_usage_0(t);
            {
              t = term_v_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(i_34);
        }
      else
        {
          t = h_34;
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_9 (ATerm t)
                {
                  ATerm l_9 (ATerm t)
                  {
                    ATerm z_53 = NULL;
                    z_53 = t;
                    if(((y_53 != NULL) && (y_53 != z_53)))
                      _fail(z_53);
                    else
                      y_53 = z_53;
                    return(t);
                  }
                  t = Undefined_1(t, l_9);
                  return(t);
                }
                t = fetch_1(t, k_9);
                {
                  ATerm m_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_53)), term_p_34);
                    return(t);
                  }
                  t = say_1(t, m_9);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_10;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_34);
              }
            else
              {
                t = n_34;
                {
                }
              }
          }
        }
      {
        ATerm q_34;
        q_34 = t;
        {
          t = term_j_30;
          t = table_destroy_0(t);
        }
        t = q_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm))
{
  t = parse_options_1(t, p_75);
  {
    t = store_options_0(t);
    {
      t = r_75(t);
      {
        ATerm r_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_75);
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            {
              ATerm t_34 = t;
              int u_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_34);
                }
              else
                {
                  t = t_34;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm t_75 (ATerm), ATerm u_75 (ATerm))
{
  t = option_wrap_4(t, t_75, default_usage_0, _id, u_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm n_9 (ATerm t)
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_74(t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    t = xtc_io_1(t, g_74);
    return(t);
  }
  t = option_wrap_2(t, n_9, o_9);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  t = xtc_io_wrap_2(t, i_74, j_74);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    ATerm x_34;
    x_34 = t;
    {
      ATerm c_54 = NULL;
      ATerm d_54 = NULL;
      t = term_y_34;
      {
        t = xtc_find_path_0(t);
        {
          d_54 = t;
          if(((c_54 != NULL) && (c_54 != d_54)))
            _fail(d_54);
          else
            c_54 = d_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_54)), term_z_34));
        t = extend_config_0(t);
      }
    }
    t = x_34;
    t = parse_module_0(t);
    return(t);
  }
  t = xtc_iowrap_2(t, parse_stratego_options_0, t_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = parse_stratego_0(t);
  return(t);
}
