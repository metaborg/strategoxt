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
ATerm term_a_33;
ATerm term_b_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_z_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_o_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_b_26;
ATerm term_u_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_w_24;
ATerm term_w_23;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_v_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_12;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_x_9;
ATerm term_s_9;
void init_constant_terms (void)
{
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Syntax_1, term_g_16);
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
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_e_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_f_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_l_10);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_22);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_z_10);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_z_10);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_z_10);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_s_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_z_10);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__3, term_r_29, term_s_29, (ATerm) ATempty);
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
ATerm xtc_transform_term_2 (ATerm, ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm n_69 (ATerm));
ATerm assert_1 (ATerm, ATerm f_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_70 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm t_71 (ATerm));
ATerm stderr_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm p_68 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_54 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm o_69 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm o_53 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_54 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm j_60 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm r_71 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm s_48 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_54 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_54 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm y_54 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm union_1 (ATerm, ATerm v_65 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm h_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm parse_stratego_options_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_70 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm z_58 (ATerm), ATerm a_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_70 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm h_69 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm i_69 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm));
ATerm crush_2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_54 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_75 (ATerm));
ATerm Program_1 (ATerm, ATerm f_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_70 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_74 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_60 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm u_46 (ATerm), ATerm v_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_70 (ATerm));
ATerm map_1 (ATerm, ATerm y_59 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_58 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_48 (ATerm), ATerm e_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_75 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm w_73 (ATerm), ATerm x_73 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm t, ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, w_69, x_69);
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
ATerm xtc_command_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm l_4 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm m_4 = NULL;
    t = n_69(t);
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
    ATerm z_9;
    z_9 = t;
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
    t = z_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_70 (ATerm))
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
        ATerm i_10;
        i_10 = t;
        {
          ATerm e_5 = NULL;
          ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
          t = f_70(t);
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
                    ATerm j_10 = t;
                    int k_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), term_l_10);
                        t = table_get_0(t);
                        LocalPopChoice(k_10);
                      }
                    else
                      {
                        t = j_10;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_5), term_l_10, (ATerm) ATinsert(CheckATermList(not_null(d_5)), (ATerm) ATinsert(CheckATermList(not_null(c_5)), not_null(x_4))));
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
        t = i_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_70 (ATerm))
{
  ATerm m_10;
  m_10 = t;
  {
    t = t_70(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = m_10;
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
          t = term_w_10;
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
              ATerm x_10;
              x_10 = t;
              {
                ATerm w_5 = NULL;
                t = term_y_10;
                {
                  w_5 = t;
                  if(((v_5 != NULL) && (v_5 != w_5)))
                    _fail(w_5);
                  else
                    v_5 = w_5;
                }
              }
              t = x_10;
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
  t = term_z_10;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), term_e_11);
    {
      t = conc_strings_0(t);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
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
      ATerm h_11;
      h_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_y_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_z_10);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_i_11;
                return(t);
              }
              t = assert_1(t, f_0);
            }
          }
        }
      }
      t = h_11;
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
                ATerm m_11 = t;
                int p_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(p_11);
                  }
                else
                  {
                    t = m_11;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_6)), term_k_11), not_null(r_6)), term_q_11));
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
      ATerm v_11;
      v_11 = t;
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
      t = v_11;
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
ATerm xtc_transform_2 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm w_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(b_12);
        }
      else
        {
          t = a_12;
          t = stdin_0(t);
        }
      LocalPopChoice(z_11);
      t = xtc_transform_file_2(t, p_69, q_69);
    }
  else
    {
      t = w_11;
      t = xtc_transform_term_2(t, p_69, q_69);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_7)), term_c_12), not_null(x_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_59 (ATerm), ATerm c_59 (ATerm))
{
  ATerm e_8 = NULL,g_8 = NULL;
  ATerm d_12;
  d_12 = t;
  {
    ATerm f_8 = NULL;
    t = b_59(t);
    {
      f_8 = t;
      if(((e_8 != NULL) && (e_8 != f_8)))
        _fail(f_8);
      else
        e_8 = f_8;
    }
  }
  t = d_12;
  {
    ATerm h_8 = NULL;
    t = c_59(t);
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
ATerm guarantee_extension_1 (ATerm t, ATerm t_71 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_z_10;
      t = t_71(t);
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
      ATerm j_12;
      j_12 = t;
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
      t = j_12;
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
        ATerm m_12 = t;
        int n_12 = stack_ptr;
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
                  int p_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(p_12);
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
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
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
                    ATerm q_12 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm r_12 = t;
                        int s_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(s_12);
                          }
                        else
                          {
                            t = r_12;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = q_12;
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
ATerm if_keep1_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13;
      c_13 = t;
      {
        ATerm p_9 = NULL;
        ATerm q_9 = NULL;
        t = term_d_13;
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
      t = c_13;
      t = p_68(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = w_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13;
      g_13 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), term_h_13);
          t = geq_0(t);
        }
      }
      t = g_13;
      t = v_54(t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      {
      }
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, o_69, r_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = term_k_13;
      return(t);
    }
    t = debug_1(t, t_0);
    return(t);
  }
  t = if_verbose6_1(t, s_0);
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm b_10 = NULL;
      ATerm u_0 (ATerm t)
      {
        t = term_r_13;
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
    t = o_13;
    {
      ATerm u_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 = NULL;
          t = not_null(a_10);
          {
            ATerm v_0 (ATerm t)
            {
              t = term_y_13;
              return(t);
            }
            t = find_in_includes_1(t, v_0);
            {
              ATerm d_10 = NULL;
              d_10 = t;
              if(((c_10 != NULL) && (c_10 != d_10)))
                _fail(d_10);
              else
                c_10 = d_10;
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_10));
            }
          }
          LocalPopChoice(x_13);
        }
      else
        {
          t = u_13;
          {
            ATerm e_10 = NULL;
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_z_13;
                return(t);
              }
              t = say_1(t, x_0);
              return(t);
            }
            t = if_verbose2_1(t, w_0);
            {
              ATerm f_10 = NULL;
              ATerm y_0 (ATerm t)
              {
                t = term_a_14;
                return(t);
              }
              t = guarantee_extension_1(t, y_0);
              {
                f_10 = t;
                if(((e_10 != NULL) && (e_10 != f_10)))
                  _fail(f_10);
                else
                  e_10 = f_10;
              }
              {
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_10));
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
                          ATerm g_10 = NULL;
                          ATerm h_10 = NULL;
                          h_10 = t;
                          if(((g_10 != NULL) && (g_10 != h_10)))
                            _fail(h_10);
                          else
                            g_10 = h_10;
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_10)), term_h_14);
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
                      t = term_i_14;
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
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym__2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      {
        t = not_null(r_10);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm u_10 = NULL;
            ATerm v_10 = NULL;
            v_10 = t;
            if(((u_10 != NULL) && (u_10 != v_10)))
              _fail(v_10);
            else
              u_10 = v_10;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_10)), term_j_14), not_null(u_10));
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
ATerm find_in_includes_1 (ATerm t, ATerm o_53 (ATerm))
{
  ATerm a_11 = NULL,c_11 = NULL;
  ATerm n_14;
  n_14 = t;
  {
    ATerm b_11 = NULL;
    b_11 = t;
    if(((a_11 != NULL) && (a_11 != b_11)))
      _fail(b_11);
    else
      a_11 = b_11;
  }
  t = n_14;
  {
    ATerm d_11 = NULL;
    t = term_h_14;
    {
      t = get_config_0(t);
      {
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(c_11));
      {
        t = find_in_path_0(t);
        {
          ATerm f_1 (ATerm t)
          {
            t = debug_1(t, o_53);
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
  ATerm j_11 = NULL;
  ATerm l_11 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm h_1 (ATerm t)
    {
      t = term_o_14;
      return(t);
    }
    t = debug_1(t, h_1);
    return(t);
  }
  t = if_verbose6_1(t, g_1);
  {
    j_11 = t;
    {
      ATerm i_1 (ATerm t)
      {
        t = term_s_14;
        return(t);
      }
      t = guarantee_extension_1(t, i_1);
      {
        l_11 = t;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_11 = NULL;
              ATerm k_1 (ATerm t)
              {
                t = term_x_14;
                return(t);
              }
              t = find_in_includes_1(t, k_1);
              {
                ATerm o_11 = NULL;
                o_11 = t;
                if(((n_11 != NULL) && (n_11 != o_11)))
                  _fail(o_11);
                else
                  n_11 = o_11;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_11));
              }
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = term_y_14;
                    return(t);
                  }
                  t = say_1(t, n_1);
                  return(t);
                }
                t = if_verbose2_1(t, m_1);
                {
                  t = not_null(j_11);
                  {
                    t = get_syntax_definition_0(t);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        t = term_z_14;
                        return(t);
                      }
                      ATerm p_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), term_a_15);
                        return(t);
                      }
                      t = xtc_transform_2(t, o_1, p_1);
                      {
                        ATerm q_1 (ATerm t)
                        {
                          t = not_null(l_11);
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
                t = term_x_14;
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
ATerm if_verbose2_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm c_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15;
      l_15 = t;
      {
        ATerm t_11 = NULL;
        ATerm u_11 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            u_11 = t;
            if(((t_11 != NULL) && (t_11 != u_11)))
              _fail(u_11);
            else
              t_11 = u_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), term_m_15);
          t = geq_0(t);
        }
      }
      t = l_15;
      t = u_54(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = c_15;
      {
      }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm x_11 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm y_11 = NULL;
    t = j_60(t);
    {
      y_11 = t;
      if(((x_11 != NULL) && (x_11 != y_11)))
        _fail(y_11);
      else
        x_11 = y_11;
    }
    return(t);
  }
  t = fetch_1(t, t_1);
  t = not_null(x_11);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym_stdin_0))
    {
      ATerm h_12 = NULL;
      ATerm i_12 = NULL;
      t = term_n_15;
      {
        t = ReadFromFile_0(t);
        {
          i_12 = t;
          if(((h_12 != NULL) && (h_12 != i_12)))
            _fail(i_12);
          else
            h_12 = i_12;
        }
      }
      t = not_null(h_12);
    }
  else
    {
      if(match_cons(f_12, sym_FILE_1))
        {
          g_12 = ATgetArgument(f_12, 0);
          {
            ATerm k_12 = NULL;
            ATerm l_12 = NULL;
            t = not_null(g_12);
            {
              t = ReadFromFile_0(t);
              {
                l_12 = t;
                if(((k_12 != NULL) && (k_12 != l_12)))
                  _fail(l_12);
                else
                  k_12 = l_12;
              }
            }
            t = not_null(k_12);
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
  ATerm u_12 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      t = term_o_15;
      return(t);
    }
    t = debug_1(t, v_1);
    return(t);
  }
  t = if_verbose6_1(t, u_1);
  {
    ATerm p_15 = t;
    int u_15 = stack_ptr;
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
        LocalPopChoice(u_15);
      }
    else
      {
        t = p_15;
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_12 = NULL;
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
                  v_12 = t;
                  {
                    ATerm x_12 = NULL;
                    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
                    t = not_null(v_12);
                    {
                      x_12 = t;
                      {
                        t = SSL_explode_term(not_null(x_12));
                        {
                          z_12 = t;
                          t_12 :
                          if(match_cons(z_12, sym__2))
                            {
                              a_13 = ATgetArgument(z_12, 0);
                              b_13 = ATgetArgument(z_12, 1);
                              if(((u_12 != NULL) && (u_12 != a_13)))
                                _fail(a_13);
                              else
                                u_12 = a_13;
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(u_12))));
                  }
                }
              }
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_i_16));
            }
        }
      }
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          t = term_o_15;
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
  ATerm m_13 = NULL,n_13 = NULL;
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
    m_13 = t;
    l_13 :
    if(match_cons(m_13, sym_FILE_1))
      {
        n_13 = ATgetArgument(m_13, 0);
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
                      ATerm p_13 = NULL,q_13 = NULL;
                      p_13 = t;
                      j_13 :
                      if(match_cons(p_13, sym_Meta_1))
                        {
                          q_13 = ATgetArgument(p_13, 0);
                          {
                            t = not_null(q_13);
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm s_13 = NULL,t_13 = NULL;
                                s_13 = t;
                                i_13 :
                                if(match_cons(s_13, sym_Syntax_1))
                                  {
                                    t_13 = ATgetArgument(s_13, 0);
                                    t = not_null(t_13);
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
                        ATerm v_13 = NULL;
                        ATerm w_13 = NULL;
                        w_13 = t;
                        if(((v_13 != NULL) && (v_13 != w_13)))
                          _fail(w_13);
                        else
                          v_13 = w_13;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(n_13)), term_q_16), not_null(v_13)), term_p_16);
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
ATerm basename_1 (ATerm t, ATerm r_71 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 (ATerm t)
        {
          ATerm w_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, f_14);
              LocalPopChoice(y_16);
            }
          else
            {
              t = w_16;
              {
                ATerm b_17 = t;
                int c_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm d_14 = NULL;
                      d_14 = t;
                      b_14 :
                      if(!(match_int(d_14, 47)))
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
                        ATerm e_14 = NULL;
                        e_14 = t;
                        c_14 :
                        if(!(match_int(e_14, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, k_2, r_71);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = f_14(t);
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
ATerm FILE_1 (ATerm t, ATerm s_48 (ATerm))
{
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_FILE_1))
    {
      m_14 = ATgetArgument(l_14, 0);
      {
        ATerm p_14 = NULL,r_14 = NULL;
        ATerm q_14 = NULL;
        t = SSLgetAnnotations(not_null(l_14));
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
        {
          t = not_null(m_14);
          {
            ATerm t_14 = NULL;
            t = s_48(t);
            {
              r_14 = t;
              {
                ATerm u_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(r_14)), not_null(p_14));
                {
                  u_14 = t;
                  if(((t_14 != NULL) && (t_14 != u_14)))
                    _fail(u_14);
                  else
                    t_14 = u_14;
                }
                t = not_null(t_14);
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
  ATerm d_15 = NULL,e_15 = NULL;
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
    ATerm e_17;
    e_17 = t;
    {
      ATerm g_15 = NULL,h_15 = NULL;
      ATerm n_2 (ATerm t)
      {
        ATerm f_15 = NULL;
        t = basename_1(t, _id);
        {
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
        }
        return(t);
      }
      t = FILE_1(t, n_2);
      {
        t = get_syntax_0(t);
        {
          t = get_parse_table_0(t);
          {
            g_15 = t;
            b_15 :
            if(match_cons(g_15, sym_FILE_1))
              {
                h_15 = ATgetArgument(g_15, 0);
                if(((d_15 != NULL) && (d_15 != h_15)))
                  _fail(h_15);
                else
                  d_15 = h_15;
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = e_17;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_h_17;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm i_15 = NULL;
        ATerm j_15 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm q_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_i_17);
            return(t);
          }
          t = if_verbose3_1(t, q_2);
          {
            j_15 = t;
            if(((i_15 != NULL) && (i_15 != j_15)))
              _fail(j_15);
            else
              i_15 = j_15;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_15)), not_null(d_15)), term_m_17), term_l_17);
        return(t);
      }
      t = xtc_transform_2(t, o_2, p_2);
      {
        ATerm r_2 (ATerm t)
        {
          t = term_n_17;
          return(t);
        }
        t = xtc_transform_2(t, r_2, pass_verbose_0);
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(e_15);
              {
                ATerm u_2 (ATerm t)
                {
                  t = term_o_17;
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
              t = term_s_17;
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
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym__2))
    {
      s_15 = ATgetArgument(r_15, 0);
      t_15 = ATgetArgument(r_15, 1);
      {
        ATerm w_15 = NULL;
        ATerm x_15 = NULL,z_15 = NULL;
        ATerm y_15 = NULL;
        t = not_null(s_15);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = (ATerm) ATempty;
            }
          {
            y_15 = t;
            if(((x_15 != NULL) && (x_15 != y_15)))
              _fail(y_15);
            else
              x_15 = y_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(x_15));
          {
            ATerm d_18 = t;
            int e_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(e_18);
              }
            else
              {
                t = d_18;
                t = conc_more_lists_0(t);
              }
            {
              z_15 = t;
              if(((w_15 != NULL) && (w_15 != z_15)))
                _fail(z_15);
              else
                w_15 = z_15;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_18, not_null(s_15), not_null(w_15));
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
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 (ATerm t)
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, f_16);
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm e_16 = NULL;
                  e_16 = t;
                  d_16 :
                  if(!(match_int(e_16, 47)))
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
        t = f_16(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = SSL_table_keys(not_null(h_16));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_2 (ATerm t)
      {
        ATerm x_16 = NULL;
        ATerm z_16 = NULL;
        x_16 = t;
        {
          ATerm a_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), not_null(x_16));
          {
            t = table_get_0(t);
            {
              a_17 = t;
              if(((z_16 != NULL) && (z_16 != a_17)))
                _fail(a_17);
              else
                z_16 = a_17;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), not_null(z_16));
        }
        return(t);
      }
      t = map_1(t, z_2);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm l_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18;
      r_18 = t;
      {
        ATerm f_17 = NULL;
        ATerm g_17 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            g_17 = t;
            if(((f_17 != NULL) && (f_17 != g_17)))
              _fail(g_17);
            else
              f_17 = g_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), term_w_18);
          t = geq_0(t);
        }
      }
      t = r_18;
      t = x_54(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = l_18;
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
    ATerm j_17 = NULL;
    ATerm k_17 = NULL;
    k_17 = t;
    if(((j_17 != NULL) && (j_17 != k_17)))
      _fail(k_17);
    else
      j_17 = k_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_18, not_null(j_17));
      t = printnl_0(t);
    }
  }
  t = x_18;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm r_17 = NULL;
  ATerm t_17 = NULL,u_17 = NULL;
  r_17 = t;
  {
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(r_17)));
    {
      t = table_get_0(t);
      {
        v_17 = t;
        p_17 :
        if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
          {
            w_17 = ATgetFirst((ATermList) v_17);
            z_17 = (ATerm) ATgetNext((ATermList) v_17);
            q_17 :
            if(match_cons(w_17, sym__2))
              {
                x_17 = ATgetArgument(w_17, 0);
                y_17 = ATgetArgument(w_17, 1);
                {
                  if(((t_17 != NULL) && (t_17 != x_17)))
                    _fail(x_17);
                  else
                    t_17 = x_17;
                  if(((u_17 != NULL) && (u_17 != y_17)))
                    _fail(y_17);
                  else
                    u_17 = y_17;
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
    t = not_null(u_17);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm s_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_18)));
        {
          t = table_get_0(t);
          {
            ATerm a_3 (ATerm t)
            {
              ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
              t_18 = t;
              g_18 :
              if(match_cons(t_18, sym__2))
                {
                  u_18 = ATgetArgument(t_18, 0);
                  v_18 = ATgetArgument(t_18, 1);
                  {
                    if(((p_18 != NULL) && (p_18 != u_18)))
                      _fail(u_18);
                    else
                      p_18 = u_18;
                    if(((s_18 != NULL) && (s_18 != v_18)))
                      _fail(v_18);
                    else
                      s_18 = v_18;
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
        t = not_null(s_18);
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
      t = term_f_19;
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
ATerm if_verbose4_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_19;
      k_19 = t;
      {
        ATerm z_18 = NULL;
        ATerm a_19 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            a_19 = t;
            if(((z_18 != NULL) && (z_18 != a_19)))
              _fail(a_19);
            else
              z_18 = a_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), term_l_19);
          t = geq_0(t);
        }
      }
      t = k_19;
      t = w_54(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_54 (ATerm))
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19;
      o_19 = t;
      {
        ATerm i_19 = NULL;
        ATerm j_19 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            j_19 = t;
            if(((i_19 != NULL) && (i_19 != j_19)))
              _fail(j_19);
            else
              i_19 = j_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), term_p_19);
          t = geq_0(t);
        }
      }
      t = o_19;
      t = y_54(t);
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
  ATerm y_19 = NULL,z_19 = NULL,b_20 = NULL;
  y_19 = t;
  q_19 :
  if(match_cons(y_19, sym__2))
    {
      z_19 = ATgetArgument(y_19, 0);
      b_20 = ATgetArgument(y_19, 1);
      if(((z_19 != NULL) && (z_19 != b_20)))
        _fail(b_20);
      else
        z_19 = b_20;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  h_20 :
  if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
    {
      j_20 = ATgetFirst((ATermList) i_20);
      k_20 = (ATerm) ATgetNext((ATermList) i_20);
      {
        t = a_66(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm n_20 = NULL;
            n_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), not_null(n_20));
              t = z_65(t);
            }
            return(t);
          }
          t = fetch_1(t, c_3);
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
ATerm union_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        t = not_null(u_20);
        {
          ATerm z_20 (ATerm t)
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_20);
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
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(v_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_65, g_3);
                      t = z_20(t);
                      LocalPopChoice(u_19);
                    }
                  else
                    {
                      t = t_19;
                      t = Cons_2(t, _id, z_20);
                    }
                }
              }
            return(t);
          }
          t = z_20(t);
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
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym__3))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      h_21 = ATgetArgument(e_21, 2);
      {
        ATerm v_19;
        v_19 = t;
        {
          ATerm q_21 = NULL;
          ATerm r_21 = NULL,t_21 = NULL;
          ATerm s_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(g_21));
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                t = (ATerm) ATempty;
              }
            {
              s_21 = t;
              if(((r_21 != NULL) && (r_21 != s_21)))
                _fail(s_21);
              else
                r_21 = s_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), not_null(h_21));
            {
              t = union_1(t, eq_0);
              {
                t_21 = t;
                if(((q_21 != NULL) && (q_21 != t_21)))
                  _fail(t_21);
                else
                  q_21 = t_21;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_21), not_null(g_21), not_null(q_21));
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
ATerm table_putlist_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm c_22 = NULL,g_22 = NULL,h_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      g_22 = ATgetArgument(c_22, 0);
      h_22 = ATgetArgument(c_22, 1);
      {
        t = not_null(h_22);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
            m_22 = t;
            a_22 :
            if(match_cons(m_22, sym__2))
              {
                n_22 = ATgetArgument(m_22, 0);
                o_22 = ATgetArgument(m_22, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_22), not_null(n_22), not_null(o_22));
                  t = h_55(t);
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
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_ReadFromFile(not_null(u_22));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm z_22 = NULL;
  ATerm b_23 = NULL;
  z_22 = t;
  {
    ATerm a_20;
    a_20 = t;
    {
      ATerm c_23 = NULL;
      t = term_c_20;
      {
        c_23 = t;
        if(((b_23 != NULL) && (b_23 != c_23)))
          _fail(c_23);
        else
          b_23 = c_23;
      }
    }
    t = a_20;
    {
      t = SSL_open_file(not_null(z_22), not_null(b_23));
      t = SSL_close_file(not_null(z_22));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm h_23 = NULL;
  ATerm j_23 = NULL;
  h_23 = t;
  {
    ATerm d_20 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_Imported_1, not_null(h_23)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_20;
      }
    {
      ATerm e_20;
      e_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_19, term_f_20, (ATerm) ATinsert(ATempty, not_null(h_23)));
        t = table_put_0(t);
      }
      t = e_20;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            t = term_g_20;
            return(t);
          }
          t = debug_1(t, k_3);
          return(t);
        }
        t = if_verbose4_1(t, j_3);
        {
          ATerm l_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(m_20);
            }
          else
            {
              t = l_20;
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
              ATerm k_23 = NULL;
              k_23 = t;
              if(((j_23 != NULL) && (j_23 != k_23)))
                _fail(k_23);
              else
                j_23 = k_23;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(j_23));
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
                      t = (ATerm) ATmakeAppl(sym__3, term_b_19, (ATerm)ATmakeAppl(sym_Imported_1, not_null(h_23)), (ATerm) ATempty);
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
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_getenv(not_null(o_23));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_21;
            t = getenv_0(t);
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
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
      t = term_b_21;
      return(t);
    }
    t = debug_1(t, z_3);
    return(t);
  }
  t = if_verbose5_1(t, w_3);
  {
    ATerm c_21;
    c_21 = t;
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
    t = c_21;
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
          ATerm p_21 = t;
          int u_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(u_21);
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
        ATerm s_23 = NULL;
        ATerm t_23 = NULL;
        t_23 = t;
        if(((s_23 != NULL) && (s_23 != t_23)))
          _fail(t_23);
        else
          s_23 = t_23;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_21), not_null(s_23)), term_v_21);
          {
            t = error_0(t);
            {
              ATerm k_4 (ATerm t)
              {
                t = term_b_19;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm p_4 (ATerm t)
                    {
                      t = term_x_21;
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
ATerm xtc_find_path_0 (ATerm t)
{
  t = xtc_find_0(t);
  t = get_path_0(t);
  return(t);
}
ATerm parse_stratego_options_0 (ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm a_24 = NULL;
        a_24 = t;
        v_23 :
        if(!(match_string(a_24, "-I")))
          {
            if(!(match_string(a_24, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        ATerm d_22;
        d_22 = t;
        {
          ATerm b_24 = NULL;
          ATerm c_24 = NULL;
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATempty, not_null(b_24)));
            t = extend_config_0(t);
          }
        }
        t = d_22;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_e_22;
        return(t);
      }
      t = ArgOption_3(t, q_4, r_4, s_4);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm f_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm d_24 = NULL;
              d_24 = t;
              x_23 :
              if(!(match_string(d_24, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm j_22;
              j_22 = t;
              {
                ATerm e_24 = NULL;
                ATerm f_24 = NULL;
                f_24 = t;
                if(((e_24 != NULL) && (e_24 != f_24)))
                  _fail(f_24);
                else
                  e_24 = f_24;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(e_24));
                  t = set_config_0(t);
                }
              }
              t = j_22;
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_k_22;
              return(t);
            }
            t = ArgOption_3(t, t_4, z_4, a_5);
            LocalPopChoice(i_22);
          }
        else
          {
            t = f_22;
            {
              ATerm i_5 (ATerm t)
              {
                ATerm g_24 = NULL;
                g_24 = t;
                z_23 :
                if(!(match_string(g_24, "-silent")))
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
                  t = term_q_22;
                  t = set_config_0(t);
                }
                t = l_22;
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_r_22;
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
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      t = SSL_rename(not_null(m_24), not_null(n_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_stdout_0))
    {
      ATerm x_24 = NULL,z_24 = NULL;
      ATerm s_22;
      s_22 = t;
      {
        ATerm y_24 = NULL;
        t = SSLgetAnnotations(not_null(v_24));
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
      }
      t = s_22;
      {
        ATerm a_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(x_24));
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
        t = not_null(z_24);
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
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym__2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      t = SSL_copy(not_null(h_25), not_null(i_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym_FILE_1))
    {
      t_25 = ATgetArgument(s_25, 0);
      {
        ATerm t_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_25 = NULL;
            t = m_0(t);
            {
              v_25 = t;
              p_25 :
              if(match_cons(v_25, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), term_w_22);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(t_25);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_w_22;
            LocalPopChoice(v_22);
          }
        else
          {
            t = t_22;
            {
              ATerm x_25 = NULL;
              ATerm y_25 = NULL;
              t = m_0(t);
              {
                y_25 = t;
                {
                  if(((x_25 != NULL) && (x_25 != y_25)))
                    _fail(y_25);
                  else
                    x_25 = y_25;
                  {
                    ATerm x_22 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_22;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(x_25));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_25));
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
    {
      g_26 = ATgetFirst((ATermList) f_26);
      h_26 = (ATerm) ATgetNext((ATermList) f_26);
      t = not_null(h_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym__2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      {
        ATerm y_22;
        y_22 = t;
        {
          ATerm u_26 = NULL;
          ATerm v_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(q_26));
          {
            ATerm a_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(d_23);
              }
            else
              {
                t = a_23;
                t = (ATerm) ATempty;
              }
            {
              v_26 = t;
              if(((u_26 != NULL) && (u_26 != v_26)))
                _fail(v_26);
              else
                u_26 = v_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_26), not_null(q_26), not_null(u_26));
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
ATerm end_scope_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    ATerm k_27 = NULL;
    ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
    t = c_70(t);
    {
      k_27 = t;
      {
        if(((j_27 != NULL) && (j_27 != k_27)))
          _fail(k_27);
        else
          j_27 = k_27;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), term_l_10);
              t = table_get_0(t);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_27 = t;
            g_27 :
            if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
              {
                m_27 = ATgetFirst((ATermList) l_27);
                n_27 = (ATerm) ATgetNext((ATermList) l_27);
                {
                  if(((i_27 != NULL) && (i_27 != m_27)))
                    _fail(m_27);
                  else
                    i_27 = m_27;
                  {
                    if(((h_27 != NULL) && (h_27 != n_27)))
                      _fail(n_27);
                    else
                      h_27 = n_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_27), term_l_10, not_null(h_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(i_27);
                          {
                            ATerm l_5 (ATerm t)
                            {
                              ATerm o_27 = NULL;
                              o_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(o_27));
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
  t = e_23;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_remove(not_null(u_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_58 (ATerm), ATerm a_59 (ATerm))
{
  ATerm i_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_58(t);
      t = a_59(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = i_23;
      {
        t = a_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_70 (ATerm))
{
  ATerm b_28 = NULL;
  ATerm m_23;
  m_23 = t;
  {
    ATerm c_28 = NULL;
    ATerm d_28 = NULL;
    t = b_70(t);
    {
      c_28 = t;
      {
        if(((b_28 != NULL) && (b_28 != c_28)))
          _fail(c_28);
        else
          b_28 = c_28;
        {
          ATerm e_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_l_10);
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
              e_28 = t;
              if(((d_28 != NULL) && (d_28 != e_28)))
                _fail(e_28);
              else
                d_28 = e_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), term_l_10, (ATerm) ATinsert(CheckATermList(not_null(d_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_23;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm j_28 = NULL,k_28 = NULL;
  ATerm n_5 (ATerm t)
  {
    t = term_i_11;
    return(t);
  }
  t = begin_scope_1(t, n_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm q_23;
      q_23 = t;
      {
        ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
        ATerm r_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_23;
            t = table_get_0(t);
            LocalPopChoice(u_23);
          }
        else
          {
            t = r_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_28 = t;
          i_28 :
          if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
            {
              m_28 = ATgetFirst((ATermList) l_28);
              n_28 = (ATerm) ATgetNext((ATermList) l_28);
              {
                if(((k_28 != NULL) && (k_28 != m_28)))
                  _fail(m_28);
                else
                  k_28 = m_28;
                {
                  if(((j_28 != NULL) && (j_28 != n_28)))
                    _fail(n_28);
                  else
                    j_28 = n_28;
                  {
                    t = not_null(k_28);
                    {
                      ATerm x_5 (ATerm t)
                      {
                        ATerm y_23 = t;
                        int h_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(h_24);
                          }
                        else
                          {
                            t = y_23;
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
      t = q_23;
      {
        ATerm y_5 (ATerm t)
        {
          t = term_i_11;
          return(t);
        }
        t = end_scope_1(t, y_5);
      }
      return(t);
    }
    t = restore_always_2(t, h_69, o_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        ATerm r_28 = NULL;
        t = term_q_11;
        {
          t = get_config_0(t);
          {
            r_28 = t;
            if(((q_28 != NULL) && (q_28 != r_28)))
              _fail(r_28);
            else
              q_28 = r_28;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_28));
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = term_n_15;
      }
    {
      t = i_69(t);
      {
        ATerm a_6 (ATerm t)
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_11;
              t = get_config_0(t);
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              t = term_w_22;
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
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_string_to_int(not_null(u_28));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  c_29 = t;
  a_29 :
  if(match_string(c_29, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
        {
          d_29 = ATgetFirst((ATermList) c_29);
          e_29 = (ATerm) ATgetNext((ATermList) c_29);
          b_29 :
          if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
            {
              f_29 = ATgetFirst((ATermList) e_29);
              g_29 = (ATerm) ATgetNext((ATermList) e_29);
              {
                ATerm m_29 = NULL;
                ATerm q_24;
                q_24 = t;
                {
                  t = not_null(d_29);
                  t = j_0(t);
                }
                t = q_24;
                {
                  ATerm n_29 = NULL;
                  t = not_null(f_29);
                  {
                    t = k_0(t);
                    {
                      n_29 = t;
                      if(((m_29 != NULL) && (m_29 != n_29)))
                        _fail(n_29);
                      else
                        m_29 = n_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_29)), not_null(m_29));
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
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_6 (ATerm t)
      {
        ATerm w_31 = NULL;
        w_31 = t;
        y_29 :
        if(!(match_string(w_31, "-i")))
          {
            if(!(match_string(w_31, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        ATerm z_31 = NULL;
        ATerm t_24;
        t_24 = t;
        {
          ATerm x_31 = NULL;
          ATerm y_31 = NULL;
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(x_31));
            t = set_config_0(t);
          }
        }
        t = t_24;
        {
          ATerm a_32 = NULL;
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_31));
        }
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        t = term_w_24;
        return(t);
      }
      t = ArgOption_3(t, e_6, f_6, h_6);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 (ATerm t)
            {
              ATerm c_32 = NULL;
              c_32 = t;
              f_30 :
              if(!(match_string(c_32, "-o")))
                {
                  if(!(match_string(c_32, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              ATerm h_32 = NULL;
              ATerm d_25;
              d_25 = t;
              {
                ATerm f_32 = NULL;
                ATerm g_32 = NULL;
                g_32 = t;
                if(((f_32 != NULL) && (f_32 != g_32)))
                  _fail(g_32);
                else
                  f_32 = g_32;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(f_32));
                  t = set_config_0(t);
                }
              }
              t = d_25;
              {
                ATerm k_32 = NULL;
                k_32 = t;
                if(((h_32 != NULL) && (h_32 != k_32)))
                  _fail(k_32);
                else
                  h_32 = k_32;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_32));
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
              ATerm j_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_6 (ATerm t)
                  {
                    ATerm l_32 = NULL;
                    l_32 = t;
                    k_30 :
                    if(!(match_string(l_32, "-S")))
                      {
                        if(!(match_string(l_32, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_6 (ATerm t)
                  {
                    t = term_q_22;
                    t = set_config_0(t);
                    t = term_l_25;
                    return(t);
                  }
                  ATerm n_6 (ATerm t)
                  {
                    t = term_m_25;
                    return(t);
                  }
                  t = Option_3(t, l_6, m_6, n_6);
                  LocalPopChoice(k_25);
                }
              else
                {
                  t = j_25;
                  {
                    ATerm n_25 = t;
                    int o_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_6 (ATerm t)
                        {
                          ATerm m_32 = NULL;
                          m_32 = t;
                          l_30 :
                          if(!(match_string(m_32, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_6 (ATerm t)
                        {
                          ATerm s_32 = NULL;
                          ATerm q_25;
                          q_25 = t;
                          {
                            ATerm n_32 = NULL;
                            ATerm r_32 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_32 = t;
                              if(((n_32 != NULL) && (n_32 != r_32)))
                                _fail(r_32);
                              else
                                n_32 = r_32;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(n_32));
                              t = set_config_0(t);
                            }
                          }
                          t = q_25;
                          {
                            ATerm t_32 = NULL;
                            t_32 = t;
                            if(((s_32 != NULL) && (s_32 != t_32)))
                              _fail(t_32);
                            else
                              s_32 = t_32;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_32));
                          }
                          return(t);
                        }
                        ATerm b_7 (ATerm t)
                        {
                          t = term_u_25;
                          return(t);
                        }
                        t = ArgOption_3(t, o_6, w_6, b_7);
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = n_25;
                        {
                          ATerm w_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_7 (ATerm t)
                              {
                                ATerm u_32 = NULL;
                                u_32 = t;
                                a_31 :
                                if(!(match_string(u_32, "-k")))
                                  {
                                    if(!(match_string(u_32, "--keep")))
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
                                  ATerm v_32 = NULL;
                                  ATerm w_32 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    w_32 = t;
                                    if(((v_32 != NULL) && (v_32 != w_32)))
                                      _fail(w_32);
                                    else
                                      v_32 = w_32;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(v_32));
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
                              t = w_25;
                              {
                                ATerm c_26 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_7 (ATerm t)
                                    {
                                      ATerm x_32 = NULL;
                                      x_32 = t;
                                      g_31 :
                                      if(!(match_string(x_32, "-v")))
                                        {
                                          if(!(match_string(x_32, "--version")))
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
                                      t = term_k_26;
                                      return(t);
                                    }
                                    t = Option_3(t, f_7, g_7, h_7);
                                    LocalPopChoice(d_26);
                                  }
                                else
                                  {
                                    t = c_26;
                                    {
                                      ATerm l_26 = t;
                                      int m_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_7 (ATerm t)
                                          {
                                            ATerm y_32 = NULL;
                                            y_32 = t;
                                            h_31 :
                                            if(!(match_string(y_32, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_7 (ATerm t)
                                          {
                                            t = term_s_26;
                                            t = set_config_0(t);
                                            t = term_t_26;
                                            return(t);
                                          }
                                          ATerm m_7 (ATerm t)
                                          {
                                            t = term_w_26;
                                            return(t);
                                          }
                                          t = Option_3(t, i_7, j_7, m_7);
                                          LocalPopChoice(m_26);
                                        }
                                      else
                                        {
                                          t = l_26;
                                          {
                                            ATerm r_7 (ATerm t)
                                            {
                                              ATerm z_32 = NULL;
                                              z_32 = t;
                                              i_31 :
                                              if(!(match_string(z_32, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm s_7 (ATerm t)
                                            {
                                              t = term_y_26;
                                              t = set_config_0(t);
                                              t = term_z_26;
                                              return(t);
                                            }
                                            ATerm t_7 (ATerm t)
                                            {
                                              t = term_a_27;
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
  ATerm j_33 = NULL;
  ATerm b_27;
  b_27 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm k_33 = NULL,l_33 = NULL;
      k_33 = t;
      i_33 :
      if(match_cons(k_33, sym_Program_1))
        {
          l_33 = ATgetArgument(k_33, 0);
          if(((j_33 != NULL) && (j_33 != l_33)))
            _fail(l_33);
          else
            j_33 = l_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, u_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), not_null(j_33)), term_c_27));
      {
        t = printnl_0(t);
        {
          t = term_x_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATempty, term_e_27));
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
  ATerm o_33 = NULL;
  o_33 = t;
  t = SSL_TicksToSeconds(not_null(o_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      {
        ATerm f_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_33), not_null(v_33));
            LocalPopChoice(p_27);
          }
        else
          {
            t = f_27;
            t = SSL_addr(not_null(u_33), not_null(v_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_66(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
        c_34 = t;
        b_34 :
        if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
          {
            d_34 = ATgetFirst((ATermList) c_34);
            e_34 = (ATerm) ATgetNext((ATermList) c_34);
            {
              ATerm h_34 = NULL;
              ATerm i_34 = NULL;
              t = not_null(e_34);
              {
                t = foldr_2(t, m_66, n_66);
                {
                  i_34 = t;
                  if(((h_34 != NULL) && (h_34 != i_34)))
                    _fail(i_34);
                  else
                    h_34 = i_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_34), not_null(h_34));
                t = n_66(t);
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
ATerm crush_2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  ATerm p_34 = NULL;
  ATerm r_34 = NULL;
  p_34 = t;
  {
    ATerm s_34 = NULL;
    ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
    t = not_null(p_34);
    {
      s_34 = t;
      {
        t = SSL_explode_term(not_null(s_34));
        {
          u_34 = t;
          o_34 :
          if(match_cons(u_34, sym__2))
            {
              v_34 = ATgetArgument(u_34, 0);
              w_34 = ATgetArgument(u_34, 1);
              if(((r_34 != NULL) && (r_34 != w_34)))
                _fail(w_34);
              else
                r_34 = w_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_34);
      t = foldr_2(t, k_65, l_65);
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
      t = term_p_22;
      return(t);
    }
    t = crush_2(t, z_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym__2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      {
        ATerm s_27;
        s_27 = t;
        {
          ATerm t_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_35), not_null(e_35));
              LocalPopChoice(v_27);
            }
          else
            {
              t = t_27;
              t = SSL_gtr(not_null(d_35), not_null(e_35));
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
  ATerm k_35 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
      n_35 = t;
      j_35 :
      if(match_cons(n_35, sym__2))
        {
          o_35 = ATgetArgument(n_35, 0);
          p_35 = ATgetArgument(n_35, 1);
          {
            if(((k_35 != NULL) && (k_35 != o_35)))
              _fail(o_35);
            else
              k_35 = o_35;
            if(((k_35 != NULL) && (k_35 != p_35)))
              _fail(p_35);
            else
              k_35 = p_35;
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
ATerm if_verbose1_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_28;
      a_28 = t;
      {
        ATerm s_35 = NULL;
        ATerm t_35 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            t_35 = t;
            if(((s_35 != NULL) && (s_35 != t_35)))
              _fail(t_35);
            else
              s_35 = t_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_35), term_x_9);
          t = geq_0(t);
        }
      }
      t = a_28;
      t = t_54(t);
      LocalPopChoice(z_27);
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
    ATerm x_35 = NULL,z_35 = NULL;
    ATerm f_28;
    f_28 = t;
    {
      ATerm y_35 = NULL;
      t = run_time_0(t);
      {
        y_35 = t;
        if(((x_35 != NULL) && (x_35 != y_35)))
          _fail(y_35);
        else
          x_35 = y_35;
      }
    }
    t = f_28;
    {
      ATerm a_36 = NULL;
      t = term_g_28;
      {
        t = get_config_0(t);
        {
          a_36 = t;
          if(((z_35 != NULL) && (z_35 != a_36)))
            _fail(a_36);
          else
            z_35 = a_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_28), not_null(x_35)), term_h_28), not_null(z_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_8);
  {
    t = term_p_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_Version_0))
    {
      ATerm j_36 = NULL,l_36 = NULL;
      ATerm p_28;
      p_28 = t;
      {
        ATerm k_36 = NULL;
        t = SSLgetAnnotations(not_null(h_36));
        {
          k_36 = t;
          if(((j_36 != NULL) && (j_36 != k_36)))
            _fail(k_36);
          else
            j_36 = k_36;
        }
      }
      t = p_28;
      {
        ATerm m_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_36));
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
        t = not_null(l_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm b_8 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_8);
  t = m_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_table_create(not_null(u_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm x_28;
    x_28 = t;
    {
      t = term_y_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_28, term_z_28, not_null(y_36));
          t = table_put_0(t);
        }
      }
    }
    t = x_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  t = SSL_table_destroy(not_null(c_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  t = SSL_exit(not_null(g_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  j_37 :
  if(((ATgetType(m_37) == AT_LIST) && ATisEmpty(m_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
        {
          n_37 = ATgetFirst((ATermList) m_37);
          o_37 = (ATerm) ATgetNext((ATermList) m_37);
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
  ATerm h_29;
  h_29 = t;
  {
    ATerm t_37 = NULL;
    ATerm y_37 = NULL;
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        {
          ATerm u_37 = NULL;
          ATerm v_37 = NULL;
          v_37 = t;
          if(((u_37 != NULL) && (u_37 != v_37)))
            _fail(v_37);
          else
            u_37 = v_37;
          t = (ATerm) ATinsert(ATempty, not_null(u_37));
        }
      }
    {
      y_37 = t;
      if(((t_37 != NULL) && (t_37 != y_37)))
        _fail(y_37);
      else
        t_37 = y_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_22, not_null(t_37));
      t = printnl_0(t);
    }
  }
  t = h_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  j_38 = t;
  g_38 :
  if(((ATgetType(j_38) == AT_LIST) && !(ATisEmpty(j_38))))
    {
      h_38 = ATgetFirst((ATermList) j_38);
      i_38 = (ATerm) ATgetNext((ATermList) j_38);
      {
        ATerm m_38 = NULL;
        t = not_null(i_38);
        {
          ATerm k_29;
          k_29 = t;
          {
            ATerm n_38 = NULL,p_38 = NULL,t_38 = NULL;
            ATerm l_29;
            l_29 = t;
            {
              ATerm o_38 = NULL;
              t = i_0(t);
              {
                o_38 = t;
                if(((n_38 != NULL) && (n_38 != o_38)))
                  _fail(o_38);
                else
                  n_38 = o_38;
              }
            }
            t = l_29;
            {
              ATerm s_38 = NULL;
              t = not_null(h_38);
              {
                t = h_0(t);
                {
                  s_38 = t;
                  if(((p_38 != NULL) && (p_38 != s_38)))
                    _fail(s_38);
                  else
                    p_38 = s_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_38)), not_null(p_38));
                {
                  t_38 = t;
                  if(((m_38 != NULL) && (m_38 != t_38)))
                    _fail(t_38);
                  else
                    m_38 = t_38;
                }
              }
            }
          }
          t = k_29;
          {
            ATerm c_8 (ATerm t)
            {
              t = not_null(m_38);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_8);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_38) == AT_LIST) && ATisEmpty(j_38)))
        {
          {
            t = term_z_10;
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
ATerm short_description_1 (ATerm t, ATerm t_75 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_53 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Program_1))
    {
      h_39 = ATgetArgument(g_39, 0);
      {
        ATerm k_39 = NULL,m_39 = NULL;
        ATerm l_39 = NULL;
        t = SSLgetAnnotations(not_null(g_39));
        {
          l_39 = t;
          if(((k_39 != NULL) && (k_39 != l_39)))
            _fail(l_39);
          else
            k_39 = l_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm o_39 = NULL;
            t = f_53(t);
            {
              m_39 = t;
              {
                ATerm p_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_39)), not_null(k_39));
                {
                  p_39 = t;
                  if(((o_39 != NULL) && (o_39 != p_39)))
                    _fail(p_39);
                  else
                    o_39 = p_39;
                }
                t = not_null(o_39);
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
  ATerm x_39 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_39 = NULL;
      t = term_g_28;
      {
        t = get_config_0(t);
        {
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
        }
      }
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm i_8 (ATerm t)
        {
          ATerm j_8 (ATerm t)
          {
            ATerm z_39 = NULL;
            z_39 = t;
            if(((x_39 != NULL) && (x_39 != z_39)))
              _fail(z_39);
            else
              x_39 = z_39;
            return(t);
          }
          t = Program_1(t, j_8);
          return(t);
        }
        t = fetch_1(t, i_8);
      }
    }
  {
    t = term_q_29;
    {
      t = echo_0(t);
      {
        t = term_t_29;
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
                ATerm a_40 = NULL;
                ATerm b_40 = NULL;
                b_40 = t;
                if(((a_40 != NULL) && (a_40 != b_40)))
                  _fail(b_40);
                else
                  a_40 = b_40;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_40)), term_u_29);
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
  ATerm v_29;
  v_29 = t;
  {
    ATerm g_40 = NULL;
    ATerm h_40 = NULL;
    h_40 = t;
    if(((g_40 != NULL) && (g_40 != h_40)))
      _fail(h_40);
    else
      g_40 = h_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATempty, not_null(g_40)));
      t = printnl_0(t);
    }
  }
  t = v_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm w_29;
  w_29 = t;
  {
    t = n_70(t);
    t = debug_0(t);
  }
  t = w_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_53 (ATerm))
{
  ATerm o_40 = NULL,p_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym_Undefined_1))
    {
      p_40 = ATgetArgument(o_40, 0);
      {
        ATerm s_40 = NULL,v_40 = NULL;
        ATerm u_40 = NULL;
        t = SSLgetAnnotations(not_null(o_40));
        {
          u_40 = t;
          if(((s_40 != NULL) && (s_40 != u_40)))
            _fail(u_40);
          else
            s_40 = u_40;
        }
        {
          t = not_null(p_40);
          {
            ATerm x_40 = NULL;
            t = g_53(t);
            {
              v_40 = t;
              {
                ATerm y_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_40)), not_null(s_40));
                {
                  y_40 = t;
                  if(((x_40 != NULL) && (x_40 != y_40)))
                    _fail(y_40);
                  else
                    x_40 = y_40;
                }
                t = not_null(x_40);
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
ATerm fetch_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm j_41 (ATerm t)
  {
    ATerm x_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_60, _id);
        LocalPopChoice(z_29);
      }
    else
      {
        t = x_29;
        t = Cons_2(t, _id, j_41);
      }
    return(t);
  }
  t = j_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_74 (ATerm))
{
  t = fetch_1(t, t_74);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym_Help_0))
    {
      ATerm a_42 = NULL,c_42 = NULL;
      ATerm a_30;
      a_30 = t;
      {
        ATerm b_42 = NULL;
        t = SSLgetAnnotations(not_null(o_41));
        {
          b_42 = t;
          if(((a_42 != NULL) && (a_42 != b_42)))
            _fail(b_42);
          else
            a_42 = b_42;
        }
      }
      t = a_30;
      {
        ATerm d_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_42));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        t = not_null(c_42);
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
  ATerm i_42 = NULL;
  i_42 = t;
  t = SSL_implode_string(not_null(i_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
        n_42 = t;
        m_42 :
        if(((ATgetType(n_42) == AT_LIST) && !(ATisEmpty(n_42))))
          {
            o_42 = ATgetFirst((ATermList) n_42);
            p_42 = (ATerm) ATgetNext((ATermList) n_42);
            {
              t = not_null(o_42);
              {
                ATerm m_8 (ATerm t)
                {
                  t = not_null(p_42);
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
  ATerm z_42 = NULL;
  ATerm b_43 = NULL;
  z_42 = t;
  {
    ATerm c_43 = NULL;
    ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
    t = not_null(z_42);
    {
      c_43 = t;
      {
        t = SSL_explode_term(not_null(c_43));
        {
          e_43 = t;
          x_42 :
          if(match_cons(e_43, sym__2))
            {
              f_43 = ATgetArgument(e_43, 0);
              g_43 = ATgetArgument(e_43, 1);
              y_42 :
              if(match_string(f_43, ""))
                {
                  if(((b_43 != NULL) && (b_43 != g_43)))
                    _fail(g_43);
                  else
                    b_43 = g_43;
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
      t = not_null(b_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm k_43 (ATerm t)
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_43);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          t = Nil_0(t);
          t = n_60(t);
        }
      }
    return(t);
  }
  t = k_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym__2))
    {
      o_43 = ATgetArgument(n_43, 0);
      p_43 = ATgetArgument(n_43, 1);
      {
        t = not_null(o_43);
        {
          ATerm p_8 (ATerm t)
          {
            t = not_null(p_43);
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
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_30);
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
  ATerm v_43 = NULL;
  v_43 = t;
  t = SSL_explode_string(not_null(v_43));
  return(t);
}
ATerm _2 (ATerm t, ATerm u_46 (ATerm), ATerm v_46 (ATerm))
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  d_44 :
  if(match_cons(e_44, sym__2))
    {
      f_44 = ATgetArgument(e_44, 0);
      g_44 = ATgetArgument(e_44, 1);
      {
        ATerm k_44 = NULL,m_44 = NULL;
        ATerm l_44 = NULL;
        t = SSLgetAnnotations(not_null(e_44));
        {
          l_44 = t;
          if(((k_44 != NULL) && (k_44 != l_44)))
            _fail(l_44);
          else
            k_44 = l_44;
        }
        {
          t = not_null(f_44);
          {
            ATerm o_44 = NULL;
            t = u_46(t);
            {
              m_44 = t;
              {
                t = not_null(g_44);
                {
                  ATerm q_44 = NULL;
                  t = v_46(t);
                  {
                    o_44 = t;
                    {
                      ATerm r_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_44), not_null(o_44)), not_null(k_44));
                      {
                        r_44 = t;
                        if(((q_44 != NULL) && (q_44 != r_44)))
                          _fail(r_44);
                        else
                          q_44 = r_44;
                      }
                      t = not_null(q_44);
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
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym__2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      {
        ATerm m_30;
        m_30 = t;
        t = SSL_printnl(not_null(a_45), not_null(b_45));
        t = m_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm n_30;
  n_30 = t;
  {
    ATerm h_45 = NULL,j_45 = NULL;
    ATerm o_30;
    o_30 = t;
    {
      ATerm i_45 = NULL;
      t = m_70(t);
      {
        i_45 = t;
        if(((h_45 != NULL) && (h_45 != i_45)))
          _fail(i_45);
        else
          h_45 = i_45;
      }
    }
    t = o_30;
    {
      ATerm k_45 = NULL;
      k_45 = t;
      if(((j_45 != NULL) && (j_45 != k_45)))
        _fail(k_45);
      else
        j_45 = k_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_45)), not_null(h_45)));
        t = printnl_0(t);
      }
    }
  }
  t = n_30;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm n_45 (ATerm t)
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
        t = Cons_2(t, y_59, n_45);
      }
    return(t);
  }
  t = n_45(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  t = SSL_is_string(not_null(p_45));
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
            ATerm u_8 (ATerm t)
            {
              ATerm v_30 = t;
              int w_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(w_30);
                }
              else
                {
                  t = v_30;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, u_8);
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
              y_45 = t;
              x_45 :
              if(match_cons(y_45, sym_Path_1))
                {
                  z_45 = ATgetArgument(y_45, 0);
                  t = not_null(z_45);
                }
              else
                {
                  if(match_cons(y_45, sym_Var_1))
                    {
                      z_45 = ATgetArgument(y_45, 0);
                      {
                        t = not_null(z_45);
                        {
                          ATerm x_30 = t;
                          int y_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(y_30);
                            }
                          else
                            {
                              t = x_30;
                              {
                                ATerm v_8 (ATerm t)
                                {
                                  t = term_z_30;
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
                      if(match_cons(y_45, sym_Prefix_2))
                        {
                          z_45 = ATgetArgument(y_45, 0);
                          a_46 = ATgetArgument(y_45, 1);
                          {
                            ATerm f_46 = NULL,h_46 = NULL;
                            ATerm b_31;
                            b_31 = t;
                            {
                              ATerm g_46 = NULL;
                              t = not_null(z_45);
                              {
                                t = eval_config_0(t);
                                {
                                  g_46 = t;
                                  if(((f_46 != NULL) && (f_46 != g_46)))
                                    _fail(g_46);
                                  else
                                    f_46 = g_46;
                                }
                              }
                            }
                            t = b_31;
                            {
                              ATerm i_46 = NULL;
                              t = not_null(a_46);
                              {
                                t = eval_config_0(t);
                                {
                                  i_46 = t;
                                  if(((h_46 != NULL) && (h_46 != i_46)))
                                    _fail(i_46);
                                  else
                                    h_46 = i_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_46), not_null(h_46));
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
  ATerm q_46 = NULL;
  q_46 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_18, not_null(q_46));
    {
      t = table_get_0(t);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm e_31;
              e_31 = t;
              {
                ATerm s_46 = NULL;
                ATerm t_46 = NULL;
                t_46 = t;
                if(((s_46 != NULL) && (s_46 != t_46)))
                  _fail(t_46);
                else
                  s_46 = t_46;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_18, not_null(q_46), not_null(s_46));
                  t = table_put_0(t);
                }
              }
              t = e_31;
            }
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm f_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_58(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = f_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym__2))
    {
      b_47 = ATgetArgument(a_47, 0);
      c_47 = ATgetArgument(a_47, 1);
      t = SSL_table_get(not_null(b_47), not_null(c_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym__3))
    {
      k_47 = ATgetArgument(j_47, 0);
      l_47 = ATgetArgument(j_47, 1);
      m_47 = ATgetArgument(j_47, 2);
      {
        ATerm k_31;
        k_31 = t;
        {
          ATerm q_47 = NULL;
          ATerm r_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_47), not_null(l_47));
          {
            ATerm l_31 = t;
            int m_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_31);
              }
            else
              {
                t = l_31;
                t = (ATerm) ATempty;
              }
            {
              r_47 = t;
              if(((q_47 != NULL) && (q_47 != r_47)))
                _fail(r_47);
              else
                q_47 = r_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_47), not_null(l_47), (ATerm) ATinsert(CheckATermList(not_null(q_47)), not_null(m_47)));
            t = table_put_0(t);
          }
        }
        t = k_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm v_47 = NULL;
  ATerm w_47 = NULL;
  t = term_z_10;
  {
    t = y_75(t);
    {
      w_47 = t;
      if(((v_47 != NULL) && (v_47 != w_47)))
        _fail(w_47);
      else
        v_47 = w_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_29, term_s_29, not_null(v_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_48 = NULL,f_48 = NULL,g_48 = NULL;
  c_48 = t;
  b_48 :
  if(match_string(c_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
        {
          f_48 = ATgetFirst((ATermList) c_48);
          g_48 = (ATerm) ATgetNext((ATermList) c_48);
          {
            ATerm j_48 = NULL;
            ATerm n_31;
            n_31 = t;
            {
              t = not_null(f_48);
              t = a_0(t);
            }
            t = n_31;
            {
              ATerm k_48 = NULL;
              t = term_z_10;
              {
                t = d_0(t);
                {
                  k_48 = t;
                  if(((j_48 != NULL) && (j_48 != k_48)))
                    _fail(k_48);
                  else
                    j_48 = k_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_48)), not_null(j_48));
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
    ATerm p_48 = NULL;
    p_48 = t;
    o_48 :
    if(!(match_string(p_48, "--help")))
      {
        if(!(match_string(p_48, "-h")))
          {
            if(!(match_string(p_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    t = term_p_31;
    {
      t = set_config_0(t);
      t = term_q_31;
    }
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    t = term_r_31;
    return(t);
  }
  t = Option_3(t, w_8, x_8, y_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  r_48 :
  if(((ATgetType(t_48) == AT_LIST) && !(ATisEmpty(t_48))))
    {
      u_48 = ATgetFirst((ATermList) t_48);
      v_48 = (ATerm) ATgetNext((ATermList) t_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_48 (ATerm), ATerm e_48 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  e_49 :
  if(((ATgetType(f_49) == AT_LIST) && !(ATisEmpty(f_49))))
    {
      g_49 = ATgetFirst((ATermList) f_49);
      h_49 = (ATerm) ATgetNext((ATermList) f_49);
      {
        ATerm l_49 = NULL,n_49 = NULL;
        ATerm m_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          m_49 = t;
          if(((l_49 != NULL) && (l_49 != m_49)))
            _fail(m_49);
          else
            l_49 = m_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm p_49 = NULL;
            t = d_48(t);
            {
              n_49 = t;
              {
                t = not_null(h_49);
                {
                  ATerm r_49 = NULL;
                  t = e_48(t);
                  {
                    p_49 = t;
                    {
                      ATerm s_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_49)), not_null(n_49)), not_null(l_49));
                      {
                        s_49 = t;
                        if(((r_49 != NULL) && (r_49 != s_49)))
                          _fail(s_49);
                        else
                          r_49 = s_49;
                      }
                      t = not_null(r_49);
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
  ATerm c_50 = NULL;
  c_50 = t;
  b_50 :
  if(((ATgetType(c_50) == AT_LIST) && ATisEmpty(c_50)))
    {
      {
        ATerm e_50 = NULL,g_50 = NULL;
        ATerm s_31;
        s_31 = t;
        {
          ATerm f_50 = NULL;
          t = SSLgetAnnotations(not_null(c_50));
          {
            f_50 = t;
            if(((e_50 != NULL) && (e_50 != f_50)))
              _fail(f_50);
            else
              e_50 = f_50;
          }
        }
        t = s_31;
        {
          ATerm h_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_50));
          {
            h_50 = t;
            if(((g_50 != NULL) && (g_50 != h_50)))
              _fail(h_50);
            else
              g_50 = h_50;
          }
          t = not_null(g_50);
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
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(match_cons(n_50, sym__2))
    {
      o_50 = ATgetArgument(n_50, 0);
      p_50 = ATgetArgument(n_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_18, not_null(o_50), not_null(p_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm t_31;
  t_31 = t;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_32;
        t = w_75(t);
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
        }
      }
  }
  t = t_31;
  {
    ATerm z_8 (ATerm t)
    {
      ATerm x_50 = NULL;
      ATerm d_32;
      d_32 = t;
      {
        ATerm v_50 = NULL;
        ATerm w_50 = NULL;
        w_50 = t;
        if(((v_50 != NULL) && (v_50 != w_50)))
          _fail(w_50);
        else
          v_50 = w_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_28, not_null(v_50));
          t = set_config_0(t);
        }
      }
      t = d_32;
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
    ATerm a_9 (ATerm t)
    {
      ATerm e_32 = t;
      int i_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_32);
            }
          else
            {
              t = j_32;
              {
                t = w_75(t);
                t = Cons_2(t, _id, a_9);
              }
            }
          LocalPopChoice(i_32);
        }
      else
        {
          t = e_32;
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
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  ATerm p_32;
  p_32 = t;
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
  t = p_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm n_51 = NULL;
  ATerm q_32;
  q_32 = t;
  {
    t = term_a_33;
    t = table_put_0(t);
  }
  t = q_32;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_75(t);
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_9);
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_33;
          f_33 = t;
          {
            ATerm g_33 = t;
            int h_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_31;
                t = get_config_0(t);
                LocalPopChoice(h_33);
              }
            else
              {
                t = g_33;
                t = fetch_1(t, Help_0);
              }
          }
          t = f_33;
          {
            t = system_usage_0(t);
            {
              t = term_p_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(e_33);
        }
      else
        {
          t = d_33;
          {
            ATerm m_33 = t;
            int n_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_9 (ATerm t)
                {
                  ATerm k_9 (ATerm t)
                  {
                    ATerm o_51 = NULL;
                    o_51 = t;
                    if(((n_51 != NULL) && (n_51 != o_51)))
                      _fail(o_51);
                    else
                      n_51 = o_51;
                    return(t);
                  }
                  t = Undefined_1(t, k_9);
                  return(t);
                }
                t = fetch_1(t, h_9);
                {
                  ATerm l_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_51)), term_p_33);
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
                LocalPopChoice(n_33);
              }
            else
              {
                t = m_33;
                {
                }
              }
          }
        }
      {
        ATerm q_33;
        q_33 = t;
        {
          t = term_r_29;
          t = table_destroy_0(t);
        }
        t = q_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm v_73 (ATerm))
{
  t = parse_options_1(t, s_73);
  {
    t = store_options_0(t);
    {
      t = u_73(t);
      {
        ATerm r_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_73);
            LocalPopChoice(w_33);
          }
        else
          {
            t = r_33;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_33);
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
ATerm option_wrap_2 (ATerm t, ATerm w_73 (ATerm), ATerm x_73 (ATerm))
{
  t = option_wrap_4(t, w_73, default_usage_0, _id, x_73);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm m_9 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_69(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = xtc_io_1(t, l_69);
    return(t);
  }
  t = option_wrap_2(t, m_9, n_9);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm o_9 (ATerm t)
  {
    ATerm f_34;
    f_34 = t;
    {
      ATerm r_51 = NULL;
      ATerm s_51 = NULL;
      t = term_g_34;
      {
        t = xtc_find_path_0(t);
        {
          s_51 = t;
          if(((r_51 != NULL) && (r_51 != s_51)))
            _fail(s_51);
          else
            r_51 = s_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_51)), term_j_34));
        t = extend_config_0(t);
      }
    }
    t = f_34;
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
