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
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
ATerm term_i_35;
ATerm term_h_35;
ATerm term_w_34;
ATerm term_k_34;
ATerm term_c_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_c_33;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_z_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_e_25;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_a_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_m_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_t_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_e_12;
ATerm term_q_11;
ATerm term_n_11;
void init_constant_terms (void)
{
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Syntax_1, term_z_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_e_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_m_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_k_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_e_12);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_u_12);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_23);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_u_12);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_u_12);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_s_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_u_12);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__3, term_r_30, term_s_30, (ATerm) ATempty);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm p_59 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm c_78 (ATerm));
ATerm assert_1 (ATerm, ATerm n_72 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_73 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm a_74 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm t_76 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_59 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm d_78 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm n_58 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_59 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm d_65 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm y_73 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm y_57 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_59 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm t_75 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_74 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_59 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm y_59 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm union_1 (ATerm, ATerm l_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm h_60 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm k_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm o_77 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm p_77 (ATerm));
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
ATerm if_verbose1_1 (ATerm, ATerm t_59 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_80 (ATerm));
ATerm Program_1 (ATerm, ATerm f_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_65 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm h_51 (ATerm), ATerm i_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_72 (ATerm));
ATerm map_1 (ATerm, ATerm s_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_52 (ATerm), ATerm r_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_81 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm t_77 (ATerm), ATerm u_77 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm parse_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm int_to_string_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_int_to_string(not_null(e_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,j_1 = NULL;
  e_1 = t;
  d_1 :
  if(match_cons(e_1, sym__2))
    {
      f_1 = ATgetArgument(e_1, 0);
      j_1 = ATgetArgument(e_1, 1);
      {
        ATerm e_7 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_1), not_null(j_1));
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = e_7;
            t = SSL_subtr(not_null(f_1), not_null(j_1));
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
  ATerm t_2 = NULL;
  ATerm u_2 = NULL,z_2 = NULL;
  ATerm v_2 = NULL;
  t = term_n_11;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = term_q_11;
      }
    {
      v_2 = t;
      if(((u_2 != NULL) && (u_2 != v_2)))
        _fail(v_2);
      else
        u_2 = v_2;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), term_q_11);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          z_2 = t;
          if(((t_2 != NULL) && (t_2 != z_2)))
            _fail(z_2);
          else
            t_2 = z_2;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_2)), term_n_11);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  e_3 = t;
  d_3 :
  if(match_cons(e_3, sym__2))
    {
      f_3 = ATgetArgument(e_3, 0);
      g_3 = ATgetArgument(e_3, 1);
      t = SSL_WriteToBinaryFile(not_null(f_3), not_null(g_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm m_3 = NULL;
  ATerm o_3 = NULL;
  m_3 = t;
  {
    ATerm p_3 = NULL;
    t = xtc_new_file_0(t);
    {
      p_3 = t;
      {
        if(((o_3 != NULL) && (o_3 != p_3)))
          _fail(p_3);
        else
          o_3 = p_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), not_null(m_3));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(o_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_3));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, l_78, m_78);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  t = SSL_close_file(not_null(t_3));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  x_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      t = SSL_execvp(not_null(z_3), not_null(a_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  t = SSL_waitpid(not_null(f_4));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm p_4 = NULL;
  ATerm r_4 = NULL;
  p_4 = t;
  {
    t = fork_0(t);
    {
      r_4 = t;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 = NULL;
            t_4 = t;
            l_4 :
            if(match_int(t_4, 0))
              {
                t = not_null(p_4);
                t = p_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
              t = not_null(r_4);
              {
                t = waitpid_0(t);
                {
                  u_4 = t;
                  n_4 :
                  if(match_cons(u_4, sym_WaitStatus_3))
                    {
                      v_4 = ATgetArgument(u_4, 0);
                      w_4 = ATgetArgument(u_4, 1);
                      x_4 = ATgetArgument(u_4, 2);
                      o_4 :
                      if(match_int(v_4, 0))
                        {
                          t = not_null(p_4);
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
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        ATerm b_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(g_5));
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
ATerm xtc_command_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm x_11;
  x_11 = t;
  {
    ATerm n_5 = NULL;
    t = c_78(t);
    {
      t = xtc_find_warning_0(t);
      {
        n_5 = t;
        if(((m_5 != NULL) && (m_5 != n_5)))
          _fail(n_5);
        else
          m_5 = n_5;
      }
    }
  }
  t = x_11;
  {
    ATerm y_11;
    y_11 = t;
    {
      ATerm o_5 = NULL;
      ATerm p_5 = NULL;
      p_5 = t;
      if(((o_5 != NULL) && (o_5 != p_5)))
        _fail(p_5);
      else
        o_5 = p_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), not_null(o_5));
        t = call_0(t);
      }
    }
    t = y_11;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym__2))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      {
        ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
        ATerm b_12;
        b_12 = t;
        {
          ATerm f_6 = NULL;
          ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
          t = n_72(t);
          {
            f_6 = t;
            {
              if(((c_6 != NULL) && (c_6 != f_6)))
                _fail(f_6);
              else
                c_6 = f_6;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_6), not_null(y_5), not_null(z_5));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_12 = t;
                    int d_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), term_e_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(d_12);
                      }
                    else
                      {
                        t = c_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_6 = t;
                      v_5 :
                      if(((ATgetType(g_6) == AT_LIST) && !(ATisEmpty(g_6))))
                        {
                          h_6 = ATgetFirst((ATermList) g_6);
                          i_6 = (ATerm) ATgetNext((ATermList) g_6);
                          {
                            if(((d_6 != NULL) && (d_6 != h_6)))
                              _fail(h_6);
                            else
                              d_6 = h_6;
                            {
                              if(((e_6 != NULL) && (e_6 != i_6)))
                                _fail(i_6);
                              else
                                e_6 = i_6;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_6), term_e_12, (ATerm) ATinsert(CheckATermList(not_null(e_6)), (ATerm) ATinsert(CheckATermList(not_null(d_6)), not_null(y_5))));
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
        t = b_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm j_12;
  j_12 = t;
  {
    t = b_73(t);
    {
      ATerm f_0 (ATerm t)
      {
        t = term_k_12;
        return(t);
      }
      t = debug_1(t, f_0);
    }
  }
  t = j_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
      s_6 = t;
      n_6 :
      if(match_cons(s_6, sym__2))
        {
          t_6 = ATgetArgument(s_6, 0);
          u_6 = ATgetArgument(s_6, 1);
          {
            if(((r_6 != NULL) && (r_6 != t_6)))
              _fail(t_6);
            else
              r_6 = t_6;
            if(((q_6 != NULL) && (q_6 != u_6)))
              _fail(u_6);
            else
              q_6 = u_6;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_12);
      t = SSL_open_file(not_null(r_6), not_null(q_6));
    }
  else
    {
      t = l_12;
      {
        ATerm v_6 = NULL;
        ATerm w_6 = NULL;
        ATerm h_0 (ATerm t)
        {
          t = term_n_12;
          return(t);
        }
        t = obsolete_1(t, h_0);
        {
          v_6 = t;
          {
            if(((r_6 != NULL) && (r_6 != v_6)))
              _fail(v_6);
            else
              r_6 = v_6;
            {
              ATerm p_12;
              p_12 = t;
              {
                ATerm x_6 = NULL;
                t = term_r_12;
                {
                  x_6 = t;
                  if(((w_6 != NULL) && (w_6 != x_6)))
                    _fail(x_6);
                  else
                    w_6 = x_6;
                }
              }
              t = p_12;
              t = SSL_open_file(not_null(r_6), not_null(w_6));
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
  ATerm c_7 = NULL;
  ATerm d_7 = NULL;
  t = term_u_12;
  {
    t = new_0(t);
    {
      d_7 = t;
      if(((c_7 != NULL) && (c_7 != d_7)))
        _fail(d_7);
      else
        c_7 = d_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), term_v_12);
    {
      t = conc_strings_0(t);
      {
        ATerm q_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, q_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm h_7 = NULL;
  t = new_file_0(t);
  {
    h_7 = t;
    {
      ATerm w_12;
      w_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_r_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_u_12);
            {
              ATerm r_0 (ATerm t)
              {
                t = term_x_12;
                return(t);
              }
              t = assert_1(t, r_0);
            }
          }
        }
      }
      t = w_12;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym_stdin_0))
    {
      ATerm t_7 = NULL;
      ATerm u_7 = NULL;
      ATerm v_7 = NULL;
      t = xtc_new_file_0(t);
      {
        u_7 = t;
        {
          if(((t_7 != NULL) && (t_7 != u_7)))
            _fail(u_7);
          else
            t_7 = u_7;
          {
            ATerm w_7 = NULL;
            t = p_0(t);
            {
              w_7 = t;
              if(((v_7 != NULL) && (v_7 != w_7)))
                _fail(w_7);
              else
                v_7 = w_7;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_7)), term_a_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(t_7);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_7));
    }
  else
    {
      if(match_cons(r_7, sym_FILE_1))
        {
          s_7 = ATgetArgument(r_7, 0);
          {
            ATerm y_7 = NULL;
            ATerm z_7 = NULL;
            t = not_null(s_7);
            {
              ATerm a_8 = NULL;
              t = xtc_new_file_0(t);
              {
                z_7 = t;
                {
                  if(((y_7 != NULL) && (y_7 != z_7)))
                    _fail(z_7);
                  else
                    y_7 = z_7;
                  {
                    ATerm b_8 = NULL;
                    t = p_0(t);
                    {
                      b_8 = t;
                      if(((a_8 != NULL) && (a_8 != b_8)))
                        _fail(b_8);
                      else
                        a_8 = b_8;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_7)), term_a_13), not_null(s_7)), term_b_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(y_7);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_7));
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
  ATerm m_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_stdin_0))
    {
      ATerm o_8 = NULL,q_8 = NULL;
      ATerm e_13;
      e_13 = t;
      {
        ATerm p_8 = NULL;
        t = SSLgetAnnotations(not_null(m_8));
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
      }
      t = e_13;
      {
        ATerm r_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(o_8));
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
        t = not_null(q_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          t = stdin_0(t);
        }
      LocalPopChoice(g_13);
      t = xtc_transform_file_2(t, e_78, f_78);
    }
  else
    {
      t = f_13;
      t = xtc_transform_term_2(t, e_78, f_78);
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym__2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_8)), term_o_13), not_null(y_8));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm f_9 = NULL,h_9 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    ATerm g_9 = NULL;
    t = u_63(t);
    {
      g_9 = t;
      if(((f_9 != NULL) && (f_9 != g_9)))
        _fail(g_9);
      else
        f_9 = g_9;
    }
  }
  t = r_13;
  {
    ATerm i_9 = NULL;
    t = v_63(t);
    {
      i_9 = t;
      if(((h_9 != NULL) && (h_9 != i_9)))
        _fail(i_9);
      else
        h_9 = i_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(h_9));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm a_74 (ATerm))
{
  t = basename_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = term_u_12;
      t = a_74(t);
      return(t);
    }
    t = split_2(t, _id, s_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm if_keep1_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm s_13;
    s_13 = t;
    {
      ATerm m_9 = NULL;
      ATerm n_9 = NULL;
      t = term_t_13;
      {
        t = get_config_0(t);
        {
          n_9 = t;
          if(((m_9 != NULL) && (m_9 != n_9)))
            _fail(n_9);
          else
            m_9 = n_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), term_q_11);
        t = geq_0(t);
      }
    }
    t = s_13;
    t = t_76(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm u_13;
    u_13 = t;
    {
      ATerm q_9 = NULL;
      ATerm r_9 = NULL;
      t = term_n_11;
      {
        t = get_config_0(t);
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), term_v_13);
        t = geq_0(t);
      }
    }
    t = u_13;
    t = v_59(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      t = SSL_rename(not_null(w_9), not_null(x_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_FILE_1))
    {
      l_10 = ATgetArgument(k_10, 0);
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_10 = NULL;
            t = n_0(t);
            {
              n_10 = t;
              f_10 :
              if(match_cons(n_10, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_b_14);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(l_10);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_b_14;
            ;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm d_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_10 = NULL;
                  ATerm q_10 = NULL;
                  t = n_0(t);
                  {
                    q_10 = t;
                    {
                      if(((p_10 != NULL) && (p_10 != q_10)))
                        _fail(q_10);
                      else
                        p_10 = q_10;
                      {
                        ATerm i_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm j_14 = t;
                            int k_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(k_14);
                              }
                            else
                              {
                                t = j_14;
                                {
                                  ATerm r_10 = NULL;
                                  r_10 = t;
                                  if(((l_10 != NULL) && (l_10 != r_10)))
                                    _fail(r_10);
                                  else
                                    l_10 = r_10;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = i_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(p_10));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_10));
                  ;
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = d_14;
                  {
                    ATerm t_10 = NULL;
                    t = n_0(t);
                    {
                      t_10 = t;
                      if(((l_10 != NULL) && (l_10 != t_10)))
                        _fail(t_10);
                      else
                        l_10 = t_10;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_10));
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
ATerm xtc_transform_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, d_78, v_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      t = term_l_14;
      return(t);
    }
    t = debug_1(t, x_0);
    return(t);
  }
  t = if_verbose6_1(t, w_0);
  {
    ATerm m_14;
    m_14 = t;
    {
      ATerm g_11 = NULL;
      ATerm y_0 (ATerm t)
      {
        t = term_p_14;
        return(t);
      }
      t = guarantee_extension_1(t, y_0);
      {
        g_11 = t;
        if(((f_11 != NULL) && (f_11 != g_11)))
          _fail(g_11);
        else
          f_11 = g_11;
      }
    }
    t = m_14;
    {
      ATerm t_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_11 = NULL;
          t = not_null(f_11);
          {
            ATerm z_0 (ATerm t)
            {
              t = term_z_14;
              return(t);
            }
            t = find_in_includes_1(t, z_0);
            {
              ATerm i_11 = NULL;
              i_11 = t;
              if(((h_11 != NULL) && (h_11 != i_11)))
                _fail(i_11);
              else
                h_11 = i_11;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_11));
            }
          }
          ;
          LocalPopChoice(w_14);
        }
      else
        {
          t = t_14;
          {
            ATerm j_11 = NULL;
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                t = term_c_15;
                return(t);
              }
              t = say_1(t, b_1);
              return(t);
            }
            t = if_verbose2_1(t, a_1);
            {
              ATerm k_11 = NULL;
              ATerm c_1 (ATerm t)
              {
                t = term_d_15;
                return(t);
              }
              t = guarantee_extension_1(t, c_1);
              {
                k_11 = t;
                if(((j_11 != NULL) && (j_11 != k_11)))
                  _fail(k_11);
                else
                  j_11 = k_11;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_11));
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = term_e_15;
                    return(t);
                  }
                  ATerm h_1 (ATerm t)
                  {
                    t = term_f_15;
                    {
                      t = get_config_0(t);
                      {
                        ATerm i_1 (ATerm t)
                        {
                          ATerm l_11 = NULL;
                          ATerm m_11 = NULL;
                          m_11 = t;
                          if(((l_11 != NULL) && (l_11 != m_11)))
                            _fail(m_11);
                          else
                            l_11 = m_11;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_11)), term_f_15);
                          return(t);
                        }
                        t = map_1(t, i_1);
                        t = concat_0(t);
                      }
                    }
                    return(t);
                  }
                  t = xtc_transform_2(t, g_1, h_1);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      t = term_k_15;
                      return(t);
                    }
                    t = xtc_transform_1(t, k_1);
                    {
                      ATerm l_1 (ATerm t)
                      {
                        t = not_null(f_11);
                        return(t);
                      }
                      t = rename_to_1(t, l_1);
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
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      {
        t = not_null(w_11);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm z_11 = NULL;
            ATerm a_12 = NULL;
            a_12 = t;
            if(((z_11 != NULL) && (z_11 != a_12)))
              _fail(a_12);
            else
              z_11 = a_12;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_11)), term_l_15), not_null(z_11));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, m_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_includes_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm f_12 = NULL,h_12 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm g_12 = NULL;
    g_12 = t;
    if(((f_12 != NULL) && (f_12 != g_12)))
      _fail(g_12);
    else
      f_12 = g_12;
  }
  t = m_15;
  {
    ATerm i_12 = NULL;
    t = term_f_15;
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(h_12));
      {
        t = find_in_path_0(t);
        {
          ATerm n_1 (ATerm t)
          {
            t = debug_1(t, n_58);
            return(t);
          }
          t = if_verbose2_1(t, n_1);
        }
      }
    }
  }
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm q_12 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      t = term_n_15;
      return(t);
    }
    t = debug_1(t, p_1);
    return(t);
  }
  t = if_verbose6_1(t, o_1);
  {
    o_12 = t;
    {
      ATerm q_1 (ATerm t)
      {
        t = term_o_15;
        return(t);
      }
      t = guarantee_extension_1(t, q_1);
      {
        q_12 = t;
        {
          ATerm s_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_12 = NULL;
              ATerm r_1 (ATerm t)
              {
                t = term_x_15;
                return(t);
              }
              t = find_in_includes_1(t, r_1);
              {
                ATerm t_12 = NULL;
                t_12 = t;
                if(((s_12 != NULL) && (s_12 != t_12)))
                  _fail(t_12);
                else
                  s_12 = t_12;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_12));
              }
              ;
              LocalPopChoice(t_15);
            }
          else
            {
              t = s_15;
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = term_a_16;
                    return(t);
                  }
                  t = say_1(t, t_1);
                  return(t);
                }
                t = if_verbose2_1(t, s_1);
                {
                  t = not_null(o_12);
                  {
                    t = get_syntax_definition_0(t);
                    {
                      ATerm u_1 (ATerm t)
                      {
                        t = term_b_16;
                        return(t);
                      }
                      ATerm v_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_12)), term_c_16);
                        return(t);
                      }
                      t = xtc_transform_2(t, u_1, v_1);
                      {
                        ATerm w_1 (ATerm t)
                        {
                          t = not_null(q_12);
                          return(t);
                        }
                        t = rename_to_1(t, w_1);
                      }
                    }
                  }
                }
              }
            }
          {
            ATerm x_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                t = term_x_15;
                return(t);
              }
              t = debug_1(t, y_1);
              return(t);
            }
            t = if_verbose6_1(t, x_1);
          }
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm d_16;
    d_16 = t;
    {
      ATerm y_12 = NULL;
      ATerm z_12 = NULL;
      t = term_n_11;
      {
        t = get_config_0(t);
        {
          z_12 = t;
          if(((y_12 != NULL) && (y_12 != z_12)))
            _fail(z_12);
          else
            y_12 = z_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_e_16);
        t = geq_0(t);
      }
    }
    t = d_16;
    t = u_59(t);
    return(t);
  }
  t = try_1(t, z_1);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm c_13 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm d_13 = NULL;
    t = d_65(t);
    {
      d_13 = t;
      if(((c_13 != NULL) && (c_13 != d_13)))
        _fail(d_13);
      else
        c_13 = d_13;
    }
    return(t);
  }
  t = fetch_1(t, a_2);
  t = not_null(c_13);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_stdin_0))
    {
      ATerm m_13 = NULL;
      ATerm n_13 = NULL;
      t = term_f_16;
      {
        t = ReadFromFile_0(t);
        {
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
        }
      }
      t = not_null(m_13);
    }
  else
    {
      if(match_cons(k_13, sym_FILE_1))
        {
          l_13 = ATgetArgument(k_13, 0);
          {
            ATerm p_13 = NULL;
            ATerm q_13 = NULL;
            t = not_null(l_13);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  q_13 = t;
                  if(((p_13 != NULL) && (p_13 != q_13)))
                    _fail(q_13);
                  else
                    p_13 = q_13;
                }
              }
            }
            t = not_null(p_13);
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
  ATerm z_13 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      t = term_h_16;
      return(t);
    }
    t = debug_1(t, c_2);
    return(t);
  }
  t = if_verbose6_1(t, b_2);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 (ATerm t)
        {
          ATerm e_2 (ATerm t)
          {
            t = term_r_16;
            return(t);
          }
          t = guarantee_extension_1(t, e_2);
          return(t);
        }
        t = FILE_1(t, d_2);
        t = read_from_0(t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_14 = NULL;
              ATerm f_2 (ATerm t)
              {
                ATerm g_2 (ATerm t)
                {
                  t = term_u_16;
                  return(t);
                }
                t = guarantee_extension_1(t, g_2);
                return(t);
              }
              t = FILE_1(t, f_2);
              {
                t = read_from_0(t);
                {
                  a_14 = t;
                  {
                    ATerm c_14 = NULL;
                    ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
                    t = not_null(a_14);
                    {
                      c_14 = t;
                      {
                        t = SSL_explode_term(not_null(c_14));
                        {
                          e_14 = t;
                          y_13 :
                          if(match_cons(e_14, sym__2))
                            {
                              f_14 = ATgetArgument(e_14, 0);
                              g_14 = ATgetArgument(e_14, 1);
                              if(((z_13 != NULL) && (z_13 != f_14)))
                                _fail(f_14);
                              else
                                z_13 = f_14;
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(z_13))));
                  }
                }
              }
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_a_17));
            }
        }
      }
    {
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          t = term_h_16;
          return(t);
        }
        t = debug_1(t, i_2);
        return(t);
      }
      t = if_verbose6_1(t, h_2);
    }
  }
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm k_2 (ATerm t)
    {
      t = term_f_17;
      return(t);
    }
    t = debug_1(t, k_2);
    return(t);
  }
  t = if_verbose6_1(t, j_2);
  {
    r_14 = t;
    q_14 :
    if(match_cons(r_14, sym_FILE_1))
      {
        s_14 = ATgetArgument(r_14, 0);
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_17;
              t = get_config_0(t);
              ;
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                t = get_meta_0(t);
                {
                  ATerm n_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_14 = NULL,v_14 = NULL;
                      u_14 = t;
                      o_14 :
                      if(match_cons(u_14, sym_Meta_1))
                        {
                          v_14 = ATgetArgument(u_14, 0);
                          {
                            t = not_null(v_14);
                            {
                              ATerm l_2 (ATerm t)
                              {
                                ATerm x_14 = NULL,y_14 = NULL;
                                x_14 = t;
                                n_14 :
                                if(match_cons(x_14, sym_Syntax_1))
                                  {
                                    y_14 = ATgetArgument(x_14, 0);
                                    t = not_null(y_14);
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = fetch_elem_1(t, l_2);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      ;
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = n_17;
                      {
                        ATerm a_15 = NULL;
                        ATerm b_15 = NULL;
                        b_15 = t;
                        if(((a_15 != NULL) && (a_15 != b_15)))
                          _fail(b_15);
                        else
                          a_15 = b_15;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), not_null(s_14)), term_q_17), not_null(a_15)), term_p_17);
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
            ATerm m_2 (ATerm t)
            {
              ATerm n_2 (ATerm t)
              {
                t = term_t_17;
                return(t);
              }
              t = debug_1(t, n_2);
              return(t);
            }
            t = if_verbose2_1(t, m_2);
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
ATerm basename_1 (ATerm t, ATerm y_73 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm o_2 (ATerm t)
    {
      ATerm v_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, o_2);
          ;
          LocalPopChoice(y_17);
        }
      else
        {
          t = v_17;
          {
            ATerm z_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm i_15 = NULL;
                  i_15 = t;
                  g_15 :
                  if(!(match_int(i_15, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, p_2, _id);
                ;
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm j_15 = NULL;
                    j_15 = t;
                    h_15 :
                    if(!(match_int(j_15, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, q_2, y_73);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, o_2);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_FILE_1))
    {
      r_15 = ATgetArgument(q_15, 0);
      {
        ATerm u_15 = NULL,w_15 = NULL;
        ATerm v_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
        {
          t = not_null(r_15);
          {
            ATerm y_15 = NULL;
            t = y_57(t);
            {
              w_15 = t;
              {
                ATerm z_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(w_15)), not_null(u_15));
                {
                  z_15 = t;
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                }
                t = not_null(y_15);
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
  ATerm i_16 = NULL,j_16 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      t = term_b_18;
      return(t);
    }
    t = debug_1(t, s_2);
    return(t);
  }
  t = if_verbose6_1(t, r_2);
  {
    ATerm e_18;
    e_18 = t;
    {
      ATerm l_16 = NULL,m_16 = NULL;
      ATerm w_2 (ATerm t)
      {
        ATerm k_16 = NULL;
        t = basename_0(t);
        {
          k_16 = t;
          if(((j_16 != NULL) && (j_16 != k_16)))
            _fail(k_16);
          else
            j_16 = k_16;
        }
        return(t);
      }
      t = FILE_1(t, w_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            l_16 = t;
            g_16 :
            if(match_cons(l_16, sym_FILE_1))
              {
                m_16 = ATgetArgument(l_16, 0);
                if(((i_16 != NULL) && (i_16 != m_16)))
                  _fail(m_16);
                else
                  i_16 = m_16;
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = e_18;
    {
      ATerm x_2 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        ATerm n_16 = NULL;
        ATerm o_16 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm a_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_i_18);
            return(t);
          }
          t = if_verbose3_1(t, a_3);
          {
            o_16 = t;
            if(((n_16 != NULL) && (n_16 != o_16)))
              _fail(o_16);
            else
              n_16 = o_16;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_16)), not_null(i_16)), term_k_18), term_j_18);
        return(t);
      }
      t = xtc_transform_2(t, x_2, y_2);
      {
        ATerm b_3 (ATerm t)
        {
          t = term_o_18;
          return(t);
        }
        t = xtc_transform_2(t, b_3, pass_verbose_0);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm h_3 (ATerm t)
            {
              t = not_null(j_16);
              {
                ATerm i_3 (ATerm t)
                {
                  t = term_w_18;
                  return(t);
                }
                t = guarantee_extension_1(t, i_3);
              }
              return(t);
            }
            t = copy_to_1(t, h_3);
            return(t);
          }
          t = if_keep1_1(t, c_3);
          {
            ATerm j_3 (ATerm t)
            {
              t = term_x_18;
              return(t);
            }
            t = xtc_transform_2(t, j_3, pass_verbose_0);
            {
              ATerm k_3 (ATerm t)
              {
                t = term_y_18;
                return(t);
              }
              t = xtc_transform_2(t, k_3, pass_verbose_0);
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
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      {
        ATerm b_17 = NULL;
        ATerm c_17 = NULL,e_17 = NULL;
        ATerm d_17 = NULL;
        t = not_null(x_16);
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              t = (ATerm) ATempty;
            }
          {
            d_17 = t;
            if(((c_17 != NULL) && (c_17 != d_17)))
              _fail(d_17);
            else
              c_17 = d_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), not_null(c_17));
          {
            t = conc_0(t);
            {
              e_17 = t;
              if(((b_17 != NULL) && (b_17 != e_17)))
                _fail(e_17);
              else
                b_17 = e_17;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_19, not_null(x_16), not_null(b_17));
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
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 (ATerm t)
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, k_17);
              ;
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm j_17 = NULL;
                  j_17 = t;
                  i_17 :
                  if(!(match_int(j_17, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm n_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, l_3, n_3);
              }
            }
          return(t);
        }
        t = k_17(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  t = SSL_table_keys(not_null(m_17));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm u_17 = NULL;
        ATerm w_17 = NULL;
        u_17 = t;
        {
          ATerm x_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(u_17));
          {
            t = table_get_0(t);
            {
              x_17 = t;
              if(((w_17 != NULL) && (w_17 != x_17)))
                _fail(x_17);
              else
                w_17 = x_17;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(w_17));
        }
        return(t);
      }
      t = map_1(t, q_3);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm g_19;
    g_19 = t;
    {
      ATerm c_18 = NULL;
      ATerm d_18 = NULL;
      t = term_n_11;
      {
        t = get_config_0(t);
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), term_h_19);
        t = geq_0(t);
      }
    }
    t = g_19;
    t = x_59(t);
    return(t);
  }
  t = try_1(t, r_3);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm n_19;
  n_19 = t;
  {
    ATerm g_18 = NULL;
    ATerm h_18 = NULL;
    h_18 = t;
    if(((g_18 != NULL) && (g_18 != h_18)))
      _fail(h_18);
    else
      g_18 = h_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, not_null(g_18));
      t = printnl_0(t);
    }
  }
  t = n_19;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_18)));
    {
      t = table_get_0(t);
      {
        r_18 = t;
        l_18 :
        if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
          {
            s_18 = ATgetFirst((ATermList) r_18);
            v_18 = (ATerm) ATgetNext((ATermList) r_18);
            m_18 :
            if(match_cons(s_18, sym__2))
              {
                t_18 = ATgetArgument(s_18, 0);
                u_18 = ATgetArgument(s_18, 1);
                {
                  if(((p_18 != NULL) && (p_18 != t_18)))
                    _fail(t_18);
                  else
                    p_18 = t_18;
                  if(((q_18 != NULL) && (q_18 != u_18)))
                    _fail(u_18);
                  else
                    q_18 = u_18;
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
    t = not_null(q_18);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym__2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm p_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_19)));
        {
          t = table_get_0(t);
          {
            ATerm s_3 (ATerm t)
            {
              ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
              q_19 = t;
              i_19 :
              if(match_cons(q_19, sym__2))
                {
                  r_19 = ATgetArgument(q_19, 0);
                  s_19 = ATgetArgument(q_19, 1);
                  {
                    if(((m_19 != NULL) && (m_19 != r_19)))
                      _fail(r_19);
                    else
                      m_19 = r_19;
                    if(((p_19 != NULL) && (p_19 != s_19)))
                      _fail(s_19);
                    else
                      p_19 = s_19;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_3);
          }
        }
        t = not_null(p_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_3 (ATerm t)
            {
              t = filter_1(t, t_75);
              return(t);
            }
            t = Cons_2(t, t_75, u_3);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
              x_19 = t;
              w_19 :
              if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
                {
                  y_19 = ATgetFirst((ATermList) x_19);
                  z_19 = (ATerm) ATgetNext((ATermList) x_19);
                  {
                    t = not_null(z_19);
                    t = filter_1(t, t_75);
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
ATerm repeat_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm d_20 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      t = s_74(t);
      t = d_20(t);
      return(t);
    }
    t = try_1(t, v_3);
    return(t);
  }
  t = d_20(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm c_20;
  c_20 = t;
  {
    ATerm w_3 (ATerm t)
    {
      t = term_f_20;
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
    t = repeat_1(t, w_3);
  }
  t = c_20;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm h_20;
    h_20 = t;
    {
      ATerm k_20 = NULL;
      ATerm l_20 = NULL;
      t = term_n_11;
      {
        t = get_config_0(t);
        {
          l_20 = t;
          if(((k_20 != NULL) && (k_20 != l_20)))
            _fail(l_20);
          else
            k_20 = l_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), term_i_20);
        t = geq_0(t);
      }
    }
    t = h_20;
    t = w_59(t);
    return(t);
  }
  t = try_1(t, b_4);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm j_20;
    j_20 = t;
    {
      ATerm o_20 = NULL;
      ATerm p_20 = NULL;
      t = term_n_11;
      {
        t = get_config_0(t);
        {
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), term_m_20);
        t = geq_0(t);
      }
    }
    t = j_20;
    t = y_59(t);
    return(t);
  }
  t = try_1(t, c_4);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      if(((w_20 != NULL) && (w_20 != x_20)))
        _fail(x_20);
      else
        w_20 = x_20;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      k_21 = (ATerm) ATgetNext((ATermList) i_21);
      {
        t = q_70(t);
        {
          ATerm d_4 (ATerm t)
          {
            ATerm n_21 = NULL;
            n_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(n_21));
              t = p_70(t);
            }
            return(t);
          }
          t = fetch_1(t, d_4);
        }
        t = not_null(k_21);
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
  ATerm t_21 = NULL,u_21 = NULL,a_22 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      a_22 = ATgetArgument(t_21, 1);
      {
        t = not_null(u_21);
        {
          ATerm i_22 (ATerm t)
          {
            ATerm n_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_22);
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
                      ATerm e_4 (ATerm t)
                      {
                        t = not_null(a_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_70, e_4);
                      t = i_22(t);
                      ;
                      LocalPopChoice(s_20);
                    }
                  else
                    {
                      t = r_20;
                      t = Cons_2(t, _id, i_22);
                    }
                }
              }
            return(t);
          }
          t = i_22(t);
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
  ATerm v_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__3))
    {
      w_22 = ATgetArgument(v_22, 0);
      y_22 = ATgetArgument(v_22, 1);
      z_22 = ATgetArgument(v_22, 2);
      {
        ATerm t_20;
        t_20 = t;
        {
          ATerm d_23 = NULL;
          ATerm e_23 = NULL,g_23 = NULL;
          ATerm f_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), not_null(y_22));
          {
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                t = (ATerm) ATempty;
              }
            {
              f_23 = t;
              if(((e_23 != NULL) && (e_23 != f_23)))
                _fail(f_23);
              else
                e_23 = f_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(z_22));
            {
              t = union_0(t);
              {
                g_23 = t;
                if(((d_23 != NULL) && (d_23 != g_23)))
                  _fail(g_23);
                else
                  d_23 = g_23;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_22), not_null(y_22), not_null(d_23));
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
ATerm table_putlist_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym__2))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      {
        t = not_null(q_23);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
            t_23 = t;
            m_23 :
            if(match_cons(t_23, sym__2))
              {
                u_23 = ATgetArgument(t_23, 0);
                v_23 = ATgetArgument(t_23, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_23), not_null(u_23), not_null(v_23));
                  t = h_60(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_4);
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
  ATerm b_24 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_24 = NULL;
      c_24 = t;
      {
        if(((b_24 != NULL) && (b_24 != c_24)))
          _fail(c_24);
        else
          b_24 = c_24;
        t = SSL_ReadFromFile(not_null(b_24));
      }
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm h_4 (ATerm t)
        {
          t = term_c_21;
          return(t);
        }
        t = debug_1(t, h_4);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm g_24 = NULL;
  ATerm n_24 = NULL;
  g_24 = t;
  {
    ATerm d_21;
    d_21 = t;
    {
      ATerm o_24 = NULL;
      t = term_e_21;
      {
        o_24 = t;
        if(((n_24 != NULL) && (n_24 != o_24)))
          _fail(o_24);
        else
          n_24 = o_24;
      }
    }
    t = d_21;
    {
      t = SSL_open_file(not_null(g_24), not_null(n_24));
      t = SSL_close_file(not_null(g_24));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm w_24 = NULL;
  u_24 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = term_f_21;
        return(t);
      }
      t = debug_1(t, j_4);
      return(t);
    }
    t = if_verbose5_1(t, i_4);
    {
      ATerm g_21 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_24)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_21;
        }
      {
        ATerm l_21;
        l_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_19, term_m_21, (ATerm) ATinsert(ATempty, not_null(u_24)));
          t = table_put_0(t);
        }
        t = l_21;
        {
          ATerm k_4 (ATerm t)
          {
            ATerm m_4 (ATerm t)
            {
              t = term_o_21;
              return(t);
            }
            t = debug_1(t, m_4);
            return(t);
          }
          t = if_verbose4_1(t, k_4);
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(q_21);
              }
            else
              {
                t = p_21;
                t = (ATerm) ATempty;
              }
            {
              ATerm q_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  t = term_r_21;
                  return(t);
                }
                t = say_1(t, s_4);
                return(t);
              }
              t = if_verbose6_1(t, q_4);
              {
                ATerm x_24 = NULL;
                x_24 = t;
                if(((w_24 != NULL) && (w_24 != x_24)))
                  _fail(x_24);
                else
                  w_24 = x_24;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_19, not_null(w_24));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm y_4 (ATerm t)
                      {
                        ATerm z_4 (ATerm t)
                        {
                          t = term_v_21;
                          return(t);
                        }
                        t = say_1(t, z_4);
                        return(t);
                      }
                      t = if_verbose6_1(t, y_4);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_t_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_24)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm a_5 (ATerm t)
                            {
                              ATerm b_5 (ATerm t)
                              {
                                t = term_r_21;
                                return(t);
                              }
                              t = say_1(t, b_5);
                              return(t);
                            }
                            t = if_verbose4_1(t, a_5);
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
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_getenv(not_null(f_25));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_21;
      t = get_config_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm z_21 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_22;
            t = getenv_0(t);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = z_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      t = term_d_22;
      return(t);
    }
    t = debug_1(t, h_5);
    return(t);
  }
  t = if_verbose5_1(t, c_5);
  {
    ATerm e_22;
    e_22 = t;
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_22;
          t = table_get_0(t);
          ;
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_22;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm j_5 (ATerm t)
        {
          t = term_j_22;
          return(t);
        }
        t = debug_1(t, j_5);
        return(t);
      }
      t = if_verbose5_1(t, i_5);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          t = term_m_22;
          return(t);
        }
        t = debug_1(t, l_5);
        return(t);
      }
      t = if_verbose5_1(t, k_5);
      {
        t = xtc_load_0(t);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm q_5 (ATerm t)
            {
              ATerm r_5 (ATerm t)
              {
                t = term_m_22;
                return(t);
              }
              t = debug_1(t, r_5);
              return(t);
            }
            t = if_verbose5_1(t, q_5);
          }
        }
      }
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm j_25 = NULL;
        ATerm k_25 = NULL;
        k_25 = t;
        if(((j_25 != NULL) && (j_25 != k_25)))
          _fail(k_25);
        else
          j_25 = k_25;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_22), not_null(j_25)), term_p_22);
          {
            t = error_0(t);
            {
              ATerm s_5 (ATerm t)
              {
                t = term_t_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm t_5 (ATerm t)
                    {
                      t = term_r_22;
                      return(t);
                    }
                    t = debug_1(t, t_5);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, s_5);
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
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 (ATerm t)
      {
        ATerm r_25 = NULL;
        r_25 = t;
        m_25 :
        if(!(match_string(r_25, "-I")))
          {
            if(!(match_string(r_25, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        ATerm x_22;
        x_22 = t;
        {
          ATerm s_25 = NULL;
          ATerm t_25 = NULL;
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATempty, not_null(s_25)));
            t = extend_config_0(t);
          }
        }
        t = x_22;
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        t = term_a_23;
        return(t);
      }
      t = ArgOption_3(t, u_5, a_6, b_6);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              ATerm u_25 = NULL;
              u_25 = t;
              o_25 :
              if(!(match_string(u_25, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_6 (ATerm t)
            {
              ATerm h_23;
              h_23 = t;
              {
                ATerm v_25 = NULL;
                ATerm w_25 = NULL;
                w_25 = t;
                if(((v_25 != NULL) && (v_25 != w_25)))
                  _fail(w_25);
                else
                  v_25 = w_25;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(v_25));
                  t = set_config_0(t);
                }
              }
              t = h_23;
              return(t);
            }
            ATerm l_6 (ATerm t)
            {
              t = term_i_23;
              return(t);
            }
            t = ArgOption_3(t, j_6, k_6, l_6);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm m_6 (ATerm t)
              {
                ATerm x_25 = NULL;
                x_25 = t;
                q_25 :
                if(!(match_string(x_25, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_6 (ATerm t)
              {
                ATerm j_23;
                j_23 = t;
                {
                  t = term_l_23;
                  t = set_config_0(t);
                }
                t = j_23;
                return(t);
              }
              ATerm p_6 (ATerm t)
              {
                t = term_r_23;
                return(t);
              }
              t = Option_3(t, m_6, o_6, p_6);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym__2))
    {
      d_26 = ATgetArgument(c_26, 0);
      e_26 = ATgetArgument(c_26, 1);
      t = SSL_copy(not_null(d_26), not_null(e_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_stderr_0))
    {
      ATerm o_26 = NULL,q_26 = NULL;
      ATerm s_23;
      s_23 = t;
      {
        ATerm p_26 = NULL;
        t = SSLgetAnnotations(not_null(m_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
      }
      t = s_23;
      {
        ATerm r_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(o_26));
        {
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
        }
        t = not_null(q_26);
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
  ATerm z_26 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_stdout_0))
    {
      ATerm b_27 = NULL,d_27 = NULL;
      ATerm w_23;
      w_23 = t;
      {
        ATerm c_27 = NULL;
        t = SSLgetAnnotations(not_null(z_26));
        {
          c_27 = t;
          if(((b_27 != NULL) && (b_27 != c_27)))
            _fail(c_27);
          else
            b_27 = c_27;
        }
      }
      t = w_23;
      {
        ATerm e_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(b_27));
        {
          e_27 = t;
          if(((d_27 != NULL) && (d_27 != e_27)))
            _fail(e_27);
          else
            d_27 = e_27;
        }
        t = not_null(d_27);
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
  ATerm q_27 = NULL,r_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_FILE_1))
    {
      r_27 = ATgetArgument(q_27, 0);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27 = NULL;
            ATerm u_27 = NULL;
            t = m_0(t);
            {
              u_27 = t;
              {
                if(((t_27 != NULL) && (t_27 != u_27)))
                  _fail(u_27);
                else
                  t_27 = u_27;
                {
                  ATerm z_23 = t;
                  int a_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(a_24);
                    }
                  else
                    {
                      t = z_23;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(t_27));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_27));
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
              ATerm d_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_27 = NULL;
                  ATerm x_27 = NULL;
                  t = m_0(t);
                  {
                    x_27 = t;
                    {
                      if(((w_27 != NULL) && (w_27 != x_27)))
                        _fail(x_27);
                      else
                        w_27 = x_27;
                      {
                        ATerm f_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_24 = t;
                            int i_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(i_24);
                              }
                            else
                              {
                                t = h_24;
                                {
                                  ATerm j_24 = t;
                                  int k_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(k_24);
                                    }
                                  else
                                    {
                                      t = j_24;
                                      {
                                        ATerm y_27 = NULL;
                                        y_27 = t;
                                        if(((r_27 != NULL) && (r_27 != y_27)))
                                          _fail(y_27);
                                        else
                                          r_27 = y_27;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = f_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_27), not_null(w_27));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_27));
                  ;
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = d_24;
                  {
                    ATerm a_28 = NULL;
                    t = m_0(t);
                    {
                      a_28 = t;
                      if(((r_27 != NULL) && (r_27 != a_28)))
                        _fail(a_28);
                      else
                        r_27 = a_28;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_27));
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
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  j_28 :
  if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
    {
      l_28 = ATgetFirst((ATermList) k_28);
      m_28 = (ATerm) ATgetNext((ATermList) k_28);
      t = not_null(m_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym__2))
    {
      t_28 = ATgetArgument(s_28, 0);
      u_28 = ATgetArgument(s_28, 1);
      {
        ATerm l_24;
        l_24 = t;
        {
          ATerm x_28 = NULL;
          ATerm y_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), not_null(u_28));
          {
            ATerm m_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(p_24);
              }
            else
              {
                t = m_24;
                t = (ATerm) ATempty;
              }
            {
              y_28 = t;
              if(((x_28 != NULL) && (x_28 != y_28)))
                _fail(y_28);
              else
                x_28 = y_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_28), not_null(u_28), not_null(x_28));
            t = table_put_0(t);
          }
        }
        t = l_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_72 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    ATerm i_29 = NULL;
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
    t = k_72(t);
    {
      i_29 = t;
      {
        if(((h_29 != NULL) && (h_29 != i_29)))
          _fail(i_29);
        else
          h_29 = i_29;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), term_e_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_29 = t;
            e_29 :
            if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
              {
                k_29 = ATgetFirst((ATermList) j_29);
                l_29 = (ATerm) ATgetNext((ATermList) j_29);
                {
                  if(((g_29 != NULL) && (g_29 != k_29)))
                    _fail(k_29);
                  else
                    g_29 = k_29;
                  {
                    if(((f_29 != NULL) && (f_29 != l_29)))
                      _fail(l_29);
                    else
                      f_29 = l_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_29), term_e_12, not_null(f_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_29);
                          {
                            ATerm y_6 (ATerm t)
                            {
                              ATerm m_29 = NULL;
                              m_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), not_null(m_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, y_6);
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
  t = q_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  t = SSL_remove(not_null(t_29));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm))
{
  ATerm t_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_63(t);
      t = q_63(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = t_24;
      {
        t = q_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_72 (ATerm))
{
  ATerm d_30 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm e_30 = NULL;
    ATerm f_30 = NULL;
    t = j_72(t);
    {
      e_30 = t;
      {
        if(((d_30 != NULL) && (d_30 != e_30)))
          _fail(e_30);
        else
          d_30 = e_30;
        {
          ATerm g_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_30), term_e_12);
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
                t = (ATerm) ATempty;
              }
            {
              g_30 = t;
              if(((f_30 != NULL) && (f_30 != g_30)))
                _fail(g_30);
              else
                f_30 = g_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_30), term_e_12, (ATerm) ATinsert(CheckATermList(not_null(f_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_24;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL;
  ATerm z_6 (ATerm t)
  {
    t = term_x_12;
    return(t);
  }
  t = begin_scope_1(t, z_6);
  {
    ATerm a_7 (ATerm t)
    {
      ATerm b_25;
      b_25 = t;
      {
        ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          n_30 = t;
          k_30 :
          if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
            {
              o_30 = ATgetFirst((ATermList) n_30);
              p_30 = (ATerm) ATgetNext((ATermList) n_30);
              {
                if(((m_30 != NULL) && (m_30 != o_30)))
                  _fail(o_30);
                else
                  m_30 = o_30;
                {
                  if(((l_30 != NULL) && (l_30 != p_30)))
                    _fail(p_30);
                  else
                    l_30 = p_30;
                  {
                    t = not_null(m_30);
                    {
                      ATerm b_7 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, b_7);
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
      t = b_25;
      {
        ATerm f_7 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = end_scope_1(t, f_7);
      }
      return(t);
    }
    t = restore_always_2(t, o_77, a_7);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL;
        ATerm v_30 = NULL;
        t = term_b_13;
        {
          t = get_config_0(t);
          {
            v_30 = t;
            if(((u_30 != NULL) && (u_30 != v_30)))
              _fail(v_30);
            else
              u_30 = v_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_30));
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = term_f_16;
      }
    {
      t = p_77(t);
      {
        ATerm i_7 (ATerm t)
        {
          ATerm i_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_a_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = i_25;
              t = term_b_14;
            }
          return(t);
        }
        t = copy_to_1(t, i_7);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, g_7);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm y_30 = NULL;
    y_30 = t;
    x_30 :
    if(!(match_string(y_30, "-v")))
      {
        if(!(match_string(y_30, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    t = term_n_25;
    t = set_config_0(t);
    t = term_p_25;
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  t = Option_3(t, j_7, k_7, l_7);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm b_31 = NULL;
    b_31 = t;
    z_30 :
    if(!(match_string(b_31, "-k")))
      {
        if(!(match_string(b_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    ATerm z_25;
    z_25 = t;
    {
      ATerm c_31 = NULL;
      ATerm d_31 = NULL;
      t = string_to_int_0(t);
      {
        d_31 = t;
        if(((c_31 != NULL) && (c_31 != d_31)))
          _fail(d_31);
        else
          c_31 = d_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_13, not_null(c_31));
        t = set_config_0(t);
      }
    }
    t = z_25;
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3(t, m_7, n_7, o_7);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  t = SSL_string_to_int(not_null(g_31));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 (ATerm t)
      {
        ATerm o_31 = NULL;
        o_31 = t;
        j_31 :
        if(!(match_string(o_31, "-S")))
          {
            if(!(match_string(o_31, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_7 (ATerm t)
      {
        t = term_l_23;
        t = set_config_0(t);
        t = term_h_26;
        return(t);
      }
      ATerm c_8 (ATerm t)
      {
        t = term_i_26;
        return(t);
      }
      t = Option_3(t, p_7, x_7, c_8);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 (ATerm t)
            {
              ATerm p_31 = NULL;
              p_31 = t;
              k_31 :
              if(!(match_string(p_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_8 (ATerm t)
            {
              ATerm s_31 = NULL;
              ATerm n_26;
              n_26 = t;
              {
                ATerm q_31 = NULL;
                ATerm r_31 = NULL;
                t = string_to_int_0(t);
                {
                  r_31 = t;
                  if(((q_31 != NULL) && (q_31 != r_31)))
                    _fail(r_31);
                  else
                    q_31 = r_31;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_11, not_null(q_31));
                  t = set_config_0(t);
                }
              }
              t = n_26;
              {
                ATerm t_31 = NULL;
                t_31 = t;
                if(((s_31 != NULL) && (s_31 != t_31)))
                  _fail(t_31);
                else
                  s_31 = t_31;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_31));
              }
              return(t);
            }
            ATerm f_8 (ATerm t)
            {
              t = term_s_26;
              return(t);
            }
            t = ArgOption_3(t, d_8, e_8, f_8);
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
              ATerm g_8 (ATerm t)
              {
                ATerm u_31 = NULL;
                u_31 = t;
                n_31 :
                if(!(match_string(u_31, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_8 (ATerm t)
              {
                t = term_u_26;
                t = set_config_0(t);
                t = term_v_26;
                return(t);
              }
              ATerm i_8 (ATerm t)
              {
                t = term_w_26;
                return(t);
              }
              t = Option_3(t, g_8, h_8, i_8);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm x_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = x_26;
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm a_32 = NULL;
    a_32 = t;
    x_31 :
    if(!(match_string(a_32, "-o")))
      {
        if(!(match_string(a_32, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    ATerm d_32 = NULL;
    ATerm h_27;
    h_27 = t;
    {
      ATerm b_32 = NULL;
      ATerm c_32 = NULL;
      c_32 = t;
      if(((b_32 != NULL) && (b_32 != c_32)))
        _fail(c_32);
      else
        b_32 = c_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(b_32));
        t = set_config_0(t);
      }
    }
    t = h_27;
    {
      ATerm e_32 = NULL;
      e_32 = t;
      if(((d_32 != NULL) && (d_32 != e_32)))
        _fail(e_32);
      else
        d_32 = e_32;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_32));
    }
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3(t, j_8, k_8, n_8);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm s_8 (ATerm t)
        {
          ATerm i_32 = NULL;
          i_32 = t;
          h_32 :
          if(!(match_string(i_32, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_8 (ATerm t)
        {
          t = term_m_27;
          t = set_config_0(t);
          t = term_n_27;
          return(t);
        }
        ATerm u_8 (ATerm t)
        {
          t = term_o_27;
          return(t);
        }
        t = Option_3(t, s_8, t_8, u_8);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,t_32 = NULL,u_32 = NULL;
  o_32 = t;
  m_32 :
  if(match_string(o_32, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_32) == AT_LIST) && !(ATisEmpty(o_32))))
        {
          p_32 = ATgetFirst((ATermList) o_32);
          q_32 = (ATerm) ATgetNext((ATermList) o_32);
          n_32 :
          if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
            {
              t_32 = ATgetFirst((ATermList) q_32);
              u_32 = (ATerm) ATgetNext((ATermList) q_32);
              {
                ATerm a_33 = NULL;
                ATerm s_27;
                s_27 = t;
                {
                  t = not_null(p_32);
                  t = j_0(t);
                }
                t = s_27;
                {
                  ATerm b_33 = NULL;
                  t = not_null(t_32);
                  {
                    t = k_0(t);
                    {
                      b_33 = t;
                      if(((a_33 != NULL) && (a_33 != b_33)))
                        _fail(b_33);
                      else
                        a_33 = b_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_32)), not_null(a_33));
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
  ATerm v_8 (ATerm t)
  {
    ATerm k_33 = NULL;
    k_33 = t;
    h_33 :
    if(!(match_string(k_33, "-i")))
      {
        if(!(match_string(k_33, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_9 (ATerm t)
  {
    ATerm n_33 = NULL;
    ATerm v_27;
    v_27 = t;
    {
      ATerm l_33 = NULL;
      ATerm m_33 = NULL;
      m_33 = t;
      if(((l_33 != NULL) && (l_33 != m_33)))
        _fail(m_33);
      else
        l_33 = m_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_13, not_null(l_33));
        t = set_config_0(t);
      }
    }
    t = v_27;
    {
      ATerm o_33 = NULL;
      o_33 = t;
      if(((n_33 != NULL) && (n_33 != o_33)))
        _fail(o_33);
      else
        n_33 = o_33;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_33));
    }
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    t = term_z_27;
    return(t);
  }
  t = ArgOption_3(t, v_8, a_9, b_9);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm t_33 = NULL;
  ATerm f_28;
  f_28 = t;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm u_33 = NULL,v_33 = NULL;
      u_33 = t;
      s_33 :
      if(match_cons(u_33, sym_Program_1))
        {
          v_33 = ATgetArgument(u_33, 0);
          if(((t_33 != NULL) && (t_33 != v_33)))
            _fail(v_33);
          else
            t_33 = v_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, c_9);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_28), not_null(t_33)), term_g_28));
      {
        t = printnl_0(t);
        {
          t = term_q_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATempty, term_i_28));
  {
    t = printnl_0(t);
    {
      t = term_q_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  t = SSL_TicksToSeconds(not_null(a_34));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_cons(q_34, sym__2))
    {
      r_34 = ATgetArgument(q_34, 0);
      s_34 = ATgetArgument(q_34, 1);
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_34), not_null(s_34));
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            t = SSL_addr(not_null(r_34), not_null(s_34));
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
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_71(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm f_35 = NULL,j_35 = NULL,k_35 = NULL;
        f_35 = t;
        e_35 :
        if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
          {
            j_35 = ATgetFirst((ATermList) f_35);
            k_35 = (ATerm) ATgetNext((ATermList) f_35);
            {
              ATerm n_35 = NULL;
              ATerm o_35 = NULL;
              t = not_null(k_35);
              {
                t = foldr_2(t, c_71, d_71);
                {
                  o_35 = t;
                  if(((n_35 != NULL) && (n_35 != o_35)))
                    _fail(o_35);
                  else
                    n_35 = o_35;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_35), not_null(n_35));
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
  ATerm v_35 = NULL;
  ATerm x_35 = NULL;
  v_35 = t;
  {
    ATerm y_35 = NULL;
    ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
    t = not_null(v_35);
    {
      y_35 = t;
      {
        t = SSL_explode_term(not_null(y_35));
        {
          a_36 = t;
          u_35 :
          if(match_cons(a_36, sym__2))
            {
              b_36 = ATgetArgument(a_36, 0);
              c_36 = ATgetArgument(a_36, 1);
              if(((x_35 != NULL) && (x_35 != c_36)))
                _fail(c_36);
              else
                x_35 = c_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_35);
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
    ATerm d_9 (ATerm t)
    {
      t = term_k_23;
      return(t);
    }
    t = crush_2(t, d_9, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  i_36 = t;
  h_36 :
  if(match_cons(i_36, sym__2))
    {
      j_36 = ATgetArgument(i_36, 0);
      k_36 = ATgetArgument(i_36, 1);
      {
        ATerm v_28;
        v_28 = t;
        {
          ATerm w_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_36), not_null(k_36));
              ;
              LocalPopChoice(z_28);
            }
          else
            {
              t = w_28;
              t = SSL_gtr(not_null(j_36), not_null(k_36));
            }
        }
        t = v_28;
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
  ATerm q_36 = NULL;
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
      r_36 = t;
      p_36 :
      if(match_cons(r_36, sym__2))
        {
          s_36 = ATgetArgument(r_36, 0);
          t_36 = ATgetArgument(r_36, 1);
          {
            if(((q_36 != NULL) && (q_36 != s_36)))
              _fail(s_36);
            else
              q_36 = s_36;
            if(((q_36 != NULL) && (q_36 != t_36)))
              _fail(t_36);
            else
              q_36 = t_36;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm e_9 (ATerm t)
  {
    ATerm c_29;
    c_29 = t;
    {
      ATerm w_36 = NULL;
      ATerm x_36 = NULL;
      t = term_n_11;
      {
        t = get_config_0(t);
        {
          x_36 = t;
          if(((w_36 != NULL) && (w_36 != x_36)))
            _fail(x_36);
          else
            w_36 = x_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_36), term_q_11);
        t = geq_0(t);
      }
    }
    t = c_29;
    t = t_59(t);
    return(t);
  }
  t = try_1(t, e_9);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm j_9 (ATerm t)
  {
    ATerm b_37 = NULL,d_37 = NULL;
    ATerm d_29;
    d_29 = t;
    {
      ATerm c_37 = NULL;
      t = run_time_0(t);
      {
        c_37 = t;
        if(((b_37 != NULL) && (b_37 != c_37)))
          _fail(c_37);
        else
          b_37 = c_37;
      }
    }
    t = d_29;
    {
      ATerm e_37 = NULL;
      t = term_n_29;
      {
        t = get_config_0(t);
        {
          e_37 = t;
          if(((d_37 != NULL) && (d_37 != e_37)))
            _fail(e_37);
          else
            d_37 = e_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_29), not_null(b_37)), term_o_29), not_null(d_37)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_9);
  {
    t = term_k_23;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym_Version_0))
    {
      ATerm n_37 = NULL,p_37 = NULL;
      ATerm q_29;
      q_29 = t;
      {
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(l_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
      }
      t = q_29;
      {
        ATerm q_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        t = not_null(p_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm k_9 (ATerm t)
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_9);
  t = s_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_table_create(not_null(v_37));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  {
    ATerm w_29;
    w_29 = t;
    {
      t = term_x_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_29, term_y_29, not_null(z_37));
          t = table_put_0(t);
        }
      }
    }
    t = w_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = SSL_table_destroy(not_null(d_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_38 = NULL;
  h_38 = t;
  t = SSL_exit(not_null(h_38));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  k_38 :
  if(((ATgetType(l_38) == AT_LIST) && ATisEmpty(l_38)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
        {
          m_38 = ATgetFirst((ATermList) l_38);
          n_38 = (ATerm) ATgetNext((ATermList) l_38);
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
  ATerm z_29;
  z_29 = t;
  {
    ATerm q_38 = NULL;
    ATerm v_38 = NULL;
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm r_38 = NULL;
          ATerm u_38 = NULL;
          u_38 = t;
          if(((r_38 != NULL) && (r_38 != u_38)))
            _fail(u_38);
          else
            r_38 = u_38;
          t = (ATerm) ATinsert(ATempty, not_null(r_38));
        }
      }
    {
      v_38 = t;
      if(((q_38 != NULL) && (q_38 != v_38)))
        _fail(v_38);
      else
        q_38 = v_38;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_14, not_null(q_38));
      t = printnl_0(t);
    }
  }
  t = z_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  g_39 = t;
  d_39 :
  if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
    {
      e_39 = ATgetFirst((ATermList) g_39);
      f_39 = (ATerm) ATgetNext((ATermList) g_39);
      {
        ATerm j_39 = NULL;
        t = not_null(f_39);
        {
          ATerm c_30;
          c_30 = t;
          {
            ATerm k_39 = NULL,m_39 = NULL,o_39 = NULL;
            ATerm h_30;
            h_30 = t;
            {
              ATerm l_39 = NULL;
              t = i_0(t);
              {
                l_39 = t;
                if(((k_39 != NULL) && (k_39 != l_39)))
                  _fail(l_39);
                else
                  k_39 = l_39;
              }
            }
            t = h_30;
            {
              ATerm n_39 = NULL;
              t = not_null(e_39);
              {
                t = g_0(t);
                {
                  n_39 = t;
                  if(((m_39 != NULL) && (m_39 != n_39)))
                    _fail(n_39);
                  else
                    m_39 = n_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_39)), not_null(m_39));
                {
                  o_39 = t;
                  if(((j_39 != NULL) && (j_39 != o_39)))
                    _fail(o_39);
                  else
                    j_39 = o_39;
                }
              }
            }
          }
          t = c_30;
          {
            ATerm l_9 (ATerm t)
            {
              t = not_null(j_39);
              return(t);
            }
            t = reverse_acc_2(t, g_0, l_9);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_39) == AT_LIST) && ATisEmpty(g_39)))
        {
          {
            t = term_u_12;
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
  ATerm o_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_9);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_58 (ATerm))
{
  ATerm d_40 = NULL,e_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym_Program_1))
    {
      e_40 = ATgetArgument(d_40, 0);
      {
        ATerm h_40 = NULL,j_40 = NULL;
        ATerm i_40 = NULL;
        t = SSLgetAnnotations(not_null(d_40));
        {
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
        }
        {
          t = not_null(e_40);
          {
            ATerm l_40 = NULL;
            t = f_58(t);
            {
              j_40 = t;
              {
                ATerm m_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_40)), not_null(h_40));
                {
                  m_40 = t;
                  if(((l_40 != NULL) && (l_40 != m_40)))
                    _fail(m_40);
                  else
                    l_40 = m_40;
                }
                t = not_null(l_40);
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
  ATerm v_40 = NULL;
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_40 = NULL;
      t = term_n_29;
      {
        t = get_config_0(t);
        {
          w_40 = t;
          if(((v_40 != NULL) && (v_40 != w_40)))
            _fail(w_40);
          else
            v_40 = w_40;
        }
      }
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm p_9 (ATerm t)
        {
          ATerm s_9 (ATerm t)
          {
            ATerm x_40 = NULL;
            x_40 = t;
            if(((v_40 != NULL) && (v_40 != x_40)))
              _fail(x_40);
            else
              v_40 = x_40;
            return(t);
          }
          t = Program_1(t, s_9);
          return(t);
        }
        t = option_defined_1(t, p_9);
      }
    }
  {
    ATerm t_9 (ATerm t)
    {
      ATerm y_9 (ATerm t)
      {
        t = not_null(v_40);
        return(t);
      }
      t = short_description_1(t, y_9);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_9);
    {
      t = term_q_30;
      {
        t = echo_0(t);
        {
          t = term_t_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_9 (ATerm t)
                {
                  ATerm y_40 = NULL;
                  ATerm z_40 = NULL;
                  z_40 = t;
                  if(((y_40 != NULL) && (y_40 != z_40)))
                    _fail(z_40);
                  else
                    y_40 = z_40;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), term_w_30);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_9);
                {
                  ATerm a_10 (ATerm t)
                  {
                    ATerm a_41 = NULL;
                    ATerm b_41 = NULL;
                    ATerm b_10 (ATerm t)
                    {
                      t = not_null(v_40);
                      return(t);
                    }
                    t = long_description_1(t, b_10);
                    {
                      b_41 = t;
                      if(((a_41 != NULL) && (a_41 != b_41)))
                        _fail(b_41);
                      else
                        a_41 = b_41;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_41)), term_a_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_10);
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
  ATerm e_31;
  e_31 = t;
  {
    ATerm h_41 = NULL;
    ATerm i_41 = NULL;
    i_41 = t;
    if(((h_41 != NULL) && (h_41 != i_41)))
      _fail(i_41);
    else
      h_41 = i_41;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATempty, not_null(h_41)));
      t = printnl_0(t);
    }
  }
  t = e_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm f_31;
  f_31 = t;
  {
    t = v_72(t);
    t = debug_0(t);
  }
  t = f_31;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Undefined_1))
    {
      q_41 = ATgetArgument(p_41, 0);
      {
        ATerm t_41 = NULL,v_41 = NULL;
        ATerm u_41 = NULL;
        t = SSLgetAnnotations(not_null(p_41));
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
        {
          t = not_null(q_41);
          {
            ATerm x_41 = NULL;
            t = g_58(t);
            {
              v_41 = t;
              {
                ATerm y_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_41)), not_null(t_41));
                {
                  y_41 = t;
                  if(((x_41 != NULL) && (x_41 != y_41)))
                    _fail(y_41);
                  else
                    x_41 = y_41;
                }
                t = not_null(x_41);
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
ATerm fetch_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm d_42 (ATerm t)
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_65, _id);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = Cons_2(t, _id, d_42);
      }
    return(t);
  }
  t = d_42(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_79 (ATerm))
{
  t = fetch_1(t, z_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym_Help_0))
    {
      ATerm o_42 = NULL,q_42 = NULL;
      ATerm l_31;
      l_31 = t;
      {
        ATerm p_42 = NULL;
        t = SSLgetAnnotations(not_null(i_42));
        {
          p_42 = t;
          if(((o_42 != NULL) && (o_42 != p_42)))
            _fail(p_42);
          else
            o_42 = p_42;
        }
      }
      t = l_31;
      {
        ATerm r_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_42));
        {
          r_42 = t;
          if(((q_42 != NULL) && (q_42 != r_42)))
            _fail(r_42);
          else
            q_42 = r_42;
        }
        t = not_null(q_42);
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
  ATerm y_42 = NULL;
  y_42 = t;
  t = SSL_implode_string(not_null(y_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = m_31;
      {
        ATerm d_43 = NULL,e_43 = NULL,h_43 = NULL;
        d_43 = t;
        c_43 :
        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
          {
            e_43 = ATgetFirst((ATermList) d_43);
            h_43 = (ATerm) ATgetNext((ATermList) d_43);
            {
              t = not_null(e_43);
              {
                ATerm c_10 (ATerm t)
                {
                  t = not_null(h_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_10);
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
  ATerm y_43 = NULL;
  ATerm o_44 = NULL;
  y_43 = t;
  {
    ATerm p_44 = NULL;
    ATerm s_44 = NULL,v_44 = NULL,w_44 = NULL;
    t = not_null(y_43);
    {
      p_44 = t;
      {
        t = SSL_explode_term(not_null(p_44));
        {
          s_44 = t;
          w_43 :
          if(match_cons(s_44, sym__2))
            {
              v_44 = ATgetArgument(s_44, 0);
              w_44 = ATgetArgument(s_44, 1);
              x_43 :
              if(match_string(v_44, ""))
                {
                  if(((o_44 != NULL) && (o_44 != w_44)))
                    _fail(w_44);
                  else
                    o_44 = w_44;
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
      t = not_null(o_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm b_45 (ATerm t)
  {
    ATerm w_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_45);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = w_31;
        {
          t = Nil_0(t);
          t = h_65(t);
        }
      }
    return(t);
  }
  t = b_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym__2))
    {
      j_45 = ATgetArgument(i_45, 0);
      k_45 = ATgetArgument(i_45, 1);
      {
        t = not_null(j_45);
        {
          ATerm d_10 (ATerm t)
          {
            t = not_null(k_45);
            return(t);
          }
          t = at_end_1(t, d_10);
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
  ATerm z_31 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = z_31;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  t = SSL_explode_string(not_null(v_45));
  return(t);
}
ATerm _2 (ATerm t, ATerm h_51 (ATerm), ATerm i_51 (ATerm))
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm u_46 = NULL,w_46 = NULL;
        ATerm v_46 = NULL;
        t = SSLgetAnnotations(not_null(o_46));
        {
          v_46 = t;
          if(((u_46 != NULL) && (u_46 != v_46)))
            _fail(v_46);
          else
            u_46 = v_46;
        }
        {
          t = not_null(p_46);
          {
            ATerm y_46 = NULL;
            t = h_51(t);
            {
              w_46 = t;
              {
                t = not_null(q_46);
                {
                  ATerm a_47 = NULL;
                  t = i_51(t);
                  {
                    y_46 = t;
                    {
                      ATerm b_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_46), not_null(y_46)), not_null(u_46));
                      {
                        b_47 = t;
                        if(((a_47 != NULL) && (a_47 != b_47)))
                          _fail(b_47);
                        else
                          a_47 = b_47;
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
ATerm printnl_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym__2))
    {
      k_47 = ATgetArgument(j_47, 0);
      l_47 = ATgetArgument(j_47, 1);
      {
        ATerm g_32;
        g_32 = t;
        t = SSL_printnl(not_null(k_47), not_null(l_47));
        t = g_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm j_32;
  j_32 = t;
  {
    ATerm r_47 = NULL,t_47 = NULL;
    ATerm k_32;
    k_32 = t;
    {
      ATerm s_47 = NULL;
      t = u_72(t);
      {
        s_47 = t;
        if(((r_47 != NULL) && (r_47 != s_47)))
          _fail(s_47);
        else
          r_47 = s_47;
      }
    }
    t = k_32;
    {
      ATerm u_47 = NULL;
      u_47 = t;
      if(((t_47 != NULL) && (t_47 != u_47)))
        _fail(u_47);
      else
        t_47 = u_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_47)), not_null(r_47)));
        t = printnl_0(t);
      }
    }
  }
  t = j_32;
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm x_47 (ATerm t)
  {
    ATerm l_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = l_32;
        t = Cons_2(t, s_64, x_47);
      }
    return(t);
  }
  t = x_47(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  t = SSL_is_string(not_null(z_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = s_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_10);
            ;
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            {
              ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
              j_48 = t;
              i_48 :
              if(match_cons(j_48, sym_Path_1))
                {
                  k_48 = ATgetArgument(j_48, 0);
                  t = not_null(k_48);
                }
              else
                {
                  if(match_cons(j_48, sym_Var_1))
                    {
                      k_48 = ATgetArgument(j_48, 0);
                      {
                        t = not_null(k_48);
                        {
                          ATerm y_32 = t;
                          int z_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_32);
                            }
                          else
                            {
                              t = y_32;
                              {
                                ATerm g_10 (ATerm t)
                                {
                                  t = term_c_33;
                                  return(t);
                                }
                                t = debug_1(t, g_10);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_48, sym_Prefix_2))
                        {
                          k_48 = ATgetArgument(j_48, 0);
                          l_48 = ATgetArgument(j_48, 1);
                          {
                            ATerm q_48 = NULL,s_48 = NULL;
                            ATerm d_33;
                            d_33 = t;
                            {
                              ATerm r_48 = NULL;
                              t = not_null(k_48);
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
                            }
                            t = d_33;
                            {
                              ATerm t_48 = NULL;
                              t = not_null(l_48);
                              {
                                t = eval_config_0(t);
                                {
                                  t_48 = t;
                                  if(((s_48 != NULL) && (s_48 != t_48)))
                                    _fail(t_48);
                                  else
                                    s_48 = t_48;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_48), not_null(s_48));
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
  ATerm b_49 = NULL;
  b_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(b_49));
    {
      t = table_get_0(t);
      {
        ATerm h_10 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_33;
            e_33 = t;
            {
              ATerm d_49 = NULL;
              ATerm e_49 = NULL;
              e_49 = t;
              if(((d_49 != NULL) && (d_49 != e_49)))
                _fail(e_49);
              else
                d_49 = e_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_19, not_null(b_49), not_null(d_49));
                t = table_put_0(t);
              }
            }
            t = e_33;
          }
          return(t);
        }
        t = try_1(t, h_10);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_63(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym__2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      t = SSL_table_get(not_null(k_49), not_null(l_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym__3))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      v_49 = ATgetArgument(s_49, 2);
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm z_49 = NULL;
          ATerm a_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_49), not_null(u_49));
          {
            ATerm j_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = j_33;
                t = (ATerm) ATempty;
              }
            {
              a_50 = t;
              if(((z_49 != NULL) && (z_49 != a_50)))
                _fail(a_50);
              else
                z_49 = a_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_49), not_null(u_49), (ATerm) ATinsert(CheckATermList(not_null(z_49)), not_null(v_49)));
            t = table_put_0(t);
          }
        }
        t = i_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm e_50 = NULL;
  ATerm f_50 = NULL;
  t = term_u_12;
  {
    t = e_81(t);
    {
      f_50 = t;
      if(((e_50 != NULL) && (e_50 != f_50)))
        _fail(f_50);
      else
        e_50 = f_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_30, term_s_30, not_null(e_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_string(l_50, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(l_50) == AT_LIST) && !(ATisEmpty(l_50))))
        {
          m_50 = ATgetFirst((ATermList) l_50);
          n_50 = (ATerm) ATgetNext((ATermList) l_50);
          {
            ATerm q_50 = NULL;
            ATerm q_33;
            q_33 = t;
            {
              t = not_null(m_50);
              t = a_0(t);
            }
            t = q_33;
            {
              ATerm r_50 = NULL;
              t = term_u_12;
              {
                t = c_0(t);
                {
                  r_50 = t;
                  if(((q_50 != NULL) && (q_50 != r_50)))
                    _fail(r_50);
                  else
                    q_50 = r_50;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_50)), not_null(q_50));
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
  ATerm i_10 (ATerm t)
  {
    ATerm w_50 = NULL;
    w_50 = t;
    v_50 :
    if(!(match_string(w_50, "--help")))
      {
        if(!(match_string(w_50, "-h")))
          {
            if(!(match_string(w_50, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_10 (ATerm t)
  {
    t = term_w_33;
    {
      t = set_config_0(t);
      t = term_x_33;
    }
    return(t);
  }
  ATerm o_10 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  t = Option_3(t, i_10, m_10, o_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(((ATgetType(z_50) == AT_LIST) && !(ATisEmpty(z_50))))
    {
      a_51 = ATgetFirst((ATermList) z_50);
      b_51 = (ATerm) ATgetNext((ATermList) z_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_52 (ATerm), ATerm r_52 (ATerm))
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  n_51 = t;
  m_51 :
  if(((ATgetType(n_51) == AT_LIST) && !(ATisEmpty(n_51))))
    {
      o_51 = ATgetFirst((ATermList) n_51);
      p_51 = (ATerm) ATgetNext((ATermList) n_51);
      {
        ATerm t_51 = NULL,v_51 = NULL;
        ATerm u_51 = NULL;
        t = SSLgetAnnotations(not_null(n_51));
        {
          u_51 = t;
          if(((t_51 != NULL) && (t_51 != u_51)))
            _fail(u_51);
          else
            t_51 = u_51;
        }
        {
          t = not_null(o_51);
          {
            ATerm x_51 = NULL;
            t = q_52(t);
            {
              v_51 = t;
              {
                t = not_null(p_51);
                {
                  ATerm z_51 = NULL;
                  t = r_52(t);
                  {
                    x_51 = t;
                    {
                      ATerm a_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_51)), not_null(v_51)), not_null(t_51));
                      {
                        a_52 = t;
                        if(((z_51 != NULL) && (z_51 != a_52)))
                          _fail(a_52);
                        else
                          z_51 = a_52;
                      }
                      t = not_null(z_51);
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
        ATerm z_33;
        z_33 = t;
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
        t = z_33;
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
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  w_52 :
  if(match_cons(x_52, sym__2))
    {
      y_52 = ATgetArgument(x_52, 0);
      z_52 = ATgetArgument(x_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_19, not_null(y_52), not_null(z_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm b_34;
  b_34 = t;
  {
    ATerm s_10 (ATerm t)
    {
      t = term_c_34;
      t = c_81(t);
      return(t);
    }
    t = try_1(t, s_10);
  }
  t = b_34;
  {
    ATerm u_10 (ATerm t)
    {
      ATerm h_53 = NULL;
      ATerm d_34;
      d_34 = t;
      {
        ATerm f_53 = NULL;
        ATerm g_53 = NULL;
        g_53 = t;
        if(((f_53 != NULL) && (f_53 != g_53)))
          _fail(g_53);
        else
          f_53 = g_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_29, not_null(f_53));
          t = set_config_0(t);
        }
      }
      t = d_34;
      {
        ATerm i_53 = NULL;
        i_53 = t;
        if(((h_53 != NULL) && (h_53 != i_53)))
          _fail(i_53);
        else
          h_53 = i_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_53));
      }
      return(t);
    }
    ATerm v_10 (ATerm t)
    {
      ATerm e_34 = t;
      int f_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(h_34);
            }
          else
            {
              t = g_34;
              {
                t = c_81(t);
                t = Cons_2(t, _id, v_10);
              }
            }
          ;
          LocalPopChoice(f_34);
        }
      else
        {
          t = e_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_10, v_10);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
  ATerm i_34;
  i_34 = t;
  {
    ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
    r_53 = t;
    n_53 :
    if(match_cons(r_53, sym__3))
      {
        s_53 = ATgetArgument(r_53, 0);
        t_53 = ATgetArgument(r_53, 1);
        u_53 = ATgetArgument(r_53, 2);
        {
          if(((o_53 != NULL) && (o_53 != s_53)))
            _fail(s_53);
          else
            o_53 = s_53;
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
              t = SSL_table_put(not_null(o_53), not_null(p_53), not_null(q_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm x_53 = NULL;
  ATerm j_34;
  j_34 = t;
  {
    t = term_k_34;
    t = table_put_0(t);
  }
  t = j_34;
  {
    ATerm w_10 (ATerm t)
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_81(t);
          ;
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_10);
    {
      ATerm x_10 (ATerm t)
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_34;
            t_34 = t;
            {
              ATerm u_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_33;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = u_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = t_34;
            {
              t = system_usage_0(t);
              {
                t = term_k_23;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm y_10 (ATerm t)
              {
                ATerm z_10 (ATerm t)
                {
                  ATerm y_53 = NULL;
                  y_53 = t;
                  if(((x_53 != NULL) && (x_53 != y_53)))
                    _fail(y_53);
                  else
                    x_53 = y_53;
                  return(t);
                }
                t = Undefined_1(t, z_10);
                return(t);
              }
              t = option_defined_1(t, y_10);
              {
                ATerm a_11 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_53)), term_w_34);
                  return(t);
                }
                t = say_1(t, a_11);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_11;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_10);
      {
        ATerm x_34;
        x_34 = t;
        {
          t = term_r_30;
          t = table_destroy_0(t);
        }
        t = x_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  t = parse_options_1(t, y_78);
  {
    t = store_options_0(t);
    {
      t = a_79(t);
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_78);
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            {
              ATerm a_35 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_79(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(b_35);
                }
              else
                {
                  t = a_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  t = option_wrap_4(t, c_79, default_usage_0, _id, d_79);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm t_77 (ATerm), ATerm u_77 (ATerm))
{
  ATerm b_11 (ATerm t)
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_77(t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = xtc_io_1(t, u_77);
    return(t);
  }
  t = option_wrap_2(t, b_11, c_11);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  t = xtc_io_wrap_2(t, z_77, a_78);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm g_35;
    g_35 = t;
    {
      ATerm b_54 = NULL;
      ATerm c_54 = NULL;
      t = term_h_35;
      {
        t = xtc_find_path_0(t);
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_54)), term_i_35));
        t = extend_config_0(t);
      }
    }
    t = g_35;
    t = parse_module_0(t);
    return(t);
  }
  t = xtc_iowrap_2(t, parse_stratego_options_0, d_11);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = parse_stratego_0(t);
  return(t);
}
