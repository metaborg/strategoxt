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
ATerm term_f_34;
ATerm term_e_34;
ATerm term_g_33;
ATerm term_m_32;
ATerm term_d_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_e_31;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_y_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_d_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_c_24;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_w_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_i_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_v_19;
ATerm term_f_19;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_z_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_o_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_l_12;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_n_10;
ATerm term_z_9;
ATerm term_u_9;
void init_constant_terms (void)
{
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Syntax_1, term_y_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_s_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_a_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_n_10);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_c_11);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_22);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_c_11);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_c_11);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_c_11);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__3, term_o_29, term_t_29, (ATerm) ATempty);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm p_55 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm q_70 (ATerm));
ATerm assert_1 (ATerm, ATerm l_71 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm s_70 (ATerm), ATerm t_70 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm y_72 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm o_69 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_55 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm r_70 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm n_54 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_55 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm i_61 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm w_72 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm r_49 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_55 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_55 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm y_55 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm union_1 (ATerm, ATerm u_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm h_56 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm i_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_71 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm g_70 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm h_70 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm l_67 (ATerm), ATerm m_67 (ATerm));
ATerm crush_2 (ATerm, ATerm j_66 (ATerm), ATerm k_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_76 (ATerm));
ATerm Program_1 (ATerm, ATerm e_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm t_47 (ATerm), ATerm u_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_71 (ATerm));
ATerm map_1 (ATerm, ATerm x_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_49 (ATerm), ATerm d_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm o_70 (ATerm), ATerm p_70 (ATerm));
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
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_2), not_null(u_2));
            LocalPopChoice(t_9);
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
  t = term_u_9;
  {
    ATerm v_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = v_9;
        t = term_z_9;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), term_z_9);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_3)), term_u_9);
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
ATerm xtc_transform_term_2 (ATerm t, ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, z_70, a_71);
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
ATerm fork_and_wait_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm z_4 = NULL;
  ATerm b_5 = NULL;
  z_4 = t;
  {
    t = fork_0(t);
    {
      b_5 = t;
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL;
            d_5 = t;
            v_4 :
            if(match_int(d_5, 0))
              {
                t = not_null(z_4);
                t = p_55(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
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
ATerm xtc_command_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm w_5 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm x_5 = NULL;
    t = q_70(t);
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
  t = i_10;
  {
    ATerm j_10;
    j_10 = t;
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
    t = j_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_71 (ATerm))
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
        ATerm k_10;
        k_10 = t;
        {
          ATerm p_6 = NULL;
          ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
          t = l_71(t);
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
                    ATerm l_10 = t;
                    int m_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), term_n_10);
                        t = table_get_0(t);
                        LocalPopChoice(m_10);
                      }
                    else
                      {
                        t = l_10;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_6), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(o_6)), (ATerm) ATinsert(CheckATermList(not_null(n_6)), not_null(i_6))));
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
        t = k_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm p_10;
  p_10 = t;
  {
    t = z_71(t);
    {
      ATerm e_0 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      t = debug_1(t, e_0);
    }
  }
  t = p_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  ATerm v_10 = t;
  int y_10 = stack_ptr;
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
      LocalPopChoice(y_10);
      t = SSL_open_file(not_null(b_7), not_null(a_7));
    }
  else
    {
      t = v_10;
      {
        ATerm f_7 = NULL;
        ATerm g_7 = NULL;
        ATerm f_0 (ATerm t)
        {
          t = term_z_10;
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
              ATerm a_11;
              a_11 = t;
              {
                ATerm h_7 = NULL;
                t = term_b_11;
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
              }
              t = a_11;
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
  t = term_c_11;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_7), term_d_11);
    {
      t = conc_strings_0(t);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
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
      ATerm o_11;
      o_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_b_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_c_11);
            {
              ATerm q_0 (ATerm t)
              {
                t = term_p_11;
                return(t);
              }
              t = assert_1(t, q_0);
            }
          }
        }
      }
      t = o_11;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_8)), term_q_11));
              {
                ATerm r_11 = t;
                int s_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(s_11);
                  }
                else
                  {
                    t = r_11;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_8)), term_q_11), not_null(c_8)), term_t_11));
                      {
                        ATerm y_11 = t;
                        int z_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(z_11);
                          }
                        else
                          {
                            t = y_11;
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
      ATerm c_12;
      c_12 = t;
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
      t = c_12;
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
ATerm xtc_transform_2 (ATerm t, ATerm s_70 (ATerm), ATerm t_70 (ATerm))
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_12 = t;
      int k_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(k_12);
        }
      else
        {
          t = f_12;
          t = stdin_0(t);
        }
      LocalPopChoice(e_12);
      t = xtc_transform_file_2(t, s_70, t_70);
    }
  else
    {
      t = d_12;
      t = xtc_transform_term_2(t, s_70, t_70);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_9)), term_l_12), not_null(i_9));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm))
{
  ATerm p_9 = NULL,r_9 = NULL;
  ATerm m_12;
  m_12 = t;
  {
    ATerm q_9 = NULL;
    t = a_60(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
  }
  t = m_12;
  {
    ATerm s_9 = NULL;
    t = b_60(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm y_72 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm r_0 (ATerm t)
    {
      t = term_c_11;
      t = y_72(t);
      return(t);
    }
    t = split_2(t, _id, r_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm if_keep1_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_12;
      q_12 = t;
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = term_s_12;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_z_9);
          t = geq_0(t);
        }
      }
      t = q_12;
      t = o_69(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12;
      x_12 = t;
      {
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
        t = term_u_9;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_y_12);
          t = geq_0(t);
        }
      }
      t = x_12;
      t = v_55(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
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
  ATerm r_10 = NULL,s_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_FILE_1))
    {
      s_10 = ATgetArgument(r_10, 0);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL;
            t = n_0(t);
            {
              u_10 = t;
              o_10 :
              if(match_cons(u_10, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_f_13);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(s_10);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_f_13;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm w_10 = NULL;
              ATerm x_10 = NULL;
              t = n_0(t);
              {
                x_10 = t;
                {
                  if(((w_10 != NULL) && (w_10 != x_10)))
                    _fail(x_10);
                  else
                    w_10 = x_10;
                  {
                    ATerm g_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = g_13;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(w_10));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_10));
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
ATerm xtc_transform_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, r_70, s_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_h_13;
      return(t);
    }
    t = debug_1(t, u_0);
    return(t);
  }
  t = if_verbose6_1(t, t_0);
  {
    ATerm i_13;
    i_13 = t;
    {
      ATerm h_11 = NULL;
      ATerm v_0 (ATerm t)
      {
        t = term_j_13;
        return(t);
      }
      t = guarantee_extension_1(t, v_0);
      {
        h_11 = t;
        if(((g_11 != NULL) && (g_11 != h_11)))
          _fail(h_11);
        else
          g_11 = h_11;
      }
    }
    t = i_13;
    {
      ATerm p_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_11 = NULL;
          t = not_null(g_11);
          {
            ATerm w_0 (ATerm t)
            {
              t = term_t_13;
              return(t);
            }
            t = find_in_includes_1(t, w_0);
            {
              ATerm j_11 = NULL;
              j_11 = t;
              if(((i_11 != NULL) && (i_11 != j_11)))
                _fail(j_11);
              else
                i_11 = j_11;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_11));
            }
          }
          LocalPopChoice(s_13);
        }
      else
        {
          t = p_13;
          {
            ATerm k_11 = NULL;
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = term_u_13;
                return(t);
              }
              t = say_1(t, y_0);
              return(t);
            }
            t = if_verbose2_1(t, x_0);
            {
              ATerm l_11 = NULL;
              ATerm z_0 (ATerm t)
              {
                t = term_v_13;
                return(t);
              }
              t = guarantee_extension_1(t, z_0);
              {
                l_11 = t;
                if(((k_11 != NULL) && (k_11 != l_11)))
                  _fail(l_11);
                else
                  k_11 = l_11;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_11));
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_w_13;
                    return(t);
                  }
                  ATerm b_1 (ATerm t)
                  {
                    t = term_x_13;
                    {
                      t = get_config_0(t);
                      {
                        ATerm c_1 (ATerm t)
                        {
                          ATerm m_11 = NULL;
                          ATerm n_11 = NULL;
                          n_11 = t;
                          if(((m_11 != NULL) && (m_11 != n_11)))
                            _fail(n_11);
                          else
                            m_11 = n_11;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_11)), term_x_13);
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
                      t = term_y_13;
                      return(t);
                    }
                    t = xtc_transform_1(t, d_1);
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = not_null(g_11);
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
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      {
        t = not_null(x_11);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm a_12 = NULL;
            ATerm b_12 = NULL;
            b_12 = t;
            if(((a_12 != NULL) && (a_12 != b_12)))
              _fail(b_12);
            else
              a_12 = b_12;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_11)), term_c_14), not_null(a_12));
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
ATerm find_in_includes_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm g_12 = NULL,i_12 = NULL;
  ATerm e_14;
  e_14 = t;
  {
    ATerm h_12 = NULL;
    h_12 = t;
    if(((g_12 != NULL) && (g_12 != h_12)))
      _fail(h_12);
    else
      g_12 = h_12;
  }
  t = e_14;
  {
    ATerm j_12 = NULL;
    t = term_x_13;
    {
      t = get_config_0(t);
      {
        j_12 = t;
        if(((i_12 != NULL) && (i_12 != j_12)))
          _fail(j_12);
        else
          i_12 = j_12;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_12), not_null(i_12));
      {
        t = find_in_path_0(t);
        {
          ATerm g_1 (ATerm t)
          {
            t = debug_1(t, n_54);
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
  ATerm p_12 = NULL;
  ATerm r_12 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = term_i_14;
      return(t);
    }
    t = debug_1(t, i_1);
    return(t);
  }
  t = if_verbose6_1(t, h_1);
  {
    p_12 = t;
    {
      ATerm j_1 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = guarantee_extension_1(t, j_1);
      {
        r_12 = t;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_12 = NULL;
              ATerm k_1 (ATerm t)
              {
                t = term_m_14;
                return(t);
              }
              t = find_in_includes_1(t, k_1);
              {
                ATerm u_12 = NULL;
                u_12 = t;
                if(((t_12 != NULL) && (t_12 != u_12)))
                  _fail(u_12);
                else
                  t_12 = u_12;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_12));
              }
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = term_n_14;
                    return(t);
                  }
                  t = say_1(t, n_1);
                  return(t);
                }
                t = if_verbose2_1(t, m_1);
                {
                  t = not_null(p_12);
                  {
                    t = get_syntax_definition_0(t);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        t = term_q_14;
                        return(t);
                      }
                      ATerm p_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_12)), term_u_14);
                        return(t);
                      }
                      t = xtc_transform_2(t, o_1, p_1);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = not_null(r_12);
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
                t = term_m_14;
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
ATerm if_verbose2_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm x_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15;
      d_15 = t;
      {
        ATerm z_12 = NULL;
        ATerm a_13 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            a_13 = t;
            if(((z_12 != NULL) && (z_12 != a_13)))
              _fail(a_13);
            else
              z_12 = a_13;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), term_e_15);
          t = geq_0(t);
        }
      }
      t = d_15;
      t = u_55(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = x_14;
      {
      }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm d_13 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm e_13 = NULL;
    t = i_61(t);
    {
      e_13 = t;
      if(((d_13 != NULL) && (d_13 != e_13)))
        _fail(e_13);
      else
        d_13 = e_13;
    }
    return(t);
  }
  t = fetch_1(t, t_1);
  t = not_null(d_13);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_stdin_0))
    {
      ATerm n_13 = NULL;
      ATerm o_13 = NULL;
      t = term_f_15;
      {
        t = ReadFromFile_0(t);
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
      }
      t = not_null(n_13);
    }
  else
    {
      if(match_cons(l_13, sym_FILE_1))
        {
          m_13 = ATgetArgument(l_13, 0);
          {
            ATerm q_13 = NULL;
            ATerm r_13 = NULL;
            t = not_null(m_13);
            {
              t = ReadFromFile_0(t);
              {
                r_13 = t;
                if(((q_13 != NULL) && (q_13 != r_13)))
                  _fail(r_13);
                else
                  q_13 = r_13;
              }
            }
            t = not_null(q_13);
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
  ATerm a_14 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_g_15;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose6_1(t, u_1);
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_o_15;
            return(t);
          }
          t = guarantee_extension_1(t, x_1);
          return(t);
        }
        t = FILE_1(t, w_1);
        t = read_from_0(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        {
          ATerm p_15 = t;
          int t_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_14 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm a_2 (ATerm t)
                {
                  t = term_u_15;
                  return(t);
                }
                t = guarantee_extension_1(t, a_2);
                return(t);
              }
              t = FILE_1(t, y_1);
              {
                t = read_from_0(t);
                {
                  b_14 = t;
                  {
                    ATerm d_14 = NULL;
                    ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
                    t = not_null(b_14);
                    {
                      d_14 = t;
                      {
                        t = SSL_explode_term(not_null(d_14));
                        {
                          f_14 = t;
                          z_13 :
                          if(match_cons(f_14, sym__2))
                            {
                              g_14 = ATgetArgument(f_14, 0);
                              h_14 = ATgetArgument(f_14, 1);
                              if(((a_14 != NULL) && (a_14 != g_14)))
                                _fail(g_14);
                              else
                                a_14 = g_14;
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(a_14))));
                  }
                }
              }
              LocalPopChoice(t_15);
            }
          else
            {
              t = p_15;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_b_16));
            }
        }
      }
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_g_15;
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
  ATerm s_14 = NULL,t_14 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_c_16;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose6_1(t, e_2);
  {
    s_14 = t;
    r_14 :
    if(match_cons(s_14, sym_FILE_1))
      {
        t_14 = ATgetArgument(s_14, 0);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_f_16;
              t = get_config_0(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                t = get_meta_0(t);
                {
                  ATerm g_16 = t;
                  int i_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_14 = NULL,w_14 = NULL;
                      v_14 = t;
                      p_14 :
                      if(match_cons(v_14, sym_Meta_1))
                        {
                          w_14 = ATgetArgument(v_14, 0);
                          {
                            t = not_null(w_14);
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm y_14 = NULL,z_14 = NULL;
                                y_14 = t;
                                o_14 :
                                if(match_cons(y_14, sym_Syntax_1))
                                  {
                                    z_14 = ATgetArgument(y_14, 0);
                                    t = not_null(z_14);
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
                      LocalPopChoice(i_16);
                    }
                  else
                    {
                      t = g_16;
                      {
                        ATerm b_15 = NULL;
                        ATerm c_15 = NULL;
                        c_15 = t;
                        if(((b_15 != NULL) && (b_15 != c_15)))
                          _fail(c_15);
                        else
                          b_15 = c_15;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(t_14)), term_q_16), not_null(b_15)), term_p_16);
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
                t = term_s_16;
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
ATerm basename_1 (ATerm t, ATerm w_72 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 (ATerm t)
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, l_15);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              {
                ATerm y_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm j_15 = NULL;
                      j_15 = t;
                      h_15 :
                      if(!(match_int(j_15, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, j_2, _id);
                    LocalPopChoice(z_16);
                  }
                else
                  {
                    t = y_16;
                    {
                      ATerm k_2 (ATerm t)
                      {
                        ATerm k_15 = NULL;
                        k_15 = t;
                        i_15 :
                        if(!(match_int(k_15, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, k_2, w_72);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = l_15(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
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
ATerm FILE_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_FILE_1))
    {
      s_15 = ATgetArgument(r_15, 0);
      {
        ATerm v_15 = NULL,x_15 = NULL;
        ATerm w_15 = NULL;
        t = SSLgetAnnotations(not_null(r_15));
        {
          w_15 = t;
          if(((v_15 != NULL) && (v_15 != w_15)))
            _fail(w_15);
          else
            v_15 = w_15;
        }
        {
          t = not_null(s_15);
          {
            ATerm z_15 = NULL;
            t = r_49(t);
            {
              x_15 = t;
              {
                ATerm a_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(x_15)), not_null(v_15));
                {
                  a_16 = t;
                  if(((z_15 != NULL) && (z_15 != a_16)))
                    _fail(a_16);
                  else
                    z_15 = a_16;
                }
                t = not_null(z_15);
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
  ATerm j_16 = NULL,k_16 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      t = term_a_17;
      return(t);
    }
    t = debug_1(t, m_2);
    return(t);
  }
  t = if_verbose6_1(t, l_2);
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm m_16 = NULL,n_16 = NULL;
      ATerm n_2 (ATerm t)
      {
        ATerm l_16 = NULL;
        t = basename_1(t, _id);
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
        return(t);
      }
      t = FILE_1(t, n_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            m_16 = t;
            h_16 :
            if(match_cons(m_16, sym_FILE_1))
              {
                n_16 = ATgetArgument(m_16, 0);
                if(((j_16 != NULL) && (j_16 != n_16)))
                  _fail(n_16);
                else
                  j_16 = n_16;
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = b_17;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_c_17;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm o_16 = NULL;
        ATerm x_16 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm q_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_d_17);
            return(t);
          }
          t = if_verbose3_1(t, q_2);
          {
            x_16 = t;
            if(((o_16 != NULL) && (o_16 != x_16)))
              _fail(x_16);
            else
              o_16 = x_16;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_16)), not_null(j_16)), term_j_17), term_i_17);
        return(t);
      }
      t = xtc_transform_2(t, o_2, p_2);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_o_17;
          return(t);
        }
        t = xtc_transform_2(t, r_2, pass_verbose_0);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(k_16);
              {
                ATerm v_2 (ATerm t)
                {
                  t = term_p_17;
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
              t = term_q_17;
              return(t);
            }
            t = xtc_transform_2(t, w_2, pass_verbose_0);
            {
              ATerm x_2 (ATerm t)
              {
                t = term_r_17;
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
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym__2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      {
        ATerm k_17 = NULL;
        ATerm l_17 = NULL,n_17 = NULL;
        ATerm m_17 = NULL;
        t = not_null(g_17);
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = (ATerm) ATempty;
            }
          {
            m_17 = t;
            if(((l_17 != NULL) && (l_17 != m_17)))
              _fail(m_17);
            else
              l_17 = m_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), not_null(l_17));
          {
            ATerm x_17 = t;
            int y_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(y_17);
              }
            else
              {
                t = x_17;
                t = conc_more_lists_0(t);
              }
            {
              n_17 = t;
              if(((k_17 != NULL) && (k_17 != n_17)))
                _fail(n_17);
              else
                k_17 = n_17;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_17, not_null(g_17), not_null(k_17));
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
    ATerm a_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_17 (ATerm t)
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, u_17);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
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
        LocalPopChoice(c_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  t = SSL_table_keys(not_null(b_18));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  {
    t = table_keys_0(t);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm l_18 = NULL;
        ATerm n_18 = NULL;
        l_18 = t;
        {
          ATerm o_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(l_18));
          {
            t = table_get_0(t);
            {
              o_18 = t;
              if(((n_18 != NULL) && (n_18 != o_18)))
                _fail(o_18);
              else
                n_18 = o_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(n_18));
        }
        return(t);
      }
      t = map_1(t, a_3);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18;
      h_18 = t;
      {
        ATerm y_18 = NULL;
        ATerm z_18 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            z_18 = t;
            if(((y_18 != NULL) && (y_18 != z_18)))
              _fail(z_18);
            else
              y_18 = z_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), term_i_18);
          t = geq_0(t);
        }
      }
      t = h_18;
      t = x_55(t);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_18;
  k_18 = t;
  {
    ATerm c_19 = NULL;
    ATerm d_19 = NULL;
    d_19 = t;
    if(((c_19 != NULL) && (c_19 != d_19)))
      _fail(d_19);
    else
      c_19 = d_19;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_18, not_null(c_19));
      t = printnl_0(t);
    }
  }
  t = k_18;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm j_19 = NULL;
  ATerm q_19 = NULL,r_19 = NULL;
  j_19 = t;
  {
    ATerm s_19 = NULL,t_19 = NULL,y_19 = NULL,z_19 = NULL,h_20 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_19)));
    {
      t = table_get_0(t);
      {
        s_19 = t;
        h_19 :
        if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
          {
            t_19 = ATgetFirst((ATermList) s_19);
            h_20 = (ATerm) ATgetNext((ATermList) s_19);
            i_19 :
            if(match_cons(t_19, sym__2))
              {
                y_19 = ATgetArgument(t_19, 0);
                z_19 = ATgetArgument(t_19, 1);
                {
                  if(((q_19 != NULL) && (q_19 != y_19)))
                    _fail(y_19);
                  else
                    q_19 = y_19;
                  if(((r_19 != NULL) && (r_19 != z_19)))
                    _fail(z_19);
                  else
                    r_19 = z_19;
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
    t = not_null(r_19);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        ATerm v_20 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(r_20)));
        {
          t = table_get_0(t);
          {
            ATerm b_3 (ATerm t)
            {
              ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
              w_20 = t;
              o_20 :
              if(match_cons(w_20, sym__2))
                {
                  x_20 = ATgetArgument(w_20, 0);
                  y_20 = ATgetArgument(w_20, 1);
                  {
                    if(((s_20 != NULL) && (s_20 != x_20)))
                      _fail(x_20);
                    else
                      s_20 = x_20;
                    if(((v_20 != NULL) && (v_20 != y_20)))
                      _fail(y_20);
                    else
                      v_20 = y_20;
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
        t = not_null(v_20);
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
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_18;
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
ATerm if_verbose4_1 (ATerm t, ATerm w_55 (ATerm))
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18;
      w_18 = t;
      {
        ATerm c_21 = NULL;
        ATerm d_21 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            d_21 = t;
            if(((c_21 != NULL) && (c_21 != d_21)))
              _fail(d_21);
            else
              c_21 = d_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), term_x_18);
          t = geq_0(t);
        }
      }
      t = w_18;
      t = w_55(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_19;
      e_19 = t;
      {
        ATerm g_21 = NULL;
        ATerm h_21 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            h_21 = t;
            if(((g_21 != NULL) && (g_21 != h_21)))
              _fail(h_21);
            else
              g_21 = h_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), term_f_19);
          t = geq_0(t);
        }
      }
      t = e_19;
      t = y_55(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym__2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      if(((m_21 != NULL) && (m_21 != n_21)))
        _fail(n_21);
      else
        m_21 = n_21;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  s_21 :
  if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
    {
      z_21 = ATgetFirst((ATermList) y_21);
      a_22 = (ATerm) ATgetNext((ATermList) y_21);
      {
        t = z_66(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm d_22 = NULL;
            d_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_21), not_null(d_22));
              t = y_66(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(a_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,p_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym__2))
    {
      l_22 = ATgetArgument(k_22, 0);
      p_22 = ATgetArgument(k_22, 1);
      {
        t = not_null(l_22);
        {
          ATerm u_22 (ATerm t)
          {
            ATerm g_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_22);
                LocalPopChoice(k_19);
              }
            else
              {
                t = g_19;
                {
                  ATerm l_19 = t;
                  int m_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(p_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_66, g_3);
                      t = u_22(t);
                      LocalPopChoice(m_19);
                    }
                  else
                    {
                      t = l_19;
                      t = Cons_2(t, _id, u_22);
                    }
                }
              }
            return(t);
          }
          t = u_22(t);
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
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym__3))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      c_23 = ATgetArgument(z_22, 2);
      {
        ATerm n_19;
        n_19 = t;
        {
          ATerm g_23 = NULL;
          ATerm h_23 = NULL,j_23 = NULL;
          ATerm i_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), not_null(b_23));
          {
            ATerm o_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_19);
              }
            else
              {
                t = o_19;
                t = (ATerm) ATempty;
              }
            {
              i_23 = t;
              if(((h_23 != NULL) && (h_23 != i_23)))
                _fail(i_23);
              else
                h_23 = i_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(c_23));
            {
              t = union_1(t, eq_0);
              {
                j_23 = t;
                if(((g_23 != NULL) && (g_23 != j_23)))
                  _fail(j_23);
                else
                  g_23 = j_23;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_23), not_null(b_23), not_null(g_23));
            t = table_put_0(t);
          }
        }
        t = n_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      {
        t = not_null(t_23);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
            w_23 = t;
            p_23 :
            if(match_cons(w_23, sym__2))
              {
                x_23 = ATgetArgument(w_23, 0);
                y_23 = ATgetArgument(w_23, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_23), not_null(x_23), not_null(y_23));
                  t = h_56(t);
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
  ATerm e_24 = NULL;
  e_24 = t;
  t = SSL_ReadFromFile(not_null(e_24));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm j_24 = NULL;
  ATerm l_24 = NULL;
  j_24 = t;
  {
    ATerm u_19;
    u_19 = t;
    {
      ATerm m_24 = NULL;
      t = term_v_19;
      {
        m_24 = t;
        if(((l_24 != NULL) && (l_24 != m_24)))
          _fail(m_24);
        else
          l_24 = m_24;
      }
    }
    t = u_19;
    {
      t = SSL_open_file(not_null(j_24), not_null(l_24));
      t = SSL_close_file(not_null(j_24));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm r_24 = NULL;
  ATerm t_24 = NULL;
  r_24 = t;
  {
    ATerm w_19 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATmakeAppl(sym_Imported_1, not_null(r_24)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_19;
      }
    {
      ATerm x_19;
      x_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_18, term_a_20, (ATerm) ATinsert(ATempty, not_null(r_24)));
        t = table_put_0(t);
      }
      t = x_19;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            t = term_b_20;
            return(t);
          }
          t = debug_1(t, l_3);
          return(t);
        }
        t = if_verbose4_1(t, k_3);
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              t = (ATerm) ATempty;
            }
          {
            ATerm m_3 (ATerm t)
            {
              ATerm r_3 (ATerm t)
              {
                t = term_e_20;
                return(t);
              }
              t = say_1(t, r_3);
              return(t);
            }
            t = if_verbose6_1(t, m_3);
            {
              ATerm u_24 = NULL;
              u_24 = t;
              if(((t_24 != NULL) && (t_24 != u_24)))
                _fail(u_24);
              else
                t_24 = u_24;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_p_18, not_null(t_24));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = term_f_20;
                        return(t);
                      }
                      t = say_1(t, t_3);
                      return(t);
                    }
                    t = if_verbose6_1(t, s_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_p_18, (ATerm)ATmakeAppl(sym_Imported_1, not_null(r_24)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm u_3 (ATerm t)
                          {
                            ATerm v_3 (ATerm t)
                            {
                              t = term_e_20;
                              return(t);
                            }
                            t = say_1(t, v_3);
                            return(t);
                          }
                          t = if_verbose4_1(t, u_3);
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
  ATerm y_24 = NULL;
  y_24 = t;
  t = SSL_getenv(not_null(y_24));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_20;
      t = get_config_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = g_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_20;
            t = getenv_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      t = term_n_20;
      return(t);
    }
    t = debug_1(t, a_4);
    return(t);
  }
  t = if_verbose5_1(t, x_3);
  {
    ATerm t_20;
    t_20 = t;
    {
      ATerm u_20 = t;
      int z_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_21;
          t = table_get_0(t);
          LocalPopChoice(z_20);
        }
      else
        {
          t = u_20;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = t_20;
    {
      ATerm b_4 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          t = term_b_21;
          return(t);
        }
        t = debug_1(t, c_4);
        return(t);
      }
      t = if_verbose5_1(t, b_4);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 (ATerm t)
      {
        ATerm f_4 (ATerm t)
        {
          t = term_i_21;
          return(t);
        }
        t = debug_1(t, f_4);
        return(t);
      }
      t = if_verbose5_1(t, e_4);
      {
        t = xtc_load_0(t);
        {
          ATerm j_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(o_21);
            }
          else
            {
              t = j_21;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm g_4 (ATerm t)
            {
              ATerm l_4 (ATerm t)
              {
                t = term_i_21;
                return(t);
              }
              t = debug_1(t, l_4);
              return(t);
            }
            t = if_verbose5_1(t, g_4);
          }
        }
      }
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm c_25 = NULL;
        ATerm d_25 = NULL;
        d_25 = t;
        if(((c_25 != NULL) && (c_25 != d_25)))
          _fail(d_25);
        else
          c_25 = d_25;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_21), not_null(c_25)), term_p_21);
          {
            t = error_0(t);
            {
              ATerm m_4 (ATerm t)
              {
                t = term_p_18;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_4 (ATerm t)
                    {
                      t = term_r_21;
                      return(t);
                    }
                    t = debug_1(t, n_4);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, m_4);
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
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 (ATerm t)
      {
        ATerm k_25 = NULL;
        k_25 = t;
        f_25 :
        if(!(match_string(k_25, "-I")))
          {
            if(!(match_string(k_25, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        ATerm v_21;
        v_21 = t;
        {
          ATerm l_25 = NULL;
          ATerm m_25 = NULL;
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATempty, not_null(l_25)));
            t = extend_config_0(t);
          }
        }
        t = v_21;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_w_21;
        return(t);
      }
      t = ArgOption_3(t, o_4, q_4, r_4);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm x_21 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm n_25 = NULL;
              n_25 = t;
              h_25 :
              if(!(match_string(n_25, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              ATerm c_22;
              c_22 = t;
              {
                ATerm o_25 = NULL;
                ATerm p_25 = NULL;
                p_25 = t;
                if(((o_25 != NULL) && (o_25 != p_25)))
                  _fail(p_25);
                else
                  o_25 = p_25;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(o_25));
                  t = set_config_0(t);
                }
              }
              t = c_22;
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              t = term_e_22;
              return(t);
            }
            t = ArgOption_3(t, s_4, t_4, u_4);
            LocalPopChoice(b_22);
          }
        else
          {
            t = x_21;
            {
              ATerm w_4 (ATerm t)
              {
                ATerm q_25 = NULL;
                q_25 = t;
                j_25 :
                if(!(match_string(q_25, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_5 (ATerm t)
              {
                ATerm f_22;
                f_22 = t;
                {
                  t = term_h_22;
                  t = set_config_0(t);
                }
                t = f_22;
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = term_i_22;
                return(t);
              }
              t = Option_3(t, w_4, a_5, c_5);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      t = SSL_copy(not_null(w_25), not_null(x_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym_stderr_0))
    {
      ATerm h_26 = NULL,j_26 = NULL;
      ATerm m_22;
      m_22 = t;
      {
        ATerm i_26 = NULL;
        t = SSLgetAnnotations(not_null(f_26));
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
      }
      t = m_22;
      {
        ATerm k_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(h_26));
        {
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
        }
        t = not_null(j_26);
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
  ATerm s_26 = NULL;
  s_26 = t;
  r_26 :
  if(match_cons(s_26, sym_stdout_0))
    {
      ATerm u_26 = NULL,w_26 = NULL;
      ATerm n_22;
      n_22 = t;
      {
        ATerm v_26 = NULL;
        t = SSLgetAnnotations(not_null(s_26));
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
      }
      t = n_22;
      {
        ATerm x_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(u_26));
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
        t = not_null(w_26);
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
  ATerm h_27 = NULL,k_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_FILE_1))
    {
      k_27 = ATgetArgument(h_27, 0);
      {
        ATerm o_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_27 = NULL;
            ATerm q_27 = NULL;
            t = m_0(t);
            {
              q_27 = t;
              {
                if(((p_27 != NULL) && (p_27 != q_27)))
                  _fail(q_27);
                else
                  p_27 = q_27;
                {
                  ATerm r_22 = t;
                  int s_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(s_22);
                    }
                  else
                    {
                      t = r_22;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(p_27));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_27));
            LocalPopChoice(q_22);
          }
        else
          {
            t = o_22;
            {
              ATerm s_27 = NULL;
              ATerm t_27 = NULL;
              t = m_0(t);
              {
                t_27 = t;
                {
                  if(((s_27 != NULL) && (s_27 != t_27)))
                    _fail(t_27);
                  else
                    s_27 = t_27;
                  {
                    ATerm t_22 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm v_22 = t;
                        int w_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(w_22);
                          }
                        else
                          {
                            t = v_22;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = t_22;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(s_27));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_27));
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
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
    {
      b_28 = ATgetFirst((ATermList) a_28);
      c_28 = (ATerm) ATgetNext((ATermList) a_28);
      t = not_null(c_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  j_28 :
  if(match_cons(k_28, sym__2))
    {
      l_28 = ATgetArgument(k_28, 0);
      m_28 = ATgetArgument(k_28, 1);
      {
        ATerm x_22;
        x_22 = t;
        {
          ATerm p_28 = NULL;
          ATerm q_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_28), not_null(m_28));
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
                t = (ATerm) ATempty;
              }
            {
              q_28 = t;
              if(((p_28 != NULL) && (p_28 != q_28)))
                _fail(q_28);
              else
                p_28 = q_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_28), not_null(m_28), not_null(p_28));
            t = table_put_0(t);
          }
        }
        t = x_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  ATerm f_23;
  f_23 = t;
  {
    ATerm a_29 = NULL;
    ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
    t = i_71(t);
    {
      a_29 = t;
      {
        if(((z_28 != NULL) && (z_28 != a_29)))
          _fail(a_29);
        else
          z_28 = a_29;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), term_n_10);
              t = table_get_0(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            b_29 = t;
            w_28 :
            if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
              {
                c_29 = ATgetFirst((ATermList) b_29);
                d_29 = (ATerm) ATgetNext((ATermList) b_29);
                {
                  if(((y_28 != NULL) && (y_28 != c_29)))
                    _fail(c_29);
                  else
                    y_28 = c_29;
                  {
                    if(((x_28 != NULL) && (x_28 != d_29)))
                      _fail(d_29);
                    else
                      x_28 = d_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_28), term_n_10, not_null(x_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(y_28);
                          {
                            ATerm i_5 (ATerm t)
                            {
                              ATerm e_29 = NULL;
                              e_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), not_null(e_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_5);
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
  t = f_23;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = SSL_remove(not_null(k_29));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm))
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_59(t);
      t = x_59(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        t = x_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm p_29 = NULL;
  ATerm o_23;
  o_23 = t;
  {
    ATerm q_29 = NULL;
    ATerm r_29 = NULL;
    t = h_71(t);
    {
      q_29 = t;
      {
        if(((p_29 != NULL) && (p_29 != q_29)))
          _fail(q_29);
        else
          p_29 = q_29;
        {
          ATerm s_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_29), term_n_10);
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                t = (ATerm) ATempty;
              }
            {
              s_29 = t;
              if(((r_29 != NULL) && (r_29 != s_29)))
                _fail(s_29);
              else
                r_29 = s_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_29), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(r_29)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_23;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm b_30 = NULL,h_30 = NULL;
  ATerm j_5 (ATerm t)
  {
    t = term_p_11;
    return(t);
  }
  t = begin_scope_1(t, j_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm z_23;
      z_23 = t;
      {
        ATerm i_30 = NULL,n_30 = NULL,o_30 = NULL;
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_24;
            t = table_get_0(t);
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          i_30 = t;
          a_30 :
          if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
            {
              n_30 = ATgetFirst((ATermList) i_30);
              o_30 = (ATerm) ATgetNext((ATermList) i_30);
              {
                if(((h_30 != NULL) && (h_30 != n_30)))
                  _fail(n_30);
                else
                  h_30 = n_30;
                {
                  if(((b_30 != NULL) && (b_30 != o_30)))
                    _fail(o_30);
                  else
                    b_30 = o_30;
                  {
                    t = not_null(h_30);
                    {
                      ATerm l_5 (ATerm t)
                      {
                        ATerm d_24 = t;
                        int f_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(f_24);
                          }
                        else
                          {
                            t = d_24;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, l_5);
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
      t = z_23;
      {
        ATerm m_5 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = end_scope_1(t, m_5);
      }
      return(t);
    }
    t = restore_always_2(t, g_70, k_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL;
        ATerm u_30 = NULL;
        t = term_t_11;
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_30));
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = term_f_15;
      }
    {
      t = h_70(t);
      {
        ATerm s_5 (ATerm t)
        {
          ATerm i_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_q_11;
              t = get_config_0(t);
              LocalPopChoice(k_24);
            }
          else
            {
              t = i_24;
              t = term_f_13;
            }
          return(t);
        }
        t = copy_to_1(t, s_5);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, r_5);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm j_31 = NULL;
    j_31 = t;
    i_31 :
    if(!(match_string(j_31, "-v")))
      {
        if(!(match_string(j_31, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_n_24;
    t = set_config_0(t);
    t = term_o_24;
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_p_24;
    return(t);
  }
  t = Option_3(t, t_5, u_5, v_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm q_31 = NULL;
    q_31 = t;
    l_31 :
    if(!(match_string(q_31, "-k")))
      {
        if(!(match_string(q_31, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm q_24;
    q_24 = t;
    {
      ATerm r_31 = NULL;
      ATerm v_31 = NULL;
      t = string_to_int_0(t);
      {
        v_31 = t;
        if(((r_31 != NULL) && (r_31 != v_31)))
          _fail(v_31);
        else
          r_31 = v_31;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(r_31));
        t = set_config_0(t);
      }
    }
    t = q_24;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  t = ArgOption_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  t = SSL_string_to_int(not_null(i_32));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 (ATerm t)
      {
        ATerm w_32 = NULL;
        w_32 = t;
        p_32 :
        if(!(match_string(w_32, "-S")))
          {
            if(!(match_string(w_32, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = term_h_22;
        t = set_config_0(t);
        t = term_x_24;
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_z_24;
        return(t);
      }
      t = Option_3(t, d_6, e_6, k_6);
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              ATerm x_32 = NULL;
              x_32 = t;
              q_32 :
              if(!(match_string(x_32, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm d_33 = NULL;
              ATerm e_25;
              e_25 = t;
              {
                ATerm b_33 = NULL;
                ATerm c_33 = NULL;
                t = string_to_int_0(t);
                {
                  c_33 = t;
                  if(((b_33 != NULL) && (b_33 != c_33)))
                    _fail(c_33);
                  else
                    b_33 = c_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(b_33));
                  t = set_config_0(t);
                }
              }
              t = e_25;
              {
                ATerm e_33 = NULL;
                e_33 = t;
                if(((d_33 != NULL) && (d_33 != e_33)))
                  _fail(e_33);
                else
                  d_33 = e_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_33));
              }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_g_25;
              return(t);
            }
            t = ArgOption_3(t, l_6, t_6, u_6);
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm v_6 (ATerm t)
              {
                ATerm f_33 = NULL;
                f_33 = t;
                v_32 :
                if(!(match_string(f_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_6 (ATerm t)
              {
                t = term_r_25;
                t = set_config_0(t);
                t = term_s_25;
                return(t);
              }
              ATerm y_6 (ATerm t)
              {
                t = term_t_25;
                return(t);
              }
              t = Option_3(t, v_6, w_6, y_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm l_33 = NULL;
    l_33 = t;
    i_33 :
    if(!(match_string(l_33, "-o")))
      {
        if(!(match_string(l_33, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    ATerm o_33 = NULL;
    ATerm c_26;
    c_26 = t;
    {
      ATerm m_33 = NULL;
      ATerm n_33 = NULL;
      n_33 = t;
      if(((m_33 != NULL) && (m_33 != n_33)))
        _fail(n_33);
      else
        m_33 = n_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(m_33));
        t = set_config_0(t);
      }
    }
    t = c_26;
    {
      ATerm p_33 = NULL;
      p_33 = t;
      if(((o_33 != NULL) && (o_33 != p_33)))
        _fail(p_33);
      else
        o_33 = p_33;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_33));
    }
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    t = term_d_26;
    return(t);
  }
  t = ArgOption_3(t, z_6, i_7, j_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = g_26;
      {
        ATerm k_7 (ATerm t)
        {
          ATerm t_33 = NULL;
          t_33 = t;
          s_33 :
          if(!(match_string(t_33, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          t = term_n_26;
          t = set_config_0(t);
          t = term_o_26;
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = term_p_26;
          return(t);
        }
        t = Option_3(t, k_7, l_7, p_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  z_33 = t;
  x_33 :
  if(match_string(z_33, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
        {
          a_34 = ATgetFirst((ATermList) z_33);
          b_34 = (ATerm) ATgetNext((ATermList) z_33);
          y_33 :
          if(((ATgetType(b_34) == AT_LIST) && !(ATisEmpty(b_34))))
            {
              c_34 = ATgetFirst((ATermList) b_34);
              d_34 = (ATerm) ATgetNext((ATermList) b_34);
              {
                ATerm h_34 = NULL;
                ATerm q_26;
                q_26 = t;
                {
                  t = not_null(a_34);
                  t = j_0(t);
                }
                t = q_26;
                {
                  ATerm i_34 = NULL;
                  t = not_null(c_34);
                  {
                    t = k_0(t);
                    {
                      i_34 = t;
                      if(((h_34 != NULL) && (h_34 != i_34)))
                        _fail(i_34);
                      else
                        h_34 = i_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_34)), not_null(h_34));
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
  ATerm q_7 (ATerm t)
  {
    ATerm p_34 = NULL;
    p_34 = t;
    m_34 :
    if(!(match_string(p_34, "-i")))
      {
        if(!(match_string(p_34, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm s_34 = NULL;
    ATerm t_26;
    t_26 = t;
    {
      ATerm q_34 = NULL;
      ATerm r_34 = NULL;
      r_34 = t;
      if(((q_34 != NULL) && (q_34 != r_34)))
        _fail(r_34);
      else
        q_34 = r_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_11, not_null(q_34));
        t = set_config_0(t);
      }
    }
    t = t_26;
    {
      ATerm t_34 = NULL;
      t_34 = t;
      if(((s_34 != NULL) && (s_34 != t_34)))
        _fail(t_34);
      else
        s_34 = t_34;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_34));
    }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  t = ArgOption_3(t, q_7, s_7, t_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm y_34 = NULL;
  ATerm d_27;
  d_27 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm z_34 = NULL,a_35 = NULL;
      z_34 = t;
      x_34 :
      if(match_cons(z_34, sym_Program_1))
        {
          a_35 = ATgetArgument(z_34, 0);
          if(((y_34 != NULL) && (y_34 != a_35)))
            _fail(a_35);
          else
            y_34 = a_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, u_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_27), not_null(y_34)), term_e_27));
      {
        t = printnl_0(t);
        {
          t = term_z_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATempty, term_i_27));
  {
    t = printnl_0(t);
    {
      t = term_z_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_TicksToSeconds(not_null(d_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  i_35 = t;
  h_35 :
  if(match_cons(i_35, sym__2))
    {
      j_35 = ATgetArgument(i_35, 0);
      k_35 = ATgetArgument(i_35, 1);
      {
        ATerm j_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_35), not_null(k_35));
            LocalPopChoice(l_27);
          }
        else
          {
            t = j_27;
            t = SSL_addr(not_null(j_35), not_null(k_35));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_67 (ATerm), ATerm m_67 (ATerm))
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_67(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
        r_35 = t;
        q_35 :
        if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
          {
            s_35 = ATgetFirst((ATermList) r_35);
            t_35 = (ATerm) ATgetNext((ATermList) r_35);
            {
              ATerm w_35 = NULL;
              ATerm x_35 = NULL;
              t = not_null(t_35);
              {
                t = foldr_2(t, l_67, m_67);
                {
                  x_35 = t;
                  if(((w_35 != NULL) && (w_35 != x_35)))
                    _fail(x_35);
                  else
                    w_35 = x_35;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_35), not_null(w_35));
                t = m_67(t);
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
ATerm crush_2 (ATerm t, ATerm j_66 (ATerm), ATerm k_66 (ATerm))
{
  ATerm e_36 = NULL;
  ATerm g_36 = NULL;
  e_36 = t;
  {
    ATerm h_36 = NULL;
    ATerm j_36 = NULL,m_36 = NULL,n_36 = NULL;
    t = not_null(e_36);
    {
      h_36 = t;
      {
        t = SSL_explode_term(not_null(h_36));
        {
          j_36 = t;
          d_36 :
          if(match_cons(j_36, sym__2))
            {
              m_36 = ATgetArgument(j_36, 0);
              n_36 = ATgetArgument(j_36, 1);
              if(((g_36 != NULL) && (g_36 != n_36)))
                _fail(n_36);
              else
                g_36 = n_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_36);
      t = foldr_2(t, j_66, k_66);
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
    ATerm v_7 (ATerm t)
    {
      t = term_g_22;
      return(t);
    }
    t = crush_2(t, v_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym__2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm o_27;
        o_27 = t;
        {
          ATerm r_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_36), not_null(v_36));
              LocalPopChoice(u_27);
            }
          else
            {
              t = r_27;
              t = SSL_gtr(not_null(u_36), not_null(v_36));
            }
        }
        t = o_27;
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
  ATerm b_37 = NULL;
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
      c_37 = t;
      a_37 :
      if(match_cons(c_37, sym__2))
        {
          d_37 = ATgetArgument(c_37, 0);
          e_37 = ATgetArgument(c_37, 1);
          {
            if(((b_37 != NULL) && (b_37 != d_37)))
              _fail(d_37);
            else
              b_37 = d_37;
            if(((b_37 != NULL) && (b_37 != e_37)))
              _fail(e_37);
            else
              b_37 = e_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_28;
      d_28 = t;
      {
        ATerm h_37 = NULL;
        ATerm i_37 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            i_37 = t;
            if(((h_37 != NULL) && (h_37 != i_37)))
              _fail(i_37);
            else
              h_37 = i_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), term_z_9);
          t = geq_0(t);
        }
      }
      t = d_28;
      t = t_55(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm m_37 = NULL,r_37 = NULL;
    ATerm e_28;
    e_28 = t;
    {
      ATerm n_37 = NULL;
      t = run_time_0(t);
      {
        n_37 = t;
        if(((m_37 != NULL) && (m_37 != n_37)))
          _fail(n_37);
        else
          m_37 = n_37;
      }
    }
    t = e_28;
    {
      ATerm s_37 = NULL;
      t = term_f_28;
      {
        t = get_config_0(t);
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_28), not_null(m_37)), term_g_28), not_null(r_37)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_7);
  {
    t = term_g_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym_Version_0))
    {
      ATerm b_38 = NULL,d_38 = NULL;
      ATerm i_28;
      i_28 = t;
      {
        ATerm c_38 = NULL;
        t = SSLgetAnnotations(not_null(z_37));
        {
          c_38 = t;
          if(((b_38 != NULL) && (b_38 != c_38)))
            _fail(c_38);
          else
            b_38 = c_38;
        }
      }
      t = i_28;
      {
        ATerm e_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_38));
        {
          e_38 = t;
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
        }
        t = not_null(d_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        {
          ATerm r_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_7);
  t = r_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  t = SSL_table_create(not_null(l_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_38 = NULL;
  r_38 = t;
  {
    ATerm t_28;
    t_28 = t;
    {
      t = term_u_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_28, term_v_28, not_null(r_38));
          t = table_put_0(t);
        }
      }
    }
    t = t_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  t = SSL_table_destroy(not_null(x_38));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  t = SSL_exit(not_null(b_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  e_39 :
  if(((ATgetType(f_39) == AT_LIST) && ATisEmpty(f_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(f_39) == AT_LIST) && !(ATisEmpty(f_39))))
        {
          g_39 = ATgetFirst((ATermList) f_39);
          h_39 = (ATerm) ATgetNext((ATermList) f_39);
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
  ATerm f_29;
  f_29 = t;
  {
    ATerm k_39 = NULL;
    ATerm n_39 = NULL;
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        {
          ATerm l_39 = NULL;
          ATerm m_39 = NULL;
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
          t = (ATerm) ATinsert(ATempty, not_null(l_39));
        }
      }
    {
      n_39 = t;
      if(((k_39 != NULL) && (k_39 != n_39)))
        _fail(n_39);
      else
        k_39 = n_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(k_39));
      t = printnl_0(t);
    }
  }
  t = f_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  c_40 = t;
  z_39 :
  if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
    {
      a_40 = ATgetFirst((ATermList) c_40);
      b_40 = (ATerm) ATgetNext((ATermList) c_40);
      {
        ATerm f_40 = NULL;
        t = not_null(b_40);
        {
          ATerm i_29;
          i_29 = t;
          {
            ATerm g_40 = NULL,i_40 = NULL,k_40 = NULL;
            ATerm j_29;
            j_29 = t;
            {
              ATerm h_40 = NULL;
              t = i_0(t);
              {
                h_40 = t;
                if(((g_40 != NULL) && (g_40 != h_40)))
                  _fail(h_40);
                else
                  g_40 = h_40;
              }
            }
            t = j_29;
            {
              ATerm j_40 = NULL;
              t = not_null(a_40);
              {
                t = h_0(t);
                {
                  j_40 = t;
                  if(((i_40 != NULL) && (i_40 != j_40)))
                    _fail(j_40);
                  else
                    i_40 = j_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_40)), not_null(i_40));
                {
                  k_40 = t;
                  if(((f_40 != NULL) && (f_40 != k_40)))
                    _fail(k_40);
                  else
                    f_40 = k_40;
                }
              }
            }
          }
          t = i_29;
          {
            ATerm y_7 (ATerm t)
            {
              t = not_null(f_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_40) == AT_LIST) && ATisEmpty(c_40)))
        {
          {
            t = term_c_11;
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
  ATerm z_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_Program_1))
    {
      w_40 = ATgetArgument(v_40, 0);
      {
        ATerm z_40 = NULL,b_41 = NULL;
        ATerm a_41 = NULL;
        t = SSLgetAnnotations(not_null(v_40));
        {
          a_41 = t;
          if(((z_40 != NULL) && (z_40 != a_41)))
            _fail(a_41);
          else
            z_40 = a_41;
        }
        {
          t = not_null(w_40);
          {
            ATerm d_41 = NULL;
            t = e_54(t);
            {
              b_41 = t;
              {
                ATerm e_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_41)), not_null(z_40));
                {
                  e_41 = t;
                  if(((d_41 != NULL) && (d_41 != e_41)))
                    _fail(e_41);
                  else
                    d_41 = e_41;
                }
                t = not_null(d_41);
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
  ATerm m_41 = NULL;
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_41 = NULL;
      t = term_f_28;
      {
        t = get_config_0(t);
        {
          n_41 = t;
          if(((m_41 != NULL) && (m_41 != n_41)))
            _fail(n_41);
          else
            m_41 = n_41;
        }
      }
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm h_8 (ATerm t)
        {
          ATerm m_8 (ATerm t)
          {
            ATerm o_41 = NULL;
            o_41 = t;
            if(((m_41 != NULL) && (m_41 != o_41)))
              _fail(o_41);
            else
              m_41 = o_41;
            return(t);
          }
          t = Program_1(t, m_8);
          return(t);
        }
        t = fetch_1(t, h_8);
      }
    }
  {
    t = term_n_29;
    {
      t = echo_0(t);
      {
        t = term_u_29;
        {
          t = table_get_0(t);
          {
            ATerm n_8 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, n_8);
            {
              ATerm o_8 (ATerm t)
              {
                ATerm p_41 = NULL;
                ATerm q_41 = NULL;
                q_41 = t;
                if(((p_41 != NULL) && (p_41 != q_41)))
                  _fail(q_41);
                else
                  p_41 = q_41;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_41)), term_v_29);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, o_8);
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
  ATerm w_29;
  w_29 = t;
  {
    ATerm w_41 = NULL;
    ATerm x_41 = NULL;
    x_41 = t;
    if(((w_41 != NULL) && (w_41 != x_41)))
      _fail(x_41);
    else
      w_41 = x_41;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATempty, not_null(w_41)));
      t = printnl_0(t);
    }
  }
  t = w_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm x_29;
  x_29 = t;
  {
    t = t_71(t);
    t = debug_0(t);
  }
  t = x_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm k_42 = NULL,l_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym_Undefined_1))
    {
      l_42 = ATgetArgument(k_42, 0);
      {
        ATerm y_42 = NULL,a_43 = NULL;
        ATerm z_42 = NULL;
        t = SSLgetAnnotations(not_null(k_42));
        {
          z_42 = t;
          if(((y_42 != NULL) && (y_42 != z_42)))
            _fail(z_42);
          else
            y_42 = z_42;
        }
        {
          t = not_null(l_42);
          {
            ATerm c_43 = NULL;
            t = f_54(t);
            {
              a_43 = t;
              {
                ATerm d_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_43)), not_null(y_42));
                {
                  d_43 = t;
                  if(((c_43 != NULL) && (c_43 != d_43)))
                    _fail(d_43);
                  else
                    c_43 = d_43;
                }
                t = not_null(c_43);
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
ATerm fetch_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm i_43 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_61, _id);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = Cons_2(t, _id, i_43);
      }
    return(t);
  }
  t = i_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_75 (ATerm))
{
  t = fetch_1(t, y_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_Help_0))
    {
      ATerm p_43 = NULL,r_43 = NULL;
      ATerm c_30;
      c_30 = t;
      {
        ATerm q_43 = NULL;
        t = SSLgetAnnotations(not_null(n_43));
        {
          q_43 = t;
          if(((p_43 != NULL) && (p_43 != q_43)))
            _fail(q_43);
          else
            p_43 = q_43;
        }
      }
      t = c_30;
      {
        ATerm s_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_43));
        {
          s_43 = t;
          if(((r_43 != NULL) && (r_43 != s_43)))
            _fail(s_43);
          else
            r_43 = s_43;
        }
        t = not_null(r_43);
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
  ATerm x_43 = NULL;
  x_43 = t;
  t = SSL_implode_string(not_null(x_43));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
        c_44 = t;
        b_44 :
        if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
          {
            d_44 = ATgetFirst((ATermList) c_44);
            e_44 = (ATerm) ATgetNext((ATermList) c_44);
            {
              t = not_null(d_44);
              {
                ATerm p_8 (ATerm t)
                {
                  t = not_null(e_44);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_8);
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
  ATerm o_44 = NULL;
  ATerm q_44 = NULL;
  o_44 = t;
  {
    ATerm r_44 = NULL;
    ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
    t = not_null(o_44);
    {
      r_44 = t;
      {
        t = SSL_explode_term(not_null(r_44));
        {
          u_44 = t;
          m_44 :
          if(match_cons(u_44, sym__2))
            {
              v_44 = ATgetArgument(u_44, 0);
              w_44 = ATgetArgument(u_44, 1);
              n_44 :
              if(match_string(v_44, ""))
                {
                  if(((q_44 != NULL) && (q_44 != w_44)))
                    _fail(w_44);
                  else
                    q_44 = w_44;
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
      t = not_null(q_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm a_45 (ATerm t)
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_45);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          t = Nil_0(t);
          t = m_61(t);
        }
      }
    return(t);
  }
  t = a_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym__2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        t = not_null(e_45);
        {
          ATerm q_8 (ATerm t)
          {
            t = not_null(f_45);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  t = SSL_explode_string(not_null(k_45));
  return(t);
}
ATerm _2 (ATerm t, ATerm t_47 (ATerm), ATerm u_47 (ATerm))
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym__2))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      {
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm a_46 = NULL;
        t = SSLgetAnnotations(not_null(t_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
        {
          t = not_null(u_45);
          {
            ATerm d_46 = NULL;
            t = t_47(t);
            {
              b_46 = t;
              {
                t = not_null(v_45);
                {
                  ATerm f_46 = NULL;
                  t = u_47(t);
                  {
                    d_46 = t;
                    {
                      ATerm g_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_46), not_null(d_46)), not_null(z_45));
                      {
                        g_46 = t;
                        if(((f_46 != NULL) && (f_46 != g_46)))
                          _fail(g_46);
                        else
                          f_46 = g_46;
                      }
                      t = not_null(f_46);
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
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm p_30;
        p_30 = t;
        t = SSL_printnl(not_null(p_46), not_null(q_46));
        t = p_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm q_30;
  q_30 = t;
  {
    ATerm w_46 = NULL,y_46 = NULL;
    ATerm r_30;
    r_30 = t;
    {
      ATerm x_46 = NULL;
      t = s_71(t);
      {
        x_46 = t;
        if(((w_46 != NULL) && (w_46 != x_46)))
          _fail(x_46);
        else
          w_46 = x_46;
      }
    }
    t = r_30;
    {
      ATerm z_46 = NULL;
      z_46 = t;
      if(((y_46 != NULL) && (y_46 != z_46)))
        _fail(z_46);
      else
        y_46 = z_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), not_null(w_46)));
        t = printnl_0(t);
      }
    }
  }
  t = q_30;
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm c_47 (ATerm t)
  {
    ATerm s_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = s_30;
        t = Cons_2(t, x_60, c_47);
      }
    return(t);
  }
  t = c_47(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  t = SSL_is_string(not_null(e_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 (ATerm t)
            {
              ATerm a_31 = t;
              int b_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_31);
                }
              else
                {
                  t = a_31;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_8);
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            {
              ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
              n_47 = t;
              m_47 :
              if(match_cons(n_47, sym_Path_1))
                {
                  o_47 = ATgetArgument(n_47, 0);
                  t = not_null(o_47);
                }
              else
                {
                  if(match_cons(n_47, sym_Var_1))
                    {
                      o_47 = ATgetArgument(n_47, 0);
                      {
                        t = not_null(o_47);
                        {
                          ATerm c_31 = t;
                          int d_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_31);
                            }
                          else
                            {
                              t = c_31;
                              {
                                ATerm s_8 (ATerm t)
                                {
                                  t = term_e_31;
                                  return(t);
                                }
                                t = debug_1(t, s_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_47, sym_Prefix_2))
                        {
                          o_47 = ATgetArgument(n_47, 0);
                          p_47 = ATgetArgument(n_47, 1);
                          {
                            ATerm w_47 = NULL,y_47 = NULL;
                            ATerm f_31;
                            f_31 = t;
                            {
                              ATerm x_47 = NULL;
                              t = not_null(o_47);
                              {
                                t = eval_config_0(t);
                                {
                                  x_47 = t;
                                  if(((w_47 != NULL) && (w_47 != x_47)))
                                    _fail(x_47);
                                  else
                                    w_47 = x_47;
                                }
                              }
                            }
                            t = f_31;
                            {
                              ATerm z_47 = NULL;
                              t = not_null(p_47);
                              {
                                t = eval_config_0(t);
                                {
                                  z_47 = t;
                                  if(((y_47 != NULL) && (y_47 != z_47)))
                                    _fail(z_47);
                                  else
                                    y_47 = z_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), not_null(y_47));
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
  ATerm h_48 = NULL;
  h_48 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(h_48));
    {
      t = table_get_0(t);
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm k_31;
              k_31 = t;
              {
                ATerm j_48 = NULL;
                ATerm k_48 = NULL;
                k_48 = t;
                if(((j_48 != NULL) && (j_48 != k_48)))
                  _fail(k_48);
                else
                  j_48 = k_48;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_17, not_null(h_48), not_null(j_48));
                  t = table_put_0(t);
                }
              }
              t = k_31;
            }
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_59(t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym__2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      t = SSL_table_get(not_null(q_48), not_null(r_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym__3))
    {
      z_48 = ATgetArgument(y_48, 0);
      a_49 = ATgetArgument(y_48, 1);
      b_49 = ATgetArgument(y_48, 2);
      {
        ATerm o_31;
        o_31 = t;
        {
          ATerm h_49 = NULL;
          ATerm i_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_48), not_null(a_49));
          {
            ATerm p_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_31);
              }
            else
              {
                t = p_31;
                t = (ATerm) ATempty;
              }
            {
              i_49 = t;
              if(((h_49 != NULL) && (h_49 != i_49)))
                _fail(i_49);
              else
                h_49 = i_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_48), not_null(a_49), (ATerm) ATinsert(CheckATermList(not_null(h_49)), not_null(b_49)));
            t = table_put_0(t);
          }
        }
        t = o_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm m_49 = NULL;
  ATerm n_49 = NULL;
  t = term_c_11;
  {
    t = d_77(t);
    {
      n_49 = t;
      if(((m_49 != NULL) && (m_49 != n_49)))
        _fail(n_49);
      else
        m_49 = n_49;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_t_29, not_null(m_49));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  t_49 :
  if(match_string(u_49, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(u_49) == AT_LIST) && !(ATisEmpty(u_49))))
        {
          v_49 = ATgetFirst((ATermList) u_49);
          w_49 = (ATerm) ATgetNext((ATermList) u_49);
          {
            ATerm z_49 = NULL;
            ATerm t_31;
            t_31 = t;
            {
              t = not_null(v_49);
              t = a_0(t);
            }
            t = t_31;
            {
              ATerm a_50 = NULL;
              t = term_c_11;
              {
                t = d_0(t);
                {
                  a_50 = t;
                  if(((z_49 != NULL) && (z_49 != a_50)))
                    _fail(a_50);
                  else
                    z_49 = a_50;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_49)), not_null(z_49));
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
  ATerm t_8 (ATerm t)
  {
    ATerm f_50 = NULL;
    f_50 = t;
    e_50 :
    if(!(match_string(f_50, "--help")))
      {
        if(!(match_string(f_50, "-h")))
          {
            if(!(match_string(f_50, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = term_w_31;
    {
      t = set_config_0(t);
      t = term_x_31;
    }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_y_31;
    return(t);
  }
  t = Option_3(t, t_8, u_8, x_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  i_50 = t;
  h_50 :
  if(((ATgetType(i_50) == AT_LIST) && !(ATisEmpty(i_50))))
    {
      j_50 = ATgetFirst((ATermList) i_50);
      k_50 = (ATerm) ATgetNext((ATermList) i_50);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_50)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_50)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_49 (ATerm), ATerm d_49 (ATerm))
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  t_50 :
  if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
    {
      v_50 = ATgetFirst((ATermList) u_50);
      w_50 = (ATerm) ATgetNext((ATermList) u_50);
      {
        ATerm a_51 = NULL,c_51 = NULL;
        ATerm b_51 = NULL;
        t = SSLgetAnnotations(not_null(u_50));
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
        {
          t = not_null(v_50);
          {
            ATerm e_51 = NULL;
            t = c_49(t);
            {
              c_51 = t;
              {
                t = not_null(w_50);
                {
                  ATerm g_51 = NULL;
                  t = d_49(t);
                  {
                    e_51 = t;
                    {
                      ATerm h_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_51)), not_null(c_51)), not_null(a_51));
                      {
                        h_51 = t;
                        if(((g_51 != NULL) && (g_51 != h_51)))
                          _fail(h_51);
                        else
                          g_51 = h_51;
                      }
                      t = not_null(g_51);
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
  ATerm r_51 = NULL;
  r_51 = t;
  q_51 :
  if(((ATgetType(r_51) == AT_LIST) && ATisEmpty(r_51)))
    {
      {
        ATerm t_51 = NULL,v_51 = NULL;
        ATerm z_31;
        z_31 = t;
        {
          ATerm u_51 = NULL;
          t = SSLgetAnnotations(not_null(r_51));
          {
            u_51 = t;
            if(((t_51 != NULL) && (t_51 != u_51)))
              _fail(u_51);
            else
              t_51 = u_51;
          }
        }
        t = z_31;
        {
          ATerm w_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_51));
          {
            w_51 = t;
            if(((v_51 != NULL) && (v_51 != w_51)))
              _fail(w_51);
            else
              v_51 = w_51;
          }
          t = not_null(v_51);
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
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym__2))
    {
      d_52 = ATgetArgument(c_52, 0);
      e_52 = ATgetArgument(c_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_17, not_null(d_52), not_null(e_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm a_32;
  a_32 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_32;
        t = b_77(t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        {
        }
      }
  }
  t = a_32;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm m_52 = NULL;
      ATerm e_32;
      e_32 = t;
      {
        ATerm k_52 = NULL;
        ATerm l_52 = NULL;
        l_52 = t;
        if(((k_52 != NULL) && (k_52 != l_52)))
          _fail(l_52);
        else
          k_52 = l_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_28, not_null(k_52));
          t = set_config_0(t);
        }
      }
      t = e_32;
      {
        ATerm n_52 = NULL;
        n_52 = t;
        if(((m_52 != NULL) && (m_52 != n_52)))
          _fail(n_52);
        else
          m_52 = n_52;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_52));
      }
      return(t);
    }
    ATerm d_9 (ATerm t)
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_32);
            }
          else
            {
              t = h_32;
              {
                t = b_77(t);
                t = Cons_2(t, _id, d_9);
              }
            }
          LocalPopChoice(g_32);
        }
      else
        {
          t = f_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_9, d_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  ATerm k_32;
  k_32 = t;
  {
    ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
    w_52 = t;
    s_52 :
    if(match_cons(w_52, sym__3))
      {
        x_52 = ATgetArgument(w_52, 0);
        y_52 = ATgetArgument(w_52, 1);
        z_52 = ATgetArgument(w_52, 2);
        {
          if(((t_52 != NULL) && (t_52 != x_52)))
            _fail(x_52);
          else
            t_52 = x_52;
          {
            if(((u_52 != NULL) && (u_52 != y_52)))
              _fail(y_52);
            else
              u_52 = y_52;
            {
              if(((v_52 != NULL) && (v_52 != z_52)))
                _fail(z_52);
              else
                v_52 = z_52;
              t = SSL_table_put(not_null(t_52), not_null(u_52), not_null(v_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm c_53 = NULL;
  ATerm l_32;
  l_32 = t;
  {
    t = term_m_32;
    t = table_put_0(t);
  }
  t = l_32;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_77(t);
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_9);
    {
      ATerm r_32 = t;
      int s_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_32;
          t_32 = t;
          {
            ATerm u_32 = t;
            int y_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_u_31;
                t = get_config_0(t);
                LocalPopChoice(y_32);
              }
            else
              {
                t = u_32;
                t = fetch_1(t, Help_0);
              }
          }
          t = t_32;
          {
            t = system_usage_0(t);
            {
              t = term_g_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(s_32);
        }
      else
        {
          t = r_32;
          {
            ATerm z_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm k_9 (ATerm t)
                  {
                    ATerm d_53 = NULL;
                    d_53 = t;
                    if(((c_53 != NULL) && (c_53 != d_53)))
                      _fail(d_53);
                    else
                      c_53 = d_53;
                    return(t);
                  }
                  t = Undefined_1(t, k_9);
                  return(t);
                }
                t = fetch_1(t, f_9);
                {
                  ATerm l_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_53)), term_g_33);
                    return(t);
                  }
                  t = say_1(t, l_9);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_33);
              }
            else
              {
                t = z_32;
                {
                }
              }
          }
        }
      {
        ATerm h_33;
        h_33 = t;
        {
          t = term_o_29;
          t = table_destroy_0(t);
        }
        t = h_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm))
{
  t = parse_options_1(t, x_74);
  {
    t = store_options_0(t);
    {
      t = z_74(t);
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_74);
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm q_33 = t;
              int r_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_33);
                }
              else
                {
                  t = q_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  t = option_wrap_4(t, b_75, default_usage_0, _id, c_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm m_9 (ATerm t)
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_70(t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = xtc_io_1(t, m_70);
    return(t);
  }
  t = option_wrap_2(t, m_9, n_9);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm o_70 (ATerm), ATerm p_70 (ATerm))
{
  t = xtc_io_wrap_2(t, o_70, p_70);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm w_33;
    w_33 = t;
    {
      ATerm g_53 = NULL;
      ATerm h_53 = NULL;
      t = term_e_34;
      {
        t = xtc_find_path_0(t);
        {
          h_53 = t;
          if(((g_53 != NULL) && (g_53 != h_53)))
            _fail(h_53);
          else
            g_53 = h_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_53)), term_f_34));
        t = extend_config_0(t);
      }
    }
    t = w_33;
    t = parse_module_0(t);
    return(t);
  }
  t = xtc_iowrap_2(t, parse_stratego_options_0, o_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = parse_stratego_0(t);
  return(t);
}
