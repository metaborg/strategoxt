#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
#include "xtc-conf.h"
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
Symbol sym_CUT_0;
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_j_34;
ATerm term_g_34;
ATerm term_p_33;
ATerm term_w_32;
ATerm term_m_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_g_31;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_b_26;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_f_24;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_r_19;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_w_18;
ATerm term_j_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_d_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_c_13;
ATerm term_g_12;
ATerm term_r_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_j_10;
ATerm term_x_9;
ATerm term_s_9;
void init_constant_terms (void)
{
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Syntax_1, term_e_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_g_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_g_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_j_10);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_22);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_b_11);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_b_11);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_b_11);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_r_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_b_11);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__3, term_q_29, term_r_29, (ATerm) ATempty);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm h_69 (ATerm));
ATerm assert_1 (ATerm, ATerm z_69 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_70 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_58 (ATerm), ATerm y_58 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm n_71 (ATerm));
ATerm stderr_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm j_68 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm r_54 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm i_69 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm k_53 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_54 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm f_60 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm l_71 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm o_48 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm t_54 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm s_54 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm u_54 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm union_1 (ATerm, ATerm p_65 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm d_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm parse_stratego_options_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_69 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_69 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm b_69 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm c_69 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_66 (ATerm), ATerm h_66 (ATerm));
ATerm crush_2 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_54 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_75 (ATerm));
ATerm Program_1 (ATerm, ATerm b_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm q_46 (ATerm), ATerm r_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_70 (ATerm));
ATerm map_1 (ATerm, ATerm u_59 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_47 (ATerm), ATerm a_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
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
  ATerm l_1 = NULL,z_1 = NULL,b_2 = NULL;
  l_1 = t;
  j_1 :
  if(match_cons(l_1, sym__2))
    {
      z_1 = ATgetArgument(l_1, 0);
      b_2 = ATgetArgument(l_1, 1);
      {
        ATerm d_6 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(z_1), not_null(b_2));
            LocalPopChoice(r_9);
          }
        else
          {
            t = d_6;
            t = SSL_subtr(not_null(z_1), not_null(b_2));
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
  ATerm d_3 = NULL;
  ATerm e_3 = NULL,h_3 = NULL;
  ATerm f_3 = NULL;
  t = term_s_9;
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        t = term_x_9;
      }
    {
      f_3 = t;
      if(((e_3 != NULL) && (e_3 != f_3)))
        _fail(f_3);
      else
        e_3 = f_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), term_x_9);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          h_3 = t;
          if(((d_3 != NULL) && (d_3 != h_3)))
            _fail(h_3);
          else
            d_3 = h_3;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_3)), term_s_9);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      t = SSL_WriteToBinaryFile(not_null(o_3), not_null(p_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm v_3 = NULL;
  ATerm x_3 = NULL;
  v_3 = t;
  {
    ATerm y_3 = NULL;
    t = xtc_new_file_0(t);
    {
      y_3 = t;
      {
        if(((x_3 != NULL) && (x_3 != y_3)))
          _fail(y_3);
        else
          x_3 = y_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(v_3));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_3));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, q_69, r_69);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
  d_4 = t;
  c_4 :
  if(match_cons(d_4, sym__2))
    {
      e_4 = ATgetArgument(d_4, 0);
      f_4 = ATgetArgument(d_4, 1);
      t = SSL_call(not_null(e_4), not_null(f_4));
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
ATerm xtc_command_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm l_4 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm m_4 = NULL;
    t = h_69(t);
    {
      t = xtc_find_0(t);
      {
        m_4 = t;
        if(((l_4 != NULL) && (l_4 != m_4)))
          _fail(m_4);
        else
          l_4 = m_4;
      }
    }
  }
  t = y_9;
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm n_4 = NULL;
      ATerm o_4 = NULL;
      o_4 = t;
      if(((n_4 != NULL) && (n_4 != o_4)))
        _fail(o_4);
      else
        n_4 = o_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), not_null(n_4));
        t = call_0(t);
      }
    }
    t = f_10;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(match_cons(w_4, sym__2))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      {
        ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
        ATerm g_10;
        g_10 = t;
        {
          ATerm e_5 = NULL;
          ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
          t = z_69(t);
          {
            e_5 = t;
            {
              if(((b_5 != NULL) && (b_5 != e_5)))
                _fail(e_5);
              else
                b_5 = e_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_5), not_null(x_4), not_null(y_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_10 = t;
                    int i_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), term_j_10);
                        t = table_get_0(t);
                        LocalPopChoice(i_10);
                      }
                    else
                      {
                        t = h_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_5 = t;
                      u_4 :
                      if(((ATgetType(f_5) == AT_LIST) && !(ATisEmpty(f_5))))
                        {
                          g_5 = ATgetFirst((ATermList) f_5);
                          h_5 = (ATerm) ATgetNext((ATermList) f_5);
                          {
                            if(((c_5 != NULL) && (c_5 != g_5)))
                              _fail(g_5);
                            else
                              c_5 = g_5;
                            {
                              if(((d_5 != NULL) && (d_5 != h_5)))
                                _fail(h_5);
                              else
                                d_5 = h_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_5), term_j_10, (ATerm) ATinsert(CheckATermList(not_null(d_5)), (ATerm) ATinsert(CheckATermList(not_null(c_5)), not_null(x_4))));
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
        t = g_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm o_10;
  o_10 = t;
  {
    t = n_70(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_p_10;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = o_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
      r_5 = t;
      m_5 :
      if(match_cons(r_5, sym__2))
        {
          s_5 = ATgetArgument(r_5, 0);
          t_5 = ATgetArgument(r_5, 1);
          {
            if(((q_5 != NULL) && (q_5 != s_5)))
              _fail(s_5);
            else
              q_5 = s_5;
            if(((p_5 != NULL) && (p_5 != t_5)))
              _fail(t_5);
            else
              p_5 = t_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_10);
      t = SSL_open_file(not_null(q_5), not_null(p_5));
    }
  else
    {
      t = s_10;
      {
        ATerm u_5 = NULL;
        ATerm v_5 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_u_10;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          u_5 = t;
          {
            if(((q_5 != NULL) && (q_5 != u_5)))
              _fail(u_5);
            else
              q_5 = u_5;
            {
              ATerm v_10;
              v_10 = t;
              {
                ATerm w_5 = NULL;
                t = term_a_11;
                {
                  w_5 = t;
                  if(((v_5 != NULL) && (v_5 != w_5)))
                    _fail(w_5);
                  else
                    v_5 = w_5;
                }
              }
              t = v_10;
              t = SSL_open_file(not_null(q_5), not_null(v_5));
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
  ATerm b_6 = NULL;
  ATerm c_6 = NULL;
  t = term_b_11;
  {
    t = new_0(t);
    {
      c_6 = t;
      if(((b_6 != NULL) && (b_6 != c_6)))
        _fail(c_6);
      else
        b_6 = c_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), term_c_11);
    {
      t = conc_strings_0(t);
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
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
  ATerm g_6 = NULL;
  t = new_file_0(t);
  {
    g_6 = t;
    {
      ATerm i_11;
      i_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_a_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_b_11);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = assert_1(t, f_0);
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
  ATerm q_6 = NULL,r_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym_stdin_0))
    {
      ATerm s_6 = NULL;
      ATerm t_6 = NULL;
      ATerm u_6 = NULL;
      t = xtc_new_file_0(t);
      {
        t_6 = t;
        {
          if(((s_6 != NULL) && (s_6 != t_6)))
            _fail(t_6);
          else
            s_6 = t_6;
          {
            ATerm v_6 = NULL;
            t = p_0(t);
            {
              v_6 = t;
              if(((u_6 != NULL) && (u_6 != v_6)))
                _fail(v_6);
              else
                u_6 = v_6;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_6)), term_k_11));
              {
                ATerm n_11 = t;
                int o_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(o_11);
                  }
                else
                  {
                    t = n_11;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, o_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_6));
    }
  else
    {
      if(match_cons(q_6, sym_FILE_1))
        {
          r_6 = ATgetArgument(q_6, 0);
          {
            ATerm x_6 = NULL;
            ATerm y_6 = NULL;
            t = not_null(r_6);
            {
              ATerm z_6 = NULL;
              t = xtc_new_file_0(t);
              {
                y_6 = t;
                {
                  if(((x_6 != NULL) && (x_6 != y_6)))
                    _fail(y_6);
                  else
                    x_6 = y_6;
                  {
                    ATerm a_7 = NULL;
                    t = p_0(t);
                    {
                      a_7 = t;
                      if(((z_6 != NULL) && (z_6 != a_7)))
                        _fail(a_7);
                      else
                        z_6 = a_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_6)), term_k_11), not_null(r_6)), term_r_11));
                      {
                        ATerm s_11 = t;
                        int t_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(t_11);
                          }
                        else
                          {
                            t = s_11;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, o_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_6));
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
  ATerm l_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym_stdin_0))
    {
      ATerm n_7 = NULL,p_7 = NULL;
      ATerm u_11;
      u_11 = t;
      {
        ATerm o_7 = NULL;
        t = SSLgetAnnotations(not_null(l_7));
        {
          o_7 = t;
          if(((n_7 != NULL) && (n_7 != o_7)))
            _fail(o_7);
          else
            n_7 = o_7;
        }
      }
      t = u_11;
      {
        ATerm q_7 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(n_7));
        {
          q_7 = t;
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
        }
        t = not_null(p_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm v_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          t = stdin_0(t);
        }
      LocalPopChoice(b_12);
      t = xtc_transform_file_2(t, j_69, k_69);
    }
  else
    {
      t = v_11;
      t = xtc_transform_term_2(t, j_69, k_69);
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_7)), term_g_12), not_null(x_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_58 (ATerm), ATerm y_58 (ATerm))
{
  ATerm e_8 = NULL,g_8 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm f_8 = NULL;
    t = x_58(t);
    {
      f_8 = t;
      if(((e_8 != NULL) && (e_8 != f_8)))
        _fail(f_8);
      else
        e_8 = f_8;
    }
  }
  t = h_12;
  {
    ATerm h_8 = NULL;
    t = y_58(t);
    {
      h_8 = t;
      if(((g_8 != NULL) && (g_8 != h_8)))
        _fail(h_8);
      else
        g_8 = h_8;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(g_8));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm n_71 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_b_11;
      t = n_71(t);
      return(t);
    }
    t = split_2(t, _id, q_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_stderr_0))
    {
      ATerm q_8 = NULL,s_8 = NULL;
      ATerm i_12;
      i_12 = t;
      {
        ATerm r_8 = NULL;
        t = SSLgetAnnotations(not_null(o_8));
        {
          r_8 = t;
          if(((q_8 != NULL) && (q_8 != r_8)))
            _fail(r_8);
          else
            q_8 = r_8;
        }
      }
      t = i_12;
      {
        ATerm t_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_8));
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
        t = not_null(s_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_FILE_1))
    {
      d_9 = ATgetArgument(c_9, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL;
            ATerm g_9 = NULL;
            t = n_0(t);
            {
              g_9 = t;
              {
                if(((f_9 != NULL) && (f_9 != g_9)))
                  _fail(g_9);
                else
                  f_9 = g_9;
                {
                  ATerm o_12 = t;
                  int q_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(q_12);
                    }
                  else
                    {
                      t = o_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(f_9));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_9));
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm i_9 = NULL;
              ATerm j_9 = NULL;
              t = n_0(t);
              {
                j_9 = t;
                {
                  if(((i_9 != NULL) && (i_9 != j_9)))
                    _fail(j_9);
                  else
                    i_9 = j_9;
                  {
                    ATerm u_12 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm v_12 = t;
                        int w_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(w_12);
                          }
                        else
                          {
                            t = v_12;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = u_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(i_9));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_9));
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
ATerm if_keep1_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_12;
      z_12 = t;
      {
        ATerm p_9 = NULL;
        ATerm q_9 = NULL;
        t = term_c_13;
        {
          t = get_config_0(t);
          {
            q_9 = t;
            if(((p_9 != NULL) && (p_9 != q_9)))
              _fail(q_9);
            else
              p_9 = q_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), term_x_9);
          t = geq_0(t);
        }
      }
      t = z_12;
      t = j_68(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm g_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13;
      m_13 = t;
      {
        ATerm t_9 = NULL;
        ATerm u_9 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            u_9 = t;
            if(((t_9 != NULL) && (t_9 != u_9)))
              _fail(u_9);
            else
              t_9 = u_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), term_p_13);
          t = geq_0(t);
        }
      }
      t = m_13;
      t = r_54(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = g_13;
      {
      }
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, i_69, r_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm z_9 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = term_q_13;
      return(t);
    }
    t = debug_1(t, t_0);
    return(t);
  }
  t = if_verbose6_1(t, s_0);
  {
    ATerm r_13;
    r_13 = t;
    {
      ATerm a_10 = NULL;
      ATerm u_0 (ATerm t)
      {
        t = term_s_13;
        return(t);
      }
      t = guarantee_extension_1(t, u_0);
      {
        a_10 = t;
        if(((z_9 != NULL) && (z_9 != a_10)))
          _fail(a_10);
        else
          z_9 = a_10;
      }
    }
    t = r_13;
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(z_9);
          {
            ATerm v_0 (ATerm t)
            {
              t = term_a_14;
              return(t);
            }
            t = find_in_includes_1(t, v_0);
          }
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm b_10 = NULL;
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_b_14;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose2_1(t, w_0);
            {
              ATerm c_10 = NULL;
              ATerm y_0 (ATerm t)
              {
                t = term_f_14;
                return(t);
              }
              t = guarantee_extension_1(t, y_0);
              {
                c_10 = t;
                if(((b_10 != NULL) && (b_10 != c_10)))
                  _fail(c_10);
                else
                  b_10 = c_10;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_10));
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_g_14;
                    return(t);
                  }
                  ATerm a_1 (ATerm t)
                  {
                    t = term_k_14;
                    {
                      t = get_config_0(t);
                      {
                        ATerm b_1 (ATerm t)
                        {
                          ATerm d_10 = NULL;
                          ATerm e_10 = NULL;
                          e_10 = t;
                          if(((d_10 != NULL) && (d_10 != e_10)))
                            _fail(e_10);
                          else
                            d_10 = e_10;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), term_k_14);
                          return(t);
                        }
                        t = map_1(t, b_1);
                        t = concat_0(t);
                      }
                    }
                    return(t);
                  }
                  t = xtc_transform_2(t, z_0, a_1);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      t = term_n_14;
                      return(t);
                    }
                    t = xtc_transform_1(t, c_1);
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(z_9);
                        return(t);
                      }
                      t = rename_to_1(t, d_1);
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
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym__2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      {
        t = not_null(n_10);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm q_10 = NULL;
            ATerm r_10 = NULL;
            r_10 = t;
            if(((q_10 != NULL) && (q_10 != r_10)))
              _fail(r_10);
            else
              q_10 = r_10;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_10)), term_o_14), not_null(q_10));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, e_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_includes_1 (ATerm t, ATerm k_53 (ATerm))
{
  ATerm w_10 = NULL,y_10 = NULL;
  ATerm p_14;
  p_14 = t;
  {
    ATerm x_10 = NULL;
    x_10 = t;
    if(((w_10 != NULL) && (w_10 != x_10)))
      _fail(x_10);
    else
      w_10 = x_10;
  }
  t = p_14;
  {
    ATerm z_10 = NULL;
    t = term_k_14;
    {
      t = get_config_0(t);
      {
        z_10 = t;
        if(((y_10 != NULL) && (y_10 != z_10)))
          _fail(z_10);
        else
          y_10 = z_10;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), not_null(y_10));
      {
        t = find_in_path_0(t);
        {
          ATerm f_1 (ATerm t)
          {
            t = debug_1(t, k_53);
            return(t);
          }
          t = if_verbose2_1(t, f_1);
        }
      }
    }
  }
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm g_11 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      t = term_q_14;
      return(t);
    }
    t = debug_1(t, h_1);
    return(t);
  }
  t = if_verbose6_1(t, g_1);
  {
    e_11 = t;
    {
      ATerm r_14;
      r_14 = t;
      {
        ATerm h_11 = NULL;
        ATerm i_1 (ATerm t)
        {
          t = term_s_14;
          return(t);
        }
        t = guarantee_extension_1(t, i_1);
        {
          h_11 = t;
          if(((g_11 != NULL) && (g_11 != h_11)))
            _fail(h_11);
          else
            g_11 = h_11;
        }
      }
      t = r_14;
      {
        ATerm t_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(g_11);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_b_15;
                return(t);
              }
              t = find_in_includes_1(t, k_1);
            }
            LocalPopChoice(a_15);
          }
        else
          {
            t = t_14;
            {
              ATerm m_1 (ATerm t)
              {
                ATerm n_1 (ATerm t)
                {
                  t = term_c_15;
                  return(t);
                }
                t = say_1(t, n_1);
                return(t);
              }
              t = if_verbose2_1(t, m_1);
              {
                t = not_null(e_11);
                {
                  t = get_syntax_definition_0(t);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      t = term_d_15;
                      return(t);
                    }
                    ATerm p_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_11)), term_e_15);
                      return(t);
                    }
                    t = xtc_transform_2(t, o_1, p_1);
                    {
                      ATerm q_1 (ATerm t)
                      {
                        t = not_null(g_11);
                        return(t);
                      }
                      t = copy_to_1(t, q_1);
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
              t = term_b_15;
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
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm f_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15;
      l_15 = t;
      {
        ATerm l_11 = NULL;
        ATerm m_11 = NULL;
        t = term_s_9;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), term_q_15);
          t = geq_0(t);
        }
      }
      t = l_15;
      t = q_54(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = f_15;
      {
      }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm p_11 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm q_11 = NULL;
    t = f_60(t);
    {
      q_11 = t;
      if(((p_11 != NULL) && (p_11 != q_11)))
        _fail(q_11);
      else
        p_11 = q_11;
    }
    return(t);
  }
  t = fetch_1(t, t_1);
  t = not_null(p_11);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym_stdin_0))
    {
      ATerm z_11 = NULL;
      ATerm a_12 = NULL;
      t = term_r_15;
      {
        t = ReadFromFile_0(t);
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
      }
      t = not_null(z_11);
    }
  else
    {
      if(match_cons(x_11, sym_FILE_1))
        {
          y_11 = ATgetArgument(x_11, 0);
          {
            ATerm c_12 = NULL;
            ATerm d_12 = NULL;
            t = not_null(y_11);
            {
              t = ReadFromFile_0(t);
              {
                d_12 = t;
                if(((c_12 != NULL) && (c_12 != d_12)))
                  _fail(d_12);
                else
                  c_12 = d_12;
              }
            }
            t = not_null(c_12);
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
  ATerm m_12 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_s_15;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose6_1(t, u_1);
  {
    ATerm w_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_z_15;
            return(t);
          }
          t = guarantee_extension_1(t, x_1);
          return(t);
        }
        t = FILE_1(t, w_1);
        t = read_from_0(t);
        LocalPopChoice(y_15);
      }
    else
      {
        t = w_15;
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_12 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm a_2 (ATerm t)
                {
                  t = term_c_16;
                  return(t);
                }
                t = guarantee_extension_1(t, a_2);
                return(t);
              }
              t = FILE_1(t, y_1);
              {
                t = read_from_0(t);
                {
                  n_12 = t;
                  {
                    ATerm p_12 = NULL;
                    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
                    t = not_null(n_12);
                    {
                      p_12 = t;
                      {
                        t = SSL_explode_term(not_null(p_12));
                        {
                          r_12 = t;
                          l_12 :
                          if(match_cons(r_12, sym__2))
                            {
                              s_12 = ATgetArgument(r_12, 0);
                              t_12 = ATgetArgument(r_12, 1);
                              if(((m_12 != NULL) && (m_12 != s_12)))
                                _fail(s_12);
                              else
                                m_12 = s_12;
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(m_12))));
                  }
                }
              }
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_g_16));
            }
        }
      }
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_s_15;
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
  ATerm e_13 = NULL,f_13 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_j_16;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose6_1(t, e_2);
  {
    e_13 = t;
    d_13 :
    if(match_cons(e_13, sym_FILE_1))
      {
        f_13 = ATgetArgument(e_13, 0);
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
                      ATerm h_13 = NULL,i_13 = NULL;
                      h_13 = t;
                      b_13 :
                      if(match_cons(h_13, sym_Meta_1))
                        {
                          i_13 = ATgetArgument(h_13, 0);
                          {
                            t = not_null(i_13);
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm k_13 = NULL,l_13 = NULL;
                                k_13 = t;
                                a_13 :
                                if(match_cons(k_13, sym_Syntax_1))
                                  {
                                    l_13 = ATgetArgument(k_13, 0);
                                    t = not_null(l_13);
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
                        ATerm n_13 = NULL;
                        ATerm o_13 = NULL;
                        o_13 = t;
                        if(((n_13 != NULL) && (n_13 != o_13)))
                          _fail(o_13);
                        else
                          n_13 = o_13;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(f_13)), term_q_16), not_null(n_13)), term_p_16);
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
ATerm basename_1 (ATerm t, ATerm l_71 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 (ATerm t)
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, x_13);
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              {
                ATerm b_17 = t;
                int c_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm v_13 = NULL;
                      v_13 = t;
                      t_13 :
                      if(!(match_int(v_13, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, j_2, _id);
                    LocalPopChoice(c_17);
                  }
                else
                  {
                    t = b_17;
                    {
                      ATerm k_2 (ATerm t)
                      {
                        ATerm w_13 = NULL;
                        w_13 = t;
                        u_13 :
                        if(!(match_int(w_13, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, k_2, l_71);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = x_13(t);
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
ATerm FILE_1 (ATerm t, ATerm o_48 (ATerm))
{
  ATerm d_14 = NULL,e_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_FILE_1))
    {
      e_14 = ATgetArgument(d_14, 0);
      {
        ATerm h_14 = NULL,j_14 = NULL;
        ATerm i_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          i_14 = t;
          if(((h_14 != NULL) && (h_14 != i_14)))
            _fail(i_14);
          else
            h_14 = i_14;
        }
        {
          t = not_null(e_14);
          {
            ATerm l_14 = NULL;
            t = o_48(t);
            {
              j_14 = t;
              {
                ATerm m_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(j_14)), not_null(h_14));
                {
                  m_14 = t;
                  if(((l_14 != NULL) && (l_14 != m_14)))
                    _fail(m_14);
                  else
                    l_14 = m_14;
                }
                t = not_null(l_14);
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
  ATerm u_14 = NULL,v_14 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      t = term_d_17;
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
      ATerm x_14 = NULL;
      ATerm n_2 (ATerm t)
      {
        ATerm w_14 = NULL;
        t = basename_1(t, _id);
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        return(t);
      }
      t = FILE_1(t, n_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            x_14 = t;
            if(((u_14 != NULL) && (u_14 != x_14)))
              _fail(x_14);
            else
              u_14 = x_14;
          }
        }
      }
    }
    t = h_17;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_k_17;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm y_14 = NULL;
        ATerm z_14 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm q_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_q_17);
            return(t);
          }
          t = if_verbose3_1(t, q_2);
          {
            z_14 = t;
            if(((y_14 != NULL) && (y_14 != z_14)))
              _fail(z_14);
            else
              y_14 = z_14;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_14)), not_null(u_14)), term_s_17), term_r_17);
        return(t);
      }
      t = xtc_transform_2(t, o_2, p_2);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_t_17;
          return(t);
        }
        t = xtc_transform_2(t, r_2, pass_verbose_0);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(v_14);
              {
                ATerm u_2 (ATerm t)
                {
                  t = term_z_17;
                  return(t);
                }
                t = guarantee_extension_1(t, u_2);
              }
              return(t);
            }
            t = copy_to_1(t, t_2);
            return(t);
          }
          t = if_keep1_1(t, s_2);
          {
            ATerm v_2 (ATerm t)
            {
              t = term_a_18;
              return(t);
            }
            t = xtc_transform_2(t, v_2, pass_verbose_0);
            {
              ATerm w_2 (ATerm t)
              {
                t = term_b_18;
                return(t);
              }
              t = xtc_transform_2(t, w_2, pass_verbose_0);
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
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        ATerm m_15 = NULL;
        ATerm n_15 = NULL,p_15 = NULL;
        ATerm o_15 = NULL;
        t = not_null(i_15);
        {
          ATerm c_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(g_18);
            }
          else
            {
              t = c_18;
              t = (ATerm) ATempty;
            }
          {
            o_15 = t;
            if(((n_15 != NULL) && (n_15 != o_15)))
              _fail(o_15);
            else
              n_15 = o_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(n_15));
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
                t = conc_more_lists_0(t);
              }
            {
              p_15 = t;
              if(((m_15 != NULL) && (m_15 != p_15)))
                _fail(p_15);
              else
                m_15 = p_15;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_18, not_null(i_15), not_null(m_15));
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
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_15 (ATerm t)
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, v_15);
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm u_15 = NULL;
                  u_15 = t;
                  t_15 :
                  if(!(match_int(u_15, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm y_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, x_2, y_2);
              }
            }
          return(t);
        }
        t = v_15(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = SSL_table_keys(not_null(x_15));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_2 (ATerm t)
      {
        ATerm f_16 = NULL;
        ATerm h_16 = NULL;
        f_16 = t;
        {
          ATerm i_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(f_16));
          {
            t = table_get_0(t);
            {
              i_16 = t;
              if(((h_16 != NULL) && (h_16 != i_16)))
                _fail(i_16);
              else
                h_16 = i_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(h_16));
        }
        return(t);
      }
      t = map_1(t, z_2);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18;
      v_18 = t;
      {
        ATerm v_16 = NULL;
        ATerm w_16 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            w_16 = t;
            if(((v_16 != NULL) && (v_16 != w_16)))
              _fail(w_16);
            else
              v_16 = w_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), term_w_18);
          t = geq_0(t);
        }
      }
      t = v_18;
      t = t_54(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_19;
  b_19 = t;
  {
    ATerm z_16 = NULL;
    ATerm a_17 = NULL;
    a_17 = t;
    if(((z_16 != NULL) && (z_16 != a_17)))
      _fail(a_17);
    else
      z_16 = a_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(z_16));
      t = printnl_0(t);
    }
  }
  t = b_19;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm i_17 = NULL,j_17 = NULL;
  g_17 = t;
  {
    ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_17)));
    {
      t = table_get_0(t);
      {
        l_17 = t;
        e_17 :
        if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
          {
            m_17 = ATgetFirst((ATermList) l_17);
            p_17 = (ATerm) ATgetNext((ATermList) l_17);
            f_17 :
            if(match_cons(m_17, sym__2))
              {
                n_17 = ATgetArgument(m_17, 0);
                o_17 = ATgetArgument(m_17, 1);
                {
                  if(((i_17 != NULL) && (i_17 != n_17)))
                    _fail(n_17);
                  else
                    i_17 = n_17;
                  if(((j_17 != NULL) && (j_17 != o_17)))
                    _fail(o_17);
                  else
                    j_17 = o_17;
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
    t = not_null(j_17);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      y_17 = ATgetArgument(w_17, 1);
      {
        ATerm d_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_17)));
        {
          t = table_get_0(t);
          {
            ATerm a_3 (ATerm t)
            {
              ATerm e_18 = NULL,f_18 = NULL,l_18 = NULL;
              e_18 = t;
              u_17 :
              if(match_cons(e_18, sym__2))
                {
                  f_18 = ATgetArgument(e_18, 0);
                  l_18 = ATgetArgument(e_18, 1);
                  {
                    if(((y_17 != NULL) && (y_17 != f_18)))
                      _fail(f_18);
                    else
                      y_17 = f_18;
                    if(((d_18 != NULL) && (d_18 != l_18)))
                      _fail(l_18);
                    else
                      d_18 = l_18;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, a_3);
          }
        }
        t = not_null(d_18);
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
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_19;
      {
        t = table_get_0(t);
        {
          ATerm b_3 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, b_3);
        }
      }
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
ATerm if_verbose4_1 (ATerm t, ATerm s_54 (ATerm))
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_19;
      k_19 = t;
      {
        ATerm p_18 = NULL;
        ATerm q_18 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            q_18 = t;
            if(((p_18 != NULL) && (p_18 != q_18)))
              _fail(q_18);
            else
              p_18 = q_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), term_l_19);
          t = geq_0(t);
        }
      }
      t = k_19;
      t = s_54(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19;
      q_19 = t;
      {
        ATerm t_18 = NULL;
        ATerm u_18 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            u_18 = t;
            if(((t_18 != NULL) && (t_18 != u_18)))
              _fail(u_18);
            else
              t_18 = u_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), term_r_19);
          t = geq_0(t);
        }
      }
      t = q_19;
      t = u_54(t);
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
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
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      if(((z_18 != NULL) && (z_18 != a_19)))
        _fail(a_19);
      else
        z_18 = a_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm p_19 = NULL,x_19 = NULL,y_19 = NULL;
  p_19 = t;
  o_19 :
  if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
    {
      x_19 = ATgetFirst((ATermList) p_19);
      y_19 = (ATerm) ATgetNext((ATermList) p_19);
      {
        t = u_65(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm d_20 = NULL;
            d_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(d_20));
              t = t_65(t);
            }
            return(t);
          }
          t = fetch_1(t, c_3);
        }
        t = not_null(y_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        t = not_null(k_20);
        {
          ATerm p_20 (ATerm t)
          {
            ATerm s_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_20);
                LocalPopChoice(t_19);
              }
            else
              {
                t = s_19;
                {
                  ATerm u_19 = t;
                  int v_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(l_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_65, g_3);
                      t = p_20(t);
                      LocalPopChoice(v_19);
                    }
                  else
                    {
                      t = u_19;
                      t = Cons_2(t, _id, p_20);
                    }
                }
              }
            return(t);
          }
          t = p_20(t);
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__3))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      x_20 = ATgetArgument(u_20, 2);
      {
        ATerm w_19;
        w_19 = t;
        {
          ATerm b_21 = NULL;
          ATerm c_21 = NULL,e_21 = NULL;
          ATerm d_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(w_20));
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = (ATerm) ATempty;
              }
            {
              d_21 = t;
              if(((c_21 != NULL) && (c_21 != d_21)))
                _fail(d_21);
              else
                c_21 = d_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), not_null(x_20));
            {
              t = union_1(t, eq_0);
              {
                e_21 = t;
                if(((b_21 != NULL) && (b_21 != e_21)))
                  _fail(e_21);
                else
                  b_21 = e_21;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_20), not_null(w_20), not_null(b_21));
            t = table_put_0(t);
          }
        }
        t = w_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm r_21 = NULL,t_21 = NULL,u_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym__2))
    {
      t_21 = ATgetArgument(r_21, 0);
      u_21 = ATgetArgument(r_21, 1);
      {
        t = not_null(u_21);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
            x_21 = t;
            p_21 :
            if(match_cons(x_21, sym__2))
              {
                y_21 = ATgetArgument(x_21, 0);
                z_21 = ATgetArgument(x_21, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_21), not_null(y_21), not_null(z_21));
                  t = d_55(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_3);
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
  ATerm k_22 = NULL;
  k_22 = t;
  t = SSL_ReadFromFile(not_null(k_22));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm p_22 = NULL;
  ATerm r_22 = NULL;
  p_22 = t;
  {
    ATerm b_20;
    b_20 = t;
    {
      ATerm s_22 = NULL;
      t = term_c_20;
      {
        s_22 = t;
        if(((r_22 != NULL) && (r_22 != s_22)))
          _fail(s_22);
        else
          r_22 = s_22;
      }
    }
    t = b_20;
    {
      t = SSL_open_file(not_null(p_22), not_null(r_22));
      t = SSL_close_file(not_null(p_22));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm x_22 = NULL;
  ATerm z_22 = NULL;
  x_22 = t;
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_22)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
    {
      ATerm f_20;
      f_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_19, term_g_20, (ATerm) ATinsert(ATempty, not_null(x_22)));
        t = table_put_0(t);
      }
      t = f_20;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            t = term_h_20;
            return(t);
          }
          t = debug_1(t, k_3);
          return(t);
        }
        t = if_verbose4_1(t, j_3);
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = (ATerm) ATempty;
            }
          {
            ATerm l_3 (ATerm t)
            {
              ATerm q_3 (ATerm t)
              {
                t = term_o_20;
                return(t);
              }
              t = say_1(t, q_3);
              return(t);
            }
            t = if_verbose6_1(t, l_3);
            {
              ATerm a_23 = NULL;
              a_23 = t;
              if(((z_22 != NULL) && (z_22 != a_23)))
                _fail(a_23);
              else
                z_22 = a_23;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(z_22));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm s_3 (ATerm t)
                      {
                        t = term_q_20;
                        return(t);
                      }
                      t = say_1(t, s_3);
                      return(t);
                    }
                    t = if_verbose6_1(t, r_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_d_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_22)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = term_o_20;
                              return(t);
                            }
                            t = say_1(t, u_3);
                            return(t);
                          }
                          t = if_verbose4_1(t, t_3);
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
  ATerm e_23 = NULL;
  e_23 = t;
  t = SSL_getenv(not_null(e_23));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_20;
      t = get_config_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_21;
            t = getenv_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm z_3 (ATerm t)
    {
      t = term_g_21;
      return(t);
    }
    t = debug_1(t, z_3);
    return(t);
  }
  t = if_verbose5_1(t, w_3);
  {
    ATerm h_21;
    h_21 = t;
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_21;
          t = table_get_0(t);
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = h_21;
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = term_l_21;
          return(t);
        }
        t = debug_1(t, b_4);
        return(t);
      }
      t = if_verbose5_1(t, a_4);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm h_4 (ATerm t)
        {
          t = term_o_21;
          return(t);
        }
        t = debug_1(t, h_4);
        return(t);
      }
      t = if_verbose5_1(t, g_4);
      {
        t = xtc_load_0(t);
        {
          ATerm s_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(v_21);
            }
          else
            {
              t = s_21;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm i_4 (ATerm t)
            {
              ATerm j_4 (ATerm t)
              {
                t = term_o_21;
                return(t);
              }
              t = debug_1(t, j_4);
              return(t);
            }
            t = if_verbose5_1(t, i_4);
          }
        }
      }
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm i_23 = NULL;
        ATerm j_23 = NULL;
        j_23 = t;
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_22), not_null(i_23)), term_w_21);
          {
            t = error_0(t);
            {
              ATerm k_4 (ATerm t)
              {
                t = term_d_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm p_4 (ATerm t)
                    {
                      t = term_b_22;
                      return(t);
                    }
                    t = debug_1(t, p_4);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, k_4);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm parse_stratego_options_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm q_23 = NULL;
        q_23 = t;
        l_23 :
        if(!(match_string(q_23, "-I")))
          {
            if(!(match_string(q_23, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        ATerm e_22;
        e_22 = t;
        {
          ATerm r_23 = NULL;
          ATerm s_23 = NULL;
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_14, (ATerm) ATinsert(ATempty, not_null(r_23)));
            t = extend_config_0(t);
          }
        }
        t = e_22;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_f_22;
        return(t);
      }
      t = ArgOption_3(t, q_4, r_4, s_4);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm t_23 = NULL;
              t_23 = t;
              n_23 :
              if(!(match_string(t_23, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm i_22;
              i_22 = t;
              {
                ATerm u_23 = NULL;
                ATerm v_23 = NULL;
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(u_23));
                  t = set_config_0(t);
                }
              }
              t = i_22;
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_j_22;
              return(t);
            }
            t = ArgOption_3(t, t_4, z_4, a_5);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm i_5 (ATerm t)
              {
                ATerm w_23 = NULL;
                w_23 = t;
                p_23 :
                if(!(match_string(w_23, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                ATerm l_22;
                l_22 = t;
                {
                  t = term_n_22;
                  t = set_config_0(t);
                }
                t = l_22;
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_o_22;
                return(t);
              }
              t = Option_3(t, i_5, j_5, k_5);
            }
          }
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      t = SSL_rename(not_null(c_24), not_null(d_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym_stdout_0))
    {
      ATerm n_24 = NULL,p_24 = NULL;
      ATerm q_22;
      q_22 = t;
      {
        ATerm o_24 = NULL;
        t = SSLgetAnnotations(not_null(l_24));
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
      }
      t = q_22;
      {
        ATerm q_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(n_24));
        {
          q_24 = t;
          if(((p_24 != NULL) && (p_24 != q_24)))
            _fail(q_24);
          else
            p_24 = q_24;
        }
        t = not_null(p_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym__2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      t = SSL_copy(not_null(x_24), not_null(y_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_FILE_1))
    {
      j_25 = ATgetArgument(i_25, 0);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = NULL;
            t = m_0(t);
            {
              l_25 = t;
              f_25 :
              if(match_cons(l_25, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), term_v_22);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(j_25);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_v_22;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm n_25 = NULL;
              ATerm o_25 = NULL;
              t = m_0(t);
              {
                o_25 = t;
                {
                  if(((n_25 != NULL) && (n_25 != o_25)))
                    _fail(o_25);
                  else
                    n_25 = o_25;
                  {
                    ATerm w_22 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = w_22;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_25), not_null(n_25));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_25));
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
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
    {
      w_25 = ATgetFirst((ATermList) v_25);
      x_25 = (ATerm) ATgetNext((ATermList) v_25);
      t = not_null(x_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      {
        ATerm y_22;
        y_22 = t;
        {
          ATerm j_26 = NULL;
          ATerm k_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(g_26));
          {
            ATerm b_23 = t;
            int c_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_23);
              }
            else
              {
                t = b_23;
                t = (ATerm) ATempty;
              }
            {
              k_26 = t;
              if(((j_26 != NULL) && (j_26 != k_26)))
                _fail(k_26);
              else
                j_26 = k_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_26), not_null(g_26), not_null(j_26));
            t = table_put_0(t);
          }
        }
        t = y_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm v_26 = NULL;
    ATerm y_26 = NULL,z_26 = NULL,d_27 = NULL;
    t = w_69(t);
    {
      v_26 = t;
      {
        if(((u_26 != NULL) && (u_26 != v_26)))
          _fail(v_26);
        else
          u_26 = v_26;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), term_j_10);
              t = table_get_0(t);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            y_26 = t;
            r_26 :
            if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
              {
                z_26 = ATgetFirst((ATermList) y_26);
                d_27 = (ATerm) ATgetNext((ATermList) y_26);
                {
                  if(((t_26 != NULL) && (t_26 != z_26)))
                    _fail(z_26);
                  else
                    t_26 = z_26;
                  {
                    if(((s_26 != NULL) && (s_26 != d_27)))
                      _fail(d_27);
                    else
                      s_26 = d_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_26), term_j_10, not_null(s_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_26);
                          {
                            ATerm l_5 (ATerm t)
                            {
                              ATerm e_27 = NULL;
                              e_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(e_27));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_5);
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
  t = d_23;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = SSL_remove(not_null(k_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm h_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_58(t);
      t = w_58(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = h_23;
      {
        t = w_58(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm p_27 = NULL;
  ATerm m_23;
  m_23 = t;
  {
    ATerm q_27 = NULL;
    ATerm r_27 = NULL;
    t = v_69(t);
    {
      q_27 = t;
      {
        if(((p_27 != NULL) && (p_27 != q_27)))
          _fail(q_27);
        else
          p_27 = q_27;
        {
          ATerm u_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_j_10);
          {
            ATerm o_23 = t;
            int x_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_23);
              }
            else
              {
                t = o_23;
                t = (ATerm) ATempty;
              }
            {
              u_27 = t;
              if(((r_27 != NULL) && (r_27 != u_27)))
                _fail(u_27);
              else
                r_27 = u_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_27), term_j_10, (ATerm) ATinsert(CheckATermList(not_null(r_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_23;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL;
  ATerm n_5 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = begin_scope_1(t, n_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm y_23;
      y_23 = t;
      {
        ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
        ATerm z_23 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_24;
            t = table_get_0(t);
            LocalPopChoice(e_24);
          }
        else
          {
            t = z_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_28 = t;
          y_27 :
          if(((ATgetType(b_28) == AT_LIST) && !(ATisEmpty(b_28))))
            {
              c_28 = ATgetFirst((ATermList) b_28);
              d_28 = (ATerm) ATgetNext((ATermList) b_28);
              {
                if(((a_28 != NULL) && (a_28 != c_28)))
                  _fail(c_28);
                else
                  a_28 = c_28;
                {
                  if(((z_27 != NULL) && (z_27 != d_28)))
                    _fail(d_28);
                  else
                    z_27 = d_28;
                  {
                    t = not_null(a_28);
                    {
                      ATerm x_5 (ATerm t)
                      {
                        ATerm g_24 = t;
                        int h_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(h_24);
                          }
                        else
                          {
                            t = g_24;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, x_5);
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
      t = y_23;
      {
        ATerm y_5 (ATerm t)
        {
          t = term_j_11;
          return(t);
        }
        t = end_scope_1(t, y_5);
      }
      return(t);
    }
    t = restore_always_2(t, b_69, o_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL;
        ATerm h_28 = NULL;
        t = term_r_11;
        {
          t = get_config_0(t);
          {
            h_28 = t;
            if(((g_28 != NULL) && (g_28 != h_28)))
              _fail(h_28);
            else
              g_28 = h_28;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_28));
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = term_r_15;
      }
    {
      t = c_69(t);
      {
        ATerm a_6 (ATerm t)
        {
          ATerm m_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_11;
              t = get_config_0(t);
              LocalPopChoice(r_24);
            }
          else
            {
              t = m_24;
              t = term_v_22;
            }
          return(t);
        }
        t = rename_to_1(t, a_6);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, z_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  t = SSL_string_to_int(not_null(k_28));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  s_28 = t;
  q_28 :
  if(match_string(s_28, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_28) == AT_LIST) && !(ATisEmpty(s_28))))
        {
          t_28 = ATgetFirst((ATermList) s_28);
          u_28 = (ATerm) ATgetNext((ATermList) s_28);
          r_28 :
          if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
            {
              v_28 = ATgetFirst((ATermList) u_28);
              w_28 = (ATerm) ATgetNext((ATermList) u_28);
              {
                ATerm a_29 = NULL;
                ATerm s_24;
                s_24 = t;
                {
                  t = not_null(t_28);
                  t = j_0(t);
                }
                t = s_24;
                {
                  ATerm b_29 = NULL;
                  t = not_null(v_28);
                  {
                    t = k_0(t);
                    {
                      b_29 = t;
                      if(((a_29 != NULL) && (a_29 != b_29)))
                        _fail(b_29);
                      else
                        a_29 = b_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_28)), not_null(a_29));
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
ATerm io_options_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 (ATerm t)
      {
        ATerm j_30 = NULL;
        j_30 = t;
        f_29 :
        if(!(match_string(j_30, "-i")))
          {
            if(!(match_string(j_30, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        ATerm z_30 = NULL;
        ATerm z_24;
        z_24 = t;
        {
          ATerm w_30 = NULL;
          ATerm x_30 = NULL;
          x_30 = t;
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(w_30));
            t = set_config_0(t);
          }
        }
        t = z_24;
        {
          ATerm d_31 = NULL;
          d_31 = t;
          if(((z_30 != NULL) && (z_30 != d_31)))
            _fail(d_31);
          else
            z_30 = d_31;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_30));
        }
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        t = term_a_25;
        return(t);
      }
      t = ArgOption_3(t, e_6, f_6, h_6);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 (ATerm t)
            {
              ATerm e_31 = NULL;
              e_31 = t;
              k_29 :
              if(!(match_string(e_31, "-o")))
                {
                  if(!(match_string(e_31, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              ATerm u_31 = NULL;
              ATerm d_25;
              d_25 = t;
              {
                ATerm f_31 = NULL;
                ATerm t_31 = NULL;
                t_31 = t;
                if(((f_31 != NULL) && (f_31 != t_31)))
                  _fail(t_31);
                else
                  f_31 = t_31;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(f_31));
                  t = set_config_0(t);
                }
              }
              t = d_25;
              {
                ATerm v_31 = NULL;
                v_31 = t;
                if(((u_31 != NULL) && (u_31 != v_31)))
                  _fail(v_31);
                else
                  u_31 = v_31;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_31));
              }
              return(t);
            }
            ATerm k_6 (ATerm t)
            {
              t = term_e_25;
              return(t);
            }
            t = ArgOption_3(t, i_6, j_6, k_6);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm g_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_6 (ATerm t)
                  {
                    ATerm w_31 = NULL;
                    w_31 = t;
                    p_29 :
                    if(!(match_string(w_31, "-S")))
                      {
                        if(!(match_string(w_31, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_6 (ATerm t)
                  {
                    t = term_n_22;
                    t = set_config_0(t);
                    t = term_m_25;
                    return(t);
                  }
                  ATerm n_6 (ATerm t)
                  {
                    t = term_p_25;
                    return(t);
                  }
                  t = Option_3(t, l_6, m_6, n_6);
                  LocalPopChoice(k_25);
                }
              else
                {
                  t = g_25;
                  {
                    ATerm q_25 = t;
                    int r_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_6 (ATerm t)
                        {
                          ATerm x_31 = NULL;
                          x_31 = t;
                          v_29 :
                          if(!(match_string(x_31, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_6 (ATerm t)
                        {
                          ATerm d_32 = NULL;
                          ATerm s_25;
                          s_25 = t;
                          {
                            ATerm z_31 = NULL;
                            ATerm c_32 = NULL;
                            t = string_to_int_0(t);
                            {
                              c_32 = t;
                              if(((z_31 != NULL) && (z_31 != c_32)))
                                _fail(c_32);
                              else
                                z_31 = c_32;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(z_31));
                              t = set_config_0(t);
                            }
                          }
                          t = s_25;
                          {
                            ATerm e_32 = NULL;
                            e_32 = t;
                            if(((d_32 != NULL) && (d_32 != e_32)))
                              _fail(e_32);
                            else
                              d_32 = e_32;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_32));
                          }
                          return(t);
                        }
                        ATerm b_7 (ATerm t)
                        {
                          t = term_t_25;
                          return(t);
                        }
                        t = ArgOption_3(t, o_6, w_6, b_7);
                        LocalPopChoice(r_25);
                      }
                    else
                      {
                        t = q_25;
                        {
                          ATerm y_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_7 (ATerm t)
                              {
                                ATerm h_32 = NULL;
                                h_32 = t;
                                c_30 :
                                if(!(match_string(h_32, "-k")))
                                  {
                                    if(!(match_string(h_32, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_7 (ATerm t)
                              {
                                ATerm a_26;
                                a_26 = t;
                                {
                                  ATerm i_32 = NULL;
                                  ATerm j_32 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    j_32 = t;
                                    if(((i_32 != NULL) && (i_32 != j_32)))
                                      _fail(j_32);
                                    else
                                      i_32 = j_32;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(i_32));
                                    t = set_config_0(t);
                                  }
                                }
                                t = a_26;
                                return(t);
                              }
                              ATerm e_7 (ATerm t)
                              {
                                t = term_b_26;
                                return(t);
                              }
                              t = ArgOption_3(t, c_7, d_7, e_7);
                              LocalPopChoice(z_25);
                            }
                          else
                            {
                              t = y_25;
                              {
                                ATerm c_26 = t;
                                int h_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_7 (ATerm t)
                                    {
                                      ATerm k_32 = NULL;
                                      k_32 = t;
                                      e_30 :
                                      if(!(match_string(k_32, "-v")))
                                        {
                                          if(!(match_string(k_32, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm g_7 (ATerm t)
                                    {
                                      t = term_i_26;
                                      t = set_config_0(t);
                                      t = term_l_26;
                                      return(t);
                                    }
                                    ATerm h_7 (ATerm t)
                                    {
                                      t = term_m_26;
                                      return(t);
                                    }
                                    t = Option_3(t, f_7, g_7, h_7);
                                    LocalPopChoice(h_26);
                                  }
                                else
                                  {
                                    t = c_26;
                                    {
                                      ATerm n_26 = t;
                                      int o_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_7 (ATerm t)
                                          {
                                            ATerm o_32 = NULL;
                                            o_32 = t;
                                            h_30 :
                                            if(!(match_string(o_32, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_7 (ATerm t)
                                          {
                                            t = term_q_26;
                                            t = set_config_0(t);
                                            t = term_w_26;
                                            return(t);
                                          }
                                          ATerm m_7 (ATerm t)
                                          {
                                            t = term_x_26;
                                            return(t);
                                          }
                                          t = Option_3(t, i_7, j_7, m_7);
                                          LocalPopChoice(o_26);
                                        }
                                      else
                                        {
                                          t = n_26;
                                          {
                                            ATerm r_7 (ATerm t)
                                            {
                                              ATerm p_32 = NULL;
                                              p_32 = t;
                                              i_30 :
                                              if(!(match_string(p_32, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm s_7 (ATerm t)
                                            {
                                              t = term_b_27;
                                              t = set_config_0(t);
                                              t = term_c_27;
                                              return(t);
                                            }
                                            ATerm t_7 (ATerm t)
                                            {
                                              t = term_f_27;
                                              return(t);
                                            }
                                            t = Option_3(t, r_7, s_7, t_7);
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
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm a_33 = NULL,b_33 = NULL;
      a_33 = t;
      y_32 :
      if(match_cons(a_33, sym_Program_1))
        {
          b_33 = ATgetArgument(a_33, 0);
          if(((z_32 != NULL) && (z_32 != b_33)))
            _fail(b_33);
          else
            z_32 = b_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, u_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_27), not_null(z_32)), term_h_27));
      {
        t = printnl_0(t);
        {
          t = term_x_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATinsert(ATempty, term_j_27));
  {
    t = printnl_0(t);
    {
      t = term_x_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = SSL_TicksToSeconds(not_null(e_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  i_33 :
  if(match_cons(j_33, sym__2))
    {
      k_33 = ATgetArgument(j_33, 0);
      l_33 = ATgetArgument(j_33, 1);
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_33), not_null(l_33));
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            t = SSL_addr(not_null(k_33), not_null(l_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_66 (ATerm), ATerm h_66 (ATerm))
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_66(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
        s_33 = t;
        r_33 :
        if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
          {
            t_33 = ATgetFirst((ATermList) s_33);
            u_33 = (ATerm) ATgetNext((ATermList) s_33);
            {
              ATerm x_33 = NULL;
              ATerm y_33 = NULL;
              t = not_null(u_33);
              {
                t = foldr_2(t, g_66, h_66);
                {
                  y_33 = t;
                  if(((x_33 != NULL) && (x_33 != y_33)))
                    _fail(y_33);
                  else
                    x_33 = y_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_33), not_null(x_33));
                t = h_66(t);
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
ATerm crush_2 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm))
{
  ATerm f_34 = NULL;
  ATerm h_34 = NULL;
  f_34 = t;
  {
    ATerm i_34 = NULL;
    ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
    t = not_null(f_34);
    {
      i_34 = t;
      {
        t = SSL_explode_term(not_null(i_34));
        {
          k_34 = t;
          e_34 :
          if(match_cons(k_34, sym__2))
            {
              l_34 = ATgetArgument(k_34, 0);
              m_34 = ATgetArgument(k_34, 1);
              if(((h_34 != NULL) && (h_34 != m_34)))
                _fail(m_34);
              else
                h_34 = m_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_34);
      t = foldr_2(t, e_65, f_65);
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
    ATerm z_7 (ATerm t)
    {
      t = term_m_22;
      return(t);
    }
    t = crush_2(t, z_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      {
        ATerm s_27;
        s_27 = t;
        {
          ATerm t_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_34), not_null(u_34));
              LocalPopChoice(v_27);
            }
          else
            {
              t = t_27;
              t = SSL_gtr(not_null(t_34), not_null(u_34));
            }
        }
        t = s_27;
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
  ATerm a_35 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
      b_35 = t;
      z_34 :
      if(match_cons(b_35, sym__2))
        {
          c_35 = ATgetArgument(b_35, 0);
          d_35 = ATgetArgument(b_35, 1);
          {
            if(((a_35 != NULL) && (a_35 != c_35)))
              _fail(c_35);
            else
              a_35 = c_35;
            if(((a_35 != NULL) && (a_35 != d_35)))
              _fail(d_35);
            else
              a_35 = d_35;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_54 (ATerm))
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28;
      i_28 = t;
      {
        ATerm g_35 = NULL;
        ATerm j_35 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            j_35 = t;
            if(((g_35 != NULL) && (g_35 != j_35)))
              _fail(j_35);
            else
              g_35 = j_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_35), term_x_9);
          t = geq_0(t);
        }
      }
      t = i_28;
      t = p_54(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm n_35 = NULL,p_35 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm o_35 = NULL;
      t = run_time_0(t);
      {
        o_35 = t;
        if(((n_35 != NULL) && (n_35 != o_35)))
          _fail(o_35);
        else
          n_35 = o_35;
      }
    }
    t = j_28;
    {
      ATerm q_35 = NULL;
      t = term_l_28;
      {
        t = get_config_0(t);
        {
          q_35 = t;
          if(((p_35 != NULL) && (p_35 != q_35)))
            _fail(q_35);
          else
            p_35 = q_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), not_null(n_35)), term_m_28), not_null(p_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_8);
  {
    t = term_m_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Version_0))
    {
      ATerm z_35 = NULL,b_36 = NULL;
      ATerm o_28;
      o_28 = t;
      {
        ATerm a_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          a_36 = t;
          if(((z_35 != NULL) && (z_35 != a_36)))
            _fail(a_36);
          else
            z_35 = a_36;
        }
      }
      t = o_28;
      {
        ATerm c_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_35));
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
        t = not_null(b_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm b_8 (ATerm t)
  {
    ATerm p_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(x_28);
      }
    else
      {
        t = p_28;
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_8);
  t = g_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_table_create(not_null(h_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  {
    ATerm c_29;
    c_29 = t;
    {
      t = term_d_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_29, term_e_29, not_null(o_36));
          t = table_put_0(t);
        }
      }
    }
    t = c_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  t = SSL_table_destroy(not_null(s_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_exit(not_null(w_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  z_36 :
  if(((ATgetType(a_37) == AT_LIST) && ATisEmpty(a_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_37) == AT_LIST) && !(ATisEmpty(a_37))))
        {
          b_37 = ATgetFirst((ATermList) a_37);
          c_37 = (ATerm) ATgetNext((ATermList) a_37);
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
    ATerm f_37 = NULL;
    ATerm k_37 = NULL;
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm i_37 = NULL;
          ATerm j_37 = NULL;
          j_37 = t;
          if(((i_37 != NULL) && (i_37 != j_37)))
            _fail(j_37);
          else
            i_37 = j_37;
          t = (ATerm) ATinsert(ATempty, not_null(i_37));
        }
      }
    {
      k_37 = t;
      if(((f_37 != NULL) && (f_37 != k_37)))
        _fail(k_37);
      else
        f_37 = k_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(f_37));
      t = printnl_0(t);
    }
  }
  t = g_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  z_37 = t;
  w_37 :
  if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
    {
      x_37 = ATgetFirst((ATermList) z_37);
      y_37 = (ATerm) ATgetNext((ATermList) z_37);
      {
        ATerm c_38 = NULL;
        t = not_null(y_37);
        {
          ATerm j_29;
          j_29 = t;
          {
            ATerm d_38 = NULL,f_38 = NULL,h_38 = NULL;
            ATerm l_29;
            l_29 = t;
            {
              ATerm e_38 = NULL;
              t = i_0(t);
              {
                e_38 = t;
                if(((d_38 != NULL) && (d_38 != e_38)))
                  _fail(e_38);
                else
                  d_38 = e_38;
              }
            }
            t = l_29;
            {
              ATerm g_38 = NULL;
              t = not_null(x_37);
              {
                t = h_0(t);
                {
                  g_38 = t;
                  if(((f_38 != NULL) && (f_38 != g_38)))
                    _fail(g_38);
                  else
                    f_38 = g_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_38)), not_null(f_38));
                {
                  h_38 = t;
                  if(((c_38 != NULL) && (c_38 != h_38)))
                    _fail(h_38);
                  else
                    c_38 = h_38;
                }
              }
            }
          }
          t = j_29;
          {
            ATerm c_8 (ATerm t)
            {
              t = not_null(c_38);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_37) == AT_LIST) && ATisEmpty(z_37)))
        {
          {
            t = term_b_11;
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
  ATerm d_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_Program_1))
    {
      x_38 = ATgetArgument(w_38, 0);
      {
        ATerm a_39 = NULL,c_39 = NULL;
        ATerm b_39 = NULL;
        t = SSLgetAnnotations(not_null(w_38));
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
        {
          t = not_null(x_38);
          {
            ATerm e_39 = NULL;
            t = b_53(t);
            {
              c_39 = t;
              {
                ATerm f_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_39)), not_null(a_39));
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
  ATerm n_39 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_39 = NULL;
      t = term_l_28;
      {
        t = get_config_0(t);
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
      }
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm i_8 (ATerm t)
        {
          ATerm j_8 (ATerm t)
          {
            ATerm p_39 = NULL;
            p_39 = t;
            if(((n_39 != NULL) && (n_39 != p_39)))
              _fail(p_39);
            else
              n_39 = p_39;
            return(t);
          }
          t = Program_1(t, j_8);
          return(t);
        }
        t = fetch_1(t, i_8);
      }
    }
  {
    t = term_o_29;
    {
      t = echo_0(t);
      {
        t = term_s_29;
        {
          t = table_get_0(t);
          {
            ATerm k_8 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, k_8);
            {
              ATerm l_8 (ATerm t)
              {
                ATerm q_39 = NULL;
                ATerm r_39 = NULL;
                r_39 = t;
                if(((q_39 != NULL) && (q_39 != r_39)))
                  _fail(r_39);
                else
                  q_39 = r_39;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_t_29);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, l_8);
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
  ATerm u_29;
  u_29 = t;
  {
    ATerm w_39 = NULL;
    ATerm x_39 = NULL;
    x_39 = t;
    if(((w_39 != NULL) && (w_39 != x_39)))
      _fail(x_39);
    else
      w_39 = x_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATinsert(ATempty, not_null(w_39)));
      t = printnl_0(t);
    }
  }
  t = u_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm w_29;
  w_29 = t;
  {
    t = h_70(t);
    t = debug_0(t);
  }
  t = w_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_53 (ATerm))
{
  ATerm e_40 = NULL,f_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym_Undefined_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      {
        ATerm i_40 = NULL,k_40 = NULL;
        ATerm j_40 = NULL;
        t = SSLgetAnnotations(not_null(e_40));
        {
          j_40 = t;
          if(((i_40 != NULL) && (i_40 != j_40)))
            _fail(j_40);
          else
            i_40 = j_40;
        }
        {
          t = not_null(f_40);
          {
            ATerm m_40 = NULL;
            t = c_53(t);
            {
              k_40 = t;
              {
                ATerm n_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_40)), not_null(i_40));
                {
                  n_40 = t;
                  if(((m_40 != NULL) && (m_40 != n_40)))
                    _fail(n_40);
                  else
                    m_40 = n_40;
                }
                t = not_null(m_40);
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
ATerm fetch_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm t_40 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_60, _id);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = Cons_2(t, _id, t_40);
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_74 (ATerm))
{
  t = fetch_1(t, n_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym_Help_0))
    {
      ATerm g_41 = NULL,i_41 = NULL;
      ATerm z_29;
      z_29 = t;
      {
        ATerm h_41 = NULL;
        t = SSLgetAnnotations(not_null(e_41));
        {
          h_41 = t;
          if(((g_41 != NULL) && (g_41 != h_41)))
            _fail(h_41);
          else
            g_41 = h_41;
        }
      }
      t = z_29;
      {
        ATerm j_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_41));
        {
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
        }
        t = not_null(i_41);
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
  ATerm y_41 = NULL;
  y_41 = t;
  t = SSL_implode_string(not_null(y_41));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
        d_42 = t;
        c_42 :
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            e_42 = ATgetFirst((ATermList) d_42);
            f_42 = (ATerm) ATgetNext((ATermList) d_42);
            {
              t = not_null(e_42);
              {
                ATerm m_8 (ATerm t)
                {
                  t = not_null(f_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_8);
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
  ATerm p_42 = NULL;
  ATerm r_42 = NULL;
  p_42 = t;
  {
    ATerm s_42 = NULL;
    ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
    t = not_null(p_42);
    {
      s_42 = t;
      {
        t = SSL_explode_term(not_null(s_42));
        {
          u_42 = t;
          n_42 :
          if(match_cons(u_42, sym__2))
            {
              v_42 = ATgetArgument(u_42, 0);
              w_42 = ATgetArgument(u_42, 1);
              o_42 :
              if(match_string(v_42, ""))
                {
                  if(((r_42 != NULL) && (r_42 != w_42)))
                    _fail(w_42);
                  else
                    r_42 = w_42;
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
      t = not_null(r_42);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm a_43 (ATerm t)
  {
    ATerm d_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_43);
        LocalPopChoice(f_30);
      }
    else
      {
        t = d_30;
        {
          t = Nil_0(t);
          t = j_60(t);
        }
      }
    return(t);
  }
  t = a_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  c_43 :
  if(match_cons(d_43, sym__2))
    {
      e_43 = ATgetArgument(d_43, 0);
      f_43 = ATgetArgument(d_43, 1);
      {
        t = not_null(e_43);
        {
          ATerm p_8 (ATerm t)
          {
            t = not_null(f_43);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm g_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = g_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_43 = NULL;
  k_43 = t;
  t = SSL_explode_string(not_null(k_43));
  return(t);
}
ATerm _2 (ATerm t, ATerm q_46 (ATerm), ATerm r_46 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym__2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm b_44 = NULL;
        t = SSLgetAnnotations(not_null(u_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        {
          t = not_null(v_43);
          {
            ATerm e_44 = NULL;
            t = q_46(t);
            {
              c_44 = t;
              {
                t = not_null(w_43);
                {
                  ATerm g_44 = NULL;
                  t = r_46(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_44), not_null(e_44)), not_null(a_44));
                      {
                        h_44 = t;
                        if(((g_44 != NULL) && (g_44 != h_44)))
                          _fail(h_44);
                        else
                          g_44 = h_44;
                      }
                      t = not_null(g_44);
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
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym__2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      {
        ATerm n_30;
        n_30 = t;
        t = SSL_printnl(not_null(q_44), not_null(r_44));
        t = n_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm o_30;
  o_30 = t;
  {
    ATerm x_44 = NULL,z_44 = NULL;
    ATerm p_30;
    p_30 = t;
    {
      ATerm y_44 = NULL;
      t = g_70(t);
      {
        y_44 = t;
        if(((x_44 != NULL) && (x_44 != y_44)))
          _fail(y_44);
        else
          x_44 = y_44;
      }
    }
    t = p_30;
    {
      ATerm a_45 = NULL;
      a_45 = t;
      if(((z_44 != NULL) && (z_44 != a_45)))
        _fail(a_45);
      else
        z_44 = a_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_44)), not_null(x_44)));
        t = printnl_0(t);
      }
    }
  }
  t = o_30;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm d_45 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = Cons_2(t, u_59, d_45);
      }
    return(t);
  }
  t = d_45(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  t = SSL_is_string(not_null(f_45));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 (ATerm t)
            {
              ATerm y_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = y_30;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, u_8);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
              o_45 = t;
              n_45 :
              if(match_cons(o_45, sym_Path_1))
                {
                  p_45 = ATgetArgument(o_45, 0);
                  t = not_null(p_45);
                }
              else
                {
                  if(match_cons(o_45, sym_Var_1))
                    {
                      p_45 = ATgetArgument(o_45, 0);
                      {
                        t = not_null(p_45);
                        {
                          ATerm b_31 = t;
                          int c_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_31);
                            }
                          else
                            {
                              t = b_31;
                              {
                                ATerm v_8 (ATerm t)
                                {
                                  t = term_g_31;
                                  return(t);
                                }
                                t = debug_1(t, v_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_45, sym_Prefix_2))
                        {
                          p_45 = ATgetArgument(o_45, 0);
                          q_45 = ATgetArgument(o_45, 1);
                          {
                            ATerm v_45 = NULL,x_45 = NULL;
                            ATerm h_31;
                            h_31 = t;
                            {
                              ATerm w_45 = NULL;
                              t = not_null(p_45);
                              {
                                t = eval_config_0(t);
                                {
                                  w_45 = t;
                                  if(((v_45 != NULL) && (v_45 != w_45)))
                                    _fail(w_45);
                                  else
                                    v_45 = w_45;
                                }
                              }
                            }
                            t = h_31;
                            {
                              ATerm y_45 = NULL;
                              t = not_null(q_45);
                              {
                                t = eval_config_0(t);
                                {
                                  y_45 = t;
                                  if(((x_45 != NULL) && (x_45 != y_45)))
                                    _fail(y_45);
                                  else
                                    x_45 = y_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_45), not_null(x_45));
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
  ATerm g_46 = NULL;
  g_46 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_18, not_null(g_46));
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
                ATerm i_46 = NULL;
                ATerm j_46 = NULL;
                j_46 = t;
                if(((i_46 != NULL) && (i_46 != j_46)))
                  _fail(j_46);
                else
                  i_46 = j_46;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_j_18, not_null(g_46), not_null(i_46));
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
ATerm try_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_58(t);
      LocalPopChoice(m_31);
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
  ATerm o_46 = NULL,p_46 = NULL,s_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      s_46 = ATgetArgument(o_46, 1);
      t = SSL_table_get(not_null(p_46), not_null(s_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym__3))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      c_47 = ATgetArgument(z_46, 2);
      {
        ATerm n_31;
        n_31 = t;
        {
          ATerm g_47 = NULL;
          ATerm h_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_47), not_null(b_47));
          {
            ATerm o_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_31);
              }
            else
              {
                t = o_31;
                t = (ATerm) ATempty;
              }
            {
              h_47 = t;
              if(((g_47 != NULL) && (g_47 != h_47)))
                _fail(h_47);
              else
                g_47 = h_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_47), not_null(b_47), (ATerm) ATinsert(CheckATermList(not_null(g_47)), not_null(c_47)));
            t = table_put_0(t);
          }
        }
        t = n_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_75 (ATerm))
{
  ATerm l_47 = NULL;
  ATerm m_47 = NULL;
  t = term_b_11;
  {
    t = s_75(t);
    {
      m_47 = t;
      if(((l_47 != NULL) && (l_47 != m_47)))
        _fail(m_47);
      else
        l_47 = m_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_29, term_r_29, not_null(l_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_string(s_47, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_47) == AT_LIST) && !(ATisEmpty(s_47))))
        {
          t_47 = ATgetFirst((ATermList) s_47);
          u_47 = (ATerm) ATgetNext((ATermList) s_47);
          {
            ATerm x_47 = NULL;
            ATerm q_31;
            q_31 = t;
            {
              t = not_null(t_47);
              t = a_0(t);
            }
            t = q_31;
            {
              ATerm y_47 = NULL;
              t = term_b_11;
              {
                t = d_0(t);
                {
                  y_47 = t;
                  if(((x_47 != NULL) && (x_47 != y_47)))
                    _fail(y_47);
                  else
                    x_47 = y_47;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_47)), not_null(x_47));
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
  ATerm w_8 (ATerm t)
  {
    ATerm f_48 = NULL;
    f_48 = t;
    e_48 :
    if(!(match_string(f_48, "--help")))
      {
        if(!(match_string(f_48, "-h")))
          {
            if(!(match_string(f_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_s_31;
    {
      t = set_config_0(t);
      t = term_y_31;
    }
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    t = term_a_32;
    return(t);
  }
  t = Option_3(t, w_8, x_8, y_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  h_48 :
  if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
    {
      j_48 = ATgetFirst((ATermList) i_48);
      k_48 = (ATerm) ATgetNext((ATermList) i_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_47 (ATerm), ATerm a_48 (ATerm))
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  u_48 :
  if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
    {
      w_48 = ATgetFirst((ATermList) v_48);
      x_48 = (ATerm) ATgetNext((ATermList) v_48);
      {
        ATerm b_49 = NULL,d_49 = NULL;
        ATerm c_49 = NULL;
        t = SSLgetAnnotations(not_null(v_48));
        {
          c_49 = t;
          if(((b_49 != NULL) && (b_49 != c_49)))
            _fail(c_49);
          else
            b_49 = c_49;
        }
        {
          t = not_null(w_48);
          {
            ATerm f_49 = NULL;
            t = z_47(t);
            {
              d_49 = t;
              {
                t = not_null(x_48);
                {
                  ATerm h_49 = NULL;
                  t = a_48(t);
                  {
                    f_49 = t;
                    {
                      ATerm i_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_49)), not_null(d_49)), not_null(b_49));
                      {
                        i_49 = t;
                        if(((h_49 != NULL) && (h_49 != i_49)))
                          _fail(i_49);
                        else
                          h_49 = i_49;
                      }
                      t = not_null(h_49);
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
  ATerm s_49 = NULL;
  s_49 = t;
  r_49 :
  if(((ATgetType(s_49) == AT_LIST) && ATisEmpty(s_49)))
    {
      {
        ATerm u_49 = NULL,w_49 = NULL;
        ATerm b_32;
        b_32 = t;
        {
          ATerm v_49 = NULL;
          t = SSLgetAnnotations(not_null(s_49));
          {
            v_49 = t;
            if(((u_49 != NULL) && (u_49 != v_49)))
              _fail(v_49);
            else
              u_49 = v_49;
          }
        }
        t = b_32;
        {
          ATerm x_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_49));
          {
            x_49 = t;
            if(((w_49 != NULL) && (w_49 != x_49)))
              _fail(x_49);
            else
              w_49 = x_49;
          }
          t = not_null(w_49);
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
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  c_50 :
  if(match_cons(d_50, sym__2))
    {
      e_50 = ATgetArgument(d_50, 0);
      f_50 = ATgetArgument(d_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_18, not_null(e_50), not_null(f_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm f_32;
  f_32 = t;
  {
    ATerm g_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_32;
        t = q_75(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = g_32;
        {
        }
      }
  }
  t = f_32;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm n_50 = NULL;
      ATerm n_32;
      n_32 = t;
      {
        ATerm l_50 = NULL;
        ATerm m_50 = NULL;
        m_50 = t;
        if(((l_50 != NULL) && (l_50 != m_50)))
          _fail(m_50);
        else
          l_50 = m_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_28, not_null(l_50));
          t = set_config_0(t);
        }
      }
      t = n_32;
      {
        ATerm o_50 = NULL;
        o_50 = t;
        if(((n_50 != NULL) && (n_50 != o_50)))
          _fail(o_50);
        else
          n_50 = o_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_50));
      }
      return(t);
    }
    ATerm a_9 (ATerm t)
    {
      ATerm q_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              {
                t = q_75(t);
                t = Cons_2(t, _id, a_9);
              }
            }
          LocalPopChoice(r_32);
        }
      else
        {
          t = q_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_8, a_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  ATerm u_32;
  u_32 = t;
  {
    ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
    x_50 = t;
    t_50 :
    if(match_cons(x_50, sym__3))
      {
        y_50 = ATgetArgument(x_50, 0);
        z_50 = ATgetArgument(x_50, 1);
        a_51 = ATgetArgument(x_50, 2);
        {
          if(((u_50 != NULL) && (u_50 != y_50)))
            _fail(y_50);
          else
            u_50 = y_50;
          {
            if(((v_50 != NULL) && (v_50 != z_50)))
              _fail(z_50);
            else
              v_50 = z_50;
            {
              if(((w_50 != NULL) && (w_50 != a_51)))
                _fail(a_51);
              else
                w_50 = a_51;
              t = SSL_table_put(not_null(u_50), not_null(v_50), not_null(w_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm d_51 = NULL;
  ATerm v_32;
  v_32 = t;
  {
    t = term_w_32;
    t = table_put_0(t);
  }
  t = v_32;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm x_32 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_75(t);
          LocalPopChoice(c_33);
        }
      else
        {
          t = x_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_9);
    {
      ATerm d_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_33;
          g_33 = t;
          {
            ATerm h_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_31;
                t = get_config_0(t);
                LocalPopChoice(m_33);
              }
            else
              {
                t = h_33;
                t = fetch_1(t, Help_0);
              }
          }
          t = g_33;
          {
            t = system_usage_0(t);
            {
              t = term_m_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(f_33);
        }
      else
        {
          t = d_33;
          {
            ATerm n_33 = t;
            int o_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_9 (ATerm t)
                {
                  ATerm k_9 (ATerm t)
                  {
                    ATerm e_51 = NULL;
                    e_51 = t;
                    if(((d_51 != NULL) && (d_51 != e_51)))
                      _fail(e_51);
                    else
                      d_51 = e_51;
                    return(t);
                  }
                  t = Undefined_1(t, k_9);
                  return(t);
                }
                t = fetch_1(t, h_9);
                {
                  ATerm l_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_51)), term_p_33);
                    return(t);
                  }
                  t = say_1(t, l_9);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_33);
              }
            else
              {
                t = n_33;
                {
                }
              }
          }
        }
      {
        ATerm q_33;
        q_33 = t;
        {
          t = term_q_29;
          t = table_destroy_0(t);
        }
        t = q_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm))
{
  t = parse_options_1(t, m_73);
  {
    t = store_options_0(t);
    {
      t = o_73(t);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_73);
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm z_33 = t;
              int a_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_34);
                }
              else
                {
                  t = z_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  t = option_wrap_4(t, q_73, default_usage_0, _id, r_73);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm m_9 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_69(t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = xtc_io_1(t, f_69);
    return(t);
  }
  t = option_wrap_2(t, m_9, n_9);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm d_34;
    d_34 = t;
    {
      ATerm h_51 = NULL;
      ATerm i_51 = NULL;
      t = term_g_34;
      {
        t = xtc_find_0(t);
        {
          t = get_path_0(t);
          {
            i_51 = t;
            if(((h_51 != NULL) && (h_51 != i_51)))
              _fail(i_51);
            else
              h_51 = i_51;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_51)), term_j_34));
        t = extend_config_0(t);
      }
    }
    t = d_34;
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
