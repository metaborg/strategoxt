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
ATerm term_h_34;
ATerm term_e_34;
ATerm term_p_33;
ATerm term_w_32;
ATerm term_l_32;
ATerm term_y_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_c_31;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_b_26;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_f_24;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_g_21;
ATerm term_b_21;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_w_18;
ATerm term_i_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_a_13;
ATerm term_g_12;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
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
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
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
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Syntax_1, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
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
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_f_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_g_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
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
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_22);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_b_11);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_b_11);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_b_11);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
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
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_q_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_b_11);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, (ATerm) ATempty);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
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
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
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
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
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
  ATerm d_0 = NULL;
  d_0 = t;
  t = SSL_int_to_string(not_null(d_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,t_2 = NULL;
  z_1 = t;
  k_1 :
  if(match_cons(z_1, sym__2))
    {
      a_2 = ATgetArgument(z_1, 0);
      t_2 = ATgetArgument(z_1, 1);
      {
        ATerm e_6 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_2), not_null(t_2));
            LocalPopChoice(p_9);
          }
        else
          {
            t = e_6;
            t = SSL_subtr(not_null(a_2), not_null(t_2));
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
  ATerm g_3 = NULL;
  t = term_s_9;
  {
    ATerm t_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = t_9;
        t = term_x_9;
      }
    {
      g_3 = t;
      if(((f_3 != NULL) && (f_3 != g_3)))
        _fail(g_3);
      else
        f_3 = g_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), term_x_9);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_3)), term_s_9);
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
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_3));
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
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      t = SSL_call(not_null(f_4), not_null(g_4));
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
  ATerm m_4 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm n_4 = NULL;
    t = h_69(t);
    {
      t = xtc_find_0(t);
      {
        n_4 = t;
        if(((m_4 != NULL) && (m_4 != n_4)))
          _fail(n_4);
        else
          m_4 = n_4;
      }
    }
  }
  t = y_9;
  {
    ATerm z_9;
    z_9 = t;
    {
      ATerm o_4 = NULL;
      ATerm p_4 = NULL;
      p_4 = t;
      if(((o_4 != NULL) && (o_4 != p_4)))
        _fail(p_4);
      else
        o_4 = p_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), not_null(o_4));
        t = call_0(t);
      }
    }
    t = z_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
        ATerm g_10;
        g_10 = t;
        {
          ATerm f_5 = NULL;
          ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
          t = z_69(t);
          {
            f_5 = t;
            {
              if(((c_5 != NULL) && (c_5 != f_5)))
                _fail(f_5);
              else
                c_5 = f_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_5), not_null(y_4), not_null(z_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_10 = t;
                    int i_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_j_10);
                        t = table_get_0(t);
                        LocalPopChoice(i_10);
                      }
                    else
                      {
                        t = h_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_5 = t;
                      v_4 :
                      if(((ATgetType(g_5) == AT_LIST) && !(ATisEmpty(g_5))))
                        {
                          h_5 = ATgetFirst((ATermList) g_5);
                          i_5 = (ATerm) ATgetNext((ATermList) g_5);
                          {
                            if(((d_5 != NULL) && (d_5 != h_5)))
                              _fail(h_5);
                            else
                              d_5 = h_5;
                            {
                              if(((e_5 != NULL) && (e_5 != i_5)))
                                _fail(i_5);
                              else
                                e_5 = i_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_5), term_j_10, (ATerm) ATinsert(CheckATermList(not_null(e_5)), (ATerm) ATinsert(CheckATermList(not_null(d_5)), not_null(y_4))));
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
  ATerm k_10;
  k_10 = t;
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
  t = k_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
      s_5 = t;
      n_5 :
      if(match_cons(s_5, sym__2))
        {
          t_5 = ATgetArgument(s_5, 0);
          u_5 = ATgetArgument(s_5, 1);
          {
            if(((r_5 != NULL) && (r_5 != t_5)))
              _fail(t_5);
            else
              r_5 = t_5;
            if(((q_5 != NULL) && (q_5 != u_5)))
              _fail(u_5);
            else
              q_5 = u_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_10);
      t = SSL_open_file(not_null(r_5), not_null(q_5));
    }
  else
    {
      t = q_10;
      {
        ATerm v_5 = NULL;
        ATerm w_5 = NULL;
        ATerm f_0 (ATerm t)
        {
          t = term_u_10;
          return(t);
        }
        t = obsolete_1(t, f_0);
        {
          v_5 = t;
          {
            if(((r_5 != NULL) && (r_5 != v_5)))
              _fail(v_5);
            else
              r_5 = v_5;
            {
              ATerm v_10;
              v_10 = t;
              {
                ATerm x_5 = NULL;
                t = term_w_10;
                {
                  x_5 = t;
                  if(((w_5 != NULL) && (w_5 != x_5)))
                    _fail(x_5);
                  else
                    w_5 = x_5;
                }
              }
              t = v_10;
              t = SSL_open_file(not_null(r_5), not_null(w_5));
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
  ATerm c_6 = NULL;
  ATerm d_6 = NULL;
  t = term_b_11;
  {
    t = new_0(t);
    {
      d_6 = t;
      if(((c_6 != NULL) && (c_6 != d_6)))
        _fail(d_6);
      else
        c_6 = d_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), term_c_11);
    {
      t = conc_strings_0(t);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(e_11);
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
  ATerm h_6 = NULL;
  t = new_file_0(t);
  {
    h_6 = t;
    {
      ATerm g_11;
      g_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), term_w_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), term_b_11);
            {
              ATerm h_0 (ATerm t)
              {
                t = term_j_11;
                return(t);
              }
              t = assert_1(t, h_0);
            }
          }
        }
      }
      t = g_11;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm r_6 = NULL,s_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym_stdin_0))
    {
      ATerm t_6 = NULL;
      ATerm u_6 = NULL;
      ATerm v_6 = NULL;
      t = xtc_new_file_0(t);
      {
        u_6 = t;
        {
          if(((t_6 != NULL) && (t_6 != u_6)))
            _fail(u_6);
          else
            t_6 = u_6;
          {
            ATerm w_6 = NULL;
            t = p_0(t);
            {
              w_6 = t;
              if(((v_6 != NULL) && (v_6 != w_6)))
                _fail(w_6);
              else
                v_6 = w_6;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_6)), term_k_11));
              {
                ATerm l_11 = t;
                int o_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(o_11);
                  }
                else
                  {
                    t = l_11;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, o_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_6));
    }
  else
    {
      if(match_cons(r_6, sym_FILE_1))
        {
          s_6 = ATgetArgument(r_6, 0);
          {
            ATerm y_6 = NULL;
            ATerm z_6 = NULL;
            t = not_null(s_6);
            {
              ATerm a_7 = NULL;
              t = xtc_new_file_0(t);
              {
                z_6 = t;
                {
                  if(((y_6 != NULL) && (y_6 != z_6)))
                    _fail(z_6);
                  else
                    y_6 = z_6;
                  {
                    ATerm b_7 = NULL;
                    t = p_0(t);
                    {
                      b_7 = t;
                      if(((a_7 != NULL) && (a_7 != b_7)))
                        _fail(b_7);
                      else
                        a_7 = b_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_6)), term_k_11), not_null(s_6)), term_p_11));
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
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_6));
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
  ATerm m_7 = NULL;
  m_7 = t;
  l_7 :
  if(match_cons(m_7, sym_stdin_0))
    {
      ATerm o_7 = NULL,q_7 = NULL;
      ATerm u_11;
      u_11 = t;
      {
        ATerm p_7 = NULL;
        t = SSLgetAnnotations(not_null(m_7));
        {
          p_7 = t;
          if(((o_7 != NULL) && (o_7 != p_7)))
            _fail(p_7);
          else
            o_7 = p_7;
        }
      }
      t = u_11;
      {
        ATerm r_7 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(o_7));
        {
          r_7 = t;
          if(((q_7 != NULL) && (q_7 != r_7)))
            _fail(r_7);
          else
            q_7 = r_7;
        }
        t = not_null(q_7);
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
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(f_12);
        }
      else
        {
          t = c_12;
          t = stdin_0(t);
        }
      LocalPopChoice(w_11);
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
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym__2))
    {
      y_7 = ATgetArgument(x_7, 0);
      z_7 = ATgetArgument(x_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_7)), term_g_12), not_null(y_7));
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
  ATerm f_8 = NULL,h_8 = NULL;
  ATerm h_12;
  h_12 = t;
  {
    ATerm g_8 = NULL;
    t = x_58(t);
    {
      g_8 = t;
      if(((f_8 != NULL) && (f_8 != g_8)))
        _fail(g_8);
      else
        f_8 = g_8;
    }
  }
  t = h_12;
  {
    ATerm i_8 = NULL;
    t = y_58(t);
    {
      i_8 = t;
      if(((h_8 != NULL) && (h_8 != i_8)))
        _fail(i_8);
      else
        h_8 = i_8;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(h_8));
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
  ATerm p_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_stderr_0))
    {
      ATerm r_8 = NULL,t_8 = NULL;
      ATerm i_12;
      i_12 = t;
      {
        ATerm s_8 = NULL;
        t = SSLgetAnnotations(not_null(p_8));
        {
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
        }
      }
      t = i_12;
      {
        ATerm u_8 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(r_8));
        {
          u_8 = t;
          if(((t_8 != NULL) && (t_8 != u_8)))
            _fail(u_8);
          else
            t_8 = u_8;
        }
        t = not_null(t_8);
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
  ATerm d_9 = NULL,e_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_FILE_1))
    {
      e_9 = ATgetArgument(d_9, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_9 = NULL;
            ATerm h_9 = NULL;
            t = n_0(t);
            {
              h_9 = t;
              {
                if(((g_9 != NULL) && (g_9 != h_9)))
                  _fail(h_9);
                else
                  g_9 = h_9;
                {
                  ATerm l_12 = t;
                  int p_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(p_12);
                    }
                  else
                    {
                      t = l_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), not_null(g_9));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_9));
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm j_9 = NULL;
              ATerm k_9 = NULL;
              t = n_0(t);
              {
                k_9 = t;
                {
                  if(((j_9 != NULL) && (j_9 != k_9)))
                    _fail(k_9);
                  else
                    j_9 = k_9;
                  {
                    ATerm r_12 = t;
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
                        t = r_12;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), not_null(j_9));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_9));
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
        ATerm q_9 = NULL;
        ATerm r_9 = NULL;
        t = term_a_13;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), term_x_9);
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
  ATerm d_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13;
      k_13 = t;
      {
        ATerm u_9 = NULL;
        ATerm v_9 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            v_9 = t;
            if(((u_9 != NULL) && (u_9 != v_9)))
              _fail(v_9);
            else
              u_9 = v_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), term_n_13);
          t = geq_0(t);
        }
      }
      t = k_13;
      t = r_54(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = d_13;
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
  ATerm a_10 = NULL;
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
      ATerm b_10 = NULL;
      ATerm u_0 (ATerm t)
      {
        t = term_s_13;
        return(t);
      }
      t = guarantee_extension_1(t, u_0);
      {
        b_10 = t;
        if(((a_10 != NULL) && (a_10 != b_10)))
          _fail(b_10);
        else
          a_10 = b_10;
      }
    }
    t = r_13;
    {
      ATerm t_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(a_10);
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
          t = t_13;
          {
            ATerm c_10 = NULL;
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
              ATerm d_10 = NULL;
              ATerm y_0 (ATerm t)
              {
                t = term_c_14;
                return(t);
              }
              t = guarantee_extension_1(t, y_0);
              {
                d_10 = t;
                if(((c_10 != NULL) && (c_10 != d_10)))
                  _fail(d_10);
                else
                  c_10 = d_10;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_10));
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_g_14;
                    return(t);
                  }
                  ATerm a_1 (ATerm t)
                  {
                    t = term_h_14;
                    {
                      t = get_config_0(t);
                      {
                        ATerm b_1 (ATerm t)
                        {
                          ATerm e_10 = NULL;
                          ATerm f_10 = NULL;
                          f_10 = t;
                          if(((e_10 != NULL) && (e_10 != f_10)))
                            _fail(f_10);
                          else
                            e_10 = f_10;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_10)), term_h_14);
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
                      t = term_l_14;
                      return(t);
                    }
                    t = xtc_transform_1(t, c_1);
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(a_10);
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
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym__2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        t = not_null(o_10);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm r_10 = NULL;
            ATerm s_10 = NULL;
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_10)), term_o_14), not_null(r_10));
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
  ATerm x_10 = NULL,z_10 = NULL;
  ATerm p_14;
  p_14 = t;
  {
    ATerm y_10 = NULL;
    y_10 = t;
    if(((x_10 != NULL) && (x_10 != y_10)))
      _fail(y_10);
    else
      x_10 = y_10;
  }
  t = p_14;
  {
    ATerm a_11 = NULL;
    t = term_h_14;
    {
      t = get_config_0(t);
      {
        a_11 = t;
        if(((z_10 != NULL) && (z_10 != a_11)))
          _fail(a_11);
        else
          z_10 = a_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(z_10));
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
  ATerm f_11 = NULL;
  ATerm h_11 = NULL;
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
    f_11 = t;
    {
      ATerm r_14;
      r_14 = t;
      {
        ATerm i_11 = NULL;
        ATerm i_1 (ATerm t)
        {
          t = term_s_14;
          return(t);
        }
        t = guarantee_extension_1(t, i_1);
        {
          i_11 = t;
          if(((h_11 != NULL) && (h_11 != i_11)))
            _fail(i_11);
          else
            h_11 = i_11;
        }
      }
      t = r_14;
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(h_11);
            {
              ATerm j_1 (ATerm t)
              {
                t = term_b_15;
                return(t);
              }
              t = find_in_includes_1(t, j_1);
            }
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            {
              ATerm l_1 (ATerm t)
              {
                ATerm m_1 (ATerm t)
                {
                  t = term_c_15;
                  return(t);
                }
                t = say_1(t, m_1);
                return(t);
              }
              t = if_verbose2_1(t, l_1);
              {
                t = not_null(f_11);
                {
                  t = get_syntax_definition_0(t);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      t = term_d_15;
                      return(t);
                    }
                    ATerm o_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_11)), term_e_15);
                      return(t);
                    }
                    t = xtc_transform_2(t, n_1, o_1);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = not_null(h_11);
                        return(t);
                      }
                      t = copy_to_1(t, p_1);
                    }
                  }
                }
              }
            }
          }
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              t = term_b_15;
              return(t);
            }
            t = debug_1(t, r_1);
            return(t);
          }
          t = if_verbose6_1(t, q_1);
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15;
      l_15 = t;
      {
        ATerm m_11 = NULL;
        ATerm n_11 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            n_11 = t;
            if(((m_11 != NULL) && (m_11 != n_11)))
              _fail(n_11);
            else
              m_11 = n_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), term_m_15);
          t = geq_0(t);
        }
      }
      t = l_15;
      t = q_54(t);
      LocalPopChoice(g_15);
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
  ATerm q_11 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm r_11 = NULL;
    t = f_60(t);
    {
      r_11 = t;
      if(((q_11 != NULL) && (q_11 != r_11)))
        _fail(r_11);
      else
        q_11 = r_11;
    }
    return(t);
  }
  t = fetch_1(t, s_1);
  t = not_null(q_11);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_stdin_0))
    {
      ATerm a_12 = NULL;
      ATerm b_12 = NULL;
      t = term_r_15;
      {
        t = ReadFromFile_0(t);
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
      }
      t = not_null(a_12);
    }
  else
    {
      if(match_cons(y_11, sym_FILE_1))
        {
          z_11 = ATgetArgument(y_11, 0);
          {
            ATerm d_12 = NULL;
            ATerm e_12 = NULL;
            t = not_null(z_11);
            {
              t = ReadFromFile_0(t);
              {
                e_12 = t;
                if(((d_12 != NULL) && (d_12 != e_12)))
                  _fail(e_12);
                else
                  d_12 = e_12;
              }
            }
            t = not_null(d_12);
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
  ATerm n_12 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = term_s_15;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose6_1(t, t_1);
  {
    ATerm t_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          ATerm w_1 (ATerm t)
          {
            t = term_z_15;
            return(t);
          }
          t = guarantee_extension_1(t, w_1);
          return(t);
        }
        t = FILE_1(t, v_1);
        t = read_from_0(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = t_15;
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_12 = NULL;
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_c_16;
                  return(t);
                }
                t = guarantee_extension_1(t, y_1);
                return(t);
              }
              t = FILE_1(t, x_1);
              {
                t = read_from_0(t);
                {
                  o_12 = t;
                  {
                    ATerm q_12 = NULL;
                    ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
                    t = not_null(o_12);
                    {
                      q_12 = t;
                      {
                        t = SSL_explode_term(not_null(q_12));
                        {
                          s_12 = t;
                          m_12 :
                          if(match_cons(s_12, sym__2))
                            {
                              t_12 = ATgetArgument(s_12, 0);
                              u_12 = ATgetArgument(s_12, 1);
                              if(((n_12 != NULL) && (n_12 != t_12)))
                                _fail(t_12);
                              else
                                n_12 = t_12;
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(n_12))));
                  }
                }
              }
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_f_16));
            }
        }
      }
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = debug_1(t, c_2);
        return(t);
      }
      t = if_verbose6_1(t, b_2);
    }
  }
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      t = term_h_16;
      return(t);
    }
    t = debug_1(t, e_2);
    return(t);
  }
  t = if_verbose6_1(t, d_2);
  {
    f_13 = t;
    e_13 :
    if(match_cons(f_13, sym_FILE_1))
      {
        g_13 = ATgetArgument(f_13, 0);
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
                      ATerm i_13 = NULL,j_13 = NULL;
                      i_13 = t;
                      c_13 :
                      if(match_cons(i_13, sym_Meta_1))
                        {
                          j_13 = ATgetArgument(i_13, 0);
                          {
                            t = not_null(j_13);
                            {
                              ATerm f_2 (ATerm t)
                              {
                                ATerm l_13 = NULL,m_13 = NULL;
                                l_13 = t;
                                b_13 :
                                if(match_cons(l_13, sym_Syntax_1))
                                  {
                                    m_13 = ATgetArgument(l_13, 0);
                                    t = not_null(m_13);
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = fetch_elem_1(t, f_2);
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
                        ATerm o_13 = NULL;
                        ATerm p_13 = NULL;
                        p_13 = t;
                        if(((o_13 != NULL) && (o_13 != p_13)))
                          _fail(p_13);
                        else
                          o_13 = p_13;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(g_13)), term_q_16), not_null(o_13)), term_p_16);
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
            ATerm g_2 (ATerm t)
            {
              ATerm h_2 (ATerm t)
              {
                t = term_s_16;
                return(t);
              }
              t = debug_1(t, h_2);
              return(t);
            }
            t = if_verbose2_1(t, g_2);
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
        ATerm y_13 (ATerm t)
        {
          ATerm v_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, y_13);
              LocalPopChoice(y_16);
            }
          else
            {
              t = v_16;
              {
                ATerm z_16 = t;
                int c_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_2 (ATerm t)
                    {
                      ATerm w_13 = NULL;
                      w_13 = t;
                      u_13 :
                      if(!(match_int(w_13, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, i_2, _id);
                    LocalPopChoice(c_17);
                  }
                else
                  {
                    t = z_16;
                    {
                      ATerm j_2 (ATerm t)
                      {
                        ATerm x_13 = NULL;
                        x_13 = t;
                        v_13 :
                        if(!(match_int(x_13, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, j_2, l_71);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = y_13(t);
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
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_FILE_1))
    {
      f_14 = ATgetArgument(e_14, 0);
      {
        ATerm i_14 = NULL,k_14 = NULL;
        ATerm j_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm m_14 = NULL;
            t = o_48(t);
            {
              k_14 = t;
              {
                ATerm n_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(k_14)), not_null(i_14));
                {
                  n_14 = t;
                  if(((m_14 != NULL) && (m_14 != n_14)))
                    _fail(n_14);
                  else
                    m_14 = n_14;
                }
                t = not_null(m_14);
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
  ATerm v_14 = NULL,w_14 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm l_2 (ATerm t)
    {
      t = term_d_17;
      return(t);
    }
    t = debug_1(t, l_2);
    return(t);
  }
  t = if_verbose6_1(t, k_2);
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm y_14 = NULL;
      ATerm m_2 (ATerm t)
      {
        ATerm x_14 = NULL;
        t = basename_1(t, _id);
        {
          x_14 = t;
          if(((w_14 != NULL) && (w_14 != x_14)))
            _fail(x_14);
          else
            w_14 = x_14;
        }
        return(t);
      }
      t = FILE_1(t, m_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            y_14 = t;
            if(((v_14 != NULL) && (v_14 != y_14)))
              _fail(y_14);
            else
              v_14 = y_14;
          }
        }
      }
    }
    t = e_17;
    {
      ATerm n_2 (ATerm t)
      {
        t = term_i_17;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        ATerm z_14 = NULL;
        ATerm a_15 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm p_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_k_17);
            return(t);
          }
          t = if_verbose3_1(t, p_2);
          {
            a_15 = t;
            if(((z_14 != NULL) && (z_14 != a_15)))
              _fail(a_15);
            else
              z_14 = a_15;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(z_14)), not_null(v_14)), term_s_17), term_r_17);
        return(t);
      }
      t = xtc_transform_2(t, n_2, o_2);
      {
        ATerm q_2 (ATerm t)
        {
          t = term_t_17;
          return(t);
        }
        t = xtc_transform_2(t, q_2, pass_verbose_0);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(w_14);
              {
                ATerm u_2 (ATerm t)
                {
                  t = term_u_17;
                  return(t);
                }
                t = guarantee_extension_1(t, u_2);
              }
              return(t);
            }
            t = copy_to_1(t, s_2);
            return(t);
          }
          t = if_keep1_1(t, r_2);
          {
            ATerm v_2 (ATerm t)
            {
              t = term_z_17;
              return(t);
            }
            t = xtc_transform_2(t, v_2, pass_verbose_0);
            {
              ATerm w_2 (ATerm t)
              {
                t = term_a_18;
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
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym__2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm n_15 = NULL;
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = not_null(j_15);
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
              t = (ATerm) ATempty;
            }
          {
            p_15 = t;
            if(((o_15 != NULL) && (o_15 != p_15)))
              _fail(p_15);
            else
              o_15 = p_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(o_15));
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                t = conc_more_lists_0(t);
              }
            {
              q_15 = t;
              if(((n_15 != NULL) && (n_15 != q_15)))
                _fail(q_15);
              else
                n_15 = q_15;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_18, not_null(j_15), not_null(n_15));
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
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_15 (ATerm t)
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, w_15);
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm v_15 = NULL;
                  v_15 = t;
                  u_15 :
                  if(!(match_int(v_15, 47)))
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
        t = w_15(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  t = SSL_table_keys(not_null(y_15));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_2 (ATerm t)
      {
        ATerm g_16 = NULL;
        ATerm i_16 = NULL;
        g_16 = t;
        {
          ATerm j_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(g_16));
          {
            t = table_get_0(t);
            {
              j_16 = t;
              if(((i_16 != NULL) && (i_16 != j_16)))
                _fail(j_16);
              else
                i_16 = j_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), not_null(i_16));
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
  ATerm p_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18;
      t_18 = t;
      {
        ATerm w_16 = NULL;
        ATerm x_16 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            x_16 = t;
            if(((w_16 != NULL) && (w_16 != x_16)))
              _fail(x_16);
            else
              w_16 = x_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), term_w_18);
          t = geq_0(t);
        }
      }
      t = t_18;
      t = t_54(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = p_18;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm x_18;
  x_18 = t;
  {
    ATerm a_17 = NULL;
    ATerm b_17 = NULL;
    b_17 = t;
    if(((a_17 != NULL) && (a_17 != b_17)))
      _fail(b_17);
    else
      a_17 = b_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(a_17));
      t = printnl_0(t);
    }
  }
  t = x_18;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm h_17 = NULL;
  ATerm j_17 = NULL,l_17 = NULL;
  h_17 = t;
  {
    ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(h_17)));
    {
      t = table_get_0(t);
      {
        m_17 = t;
        f_17 :
        if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
          {
            n_17 = ATgetFirst((ATermList) m_17);
            q_17 = (ATerm) ATgetNext((ATermList) m_17);
            g_17 :
            if(match_cons(n_17, sym__2))
              {
                o_17 = ATgetArgument(n_17, 0);
                p_17 = ATgetArgument(n_17, 1);
                {
                  if(((j_17 != NULL) && (j_17 != o_17)))
                    _fail(o_17);
                  else
                    j_17 = o_17;
                  if(((l_17 != NULL) && (l_17 != p_17)))
                    _fail(p_17);
                  else
                    l_17 = p_17;
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
    t = not_null(l_17);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,b_18 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      b_18 = ATgetArgument(x_17, 1);
      {
        ATerm e_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_17)));
        {
          t = table_get_0(t);
          {
            ATerm a_3 (ATerm t)
            {
              ATerm f_18 = NULL,l_18 = NULL,m_18 = NULL;
              f_18 = t;
              v_17 :
              if(match_cons(f_18, sym__2))
                {
                  l_18 = ATgetArgument(f_18, 0);
                  m_18 = ATgetArgument(f_18, 1);
                  {
                    if(((b_18 != NULL) && (b_18 != l_18)))
                      _fail(l_18);
                    else
                      b_18 = l_18;
                    if(((e_18 != NULL) && (e_18 != m_18)))
                      _fail(m_18);
                    else
                      e_18 = m_18;
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
        t = not_null(e_18);
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
  ATerm d_19 = t;
  int e_19 = stack_ptr;
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
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
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
        ATerm q_18 = NULL;
        ATerm r_18 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            r_18 = t;
            if(((q_18 != NULL) && (q_18 != r_18)))
              _fail(r_18);
            else
              q_18 = r_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), term_l_19);
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
      ATerm o_19;
      o_19 = t;
      {
        ATerm u_18 = NULL;
        ATerm v_18 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            v_18 = t;
            if(((u_18 != NULL) && (u_18 != v_18)))
              _fail(v_18);
            else
              u_18 = v_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), term_q_19);
          t = geq_0(t);
        }
      }
      t = o_19;
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
  ATerm z_18 = NULL,a_19 = NULL,g_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym__2))
    {
      a_19 = ATgetArgument(z_18, 0);
      g_19 = ATgetArgument(z_18, 1);
      if(((a_19 != NULL) && (a_19 != g_19)))
        _fail(g_19);
      else
        a_19 = g_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm x_19 = NULL,y_19 = NULL,a_20 = NULL;
  x_19 = t;
  p_19 :
  if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
    {
      y_19 = ATgetFirst((ATermList) x_19);
      a_20 = (ATerm) ATgetNext((ATermList) x_19);
      {
        t = u_65(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm e_20 = NULL;
            e_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(e_20));
              t = t_65(t);
            }
            return(t);
          }
          t = fetch_1(t, c_3);
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
ATerm union_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        t = not_null(l_20);
        {
          ATerm q_20 (ATerm t)
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_20);
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
                {
                  ATerm t_19 = t;
                  int u_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = not_null(m_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_65, d_3);
                      t = q_20(t);
                      LocalPopChoice(u_19);
                    }
                  else
                    {
                      t = t_19;
                      t = Cons_2(t, _id, q_20);
                    }
                }
              }
            return(t);
          }
          t = q_20(t);
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__3))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      y_20 = ATgetArgument(v_20, 2);
      {
        ATerm v_19;
        v_19 = t;
        {
          ATerm c_21 = NULL;
          ATerm d_21 = NULL,f_21 = NULL;
          ATerm e_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), not_null(x_20));
          {
            ATerm w_19 = t;
            int z_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_19);
              }
            else
              {
                t = w_19;
                t = (ATerm) ATempty;
              }
            {
              e_21 = t;
              if(((d_21 != NULL) && (d_21 != e_21)))
                _fail(e_21);
              else
                d_21 = e_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(y_20));
            {
              t = union_1(t, eq_0);
              {
                f_21 = t;
                if(((c_21 != NULL) && (c_21 != f_21)))
                  _fail(f_21);
                else
                  c_21 = f_21;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_20), not_null(x_20), not_null(c_21));
            t = table_put_0(t);
          }
        }
        t = v_19;
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
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  r_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      {
        t = not_null(v_21);
        {
          ATerm h_3 (ATerm t)
          {
            ATerm y_21 = NULL,z_21 = NULL,d_22 = NULL;
            y_21 = t;
            q_21 :
            if(match_cons(y_21, sym__2))
              {
                z_21 = ATgetArgument(y_21, 0);
                d_22 = ATgetArgument(y_21, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(u_21), not_null(z_21), not_null(d_22));
                  t = d_55(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_3);
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
  ATerm l_22 = NULL;
  l_22 = t;
  t = SSL_ReadFromFile(not_null(l_22));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_22 = NULL;
  ATerm s_22 = NULL;
  q_22 = t;
  {
    ATerm b_20;
    b_20 = t;
    {
      ATerm t_22 = NULL;
      t = term_c_20;
      {
        t_22 = t;
        if(((s_22 != NULL) && (s_22 != t_22)))
          _fail(t_22);
        else
          s_22 = t_22;
      }
    }
    t = b_20;
    {
      t = SSL_open_file(not_null(q_22), not_null(s_22));
      t = SSL_close_file(not_null(q_22));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm a_23 = NULL;
  y_22 = t;
  {
    ATerm d_20 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(y_22)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_20;
      }
    {
      ATerm f_20;
      f_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_19, term_g_20, (ATerm) ATinsert(ATempty, not_null(y_22)));
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
          ATerm i_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(n_20);
            }
          else
            {
              t = i_20;
              t = (ATerm) ATempty;
            }
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = term_o_20;
                return(t);
              }
              t = say_1(t, m_3);
              return(t);
            }
            t = if_verbose6_1(t, l_3);
            {
              ATerm b_23 = NULL;
              b_23 = t;
              if(((a_23 != NULL) && (a_23 != b_23)))
                _fail(b_23);
              else
                a_23 = b_23;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(a_23));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm s_3 (ATerm t)
                      {
                        t = term_p_20;
                        return(t);
                      }
                      t = say_1(t, s_3);
                      return(t);
                    }
                    t = if_verbose6_1(t, r_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_c_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(y_22)), (ATerm) ATempty);
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
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_getenv(not_null(f_23));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_20;
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
            t = term_b_21;
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
  ATerm v_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      t = term_g_21;
      return(t);
    }
    t = debug_1(t, x_3);
    return(t);
  }
  t = if_verbose5_1(t, v_3);
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
      ATerm c_4 (ATerm t)
      {
        ATerm h_4 (ATerm t)
        {
          t = term_o_21;
          return(t);
        }
        t = debug_1(t, h_4);
        return(t);
      }
      t = if_verbose5_1(t, c_4);
      {
        t = xtc_load_0(t);
        {
          ATerm p_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_21);
            }
          else
            {
              t = p_21;
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
        ATerm j_23 = NULL;
        ATerm k_23 = NULL;
        k_23 = t;
        if(((j_23 != NULL) && (j_23 != k_23)))
          _fail(k_23);
        else
          j_23 = k_23;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), not_null(j_23)), term_w_21);
          {
            t = error_0(t);
            {
              ATerm k_4 (ATerm t)
              {
                t = term_c_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm l_4 (ATerm t)
                    {
                      t = term_a_22;
                      return(t);
                    }
                    t = debug_1(t, l_4);
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
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm r_23 = NULL;
        r_23 = t;
        m_23 :
        if(!(match_string(r_23, "-I")))
          {
            if(!(match_string(r_23, "--Include")))
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
          ATerm s_23 = NULL;
          ATerm t_23 = NULL;
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATempty, not_null(s_23)));
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
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm u_23 = NULL;
              u_23 = t;
              o_23 :
              if(!(match_string(u_23, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              ATerm i_22;
              i_22 = t;
              {
                ATerm v_23 = NULL;
                ATerm w_23 = NULL;
                w_23 = t;
                if(((v_23 != NULL) && (v_23 != w_23)))
                  _fail(w_23);
                else
                  v_23 = w_23;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(v_23));
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
            t = ArgOption_3(t, t_4, u_4, a_5);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm b_5 (ATerm t)
              {
                ATerm x_23 = NULL;
                x_23 = t;
                q_23 :
                if(!(match_string(x_23, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                ATerm k_22;
                k_22 = t;
                {
                  t = term_n_22;
                  t = set_config_0(t);
                }
                t = k_22;
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_o_22;
                return(t);
              }
              t = Option_3(t, b_5, j_5, k_5);
            }
          }
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym__2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      t = SSL_rename(not_null(d_24), not_null(e_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_stdout_0))
    {
      ATerm o_24 = NULL,q_24 = NULL;
      ATerm p_22;
      p_22 = t;
      {
        ATerm p_24 = NULL;
        t = SSLgetAnnotations(not_null(m_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
      }
      t = p_22;
      {
        ATerm r_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(o_24));
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
        t = not_null(q_24);
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
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      t = SSL_copy(not_null(y_24), not_null(z_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_FILE_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm r_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = NULL;
            t = m_0(t);
            {
              m_25 = t;
              g_25 :
              if(match_cons(m_25, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), term_v_22);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(k_25);
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
            t = r_22;
            {
              ATerm o_25 = NULL;
              ATerm p_25 = NULL;
              t = m_0(t);
              {
                p_25 = t;
                {
                  if(((o_25 != NULL) && (o_25 != p_25)))
                    _fail(p_25);
                  else
                    o_25 = p_25;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), not_null(o_25));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_25));
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
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
    {
      x_25 = ATgetFirst((ATermList) w_25);
      y_25 = (ATerm) ATgetNext((ATermList) w_25);
      t = not_null(y_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        ATerm x_22;
        x_22 = t;
        {
          ATerm k_26 = NULL;
          ATerm l_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(h_26));
          {
            ATerm z_22 = t;
            int c_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_23);
              }
            else
              {
                t = z_22;
                t = (ATerm) ATempty;
              }
            {
              l_26 = t;
              if(((k_26 != NULL) && (k_26 != l_26)))
                _fail(l_26);
              else
                k_26 = l_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_26), not_null(h_26), not_null(k_26));
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
ATerm end_scope_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm y_26 = NULL;
    ATerm z_26 = NULL,d_27 = NULL,e_27 = NULL;
    t = w_69(t);
    {
      y_26 = t;
      {
        if(((v_26 != NULL) && (v_26 != y_26)))
          _fail(y_26);
        else
          v_26 = y_26;
        {
          ATerm e_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), term_j_10);
              t = table_get_0(t);
              LocalPopChoice(g_23);
            }
          else
            {
              t = e_23;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_26 = t;
            s_26 :
            if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
              {
                d_27 = ATgetFirst((ATermList) z_26);
                e_27 = (ATerm) ATgetNext((ATermList) z_26);
                {
                  if(((u_26 != NULL) && (u_26 != d_27)))
                    _fail(d_27);
                  else
                    u_26 = d_27;
                  {
                    if(((t_26 != NULL) && (t_26 != e_27)))
                      _fail(e_27);
                    else
                      t_26 = e_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(v_26), term_j_10, not_null(t_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(u_26);
                          {
                            ATerm l_5 (ATerm t)
                            {
                              ATerm f_27 = NULL;
                              f_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), not_null(f_27));
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
  ATerm l_27 = NULL;
  l_27 = t;
  t = SSL_remove(not_null(l_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_58(t);
      t = w_58(t);
      LocalPopChoice(i_23);
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
  ATerm q_27 = NULL;
  ATerm l_23;
  l_23 = t;
  {
    ATerm r_27 = NULL;
    ATerm u_27 = NULL;
    t = v_69(t);
    {
      r_27 = t;
      {
        if(((q_27 != NULL) && (q_27 != r_27)))
          _fail(r_27);
        else
          q_27 = r_27;
        {
          ATerm v_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_27), term_j_10);
          {
            ATerm n_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_23);
              }
            else
              {
                t = n_23;
                t = (ATerm) ATempty;
              }
            {
              v_27 = t;
              if(((u_27 != NULL) && (u_27 != v_27)))
                _fail(v_27);
              else
                u_27 = v_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_27), term_j_10, (ATerm) ATinsert(CheckATermList(not_null(u_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_23;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL;
  ATerm m_5 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  t = begin_scope_1(t, m_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm y_23;
      y_23 = t;
      {
        ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_24;
            t = table_get_0(t);
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          c_28 = t;
          z_27 :
          if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
            {
              d_28 = ATgetFirst((ATermList) c_28);
              e_28 = (ATerm) ATgetNext((ATermList) c_28);
              {
                if(((b_28 != NULL) && (b_28 != d_28)))
                  _fail(d_28);
                else
                  b_28 = d_28;
                {
                  if(((a_28 != NULL) && (a_28 != e_28)))
                    _fail(e_28);
                  else
                    a_28 = e_28;
                  {
                    t = not_null(b_28);
                    {
                      ATerm p_5 (ATerm t)
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
                      t = map_1(t, p_5);
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
        ATerm h_28 = NULL;
        ATerm i_28 = NULL;
        t = term_p_11;
        {
          t = get_config_0(t);
          {
            i_28 = t;
            if(((h_28 != NULL) && (h_28 != i_28)))
              _fail(i_28);
            else
              h_28 = i_28;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_28));
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
          ATerm k_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_11;
              t = get_config_0(t);
              LocalPopChoice(n_24);
            }
          else
            {
              t = k_24;
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
  ATerm l_28 = NULL;
  l_28 = t;
  t = SSL_string_to_int(not_null(l_28));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  t_28 = t;
  r_28 :
  if(match_string(t_28, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
        {
          u_28 = ATgetFirst((ATermList) t_28);
          v_28 = (ATerm) ATgetNext((ATermList) t_28);
          s_28 :
          if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
            {
              w_28 = ATgetFirst((ATermList) v_28);
              x_28 = (ATerm) ATgetNext((ATermList) v_28);
              {
                ATerm b_29 = NULL;
                ATerm s_24;
                s_24 = t;
                {
                  t = not_null(u_28);
                  t = j_0(t);
                }
                t = s_24;
                {
                  ATerm c_29 = NULL;
                  t = not_null(w_28);
                  {
                    t = k_0(t);
                    {
                      c_29 = t;
                      if(((b_29 != NULL) && (b_29 != c_29)))
                        _fail(c_29);
                      else
                        b_29 = c_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_28)), not_null(b_29));
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
      ATerm b_6 (ATerm t)
      {
        ATerm w_30 = NULL;
        w_30 = t;
        g_29 :
        if(!(match_string(w_30, "-i")))
          {
            if(!(match_string(w_30, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        ATerm d_31 = NULL;
        ATerm v_24;
        v_24 = t;
        {
          ATerm x_30 = NULL;
          ATerm z_30 = NULL;
          z_30 = t;
          if(((x_30 != NULL) && (x_30 != z_30)))
            _fail(z_30);
          else
            x_30 = z_30;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(x_30));
            t = set_config_0(t);
          }
        }
        t = v_24;
        {
          ATerm e_31 = NULL;
          e_31 = t;
          if(((d_31 != NULL) && (d_31 != e_31)))
            _fail(e_31);
          else
            d_31 = e_31;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_31));
        }
        return(t);
      }
      ATerm g_6 (ATerm t)
      {
        t = term_a_25;
        return(t);
      }
      t = ArgOption_3(t, b_6, f_6, g_6);
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
              ATerm f_31 = NULL;
              f_31 = t;
              l_29 :
              if(!(match_string(f_31, "-o")))
                {
                  if(!(match_string(f_31, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              ATerm v_31 = NULL;
              ATerm d_25;
              d_25 = t;
              {
                ATerm t_31 = NULL;
                ATerm u_31 = NULL;
                u_31 = t;
                if(((t_31 != NULL) && (t_31 != u_31)))
                  _fail(u_31);
                else
                  t_31 = u_31;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(t_31));
                  t = set_config_0(t);
                }
              }
              t = d_25;
              {
                ATerm w_31 = NULL;
                w_31 = t;
                if(((v_31 != NULL) && (v_31 != w_31)))
                  _fail(w_31);
                else
                  v_31 = w_31;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_31));
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
              ATerm f_25 = t;
              int h_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_6 (ATerm t)
                  {
                    ATerm x_31 = NULL;
                    x_31 = t;
                    v_29 :
                    if(!(match_string(x_31, "-S")))
                      {
                        if(!(match_string(x_31, "--silent")))
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
                    t = term_l_25;
                    return(t);
                  }
                  ATerm n_6 (ATerm t)
                  {
                    t = term_n_25;
                    return(t);
                  }
                  t = Option_3(t, l_6, m_6, n_6);
                  LocalPopChoice(h_25);
                }
              else
                {
                  t = f_25;
                  {
                    ATerm q_25 = t;
                    int r_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_6 (ATerm t)
                        {
                          ATerm z_31 = NULL;
                          z_31 = t;
                          w_29 :
                          if(!(match_string(z_31, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_6 (ATerm t)
                        {
                          ATerm e_32 = NULL;
                          ATerm s_25;
                          s_25 = t;
                          {
                            ATerm c_32 = NULL;
                            ATerm d_32 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_32 = t;
                              if(((c_32 != NULL) && (c_32 != d_32)))
                                _fail(d_32);
                              else
                                c_32 = d_32;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(c_32));
                              t = set_config_0(t);
                            }
                          }
                          t = s_25;
                          {
                            ATerm h_32 = NULL;
                            h_32 = t;
                            if(((e_32 != NULL) && (e_32 != h_32)))
                              _fail(h_32);
                            else
                              e_32 = h_32;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_32));
                          }
                          return(t);
                        }
                        ATerm x_6 (ATerm t)
                        {
                          t = term_t_25;
                          return(t);
                        }
                        t = ArgOption_3(t, o_6, p_6, x_6);
                        LocalPopChoice(r_25);
                      }
                    else
                      {
                        t = q_25;
                        {
                          ATerm u_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_7 (ATerm t)
                              {
                                ATerm i_32 = NULL;
                                i_32 = t;
                                d_30 :
                                if(!(match_string(i_32, "-k")))
                                  {
                                    if(!(match_string(i_32, "--keep")))
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
                                  ATerm j_32 = NULL;
                                  ATerm k_32 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    k_32 = t;
                                    if(((j_32 != NULL) && (j_32 != k_32)))
                                      _fail(k_32);
                                    else
                                      j_32 = k_32;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(j_32));
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
                              t = u_25;
                              {
                                ATerm c_26 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_7 (ATerm t)
                                    {
                                      ATerm o_32 = NULL;
                                      o_32 = t;
                                      h_30 :
                                      if(!(match_string(o_32, "-v")))
                                        {
                                          if(!(match_string(o_32, "--version")))
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
                                      t = term_j_26;
                                      return(t);
                                    }
                                    ATerm h_7 (ATerm t)
                                    {
                                      t = term_m_26;
                                      return(t);
                                    }
                                    t = Option_3(t, f_7, g_7, h_7);
                                    LocalPopChoice(d_26);
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
                                            ATerm p_32 = NULL;
                                            p_32 = t;
                                            i_30 :
                                            if(!(match_string(p_32, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_7 (ATerm t)
                                          {
                                            t = term_q_26;
                                            t = set_config_0(t);
                                            t = term_r_26;
                                            return(t);
                                          }
                                          ATerm k_7 (ATerm t)
                                          {
                                            t = term_w_26;
                                            return(t);
                                          }
                                          t = Option_3(t, i_7, j_7, k_7);
                                          LocalPopChoice(o_26);
                                        }
                                      else
                                        {
                                          t = n_26;
                                          {
                                            ATerm n_7 (ATerm t)
                                            {
                                              ATerm q_32 = NULL;
                                              q_32 = t;
                                              j_30 :
                                              if(!(match_string(q_32, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm s_7 (ATerm t)
                                            {
                                              t = term_a_27;
                                              t = set_config_0(t);
                                              t = term_b_27;
                                              return(t);
                                            }
                                            ATerm t_7 (ATerm t)
                                            {
                                              t = term_c_27;
                                              return(t);
                                            }
                                            t = Option_3(t, n_7, s_7, t_7);
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
  ATerm a_33 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm b_33 = NULL,c_33 = NULL;
      b_33 = t;
      z_32 :
      if(match_cons(b_33, sym_Program_1))
        {
          c_33 = ATgetArgument(b_33, 0);
          if(((a_33 != NULL) && (a_33 != c_33)))
            _fail(c_33);
          else
            a_33 = c_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, u_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_27), not_null(a_33)), term_h_27));
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
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATempty, term_j_27));
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
  ATerm f_33 = NULL;
  f_33 = t;
  t = SSL_TicksToSeconds(not_null(f_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym__2))
    {
      l_33 = ATgetArgument(k_33, 0);
      m_33 = ATgetArgument(k_33, 1);
      {
        ATerm k_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_33), not_null(m_33));
            LocalPopChoice(m_27);
          }
        else
          {
            t = k_27;
            t = SSL_addr(not_null(l_33), not_null(m_33));
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
        ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
        t_33 = t;
        s_33 :
        if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
          {
            u_33 = ATgetFirst((ATermList) t_33);
            v_33 = (ATerm) ATgetNext((ATermList) t_33);
            {
              ATerm y_33 = NULL;
              ATerm z_33 = NULL;
              t = not_null(v_33);
              {
                t = foldr_2(t, g_66, h_66);
                {
                  z_33 = t;
                  if(((y_33 != NULL) && (y_33 != z_33)))
                    _fail(z_33);
                  else
                    y_33 = z_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), not_null(y_33));
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
  ATerm g_34 = NULL;
  ATerm i_34 = NULL;
  g_34 = t;
  {
    ATerm j_34 = NULL;
    ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
    t = not_null(g_34);
    {
      j_34 = t;
      {
        t = SSL_explode_term(not_null(j_34));
        {
          l_34 = t;
          f_34 :
          if(match_cons(l_34, sym__2))
            {
              m_34 = ATgetArgument(l_34, 0);
              n_34 = ATgetArgument(l_34, 1);
              if(((i_34 != NULL) && (i_34 != n_34)))
                _fail(n_34);
              else
                i_34 = n_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_34);
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
    ATerm v_7 (ATerm t)
    {
      t = term_m_22;
      return(t);
    }
    t = crush_2(t, v_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym__2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        ATerm p_27;
        p_27 = t;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_34), not_null(v_34));
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              t = SSL_gtr(not_null(u_34), not_null(v_34));
            }
        }
        t = p_27;
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
  ATerm b_35 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
      c_35 = t;
      a_35 :
      if(match_cons(c_35, sym__2))
        {
          d_35 = ATgetArgument(c_35, 0);
          e_35 = ATgetArgument(c_35, 1);
          {
            if(((b_35 != NULL) && (b_35 != d_35)))
              _fail(d_35);
            else
              b_35 = d_35;
            if(((b_35 != NULL) && (b_35 != e_35)))
              _fail(e_35);
            else
              b_35 = e_35;
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
  ATerm y_27 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_28;
      g_28 = t;
      {
        ATerm j_35 = NULL;
        ATerm k_35 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            k_35 = t;
            if(((j_35 != NULL) && (j_35 != k_35)))
              _fail(k_35);
            else
              j_35 = k_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_35), term_x_9);
          t = geq_0(t);
        }
      }
      t = g_28;
      t = p_54(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = y_27;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm o_35 = NULL,q_35 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm p_35 = NULL;
      t = run_time_0(t);
      {
        p_35 = t;
        if(((o_35 != NULL) && (o_35 != p_35)))
          _fail(p_35);
        else
          o_35 = p_35;
      }
    }
    t = j_28;
    {
      ATerm r_35 = NULL;
      t = term_k_28;
      {
        t = get_config_0(t);
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), not_null(o_35)), term_m_28), not_null(q_35)));
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
  ATerm y_35 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym_Version_0))
    {
      ATerm a_36 = NULL,c_36 = NULL;
      ATerm o_28;
      o_28 = t;
      {
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(y_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
      }
      t = o_28;
      {
        ATerm d_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_36));
        {
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
        }
        t = not_null(c_36);
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
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_28);
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
  ATerm i_36 = NULL;
  i_36 = t;
  t = SSL_table_create(not_null(i_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm a_29;
    a_29 = t;
    {
      t = term_d_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_29, term_e_29, not_null(p_36));
          t = table_put_0(t);
        }
      }
    }
    t = a_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_table_destroy(not_null(t_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = SSL_exit(not_null(x_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  a_37 :
  if(((ATgetType(b_37) == AT_LIST) && ATisEmpty(b_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
        {
          c_37 = ATgetFirst((ATermList) b_37);
          d_37 = (ATerm) ATgetNext((ATermList) b_37);
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
    ATerm i_37 = NULL;
    ATerm l_37 = NULL;
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
          ATerm j_37 = NULL;
          ATerm k_37 = NULL;
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
          t = (ATerm) ATinsert(ATempty, not_null(j_37));
        }
      }
    {
      l_37 = t;
      if(((i_37 != NULL) && (i_37 != l_37)))
        _fail(l_37);
      else
        i_37 = l_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(i_37));
      t = printnl_0(t);
    }
  }
  t = f_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  a_38 = t;
  x_37 :
  if(((ATgetType(a_38) == AT_LIST) && !(ATisEmpty(a_38))))
    {
      y_37 = ATgetFirst((ATermList) a_38);
      z_37 = (ATerm) ATgetNext((ATermList) a_38);
      {
        ATerm d_38 = NULL;
        t = not_null(z_37);
        {
          ATerm j_29;
          j_29 = t;
          {
            ATerm e_38 = NULL,g_38 = NULL,i_38 = NULL;
            ATerm k_29;
            k_29 = t;
            {
              ATerm f_38 = NULL;
              t = i_0(t);
              {
                f_38 = t;
                if(((e_38 != NULL) && (e_38 != f_38)))
                  _fail(f_38);
                else
                  e_38 = f_38;
              }
            }
            t = k_29;
            {
              ATerm h_38 = NULL;
              t = not_null(y_37);
              {
                t = g_0(t);
                {
                  h_38 = t;
                  if(((g_38 != NULL) && (g_38 != h_38)))
                    _fail(h_38);
                  else
                    g_38 = h_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_38)), not_null(g_38));
                {
                  i_38 = t;
                  if(((d_38 != NULL) && (d_38 != i_38)))
                    _fail(i_38);
                  else
                    d_38 = i_38;
                }
              }
            }
          }
          t = j_29;
          {
            ATerm c_8 (ATerm t)
            {
              t = not_null(d_38);
              return(t);
            }
            t = reverse_acc_2(t, g_0, c_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_38) == AT_LIST) && ATisEmpty(a_38)))
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
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_Program_1))
    {
      y_38 = ATgetArgument(x_38, 0);
      {
        ATerm b_39 = NULL,d_39 = NULL;
        ATerm c_39 = NULL;
        t = SSLgetAnnotations(not_null(x_38));
        {
          c_39 = t;
          if(((b_39 != NULL) && (b_39 != c_39)))
            _fail(c_39);
          else
            b_39 = c_39;
        }
        {
          t = not_null(y_38);
          {
            ATerm f_39 = NULL;
            t = b_53(t);
            {
              d_39 = t;
              {
                ATerm g_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_39)), not_null(b_39));
                {
                  g_39 = t;
                  if(((f_39 != NULL) && (f_39 != g_39)))
                    _fail(g_39);
                  else
                    f_39 = g_39;
                }
                t = not_null(f_39);
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
  ATerm o_39 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_39 = NULL;
      t = term_k_28;
      {
        t = get_config_0(t);
        {
          p_39 = t;
          if(((o_39 != NULL) && (o_39 != p_39)))
            _fail(p_39);
          else
            o_39 = p_39;
        }
      }
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm e_8 (ATerm t)
        {
          ATerm j_8 (ATerm t)
          {
            ATerm q_39 = NULL;
            q_39 = t;
            if(((o_39 != NULL) && (o_39 != q_39)))
              _fail(q_39);
            else
              o_39 = q_39;
            return(t);
          }
          t = Program_1(t, j_8);
          return(t);
        }
        t = fetch_1(t, e_8);
      }
    }
  {
    t = term_o_29;
    {
      t = echo_0(t);
      {
        t = term_r_29;
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
                ATerm r_39 = NULL;
                ATerm s_39 = NULL;
                s_39 = t;
                if(((r_39 != NULL) && (r_39 != s_39)))
                  _fail(s_39);
                else
                  r_39 = s_39;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_39)), term_s_29);
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
  ATerm t_29;
  t_29 = t;
  {
    ATerm x_39 = NULL;
    ATerm y_39 = NULL;
    y_39 = t;
    if(((x_39 != NULL) && (x_39 != y_39)))
      _fail(y_39);
    else
      x_39 = y_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATempty, not_null(x_39)));
      t = printnl_0(t);
    }
  }
  t = t_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm u_29;
  u_29 = t;
  {
    t = h_70(t);
    t = debug_0(t);
  }
  t = u_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_53 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_Undefined_1))
    {
      g_40 = ATgetArgument(f_40, 0);
      {
        ATerm j_40 = NULL,l_40 = NULL;
        ATerm k_40 = NULL;
        t = SSLgetAnnotations(not_null(f_40));
        {
          k_40 = t;
          if(((j_40 != NULL) && (j_40 != k_40)))
            _fail(k_40);
          else
            j_40 = k_40;
        }
        {
          t = not_null(g_40);
          {
            ATerm n_40 = NULL;
            t = c_53(t);
            {
              l_40 = t;
              {
                ATerm o_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_40)), not_null(j_40));
                {
                  o_40 = t;
                  if(((n_40 != NULL) && (n_40 != o_40)))
                    _fail(o_40);
                  else
                    n_40 = o_40;
                }
                t = not_null(n_40);
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
  ATerm u_40 (ATerm t)
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
        t = Cons_2(t, _id, u_40);
      }
    return(t);
  }
  t = u_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_74 (ATerm))
{
  t = fetch_1(t, n_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_Help_0))
    {
      ATerm h_41 = NULL,j_41 = NULL;
      ATerm z_29;
      z_29 = t;
      {
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(f_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
      }
      t = z_29;
      {
        ATerm k_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_41));
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
        t = not_null(j_41);
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
  ATerm z_41 = NULL;
  z_41 = t;
  t = SSL_implode_string(not_null(z_41));
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
        ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
        e_42 = t;
        d_42 :
        if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
          {
            f_42 = ATgetFirst((ATermList) e_42);
            g_42 = (ATerm) ATgetNext((ATermList) e_42);
            {
              t = not_null(f_42);
              {
                ATerm m_8 (ATerm t)
                {
                  t = not_null(g_42);
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
  ATerm q_42 = NULL;
  ATerm s_42 = NULL;
  q_42 = t;
  {
    ATerm t_42 = NULL;
    ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
    t = not_null(q_42);
    {
      t_42 = t;
      {
        t = SSL_explode_term(not_null(t_42));
        {
          v_42 = t;
          o_42 :
          if(match_cons(v_42, sym__2))
            {
              w_42 = ATgetArgument(v_42, 0);
              x_42 = ATgetArgument(v_42, 1);
              p_42 :
              if(match_string(w_42, ""))
                {
                  if(((s_42 != NULL) && (s_42 != x_42)))
                    _fail(x_42);
                  else
                    s_42 = x_42;
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
      t = not_null(s_42);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm b_43 (ATerm t)
  {
    ATerm c_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_43);
        LocalPopChoice(e_30);
      }
    else
      {
        t = c_30;
        {
          t = Nil_0(t);
          t = j_60(t);
        }
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym__2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        t = not_null(f_43);
        {
          ATerm n_8 (ATerm t)
          {
            t = not_null(g_43);
            return(t);
          }
          t = at_end_1(t, n_8);
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
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  t = SSL_explode_string(not_null(l_43));
  return(t);
}
ATerm _2 (ATerm t, ATerm q_46 (ATerm), ATerm r_46 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym__2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      {
        ATerm b_44 = NULL,d_44 = NULL;
        ATerm c_44 = NULL;
        t = SSLgetAnnotations(not_null(v_43));
        {
          c_44 = t;
          if(((b_44 != NULL) && (b_44 != c_44)))
            _fail(c_44);
          else
            b_44 = c_44;
        }
        {
          t = not_null(w_43);
          {
            ATerm f_44 = NULL;
            t = q_46(t);
            {
              d_44 = t;
              {
                t = not_null(x_43);
                {
                  ATerm h_44 = NULL;
                  t = r_46(t);
                  {
                    f_44 = t;
                    {
                      ATerm i_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_44), not_null(f_44)), not_null(b_44));
                      {
                        i_44 = t;
                        if(((h_44 != NULL) && (h_44 != i_44)))
                          _fail(i_44);
                        else
                          h_44 = i_44;
                      }
                      t = not_null(h_44);
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
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym__2))
    {
      r_44 = ATgetArgument(q_44, 0);
      s_44 = ATgetArgument(q_44, 1);
      {
        ATerm m_30;
        m_30 = t;
        t = SSL_printnl(not_null(r_44), not_null(s_44));
        t = m_30;
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
  ATerm n_30;
  n_30 = t;
  {
    ATerm y_44 = NULL,a_45 = NULL;
    ATerm o_30;
    o_30 = t;
    {
      ATerm z_44 = NULL;
      t = g_70(t);
      {
        z_44 = t;
        if(((y_44 != NULL) && (y_44 != z_44)))
          _fail(z_44);
        else
          y_44 = z_44;
      }
    }
    t = o_30;
    {
      ATerm b_45 = NULL;
      b_45 = t;
      if(((a_45 != NULL) && (a_45 != b_45)))
        _fail(b_45);
      else
        a_45 = b_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_45)), not_null(y_44)));
        t = printnl_0(t);
      }
    }
  }
  t = n_30;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm e_45 (ATerm t)
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = Cons_2(t, u_59, e_45);
      }
    return(t);
  }
  t = e_45(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  t = SSL_is_string(not_null(g_45));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              ATerm v_30 = t;
              int y_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_30);
                }
              else
                {
                  t = v_30;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_8);
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
              p_45 = t;
              o_45 :
              if(match_cons(p_45, sym_Path_1))
                {
                  q_45 = ATgetArgument(p_45, 0);
                  t = not_null(q_45);
                }
              else
                {
                  if(match_cons(p_45, sym_Var_1))
                    {
                      q_45 = ATgetArgument(p_45, 0);
                      {
                        t = not_null(q_45);
                        {
                          ATerm a_31 = t;
                          int b_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(b_31);
                            }
                          else
                            {
                              t = a_31;
                              {
                                ATerm v_8 (ATerm t)
                                {
                                  t = term_c_31;
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
                      if(match_cons(p_45, sym_Prefix_2))
                        {
                          q_45 = ATgetArgument(p_45, 0);
                          r_45 = ATgetArgument(p_45, 1);
                          {
                            ATerm w_45 = NULL,y_45 = NULL;
                            ATerm g_31;
                            g_31 = t;
                            {
                              ATerm x_45 = NULL;
                              t = not_null(q_45);
                              {
                                t = eval_config_0(t);
                                {
                                  x_45 = t;
                                  if(((w_45 != NULL) && (w_45 != x_45)))
                                    _fail(x_45);
                                  else
                                    w_45 = x_45;
                                }
                              }
                            }
                            t = g_31;
                            {
                              ATerm z_45 = NULL;
                              t = not_null(r_45);
                              {
                                t = eval_config_0(t);
                                {
                                  z_45 = t;
                                  if(((y_45 != NULL) && (y_45 != z_45)))
                                    _fail(z_45);
                                  else
                                    y_45 = z_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(y_45));
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
  ATerm h_46 = NULL;
  h_46 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_18, not_null(h_46));
    {
      t = table_get_0(t);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm j_31;
              j_31 = t;
              {
                ATerm j_46 = NULL;
                ATerm k_46 = NULL;
                k_46 = t;
                if(((j_46 != NULL) && (j_46 != k_46)))
                  _fail(k_46);
                else
                  j_46 = k_46;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_18, not_null(h_46), not_null(j_46));
                  t = table_put_0(t);
                }
              }
              t = j_31;
            }
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
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
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_58(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_46 = NULL,s_46 = NULL,t_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym__2))
    {
      s_46 = ATgetArgument(p_46, 0);
      t_46 = ATgetArgument(p_46, 1);
      t = SSL_table_get(not_null(s_46), not_null(t_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym__3))
    {
      b_47 = ATgetArgument(a_47, 0);
      c_47 = ATgetArgument(a_47, 1);
      d_47 = ATgetArgument(a_47, 2);
      {
        ATerm m_31;
        m_31 = t;
        {
          ATerm h_47 = NULL;
          ATerm i_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_47), not_null(c_47));
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                t = (ATerm) ATempty;
              }
            {
              i_47 = t;
              if(((h_47 != NULL) && (h_47 != i_47)))
                _fail(i_47);
              else
                h_47 = i_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_47), not_null(c_47), (ATerm) ATinsert(CheckATermList(not_null(h_47)), not_null(d_47)));
            t = table_put_0(t);
          }
        }
        t = m_31;
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
  ATerm m_47 = NULL;
  ATerm n_47 = NULL;
  t = term_b_11;
  {
    t = s_75(t);
    {
      n_47 = t;
      if(((m_47 != NULL) && (m_47 != n_47)))
        _fail(n_47);
      else
        m_47 = n_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, not_null(m_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_string(t_47, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(t_47) == AT_LIST) && !(ATisEmpty(t_47))))
        {
          u_47 = ATgetFirst((ATermList) t_47);
          v_47 = (ATerm) ATgetNext((ATermList) t_47);
          {
            ATerm y_47 = NULL;
            ATerm p_31;
            p_31 = t;
            {
              t = not_null(u_47);
              t = a_0(t);
            }
            t = p_31;
            {
              ATerm b_48 = NULL;
              t = term_b_11;
              {
                t = c_0(t);
                {
                  b_48 = t;
                  if(((y_47 != NULL) && (y_47 != b_48)))
                    _fail(b_48);
                  else
                    y_47 = b_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_47)), not_null(y_47));
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
    ATerm g_48 = NULL;
    g_48 = t;
    f_48 :
    if(!(match_string(g_48, "--help")))
      {
        if(!(match_string(g_48, "-h")))
          {
            if(!(match_string(g_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_r_31;
    {
      t = set_config_0(t);
      t = term_s_31;
    }
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    t = term_y_31;
    return(t);
  }
  t = Option_3(t, w_8, x_8, y_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  i_48 :
  if(((ATgetType(j_48) == AT_LIST) && !(ATisEmpty(j_48))))
    {
      k_48 = ATgetFirst((ATermList) j_48);
      l_48 = (ATerm) ATgetNext((ATermList) j_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_47 (ATerm), ATerm a_48 (ATerm))
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  v_48 :
  if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
    {
      x_48 = ATgetFirst((ATermList) w_48);
      y_48 = (ATerm) ATgetNext((ATermList) w_48);
      {
        ATerm c_49 = NULL,e_49 = NULL;
        ATerm d_49 = NULL;
        t = SSLgetAnnotations(not_null(w_48));
        {
          d_49 = t;
          if(((c_49 != NULL) && (c_49 != d_49)))
            _fail(d_49);
          else
            c_49 = d_49;
        }
        {
          t = not_null(x_48);
          {
            ATerm g_49 = NULL;
            t = z_47(t);
            {
              e_49 = t;
              {
                t = not_null(y_48);
                {
                  ATerm i_49 = NULL;
                  t = a_48(t);
                  {
                    g_49 = t;
                    {
                      ATerm j_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_49)), not_null(e_49)), not_null(c_49));
                      {
                        j_49 = t;
                        if(((i_49 != NULL) && (i_49 != j_49)))
                          _fail(j_49);
                        else
                          i_49 = j_49;
                      }
                      t = not_null(i_49);
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
  ATerm t_49 = NULL;
  t_49 = t;
  s_49 :
  if(((ATgetType(t_49) == AT_LIST) && ATisEmpty(t_49)))
    {
      {
        ATerm v_49 = NULL,x_49 = NULL;
        ATerm a_32;
        a_32 = t;
        {
          ATerm w_49 = NULL;
          t = SSLgetAnnotations(not_null(t_49));
          {
            w_49 = t;
            if(((v_49 != NULL) && (v_49 != w_49)))
              _fail(w_49);
            else
              v_49 = w_49;
          }
        }
        t = a_32;
        {
          ATerm y_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_49));
          {
            y_49 = t;
            if(((x_49 != NULL) && (x_49 != y_49)))
              _fail(y_49);
            else
              x_49 = y_49;
          }
          t = not_null(x_49);
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
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  d_50 :
  if(match_cons(e_50, sym__2))
    {
      f_50 = ATgetArgument(e_50, 0);
      g_50 = ATgetArgument(e_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_18, not_null(f_50), not_null(g_50));
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
  ATerm b_32;
  b_32 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_32;
        t = q_75(t);
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        {
        }
      }
  }
  t = b_32;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm o_50 = NULL;
      ATerm m_32;
      m_32 = t;
      {
        ATerm m_50 = NULL;
        ATerm n_50 = NULL;
        n_50 = t;
        if(((m_50 != NULL) && (m_50 != n_50)))
          _fail(n_50);
        else
          m_50 = n_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_28, not_null(m_50));
          t = set_config_0(t);
        }
      }
      t = m_32;
      {
        ATerm p_50 = NULL;
        p_50 = t;
        if(((o_50 != NULL) && (o_50 != p_50)))
          _fail(p_50);
        else
          o_50 = p_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_50));
      }
      return(t);
    }
    ATerm a_9 (ATerm t)
    {
      ATerm n_32 = t;
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
          t = n_32;
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
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  ATerm u_32;
  u_32 = t;
  {
    ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
    y_50 = t;
    u_50 :
    if(match_cons(y_50, sym__3))
      {
        z_50 = ATgetArgument(y_50, 0);
        a_51 = ATgetArgument(y_50, 1);
        b_51 = ATgetArgument(y_50, 2);
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
            {
              if(((x_50 != NULL) && (x_50 != b_51)))
                _fail(b_51);
              else
                x_50 = b_51;
              t = SSL_table_put(not_null(v_50), not_null(w_50), not_null(x_50));
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
  ATerm e_51 = NULL;
  ATerm v_32;
  v_32 = t;
  {
    t = term_w_32;
    t = table_put_0(t);
  }
  t = v_32;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_75(t);
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_9);
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_33;
          g_33 = t;
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_31;
                t = get_config_0(t);
                LocalPopChoice(i_33);
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
          LocalPopChoice(e_33);
        }
      else
        {
          t = d_33;
          {
            ATerm n_33 = t;
            int o_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm i_9 (ATerm t)
                  {
                    ATerm f_51 = NULL;
                    f_51 = t;
                    if(((e_51 != NULL) && (e_51 != f_51)))
                      _fail(f_51);
                    else
                      e_51 = f_51;
                    return(t);
                  }
                  t = Undefined_1(t, i_9);
                  return(t);
                }
                t = fetch_1(t, f_9);
                {
                  ATerm l_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_51)), term_p_33);
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
          t = term_p_29;
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
        ATerm r_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_73);
            LocalPopChoice(w_33);
          }
        else
          {
            t = r_33;
            {
              ATerm x_33 = t;
              int a_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_34);
                }
              else
                {
                  t = x_33;
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
      ATerm i_51 = NULL;
      ATerm j_51 = NULL;
      t = term_e_34;
      {
        t = xtc_find_0(t);
        {
          t = get_path_0(t);
          {
            j_51 = t;
            if(((i_51 != NULL) && (i_51 != j_51)))
              _fail(j_51);
            else
              i_51 = j_51;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_51)), term_h_34));
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
