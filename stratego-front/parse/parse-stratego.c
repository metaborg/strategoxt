#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Include_1;
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_s_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_j_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_f_8;
ATerm term_e_8;
void init_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("asource", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Syntax_1, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_f_9);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_9);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_a_10);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_a_10);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_a_10);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_w_15);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__3, term_v_15, term_w_15, (ATerm) ATempty);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego.config", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p include modules from directory p", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("parsing ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm exit_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm verbosity_0 (ATerm);
ATerm call_out_4 (ATerm, ATerm c_54 (ATerm), ATerm d_54 (ATerm), ATerm e_54 (ATerm), ATerm f_54 (ATerm));
ATerm call_tmp_3 (ATerm, ATerm z_53 (ATerm), ATerm a_54 (ATerm), ATerm b_54 (ATerm));
ATerm leq_0 (ATerm);
ATerm if_less_verbose1_1 (ATerm, ATerm a_50 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_49 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm z_58 (ATerm));
ATerm basename_1 (ATerm, ATerm x_58 (ATerm));
ATerm basename_0 (ATerm);
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_49 (ATerm));
ATerm split_2 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm));
ATerm temp_file_1 (ATerm, ATerm u_57 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_57 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm y_49 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm _2 (ATerm, ATerm c_43 (ATerm), ATerm d_43 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_57 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_49 (ATerm));
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm Option_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_54 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_54 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_54 (ATerm));
ATerm Program_1 (ATerm, ATerm u_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_44 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_55 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_75 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_54 (ATerm));
ATerm parse_options_1 (ATerm, ATerm r_54 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_67 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_67 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm c_67 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm h_50 (ATerm), ATerm i_50 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm r_66 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm r_50 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_49 (ATerm), ATerm o_49 (ATerm));
ATerm parse_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  t = SSL_exit(not_null(a_1));
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  h_1 :
  if(match_cons(s_1, sym__2))
    {
      t_1 = ATgetArgument(s_1, 0);
      u_1 = ATgetArgument(s_1, 1);
      t = SSL_WriteToTextFile(not_null(t_1), not_null(u_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  {
    ATerm v_5;
    v_5 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATinsert(CheckATermList(not_null(z_1)), term_f_8));
      t = call_0(t);
    }
    t = v_5;
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_2 = NULL;
  d_2 = t;
  t = SSL_ReadFromFile(not_null(d_2));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  t = SSL_is_string(not_null(h_2));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
              q_2 = t;
              p_2 :
              if(match_cons(q_2, sym_Path_1))
                {
                  r_2 = ATgetArgument(q_2, 0);
                  t = not_null(r_2);
                }
              else
                {
                  if(match_cons(q_2, sym_Var_1))
                    {
                      r_2 = ATgetArgument(q_2, 0);
                      {
                        t = not_null(r_2);
                        {
                          ATerm k_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = k_8;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_q_8;
                                  return(t);
                                }
                                t = debug_1(t, d_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_2, sym_Prefix_2))
                        {
                          r_2 = ATgetArgument(q_2, 0);
                          s_2 = ATgetArgument(q_2, 1);
                          {
                            ATerm x_2 = NULL,z_2 = NULL;
                            ATerm r_8;
                            r_8 = t;
                            {
                              ATerm y_2 = NULL;
                              t = not_null(r_2);
                              {
                                t = eval_config_0(t);
                                {
                                  y_2 = t;
                                  if(((x_2 != NULL) && (x_2 != y_2)))
                                    _fail(y_2);
                                  else
                                    x_2 = y_2;
                                }
                              }
                            }
                            t = r_8;
                            {
                              ATerm a_3 = NULL;
                              t = not_null(s_2);
                              {
                                t = eval_config_0(t);
                                {
                                  a_3 = t;
                                  if(((z_2 != NULL) && (z_2 != a_3)))
                                    _fail(a_3);
                                  else
                                    z_2 = a_3;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_2), not_null(z_2));
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
  ATerm i_3 = NULL;
  i_3 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(i_3));
    {
      t = table_get_0(t);
      {
        ATerm g_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_8;
            t_8 = t;
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              l_3 = t;
              if(((k_3 != NULL) && (k_3 != l_3)))
                _fail(l_3);
              else
                k_3 = l_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_8, not_null(i_3), not_null(k_3));
                t = table_put_0(t);
              }
            }
            t = t_8;
          }
          return(t);
        }
        t = try_1(t, g_0);
      }
    }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm p_3 = NULL;
  p_3 = t;
  t = SSL_int_to_string(not_null(p_3));
  return(t);
}
ATerm verbosity_0 (ATerm t)
{
  ATerm u_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_9;
      t = get_config_0(t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = u_8;
      t = term_f_9;
    }
  return(t);
}
ATerm call_out_4 (ATerm t, ATerm c_54 (ATerm), ATerm d_54 (ATerm), ATerm e_54 (ATerm), ATerm f_54 (ATerm))
{
  ATerm w_3 = NULL;
  ATerm y_3 = NULL,a_4 = NULL,c_4 = NULL;
  w_3 = t;
  {
    ATerm g_9;
    g_9 = t;
    {
      ATerm z_3 = NULL;
      t = c_54(t);
      {
        z_3 = t;
        if(((y_3 != NULL) && (y_3 != z_3)))
          _fail(z_3);
        else
          y_3 = z_3;
      }
    }
    t = g_9;
    {
      ATerm i_9;
      i_9 = t;
      {
        ATerm b_4 = NULL;
        t = e_54(t);
        {
          b_4 = t;
          if(((a_4 != NULL) && (a_4 != b_4)))
            _fail(b_4);
          else
            a_4 = b_4;
        }
      }
      t = i_9;
      {
        ATerm d_4 = NULL;
        t = d_54(t);
        {
          d_4 = t;
          if(((c_4 != NULL) && (c_4 != d_4)))
            _fail(d_4);
          else
            c_4 = d_4;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_4)), not_null(a_4)), term_k_9), not_null(w_3)), term_j_9));
          {
            t = call_0(t);
            {
              t = e_54(t);
              t = f_54(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm call_tmp_3 (ATerm t, ATerm z_53 (ATerm), ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm n_4 = NULL;
  n_4 = t;
  {
    ATerm h_0 (ATerm t)
    {
      ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
      p_4 = t;
      m_4 :
      if(match_cons(p_4, sym__2))
        {
          q_4 = ATgetArgument(p_4, 0);
          r_4 = ATgetArgument(p_4, 1);
          {
            ATerm t_4 = NULL,v_4 = NULL;
            ATerm l_9;
            l_9 = t;
            {
              ATerm u_4 = NULL;
              t = z_53(t);
              {
                u_4 = t;
                if(((t_4 != NULL) && (t_4 != u_4)))
                  _fail(u_4);
                else
                  t_4 = u_4;
              }
            }
            t = l_9;
            {
              ATerm w_4 = NULL;
              t = a_54(t);
              {
                w_4 = t;
                if(((v_4 != NULL) && (v_4 != w_4)))
                  _fail(w_4);
                else
                  v_4 = w_4;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_4)), not_null(q_4)), term_k_9), not_null(n_4)), term_j_9));
                {
                  t = if_verbose5_1(t, debug_0);
                  {
                    t = call_0(t);
                    {
                      t = not_null(q_4);
                      t = b_54(t);
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
    t = temp_file_1(t, h_0);
  }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm m_9 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_9;
    }
  return(t);
}
ATerm if_less_verbose1_1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm m_0 (ATerm t)
  {
    ATerm n_9;
    n_9 = t;
    {
      ATerm c_5 = NULL;
      ATerm d_5 = NULL;
      t = term_b_9;
      {
        t = get_config_0(t);
        {
          d_5 = t;
          if(((c_5 != NULL) && (c_5 != d_5)))
            _fail(d_5);
          else
            c_5 = d_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_p_9);
        t = leq_0(t);
      }
    }
    t = n_9;
    t = a_50(t);
    return(t);
  }
  t = try_1(t, m_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_49 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm g_5 = NULL;
      ATerm h_5 = NULL;
      t = term_b_9;
      {
        t = get_config_0(t);
        {
          h_5 = t;
          if(((g_5 != NULL) && (g_5 != h_5)))
            _fail(h_5);
          else
            g_5 = h_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), term_y_9);
        t = geq_0(t);
      }
    }
    t = r_9;
    t = v_49(t);
    return(t);
  }
  t = try_1(t, n_0);
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym__2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_5)), term_z_9), not_null(m_5));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm z_58 (ATerm))
{
  t = basename_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = term_a_10;
      t = z_58(t);
      return(t);
    }
    t = split_2(t, _id, o_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm x_58 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm p_0 (ATerm t)
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, p_0);
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          {
            ATerm d_10 = t;
            int g_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_0 (ATerm t)
                {
                  ATerm t_5 = NULL;
                  t_5 = t;
                  r_5 :
                  if(!(match_int(t_5, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, q_0, _id);
                LocalPopChoice(g_10);
              }
            else
              {
                t = d_10;
                {
                  ATerm r_0 (ATerm t)
                  {
                    ATerm u_5 = NULL;
                    u_5 = t;
                    s_5 :
                    if(!(match_int(u_5, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, r_0, x_58);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, p_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      t = SSL_call(not_null(z_5), not_null(a_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm h_10;
  h_10 = t;
  {
    ATerm f_6 = NULL;
    ATerm g_6 = NULL;
    g_6 = t;
    if(((f_6 != NULL) && (f_6 != g_6)))
      _fail(g_6);
    else
      f_6 = g_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATempty, not_null(f_6)));
      t = printnl_0(t);
    }
  }
  t = h_10;
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_49 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm j_6 = NULL;
      ATerm k_6 = NULL;
      t = term_b_9;
      {
        t = get_config_0(t);
        {
          k_6 = t;
          if(((j_6 != NULL) && (j_6 != k_6)))
            _fail(k_6);
          else
            j_6 = k_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), term_k_10);
        t = geq_0(t);
      }
    }
    t = j_10;
    t = x_49(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm))
{
  ATerm o_6 = NULL,q_6 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm p_6 = NULL;
    t = q_59(t);
    {
      p_6 = t;
      if(((o_6 != NULL) && (o_6 != p_6)))
        _fail(p_6);
      else
        o_6 = p_6;
    }
  }
  t = l_10;
  {
    ATerm r_6 = NULL;
    t = r_59(t);
    {
      r_6 = t;
      if(((q_6 != NULL) && (q_6 != r_6)))
        _fail(r_6);
      else
        q_6 = r_6;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), not_null(q_6));
  }
  return(t);
}
ATerm temp_file_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm v_6 = NULL;
  ATerm t_10;
  t_10 = t;
  {
    ATerm w_6 = NULL;
    t = new_file_0(t);
    {
      w_6 = t;
      if(((v_6 != NULL) && (v_6 != w_6)))
        _fail(w_6);
      else
        v_6 = w_6;
    }
  }
  t = t_10;
  {
    ATerm t_0 (ATerm t)
    {
      t = not_null(v_6);
      return(t);
    }
    t = split_2(t, t_0, _id);
    {
      ATerm v_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_57(t);
          {
            ATerm a_11;
            a_11 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(v_6));
              t = rm_files_0(t);
            }
            t = a_11;
          }
          LocalPopChoice(z_10);
        }
      else
        {
          t = v_10;
          {
            ATerm b_11;
            b_11 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(v_6));
              t = rm_files_0(t);
            }
            t = b_11;
            _fail(t);
          }
        }
    }
  }
  return(t);
}
ATerm get_syntax_definition_0 (ATerm t)
{
  ATerm i_7 = NULL;
  ATerm k_7 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = term_c_11;
      return(t);
    }
    t = debug_1(t, v_0);
    return(t);
  }
  t = if_verbose6_1(t, u_0);
  {
    i_7 = t;
    {
      ATerm m_7 = NULL;
      ATerm w_0 (ATerm t)
      {
        t = term_d_11;
        return(t);
      }
      t = guarantee_extension_1(t, w_0);
      {
        k_7 = t;
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_7 = NULL;
              ATerm o_7 = NULL;
              t = term_g_11;
              {
                t = get_config_0(t);
                {
                  o_7 = t;
                  if(((n_7 != NULL) && (n_7 != o_7)))
                    _fail(o_7);
                  else
                    n_7 = o_7;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_7), not_null(n_7));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = term_j_11;
                        return(t);
                      }
                      t = debug_1(t, y_0);
                      return(t);
                    }
                    t = if_verbose2_1(t, x_0);
                  }
                }
              }
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              {
                ATerm p_7 = NULL;
                ATerm z_0 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_l_11;
                    return(t);
                  }
                  t = say_1(t, b_1);
                  return(t);
                }
                t = if_verbose2_1(t, z_0);
                {
                  t = not_null(i_7);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      t = term_o_11;
                      return(t);
                    }
                    t = guarantee_extension_1(t, c_1);
                    {
                      p_7 = t;
                      {
                        if(((m_7 != NULL) && (m_7 != p_7)))
                          _fail(p_7);
                        else
                          m_7 = p_7;
                        {
                          ATerm d_1 (ATerm t)
                          {
                            ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
                            q_7 = t;
                            h_7 :
                            if(match_cons(q_7, sym__2))
                              {
                                r_7 = ATgetArgument(q_7, 0);
                                s_7 = ATgetArgument(q_7, 1);
                                {
                                  ATerm u_7 = NULL,w_7 = NULL,a_8 = NULL;
                                  ATerm r_11;
                                  r_11 = t;
                                  {
                                    ATerm v_7 = NULL;
                                    t = term_u_11;
                                    {
                                      t = get_config_0(t);
                                      {
                                        v_7 = t;
                                        if(((u_7 != NULL) && (u_7 != v_7)))
                                          _fail(v_7);
                                        else
                                          u_7 = v_7;
                                      }
                                    }
                                  }
                                  t = r_11;
                                  {
                                    ATerm z_7 = NULL;
                                    t = term_g_11;
                                    {
                                      t = get_config_0(t);
                                      {
                                        ATerm e_1 (ATerm t)
                                        {
                                          ATerm x_7 = NULL;
                                          ATerm y_7 = NULL;
                                          y_7 = t;
                                          if(((x_7 != NULL) && (x_7 != y_7)))
                                            _fail(y_7);
                                          else
                                            x_7 = y_7;
                                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_7)), term_g_11);
                                          return(t);
                                        }
                                        t = map_1(t, e_1);
                                        {
                                          t = concat_0(t);
                                          {
                                            z_7 = t;
                                            if(((w_7 != NULL) && (w_7 != z_7)))
                                              _fail(z_7);
                                            else
                                              w_7 = z_7;
                                          }
                                        }
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_7)), not_null(r_7)), term_k_9), not_null(m_7)), term_j_9));
                                      {
                                        t = if_verbose5_1(t, debug_0);
                                        {
                                          t = call_0(t);
                                          {
                                            ATerm b_8 = NULL;
                                            t = term_v_11;
                                            {
                                              t = get_config_0(t);
                                              {
                                                b_8 = t;
                                                if(((a_8 != NULL) && (a_8 != b_8)))
                                                  _fail(b_8);
                                                else
                                                  a_8 = b_8;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_7)), term_k_9), not_null(r_7)), term_j_9));
                                              {
                                                t = if_verbose5_1(t, debug_0);
                                                t = call_0(t);
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
                          t = temp_file_1(t, d_1);
                          t = not_null(k_7);
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
ATerm say_1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm w_11;
  w_11 = t;
  {
    t = g_57(t);
    t = debug_0(t);
  }
  t = w_11;
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  m_8 :
  if(((ATgetType(n_8) == AT_LIST) && ((ATermList) n_8 != ATempty)))
    {
      o_8 = ATgetFirst((ATermList) n_8);
      p_8 = (ATerm) ATgetNext((ATermList) n_8);
      t = not_null(p_8);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym__2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        t = not_null(z_8);
        {
          ATerm h_9 (ATerm t)
          {
            ATerm x_11 = t;
            int y_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
                c_9 = t;
                v_8 :
                if(((ATgetType(c_9) == AT_LIST) && ((ATermList) c_9 != ATempty)))
                  {
                    d_9 = ATgetFirst((ATermList) c_9);
                    e_9 = (ATerm) ATgetNext((ATermList) c_9);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_8)), term_b_12), not_null(d_9));
                      {
                        t = concat_strings_0(t);
                        t = file_exists_0(t);
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(y_11);
              }
            else
              {
                t = x_11;
                {
                  t = Tl_0(t);
                  t = h_9(t);
                }
              }
            return(t);
          }
          t = h_9(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_parse_table_0 (ATerm t)
{
  ATerm o_9 = NULL;
  ATerm q_9 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      t = term_c_12;
      return(t);
    }
    t = debug_1(t, g_1);
    return(t);
  }
  t = if_verbose6_1(t, f_1);
  {
    o_9 = t;
    {
      ATerm s_9 = NULL;
      ATerm i_1 (ATerm t)
      {
        t = term_d_12;
        return(t);
      }
      t = guarantee_extension_1(t, i_1);
      {
        q_9 = t;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL;
              ATerm u_9 = NULL;
              t = term_g_11;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(t_9));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = term_g_12;
                        return(t);
                      }
                      t = debug_1(t, k_1);
                      return(t);
                    }
                    t = if_verbose2_1(t, j_1);
                  }
                }
              }
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              {
                ATerm v_9 = NULL;
                ATerm l_1 (ATerm t)
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = term_h_12;
                    return(t);
                  }
                  t = say_1(t, m_1);
                  return(t);
                }
                t = if_verbose2_1(t, l_1);
                {
                  t = not_null(o_9);
                  {
                    ATerm w_9 = NULL;
                    t = get_syntax_definition_0(t);
                    {
                      v_9 = t;
                      {
                        if(((s_9 != NULL) && (s_9 != v_9)))
                          _fail(v_9);
                        else
                          s_9 = v_9;
                        {
                          ATerm x_9 = NULL;
                          t = term_i_12;
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
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_9)), term_n_12), not_null(q_9)), term_k_9), not_null(s_9)), term_j_9));
                            {
                              t = if_verbose5_1(t, debug_0);
                              {
                                t = call_0(t);
                                t = not_null(q_9);
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
ATerm error_0 (ATerm t)
{
  ATerm o_12;
  o_12 = t;
  {
    ATerm e_10 = NULL;
    ATerm f_10 = NULL;
    f_10 = t;
    if(((e_10 != NULL) && (e_10 != f_10)))
      _fail(f_10);
    else
      e_10 = f_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(e_10));
      t = printnl_0(t);
    }
  }
  t = o_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm q_12;
  q_12 = t;
  {
    t = error_0(t);
    {
      t = term_p_9;
      t = exit_0(t);
    }
  }
  t = q_12;
  return(t);
}
ATerm get_meta_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_s_12;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose6_1(t, n_1);
  {
    t = basename_0(t);
    {
      ATerm u_12 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_10 = NULL;
          ATerm p_1 (ATerm t)
          {
            t = term_c_13;
            return(t);
          }
          t = guarantee_extension_1(t, p_1);
          {
            q_10 = t;
            {
              if(((n_10 != NULL) && (n_10 != q_10)))
                _fail(q_10);
              else
                n_10 = q_10;
              t = ReadFromFile_0(t);
            }
          }
          LocalPopChoice(b_13);
        }
      else
        {
          t = u_12;
          {
            ATerm d_13 = t;
            int e_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_10 = NULL;
                ATerm s_10 = NULL;
                ATerm q_1 (ATerm t)
                {
                  t = term_f_13;
                  return(t);
                }
                t = guarantee_extension_1(t, q_1);
                {
                  r_10 = t;
                  {
                    if(((o_10 != NULL) && (o_10 != r_10)))
                      _fail(r_10);
                    else
                      o_10 = r_10;
                    {
                      t = ReadFromFile_0(t);
                      {
                        s_10 = t;
                        {
                          ATerm u_10 = NULL;
                          ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
                          t = not_null(s_10);
                          {
                            u_10 = t;
                            {
                              t = SSL_explode_term(not_null(u_10));
                              {
                                w_10 = t;
                                m_10 :
                                if(match_cons(w_10, sym__2))
                                  {
                                    x_10 = ATgetArgument(w_10, 0);
                                    y_10 = ATgetArgument(w_10, 1);
                                    if(((p_10 != NULL) && (p_10 != x_10)))
                                      _fail(x_10);
                                    else
                                      p_10 = x_10;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, not_null(p_10))));
                        }
                      }
                    }
                  }
                }
                LocalPopChoice(e_13);
              }
            else
              {
                t = d_13;
                t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_h_13));
              }
          }
        }
      {
        ATerm r_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            t = term_s_12;
            return(t);
          }
          t = debug_1(t, v_1);
          return(t);
        }
        t = if_verbose6_1(t, r_1);
      }
    }
  }
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm x_1 (ATerm t)
    {
      t = term_i_13;
      return(t);
    }
    t = debug_1(t, x_1);
    return(t);
  }
  t = if_verbose6_1(t, w_1);
  {
    k_11 = t;
    {
      t = get_meta_0(t);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_11 = NULL,n_11 = NULL;
            m_11 = t;
            i_11 :
            if(match_cons(m_11, sym_Meta_1))
              {
                n_11 = ATgetArgument(m_11, 0);
                {
                  t = not_null(n_11);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      ATerm p_11 = NULL,q_11 = NULL;
                      p_11 = t;
                      h_11 :
                      if(match_cons(p_11, sym_Syntax_1))
                        {
                          q_11 = ATgetArgument(p_11, 0);
                          t = not_null(q_11);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = fetch_elem_1(t, y_1);
                  }
                }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm s_11 = NULL;
              ATerm t_11 = NULL;
              t_11 = t;
              if(((s_11 != NULL) && (s_11 != t_11)))
                _fail(t_11);
              else
                s_11 = t_11;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_13), not_null(k_11)), term_m_13), not_null(s_11)), term_l_13);
                t = fatal_error_0(t);
              }
            }
          }
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              t = term_s_13;
              return(t);
            }
            t = debug_1(t, b_2);
            return(t);
          }
          t = if_verbose2_1(t, a_2);
        }
      }
    }
  }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm t_13;
    t_13 = t;
    {
      ATerm z_11 = NULL;
      ATerm a_12 = NULL;
      t = term_b_9;
      {
        t = get_config_0(t);
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), term_x_13);
        t = geq_0(t);
      }
    }
    t = t_13;
    t = y_49(t);
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_z_13;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose6_1(t, e_2);
  {
    k_12 = t;
    j_12 :
    if(match_cons(k_12, sym__2))
      {
        l_12 = ATgetArgument(k_12, 0);
        m_12 = ATgetArgument(k_12, 1);
        {
          ATerm p_12 = NULL;
          t = not_null(l_12);
          {
            ATerm r_12 = NULL;
            t = get_syntax_0(t);
            {
              p_12 = t;
              {
                ATerm t_12 = NULL;
                t = get_parse_table_0(t);
                {
                  r_12 = t;
                  {
                    t = not_null(l_12);
                    {
                      t = basename_0(t);
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = term_c_14;
                          return(t);
                        }
                        t = guarantee_extension_1(t, g_2);
                        {
                          t_12 = t;
                          {
                            t = not_null(l_12);
                            {
                              ATerm i_2 (ATerm t)
                              {
                                t = term_d_14;
                                t = get_config_0(t);
                                return(t);
                              }
                              ATerm j_2 (ATerm t)
                              {
                                ATerm v_12 = NULL;
                                ATerm w_12 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm l_2 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, term_e_14);
                                    return(t);
                                  }
                                  t = if_verbose3_1(t, l_2);
                                  {
                                    w_12 = t;
                                    if(((v_12 != NULL) && (v_12 != w_12)))
                                      _fail(w_12);
                                    else
                                      v_12 = w_12;
                                  }
                                }
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_12)), not_null(r_12)), term_g_14), term_f_14);
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_h_14;
                                  t = get_config_0(t);
                                  return(t);
                                }
                                ATerm n_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_k_14);
                                      return(t);
                                    }
                                    t = if_less_verbose1_1(t, u_2);
                                  }
                                  return(t);
                                }
                                ATerm o_2 (ATerm t)
                                {
                                  t = not_null(t_12);
                                  return(t);
                                }
                                ATerm t_2 (ATerm t)
                                {
                                  ATerm v_2 (ATerm t)
                                  {
                                    t = term_l_14;
                                    t = get_config_0(t);
                                    return(t);
                                  }
                                  ATerm w_2 (ATerm t)
                                  {
                                    ATerm x_12 = NULL;
                                    ATerm y_12 = NULL;
                                    t = verbosity_0(t);
                                    {
                                      t = int_to_string_0(t);
                                      {
                                        y_12 = t;
                                        if(((x_12 != NULL) && (x_12 != y_12)))
                                          _fail(y_12);
                                        else
                                          x_12 = y_12;
                                      }
                                    }
                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_12)), term_b_9);
                                    return(t);
                                  }
                                  ATerm b_3 (ATerm t)
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      t = term_m_14;
                                      t = get_config_0(t);
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      ATerm z_12 = NULL;
                                      ATerm a_13 = NULL;
                                      t = verbosity_0(t);
                                      {
                                        t = int_to_string_0(t);
                                        {
                                          a_13 = t;
                                          if(((z_12 != NULL) && (z_12 != a_13)))
                                            _fail(a_13);
                                          else
                                            z_12 = a_13;
                                        }
                                      }
                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_12)), term_b_9);
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = not_null(m_12);
                                      return(t);
                                    }
                                    t = call_out_4(t, c_3, d_3, e_3, _id);
                                    return(t);
                                  }
                                  t = call_tmp_3(t, v_2, w_2, b_3);
                                  return(t);
                                }
                                t = call_out_4(t, m_2, n_2, o_2, t_2);
                                return(t);
                              }
                              t = call_tmp_3(t, i_2, j_2, k_2);
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
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_43 (ATerm), ATerm d_43 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym__2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        ATerm u_13 = NULL,w_13 = NULL;
        ATerm v_13 = NULL;
        t = SSLgetAnnotations(not_null(o_13));
        {
          v_13 = t;
          if(((u_13 != NULL) && (u_13 != v_13)))
            _fail(v_13);
          else
            u_13 = v_13;
        }
        {
          t = not_null(p_13);
          {
            ATerm y_13 = NULL;
            t = c_43(t);
            {
              w_13 = t;
              {
                t = not_null(q_13);
                {
                  ATerm a_14 = NULL;
                  t = d_43(t);
                  {
                    y_13 = t;
                    {
                      ATerm b_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_13), not_null(y_13)), not_null(u_13));
                      {
                        b_14 = t;
                        if(((a_14 != NULL) && (a_14 != b_14)))
                          _fail(b_14);
                        else
                          a_14 = b_14;
                      }
                      t = not_null(a_14);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm i_14 = NULL;
  ATerm j_14 = NULL;
  t = term_a_10;
  {
    t = new_0(t);
    {
      j_14 = t;
      if(((i_14 != NULL) && (i_14 != j_14)))
        _fail(j_14);
      else
        i_14 = j_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), term_n_14);
    {
      t = conc_strings_0(t);
      {
        ATerm f_3 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, f_3);
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_57 (ATerm))
{
  ATerm s_14;
  s_14 = t;
  {
    ATerm o_14 = NULL,q_14 = NULL;
    ATerm t_14;
    t_14 = t;
    {
      ATerm p_14 = NULL;
      t = f_57(t);
      {
        p_14 = t;
        if(((o_14 != NULL) && (o_14 != p_14)))
          _fail(p_14);
        else
          o_14 = p_14;
      }
    }
    t = t_14;
    {
      ATerm r_14 = NULL;
      r_14 = t;
      if(((q_14 != NULL) && (q_14 != r_14)))
        _fail(r_14);
      else
        q_14 = r_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_14)), not_null(o_14)));
        t = printnl_0(t);
      }
    }
  }
  t = s_14;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm u_14;
        u_14 = t;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_14), not_null(y_14));
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = SSL_gtr(not_null(x_14), not_null(y_14));
            }
        }
        t = u_14;
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
  ATerm e_15 = NULL;
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
      f_15 = t;
      d_15 :
      if(match_cons(f_15, sym__2))
        {
          g_15 = ATgetArgument(f_15, 0);
          h_15 = ATgetArgument(f_15, 1);
          {
            if(((e_15 != NULL) && (e_15 != g_15)))
              _fail(g_15);
            else
              e_15 = g_15;
            if(((e_15 != NULL) && (e_15 != h_15)))
              _fail(h_15);
            else
              e_15 = h_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_49 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm i_15;
    i_15 = t;
    {
      ATerm k_15 = NULL;
      ATerm l_15 = NULL;
      t = term_b_9;
      {
        t = get_config_0(t);
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_j_15);
        t = geq_0(t);
      }
    }
    t = i_15;
    t = u_49(t);
    return(t);
  }
  t = try_1(t, g_3);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,a_16 = NULL;
  t_15 = t;
  q_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      a_16 = ATgetArgument(t_15, 1);
      {
        t = not_null(u_15);
        {
          ATerm h_3 (ATerm t)
          {
            t = not_null(a_16);
            return(t);
          }
          t = at_end_1(t, h_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_cons(i_16, sym__2))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      {
        ATerm n_16 = NULL;
        ATerm o_16 = NULL,q_16 = NULL;
        ATerm p_16 = NULL;
        t = not_null(j_16);
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              t = (ATerm) ATempty;
            }
          {
            p_16 = t;
            if(((o_16 != NULL) && (o_16 != p_16)))
              _fail(p_16);
            else
              o_16 = p_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(o_16));
          {
            t = conc_0(t);
            {
              q_16 = t;
              if(((n_16 != NULL) && (n_16 != q_16)))
                _fail(q_16);
              else
                n_16 = q_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_8, not_null(j_16), not_null(n_16));
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
ATerm set_config_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_8, not_null(x_16), not_null(y_16));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_string(g_17, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_17) == AT_LIST) && ((ATermList) g_17 != ATempty)))
        {
          h_17 = ATgetFirst((ATermList) g_17);
          i_17 = (ATerm) ATgetNext((ATermList) g_17);
          {
            ATerm l_17 = NULL;
            ATerm o_15;
            o_15 = t;
            {
              t = not_null(h_17);
              t = j_0(t);
            }
            t = o_15;
            {
              ATerm m_17 = NULL;
              t = term_a_10;
              {
                t = k_0(t);
                {
                  m_17 = t;
                  if(((l_17 != NULL) && (l_17 != m_17)))
                    _fail(m_17);
                  else
                    l_17 = m_17;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_17)), not_null(l_17));
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
ATerm table_push_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym__3))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      w_17 = ATgetArgument(t_17, 2);
      {
        ATerm p_15;
        p_15 = t;
        {
          ATerm a_18 = NULL;
          ATerm b_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(v_17));
          {
            ATerm r_15 = t;
            int s_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_15);
              }
            else
              {
                t = r_15;
                t = (ATerm) ATempty;
              }
            {
              b_18 = t;
              if(((a_18 != NULL) && (a_18 != b_18)))
                _fail(b_18);
              else
                a_18 = b_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_17), not_null(v_17), (ATerm) ATinsert(CheckATermList(not_null(a_18)), not_null(w_17)));
            t = table_put_0(t);
          }
        }
        t = p_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm f_18 = NULL;
  ATerm g_18 = NULL;
  t = term_a_10;
  {
    t = u_54(t);
    {
      g_18 = t;
      if(((f_18 != NULL) && (f_18 != g_18)))
        _fail(g_18);
      else
        f_18 = g_18;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_15, term_w_15, not_null(f_18));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  l_18 :
  if(match_string(n_18, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(n_18) == AT_LIST) && ((ATermList) n_18 != ATempty)))
        {
          o_18 = ATgetFirst((ATermList) n_18);
          p_18 = (ATerm) ATgetNext((ATermList) n_18);
          m_18 :
          if(((ATgetType(p_18) == AT_LIST) && ((ATermList) p_18 != ATempty)))
            {
              q_18 = ATgetFirst((ATermList) p_18);
              r_18 = (ATerm) ATgetNext((ATermList) p_18);
              {
                ATerm b_19 = NULL;
                ATerm x_15;
                x_15 = t;
                {
                  t = not_null(o_18);
                  t = e_0(t);
                }
                t = x_15;
                {
                  ATerm c_19 = NULL;
                  t = not_null(q_18);
                  {
                    t = f_0(t);
                    {
                      c_19 = t;
                      if(((b_19 != NULL) && (b_19 != c_19)))
                        _fail(c_19);
                      else
                        b_19 = c_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_18)), not_null(b_19));
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
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
  t = SSL_string_to_int(not_null(l_19));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 (ATerm t)
      {
        ATerm e_20 = NULL;
        e_20 = t;
        r_19 :
        if(!(match_string(e_20, "-i")))
          {
            if(!(match_string(e_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        ATerm h_20 = NULL;
        ATerm b_16;
        b_16 = t;
        {
          ATerm f_20 = NULL;
          ATerm g_20 = NULL;
          g_20 = t;
          if(((f_20 != NULL) && (f_20 != g_20)))
            _fail(g_20);
          else
            f_20 = g_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(f_20));
            t = set_config_0(t);
          }
        }
        t = b_16;
        {
          ATerm j_20 = NULL;
          j_20 = t;
          if(((h_20 != NULL) && (h_20 != j_20)))
            _fail(j_20);
          else
            h_20 = j_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_20));
        }
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        t = term_c_16;
        return(t);
      }
      t = ArgOption_3(t, j_3, m_3, n_3);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              ATerm k_20 = NULL;
              k_20 = t;
              u_19 :
              if(!(match_string(k_20, "-o")))
                {
                  if(!(match_string(k_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_3 (ATerm t)
            {
              ATerm n_20 = NULL;
              ATerm f_16;
              f_16 = t;
              {
                ATerm l_20 = NULL;
                ATerm m_20 = NULL;
                m_20 = t;
                if(((l_20 != NULL) && (l_20 != m_20)))
                  _fail(m_20);
                else
                  l_20 = m_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(l_20));
                  t = set_config_0(t);
                }
              }
              t = f_16;
              {
                ATerm o_20 = NULL;
                o_20 = t;
                if(((n_20 != NULL) && (n_20 != o_20)))
                  _fail(o_20);
                else
                  n_20 = o_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_20));
              }
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              t = term_g_16;
              return(t);
            }
            t = ArgOption_3(t, o_3, q_3, r_3);
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm p_20 = NULL;
                    p_20 = t;
                    x_19 :
                    if(!(match_string(p_20, "-S")))
                      {
                        if(!(match_string(p_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = term_r_16;
                    t = set_config_0(t);
                    t = term_s_16;
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = term_t_16;
                    return(t);
                  }
                  t = Option_3(t, s_3, t_3, u_3);
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
                  {
                    ATerm u_16 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 (ATerm t)
                        {
                          ATerm q_20 = NULL;
                          q_20 = t;
                          y_19 :
                          if(!(match_string(q_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          ATerm t_20 = NULL;
                          ATerm a_17;
                          a_17 = t;
                          {
                            ATerm r_20 = NULL;
                            ATerm s_20 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_20 = t;
                              if(((r_20 != NULL) && (r_20 != s_20)))
                                _fail(s_20);
                              else
                                r_20 = s_20;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(r_20));
                              t = set_config_0(t);
                            }
                          }
                          t = a_17;
                          {
                            ATerm u_20 = NULL;
                            u_20 = t;
                            if(((t_20 != NULL) && (t_20 != u_20)))
                              _fail(u_20);
                            else
                              t_20 = u_20;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_20));
                          }
                          return(t);
                        }
                        ATerm e_4 (ATerm t)
                        {
                          t = term_b_17;
                          return(t);
                        }
                        t = ArgOption_3(t, v_3, x_3, e_4);
                        LocalPopChoice(z_16);
                      }
                    else
                      {
                        t = u_16;
                        {
                          ATerm c_17 = t;
                          int d_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_4 (ATerm t)
                              {
                                ATerm v_20 = NULL;
                                v_20 = t;
                                b_20 :
                                if(!(match_string(v_20, "-v")))
                                  {
                                    if(!(match_string(v_20, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm g_4 (ATerm t)
                              {
                                t = term_e_17;
                                t = set_config_0(t);
                                t = term_j_17;
                                return(t);
                              }
                              ATerm h_4 (ATerm t)
                              {
                                t = term_k_17;
                                return(t);
                              }
                              t = Option_3(t, f_4, g_4, h_4);
                              LocalPopChoice(d_17);
                            }
                          else
                            {
                              t = c_17;
                              {
                                ATerm n_17 = t;
                                int o_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_4 (ATerm t)
                                    {
                                      ATerm w_20 = NULL;
                                      w_20 = t;
                                      c_20 :
                                      if(!(match_string(w_20, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      t = term_q_17;
                                      t = set_config_0(t);
                                      t = term_r_17;
                                      return(t);
                                    }
                                    ATerm k_4 (ATerm t)
                                    {
                                      t = term_x_17;
                                      return(t);
                                    }
                                    t = Option_3(t, i_4, j_4, k_4);
                                    LocalPopChoice(o_17);
                                  }
                                else
                                  {
                                    t = n_17;
                                    {
                                      ATerm l_4 (ATerm t)
                                      {
                                        ATerm z_20 = NULL;
                                        z_20 = t;
                                        d_20 :
                                        if(!(match_string(z_20, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm o_4 (ATerm t)
                                      {
                                        t = term_z_17;
                                        t = set_config_0(t);
                                        t = term_c_18;
                                        return(t);
                                      }
                                      ATerm s_4 (ATerm t)
                                      {
                                        t = term_d_18;
                                        return(t);
                                      }
                                      t = Option_3(t, l_4, o_4, s_4);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_table_destroy(not_null(l_21));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm u_21 = NULL,d_22 = NULL,e_22 = NULL;
  e_22 = t;
  t_21 :
  if(((ATgetType(e_22) == AT_LIST) && ((ATermList) e_22 != ATempty)))
    {
      u_21 = ATgetFirst((ATermList) e_22);
      d_22 = (ATerm) ATgetNext((ATermList) e_22);
      {
        ATerm j_22 = NULL;
        t = not_null(d_22);
        {
          ATerm e_18;
          e_18 = t;
          {
            ATerm k_22 = NULL,m_22 = NULL,o_22 = NULL;
            ATerm h_18;
            h_18 = t;
            {
              ATerm l_22 = NULL;
              t = b_0(t);
              {
                l_22 = t;
                if(((k_22 != NULL) && (k_22 != l_22)))
                  _fail(l_22);
                else
                  k_22 = l_22;
              }
            }
            t = h_18;
            {
              ATerm n_22 = NULL;
              t = not_null(u_21);
              {
                t = a_0(t);
                {
                  n_22 = t;
                  if(((m_22 != NULL) && (m_22 != n_22)))
                    _fail(n_22);
                  else
                    m_22 = n_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_22)), not_null(m_22));
                {
                  o_22 = t;
                  if(((j_22 != NULL) && (j_22 != o_22)))
                    _fail(o_22);
                  else
                    j_22 = o_22;
                }
              }
            }
          }
          t = e_18;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(j_22);
              return(t);
            }
            t = reverse_acc_2(t, a_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) e_22 == ATempty))
        {
          {
            t = term_a_10;
            t = b_0(t);
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  v_22 :
  if(match_cons(z_22, sym__2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      t = SSL_table_get(not_null(a_23), not_null(b_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_44 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_Program_1))
    {
      l_23 = ATgetArgument(k_23, 0);
      {
        ATerm o_23 = NULL,q_23 = NULL;
        ATerm p_23 = NULL;
        t = SSLgetAnnotations(not_null(k_23));
        {
          p_23 = t;
          if(((o_23 != NULL) && (o_23 != p_23)))
            _fail(p_23);
          else
            o_23 = p_23;
        }
        {
          t = not_null(l_23);
          {
            ATerm s_23 = NULL;
            t = u_44(t);
            {
              q_23 = t;
              {
                ATerm t_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_23)), not_null(o_23));
                {
                  t_23 = t;
                  if(((s_23 != NULL) && (s_23 != t_23)))
                    _fail(t_23);
                  else
                    s_23 = t_23;
                }
                t = not_null(s_23);
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
  ATerm c_24 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm d_24 = NULL;
      d_24 = t;
      if(((c_24 != NULL) && (c_24 != d_24)))
        _fail(d_24);
      else
        c_24 = d_24;
      return(t);
    }
    t = Program_1(t, a_5);
    return(t);
  }
  t = option_defined_1(t, z_4);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm e_24 = NULL;
      ATerm f_24 = NULL;
      t = term_a_10;
      {
        ATerm e_5 (ATerm t)
        {
          t = not_null(c_24);
          return(t);
        }
        t = short_description_1(t, e_5);
        {
          t = concat_strings_0(t);
          {
            f_24 = t;
            if(((e_24 != NULL) && (e_24 != f_24)))
              _fail(f_24);
            else
              e_24 = f_24;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATempty, not_null(e_24)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATempty, term_i_18));
      {
        t = printnl_0(t);
        {
          t = term_j_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm g_24 = NULL;
                  g_24 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_24)), term_k_18));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_5);
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm i_24 = NULL;
                    ATerm j_24 = NULL;
                    t = term_a_10;
                    {
                      ATerm j_5 (ATerm t)
                      {
                        t = not_null(c_24);
                        return(t);
                      }
                      t = long_description_1(t, j_5);
                      {
                        t = concat_strings_0(t);
                        {
                          j_24 = t;
                          if(((i_24 != NULL) && (i_24 != j_24)))
                            _fail(j_24);
                          else
                            i_24 = j_24;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_24)), term_s_18));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  q_24 = t;
  p_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      {
        ATerm t_18;
        t_18 = t;
        t = SSL_printnl(not_null(r_24), not_null(s_24));
        t = t_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_44 (ATerm))
{
  ATerm c_25 = NULL,f_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym_Undefined_1))
    {
      f_25 = ATgetArgument(c_25, 0);
      {
        ATerm i_25 = NULL,l_25 = NULL;
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(c_25));
        {
          k_25 = t;
          if(((i_25 != NULL) && (i_25 != k_25)))
            _fail(k_25);
          else
            i_25 = k_25;
        }
        {
          t = not_null(f_25);
          {
            ATerm q_25 = NULL;
            t = v_44(t);
            {
              l_25 = t;
              {
                ATerm r_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_25)), not_null(i_25));
                {
                  r_25 = t;
                  if(((q_25 != NULL) && (q_25 != r_25)))
                    _fail(r_25);
                  else
                    q_25 = r_25;
                }
                t = not_null(q_25);
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
ATerm option_defined_1 (ATerm t, ATerm o_55 (ATerm))
{
  t = fetch_1(t, o_55);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Help_0))
    {
      ATerm c_26 = NULL,e_26 = NULL;
      ATerm u_18;
      u_18 = t;
      {
        ATerm d_26 = NULL;
        t = SSLgetAnnotations(not_null(a_26));
        {
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
        }
      }
      t = u_18;
      {
        ATerm f_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(c_26));
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
        t = not_null(e_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_75(t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm k_26 = NULL;
    k_26 = t;
    j_26 :
    if(!(match_string(k_26, "--help")))
      {
        if(!(match_string(k_26, "-h")))
          {
            if(!(match_string(k_26, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_x_18;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  t = Option_3(t, o_5, p_5, q_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  m_26 :
  if(((ATgetType(n_26) == AT_LIST) && ((ATermList) n_26 != ATempty)))
    {
      o_26 = ATgetFirst((ATermList) n_26);
      p_26 = (ATerm) ATgetNext((ATermList) n_26);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_26)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_54 (ATerm))
{
  ATerm z_18;
  z_18 = t;
  {
    ATerm w_5 (ATerm t)
    {
      t = term_a_19;
      t = s_54(t);
      return(t);
    }
    t = try_1(t, w_5);
  }
  t = z_18;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm x_26 = NULL;
      ATerm d_19;
      d_19 = t;
      {
        ATerm v_26 = NULL;
        ATerm w_26 = NULL;
        w_26 = t;
        if(((v_26 != NULL) && (v_26 != w_26)))
          _fail(w_26);
        else
          v_26 = w_26;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_19, not_null(v_26));
          t = set_config_0(t);
        }
      }
      t = d_19;
      {
        ATerm y_26 = NULL;
        y_26 = t;
        if(((x_26 != NULL) && (x_26 != y_26)))
          _fail(y_26);
        else
          x_26 = y_26;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_26));
      }
      return(t);
    }
    ATerm c_6 (ATerm t)
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                t = s_54(t);
                t = Cons_2(t, _id, c_6);
              }
            }
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, c_6);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm d_27 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    t = term_k_19;
    t = table_put_0(t);
  }
  t = j_19;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_54(t);
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_6);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm h_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm e_27 = NULL;
                  e_27 = t;
                  if(((d_27 != NULL) && (d_27 != e_27)))
                    _fail(e_27);
                  else
                    d_27 = e_27;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, h_6);
              {
                ATerm q_19;
                q_19 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_27)), term_s_19));
                  t = printnl_0(t);
                }
                t = q_19;
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_6);
      {
        ATerm t_19;
        t_19 = t;
        {
          t = term_v_15;
          t = table_destroy_0(t);
        }
        t = t_19;
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm i_27 = NULL;
  ATerm k_27 = NULL;
  i_27 = t;
  {
    ATerm v_19;
    v_19 = t;
    {
      ATerm l_27 = NULL;
      t = term_w_19;
      {
        l_27 = t;
        if(((k_27 != NULL) && (k_27 != l_27)))
          _fail(l_27);
        else
          k_27 = l_27;
      }
    }
    t = v_19;
    {
      t = SSL_open_file(not_null(i_27), not_null(k_27));
      t = SSL_close_file(not_null(i_27));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm q_27 (ATerm t)
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_27);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        {
          t = Nil_0(t);
          t = g_67(t);
        }
      }
    return(t);
  }
  t = q_27(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = i_20;
      {
        ATerm u_27 = NULL,x_27 = NULL,y_27 = NULL;
        u_27 = t;
        s_27 :
        if(((ATgetType(u_27) == AT_LIST) && ((ATermList) u_27 != ATempty)))
          {
            x_27 = ATgetFirst((ATermList) u_27);
            y_27 = (ATerm) ATgetNext((ATermList) u_27);
            {
              t = not_null(x_27);
              {
                ATerm l_6 (ATerm t)
                {
                  t = not_null(y_27);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_6);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm d_28 (ATerm t)
  {
    ATerm y_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_67, _id);
        LocalPopChoice(a_21);
      }
    else
      {
        t = y_20;
        t = Cons_2(t, _id, d_28);
      }
    return(t);
  }
  t = d_28(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm f_28 = NULL;
  ATerm m_6 (ATerm t)
  {
    ATerm g_28 = NULL;
    t = c_67(t);
    {
      g_28 = t;
      if(((f_28 != NULL) && (f_28 != g_28)))
        _fail(g_28);
      else
        f_28 = g_28;
    }
    return(t);
  }
  t = fetch_1(t, m_6);
  t = not_null(f_28);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm h_50 (ATerm), ATerm i_50 (ATerm))
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_50(t);
      {
        ATerm n_6 (ATerm t)
        {
          ATerm k_28 = NULL,m_28 = NULL;
          ATerm d_21;
          d_21 = t;
          {
            ATerm l_28 = NULL;
            l_28 = t;
            if(((k_28 != NULL) && (k_28 != l_28)))
              _fail(l_28);
            else
              k_28 = l_28;
          }
          t = d_21;
          {
            ATerm n_28 = NULL;
            t = i_50(t);
            {
              n_28 = t;
              if(((m_28 != NULL) && (m_28 != n_28)))
                _fail(n_28);
              else
                m_28 = n_28;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_28)), term_b_12), not_null(k_28));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, n_6);
      }
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        t = term_e_21;
        {
          t = debug_1(t, i_50);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  ATerm f_21;
  f_21 = t;
  {
    ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
    v_28 = t;
    r_28 :
    if(match_cons(v_28, sym__3))
      {
        w_28 = ATgetArgument(v_28, 0);
        x_28 = ATgetArgument(v_28, 1);
        y_28 = ATgetArgument(v_28, 2);
        {
          if(((s_28 != NULL) && (s_28 != w_28)))
            _fail(w_28);
          else
            s_28 = w_28;
          {
            if(((t_28 != NULL) && (t_28 != x_28)))
              _fail(x_28);
            else
              t_28 = x_28;
            {
              if(((u_28 != NULL) && (u_28 != y_28)))
                _fail(y_28);
              else
                u_28 = y_28;
              t = SSL_table_put(not_null(s_28), not_null(t_28), not_null(u_28));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_21;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  d_29 :
  if(((ATermList) e_29 == ATempty))
    {
      {
        ATerm g_29 = NULL,l_29 = NULL;
        ATerm g_21;
        g_21 = t;
        {
          ATerm k_29 = NULL;
          t = SSLgetAnnotations(not_null(e_29));
          {
            k_29 = t;
            if(((g_29 != NULL) && (g_29 != k_29)))
              _fail(k_29);
            else
              g_29 = k_29;
          }
        }
        t = g_21;
        {
          ATerm m_29 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_29));
          {
            m_29 = t;
            if(((l_29 != NULL) && (l_29 != m_29)))
              _fail(m_29);
            else
              l_29 = m_29;
          }
          t = not_null(l_29);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_66 (ATerm))
{
  ATerm q_29 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = Cons_2(t, r_66, q_29);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym__2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      {
        t = not_null(x_29);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
            a_30 = t;
            t_29 :
            if(match_cons(a_30, sym__2))
              {
                b_30 = ATgetArgument(a_30, 0);
                c_30 = ATgetArgument(a_30, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_29), not_null(b_30), not_null(c_30));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm j_21;
  j_21 = t;
  {
    ATerm i_30 = NULL;
    t = r_50(t);
    {
      ATerm t_6 (ATerm t)
      {
        ATerm u_6 (ATerm t)
        {
          t = term_k_21;
          return(t);
        }
        t = debug_1(t, u_6);
        return(t);
      }
      t = if_verbose2_1(t, t_6);
      {
        t = ReadFromFile_0(t);
        {
          ATerm j_30 = NULL;
          j_30 = t;
          if(((i_30 != NULL) && (i_30 != j_30)))
            _fail(j_30);
          else
            i_30 = j_30;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(i_30));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = j_21;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_implode_string(not_null(m_30));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_explode_string(not_null(q_30));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_30 (ATerm t)
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, x_30);
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm x_6 (ATerm t)
                {
                  ATerm w_30 = NULL;
                  w_30 = t;
                  v_30 :
                  if(!(match_int(w_30, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm y_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, x_6, y_6);
              }
            }
          return(t);
        }
        t = x_30(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_49 (ATerm), ATerm o_49 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  d_31 :
  if(((ATgetType(e_31) == AT_LIST) && ((ATermList) e_31 != ATempty)))
    {
      f_31 = ATgetFirst((ATermList) e_31);
      g_31 = (ATerm) ATgetNext((ATermList) e_31);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm o_31 = NULL;
            t = n_49(t);
            {
              m_31 = t;
              {
                t = not_null(g_31);
                {
                  ATerm q_31 = NULL;
                  t = o_49(t);
                  {
                    o_31 = t;
                    {
                      ATerm r_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_31)), not_null(m_31)), not_null(k_31));
                      {
                        r_31 = t;
                        if(((q_31 != NULL) && (q_31 != r_31)))
                          _fail(r_31);
                        else
                          q_31 = r_31;
                      }
                      t = not_null(q_31);
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
ATerm parse_stratego_0 (ATerm t)
{
  ATerm g_32 = NULL,i_32 = NULL,o_32 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm h_32 = NULL;
      t = get_path_0(t);
      {
        h_32 = t;
        if(((g_32 != NULL) && (g_32 != h_32)))
          _fail(h_32);
        else
          g_32 = h_32;
      }
      return(t);
    }
    t = Cons_2(t, z_6, _id);
  }
  t = q_21;
  {
    ATerm r_21;
    r_21 = t;
    {
      ATerm j_32 = NULL;
      t = get_conf_pkgdatadir();
      {
        j_32 = t;
        if(((i_32 != NULL) && (i_32 != j_32)))
          _fail(j_32);
        else
          i_32 = j_32;
      }
    }
    t = r_21;
    {
      ATerm a_7 (ATerm t)
      {
        ATerm b_7 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), not_null(g_32));
          return(t);
        }
        ATerm c_7 (ATerm t)
        {
          t = term_s_21;
          return(t);
        }
        t = find_config_file_2(t, b_7, c_7);
        return(t);
      }
      t = import_config_file_1(t, a_7);
      {
        ATerm q_32 = NULL;
        ATerm d_7 (ATerm t)
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0(t);
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              {
                ATerm x_21 = t;
                int y_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_7 (ATerm t)
                    {
                      ATerm k_32 = NULL;
                      k_32 = t;
                      z_31 :
                      if(!(match_string(k_32, "-I")))
                        {
                          if(!(match_string(k_32, "--Include")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm f_7 (ATerm t)
                    {
                      ATerm z_21;
                      z_21 = t;
                      {
                        ATerm l_32 = NULL;
                        ATerm m_32 = NULL;
                        m_32 = t;
                        if(((l_32 != NULL) && (l_32 != m_32)))
                          _fail(m_32);
                        else
                          l_32 = m_32;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATempty, not_null(l_32)));
                          t = extend_config_0(t);
                        }
                      }
                      t = z_21;
                      return(t);
                    }
                    ATerm g_7 (ATerm t)
                    {
                      t = term_a_22;
                      return(t);
                    }
                    t = ArgOption_3(t, e_7, f_7, g_7);
                    LocalPopChoice(y_21);
                  }
                else
                  {
                    t = x_21;
                    {
                      ATerm j_7 (ATerm t)
                      {
                        ATerm n_32 = NULL;
                        n_32 = t;
                        b_32 :
                        if(!(match_string(n_32, "-silent")))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm l_7 (ATerm t)
                      {
                        ATerm b_22;
                        b_22 = t;
                        {
                          t = term_r_16;
                          t = set_config_0(t);
                        }
                        t = b_22;
                        return(t);
                      }
                      ATerm t_7 (ATerm t)
                      {
                        t = term_c_22;
                        return(t);
                      }
                      t = Option_3(t, j_7, l_7, t_7);
                    }
                  }
              }
            }
          return(t);
        }
        t = parse_options_1(t, d_7);
        {
          o_32 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATinsert(ATempty, term_f_22));
            {
              t = extend_config_0(t);
              {
                t = term_j_9;
                {
                  ATerm s_32 = NULL;
                  t = get_config_0(t);
                  {
                    q_32 = t;
                    {
                      ATerm c_8 (ATerm t)
                      {
                        ATerm d_8 (ATerm t)
                        {
                          t = term_g_22;
                          return(t);
                        }
                        t = debug_1(t, d_8);
                        return(t);
                      }
                      t = if_verbose2_1(t, c_8);
                      {
                        ATerm h_22 = t;
                        int i_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_k_9;
                            t = get_config_0(t);
                            LocalPopChoice(i_22);
                          }
                        else
                          {
                            t = h_22;
                            t = new_file_0(t);
                          }
                        {
                          s_32 = t;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_32), not_null(s_32));
                            {
                              t = parse_module_0(t);
                              {
                                ATerm p_22 = t;
                                int q_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_k_9;
                                    t = get_config_0(t);
                                    LocalPopChoice(q_22);
                                  }
                                else
                                  {
                                    t = p_22;
                                    {
                                      ATerm u_32 = NULL;
                                      t = not_null(s_32);
                                      {
                                        t = ReadFromFile_0(t);
                                        {
                                          ATerm r_22;
                                          r_22 = t;
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(s_32));
                                            t = rm_files_0(t);
                                          }
                                          t = r_22;
                                          {
                                            ATerm v_32 = NULL;
                                            v_32 = t;
                                            if(((u_32 != NULL) && (u_32 != v_32)))
                                              _fail(v_32);
                                            else
                                              u_32 = v_32;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_s_22, not_null(u_32));
                                              t = WriteToTextFile_0(t);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                {
                                  t = term_f_9;
                                  t = exit_0(t);
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
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = parse_stratego_0(t);
  return(t);
}
