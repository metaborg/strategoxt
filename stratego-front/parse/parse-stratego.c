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
ATerm term_h_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_r_22;
ATerm term_h_22;
ATerm term_a_22;
ATerm term_t_21;
ATerm term_h_21;
ATerm term_l_20;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_j_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_j_8;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("asource", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Syntax_1, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_9);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_g_10);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_g_10);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_g_10);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_c_16);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__3, term_b_16, term_c_16, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego.config", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p include modules from directory p", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("parsing ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stdout_0);
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
ATerm call_out_4 (ATerm, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm p_54 (ATerm));
ATerm call_tmp_3 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm));
ATerm leq_0 (ATerm);
ATerm if_less_verbose1_1 (ATerm, ATerm k_50 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm f_50 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm p_59 (ATerm));
ATerm basename_1 (ATerm, ATerm n_59 (ATerm));
ATerm basename_0 (ATerm);
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_50 (ATerm));
ATerm split_2 (ATerm, ATerm g_60 (ATerm), ATerm h_60 (ATerm));
ATerm temp_file_1 (ATerm, ATerm k_58 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_57 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_meta_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm i_50 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm _2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_57 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_50 (ATerm));
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm Option_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_55 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_55 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_54 (ATerm));
ATerm Program_1 (ATerm, ATerm e_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_45 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_76 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_55 (ATerm));
ATerm parse_options_1 (ATerm, ATerm b_55 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_67 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_67 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm t_67 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm r_50 (ATerm), ATerm s_50 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm i_67 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm b_51 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_49 (ATerm), ATerm y_49 (ATerm));
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
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(CheckATermList(not_null(z_1)), term_j_8));
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
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
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
                          ATerm s_8 = t;
                          int t_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_8);
                            }
                          else
                            {
                              t = s_8;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_u_8;
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
                            ATerm a_9;
                            a_9 = t;
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
                            t = a_9;
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
    t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(i_3));
    {
      t = table_get_0(t);
      {
        ATerm g_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm f_9;
            f_9 = t;
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              l_3 = t;
              if(((k_3 != NULL) && (k_3 != l_3)))
                _fail(l_3);
              else
                k_3 = l_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_9, not_null(i_3), not_null(k_3));
                t = table_put_0(t);
              }
            }
            t = f_9;
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
  ATerm g_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_9;
      t = get_config_0(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = g_9;
      t = term_k_9;
    }
  return(t);
}
ATerm call_out_4 (ATerm t, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm p_54 (ATerm))
{
  ATerm w_3 = NULL;
  ATerm y_3 = NULL,a_4 = NULL,c_4 = NULL;
  w_3 = t;
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm z_3 = NULL;
      t = m_54(t);
      {
        z_3 = t;
        if(((y_3 != NULL) && (y_3 != z_3)))
          _fail(z_3);
        else
          y_3 = z_3;
      }
    }
    t = l_9;
    {
      ATerm m_9;
      m_9 = t;
      {
        ATerm b_4 = NULL;
        t = o_54(t);
        {
          b_4 = t;
          if(((a_4 != NULL) && (a_4 != b_4)))
            _fail(b_4);
          else
            a_4 = b_4;
        }
      }
      t = m_9;
      {
        ATerm d_4 = NULL;
        t = n_54(t);
        {
          d_4 = t;
          if(((c_4 != NULL) && (c_4 != d_4)))
            _fail(d_4);
          else
            c_4 = d_4;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_4)), not_null(a_4)), term_p_9), not_null(w_3)), term_n_9));
          {
            t = call_0(t);
            {
              t = o_54(t);
              t = p_54(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm call_tmp_3 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm))
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
            ATerm r_9;
            r_9 = t;
            {
              ATerm u_4 = NULL;
              t = j_54(t);
              {
                u_4 = t;
                if(((t_4 != NULL) && (t_4 != u_4)))
                  _fail(u_4);
                else
                  t_4 = u_4;
              }
            }
            t = r_9;
            {
              ATerm w_4 = NULL;
              t = k_54(t);
              {
                w_4 = t;
                if(((v_4 != NULL) && (v_4 != w_4)))
                  _fail(w_4);
                else
                  v_4 = w_4;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_4)), not_null(q_4)), term_p_9), not_null(n_4)), term_n_9));
                {
                  t = if_verbose5_1(t, debug_0);
                  {
                    t = call_0(t);
                    {
                      t = not_null(q_4);
                      t = l_54(t);
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
  ATerm y_9 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_9;
    }
  return(t);
}
ATerm if_less_verbose1_1 (ATerm t, ATerm k_50 (ATerm))
{
  ATerm m_0 (ATerm t)
  {
    ATerm z_9;
    z_9 = t;
    {
      ATerm c_5 = NULL;
      ATerm d_5 = NULL;
      t = term_j_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_a_10);
        t = leq_0(t);
      }
    }
    t = z_9;
    t = k_50(t);
    return(t);
  }
  t = try_1(t, m_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm f_50 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    ATerm b_10;
    b_10 = t;
    {
      ATerm g_5 = NULL;
      ATerm h_5 = NULL;
      t = term_j_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), term_c_10);
        t = geq_0(t);
      }
    }
    t = b_10;
    t = f_50(t);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_5)), term_d_10), not_null(m_5));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm p_59 (ATerm))
{
  t = basename_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = term_g_10;
      t = p_59(t);
      return(t);
    }
    t = split_2(t, _id, o_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm n_59 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm p_0 (ATerm t)
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, p_0);
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
          {
            ATerm j_10 = t;
            int k_10 = stack_ptr;
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
                LocalPopChoice(k_10);
              }
            else
              {
                t = j_10;
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
                  t = Cons_2(t, r_0, n_59);
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
  ATerm l_10;
  l_10 = t;
  {
    ATerm f_6 = NULL;
    ATerm g_6 = NULL;
    g_6 = t;
    if(((f_6 != NULL) && (f_6 != g_6)))
      _fail(g_6);
    else
      f_6 = g_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATempty, not_null(f_6)));
      t = printnl_0(t);
    }
  }
  t = l_10;
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm v_10;
    v_10 = t;
    {
      ATerm j_6 = NULL;
      ATerm k_6 = NULL;
      t = term_j_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), term_z_10);
        t = geq_0(t);
      }
    }
    t = v_10;
    t = h_50(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_60 (ATerm), ATerm h_60 (ATerm))
{
  ATerm o_6 = NULL,q_6 = NULL;
  ATerm a_11;
  a_11 = t;
  {
    ATerm p_6 = NULL;
    t = g_60(t);
    {
      p_6 = t;
      if(((o_6 != NULL) && (o_6 != p_6)))
        _fail(p_6);
      else
        o_6 = p_6;
    }
  }
  t = a_11;
  {
    ATerm r_6 = NULL;
    t = h_60(t);
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
ATerm temp_file_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm v_6 = NULL;
  ATerm b_11;
  b_11 = t;
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
  t = b_11;
  {
    ATerm t_0 (ATerm t)
    {
      t = not_null(v_6);
      return(t);
    }
    t = split_2(t, t_0, _id);
    {
      ATerm c_11 = t;
      int d_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_58(t);
          {
            ATerm e_11;
            e_11 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(v_6));
              t = rm_files_0(t);
            }
            t = e_11;
          }
          LocalPopChoice(d_11);
        }
      else
        {
          t = c_11;
          {
            ATerm f_11;
            f_11 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(v_6));
              t = rm_files_0(t);
            }
            t = f_11;
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
      t = term_g_11;
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
        t = term_j_11;
        return(t);
      }
      t = guarantee_extension_1(t, w_0);
      {
        k_7 = t;
        {
          ATerm l_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_7 = NULL;
              ATerm o_7 = NULL;
              t = term_r_11;
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
                        t = term_u_11;
                        return(t);
                      }
                      t = debug_1(t, y_0);
                      return(t);
                    }
                    t = if_verbose2_1(t, x_0);
                  }
                }
              }
              LocalPopChoice(o_11);
            }
          else
            {
              t = l_11;
              {
                ATerm p_7 = NULL;
                ATerm z_0 (ATerm t)
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = term_v_11;
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
                      t = term_w_11;
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
                                  ATerm x_11;
                                  x_11 = t;
                                  {
                                    ATerm v_7 = NULL;
                                    t = term_y_11;
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
                                  t = x_11;
                                  {
                                    ATerm z_7 = NULL;
                                    t = term_r_11;
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
                                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_7)), term_r_11);
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
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_7)), not_null(r_7)), term_p_9), not_null(m_7)), term_n_9));
                                      {
                                        t = if_verbose5_1(t, debug_0);
                                        {
                                          t = call_0(t);
                                          {
                                            ATerm b_8 = NULL;
                                            t = term_b_12;
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
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_7)), term_p_9), not_null(r_7)), term_n_9));
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
ATerm say_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm c_12;
  c_12 = t;
  {
    t = w_57(t);
    t = debug_0(t);
  }
  t = c_12;
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
            ATerm d_12 = t;
            int e_12 = stack_ptr;
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_8)), term_f_12), not_null(d_9));
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
                LocalPopChoice(e_12);
              }
            else
              {
                t = d_12;
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
      t = term_g_12;
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
        t = term_h_12;
        return(t);
      }
      t = guarantee_extension_1(t, i_1);
      {
        q_9 = t;
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL;
              ATerm u_9 = NULL;
              t = term_r_11;
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
                        t = term_p_12;
                        return(t);
                      }
                      t = debug_1(t, k_1);
                      return(t);
                    }
                    t = if_verbose2_1(t, j_1);
                  }
                }
              }
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              {
                ATerm v_9 = NULL;
                ATerm l_1 (ATerm t)
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = term_q_12;
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
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_9)), term_u_12), not_null(q_9)), term_p_9), not_null(s_9)), term_n_9));
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
  ATerm w_12;
  w_12 = t;
  {
    ATerm e_10 = NULL;
    ATerm f_10 = NULL;
    f_10 = t;
    if(((e_10 != NULL) && (e_10 != f_10)))
      _fail(f_10);
    else
      e_10 = f_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_10, not_null(e_10));
      t = printnl_0(t);
    }
  }
  t = w_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm e_13;
  e_13 = t;
  {
    t = error_0(t);
    {
      t = term_a_10;
      t = exit_0(t);
    }
  }
  t = e_13;
  return(t);
}
ATerm get_meta_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_f_13;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose6_1(t, n_1);
  {
    t = basename_0(t);
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_10 = NULL;
          ATerm p_1 (ATerm t)
          {
            t = term_i_13;
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
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_10 = NULL;
                ATerm s_10 = NULL;
                ATerm q_1 (ATerm t)
                {
                  t = term_l_13;
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
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, term_n_13));
              }
          }
        }
      {
        ATerm r_1 (ATerm t)
        {
          ATerm v_1 (ATerm t)
          {
            t = term_f_13;
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
      t = term_o_13;
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
        ATerm p_13 = t;
        int q_13 = stack_ptr;
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
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm s_11 = NULL;
              ATerm t_11 = NULL;
              t_11 = t;
              if(((s_11 != NULL) && (s_11 != t_11)))
                _fail(t_11);
              else
                s_11 = t_11;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), not_null(k_11)), term_w_13), not_null(s_11)), term_v_13);
                t = fatal_error_0(t);
              }
            }
          }
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              t = term_b_14;
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
ATerm if_verbose6_1 (ATerm t, ATerm i_50 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm z_11 = NULL;
      ATerm a_12 = NULL;
      t = term_j_9;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), term_g_14);
        t = geq_0(t);
      }
    }
    t = d_14;
    t = i_50(t);
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_h_14;
      return(t);
    }
    t = debug_1(t, f_2);
    return(t);
  }
  t = if_verbose6_1(t, e_2);
  {
    m_12 = t;
    l_12 :
    if(match_cons(m_12, sym__2))
      {
        n_12 = ATgetArgument(m_12, 0);
        o_12 = ATgetArgument(m_12, 1);
        {
          ATerm r_12 = NULL;
          t = not_null(n_12);
          {
            ATerm t_12 = NULL;
            t = get_syntax_0(t);
            {
              r_12 = t;
              {
                ATerm v_12 = NULL;
                t = get_parse_table_0(t);
                {
                  t_12 = t;
                  {
                    t = not_null(n_12);
                    {
                      t = basename_0(t);
                      {
                        ATerm g_2 (ATerm t)
                        {
                          t = term_i_14;
                          return(t);
                        }
                        t = guarantee_extension_1(t, g_2);
                        {
                          v_12 = t;
                          {
                            t = not_null(n_12);
                            {
                              ATerm i_2 (ATerm t)
                              {
                                t = term_j_14;
                                t = get_config_0(t);
                                return(t);
                              }
                              ATerm j_2 (ATerm t)
                              {
                                ATerm x_12 = NULL;
                                ATerm y_12 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm l_2 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, term_k_14);
                                    return(t);
                                  }
                                  t = if_verbose3_1(t, l_2);
                                  {
                                    y_12 = t;
                                    if(((x_12 != NULL) && (x_12 != y_12)))
                                      _fail(y_12);
                                    else
                                      x_12 = y_12;
                                  }
                                }
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_12)), not_null(t_12)), term_o_14), term_l_14);
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_p_14;
                                  t = get_config_0(t);
                                  return(t);
                                }
                                ATerm n_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_q_14);
                                      return(t);
                                    }
                                    t = if_less_verbose1_1(t, u_2);
                                  }
                                  return(t);
                                }
                                ATerm o_2 (ATerm t)
                                {
                                  t = not_null(v_12);
                                  return(t);
                                }
                                ATerm t_2 (ATerm t)
                                {
                                  ATerm v_2 (ATerm t)
                                  {
                                    t = term_r_14;
                                    t = get_config_0(t);
                                    return(t);
                                  }
                                  ATerm w_2 (ATerm t)
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_12)), term_j_9);
                                    return(t);
                                  }
                                  ATerm b_3 (ATerm t)
                                  {
                                    ATerm c_3 (ATerm t)
                                    {
                                      t = term_w_14;
                                      t = get_config_0(t);
                                      return(t);
                                    }
                                    ATerm d_3 (ATerm t)
                                    {
                                      ATerm b_13 = NULL;
                                      ATerm c_13 = NULL;
                                      t = verbosity_0(t);
                                      {
                                        t = int_to_string_0(t);
                                        {
                                          c_13 = t;
                                          if(((b_13 != NULL) && (b_13 != c_13)))
                                            _fail(c_13);
                                          else
                                            b_13 = c_13;
                                        }
                                      }
                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_13)), term_j_9);
                                      return(t);
                                    }
                                    ATerm e_3 (ATerm t)
                                    {
                                      t = not_null(o_12);
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
                              {
                                ATerm f_3 (ATerm t)
                                {
                                  ATerm d_13 = NULL;
                                  t = term_x_14;
                                  {
                                    t = get_config_0(t);
                                    {
                                      d_13 = t;
                                      k_12 :
                                      if(match_int(d_13, 0))
                                        {
                                          t = (ATerm) ATinsert(ATempty, not_null(v_12));
                                          t = rm_files_0(t);
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  }
                                  return(t);
                                }
                                t = try_1(t, f_3);
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
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym__2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        ATerm z_13 = NULL;
        t = SSLgetAnnotations(not_null(s_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        {
          t = not_null(t_13);
          {
            ATerm c_14 = NULL;
            t = m_43(t);
            {
              a_14 = t;
              {
                t = not_null(u_13);
                {
                  ATerm e_14 = NULL;
                  t = n_43(t);
                  {
                    c_14 = t;
                    {
                      ATerm f_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_14), not_null(c_14)), not_null(y_13));
                      {
                        f_14 = t;
                        if(((e_14 != NULL) && (e_14 != f_14)))
                          _fail(f_14);
                        else
                          e_14 = f_14;
                      }
                      t = not_null(e_14);
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
  ATerm m_14 = NULL;
  ATerm n_14 = NULL;
  t = term_g_10;
  {
    t = new_0(t);
    {
      n_14 = t;
      if(((m_14 != NULL) && (m_14 != n_14)))
        _fail(n_14);
      else
        m_14 = n_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_y_14);
    {
      t = conc_strings_0(t);
      {
        ATerm g_3 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, g_3);
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_57 (ATerm))
{
  ATerm d_15;
  d_15 = t;
  {
    ATerm s_14 = NULL,u_14 = NULL;
    ATerm e_15;
    e_15 = t;
    {
      ATerm t_14 = NULL;
      t = v_57(t);
      {
        t_14 = t;
        if(((s_14 != NULL) && (s_14 != t_14)))
          _fail(t_14);
        else
          s_14 = t_14;
      }
    }
    t = e_15;
    {
      ATerm v_14 = NULL;
      v_14 = t;
      if(((u_14 != NULL) && (u_14 != v_14)))
        _fail(v_14);
      else
        u_14 = v_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(s_14)));
        t = printnl_0(t);
      }
    }
  }
  t = d_15;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym__2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        ATerm f_15;
        f_15 = t;
        {
          ATerm g_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_15), not_null(c_15));
              LocalPopChoice(m_15);
            }
          else
            {
              t = g_15;
              t = SSL_gtr(not_null(b_15), not_null(c_15));
            }
        }
        t = f_15;
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
  ATerm i_15 = NULL;
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
      j_15 = t;
      h_15 :
      if(match_cons(j_15, sym__2))
        {
          k_15 = ATgetArgument(j_15, 0);
          l_15 = ATgetArgument(j_15, 1);
          {
            if(((i_15 != NULL) && (i_15 != k_15)))
              _fail(k_15);
            else
              i_15 = k_15;
            if(((i_15 != NULL) && (i_15 != l_15)))
              _fail(l_15);
            else
              i_15 = l_15;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_50 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm q_15;
    q_15 = t;
    {
      ATerm o_15 = NULL;
      ATerm r_15 = NULL;
      t = term_j_9;
      {
        t = get_config_0(t);
        {
          r_15 = t;
          if(((o_15 != NULL) && (o_15 != r_15)))
            _fail(r_15);
          else
            o_15 = r_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), term_s_15);
        t = geq_0(t);
      }
    }
    t = q_15;
    t = e_50(t);
    return(t);
  }
  t = try_1(t, h_3);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm x_15 = NULL,d_16 = NULL,e_16 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym__2))
    {
      d_16 = ATgetArgument(x_15, 0);
      e_16 = ATgetArgument(x_15, 1);
      {
        t = not_null(d_16);
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(e_16);
            return(t);
          }
          t = at_end_1(t, j_3);
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
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  l_16 :
  if(match_cons(m_16, sym__2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      {
        ATerm r_16 = NULL;
        ATerm s_16 = NULL,u_16 = NULL;
        ATerm t_16 = NULL;
        t = not_null(n_16);
        {
          ATerm t_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = t_15;
              t = (ATerm) ATempty;
            }
          {
            t_16 = t;
            if(((s_16 != NULL) && (s_16 != t_16)))
              _fail(t_16);
            else
              s_16 = t_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_16), not_null(s_16));
          {
            t = conc_0(t);
            {
              u_16 = t;
              if(((r_16 != NULL) && (r_16 != u_16)))
                _fail(u_16);
              else
                r_16 = u_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_b_9, not_null(n_16), not_null(r_16));
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
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_9, not_null(b_17), not_null(c_17));
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_string(k_17, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_17) == AT_LIST) && ((ATermList) k_17 != ATempty)))
        {
          l_17 = ATgetFirst((ATermList) k_17);
          m_17 = (ATerm) ATgetNext((ATermList) k_17);
          {
            ATerm p_17 = NULL;
            ATerm v_15;
            v_15 = t;
            {
              t = not_null(l_17);
              t = j_0(t);
            }
            t = v_15;
            {
              ATerm q_17 = NULL;
              t = term_g_10;
              {
                t = k_0(t);
                {
                  q_17 = t;
                  if(((p_17 != NULL) && (p_17 != q_17)))
                    _fail(q_17);
                  else
                    p_17 = q_17;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_17)), not_null(p_17));
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
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym__3))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      a_18 = ATgetArgument(x_17, 2);
      {
        ATerm y_15;
        y_15 = t;
        {
          ATerm e_18 = NULL;
          ATerm f_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(z_17));
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
                t = (ATerm) ATempty;
              }
            {
              f_18 = t;
              if(((e_18 != NULL) && (e_18 != f_18)))
                _fail(f_18);
              else
                e_18 = f_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_17), not_null(z_17), (ATerm) ATinsert(CheckATermList(not_null(e_18)), not_null(a_18)));
            t = table_put_0(t);
          }
        }
        t = y_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm k_18 = NULL;
  t = term_g_10;
  {
    t = e_55(t);
    {
      k_18 = t;
      if(((j_18 != NULL) && (j_18 != k_18)))
        _fail(k_18);
      else
        j_18 = k_18;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_16, term_c_16, not_null(j_18));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  r_18 = t;
  p_18 :
  if(match_string(r_18, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(r_18) == AT_LIST) && ((ATermList) r_18 != ATempty)))
        {
          s_18 = ATgetFirst((ATermList) r_18);
          t_18 = (ATerm) ATgetNext((ATermList) r_18);
          q_18 :
          if(((ATgetType(t_18) == AT_LIST) && ((ATermList) t_18 != ATempty)))
            {
              u_18 = ATgetFirst((ATermList) t_18);
              v_18 = (ATerm) ATgetNext((ATermList) t_18);
              {
                ATerm f_19 = NULL;
                ATerm f_16;
                f_16 = t;
                {
                  t = not_null(s_18);
                  t = e_0(t);
                }
                t = f_16;
                {
                  ATerm g_19 = NULL;
                  t = not_null(u_18);
                  {
                    t = f_0(t);
                    {
                      g_19 = t;
                      if(((f_19 != NULL) && (f_19 != g_19)))
                        _fail(g_19);
                      else
                        f_19 = g_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_18)), not_null(f_19));
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
  ATerm p_19 = NULL;
  p_19 = t;
  t = SSL_string_to_int(not_null(p_19));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        ATerm k_20 = NULL;
        k_20 = t;
        v_19 :
        if(!(match_string(k_20, "-i")))
          {
            if(!(match_string(k_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        ATerm o_20 = NULL;
        ATerm i_16;
        i_16 = t;
        {
          ATerm m_20 = NULL;
          ATerm n_20 = NULL;
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(m_20));
            t = set_config_0(t);
          }
        }
        t = i_16;
        {
          ATerm p_20 = NULL;
          p_20 = t;
          if(((o_20 != NULL) && (o_20 != p_20)))
            _fail(p_20);
          else
            o_20 = p_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_20));
        }
        return(t);
      }
      ATerm o_3 (ATerm t)
      {
        t = term_j_16;
        return(t);
      }
      t = ArgOption_3(t, m_3, n_3, o_3);
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm k_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              ATerm q_20 = NULL;
              q_20 = t;
              y_19 :
              if(!(match_string(q_20, "-o")))
                {
                  if(!(match_string(q_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              ATerm t_20 = NULL;
              ATerm q_16;
              q_16 = t;
              {
                ATerm r_20 = NULL;
                ATerm s_20 = NULL;
                s_20 = t;
                if(((r_20 != NULL) && (r_20 != s_20)))
                  _fail(s_20);
                else
                  r_20 = s_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(r_20));
                  t = set_config_0(t);
                }
              }
              t = q_16;
              {
                ATerm u_20 = NULL;
                u_20 = t;
                if(((t_20 != NULL) && (t_20 != u_20)))
                  _fail(u_20);
                else
                  t_20 = u_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_20));
              }
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              t = term_v_16;
              return(t);
            }
            t = ArgOption_3(t, q_3, r_3, s_3);
            LocalPopChoice(p_16);
          }
        else
          {
            t = k_16;
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm v_20 = NULL;
                    v_20 = t;
                    b_20 :
                    if(!(match_string(v_20, "-S")))
                      {
                        if(!(match_string(v_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = term_y_16;
                    t = set_config_0(t);
                    t = term_d_17;
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = term_e_17;
                    return(t);
                  }
                  t = Option_3(t, t_3, u_3, v_3);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  {
                    ATerm f_17 = t;
                    int g_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          ATerm w_20 = NULL;
                          w_20 = t;
                          c_20 :
                          if(!(match_string(w_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_4 (ATerm t)
                        {
                          ATerm z_20 = NULL;
                          ATerm h_17;
                          h_17 = t;
                          {
                            ATerm x_20 = NULL;
                            ATerm y_20 = NULL;
                            t = string_to_int_0(t);
                            {
                              y_20 = t;
                              if(((x_20 != NULL) && (x_20 != y_20)))
                                _fail(y_20);
                              else
                                x_20 = y_20;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(x_20));
                              t = set_config_0(t);
                            }
                          }
                          t = h_17;
                          {
                            ATerm c_21 = NULL;
                            c_21 = t;
                            if(((z_20 != NULL) && (z_20 != c_21)))
                              _fail(c_21);
                            else
                              z_20 = c_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_20));
                          }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          t = term_i_17;
                          return(t);
                        }
                        t = ArgOption_3(t, x_3, e_4, f_4);
                        LocalPopChoice(g_17);
                      }
                    else
                      {
                        t = f_17;
                        {
                          ATerm n_17 = t;
                          int o_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 (ATerm t)
                              {
                                ATerm d_21 = NULL;
                                d_21 = t;
                                f_20 :
                                if(!(match_string(d_21, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_4 (ATerm t)
                              {
                                ATerm r_17;
                                r_17 = t;
                                {
                                  ATerm e_21 = NULL;
                                  ATerm f_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    f_21 = t;
                                    if(((e_21 != NULL) && (e_21 != f_21)))
                                      _fail(f_21);
                                    else
                                      e_21 = f_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_x_14, not_null(e_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = r_17;
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                t = term_s_17;
                                return(t);
                              }
                              t = ArgOption_3(t, g_4, h_4, i_4);
                              LocalPopChoice(o_17);
                            }
                          else
                            {
                              t = n_17;
                              {
                                ATerm t_17 = t;
                                int u_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm g_21 = NULL;
                                      g_21 = t;
                                      h_20 :
                                      if(!(match_string(g_21, "-v")))
                                        {
                                          if(!(match_string(g_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm k_4 (ATerm t)
                                    {
                                      t = term_v_17;
                                      t = set_config_0(t);
                                      t = term_b_18;
                                      return(t);
                                    }
                                    ATerm l_4 (ATerm t)
                                    {
                                      t = term_c_18;
                                      return(t);
                                    }
                                    t = Option_3(t, j_4, k_4, l_4);
                                    LocalPopChoice(u_17);
                                  }
                                else
                                  {
                                    t = t_17;
                                    {
                                      ATerm d_18 = t;
                                      int g_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_4 (ATerm t)
                                          {
                                            ATerm i_21 = NULL;
                                            i_21 = t;
                                            i_20 :
                                            if(!(match_string(i_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_i_18;
                                            t = set_config_0(t);
                                            t = term_l_18;
                                            return(t);
                                          }
                                          ATerm x_4 (ATerm t)
                                          {
                                            t = term_m_18;
                                            return(t);
                                          }
                                          t = Option_3(t, o_4, s_4, x_4);
                                          LocalPopChoice(g_18);
                                        }
                                      else
                                        {
                                          t = d_18;
                                          {
                                            ATerm y_4 (ATerm t)
                                            {
                                              ATerm j_21 = NULL;
                                              j_21 = t;
                                              j_20 :
                                              if(!(match_string(j_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = term_o_18;
                                              t = set_config_0(t);
                                              t = term_w_18;
                                              return(t);
                                            }
                                            ATerm a_5 (ATerm t)
                                            {
                                              t = term_x_18;
                                              return(t);
                                            }
                                            t = Option_3(t, y_4, z_4, a_5);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_table_destroy(not_null(v_21));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_55 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL,q_22 = NULL;
  q_22 = t;
  l_22 :
  if(((ATgetType(q_22) == AT_LIST) && ((ATermList) q_22 != ATempty)))
    {
      m_22 = ATgetFirst((ATermList) q_22);
      n_22 = (ATerm) ATgetNext((ATermList) q_22);
      {
        ATerm t_22 = NULL;
        t = not_null(n_22);
        {
          ATerm y_18;
          y_18 = t;
          {
            ATerm u_22 = NULL,w_22 = NULL,y_22 = NULL;
            ATerm z_18;
            z_18 = t;
            {
              ATerm v_22 = NULL;
              t = b_0(t);
              {
                v_22 = t;
                if(((u_22 != NULL) && (u_22 != v_22)))
                  _fail(v_22);
                else
                  u_22 = v_22;
              }
            }
            t = z_18;
            {
              ATerm x_22 = NULL;
              t = not_null(m_22);
              {
                t = a_0(t);
                {
                  x_22 = t;
                  if(((w_22 != NULL) && (w_22 != x_22)))
                    _fail(x_22);
                  else
                    w_22 = x_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_22)), not_null(w_22));
                {
                  y_22 = t;
                  if(((t_22 != NULL) && (t_22 != y_22)))
                    _fail(y_22);
                  else
                    t_22 = y_22;
                }
              }
            }
          }
          t = y_18;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(t_22);
              return(t);
            }
            t = reverse_acc_2(t, a_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_22 == ATempty))
        {
          {
            t = term_g_10;
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
  ATerm e_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_5);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      t = SSL_table_get(not_null(k_23), not_null(l_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_45 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_Program_1))
    {
      v_23 = ATgetArgument(u_23, 0);
      {
        ATerm y_23 = NULL,a_24 = NULL;
        ATerm z_23 = NULL;
        t = SSLgetAnnotations(not_null(u_23));
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
        {
          t = not_null(v_23);
          {
            ATerm c_24 = NULL;
            t = e_45(t);
            {
              a_24 = t;
              {
                ATerm d_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_24)), not_null(y_23));
                {
                  d_24 = t;
                  if(((c_24 != NULL) && (c_24 != d_24)))
                    _fail(d_24);
                  else
                    c_24 = d_24;
                }
                t = not_null(c_24);
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
  ATerm m_24 = NULL;
  ATerm f_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm n_24 = NULL;
      n_24 = t;
      if(((m_24 != NULL) && (m_24 != n_24)))
        _fail(n_24);
      else
        m_24 = n_24;
      return(t);
    }
    t = Program_1(t, i_5);
    return(t);
  }
  t = option_defined_1(t, f_5);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm o_24 = NULL;
      ATerm p_24 = NULL;
      t = term_g_10;
      {
        ATerm o_5 (ATerm t)
        {
          t = not_null(m_24);
          return(t);
        }
        t = short_description_1(t, o_5);
        {
          t = concat_strings_0(t);
          {
            p_24 = t;
            if(((o_24 != NULL) && (o_24 != p_24)))
              _fail(p_24);
            else
              o_24 = p_24;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATempty, not_null(o_24)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATempty, term_a_19));
      {
        t = printnl_0(t);
        {
          t = term_b_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_5 (ATerm t)
                {
                  ATerm q_24 = NULL;
                  q_24 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_24)), term_c_19));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_5);
                {
                  ATerm q_5 (ATerm t)
                  {
                    ATerm s_24 = NULL;
                    ATerm t_24 = NULL;
                    t = term_g_10;
                    {
                      ATerm w_5 (ATerm t)
                      {
                        t = not_null(m_24);
                        return(t);
                      }
                      t = long_description_1(t, w_5);
                      {
                        t = concat_strings_0(t);
                        {
                          t_24 = t;
                          if(((s_24 != NULL) && (s_24 != t_24)))
                            _fail(t_24);
                          else
                            s_24 = t_24;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_24)), term_d_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_5);
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
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym__2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      {
        ATerm e_19;
        e_19 = t;
        t = SSL_printnl(not_null(b_25), not_null(c_25));
        t = e_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_45 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Undefined_1))
    {
      p_25 = ATgetArgument(o_25, 0);
      {
        ATerm w_25 = NULL,y_25 = NULL;
        ATerm x_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
        }
        {
          t = not_null(p_25);
          {
            ATerm a_26 = NULL;
            t = f_45(t);
            {
              y_25 = t;
              {
                ATerm b_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_25)), not_null(w_25));
                {
                  b_26 = t;
                  if(((a_26 != NULL) && (a_26 != b_26)))
                    _fail(b_26);
                  else
                    a_26 = b_26;
                }
                t = not_null(a_26);
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
ATerm option_defined_1 (ATerm t, ATerm e_56 (ATerm))
{
  t = fetch_1(t, e_56);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_Help_0))
    {
      ATerm m_26 = NULL,o_26 = NULL;
      ATerm h_19;
      h_19 = t;
      {
        ATerm n_26 = NULL;
        t = SSLgetAnnotations(not_null(k_26));
        {
          n_26 = t;
          if(((m_26 != NULL) && (m_26 != n_26)))
            _fail(n_26);
          else
            m_26 = n_26;
        }
      }
      t = h_19;
      {
        ATerm p_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
        t = not_null(o_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_76(t);
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
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm u_26 = NULL;
    u_26 = t;
    t_26 :
    if(!(match_string(u_26, "--help")))
      {
        if(!(match_string(u_26, "-h")))
          {
            if(!(match_string(u_26, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_k_19;
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = term_l_19;
    return(t);
  }
  t = Option_3(t, b_6, c_6, d_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(((ATgetType(x_26) == AT_LIST) && ((ATermList) x_26 != ATempty)))
    {
      y_26 = ATgetFirst((ATermList) x_26);
      z_26 = (ATerm) ATgetNext((ATermList) x_26);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_26)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_55 (ATerm))
{
  ATerm m_19;
  m_19 = t;
  {
    ATerm e_6 (ATerm t)
    {
      t = term_n_19;
      t = c_55(t);
      return(t);
    }
    t = try_1(t, e_6);
  }
  t = m_19;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm h_27 = NULL;
      ATerm o_19;
      o_19 = t;
      {
        ATerm f_27 = NULL;
        ATerm g_27 = NULL;
        g_27 = t;
        if(((f_27 != NULL) && (f_27 != g_27)))
          _fail(g_27);
        else
          f_27 = g_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_19, not_null(f_27));
          t = set_config_0(t);
        }
      }
      t = o_19;
      {
        ATerm i_27 = NULL;
        i_27 = t;
        if(((h_27 != NULL) && (h_27 != i_27)))
          _fail(i_27);
        else
          h_27 = i_27;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_27));
      }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              {
                t = c_55(t);
                t = Cons_2(t, _id, i_6);
              }
            }
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm n_27 = NULL;
  ATerm w_19;
  w_19 = t;
  {
    t = term_x_19;
    t = table_put_0(t);
  }
  t = w_19;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_55(t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_6);
    {
      ATerm m_6 (ATerm t)
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_k_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            {
              ATerm n_6 (ATerm t)
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm o_27 = NULL;
                  o_27 = t;
                  if(((n_27 != NULL) && (n_27 != o_27)))
                    _fail(o_27);
                  else
                    n_27 = o_27;
                  return(t);
                }
                t = Undefined_1(t, s_6);
                return(t);
              }
              t = option_defined_1(t, n_6);
              {
                ATerm g_20;
                g_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), term_l_20));
                  t = printnl_0(t);
                }
                t = g_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, m_6);
      {
        ATerm a_21;
        a_21 = t;
        {
          t = term_b_16;
          t = table_destroy_0(t);
        }
        t = a_21;
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_27 = NULL;
  ATerm w_27 = NULL;
  s_27 = t;
  {
    ATerm b_21;
    b_21 = t;
    {
      ATerm x_27 = NULL;
      t = term_h_21;
      {
        x_27 = t;
        if(((w_27 != NULL) && (w_27 != x_27)))
          _fail(x_27);
        else
          w_27 = x_27;
      }
    }
    t = b_21;
    {
      t = SSL_open_file(not_null(s_27), not_null(w_27));
      t = SSL_close_file(not_null(s_27));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_67 (ATerm))
{
  ATerm b_28 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_28);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          t = Nil_0(t);
          t = x_67(t);
        }
      }
    return(t);
  }
  t = b_28(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
        g_28 = t;
        f_28 :
        if(((ATgetType(g_28) == AT_LIST) && ((ATermList) g_28 != ATempty)))
          {
            h_28 = ATgetFirst((ATermList) g_28);
            i_28 = (ATerm) ATgetNext((ATermList) g_28);
            {
              t = not_null(h_28);
              {
                ATerm t_6 (ATerm t)
                {
                  t = not_null(i_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_6);
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
ATerm fetch_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm n_28 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_67, _id);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = Cons_2(t, _id, n_28);
      }
    return(t);
  }
  t = n_28(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm p_28 = NULL;
  ATerm u_6 (ATerm t)
  {
    ATerm q_28 = NULL;
    t = t_67(t);
    {
      q_28 = t;
      if(((p_28 != NULL) && (p_28 != q_28)))
        _fail(q_28);
      else
        p_28 = q_28;
    }
    return(t);
  }
  t = fetch_1(t, u_6);
  t = not_null(p_28);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm r_50 (ATerm), ATerm s_50 (ATerm))
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_50(t);
      {
        ATerm x_6 (ATerm t)
        {
          ATerm u_28 = NULL,w_28 = NULL;
          ATerm s_21;
          s_21 = t;
          {
            ATerm v_28 = NULL;
            v_28 = t;
            if(((u_28 != NULL) && (u_28 != v_28)))
              _fail(v_28);
            else
              u_28 = v_28;
          }
          t = s_21;
          {
            ATerm x_28 = NULL;
            t = s_50(t);
            {
              x_28 = t;
              if(((w_28 != NULL) && (w_28 != x_28)))
                _fail(x_28);
              else
                w_28 = x_28;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_28)), term_f_12), not_null(u_28));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, x_6);
      }
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        t = term_t_21;
        {
          t = debug_1(t, s_50);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  ATerm u_21;
  u_21 = t;
  {
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
    f_29 = t;
    b_29 :
    if(match_cons(f_29, sym__3))
      {
        g_29 = ATgetArgument(f_29, 0);
        h_29 = ATgetArgument(f_29, 1);
        i_29 = ATgetArgument(f_29, 2);
        {
          if(((c_29 != NULL) && (c_29 != g_29)))
            _fail(g_29);
          else
            c_29 = g_29;
          {
            if(((d_29 != NULL) && (d_29 != h_29)))
              _fail(h_29);
            else
              d_29 = h_29;
            {
              if(((e_29 != NULL) && (e_29 != i_29)))
                _fail(i_29);
              else
                e_29 = i_29;
              t = SSL_table_put(not_null(c_29), not_null(d_29), not_null(e_29));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_21;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  n_29 :
  if(((ATermList) r_29 == ATempty))
    {
      {
        ATerm t_29 = NULL,v_29 = NULL;
        ATerm w_21;
        w_21 = t;
        {
          ATerm u_29 = NULL;
          t = SSLgetAnnotations(not_null(r_29));
          {
            u_29 = t;
            if(((t_29 != NULL) && (t_29 != u_29)))
              _fail(u_29);
            else
              t_29 = u_29;
          }
        }
        t = w_21;
        {
          ATerm w_29 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_29));
          {
            w_29 = t;
            if(((v_29 != NULL) && (v_29 != w_29)))
              _fail(w_29);
            else
              v_29 = w_29;
          }
          t = not_null(v_29);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm a_30 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = Cons_2(t, i_67, a_30);
      }
    return(t);
  }
  t = a_30(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(match_cons(f_30, sym__2))
    {
      g_30 = ATgetArgument(f_30, 0);
      h_30 = ATgetArgument(f_30, 1);
      {
        t = not_null(h_30);
        {
          ATerm y_6 (ATerm t)
          {
            ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
            k_30 = t;
            d_30 :
            if(match_cons(k_30, sym__2))
              {
                l_30 = ATgetArgument(k_30, 0);
                m_30 = ATgetArgument(k_30, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_30), not_null(l_30), not_null(m_30));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, y_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm b_51 (ATerm))
{
  ATerm z_21;
  z_21 = t;
  {
    ATerm s_30 = NULL;
    t = b_51(t);
    {
      ATerm z_6 (ATerm t)
      {
        ATerm a_7 (ATerm t)
        {
          t = term_a_22;
          return(t);
        }
        t = debug_1(t, a_7);
        return(t);
      }
      t = if_verbose2_1(t, z_6);
      {
        t = ReadFromFile_0(t);
        {
          ATerm t_30 = NULL;
          t_30 = t;
          if(((s_30 != NULL) && (s_30 != t_30)))
            _fail(t_30);
          else
            s_30 = t_30;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(s_30));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = z_21;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  t = SSL_implode_string(not_null(w_30));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  t = SSL_explode_string(not_null(c_31));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 (ATerm t)
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, h_31);
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              {
                ATerm b_7 (ATerm t)
                {
                  ATerm g_31 = NULL;
                  g_31 = t;
                  f_31 :
                  if(!(match_int(g_31, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm c_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, b_7, c_7);
              }
            }
          return(t);
        }
        t = h_31(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_49 (ATerm), ATerm y_49 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(((ATgetType(o_31) == AT_LIST) && ((ATermList) o_31 != ATempty)))
    {
      p_31 = ATgetFirst((ATermList) o_31);
      q_31 = (ATerm) ATgetNext((ATermList) o_31);
      {
        ATerm u_31 = NULL,w_31 = NULL;
        ATerm v_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          v_31 = t;
          if(((u_31 != NULL) && (u_31 != v_31)))
            _fail(v_31);
          else
            u_31 = v_31;
        }
        {
          t = not_null(p_31);
          {
            ATerm y_31 = NULL;
            t = x_49(t);
            {
              w_31 = t;
              {
                t = not_null(q_31);
                {
                  ATerm a_32 = NULL;
                  t = y_49(t);
                  {
                    y_31 = t;
                    {
                      ATerm b_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_31)), not_null(w_31)), not_null(u_31));
                      {
                        b_32 = t;
                        if(((a_32 != NULL) && (a_32 != b_32)))
                          _fail(b_32);
                        else
                          a_32 = b_32;
                      }
                      t = not_null(a_32);
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
  ATerm q_32 = NULL,s_32 = NULL,y_32 = NULL;
  ATerm f_22;
  f_22 = t;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm r_32 = NULL;
      t = get_path_0(t);
      {
        r_32 = t;
        if(((q_32 != NULL) && (q_32 != r_32)))
          _fail(r_32);
        else
          q_32 = r_32;
      }
      return(t);
    }
    t = Cons_2(t, d_7, _id);
  }
  t = f_22;
  {
    ATerm g_22;
    g_22 = t;
    {
      ATerm t_32 = NULL;
      t = get_conf_pkgdatadir();
      {
        t_32 = t;
        if(((s_32 != NULL) && (s_32 != t_32)))
          _fail(t_32);
        else
          s_32 = t_32;
      }
    }
    t = g_22;
    {
      ATerm e_7 (ATerm t)
      {
        ATerm f_7 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_32)), not_null(q_32));
          return(t);
        }
        ATerm g_7 (ATerm t)
        {
          t = term_h_22;
          return(t);
        }
        t = find_config_file_2(t, f_7, g_7);
        return(t);
      }
      t = import_config_file_1(t, e_7);
      {
        ATerm a_33 = NULL;
        ATerm j_7 (ATerm t)
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0(t);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              {
                ATerm k_22 = t;
                int o_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_7 (ATerm t)
                    {
                      ATerm u_32 = NULL;
                      u_32 = t;
                      j_32 :
                      if(!(match_string(u_32, "-I")))
                        {
                          if(!(match_string(u_32, "--Include")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm t_7 (ATerm t)
                    {
                      ATerm p_22;
                      p_22 = t;
                      {
                        ATerm v_32 = NULL;
                        ATerm w_32 = NULL;
                        w_32 = t;
                        if(((v_32 != NULL) && (v_32 != w_32)))
                          _fail(w_32);
                        else
                          v_32 = w_32;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATinsert(ATempty, not_null(v_32)));
                          t = extend_config_0(t);
                        }
                      }
                      t = p_22;
                      return(t);
                    }
                    ATerm c_8 (ATerm t)
                    {
                      t = term_r_22;
                      return(t);
                    }
                    t = ArgOption_3(t, l_7, t_7, c_8);
                    LocalPopChoice(o_22);
                  }
                else
                  {
                    t = k_22;
                    {
                      ATerm d_8 (ATerm t)
                      {
                        ATerm x_32 = NULL;
                        x_32 = t;
                        l_32 :
                        if(!(match_string(x_32, "-silent")))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm e_8 (ATerm t)
                      {
                        ATerm s_22;
                        s_22 = t;
                        {
                          t = term_y_16;
                          t = set_config_0(t);
                        }
                        t = s_22;
                        return(t);
                      }
                      ATerm f_8 (ATerm t)
                      {
                        t = term_z_22;
                        return(t);
                      }
                      t = Option_3(t, d_8, e_8, f_8);
                    }
                  }
              }
            }
          return(t);
        }
        t = parse_options_1(t, j_7);
        {
          y_32 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATinsert(ATempty, term_a_23));
            {
              t = extend_config_0(t);
              {
                t = term_n_9;
                {
                  ATerm c_33 = NULL;
                  t = get_config_0(t);
                  {
                    a_33 = t;
                    {
                      ATerm g_8 (ATerm t)
                      {
                        ATerm h_8 (ATerm t)
                        {
                          t = term_b_23;
                          return(t);
                        }
                        t = debug_1(t, h_8);
                        return(t);
                      }
                      t = if_verbose2_1(t, g_8);
                      {
                        ATerm c_23 = t;
                        int d_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_p_9;
                            t = get_config_0(t);
                            LocalPopChoice(d_23);
                          }
                        else
                          {
                            t = c_23;
                            t = new_file_0(t);
                          }
                        {
                          c_33 = t;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(c_33));
                            {
                              t = parse_module_0(t);
                              {
                                ATerm e_23 = t;
                                int f_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_9;
                                    t = get_config_0(t);
                                    LocalPopChoice(f_23);
                                  }
                                else
                                  {
                                    t = e_23;
                                    {
                                      ATerm e_33 = NULL;
                                      t = not_null(c_33);
                                      {
                                        t = ReadFromFile_0(t);
                                        {
                                          ATerm g_23;
                                          g_23 = t;
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(c_33));
                                            t = rm_files_0(t);
                                          }
                                          t = g_23;
                                          {
                                            ATerm f_33 = NULL;
                                            f_33 = t;
                                            if(((e_33 != NULL) && (e_33 != f_33)))
                                              _fail(f_33);
                                            else
                                              e_33 = f_33;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_h_23, not_null(e_33));
                                              t = WriteToTextFile_0(t);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                {
                                  t = term_k_9;
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
