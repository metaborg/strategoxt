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
ATerm term_e_34;
ATerm term_d_34;
ATerm term_l_33;
ATerm term_t_32;
ATerm term_f_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_j_31;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_d_28;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_v_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_v_23;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_a_18;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_b_12;
ATerm term_p_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_w_9;
ATerm term_t_9;
void init_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Syntax_1, term_u_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_x_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_z_19);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_k_10);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_y_10);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_22);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_y_10);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_y_10);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_w_29, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_y_10);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__3, term_w_29, term_x_29, (ATerm) ATempty);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm close_file_0 (ATerm);
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm i_70 (ATerm));
ATerm assert_1 (ATerm, ATerm d_71 (ATerm));
ATerm obsolete_1 (ATerm, ATerm r_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm xtc_transform_2 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm q_72 (ATerm));
ATerm if_keep1_1 (ATerm, ATerm g_69 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm n_55 (ATerm));
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm n_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm j_70 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm find_in_includes_1 (ATerm, ATerm g_54 (ATerm));
ATerm get_parse_table_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_55 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm a_61 (ATerm));
ATerm read_from_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm basename_1 (ATerm, ATerm o_72 (ATerm));
ATerm basename_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm k_49 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_55 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_55 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm q_55 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm union_1 (ATerm, ATerm m_66 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm z_55 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm a_71 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm o_59 (ATerm), ATerm p_59 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_70 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm y_69 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm z_69 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm crush_2 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_55 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_76 (ATerm));
ATerm Program_1 (ATerm, ATerm x_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_61 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm m_47 (ATerm), ATerm n_47 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_71 (ATerm));
ATerm map_1 (ATerm, ATerm p_60 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_59 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_76 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_48 (ATerm), ATerm w_48 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_76 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_76 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm s_74 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm t_74 (ATerm), ATerm u_74 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
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
        ATerm i_6 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_2), not_null(u_2));
            LocalPopChoice(s_9);
          }
        else
          {
            t = i_6;
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
  t = term_t_9;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = term_w_9;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), term_w_9);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_3)), term_t_9);
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
ATerm xtc_transform_term_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, r_70, s_70);
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
ATerm call_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym__2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      t = SSL_call(not_null(j_4), not_null(k_4));
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
ATerm xtc_command_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm q_4 = NULL;
  ATerm x_9;
  x_9 = t;
  {
    ATerm r_4 = NULL;
    t = i_70(t);
    {
      t = xtc_find_0(t);
      {
        r_4 = t;
        if(((q_4 != NULL) && (q_4 != r_4)))
          _fail(r_4);
        else
          q_4 = r_4;
      }
    }
  }
  t = x_9;
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm s_4 = NULL;
      ATerm t_4 = NULL;
      t_4 = t;
      if(((s_4 != NULL) && (s_4 != t_4)))
        _fail(t_4);
      else
        s_4 = t_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), not_null(s_4));
        t = call_0(t);
      }
    }
    t = y_9;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_71 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
        ATerm z_9;
        z_9 = t;
        {
          ATerm j_5 = NULL;
          ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
          t = d_71(t);
          {
            j_5 = t;
            {
              if(((g_5 != NULL) && (g_5 != j_5)))
                _fail(j_5);
              else
                g_5 = j_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_5), not_null(c_5), not_null(d_5));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_10 = t;
                    int j_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), term_k_10);
                        t = table_get_0(t);
                        LocalPopChoice(j_10);
                      }
                    else
                      {
                        t = i_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      k_5 = t;
                      z_4 :
                      if(((ATgetType(k_5) == AT_LIST) && !(ATisEmpty(k_5))))
                        {
                          l_5 = ATgetFirst((ATermList) k_5);
                          m_5 = (ATerm) ATgetNext((ATermList) k_5);
                          {
                            if(((h_5 != NULL) && (h_5 != l_5)))
                              _fail(l_5);
                            else
                              h_5 = l_5;
                            {
                              if(((i_5 != NULL) && (i_5 != m_5)))
                                _fail(m_5);
                              else
                                i_5 = m_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(g_5), term_k_10, (ATerm) ATinsert(CheckATermList(not_null(i_5)), (ATerm) ATinsert(CheckATermList(not_null(h_5)), not_null(c_5))));
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
        t = z_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm l_10;
  l_10 = t;
  {
    t = r_71(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = l_10;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  ATerm n_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
      w_5 = t;
      r_5 :
      if(match_cons(w_5, sym__2))
        {
          x_5 = ATgetArgument(w_5, 0);
          y_5 = ATgetArgument(w_5, 1);
          {
            if(((v_5 != NULL) && (v_5 != x_5)))
              _fail(x_5);
            else
              v_5 = x_5;
            if(((u_5 != NULL) && (u_5 != y_5)))
              _fail(y_5);
            else
              u_5 = y_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_10);
      t = SSL_open_file(not_null(v_5), not_null(u_5));
    }
  else
    {
      t = n_10;
      {
        ATerm z_5 = NULL;
        ATerm a_6 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_t_10;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          z_5 = t;
          {
            if(((v_5 != NULL) && (v_5 != z_5)))
              _fail(z_5);
            else
              v_5 = z_5;
            {
              ATerm w_10;
              w_10 = t;
              {
                ATerm b_6 = NULL;
                t = term_x_10;
                {
                  b_6 = t;
                  if(((a_6 != NULL) && (a_6 != b_6)))
                    _fail(b_6);
                  else
                    a_6 = b_6;
                }
              }
              t = w_10;
              t = SSL_open_file(not_null(v_5), not_null(a_6));
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
  ATerm g_6 = NULL;
  ATerm h_6 = NULL;
  t = term_y_10;
  {
    t = new_0(t);
    {
      h_6 = t;
      if(((g_6 != NULL) && (g_6 != h_6)))
        _fail(h_6);
      else
        g_6 = h_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), term_z_10);
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
  ATerm l_6 = NULL;
  t = new_file_0(t);
  {
    l_6 = t;
    {
      ATerm g_11;
      g_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_x_10);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_y_10);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_h_11;
                return(t);
              }
              t = assert_1(t, f_0);
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
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_stdin_0))
    {
      ATerm x_6 = NULL;
      ATerm y_6 = NULL;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_6)), term_i_11));
              {
                ATerm k_11 = t;
                int m_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(m_11);
                  }
                else
                  {
                    t = k_11;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(x_6);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_6));
    }
  else
    {
      if(match_cons(v_6, sym_FILE_1))
        {
          w_6 = ATgetArgument(v_6, 0);
          {
            ATerm c_7 = NULL;
            ATerm d_7 = NULL;
            t = not_null(w_6);
            {
              ATerm e_7 = NULL;
              t = xtc_new_file_0(t);
              {
                d_7 = t;
                {
                  if(((c_7 != NULL) && (c_7 != d_7)))
                    _fail(d_7);
                  else
                    c_7 = d_7;
                  {
                    ATerm f_7 = NULL;
                    t = p_0(t);
                    {
                      f_7 = t;
                      if(((e_7 != NULL) && (e_7 != f_7)))
                        _fail(f_7);
                      else
                        e_7 = f_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_7)), term_i_11), not_null(w_6)), term_p_11));
                      {
                        ATerm q_11 = t;
                        int r_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(r_11);
                          }
                        else
                          {
                            t = q_11;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(c_7);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_7));
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
  ATerm q_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym_stdin_0))
    {
      ATerm s_7 = NULL,u_7 = NULL;
      ATerm s_11;
      s_11 = t;
      {
        ATerm t_7 = NULL;
        t = SSLgetAnnotations(not_null(q_7));
        {
          t_7 = t;
          if(((s_7 != NULL) && (s_7 != t_7)))
            _fail(t_7);
          else
            s_7 = t_7;
        }
      }
      t = s_11;
      {
        ATerm v_7 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(s_7));
        {
          v_7 = t;
          if(((u_7 != NULL) && (u_7 != v_7)))
            _fail(v_7);
          else
            u_7 = v_7;
        }
        t = not_null(u_7);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm))
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          t = stdin_0(t);
        }
      LocalPopChoice(w_11);
      t = xtc_transform_file_2(t, k_70, l_70);
    }
  else
    {
      t = v_11;
      t = xtc_transform_term_2(t, k_70, l_70);
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_8)), term_b_12), not_null(c_8));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm j_8 = NULL,l_8 = NULL;
  ATerm c_12;
  c_12 = t;
  {
    ATerm k_8 = NULL;
    t = s_59(t);
    {
      k_8 = t;
      if(((j_8 != NULL) && (j_8 != k_8)))
        _fail(k_8);
      else
        j_8 = k_8;
    }
  }
  t = c_12;
  {
    ATerm m_8 = NULL;
    t = t_59(t);
    {
      m_8 = t;
      if(((l_8 != NULL) && (l_8 != m_8)))
        _fail(m_8);
      else
        l_8 = m_8;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), not_null(l_8));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm q_72 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_y_10;
      t = q_72(t);
      return(t);
    }
    t = split_2(t, _id, q_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm if_keep1_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm d_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_12;
      m_12 = t;
      {
        ATerm q_8 = NULL;
        ATerm r_8 = NULL;
        t = term_n_12;
        {
          t = get_config_0(t);
          {
            r_8 = t;
            if(((q_8 != NULL) && (q_8 != r_8)))
              _fail(r_8);
            else
              q_8 = r_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), term_w_9);
          t = geq_0(t);
        }
      }
      t = m_12;
      t = g_69(t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = d_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_12;
      q_12 = t;
      {
        ATerm u_8 = NULL;
        ATerm v_8 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            v_8 = t;
            if(((u_8 != NULL) && (u_8 != v_8)))
              _fail(v_8);
            else
              u_8 = v_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_8), term_r_12);
          t = geq_0(t);
        }
      }
      t = q_12;
      t = n_55(t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      t = SSL_rename(not_null(a_9), not_null(b_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym_FILE_1))
    {
      m_9 = ATgetArgument(l_9, 0);
      {
        ATerm s_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_9 = NULL;
            t = n_0(t);
            {
              o_9 = t;
              i_9 :
              if(match_cons(o_9, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), term_y_12);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(m_9);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_y_12;
            LocalPopChoice(w_12);
          }
        else
          {
            t = s_12;
            {
              ATerm q_9 = NULL;
              ATerm r_9 = NULL;
              t = n_0(t);
              {
                r_9 = t;
                {
                  if(((q_9 != NULL) && (q_9 != r_9)))
                    _fail(r_9);
                  else
                    q_9 = r_9;
                  {
                    ATerm c_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = c_13;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(q_9));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_9));
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
ATerm xtc_transform_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, j_70, r_0);
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm t_0 (ATerm t)
    {
      t = term_d_13;
      return(t);
    }
    t = debug_1(t, t_0);
    return(t);
  }
  t = if_verbose6_1(t, s_0);
  {
    ATerm e_13;
    e_13 = t;
    {
      ATerm b_10 = NULL;
      ATerm u_0 (ATerm t)
      {
        t = term_f_13;
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
    t = e_13;
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 = NULL;
          t = not_null(a_10);
          {
            ATerm v_0 (ATerm t)
            {
              t = term_k_13;
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
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          {
            ATerm e_10 = NULL;
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = term_o_13;
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
                t = term_r_13;
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
                    t = term_u_13;
                    return(t);
                  }
                  ATerm a_1 (ATerm t)
                  {
                    t = term_x_13;
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
                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_10)), term_x_13);
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
                      t = term_y_13;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_10)), term_z_13), not_null(u_10));
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
ATerm find_in_includes_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm a_11 = NULL,c_11 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm b_11 = NULL;
    b_11 = t;
    if(((a_11 != NULL) && (a_11 != b_11)))
      _fail(b_11);
    else
      a_11 = b_11;
  }
  t = a_14;
  {
    ATerm d_11 = NULL;
    t = term_x_13;
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
            t = debug_1(t, g_54);
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
      t = term_g_14;
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
        t = term_h_14;
        return(t);
      }
      t = guarantee_extension_1(t, i_1);
      {
        l_11 = t;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_11 = NULL;
              ATerm j_1 (ATerm t)
              {
                t = term_n_14;
                return(t);
              }
              t = find_in_includes_1(t, j_1);
              {
                ATerm o_11 = NULL;
                o_11 = t;
                if(((n_11 != NULL) && (n_11 != o_11)))
                  _fail(o_11);
                else
                  n_11 = o_11;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_11));
              }
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = term_o_14;
                    return(t);
                  }
                  t = say_1(t, m_1);
                  return(t);
                }
                t = if_verbose2_1(t, k_1);
                {
                  t = not_null(j_11);
                  {
                    t = get_syntax_definition_0(t);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        t = term_s_14;
                        return(t);
                      }
                      ATerm o_1 (ATerm t)
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), term_v_14);
                        return(t);
                      }
                      t = xtc_transform_2(t, n_1, o_1);
                      {
                        ATerm p_1 (ATerm t)
                        {
                          t = not_null(l_11);
                          return(t);
                        }
                        t = rename_to_1(t, p_1);
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
                t = term_n_14;
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
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_55 (ATerm))
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_14;
      y_14 = t;
      {
        ATerm t_11 = NULL;
        ATerm u_11 = NULL;
        t = term_t_9;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), term_z_14);
          t = geq_0(t);
        }
      }
      t = y_14;
      t = m_55(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
      }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm x_11 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm y_11 = NULL;
    t = a_61(t);
    {
      y_11 = t;
      if(((x_11 != NULL) && (x_11 != y_11)))
        _fail(y_11);
      else
        x_11 = y_11;
    }
    return(t);
  }
  t = fetch_1(t, s_1);
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
      t = term_a_15;
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
  ATerm t_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = term_c_15;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose6_1(t, t_1);
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          ATerm w_1 (ATerm t)
          {
            t = term_m_15;
            return(t);
          }
          t = guarantee_extension_1(t, w_1);
          return(t);
        }
        t = FILE_1(t, v_1);
        t = read_from_0(t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_12 = NULL;
              ATerm x_1 (ATerm t)
              {
                ATerm y_1 (ATerm t)
                {
                  t = term_p_15;
                  return(t);
                }
                t = guarantee_extension_1(t, y_1);
                return(t);
              }
              t = FILE_1(t, x_1);
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
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_v_15));
            }
        }
      }
    {
      ATerm a_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          t = term_c_15;
          return(t);
        }
        t = debug_1(t, c_2);
        return(t);
      }
      t = if_verbose6_1(t, a_2);
    }
  }
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      t = term_a_16;
      return(t);
    }
    t = debug_1(t, e_2);
    return(t);
  }
  t = if_verbose6_1(t, d_2);
  {
    m_13 = t;
    l_13 :
    if(match_cons(m_13, sym_FILE_1))
      {
        n_13 = ATgetArgument(m_13, 0);
        {
          ATerm b_16 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_g_16;
              t = get_config_0(t);
              LocalPopChoice(c_16);
            }
          else
            {
              t = b_16;
              {
                t = get_meta_0(t);
                {
                  ATerm i_16 = t;
                  int j_16 = stack_ptr;
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
                              ATerm f_2 (ATerm t)
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
                              t = fetch_elem_1(t, f_2);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      LocalPopChoice(j_16);
                    }
                  else
                    {
                      t = i_16;
                      {
                        ATerm v_13 = NULL;
                        ATerm w_13 = NULL;
                        w_13 = t;
                        if(((v_13 != NULL) && (v_13 != w_13)))
                          _fail(w_13);
                        else
                          v_13 = w_13;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_16), not_null(n_13)), term_l_16), not_null(v_13)), term_k_16);
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
                t = term_o_16;
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
ATerm basename_1 (ATerm t, ATerm o_72 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 (ATerm t)
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, f_14);
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              {
                ATerm t_16 = t;
                int u_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_2 (ATerm t)
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
                    t = Cons_2(t, i_2, _id);
                    LocalPopChoice(u_16);
                  }
                else
                  {
                    t = t_16;
                    {
                      ATerm j_2 (ATerm t)
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
                      t = Cons_2(t, j_2, o_72);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = f_14(t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
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
ATerm FILE_1 (ATerm t, ATerm k_49 (ATerm))
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
            t = k_49(t);
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
  ATerm k_2 (ATerm t)
  {
    ATerm l_2 (ATerm t)
    {
      t = term_v_16;
      return(t);
    }
    t = debug_1(t, l_2);
    return(t);
  }
  t = if_verbose6_1(t, k_2);
  {
    ATerm w_16;
    w_16 = t;
    {
      ATerm g_15 = NULL,h_15 = NULL;
      ATerm m_2 (ATerm t)
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
      t = FILE_1(t, m_2);
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
    t = w_16;
    {
      ATerm n_2 (ATerm t)
      {
        t = term_y_16;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        ATerm i_15 = NULL;
        ATerm j_15 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm p_2 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_b_17);
            return(t);
          }
          t = if_verbose3_1(t, p_2);
          {
            j_15 = t;
            if(((i_15 != NULL) && (i_15 != j_15)))
              _fail(j_15);
            else
              i_15 = j_15;
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_15)), not_null(d_15)), term_d_17), term_c_17);
        return(t);
      }
      t = xtc_transform_2(t, n_2, o_2);
      {
        ATerm q_2 (ATerm t)
        {
          t = term_e_17;
          return(t);
        }
        t = xtc_transform_2(t, q_2, pass_verbose_0);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(e_15);
              {
                ATerm t_2 (ATerm t)
                {
                  t = term_h_17;
                  return(t);
                }
                t = guarantee_extension_1(t, t_2);
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
              t = term_i_17;
              return(t);
            }
            t = xtc_transform_2(t, v_2, pass_verbose_0);
            {
              ATerm w_2 (ATerm t)
              {
                t = term_l_17;
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
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
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
            ATerm o_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(s_17);
              }
            else
              {
                t = o_17;
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
          t = (ATerm) ATmakeAppl(sym__3, term_a_18, not_null(s_15), not_null(w_15));
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
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 (ATerm t)
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, f_16);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
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
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
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
  ATerm n_16 = NULL;
  n_16 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), not_null(x_16));
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
ATerm if_verbose5_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm f_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18;
      k_18 = t;
      {
        ATerm f_17 = NULL;
        ATerm g_17 = NULL;
        t = term_t_9;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), term_l_18);
          t = geq_0(t);
        }
      }
      t = k_18;
      t = p_55(t);
      LocalPopChoice(j_18);
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
  ATerm m_18;
  m_18 = t;
  {
    ATerm j_17 = NULL;
    ATerm k_17 = NULL;
    k_17 = t;
    if(((j_17 != NULL) && (j_17 != k_17)))
      _fail(k_17);
    else
      j_17 = k_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(j_17));
      t = printnl_0(t);
    }
  }
  t = m_18;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm r_17 = NULL;
  ATerm t_17 = NULL,u_17 = NULL;
  r_17 = t;
  {
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(r_17)));
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
  ATerm i_18 = NULL,o_18 = NULL,p_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym__2))
    {
      o_18 = ATgetArgument(i_18, 0);
      p_18 = ATgetArgument(i_18, 1);
      {
        ATerm s_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_18)));
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
  ATerm r_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_18;
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
      LocalPopChoice(w_18);
    }
  else
    {
      t = r_18;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_55 (ATerm))
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_19;
      e_19 = t;
      {
        ATerm z_18 = NULL;
        ATerm a_19 = NULL;
        t = term_t_9;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), term_f_19);
          t = geq_0(t);
        }
      }
      t = e_19;
      t = o_55(t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_19;
      i_19 = t;
      {
        ATerm d_19 = NULL;
        ATerm j_19 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            j_19 = t;
            if(((d_19 != NULL) && (d_19 != j_19)))
              _fail(j_19);
            else
              d_19 = j_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), term_k_19);
          t = geq_0(t);
        }
      }
      t = i_19;
      t = q_55(t);
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
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,a_20 = NULL;
  r_19 = t;
  m_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      a_20 = ATgetArgument(r_19, 1);
      if(((s_19 != NULL) && (s_19 != a_20)))
        _fail(a_20);
      else
        s_19 = a_20;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  h_20 :
  if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
    {
      j_20 = ATgetFirst((ATermList) i_20);
      k_20 = (ATerm) ATgetNext((ATermList) i_20);
      {
        t = r_66(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm n_20 = NULL;
            n_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), not_null(n_20));
              t = q_66(t);
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
ATerm union_1 (ATerm t, ATerm m_66 (ATerm))
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
            ATerm l_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_20);
                LocalPopChoice(n_19);
              }
            else
              {
                t = l_19;
                {
                  ATerm o_19 = t;
                  int p_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = not_null(v_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_66, d_3);
                      t = z_20(t);
                      LocalPopChoice(p_19);
                    }
                  else
                    {
                      t = o_19;
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
        ATerm q_19;
        q_19 = t;
        {
          ATerm l_21 = NULL;
          ATerm r_21 = NULL,t_21 = NULL;
          ATerm s_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(g_21));
          {
            ATerm t_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_19);
              }
            else
              {
                t = t_19;
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
                if(((l_21 != NULL) && (l_21 != t_21)))
                  _fail(t_21);
                else
                  l_21 = t_21;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_21), not_null(g_21), not_null(l_21));
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
ATerm table_putlist_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        t = not_null(e_22);
        {
          ATerm g_3 (ATerm t)
          {
            ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
            l_22 = t;
            a_22 :
            if(match_cons(l_22, sym__2))
              {
                m_22 = ATgetArgument(l_22, 0);
                n_22 = ATgetArgument(l_22, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_22), not_null(m_22), not_null(n_22));
                  t = z_55(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_3);
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
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_ReadFromFile(not_null(t_22));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm a_23 = NULL;
  y_22 = t;
  {
    ATerm v_19;
    v_19 = t;
    {
      ATerm b_23 = NULL;
      t = term_w_19;
      {
        b_23 = t;
        if(((a_23 != NULL) && (a_23 != b_23)))
          _fail(b_23);
        else
          a_23 = b_23;
      }
    }
    t = v_19;
    {
      t = SSL_open_file(not_null(y_22), not_null(a_23));
      t = SSL_close_file(not_null(y_22));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm i_23 = NULL;
  g_23 = t;
  {
    ATerm x_19 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATmakeAppl(sym_Imported_1, not_null(g_23)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_19;
      }
    {
      ATerm y_19;
      y_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_18, term_z_19, (ATerm) ATinsert(ATempty, not_null(g_23)));
        t = table_put_0(t);
      }
      t = y_19;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            t = term_b_20;
            return(t);
          }
          t = debug_1(t, k_3);
          return(t);
        }
        t = if_verbose4_1(t, j_3);
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
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = term_e_20;
                return(t);
              }
              t = say_1(t, m_3);
              return(t);
            }
            t = if_verbose6_1(t, l_3);
            {
              ATerm j_23 = NULL;
              j_23 = t;
              if(((i_23 != NULL) && (i_23 != j_23)))
                _fail(j_23);
              else
                i_23 = j_23;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_q_18, not_null(i_23));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm s_3 (ATerm t)
                      {
                        t = term_f_20;
                        return(t);
                      }
                      t = say_1(t, s_3);
                      return(t);
                    }
                    t = if_verbose6_1(t, r_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_q_18, (ATerm)ATmakeAppl(sym_Imported_1, not_null(g_23)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = term_e_20;
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
  ATerm n_23 = NULL;
  n_23 = t;
  t = SSL_getenv(not_null(n_23));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_20;
      t = get_config_0(t);
      LocalPopChoice(l_20);
    }
  else
    {
      t = g_20;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_20;
            t = getenv_0(t);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
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
      t = term_r_20;
      return(t);
    }
    t = debug_1(t, x_3);
    return(t);
  }
  t = if_verbose5_1(t, v_3);
  {
    ATerm w_20;
    w_20 = t;
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_21;
          t = table_get_0(t);
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = w_20;
    {
      ATerm a_4 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          t = term_b_21;
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
  ATerm c_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          t = term_j_21;
          return(t);
        }
        t = debug_1(t, e_4);
        return(t);
      }
      t = if_verbose5_1(t, c_4);
      {
        t = xtc_load_0(t);
        {
          ATerm k_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(m_21);
            }
          else
            {
              t = k_21;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_4 (ATerm t)
            {
              ATerm g_4 (ATerm t)
              {
                t = term_j_21;
                return(t);
              }
              t = debug_1(t, g_4);
              return(t);
            }
            t = if_verbose5_1(t, f_4);
          }
        }
      }
      LocalPopChoice(i_21);
    }
  else
    {
      t = c_21;
      {
        ATerm r_23 = NULL;
        ATerm s_23 = NULL;
        s_23 = t;
        if(((r_23 != NULL) && (r_23 != s_23)))
          _fail(s_23);
        else
          r_23 = s_23;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_21), not_null(r_23)), term_n_21);
          {
            t = error_0(t);
            {
              ATerm l_4 (ATerm t)
              {
                t = term_q_18;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm m_4 (ATerm t)
                    {
                      t = term_p_21;
                      return(t);
                    }
                    t = debug_1(t, m_4);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, l_4);
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
  ATerm q_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 (ATerm t)
      {
        ATerm z_23 = NULL;
        z_23 = t;
        u_23 :
        if(!(match_string(z_23, "-I")))
          {
            if(!(match_string(z_23, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm v_21;
        v_21 = t;
        {
          ATerm a_24 = NULL;
          ATerm b_24 = NULL;
          b_24 = t;
          if(((a_24 != NULL) && (a_24 != b_24)))
            _fail(b_24);
          else
            a_24 = b_24;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATempty, not_null(a_24)));
            t = extend_config_0(t);
          }
        }
        t = v_21;
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_w_21;
        return(t);
      }
      t = ArgOption_3(t, n_4, o_4, p_4);
      LocalPopChoice(u_21);
    }
  else
    {
      t = q_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              ATerm c_24 = NULL;
              c_24 = t;
              w_23 :
              if(!(match_string(c_24, "--syntax")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_4 (ATerm t)
            {
              ATerm z_21;
              z_21 = t;
              {
                ATerm d_24 = NULL;
                ATerm e_24 = NULL;
                e_24 = t;
                if(((d_24 != NULL) && (d_24 != e_24)))
                  _fail(e_24);
                else
                  d_24 = e_24;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_16, not_null(d_24));
                  t = set_config_0(t);
                }
              }
              t = z_21;
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = term_f_22;
              return(t);
            }
            t = ArgOption_3(t, u_4, v_4, w_4);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm f_24 = NULL;
                f_24 = t;
                y_23 :
                if(!(match_string(f_24, "-silent")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                ATerm g_22;
                g_22 = t;
                {
                  t = term_i_22;
                  t = set_config_0(t);
                }
                t = g_22;
                return(t);
              }
              ATerm e_5 (ATerm t)
              {
                t = term_j_22;
                return(t);
              }
              t = Option_3(t, x_4, y_4, e_5);
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym__2))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      t = SSL_copy(not_null(l_24), not_null(m_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_stderr_0))
    {
      ATerm w_24 = NULL,y_24 = NULL;
      ATerm k_22;
      k_22 = t;
      {
        ATerm x_24 = NULL;
        t = SSLgetAnnotations(not_null(u_24));
        {
          x_24 = t;
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
        }
      }
      t = k_22;
      {
        ATerm z_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
        t = not_null(y_24);
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
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_stdout_0))
    {
      ATerm j_25 = NULL,l_25 = NULL;
      ATerm o_22;
      o_22 = t;
      {
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      t = o_22;
      {
        ATerm m_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        t = not_null(l_25);
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
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_FILE_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_25 = NULL;
            ATerm z_25 = NULL;
            t = m_0(t);
            {
              z_25 = t;
              {
                if(((y_25 != NULL) && (y_25 != z_25)))
                  _fail(z_25);
                else
                  y_25 = z_25;
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
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(y_25));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_25));
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm b_26 = NULL;
              ATerm c_26 = NULL;
              t = m_0(t);
              {
                c_26 = t;
                {
                  if(((b_26 != NULL) && (b_26 != c_26)))
                    _fail(c_26);
                  else
                    b_26 = c_26;
                  {
                    ATerm u_22 = t;
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
                        t = u_22;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(b_26));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_25));
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
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
    {
      k_26 = ATgetFirst((ATermList) j_26);
      l_26 = (ATerm) ATgetNext((ATermList) j_26);
      t = not_null(l_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym__2))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      {
        ATerm x_22;
        x_22 = t;
        {
          ATerm x_26 = NULL;
          ATerm y_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), not_null(t_26));
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
              y_26 = t;
              if(((x_26 != NULL) && (x_26 != y_26)))
                _fail(y_26);
              else
                x_26 = y_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_26), not_null(t_26), not_null(x_26));
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
ATerm end_scope_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  ATerm d_23;
  d_23 = t;
  {
    ATerm n_27 = NULL;
    ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
    t = a_71(t);
    {
      n_27 = t;
      {
        if(((m_27 != NULL) && (m_27 != n_27)))
          _fail(n_27);
        else
          m_27 = n_27;
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), term_k_10);
              t = table_get_0(t);
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            o_27 = t;
            j_27 :
            if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
              {
                p_27 = ATgetFirst((ATermList) o_27);
                q_27 = (ATerm) ATgetNext((ATermList) o_27);
                {
                  if(((l_27 != NULL) && (l_27 != p_27)))
                    _fail(p_27);
                  else
                    l_27 = p_27;
                  {
                    if(((k_27 != NULL) && (k_27 != q_27)))
                      _fail(q_27);
                    else
                      k_27 = q_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_27), term_k_10, not_null(k_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(l_27);
                          {
                            ATerm f_5 (ATerm t)
                            {
                              ATerm r_27 = NULL;
                              r_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), not_null(r_27));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_5);
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
  ATerm z_27 = NULL;
  z_27 = t;
  t = SSL_remove(not_null(z_27));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm o_59 (ATerm), ATerm p_59 (ATerm))
{
  ATerm h_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_59(t);
      t = p_59(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = h_23;
      {
        t = p_59(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm e_28 = NULL;
  ATerm l_23;
  l_23 = t;
  {
    ATerm f_28 = NULL;
    ATerm g_28 = NULL;
    t = z_70(t);
    {
      f_28 = t;
      {
        if(((e_28 != NULL) && (e_28 != f_28)))
          _fail(f_28);
        else
          e_28 = f_28;
        {
          ATerm h_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), term_k_10);
          {
            ATerm m_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_23);
              }
            else
              {
                t = m_23;
                t = (ATerm) ATempty;
              }
            {
              h_28 = t;
              if(((g_28 != NULL) && (g_28 != h_28)))
                _fail(h_28);
              else
                g_28 = h_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_28), term_k_10, (ATerm) ATinsert(CheckATermList(not_null(g_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_23;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL;
  ATerm n_5 (ATerm t)
  {
    t = term_h_11;
    return(t);
  }
  t = begin_scope_1(t, n_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm p_23;
      p_23 = t;
      {
        ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
        ATerm q_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_23;
            t = table_get_0(t);
            LocalPopChoice(t_23);
          }
        else
          {
            t = q_23;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          o_28 = t;
          l_28 :
          if(((ATgetType(o_28) == AT_LIST) && !(ATisEmpty(o_28))))
            {
              p_28 = ATgetFirst((ATermList) o_28);
              q_28 = (ATerm) ATgetNext((ATermList) o_28);
              {
                if(((n_28 != NULL) && (n_28 != p_28)))
                  _fail(p_28);
                else
                  n_28 = p_28;
                {
                  if(((m_28 != NULL) && (m_28 != q_28)))
                    _fail(q_28);
                  else
                    m_28 = q_28;
                  {
                    t = not_null(n_28);
                    {
                      ATerm p_5 (ATerm t)
                      {
                        ATerm x_23 = t;
                        int g_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(g_24);
                          }
                        else
                          {
                            t = x_23;
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
      t = p_23;
      {
        ATerm q_5 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = end_scope_1(t, q_5);
      }
      return(t);
    }
    t = restore_always_2(t, y_69, o_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 = NULL;
        ATerm u_28 = NULL;
        t = term_p_11;
        {
          t = get_config_0(t);
          {
            u_28 = t;
            if(((t_28 != NULL) && (t_28 != u_28)))
              _fail(u_28);
            else
              t_28 = u_28;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_28));
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = term_a_15;
      }
    {
      t = z_69(t);
      {
        ATerm t_5 (ATerm t)
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_11;
              t = get_config_0(t);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = term_y_12;
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
  ATerm c_6 (ATerm t)
  {
    ATerm x_28 = NULL;
    x_28 = t;
    w_28 :
    if(!(match_string(x_28, "-v")))
      {
        if(!(match_string(x_28, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_p_24;
    t = set_config_0(t);
    t = term_q_24;
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_r_24;
    return(t);
  }
  t = Option_3(t, c_6, d_6, e_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    y_28 :
    if(!(match_string(a_29, "-k")))
      {
        if(!(match_string(a_29, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    ATerm s_24;
    s_24 = t;
    {
      ATerm b_29 = NULL;
      ATerm c_29 = NULL;
      t = string_to_int_0(t);
      {
        c_29 = t;
        if(((b_29 != NULL) && (b_29 != c_29)))
          _fail(c_29);
        else
          b_29 = c_29;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(b_29));
        t = set_config_0(t);
      }
    }
    t = s_24;
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_v_24;
    return(t);
  }
  t = ArgOption_3(t, f_6, j_6, k_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_string_to_int(not_null(f_29));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        ATerm p_29 = NULL;
        p_29 = t;
        i_29 :
        if(!(match_string(p_29, "-S")))
          {
            if(!(match_string(p_29, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = term_i_22;
        t = set_config_0(t);
        t = term_c_25;
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_d_25;
        return(t);
      }
      t = Option_3(t, m_6, n_6, o_6);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              ATerm q_29 = NULL;
              q_29 = t;
              j_29 :
              if(!(match_string(q_29, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              ATerm a_30 = NULL;
              ATerm i_25;
              i_25 = t;
              {
                ATerm t_29 = NULL;
                ATerm u_29 = NULL;
                t = string_to_int_0(t);
                {
                  u_29 = t;
                  if(((t_29 != NULL) && (t_29 != u_29)))
                    _fail(u_29);
                  else
                    t_29 = u_29;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(t_29));
                  t = set_config_0(t);
                }
              }
              t = i_25;
              {
                ATerm b_30 = NULL;
                b_30 = t;
                if(((a_30 != NULL) && (a_30 != b_30)))
                  _fail(b_30);
                else
                  a_30 = b_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_30));
              }
              return(t);
            }
            ATerm r_6 (ATerm t)
            {
              t = term_n_25;
              return(t);
            }
            t = ArgOption_3(t, p_6, q_6, r_6);
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm s_6 (ATerm t)
              {
                ATerm g_30 = NULL;
                g_30 = t;
                o_29 :
                if(!(match_string(g_30, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm t_6 (ATerm t)
              {
                t = term_p_25;
                t = set_config_0(t);
                t = term_q_25;
                return(t);
              }
              ATerm b_7 (ATerm t)
              {
                t = term_r_25;
                return(t);
              }
              t = Option_3(t, s_6, t_6, b_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm x_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = x_25;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm o_30 = NULL;
    o_30 = t;
    j_30 :
    if(!(match_string(o_30, "-o")))
      {
        if(!(match_string(o_30, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm e_31 = NULL;
    ATerm d_26;
    d_26 = t;
    {
      ATerm b_31 = NULL;
      ATerm c_31 = NULL;
      c_31 = t;
      if(((b_31 != NULL) && (b_31 != c_31)))
        _fail(c_31);
      else
        b_31 = c_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(b_31));
        t = set_config_0(t);
      }
    }
    t = d_26;
    {
      ATerm i_31 = NULL;
      i_31 = t;
      if(((e_31 != NULL) && (e_31 != i_31)))
        _fail(i_31);
      else
        e_31 = i_31;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_31));
    }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = ArgOption_3(t, g_7, h_7, i_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm j_7 (ATerm t)
        {
          ATerm z_31 = NULL;
          z_31 = t;
          o_31 :
          if(!(match_string(z_31, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_7 (ATerm t)
        {
          t = term_m_26;
          t = set_config_0(t);
          t = term_n_26;
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          t = term_o_26;
          return(t);
        }
        t = Option_3(t, j_7, k_7, l_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm j_32 = NULL,k_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
  j_32 = t;
  d_32 :
  if(match_string(j_32, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
        {
          k_32 = ATgetFirst((ATermList) j_32);
          n_32 = (ATerm) ATgetNext((ATermList) j_32);
          i_32 :
          if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
            {
              o_32 = ATgetFirst((ATermList) n_32);
              p_32 = (ATerm) ATgetNext((ATermList) n_32);
              {
                ATerm w_32 = NULL;
                ATerm p_26;
                p_26 = t;
                {
                  t = not_null(k_32);
                  t = j_0(t);
                }
                t = p_26;
                {
                  ATerm x_32 = NULL;
                  t = not_null(o_32);
                  {
                    t = k_0(t);
                    {
                      x_32 = t;
                      if(((w_32 != NULL) && (w_32 != x_32)))
                        _fail(x_32);
                      else
                        w_32 = x_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_32)), not_null(w_32));
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
  ATerm m_7 (ATerm t)
  {
    ATerm e_33 = NULL;
    e_33 = t;
    b_33 :
    if(!(match_string(e_33, "-i")))
      {
        if(!(match_string(e_33, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    ATerm h_33 = NULL;
    ATerm u_26;
    u_26 = t;
    {
      ATerm f_33 = NULL;
      ATerm g_33 = NULL;
      g_33 = t;
      if(((f_33 != NULL) && (f_33 != g_33)))
        _fail(g_33);
      else
        f_33 = g_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(f_33));
        t = set_config_0(t);
      }
    }
    t = u_26;
    {
      ATerm i_33 = NULL;
      i_33 = t;
      if(((h_33 != NULL) && (h_33 != i_33)))
        _fail(i_33);
      else
        h_33 = i_33;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_33));
    }
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_v_26;
    return(t);
  }
  t = ArgOption_3(t, m_7, n_7, o_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = w_26;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_33 = NULL;
  ATerm c_27;
  c_27 = t;
  {
    ATerm r_7 (ATerm t)
    {
      ATerm o_33 = NULL,p_33 = NULL;
      o_33 = t;
      m_33 :
      if(match_cons(o_33, sym_Program_1))
        {
          p_33 = ATgetArgument(o_33, 0);
          if(((n_33 != NULL) && (n_33 != p_33)))
            _fail(p_33);
          else
            n_33 = p_33;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, r_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_27), not_null(n_33)), term_d_27));
      {
        t = printnl_0(t);
        {
          t = term_w_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_27;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, (ATerm) ATinsert(ATempty, term_f_27));
  {
    t = printnl_0(t);
    {
      t = term_w_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  t = SSL_TicksToSeconds(not_null(s_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym__2))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_33), not_null(z_33));
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            t = SSL_addr(not_null(y_33), not_null(z_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm i_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_67(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = i_27;
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
        g_34 = t;
        f_34 :
        if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
          {
            h_34 = ATgetFirst((ATermList) g_34);
            i_34 = (ATerm) ATgetNext((ATermList) g_34);
            {
              ATerm l_34 = NULL;
              ATerm m_34 = NULL;
              t = not_null(i_34);
              {
                t = foldr_2(t, d_67, e_67);
                {
                  m_34 = t;
                  if(((l_34 != NULL) && (l_34 != m_34)))
                    _fail(m_34);
                  else
                    l_34 = m_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_34), not_null(l_34));
                t = e_67(t);
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
ATerm crush_2 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm t_34 = NULL;
  ATerm v_34 = NULL;
  t_34 = t;
  {
    ATerm w_34 = NULL;
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    t = not_null(t_34);
    {
      w_34 = t;
      {
        t = SSL_explode_term(not_null(w_34));
        {
          y_34 = t;
          s_34 :
          if(match_cons(y_34, sym__2))
            {
              z_34 = ATgetArgument(y_34, 0);
              a_35 = ATgetArgument(y_34, 1);
              if(((v_34 != NULL) && (v_34 != a_35)))
                _fail(a_35);
              else
                v_34 = a_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_34);
      t = foldr_2(t, b_66, c_66);
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
      t = term_h_22;
      return(t);
    }
    t = crush_2(t, w_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      {
        ATerm t_27;
        t_27 = t;
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_35), not_null(i_35));
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
              t = SSL_gtr(not_null(h_35), not_null(i_35));
            }
        }
        t = t_27;
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
  ATerm o_35 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
      p_35 = t;
      n_35 :
      if(match_cons(p_35, sym__2))
        {
          q_35 = ATgetArgument(p_35, 0);
          r_35 = ATgetArgument(p_35, 1);
          {
            if(((o_35 != NULL) && (o_35 != q_35)))
              _fail(q_35);
            else
              o_35 = q_35;
            if(((o_35 != NULL) && (o_35 != r_35)))
              _fail(r_35);
            else
              o_35 = r_35;
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
ATerm if_verbose1_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm y_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28;
      b_28 = t;
      {
        ATerm u_35 = NULL;
        ATerm v_35 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            v_35 = t;
            if(((u_35 != NULL) && (u_35 != v_35)))
              _fail(v_35);
            else
              u_35 = v_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_35), term_w_9);
          t = geq_0(t);
        }
      }
      t = b_28;
      t = l_55(t);
      LocalPopChoice(a_28);
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
  ATerm x_7 (ATerm t)
  {
    ATerm z_35 = NULL,b_36 = NULL;
    ATerm c_28;
    c_28 = t;
    {
      ATerm a_36 = NULL;
      t = run_time_0(t);
      {
        a_36 = t;
        if(((z_35 != NULL) && (z_35 != a_36)))
          _fail(a_36);
        else
          z_35 = a_36;
      }
    }
    t = c_28;
    {
      ATerm c_36 = NULL;
      t = term_d_28;
      {
        t = get_config_0(t);
        {
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_28), not_null(z_35)), term_i_28), not_null(b_36)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_7);
  {
    t = term_h_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Version_0))
    {
      ATerm n_36 = NULL,p_36 = NULL;
      ATerm k_28;
      k_28 = t;
      {
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(l_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
      }
      t = k_28;
      {
        ATerm q_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        t = not_null(p_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm y_7 (ATerm t)
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
          ATerm v_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_28);
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
  t = fetch_1(t, y_7);
  t = j_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  t = SSL_table_create(not_null(v_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm d_29;
    d_29 = t;
    {
      t = term_e_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_29, term_g_29, not_null(z_36));
          t = table_put_0(t);
        }
      }
    }
    t = d_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  t = SSL_table_destroy(not_null(d_37));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  t = SSL_exit(not_null(k_37));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(((ATgetType(o_37) == AT_LIST) && ATisEmpty(o_37)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
        {
          p_37 = ATgetFirst((ATermList) o_37);
          q_37 = (ATerm) ATgetNext((ATermList) o_37);
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
    ATerm w_37 = NULL;
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
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
      w_37 = t;
      if(((t_37 != NULL) && (t_37 != w_37)))
        _fail(w_37);
      else
        t_37 = w_37;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(t_37));
      t = printnl_0(t);
    }
  }
  t = h_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_38 = NULL,k_38 = NULL,l_38 = NULL;
  l_38 = t;
  g_38 :
  if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
    {
      h_38 = ATgetFirst((ATermList) l_38);
      k_38 = (ATerm) ATgetNext((ATermList) l_38);
      {
        ATerm q_38 = NULL;
        t = not_null(k_38);
        {
          ATerm m_29;
          m_29 = t;
          {
            ATerm r_38 = NULL,t_38 = NULL,v_38 = NULL;
            ATerm n_29;
            n_29 = t;
            {
              ATerm s_38 = NULL;
              t = i_0(t);
              {
                s_38 = t;
                if(((r_38 != NULL) && (r_38 != s_38)))
                  _fail(s_38);
                else
                  r_38 = s_38;
              }
            }
            t = n_29;
            {
              ATerm u_38 = NULL;
              t = not_null(h_38);
              {
                t = h_0(t);
                {
                  u_38 = t;
                  if(((t_38 != NULL) && (t_38 != u_38)))
                    _fail(u_38);
                  else
                    t_38 = u_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_38)), not_null(t_38));
                {
                  v_38 = t;
                  if(((q_38 != NULL) && (q_38 != v_38)))
                    _fail(v_38);
                  else
                    q_38 = v_38;
                }
              }
            }
          }
          t = m_29;
          {
            ATerm z_7 (ATerm t)
            {
              t = not_null(q_38);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_38) == AT_LIST) && ATisEmpty(l_38)))
        {
          {
            t = term_y_10;
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
  ATerm e_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_76 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Program_1))
    {
      h_39 = ATgetArgument(g_39, 0);
      {
        ATerm m_39 = NULL,p_39 = NULL;
        ATerm n_39 = NULL;
        t = SSLgetAnnotations(not_null(g_39));
        {
          n_39 = t;
          if(((m_39 != NULL) && (m_39 != n_39)))
            _fail(n_39);
          else
            m_39 = n_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm s_39 = NULL;
            t = x_53(t);
            {
              p_39 = t;
              {
                ATerm t_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_39)), not_null(m_39));
                {
                  t_39 = t;
                  if(((s_39 != NULL) && (s_39 != t_39)))
                    _fail(t_39);
                  else
                    s_39 = t_39;
                }
                t = not_null(s_39);
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
  ATerm b_40 = NULL;
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_40 = NULL;
      t = term_d_28;
      {
        t = get_config_0(t);
        {
          c_40 = t;
          if(((b_40 != NULL) && (b_40 != c_40)))
            _fail(c_40);
          else
            b_40 = c_40;
        }
      }
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm f_8 (ATerm t)
        {
          ATerm g_8 (ATerm t)
          {
            ATerm d_40 = NULL;
            d_40 = t;
            if(((b_40 != NULL) && (b_40 != d_40)))
              _fail(d_40);
            else
              b_40 = d_40;
            return(t);
          }
          t = Program_1(t, g_8);
          return(t);
        }
        t = fetch_1(t, f_8);
      }
    }
  {
    t = term_v_29;
    {
      t = echo_0(t);
      {
        t = term_y_29;
        {
          t = table_get_0(t);
          {
            ATerm h_8 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_8);
            {
              ATerm i_8 (ATerm t)
              {
                ATerm e_40 = NULL;
                ATerm f_40 = NULL;
                f_40 = t;
                if(((e_40 != NULL) && (e_40 != f_40)))
                  _fail(f_40);
                else
                  e_40 = f_40;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_40)), term_z_29);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_8);
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
  ATerm c_30;
  c_30 = t;
  {
    ATerm k_40 = NULL;
    ATerm l_40 = NULL;
    l_40 = t;
    if(((k_40 != NULL) && (k_40 != l_40)))
      _fail(l_40);
    else
      k_40 = l_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_18, (ATerm) ATinsert(ATempty, not_null(k_40)));
      t = printnl_0(t);
    }
  }
  t = c_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm d_30;
  d_30 = t;
  {
    t = l_71(t);
    t = debug_0(t);
  }
  t = d_30;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_53 (ATerm))
{
  ATerm s_40 = NULL,t_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym_Undefined_1))
    {
      t_40 = ATgetArgument(s_40, 0);
      {
        ATerm w_40 = NULL,y_40 = NULL;
        ATerm x_40 = NULL;
        t = SSLgetAnnotations(not_null(s_40));
        {
          x_40 = t;
          if(((w_40 != NULL) && (w_40 != x_40)))
            _fail(x_40);
          else
            w_40 = x_40;
        }
        {
          t = not_null(t_40);
          {
            ATerm a_41 = NULL;
            t = y_53(t);
            {
              y_40 = t;
              {
                ATerm b_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_40)), not_null(w_40));
                {
                  b_41 = t;
                  if(((a_41 != NULL) && (a_41 != b_41)))
                    _fail(b_41);
                  else
                    a_41 = b_41;
                }
                t = not_null(a_41);
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
ATerm fetch_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm g_41 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_60, _id);
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = Cons_2(t, _id, g_41);
      }
    return(t);
  }
  t = g_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_75 (ATerm))
{
  t = fetch_1(t, q_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  k_41 :
  if(match_cons(m_41, sym_Help_0))
    {
      ATerm o_41 = NULL,q_41 = NULL;
      ATerm h_30;
      h_30 = t;
      {
        ATerm p_41 = NULL;
        t = SSLgetAnnotations(not_null(m_41));
        {
          p_41 = t;
          if(((o_41 != NULL) && (o_41 != p_41)))
            _fail(p_41);
          else
            o_41 = p_41;
        }
      }
      t = h_30;
      {
        ATerm s_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_41));
        {
          s_41 = t;
          if(((q_41 != NULL) && (q_41 != s_41)))
            _fail(s_41);
          else
            q_41 = s_41;
        }
        t = not_null(q_41);
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
  ATerm c_42 = NULL;
  c_42 = t;
  t = SSL_implode_string(not_null(c_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = i_30;
      {
        ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
        r_42 = t;
        g_42 :
        if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
          {
            s_42 = ATgetFirst((ATermList) r_42);
            t_42 = (ATerm) ATgetNext((ATermList) r_42);
            {
              t = not_null(s_42);
              {
                ATerm n_8 (ATerm t)
                {
                  t = not_null(t_42);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm f_43 = NULL;
  d_43 = t;
  {
    ATerm g_43 = NULL;
    ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
    t = not_null(d_43);
    {
      g_43 = t;
      {
        t = SSL_explode_term(not_null(g_43));
        {
          i_43 = t;
          b_43 :
          if(match_cons(i_43, sym__2))
            {
              j_43 = ATgetArgument(i_43, 0);
              k_43 = ATgetArgument(i_43, 1);
              c_43 :
              if(match_string(j_43, ""))
                {
                  if(((f_43 != NULL) && (f_43 != k_43)))
                    _fail(k_43);
                  else
                    f_43 = k_43;
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
      t = not_null(f_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm o_43 (ATerm t)
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_43);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        {
          t = Nil_0(t);
          t = e_61(t);
        }
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym__2))
    {
      s_43 = ATgetArgument(r_43, 0);
      t_43 = ATgetArgument(r_43, 1);
      {
        t = not_null(s_43);
        {
          ATerm o_8 (ATerm t)
          {
            t = not_null(t_43);
            return(t);
          }
          t = at_end_1(t, o_8);
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
  ATerm n_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = n_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_43 = NULL;
  y_43 = t;
  t = SSL_explode_string(not_null(y_43));
  return(t);
}
ATerm _2 (ATerm t, ATerm m_47 (ATerm), ATerm n_47 (ATerm))
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        ATerm o_44 = NULL,q_44 = NULL;
        ATerm p_44 = NULL;
        t = SSLgetAnnotations(not_null(h_44));
        {
          p_44 = t;
          if(((o_44 != NULL) && (o_44 != p_44)))
            _fail(p_44);
          else
            o_44 = p_44;
        }
        {
          t = not_null(i_44);
          {
            ATerm s_44 = NULL;
            t = m_47(t);
            {
              q_44 = t;
              {
                t = not_null(j_44);
                {
                  ATerm u_44 = NULL;
                  t = n_47(t);
                  {
                    s_44 = t;
                    {
                      ATerm v_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_44), not_null(s_44)), not_null(o_44));
                      {
                        v_44 = t;
                        if(((u_44 != NULL) && (u_44 != v_44)))
                          _fail(v_44);
                        else
                          u_44 = v_44;
                      }
                      t = not_null(u_44);
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
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym__2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        ATerm s_30;
        s_30 = t;
        t = SSL_printnl(not_null(e_45), not_null(f_45));
        t = s_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm t_30;
  t_30 = t;
  {
    ATerm l_45 = NULL,n_45 = NULL;
    ATerm u_30;
    u_30 = t;
    {
      ATerm m_45 = NULL;
      t = k_71(t);
      {
        m_45 = t;
        if(((l_45 != NULL) && (l_45 != m_45)))
          _fail(m_45);
        else
          l_45 = m_45;
      }
    }
    t = u_30;
    {
      ATerm o_45 = NULL;
      o_45 = t;
      if(((n_45 != NULL) && (n_45 != o_45)))
        _fail(o_45);
      else
        n_45 = o_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_45)), not_null(l_45)));
        t = printnl_0(t);
      }
    }
  }
  t = t_30;
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm r_45 (ATerm t)
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = Cons_2(t, p_60, r_45);
      }
    return(t);
  }
  t = r_45(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t_45 = t;
  t = SSL_is_string(not_null(t_45));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 (ATerm t)
            {
              ATerm d_31 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(f_31);
                }
              else
                {
                  t = d_31;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, p_8);
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            {
              ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
              c_46 = t;
              b_46 :
              if(match_cons(c_46, sym_Path_1))
                {
                  d_46 = ATgetArgument(c_46, 0);
                  t = not_null(d_46);
                }
              else
                {
                  if(match_cons(c_46, sym_Var_1))
                    {
                      d_46 = ATgetArgument(c_46, 0);
                      {
                        t = not_null(d_46);
                        {
                          ATerm g_31 = t;
                          int h_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_31);
                            }
                          else
                            {
                              t = g_31;
                              {
                                ATerm s_8 (ATerm t)
                                {
                                  t = term_j_31;
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
                      if(match_cons(c_46, sym_Prefix_2))
                        {
                          d_46 = ATgetArgument(c_46, 0);
                          e_46 = ATgetArgument(c_46, 1);
                          {
                            ATerm j_46 = NULL,l_46 = NULL;
                            ATerm k_31;
                            k_31 = t;
                            {
                              ATerm k_46 = NULL;
                              t = not_null(d_46);
                              {
                                t = eval_config_0(t);
                                {
                                  k_46 = t;
                                  if(((j_46 != NULL) && (j_46 != k_46)))
                                    _fail(k_46);
                                  else
                                    j_46 = k_46;
                                }
                              }
                            }
                            t = k_31;
                            {
                              ATerm m_46 = NULL;
                              t = not_null(e_46);
                              {
                                t = eval_config_0(t);
                                {
                                  m_46 = t;
                                  if(((l_46 != NULL) && (l_46 != m_46)))
                                    _fail(m_46);
                                  else
                                    l_46 = m_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), not_null(l_46));
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
  ATerm u_46 = NULL;
  u_46 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(u_46));
    {
      t = table_get_0(t);
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm n_31;
              n_31 = t;
              {
                ATerm w_46 = NULL;
                ATerm x_46 = NULL;
                x_46 = t;
                if(((w_46 != NULL) && (w_46 != x_46)))
                  _fail(x_46);
                else
                  w_46 = x_46;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_18, not_null(u_46), not_null(w_46));
                  t = table_put_0(t);
                }
              }
              t = n_31;
            }
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_59(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym__2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      t = SSL_table_get(not_null(d_47), not_null(e_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym__3))
    {
      o_47 = ATgetArgument(l_47, 0);
      p_47 = ATgetArgument(l_47, 1);
      q_47 = ATgetArgument(l_47, 2);
      {
        ATerm r_31;
        r_31 = t;
        {
          ATerm u_47 = NULL;
          ATerm v_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), not_null(p_47));
          {
            ATerm s_31 = t;
            int t_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_31);
              }
            else
              {
                t = s_31;
                t = (ATerm) ATempty;
              }
            {
              v_47 = t;
              if(((u_47 != NULL) && (u_47 != v_47)))
                _fail(v_47);
              else
                u_47 = v_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_47), not_null(p_47), (ATerm) ATinsert(CheckATermList(not_null(u_47)), not_null(q_47)));
            t = table_put_0(t);
          }
        }
        t = r_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm z_47 = NULL;
  ATerm a_48 = NULL;
  t = term_y_10;
  {
    t = v_76(t);
    {
      a_48 = t;
      if(((z_47 != NULL) && (z_47 != a_48)))
        _fail(a_48);
      else
        z_47 = a_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_29, term_x_29, not_null(z_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
  g_48 = t;
  f_48 :
  if(match_string(g_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
        {
          h_48 = ATgetFirst((ATermList) g_48);
          i_48 = (ATerm) ATgetNext((ATermList) g_48);
          {
            ATerm l_48 = NULL;
            ATerm u_31;
            u_31 = t;
            {
              t = not_null(h_48);
              t = a_0(t);
            }
            t = u_31;
            {
              ATerm m_48 = NULL;
              t = term_y_10;
              {
                t = d_0(t);
                {
                  m_48 = t;
                  if(((l_48 != NULL) && (l_48 != m_48)))
                    _fail(m_48);
                  else
                    l_48 = m_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_48)), not_null(l_48));
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
    ATerm r_48 = NULL;
    r_48 = t;
    q_48 :
    if(!(match_string(r_48, "--help")))
      {
        if(!(match_string(r_48, "-h")))
          {
            if(!(match_string(r_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_8 (ATerm t)
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
  t = Option_3(t, t_8, w_8, x_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_48 = NULL,x_48 = NULL,y_48 = NULL;
  u_48 = t;
  t_48 :
  if(((ATgetType(u_48) == AT_LIST) && !(ATisEmpty(u_48))))
    {
      x_48 = ATgetFirst((ATermList) u_48);
      y_48 = (ATerm) ATgetNext((ATermList) u_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_48 (ATerm), ATerm w_48 (ATerm))
{
  ATerm i_49 = NULL,j_49 = NULL,l_49 = NULL;
  i_49 = t;
  h_49 :
  if(((ATgetType(i_49) == AT_LIST) && !(ATisEmpty(i_49))))
    {
      j_49 = ATgetFirst((ATermList) i_49);
      l_49 = (ATerm) ATgetNext((ATermList) i_49);
      {
        ATerm p_49 = NULL,r_49 = NULL;
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(i_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
        {
          t = not_null(j_49);
          {
            ATerm t_49 = NULL;
            t = v_48(t);
            {
              r_49 = t;
              {
                t = not_null(l_49);
                {
                  ATerm v_49 = NULL;
                  t = w_48(t);
                  {
                    t_49 = t;
                    {
                      ATerm w_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_49)), not_null(r_49)), not_null(p_49));
                      {
                        w_49 = t;
                        if(((v_49 != NULL) && (v_49 != w_49)))
                          _fail(w_49);
                        else
                          v_49 = w_49;
                      }
                      t = not_null(v_49);
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
  ATerm g_50 = NULL;
  g_50 = t;
  f_50 :
  if(((ATgetType(g_50) == AT_LIST) && ATisEmpty(g_50)))
    {
      {
        ATerm i_50 = NULL,k_50 = NULL;
        ATerm a_32;
        a_32 = t;
        {
          ATerm j_50 = NULL;
          t = SSLgetAnnotations(not_null(g_50));
          {
            j_50 = t;
            if(((i_50 != NULL) && (i_50 != j_50)))
              _fail(j_50);
            else
              i_50 = j_50;
          }
        }
        t = a_32;
        {
          ATerm l_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_50));
          {
            l_50 = t;
            if(((k_50 != NULL) && (k_50 != l_50)))
              _fail(l_50);
            else
              k_50 = l_50;
          }
          t = not_null(k_50);
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
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
  r_50 = t;
  q_50 :
  if(match_cons(r_50, sym__2))
    {
      s_50 = ATgetArgument(r_50, 0);
      t_50 = ATgetArgument(r_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_18, not_null(s_50), not_null(t_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm b_32;
  b_32 = t;
  {
    ATerm c_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_32;
        t = t_76(t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = c_32;
        {
        }
      }
  }
  t = b_32;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm b_51 = NULL;
      ATerm g_32;
      g_32 = t;
      {
        ATerm z_50 = NULL;
        ATerm a_51 = NULL;
        a_51 = t;
        if(((z_50 != NULL) && (z_50 != a_51)))
          _fail(a_51);
        else
          z_50 = a_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_28, not_null(z_50));
          t = set_config_0(t);
        }
      }
      t = g_32;
      {
        ATerm c_51 = NULL;
        c_51 = t;
        if(((b_51 != NULL) && (b_51 != c_51)))
          _fail(c_51);
        else
          b_51 = c_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_51));
      }
      return(t);
    }
    ATerm d_9 (ATerm t)
    {
      ATerm h_32 = t;
      int l_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_32);
            }
          else
            {
              t = m_32;
              {
                t = t_76(t);
                t = Cons_2(t, _id, d_9);
              }
            }
          LocalPopChoice(l_32);
        }
      else
        {
          t = h_32;
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
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  ATerm r_32;
  r_32 = t;
  {
    ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
    l_51 = t;
    h_51 :
    if(match_cons(l_51, sym__3))
      {
        m_51 = ATgetArgument(l_51, 0);
        n_51 = ATgetArgument(l_51, 1);
        o_51 = ATgetArgument(l_51, 2);
        {
          if(((i_51 != NULL) && (i_51 != m_51)))
            _fail(m_51);
          else
            i_51 = m_51;
          {
            if(((j_51 != NULL) && (j_51 != n_51)))
              _fail(n_51);
            else
              j_51 = n_51;
            {
              if(((k_51 != NULL) && (k_51 != o_51)))
                _fail(o_51);
              else
                k_51 = o_51;
              t = SSL_table_put(not_null(i_51), not_null(j_51), not_null(k_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm r_51 = NULL;
  ATerm s_32;
  s_32 = t;
  {
    t = term_t_32;
    t = table_put_0(t);
  }
  t = s_32;
  {
    ATerm e_9 (ATerm t)
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_76(t);
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_9);
    {
      ATerm y_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_33;
          a_33 = t;
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_v_31;
                t = get_config_0(t);
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
                t = fetch_1(t, Help_0);
              }
          }
          t = a_33;
          {
            t = system_usage_0(t);
            {
              t = term_h_22;
              t = exit_0(t);
            }
          }
          LocalPopChoice(z_32);
        }
      else
        {
          t = y_32;
          {
            ATerm j_33 = t;
            int k_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm g_9 (ATerm t)
                  {
                    ATerm s_51 = NULL;
                    s_51 = t;
                    if(((r_51 != NULL) && (r_51 != s_51)))
                      _fail(s_51);
                    else
                      r_51 = s_51;
                    return(t);
                  }
                  t = Undefined_1(t, g_9);
                  return(t);
                }
                t = fetch_1(t, f_9);
                {
                  ATerm h_9 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_51)), term_l_33);
                    return(t);
                  }
                  t = say_1(t, h_9);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(k_33);
              }
            else
              {
                t = j_33;
                {
                }
              }
          }
        }
      {
        ATerm q_33;
        q_33 = t;
        {
          t = term_w_29;
          t = table_destroy_0(t);
        }
        t = q_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm s_74 (ATerm))
{
  t = parse_options_1(t, p_74);
  {
    t = store_options_0(t);
    {
      t = r_74(t);
      {
        ATerm r_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_74);
            LocalPopChoice(t_33);
          }
        else
          {
            t = r_33;
            {
              ATerm u_33 = t;
              int v_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_74(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_33);
                }
              else
                {
                  t = u_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  t = option_wrap_4(t, t_74, default_usage_0, _id, u_74);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm))
{
  ATerm j_9 (ATerm t)
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = xtc_io_1(t, e_70);
    return(t);
  }
  t = option_wrap_2(t, j_9, n_9);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  t = xtc_io_wrap_2(t, g_70, h_70);
  return(t);
}
ATerm parse_stratego_0 (ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    ATerm c_34;
    c_34 = t;
    {
      ATerm v_51 = NULL;
      ATerm w_51 = NULL;
      t = term_d_34;
      {
        t = xtc_find_path_0(t);
        {
          w_51 = t;
          if(((v_51 != NULL) && (v_51 != w_51)))
            _fail(w_51);
          else
            v_51 = w_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_51)), term_e_34));
        t = extend_config_0(t);
      }
    }
    t = c_34;
    t = parse_module_0(t);
    return(t);
  }
  t = xtc_iowrap_2(t, parse_stratego_options_0, p_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = parse_stratego_0(t);
  return(t);
}
