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
ATerm term_d_34;
ATerm term_b_34;
ATerm term_h_33;
ATerm term_p_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_x_31;
ATerm term_t_31;
ATerm term_g_31;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_f_29;
ATerm term_a_29;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_r_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_m_24;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_k_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_j_19;
ATerm term_d_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_b_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_q_10;
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
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Syntax_1, term_y_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_u_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_y_19);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_l_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_n_10);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_e_11);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_22);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_e_11);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_e_11);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_a_30);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_e_11);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, (ATerm) ATempty);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm l_71 (ATerm), ATerm m_71 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm z_55 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm c_71 (ATerm));
ATerm assert_1 (ATerm, ATerm y_71 (ATerm));
ATerm obsolete_1 (ATerm, ATerm m_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_60 (ATerm), ATerm l_60 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm l_73 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm y_69 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm f_56 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm d_71 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm x_54 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_56 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm s_61 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm j_73 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm b_50 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_56 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm g_56 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm i_56 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_67 (ATerm), ATerm j_67 (ATerm));
ATerm union_1 (ATerm, ATerm e_67 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm r_56 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm v_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_60 (ATerm), ATerm h_60 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_71 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm s_70 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm t_70 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm crush_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_56 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_75 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_77 (ATerm));
ATerm Program_1 (ATerm, ATerm o_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_76 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_48 (ATerm), ATerm e_48 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_72 (ATerm));
ATerm map_1 (ATerm, ATerm h_61 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_77 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_77 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm t, ATerm l_71 (ATerm), ATerm m_71 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, l_71, m_71);
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
ATerm fork_and_wait_1 (ATerm t, ATerm z_55 (ATerm))
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
                t = z_55(t);
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
ATerm xtc_command_1 (ATerm t, ATerm c_71 (ATerm))
{
  ATerm w_5 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm x_5 = NULL;
    t = c_71(t);
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
ATerm assert_1 (ATerm t, ATerm y_71 (ATerm))
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
          t = y_71(t);
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
ATerm obsolete_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm o_10;
  o_10 = t;
  {
    t = m_72(t);
    {
      ATerm e_0 (ATerm t)
      {
        t = term_q_10;
        return(t);
      }
      t = debug_1(t, e_0);
    }
  }
  t = o_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
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
      LocalPopChoice(s_10);
      t = SSL_open_file(not_null(b_7), not_null(a_7));
    }
  else
    {
      t = r_10;
      {
        ATerm f_7 = NULL;
        ATerm g_7 = NULL;
        ATerm f_0 (ATerm t)
        {
          t = term_w_10;
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
              ATerm y_10;
              y_10 = t;
              {
                ATerm h_7 = NULL;
                t = term_c_11;
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
              }
              t = y_10;
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
  t = term_e_11;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_7), term_f_11);
    {
      t = conc_strings_0(t);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
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
      ATerm i_11;
      i_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_c_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), term_e_11);
            {
              ATerm q_0 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = assert_1(t, q_0);
            }
          }
        }
      }
      t = i_11;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_8)), term_k_11));
              {
                ATerm l_11 = t;
                int m_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(m_11);
                  }
                else
                  {
                    t = l_11;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_8)), term_k_11), not_null(c_8)), term_n_11));
                      {
                        ATerm o_11 = t;
                        int x_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(x_11);
                          }
                        else
                          {
                            t = o_11;
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
      ATerm y_11;
      y_11 = t;
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
      t = y_11;
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
ATerm xtc_transform_2 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm))
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
          t = stdin_0(t);
        }
      LocalPopChoice(a_12);
      t = xtc_transform_file_2(t, e_71, f_71);
    }
  else
    {
      t = z_11;
      t = xtc_transform_term_2(t, e_71, f_71);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_9)), term_h_12), not_null(i_9));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_60 (ATerm), ATerm l_60 (ATerm))
{
  ATerm p_9 = NULL,r_9 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm q_9 = NULL;
    t = k_60(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
  }
  t = i_12;
  {
    ATerm s_9 = NULL;
    t = l_60(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm l_73 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm r_0 (ATerm t)
    {
      t = term_e_11;
      t = l_73(t);
      return(t);
    }
    t = split_2(t, _id, r_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm if_keep1_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12;
      n_12 = t;
      {
        ATerm w_9 = NULL;
        ATerm x_9 = NULL;
        t = term_o_12;
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
      t = n_12;
      t = y_69(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12;
      v_12 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_w_12);
          t = geq_0(t);
        }
      }
      t = v_12;
      t = f_56(t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
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
        ATerm x_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 = NULL;
            t = n_0(t);
            {
              x_10 = t;
              p_10 :
              if(match_cons(x_10, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), term_b_13);
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
            t = term_b_13;
            LocalPopChoice(z_12);
          }
        else
          {
            t = x_12;
            {
              ATerm e_13 = t;
              int f_13 = stack_ptr;
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
                        ATerm g_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_13 = t;
                            int k_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(k_13);
                              }
                            else
                              {
                                t = h_13;
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
                            t = g_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(z_10));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_10));
                  LocalPopChoice(f_13);
                }
              else
                {
                  t = e_13;
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
ATerm xtc_transform_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, d_71, s_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_l_13;
      return(t);
    }
    t = debug_1(t, u_0);
    return(t);
  }
  t = if_verbose6_1(t, t_0);
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm q_11 = NULL;
      ATerm v_0 (ATerm t)
      {
        t = term_p_13;
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
    t = o_13;
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_11 = NULL;
          t = not_null(p_11);
          {
            ATerm w_0 (ATerm t)
            {
              t = term_s_13;
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
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
          {
            ATerm t_11 = NULL;
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = term_y_13;
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
                t = term_b_14;
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
                    t = term_c_14;
                    return(t);
                  }
                  ATerm b_1 (ATerm t)
                  {
                    t = term_d_14;
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
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_11)), term_d_14);
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
                      t = term_e_14;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_12)), term_f_14), not_null(j_12));
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
ATerm find_in_includes_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm p_12 = NULL,r_12 = NULL;
  ATerm g_14;
  g_14 = t;
  {
    ATerm q_12 = NULL;
    q_12 = t;
    if(((p_12 != NULL) && (p_12 != q_12)))
      _fail(q_12);
    else
      p_12 = q_12;
  }
  t = g_14;
  {
    ATerm s_12 = NULL;
    t = term_d_14;
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
            t = debug_1(t, x_54);
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
      t = term_h_14;
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
        t = term_l_14;
        return(t);
      }
      t = guarantee_extension_1(t, j_1);
      {
        a_13 = t;
        {
          ATerm n_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_13 = NULL;
              ATerm k_1 (ATerm t)
              {
                t = term_s_14;
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
              LocalPopChoice(r_14);
            }
          else
            {
              t = n_14;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = term_t_14;
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
                        t = term_u_14;
                        return(t);
                      }
                      ATerm p_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_12)), term_v_14);
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
                t = term_s_14;
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
ATerm if_verbose2_1 (ATerm t, ATerm e_56 (ATerm))
{
  ATerm w_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15;
      d_15 = t;
      {
        ATerm i_13 = NULL;
        ATerm j_13 = NULL;
        t = term_u_9;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), term_g_15);
          t = geq_0(t);
        }
      }
      t = d_15;
      t = e_56(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = w_14;
      {
      }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm m_13 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm n_13 = NULL;
    t = s_61(t);
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
      t = term_j_15;
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
      t = term_m_15;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose6_1(t, u_1);
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_p_15;
            return(t);
          }
          t = guarantee_extension_1(t, x_1);
          return(t);
        }
        t = FILE_1(t, w_1);
        t = read_from_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm v_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_14 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm a_2 (ATerm t)
                {
                  t = term_x_15;
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
              LocalPopChoice(w_15);
            }
          else
            {
              t = v_15;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_c_16));
            }
        }
      }
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_m_15;
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
      t = term_d_16;
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
          ATerm h_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_16;
              t = get_config_0(t);
              LocalPopChoice(k_16);
            }
          else
            {
              t = h_16;
              {
                t = get_meta_0(t);
                {
                  ATerm m_16 = t;
                  int n_16 = stack_ptr;
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
                      LocalPopChoice(n_16);
                    }
                  else
                    {
                      t = m_16;
                      {
                        ATerm k_15 = NULL;
                        ATerm l_15 = NULL;
                        l_15 = t;
                        if(((k_15 != NULL) && (k_15 != l_15)))
                          _fail(l_15);
                        else
                          k_15 = l_15;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(c_15)), term_p_16), not_null(k_15)), term_o_16);
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
ATerm basename_1 (ATerm t, ATerm j_73 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 (ATerm t)
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, u_15);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              {
                ATerm x_16 = t;
                int y_16 = stack_ptr;
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
                    LocalPopChoice(y_16);
                  }
                else
                  {
                    t = x_16;
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
                      t = Cons_2(t, k_2, j_73);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = u_15(t);
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
ATerm FILE_1 (ATerm t, ATerm b_50 (ATerm))
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
            t = b_50(t);
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
  ATerm a_17 = NULL,b_17 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      t = term_z_16;
      return(t);
    }
    t = debug_1(t, m_2);
    return(t);
  }
  t = if_verbose6_1(t, l_2);
  {
    ATerm h_17;
    h_17 = t;
    {
      ATerm d_17 = NULL,e_17 = NULL;
      ATerm n_2 (ATerm t)
      {
        ATerm c_17 = NULL;
        t = basename_1(t, _id);
        {
          c_17 = t;
          if(((b_17 != NULL) && (b_17 != c_17)))
            _fail(c_17);
          else
            b_17 = c_17;
        }
        return(t);
      }
      t = FILE_1(t, n_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            d_17 = t;
            q_16 :
            if(match_cons(d_17, sym_FILE_1))
              {
                e_17 = ATgetArgument(d_17, 0);
                if(((a_17 != NULL) && (a_17 != e_17)))
                  _fail(e_17);
                else
                  a_17 = e_17;
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = h_17;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_i_17;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm f_17 = NULL;
        ATerm g_17 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm q_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_j_17);
            return(t);
          }
          t = if_verbose3_1(t, q_2);
          {
            g_17 = t;
            if(((f_17 != NULL) && (f_17 != g_17)))
              _fail(g_17);
            else
              f_17 = g_17;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(f_17)), not_null(a_17)), term_l_17), term_k_17);
        return(t);
      }
      t = xtc_transform_2(t, o_2, p_2);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_m_17;
          return(t);
        }
        t = xtc_transform_2(t, r_2, pass_verbose_0);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(b_17);
              {
                ATerm v_2 (ATerm t)
                {
                  t = term_r_17;
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
              t = term_s_17;
              return(t);
            }
            t = xtc_transform_2(t, w_2, pass_verbose_0);
            {
              ATerm x_2 (ATerm t)
              {
                t = term_t_17;
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
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      {
        ATerm u_17 = NULL;
        ATerm v_17 = NULL,c_18 = NULL;
        ATerm w_17 = NULL;
        t = not_null(p_17);
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              t = (ATerm) ATempty;
            }
          {
            w_17 = t;
            if(((v_17 != NULL) && (v_17 != w_17)))
              _fail(w_17);
            else
              v_17 = w_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(v_17));
          {
            ATerm z_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
                t = conc_more_lists_0(t);
              }
            {
              c_18 = t;
              if(((u_17 != NULL) && (u_17 != c_18)))
                _fail(c_18);
              else
                u_17 = c_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_18, not_null(p_17), not_null(u_17));
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
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 (ATerm t)
        {
          ATerm f_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, i_18);
              LocalPopChoice(j_18);
            }
          else
            {
              t = f_18;
              {
                ATerm y_2 (ATerm t)
                {
                  ATerm h_18 = NULL;
                  h_18 = t;
                  g_18 :
                  if(!(match_int(h_18, 47)))
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
        t = i_18(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_table_keys(not_null(m_18));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  {
    t = table_keys_0(t);
    {
      ATerm a_3 (ATerm t)
      {
        ATerm z_18 = NULL;
        ATerm b_19 = NULL;
        z_18 = t;
        {
          ATerm c_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(z_18));
          {
            t = table_get_0(t);
            {
              c_19 = t;
              if(((b_19 != NULL) && (b_19 != c_19)))
                _fail(c_19);
              else
                b_19 = c_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(b_19));
        }
        return(t);
      }
      t = map_1(t, a_3);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18;
      n_18 = t;
      {
        ATerm h_19 = NULL;
        ATerm i_19 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            i_19 = t;
            if(((h_19 != NULL) && (h_19 != i_19)))
              _fail(i_19);
            else
              h_19 = i_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), term_o_18);
          t = geq_0(t);
        }
      }
      t = n_18;
      t = h_56(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm p_18;
  p_18 = t;
  {
    ATerm l_19 = NULL;
    ATerm m_19 = NULL;
    m_19 = t;
    if(((l_19 != NULL) && (l_19 != m_19)))
      _fail(m_19);
    else
      l_19 = m_19;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(l_19));
      t = printnl_0(t);
    }
  }
  t = p_18;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm b_20 = NULL;
  ATerm k_20 = NULL,m_20 = NULL;
  b_20 = t;
  {
    ATerm n_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(b_20)));
    {
      t = table_get_0(t);
      {
        n_20 = t;
        v_19 :
        if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
          {
            p_20 = ATgetFirst((ATermList) n_20);
            s_20 = (ATerm) ATgetNext((ATermList) n_20);
            a_20 :
            if(match_cons(p_20, sym__2))
              {
                q_20 = ATgetArgument(p_20, 0);
                r_20 = ATgetArgument(p_20, 1);
                {
                  if(((k_20 != NULL) && (k_20 != q_20)))
                    _fail(q_20);
                  else
                    k_20 = q_20;
                  if(((m_20 != NULL) && (m_20 != r_20)))
                    _fail(r_20);
                  else
                    m_20 = r_20;
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
    t = not_null(m_20);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      {
        ATerm e_21 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_21)));
        {
          t = table_get_0(t);
          {
            ATerm b_3 (ATerm t)
            {
              ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
              f_21 = t;
              x_20 :
              if(match_cons(f_21, sym__2))
                {
                  g_21 = ATgetArgument(f_21, 0);
                  h_21 = ATgetArgument(f_21, 1);
                  {
                    if(((b_21 != NULL) && (b_21 != g_21)))
                      _fail(g_21);
                    else
                      b_21 = g_21;
                    if(((e_21 != NULL) && (e_21 != h_21)))
                      _fail(h_21);
                    else
                      e_21 = h_21;
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
        t = not_null(e_21);
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
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_18;
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
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm w_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_19;
      a_19 = t;
      {
        ATerm l_21 = NULL;
        ATerm m_21 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            m_21 = t;
            if(((l_21 != NULL) && (l_21 != m_21)))
              _fail(m_21);
            else
              l_21 = m_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_21), term_d_19);
          t = geq_0(t);
        }
      }
      t = a_19;
      t = g_56(t);
      LocalPopChoice(y_18);
    }
  else
    {
      t = w_18;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_19;
      g_19 = t;
      {
        ATerm p_21 = NULL;
        ATerm q_21 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            q_21 = t;
            if(((p_21 != NULL) && (p_21 != q_21)))
              _fail(q_21);
            else
              p_21 = q_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), term_j_19);
          t = geq_0(t);
        }
      }
      t = g_19;
      t = i_56(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
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
  ATerm u_21 = NULL,a_22 = NULL,b_22 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym__2))
    {
      a_22 = ATgetArgument(u_21, 0);
      b_22 = ATgetArgument(u_21, 1);
      if(((a_22 != NULL) && (a_22 != b_22)))
        _fail(b_22);
      else
        a_22 = b_22;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_67 (ATerm), ATerm j_67 (ATerm))
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  h_22 :
  if(((ATgetType(i_22) == AT_LIST) && !(ATisEmpty(i_22))))
    {
      j_22 = ATgetFirst((ATermList) i_22);
      k_22 = (ATerm) ATgetNext((ATermList) i_22);
      {
        t = j_67(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm n_22 = NULL;
            n_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), not_null(n_22));
              t = i_67(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(k_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      {
        t = not_null(y_22);
        {
          ATerm d_23 (ATerm t)
          {
            ATerm k_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_22);
                LocalPopChoice(n_19);
              }
            else
              {
                t = k_19;
                {
                  ATerm o_19 = t;
                  int p_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(z_22);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_67, g_3);
                      t = d_23(t);
                      LocalPopChoice(p_19);
                    }
                  else
                    {
                      t = o_19;
                      t = Cons_2(t, _id, d_23);
                    }
                }
              }
            return(t);
          }
          t = d_23(t);
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
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym__3))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      l_23 = ATgetArgument(i_23, 2);
      {
        ATerm q_19;
        q_19 = t;
        {
          ATerm p_23 = NULL;
          ATerm q_23 = NULL,s_23 = NULL;
          ATerm r_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(k_23));
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
                t = (ATerm) ATempty;
              }
            {
              r_23 = t;
              if(((q_23 != NULL) && (q_23 != r_23)))
                _fail(r_23);
              else
                q_23 = r_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(l_23));
            {
              t = union_1(t, eq_0);
              {
                s_23 = t;
                if(((p_23 != NULL) && (p_23 != s_23)))
                  _fail(s_23);
                else
                  p_23 = s_23;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_23), not_null(k_23), not_null(p_23));
            t = table_put_0(t);
          }
        }
        t = q_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      {
        t = not_null(c_24);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
            f_24 = t;
            y_23 :
            if(match_cons(f_24, sym__2))
              {
                g_24 = ATgetArgument(f_24, 0);
                h_24 = ATgetArgument(f_24, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_24), not_null(g_24), not_null(h_24));
                  t = r_56(t);
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
  ATerm n_24 = NULL;
  n_24 = t;
  t = SSL_ReadFromFile(not_null(n_24));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_24 = NULL;
  ATerm u_24 = NULL;
  s_24 = t;
  {
    ATerm t_19;
    t_19 = t;
    {
      ATerm v_24 = NULL;
      t = term_u_19;
      {
        v_24 = t;
        if(((u_24 != NULL) && (u_24 != v_24)))
          _fail(v_24);
        else
          u_24 = v_24;
      }
    }
    t = t_19;
    {
      t = SSL_open_file(not_null(s_24), not_null(u_24));
      t = SSL_close_file(not_null(s_24));
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
    ATerm w_19 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATmakeAppl(sym_Imported_1, not_null(a_25)));
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
        t = (ATerm) ATmakeAppl(sym__3, term_r_18, term_y_19, (ATerm) ATinsert(ATempty, not_null(a_25)));
        t = table_put_0(t);
      }
      t = x_19;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            t = term_z_19;
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
              ATerm d_25 = NULL;
              d_25 = t;
              if(((c_25 != NULL) && (c_25 != d_25)))
                _fail(d_25);
              else
                c_25 = d_25;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_r_18, not_null(c_25));
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
                      t = (ATerm) ATmakeAppl(sym__3, term_r_18, (ATerm)ATmakeAppl(sym_Imported_1, not_null(a_25)), (ATerm) ATempty);
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
  ATerm h_25 = NULL;
  h_25 = t;
  t = SSL_getenv(not_null(h_25));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_20;
      t = get_config_0(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_20;
            t = getenv_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
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
      t = term_t_20;
      return(t);
    }
    t = debug_1(t, a_4);
    return(t);
  }
  t = if_verbose5_1(t, x_3);
  {
    ATerm u_20;
    u_20 = t;
    {
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_21;
          t = table_get_0(t);
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = u_20;
    {
      ATerm b_4 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          t = term_d_21;
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
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 (ATerm t)
      {
        ATerm f_4 (ATerm t)
        {
          t = term_k_21;
          return(t);
        }
        t = debug_1(t, f_4);
        return(t);
      }
      t = if_verbose5_1(t, e_4);
      {
        t = xtc_load_0(t);
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm g_4 (ATerm t)
            {
              ATerm l_4 (ATerm t)
              {
                t = term_k_21;
                return(t);
              }
              t = debug_1(t, l_4);
              return(t);
            }
            t = if_verbose5_1(t, g_4);
          }
        }
      }
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm l_25 = NULL;
        ATerm m_25 = NULL;
        m_25 = t;
        if(((l_25 != NULL) && (l_25 != m_25)))
          _fail(m_25);
        else
          l_25 = m_25;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_21), not_null(l_25)), term_r_21);
          {
            t = error_0(t);
            {
              ATerm m_4 (ATerm t)
              {
                t = term_r_18;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_4 (ATerm t)
                    {
                      t = term_v_21;
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
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_4 (ATerm t)
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
      ATerm q_4 (ATerm t)
      {
        ATerm y_21;
        y_21 = t;
        {
          ATerm u_25 = NULL;
          ATerm v_25 = NULL;
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATinsert(ATempty, not_null(u_25)));
            t = extend_config_0(t);
          }
        }
        t = y_21;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_z_21;
        return(t);
      }
      t = ArgOption_3(t, o_4, q_4, r_4);
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
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
            ATerm t_4 (ATerm t)
            {
              ATerm e_22;
              e_22 = t;
              {
                ATerm x_25 = NULL;
                ATerm y_25 = NULL;
                y_25 = t;
                if(((x_25 != NULL) && (x_25 != y_25)))
                  _fail(y_25);
                else
                  x_25 = y_25;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_16, not_null(x_25));
                  t = set_config_0(t);
                }
              }
              t = e_22;
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              t = term_f_22;
              return(t);
            }
            t = ArgOption_3(t, s_4, t_4, u_4);
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            {
              ATerm w_4 (ATerm t)
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
              ATerm a_5 (ATerm t)
              {
                ATerm g_22;
                g_22 = t;
                {
                  t = term_m_22;
                  t = set_config_0(t);
                }
                t = g_22;
                return(t);
              }
              ATerm c_5 (ATerm t)
              {
                t = term_o_22;
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
      ATerm p_22;
      p_22 = t;
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
      t = p_22;
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
      ATerm d_27 = NULL,g_27 = NULL;
      ATerm q_22;
      q_22 = t;
      {
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          f_27 = t;
          if(((d_27 != NULL) && (d_27 != f_27)))
            _fail(f_27);
          else
            d_27 = f_27;
        }
      }
      t = q_22;
      {
        ATerm h_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(d_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
        t = not_null(g_27);
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
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_FILE_1))
    {
      z_27 = ATgetArgument(y_27, 0);
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_28 = NULL;
            ATerm c_28 = NULL;
            t = m_0(t);
            {
              c_28 = t;
              {
                if(((b_28 != NULL) && (b_28 != c_28)))
                  _fail(c_28);
                else
                  b_28 = c_28;
                {
                  ATerm t_22 = t;
                  int u_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(u_22);
                    }
                  else
                    {
                      t = t_22;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), not_null(b_28));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_27));
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm v_22 = t;
              int a_23 = stack_ptr;
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
                        ATerm b_23 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm c_23 = t;
                            int e_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(e_23);
                              }
                            else
                              {
                                t = c_23;
                                {
                                  ATerm f_23 = t;
                                  int g_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(g_23);
                                    }
                                  else
                                    {
                                      t = f_23;
                                      {
                                        ATerm i_28 = NULL;
                                        i_28 = t;
                                        if(((z_27 != NULL) && (z_27 != i_28)))
                                          _fail(i_28);
                                        else
                                          z_27 = i_28;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_23;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), not_null(e_28));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_27));
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = v_22;
                  {
                    ATerm k_28 = NULL;
                    t = m_0(t);
                    {
                      k_28 = t;
                      if(((z_27 != NULL) && (z_27 != k_28)))
                        _fail(k_28);
                      else
                        z_27 = k_28;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_27));
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
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
    {
      v_28 = ATgetFirst((ATermList) u_28);
      w_28 = (ATerm) ATgetNext((ATermList) u_28);
      t = not_null(w_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym__2))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      {
        ATerm m_23;
        m_23 = t;
        {
          ATerm h_29 = NULL;
          ATerm i_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), not_null(e_29));
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                t = (ATerm) ATempty;
              }
            {
              i_29 = t;
              if(((h_29 != NULL) && (h_29 != i_29)))
                _fail(i_29);
              else
                h_29 = i_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_29), not_null(e_29), not_null(h_29));
            t = table_put_0(t);
          }
        }
        t = m_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  ATerm t_23;
  t_23 = t;
  {
    ATerm s_29 = NULL;
    ATerm t_29 = NULL,u_29 = NULL,x_29 = NULL;
    t = v_71(t);
    {
      s_29 = t;
      {
        if(((r_29 != NULL) && (r_29 != s_29)))
          _fail(s_29);
        else
          r_29 = s_29;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), term_n_10);
              t = table_get_0(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_29 = t;
            o_29 :
            if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
              {
                u_29 = ATgetFirst((ATermList) t_29);
                x_29 = (ATerm) ATgetNext((ATermList) t_29);
                {
                  if(((q_29 != NULL) && (q_29 != u_29)))
                    _fail(u_29);
                  else
                    q_29 = u_29;
                  {
                    if(((p_29 != NULL) && (p_29 != x_29)))
                      _fail(x_29);
                    else
                      p_29 = x_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_29), term_n_10, not_null(p_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(q_29);
                          {
                            ATerm i_5 (ATerm t)
                            {
                              ATerm y_29 = NULL;
                              y_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(y_29));
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
  t = t_23;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = SSL_remove(not_null(p_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_60 (ATerm), ATerm h_60 (ATerm))
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_60(t);
      t = h_60(t);
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        t = h_60(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm w_30 = NULL;
  ATerm d_24;
  d_24 = t;
  {
    ATerm x_30 = NULL;
    ATerm m_31 = NULL;
    t = u_71(t);
    {
      x_30 = t;
      {
        if(((w_30 != NULL) && (w_30 != x_30)))
          _fail(x_30);
        else
          w_30 = x_30;
        {
          ATerm n_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_30), term_n_10);
          {
            ATerm e_24 = t;
            int i_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_24);
              }
            else
              {
                t = e_24;
                t = (ATerm) ATempty;
              }
            {
              n_31 = t;
              if(((m_31 != NULL) && (m_31 != n_31)))
                _fail(n_31);
              else
                m_31 = n_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_30), term_n_10, (ATerm) ATinsert(CheckATermList(not_null(m_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_24;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL;
  ATerm j_5 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = begin_scope_1(t, j_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm j_24;
      j_24 = t;
      {
        ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_24;
            t = table_get_0(t);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          y_31 = t;
          u_31 :
          if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
            {
              z_31 = ATgetFirst((ATermList) y_31);
              a_32 = (ATerm) ATgetNext((ATermList) y_31);
              {
                if(((w_31 != NULL) && (w_31 != z_31)))
                  _fail(z_31);
                else
                  w_31 = z_31;
                {
                  if(((v_31 != NULL) && (v_31 != a_32)))
                    _fail(a_32);
                  else
                    v_31 = a_32;
                  {
                    t = not_null(w_31);
                    {
                      ATerm l_5 (ATerm t)
                      {
                        ATerm o_24 = t;
                        int p_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(p_24);
                          }
                        else
                          {
                            t = o_24;
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
      t = j_24;
      {
        ATerm m_5 (ATerm t)
        {
          t = term_j_11;
          return(t);
        }
        t = end_scope_1(t, m_5);
      }
      return(t);
    }
    t = restore_always_2(t, s_70, k_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_32 = NULL;
        ATerm r_32 = NULL;
        t = term_n_11;
        {
          t = get_config_0(t);
          {
            r_32 = t;
            if(((q_32 != NULL) && (q_32 != r_32)))
              _fail(r_32);
            else
              q_32 = r_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_32));
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = term_j_15;
      }
    {
      t = t_70(t);
      {
        ATerm s_5 (ATerm t)
        {
          ATerm t_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_11;
              t = get_config_0(t);
              LocalPopChoice(w_24);
            }
          else
            {
              t = t_24;
              t = term_b_13;
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
    ATerm y_32 = NULL;
    y_32 = t;
    t_32 :
    if(!(match_string(y_32, "-v")))
      {
        if(!(match_string(y_32, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_x_24;
    t = set_config_0(t);
    t = term_y_24;
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_z_24;
    return(t);
  }
  t = Option_3(t, t_5, u_5, v_5);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm d_33 = NULL;
    d_33 = t;
    z_32 :
    if(!(match_string(d_33, "-k")))
      {
        if(!(match_string(d_33, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm b_25;
    b_25 = t;
    {
      ATerm e_33 = NULL;
      ATerm f_33 = NULL;
      t = string_to_int_0(t);
      {
        f_33 = t;
        if(((e_33 != NULL) && (e_33 != f_33)))
          _fail(f_33);
        else
          e_33 = f_33;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_12, not_null(e_33));
        t = set_config_0(t);
      }
    }
    t = b_25;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_e_25;
    return(t);
  }
  t = ArgOption_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_string_to_int(not_null(l_33));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 (ATerm t)
      {
        ATerm t_33 = NULL;
        t_33 = t;
        o_33 :
        if(!(match_string(t_33, "-S")))
          {
            if(!(match_string(t_33, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        t = term_m_22;
        t = set_config_0(t);
        t = term_i_25;
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_j_25;
        return(t);
      }
      t = Option_3(t, d_6, e_6, k_6);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm k_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              ATerm u_33 = NULL;
              u_33 = t;
              p_33 :
              if(!(match_string(u_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm x_33 = NULL;
              ATerm p_25;
              p_25 = t;
              {
                ATerm v_33 = NULL;
                ATerm w_33 = NULL;
                t = string_to_int_0(t);
                {
                  w_33 = t;
                  if(((v_33 != NULL) && (v_33 != w_33)))
                    _fail(w_33);
                  else
                    v_33 = w_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(v_33));
                  t = set_config_0(t);
                }
              }
              t = p_25;
              {
                ATerm y_33 = NULL;
                y_33 = t;
                if(((x_33 != NULL) && (x_33 != y_33)))
                  _fail(y_33);
                else
                  x_33 = y_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_33));
              }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_r_25;
              return(t);
            }
            t = ArgOption_3(t, l_6, t_6, u_6);
            LocalPopChoice(n_25);
          }
        else
          {
            t = k_25;
            {
              ATerm v_6 (ATerm t)
              {
                ATerm z_33 = NULL;
                z_33 = t;
                s_33 :
                if(!(match_string(z_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_6 (ATerm t)
              {
                t = term_b_26;
                t = set_config_0(t);
                t = term_c_26;
                return(t);
              }
              ATerm y_6 (ATerm t)
              {
                t = term_h_26;
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
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
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
    ATerm f_34 = NULL;
    f_34 = t;
    c_34 :
    if(!(match_string(f_34, "-o")))
      {
        if(!(match_string(f_34, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    ATerm i_34 = NULL;
    ATerm m_26;
    m_26 = t;
    {
      ATerm g_34 = NULL;
      ATerm h_34 = NULL;
      h_34 = t;
      if(((g_34 != NULL) && (g_34 != h_34)))
        _fail(h_34);
      else
        g_34 = h_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(g_34));
        t = set_config_0(t);
      }
    }
    t = m_26;
    {
      ATerm j_34 = NULL;
      j_34 = t;
      if(((i_34 != NULL) && (i_34 != j_34)))
        _fail(j_34);
      else
        i_34 = j_34;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_34));
    }
    return(t);
  }
  ATerm j_7 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = ArgOption_3(t, z_6, i_7, j_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm k_7 (ATerm t)
        {
          ATerm n_34 = NULL;
          n_34 = t;
          m_34 :
          if(!(match_string(n_34, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          t = term_x_26;
          t = set_config_0(t);
          t = term_y_26;
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = term_z_26;
          return(t);
        }
        t = Option_3(t, k_7, l_7, p_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  t_34 = t;
  r_34 :
  if(match_string(t_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
        {
          u_34 = ATgetFirst((ATermList) t_34);
          v_34 = (ATerm) ATgetNext((ATermList) t_34);
          s_34 :
          if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
            {
              w_34 = ATgetFirst((ATermList) v_34);
              x_34 = (ATerm) ATgetNext((ATermList) v_34);
              {
                ATerm b_35 = NULL;
                ATerm c_27;
                c_27 = t;
                {
                  t = not_null(u_34);
                  t = j_0(t);
                }
                t = c_27;
                {
                  ATerm c_35 = NULL;
                  t = not_null(w_34);
                  {
                    t = k_0(t);
                    {
                      c_35 = t;
                      if(((b_35 != NULL) && (b_35 != c_35)))
                        _fail(c_35);
                      else
                        b_35 = c_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_34)), not_null(b_35));
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
    ATerm j_35 = NULL;
    j_35 = t;
    g_35 :
    if(!(match_string(j_35, "-i")))
      {
        if(!(match_string(j_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm m_35 = NULL;
    ATerm e_27;
    e_27 = t;
    {
      ATerm k_35 = NULL;
      ATerm l_35 = NULL;
      l_35 = t;
      if(((k_35 != NULL) && (k_35 != l_35)))
        _fail(l_35);
      else
        k_35 = l_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_11, not_null(k_35));
        t = set_config_0(t);
      }
    }
    t = e_27;
    {
      ATerm n_35 = NULL;
      n_35 = t;
      if(((m_35 != NULL) && (m_35 != n_35)))
        _fail(n_35);
      else
        m_35 = n_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_35));
    }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3(t, q_7, s_7, t_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm s_35 = NULL;
  ATerm n_27;
  n_27 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm t_35 = NULL,u_35 = NULL;
      t_35 = t;
      r_35 :
      if(match_cons(t_35, sym_Program_1))
        {
          u_35 = ATgetArgument(t_35, 0);
          if(((s_35 != NULL) && (s_35 != u_35)))
            _fail(u_35);
          else
            s_35 = u_35;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, u_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), not_null(s_35)), term_o_27));
      {
        t = printnl_0(t);
        {
          t = term_z_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATempty, term_q_27));
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
  ATerm x_35 = NULL;
  x_35 = t;
  t = SSL_TicksToSeconds(not_null(x_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_36), not_null(e_36));
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = SSL_addr(not_null(d_36), not_null(e_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_67(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        l_36 = t;
        k_36 :
        if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
          {
            m_36 = ATgetFirst((ATermList) l_36);
            n_36 = (ATerm) ATgetNext((ATermList) l_36);
            {
              ATerm q_36 = NULL;
              ATerm r_36 = NULL;
              t = not_null(n_36);
              {
                t = foldr_2(t, v_67, w_67);
                {
                  r_36 = t;
                  if(((q_36 != NULL) && (q_36 != r_36)))
                    _fail(r_36);
                  else
                    q_36 = r_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(q_36));
                t = w_67(t);
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
ATerm crush_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm a_37 = NULL;
  ATerm c_37 = NULL;
  a_37 = t;
  {
    ATerm d_37 = NULL;
    ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
    t = not_null(a_37);
    {
      d_37 = t;
      {
        t = SSL_explode_term(not_null(d_37));
        {
          f_37 = t;
          z_36 :
          if(match_cons(f_37, sym__2))
            {
              g_37 = ATgetArgument(f_37, 0);
              h_37 = ATgetArgument(f_37, 1);
              if(((c_37 != NULL) && (c_37 != h_37)))
                _fail(h_37);
              else
                c_37 = h_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_37);
      t = foldr_2(t, t_66, u_66);
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
      t = term_l_22;
      return(t);
    }
    t = crush_2(t, v_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym__2))
    {
      o_37 = ATgetArgument(n_37, 0);
      p_37 = ATgetArgument(n_37, 1);
      {
        ATerm v_27;
        v_27 = t;
        {
          ATerm w_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_37), not_null(p_37));
              LocalPopChoice(a_28);
            }
          else
            {
              t = w_27;
              t = SSL_gtr(not_null(o_37), not_null(p_37));
            }
        }
        t = v_27;
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
  ATerm v_37 = NULL;
  ATerm d_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_37 = NULL,x_37 = NULL,b_38 = NULL;
      w_37 = t;
      u_37 :
      if(match_cons(w_37, sym__2))
        {
          x_37 = ATgetArgument(w_37, 0);
          b_38 = ATgetArgument(w_37, 1);
          {
            if(((v_37 != NULL) && (v_37 != x_37)))
              _fail(x_37);
            else
              v_37 = x_37;
            if(((v_37 != NULL) && (v_37 != b_38)))
              _fail(b_38);
            else
              v_37 = b_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_28);
    }
  else
    {
      t = d_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm h_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_28;
      l_28 = t;
      {
        ATerm e_38 = NULL;
        ATerm f_38 = NULL;
        t = term_u_9;
        {
          t = get_config_0(t);
          {
            f_38 = t;
            if(((e_38 != NULL) && (e_38 != f_38)))
              _fail(f_38);
            else
              e_38 = f_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), term_z_9);
          t = geq_0(t);
        }
      }
      t = l_28;
      t = d_56(t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = h_28;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm j_38 = NULL,l_38 = NULL;
    ATerm m_28;
    m_28 = t;
    {
      ATerm k_38 = NULL;
      t = run_time_0(t);
      {
        k_38 = t;
        if(((j_38 != NULL) && (j_38 != k_38)))
          _fail(k_38);
        else
          j_38 = k_38;
      }
    }
    t = m_28;
    {
      ATerm m_38 = NULL;
      t = term_n_28;
      {
        t = get_config_0(t);
        {
          m_38 = t;
          if(((l_38 != NULL) && (l_38 != m_38)))
            _fail(m_38);
          else
            l_38 = m_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_28), not_null(j_38)), term_o_28), not_null(l_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_7);
  {
    t = term_l_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  s_38 :
  if(match_cons(v_38, sym_Version_0))
    {
      ATerm x_38 = NULL,b_39 = NULL;
      ATerm q_28;
      q_28 = t;
      {
        ATerm y_38 = NULL;
        t = SSLgetAnnotations(not_null(v_38));
        {
          y_38 = t;
          if(((x_38 != NULL) && (x_38 != y_38)))
            _fail(y_38);
          else
            x_38 = y_38;
        }
      }
      t = q_28;
      {
        ATerm c_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_38));
        {
          c_39 = t;
          if(((b_39 != NULL) && (b_39 != c_39)))
            _fail(c_39);
          else
            b_39 = c_39;
        }
        t = not_null(b_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        {
          ATerm x_28 = t;
          int y_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_28);
            }
          else
            {
              t = x_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, x_7);
  t = e_75(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  t = SSL_table_create(not_null(j_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  {
    ATerm z_28;
    z_28 = t;
    {
      t = term_a_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_29, term_f_29, not_null(n_39));
          t = table_put_0(t);
        }
      }
    }
    t = z_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  t = SSL_table_destroy(not_null(r_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  t = SSL_exit(not_null(v_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
  b_40 = t;
  y_39 :
  if(((ATgetType(b_40) == AT_LIST) && ATisEmpty(b_40)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
        {
          c_40 = ATgetFirst((ATermList) b_40);
          d_40 = (ATerm) ATgetNext((ATermList) b_40);
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
  ATerm g_29;
  g_29 = t;
  {
    ATerm i_40 = NULL;
    ATerm l_40 = NULL;
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm j_40 = NULL;
          ATerm k_40 = NULL;
          k_40 = t;
          if(((j_40 != NULL) && (j_40 != k_40)))
            _fail(k_40);
          else
            j_40 = k_40;
          t = (ATerm) ATinsert(ATempty, not_null(j_40));
        }
      }
    {
      l_40 = t;
      if(((i_40 != NULL) && (i_40 != l_40)))
        _fail(l_40);
      else
        i_40 = l_40;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_13, not_null(i_40));
      t = printnl_0(t);
    }
  }
  t = g_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  w_40 = t;
  t_40 :
  if(((ATgetType(w_40) == AT_LIST) && !(ATisEmpty(w_40))))
    {
      u_40 = ATgetFirst((ATermList) w_40);
      v_40 = (ATerm) ATgetNext((ATermList) w_40);
      {
        ATerm z_40 = NULL;
        t = not_null(v_40);
        {
          ATerm l_29;
          l_29 = t;
          {
            ATerm a_41 = NULL,c_41 = NULL,e_41 = NULL;
            ATerm m_29;
            m_29 = t;
            {
              ATerm b_41 = NULL;
              t = i_0(t);
              {
                b_41 = t;
                if(((a_41 != NULL) && (a_41 != b_41)))
                  _fail(b_41);
                else
                  a_41 = b_41;
              }
            }
            t = m_29;
            {
              ATerm d_41 = NULL;
              t = not_null(u_40);
              {
                t = h_0(t);
                {
                  d_41 = t;
                  if(((c_41 != NULL) && (c_41 != d_41)))
                    _fail(d_41);
                  else
                    c_41 = d_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_41)), not_null(c_41));
                {
                  e_41 = t;
                  if(((z_40 != NULL) && (z_40 != e_41)))
                    _fail(e_41);
                  else
                    z_40 = e_41;
                }
              }
            }
          }
          t = l_29;
          {
            ATerm y_7 (ATerm t)
            {
              t = not_null(z_40);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_40) == AT_LIST) && ATisEmpty(w_40)))
        {
          {
            t = term_e_11;
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
ATerm short_description_1 (ATerm t, ATerm l_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Program_1))
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
            t = o_54(t);
            {
              v_41 = t;
              {
                ATerm y_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_41)), not_null(t_41));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm h_42 = NULL;
  ATerm n_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_42 = NULL;
      t = term_n_28;
      {
        t = get_config_0(t);
        {
          j_42 = t;
          if(((h_42 != NULL) && (h_42 != j_42)))
            _fail(j_42);
          else
            h_42 = j_42;
        }
      }
      LocalPopChoice(v_29);
    }
  else
    {
      t = n_29;
      {
        ATerm h_8 (ATerm t)
        {
          ATerm m_8 (ATerm t)
          {
            ATerm k_42 = NULL;
            k_42 = t;
            if(((h_42 != NULL) && (h_42 != k_42)))
              _fail(k_42);
            else
              h_42 = k_42;
            return(t);
          }
          t = Program_1(t, m_8);
          return(t);
        }
        t = fetch_1(t, h_8);
      }
    }
  {
    t = term_w_29;
    {
      t = echo_0(t);
      {
        t = term_b_30;
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
                ATerm q_42 = NULL;
                ATerm r_42 = NULL;
                r_42 = t;
                if(((q_42 != NULL) && (q_42 != r_42)))
                  _fail(r_42);
                else
                  q_42 = r_42;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_42)), term_c_30);
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
  ATerm d_30;
  d_30 = t;
  {
    ATerm w_42 = NULL;
    ATerm x_42 = NULL;
    x_42 = t;
    if(((w_42 != NULL) && (w_42 != x_42)))
      _fail(x_42);
    else
      w_42 = x_42;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATempty, not_null(w_42)));
      t = printnl_0(t);
    }
  }
  t = d_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm e_30;
  e_30 = t;
  {
    t = g_72(t);
    t = debug_0(t);
  }
  t = e_30;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_54 (ATerm))
{
  ATerm o_43 = NULL,p_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Undefined_1))
    {
      p_43 = ATgetArgument(o_43, 0);
      {
        ATerm s_43 = NULL,u_43 = NULL;
        ATerm t_43 = NULL;
        t = SSLgetAnnotations(not_null(o_43));
        {
          t_43 = t;
          if(((s_43 != NULL) && (s_43 != t_43)))
            _fail(t_43);
          else
            s_43 = t_43;
        }
        {
          t = not_null(p_43);
          {
            ATerm w_43 = NULL;
            t = p_54(t);
            {
              u_43 = t;
              {
                ATerm x_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_43)), not_null(s_43));
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
ATerm fetch_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm c_44 (ATerm t)
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_61, _id);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = Cons_2(t, _id, c_44);
      }
    return(t);
  }
  t = c_44(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_76 (ATerm))
{
  t = fetch_1(t, l_76);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym_Help_0))
    {
      ATerm j_44 = NULL,l_44 = NULL;
      ATerm h_30;
      h_30 = t;
      {
        ATerm k_44 = NULL;
        t = SSLgetAnnotations(not_null(h_44));
        {
          k_44 = t;
          if(((j_44 != NULL) && (j_44 != k_44)))
            _fail(k_44);
          else
            j_44 = k_44;
        }
      }
      t = h_30;
      {
        ATerm m_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_44));
        {
          m_44 = t;
          if(((l_44 != NULL) && (l_44 != m_44)))
            _fail(m_44);
          else
            l_44 = m_44;
        }
        t = not_null(l_44);
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
  ATerm r_44 = NULL;
  r_44 = t;
  t = SSL_implode_string(not_null(r_44));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
        w_44 = t;
        v_44 :
        if(((ATgetType(w_44) == AT_LIST) && !(ATisEmpty(w_44))))
          {
            x_44 = ATgetFirst((ATermList) w_44);
            y_44 = (ATerm) ATgetNext((ATermList) w_44);
            {
              t = not_null(x_44);
              {
                ATerm p_8 (ATerm t)
                {
                  t = not_null(y_44);
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
  ATerm j_45 = NULL;
  ATerm l_45 = NULL;
  j_45 = t;
  {
    ATerm m_45 = NULL;
    ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
    t = not_null(j_45);
    {
      m_45 = t;
      {
        t = SSL_explode_term(not_null(m_45));
        {
          o_45 = t;
          h_45 :
          if(match_cons(o_45, sym__2))
            {
              p_45 = ATgetArgument(o_45, 0);
              q_45 = ATgetArgument(o_45, 1);
              i_45 :
              if(match_string(p_45, ""))
                {
                  if(((l_45 != NULL) && (l_45 != q_45)))
                    _fail(q_45);
                  else
                    l_45 = q_45;
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
      t = not_null(l_45);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm u_45 (ATerm t)
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_45);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          t = Nil_0(t);
          t = w_61(t);
        }
      }
    return(t);
  }
  t = u_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym__2))
    {
      y_45 = ATgetArgument(x_45, 0);
      z_45 = ATgetArgument(x_45, 1);
      {
        t = not_null(y_45);
        {
          ATerm q_8 (ATerm t)
          {
            t = not_null(z_45);
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
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  t = SSL_explode_string(not_null(e_46));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_48 (ATerm), ATerm e_48 (ATerm))
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym__2))
    {
      o_46 = ATgetArgument(n_46, 0);
      p_46 = ATgetArgument(n_46, 1);
      {
        ATerm t_46 = NULL,v_46 = NULL;
        ATerm u_46 = NULL;
        t = SSLgetAnnotations(not_null(n_46));
        {
          u_46 = t;
          if(((t_46 != NULL) && (t_46 != u_46)))
            _fail(u_46);
          else
            t_46 = u_46;
        }
        {
          t = not_null(o_46);
          {
            ATerm x_46 = NULL;
            t = d_48(t);
            {
              v_46 = t;
              {
                t = not_null(p_46);
                {
                  ATerm z_46 = NULL;
                  t = e_48(t);
                  {
                    x_46 = t;
                    {
                      ATerm a_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_46), not_null(x_46)), not_null(t_46));
                      {
                        a_47 = t;
                        if(((z_46 != NULL) && (z_46 != a_47)))
                          _fail(a_47);
                        else
                          z_46 = a_47;
                      }
                      t = not_null(z_46);
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
    ATerm o_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(q_30);
      }
    else
      {
        t = o_30;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  h_47 :
  if(match_cons(i_47, sym__2))
    {
      j_47 = ATgetArgument(i_47, 0);
      k_47 = ATgetArgument(i_47, 1);
      {
        ATerm r_30;
        r_30 = t;
        t = SSL_printnl(not_null(j_47), not_null(k_47));
        t = r_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm s_30;
  s_30 = t;
  {
    ATerm q_47 = NULL,s_47 = NULL;
    ATerm t_30;
    t_30 = t;
    {
      ATerm r_47 = NULL;
      t = f_72(t);
      {
        r_47 = t;
        if(((q_47 != NULL) && (q_47 != r_47)))
          _fail(r_47);
        else
          q_47 = r_47;
      }
    }
    t = t_30;
    {
      ATerm t_47 = NULL;
      t_47 = t;
      if(((s_47 != NULL) && (s_47 != t_47)))
        _fail(t_47);
      else
        s_47 = t_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_47)), not_null(q_47)));
        t = printnl_0(t);
      }
    }
  }
  t = s_30;
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm w_47 (ATerm t)
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = Cons_2(t, h_61, w_47);
      }
    return(t);
  }
  t = w_47(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  t = SSL_is_string(not_null(y_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm a_31 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 (ATerm t)
            {
              ATerm c_31 = t;
              int d_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(d_31);
                }
              else
                {
                  t = c_31;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, r_8);
            LocalPopChoice(b_31);
          }
        else
          {
            t = a_31;
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
                          ATerm e_31 = t;
                          int f_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_31);
                            }
                          else
                            {
                              t = e_31;
                              {
                                ATerm s_8 (ATerm t)
                                {
                                  t = term_g_31;
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
                      if(match_cons(j_48, sym_Prefix_2))
                        {
                          k_48 = ATgetArgument(j_48, 0);
                          l_48 = ATgetArgument(j_48, 1);
                          {
                            ATerm q_48 = NULL,s_48 = NULL;
                            ATerm h_31;
                            h_31 = t;
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
                            t = h_31;
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
    t = (ATerm) ATmakeAppl(sym__2, term_b_18, not_null(b_49));
    {
      t = table_get_0(t);
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm k_31;
              k_31 = t;
              {
                ATerm d_49 = NULL;
                ATerm e_49 = NULL;
                e_49 = t;
                if(((d_49 != NULL) && (d_49 != e_49)))
                  _fail(e_49);
                else
                  d_49 = e_49;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_18, not_null(b_49), not_null(d_49));
                  t = table_put_0(t);
                }
              }
              t = k_31;
            }
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm l_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_59(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = l_31;
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
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  u_49 = t;
  t_49 :
  if(match_cons(u_49, sym__3))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      x_49 = ATgetArgument(u_49, 2);
      {
        ATerm p_31;
        p_31 = t;
        {
          ATerm c_50 = NULL;
          ATerm d_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_49), not_null(w_49));
          {
            ATerm q_31 = t;
            int r_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_31);
              }
            else
              {
                t = q_31;
                t = (ATerm) ATempty;
              }
            {
              d_50 = t;
              if(((c_50 != NULL) && (c_50 != d_50)))
                _fail(d_50);
              else
                c_50 = d_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_49), not_null(w_49), (ATerm) ATinsert(CheckATermList(not_null(c_50)), not_null(x_49)));
            t = table_put_0(t);
          }
        }
        t = p_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm h_50 = NULL;
  ATerm i_50 = NULL;
  t = term_e_11;
  {
    t = q_77(t);
    {
      i_50 = t;
      if(((h_50 != NULL) && (h_50 != i_50)))
        _fail(i_50);
      else
        h_50 = i_50;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, not_null(h_50));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_string(o_50, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_50) == AT_LIST) && !(ATisEmpty(o_50))))
        {
          p_50 = ATgetFirst((ATermList) o_50);
          q_50 = (ATerm) ATgetNext((ATermList) o_50);
          {
            ATerm t_50 = NULL;
            ATerm s_31;
            s_31 = t;
            {
              t = not_null(p_50);
              t = a_0(t);
            }
            t = s_31;
            {
              ATerm u_50 = NULL;
              t = term_e_11;
              {
                t = d_0(t);
                {
                  u_50 = t;
                  if(((t_50 != NULL) && (t_50 != u_50)))
                    _fail(u_50);
                  else
                    t_50 = u_50;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_50)), not_null(t_50));
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
    ATerm z_50 = NULL;
    z_50 = t;
    y_50 :
    if(!(match_string(z_50, "--help")))
      {
        if(!(match_string(z_50, "-h")))
          {
            if(!(match_string(z_50, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = term_x_31;
    {
      t = set_config_0(t);
      t = term_b_32;
    }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_c_32;
    return(t);
  }
  t = Option_3(t, t_8, u_8, x_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  b_51 :
  if(((ATgetType(c_51) == AT_LIST) && !(ATisEmpty(c_51))))
    {
      d_51 = ATgetFirst((ATermList) c_51);
      e_51 = (ATerm) ATgetNext((ATermList) c_51);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_51)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_51)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm))
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  n_51 :
  if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
    {
      p_51 = ATgetFirst((ATermList) o_51);
      q_51 = (ATerm) ATgetNext((ATermList) o_51);
      {
        ATerm u_51 = NULL,w_51 = NULL;
        ATerm v_51 = NULL;
        t = SSLgetAnnotations(not_null(o_51));
        {
          v_51 = t;
          if(((u_51 != NULL) && (u_51 != v_51)))
            _fail(v_51);
          else
            u_51 = v_51;
        }
        {
          t = not_null(p_51);
          {
            ATerm y_51 = NULL;
            t = m_49(t);
            {
              w_51 = t;
              {
                t = not_null(q_51);
                {
                  ATerm a_52 = NULL;
                  t = n_49(t);
                  {
                    y_51 = t;
                    {
                      ATerm b_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_51)), not_null(w_51)), not_null(u_51));
                      {
                        b_52 = t;
                        if(((a_52 != NULL) && (a_52 != b_52)))
                          _fail(b_52);
                        else
                          a_52 = b_52;
                      }
                      t = not_null(a_52);
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
  ATerm l_52 = NULL;
  l_52 = t;
  k_52 :
  if(((ATgetType(l_52) == AT_LIST) && ATisEmpty(l_52)))
    {
      {
        ATerm n_52 = NULL,p_52 = NULL;
        ATerm d_32;
        d_32 = t;
        {
          ATerm o_52 = NULL;
          t = SSLgetAnnotations(not_null(l_52));
          {
            o_52 = t;
            if(((n_52 != NULL) && (n_52 != o_52)))
              _fail(o_52);
            else
              n_52 = o_52;
          }
        }
        t = d_32;
        {
          ATerm q_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_52));
          {
            q_52 = t;
            if(((p_52 != NULL) && (p_52 != q_52)))
              _fail(q_52);
            else
              p_52 = q_52;
          }
          t = not_null(p_52);
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
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym__2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_18, not_null(x_52), not_null(y_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm e_32;
  e_32 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_32;
        t = o_77(t);
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        {
        }
      }
  }
  t = e_32;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm g_53 = NULL;
      ATerm i_32;
      i_32 = t;
      {
        ATerm e_53 = NULL;
        ATerm f_53 = NULL;
        f_53 = t;
        if(((e_53 != NULL) && (e_53 != f_53)))
          _fail(f_53);
        else
          e_53 = f_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_28, not_null(e_53));
          t = set_config_0(t);
        }
      }
      t = i_32;
      {
        ATerm h_53 = NULL;
        h_53 = t;
        if(((g_53 != NULL) && (g_53 != h_53)))
          _fail(h_53);
        else
          g_53 = h_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_53));
      }
      return(t);
    }
    ATerm d_9 (ATerm t)
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_32);
            }
          else
            {
              t = l_32;
              {
                t = o_77(t);
                t = Cons_2(t, _id, d_9);
              }
            }
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
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
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  ATerm n_32;
  n_32 = t;
  {
    ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
    q_53 = t;
    m_53 :
    if(match_cons(q_53, sym__3))
      {
        r_53 = ATgetArgument(q_53, 0);
        s_53 = ATgetArgument(q_53, 1);
        t_53 = ATgetArgument(q_53, 2);
        {
          if(((n_53 != NULL) && (n_53 != r_53)))
            _fail(r_53);
          else
            n_53 = r_53;
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
              t = SSL_table_put(not_null(n_53), not_null(o_53), not_null(p_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm w_53 = NULL;
  ATerm o_32;
  o_32 = t;
  {
    t = term_p_32;
    t = table_put_0(t);
  }
  t = o_32;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm s_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_77(t);
          LocalPopChoice(u_32);
        }
      else
        {
          t = s_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_9);
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_32;
          x_32 = t;
          {
            ATerm a_33 = t;
            int b_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_31;
                t = get_config_0(t);
                LocalPopChoice(b_33);
              }
            else
              {
                t = a_33;
                t = fetch_1(t, Help_0);
              }
          }
          t = x_32;
          {
            t = system_usage_0(t);
            {
              t = term_l_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm c_33 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm k_9 (ATerm t)
                  {
                    ATerm x_53 = NULL;
                    x_53 = t;
                    if(((w_53 != NULL) && (w_53 != x_53)))
                      _fail(x_53);
                    else
                      w_53 = x_53;
                    return(t);
                  }
                  t = Undefined_1(t, k_9);
                  return(t);
                }
                t = fetch_1(t, f_9);
                {
                  ATerm l_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_53)), term_h_33);
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
                LocalPopChoice(g_33);
              }
            else
              {
                t = c_33;
                {
                }
              }
          }
        }
      {
        ATerm i_33;
        i_33 = t;
        {
          t = term_z_29;
          t = table_destroy_0(t);
        }
        t = i_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  t = parse_options_1(t, k_75);
  {
    t = store_options_0(t);
    {
      t = m_75(t);
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_75);
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm m_33 = t;
              int n_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_75(t);
                  t = report_success_0(t);
                  LocalPopChoice(n_33);
                }
              else
                {
                  t = m_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  t = option_wrap_4(t, o_75, default_usage_0, _id, p_75);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  ATerm m_9 (ATerm t)
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_70(t);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = xtc_io_1(t, y_70);
    return(t);
  }
  t = option_wrap_2(t, m_9, n_9);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  t = xtc_io_wrap_2(t, a_71, b_71);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm a_34;
    a_34 = t;
    {
      ATerm a_54 = NULL;
      ATerm b_54 = NULL;
      t = term_b_34;
      {
        t = xtc_find_path_0(t);
        {
          b_54 = t;
          if(((a_54 != NULL) && (a_54 != b_54)))
            _fail(b_54);
          else
            a_54 = b_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_54)), term_d_34));
        t = extend_config_0(t);
      }
    }
    t = a_34;
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
