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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_t_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_n_19;
ATerm term_x_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_j_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_x_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_d_14;
ATerm term_v_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_z_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_t_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_t_6;
void init_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("asource", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax declaration file for: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_c_8);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_8);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_s_8);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_s_8);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_s_8);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_m_13);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__3, term_j_13, term_m_13, (ATerm) ATempty);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod.config", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p include modules from directory p", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("parsing ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_stdout_0);
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
ATerm call_out_4 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm call_tmp_3 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm), ATerm v_53 (ATerm));
ATerm leq_0 (ATerm);
ATerm if_less_verbose1_1 (ATerm, ATerm u_49 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm p_49 (ATerm));
ATerm add_extension_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm t_58 (ATerm));
ATerm basename_1 (ATerm, ATerm r_58 (ATerm));
ATerm basename_0 (ATerm);
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm r_49 (ATerm));
ATerm split_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm temp_file_1 (ATerm, ATerm o_57 (ATerm));
ATerm get_syntax_definition_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_57 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_parse_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm get_syntax_0 (ATerm);
ATerm parse_concrete_module_0 (ATerm);
ATerm _2 (ATerm, ATerm y_42 (ATerm), ATerm z_42 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_56 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_49 (ATerm));
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm Option_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_54 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_54 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_54 (ATerm));
ATerm Program_1 (ATerm, ATerm q_44 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm r_44 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_55 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_75 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_54 (ATerm));
ATerm parse_options_1 (ATerm, ATerm l_54 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_67 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm u_66 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm w_66 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm l_66 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm l_50 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm parse_cmod_0 (ATerm);
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
      t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(CheckATermList(not_null(z_1)), term_u_6));
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
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
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
                          ATerm b_7 = t;
                          int c_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_7);
                            }
                          else
                            {
                              t = b_7;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_d_7;
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
                            ATerm e_7;
                            e_7 = t;
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
                            t = e_7;
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
    t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(i_3));
    {
      t = table_get_0(t);
      {
        ATerm g_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_7;
            g_7 = t;
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              l_3 = t;
              if(((k_3 != NULL) && (k_3 != l_3)))
                _fail(l_3);
              else
                k_3 = l_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_7, not_null(i_3), not_null(k_3));
                t = table_put_0(t);
              }
            }
            t = g_7;
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
  ATerm j_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_7;
      t = get_config_0(t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = j_7;
      t = term_c_8;
    }
  return(t);
}
ATerm call_out_4 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm w_3 = NULL;
  ATerm y_3 = NULL,a_4 = NULL,c_4 = NULL;
  w_3 = t;
  {
    ATerm d_8;
    d_8 = t;
    {
      ATerm z_3 = NULL;
      t = w_53(t);
      {
        z_3 = t;
        if(((y_3 != NULL) && (y_3 != z_3)))
          _fail(z_3);
        else
          y_3 = z_3;
      }
    }
    t = d_8;
    {
      ATerm e_8;
      e_8 = t;
      {
        ATerm b_4 = NULL;
        t = y_53(t);
        {
          b_4 = t;
          if(((a_4 != NULL) && (a_4 != b_4)))
            _fail(b_4);
          else
            a_4 = b_4;
        }
      }
      t = e_8;
      {
        ATerm d_4 = NULL;
        t = x_53(t);
        {
          d_4 = t;
          if(((c_4 != NULL) && (c_4 != d_4)))
            _fail(d_4);
          else
            c_4 = d_4;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_4)), not_null(a_4)), term_g_8), not_null(w_3)), term_f_8));
          {
            t = call_0(t);
            {
              t = y_53(t);
              t = z_53(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm call_tmp_3 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm), ATerm v_53 (ATerm))
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
            ATerm h_8;
            h_8 = t;
            {
              ATerm u_4 = NULL;
              t = t_53(t);
              {
                u_4 = t;
                if(((t_4 != NULL) && (t_4 != u_4)))
                  _fail(u_4);
                else
                  t_4 = u_4;
              }
            }
            t = h_8;
            {
              ATerm w_4 = NULL;
              t = u_53(t);
              {
                w_4 = t;
                if(((v_4 != NULL) && (v_4 != w_4)))
                  _fail(w_4);
                else
                  v_4 = w_4;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_4)), not_null(q_4)), term_g_8), not_null(n_4)), term_f_8));
                {
                  t = if_verbose5_1(t, debug_0);
                  {
                    t = call_0(t);
                    {
                      t = not_null(q_4);
                      t = v_53(t);
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
  ATerm i_8 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_8;
    }
  return(t);
}
ATerm if_less_verbose1_1 (ATerm t, ATerm u_49 (ATerm))
{
  ATerm m_0 (ATerm t)
  {
    ATerm j_8;
    j_8 = t;
    {
      ATerm c_5 = NULL;
      ATerm d_5 = NULL;
      t = term_t_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_5), term_k_8);
        t = leq_0(t);
      }
    }
    t = j_8;
    t = u_49(t);
    return(t);
  }
  t = try_1(t, m_0);
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm p_49 (ATerm))
{
  ATerm n_0 (ATerm t)
  {
    ATerm l_8;
    l_8 = t;
    {
      ATerm g_5 = NULL;
      ATerm h_5 = NULL;
      t = term_t_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), term_q_8);
        t = geq_0(t);
      }
    }
    t = l_8;
    t = p_49(t);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_5)), term_r_8), not_null(m_5));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm t_58 (ATerm))
{
  t = basename_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = term_s_8;
      t = t_58(t);
      return(t);
    }
    t = split_2(t, _id, o_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm r_58 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm p_0 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, p_0);
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm a_9 = t;
            int b_9 = stack_ptr;
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
                LocalPopChoice(b_9);
              }
            else
              {
                t = a_9;
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
                  t = Cons_2(t, r_0, r_58);
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
  ATerm f_9;
  f_9 = t;
  {
    ATerm f_6 = NULL;
    ATerm g_6 = NULL;
    g_6 = t;
    if(((f_6 != NULL) && (f_6 != g_6)))
      _fail(g_6);
    else
      f_6 = g_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATempty, not_null(f_6)));
      t = printnl_0(t);
    }
  }
  t = f_9;
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm i_9;
    i_9 = t;
    {
      ATerm j_6 = NULL;
      ATerm k_6 = NULL;
      t = term_t_7;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), term_j_9);
        t = geq_0(t);
      }
    }
    t = i_9;
    t = r_49(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm o_6 = NULL,q_6 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm p_6 = NULL;
    t = k_59(t);
    {
      p_6 = t;
      if(((o_6 != NULL) && (o_6 != p_6)))
        _fail(p_6);
      else
        o_6 = p_6;
    }
  }
  t = k_9;
  {
    ATerm r_6 = NULL;
    t = l_59(t);
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
ATerm temp_file_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm v_6 = NULL;
  ATerm l_9;
  l_9 = t;
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
  t = l_9;
  {
    ATerm t_0 (ATerm t)
    {
      t = not_null(v_6);
      return(t);
    }
    t = split_2(t, t_0, _id);
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_57(t);
          {
            ATerm p_9;
            p_9 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(v_6));
              t = rm_files_0(t);
            }
            t = p_9;
          }
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          {
            ATerm r_9;
            r_9 = t;
            {
              t = (ATerm) ATinsert(ATempty, not_null(v_6));
              t = rm_files_0(t);
            }
            t = r_9;
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
  i_7 = t;
  {
    ATerm m_7 = NULL;
    ATerm u_0 (ATerm t)
    {
      t = term_y_9;
      return(t);
    }
    t = guarantee_extension_1(t, u_0);
    {
      k_7 = t;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            ATerm o_7 = NULL;
            t = term_b_10;
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
                  ATerm v_0 (ATerm t)
                  {
                    ATerm w_0 (ATerm t)
                    {
                      t = term_c_10;
                      return(t);
                    }
                    t = debug_1(t, w_0);
                    return(t);
                  }
                  t = if_verbose2_1(t, v_0);
                }
              }
            }
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
              ATerm p_7 = NULL;
              ATerm x_0 (ATerm t)
              {
                ATerm y_0 (ATerm t)
                {
                  t = term_d_10;
                  return(t);
                }
                t = say_1(t, y_0);
                return(t);
              }
              t = if_verbose2_1(t, x_0);
              {
                t = not_null(i_7);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_g_10;
                    return(t);
                  }
                  t = guarantee_extension_1(t, z_0);
                  {
                    p_7 = t;
                    {
                      if(((m_7 != NULL) && (m_7 != p_7)))
                        _fail(p_7);
                      else
                        m_7 = p_7;
                      {
                        ATerm b_1 (ATerm t)
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
                                ATerm h_10;
                                h_10 = t;
                                {
                                  ATerm v_7 = NULL;
                                  t = term_i_10;
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
                                t = h_10;
                                {
                                  ATerm z_7 = NULL;
                                  t = term_b_10;
                                  {
                                    t = get_config_0(t);
                                    {
                                      ATerm c_1 (ATerm t)
                                      {
                                        ATerm x_7 = NULL;
                                        ATerm y_7 = NULL;
                                        y_7 = t;
                                        if(((x_7 != NULL) && (x_7 != y_7)))
                                          _fail(y_7);
                                        else
                                          x_7 = y_7;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_7)), term_b_10);
                                        return(t);
                                      }
                                      t = map_1(t, c_1);
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
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_7)), not_null(r_7)), term_g_8), not_null(m_7)), term_f_8));
                                    {
                                      t = if_verbose5_1(t, debug_0);
                                      {
                                        t = call_0(t);
                                        {
                                          ATerm b_8 = NULL;
                                          t = term_j_10;
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
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_7)), term_g_8), not_null(r_7)), term_f_8));
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
                        t = temp_file_1(t, b_1);
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
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm k_10;
  k_10 = t;
  {
    t = a_57(t);
    t = debug_0(t);
  }
  t = k_10;
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
            ATerm m_10 = t;
            int r_10 = stack_ptr;
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_8)), term_t_10), not_null(d_9));
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
                LocalPopChoice(r_10);
              }
            else
              {
                t = m_10;
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
  o_9 = t;
  {
    ATerm s_9 = NULL;
    ATerm d_1 (ATerm t)
    {
      t = term_z_10;
      return(t);
    }
    t = guarantee_extension_1(t, d_1);
    {
      q_9 = t;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL;
            ATerm u_9 = NULL;
            t = term_b_10;
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
                  ATerm e_1 (ATerm t)
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = term_c_11;
                      return(t);
                    }
                    t = debug_1(t, f_1);
                    return(t);
                  }
                  t = if_verbose2_1(t, e_1);
                }
              }
            }
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm v_9 = NULL;
              ATerm g_1 (ATerm t)
              {
                ATerm i_1 (ATerm t)
                {
                  t = term_d_11;
                  return(t);
                }
                t = say_1(t, i_1);
                return(t);
              }
              t = if_verbose2_1(t, g_1);
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
                        t = term_e_11;
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
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_9)), term_f_11), not_null(q_9)), term_g_8), not_null(s_9)), term_f_8));
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
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_11;
  g_11 = t;
  {
    ATerm e_10 = NULL;
    ATerm f_10 = NULL;
    f_10 = t;
    if(((e_10 != NULL) && (e_10 != f_10)))
      _fail(f_10);
    else
      e_10 = f_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(e_10));
      t = printnl_0(t);
    }
  }
  t = g_11;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm h_11;
  h_11 = t;
  {
    t = error_0(t);
    {
      t = term_k_8;
      t = exit_0(t);
    }
  }
  t = h_11;
  return(t);
}
ATerm get_syntax_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_10 = NULL;
      t = basename_0(t);
      {
        ATerm q_10 = NULL;
        ATerm j_1 (ATerm t)
        {
          t = term_k_11;
          return(t);
        }
        t = guarantee_extension_1(t, j_1);
        {
          p_10 = t;
          {
            if(((n_10 != NULL) && (n_10 != p_10)))
              _fail(p_10);
            else
              n_10 = p_10;
            {
              t = ReadFromFile_0(t);
              {
                q_10 = t;
                {
                  ATerm s_10 = NULL;
                  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
                  t = not_null(q_10);
                  {
                    s_10 = t;
                    {
                      t = SSL_explode_term(not_null(s_10));
                      {
                        u_10 = t;
                        l_10 :
                        if(match_cons(u_10, sym__2))
                          {
                            v_10 = ATgetArgument(u_10, 0);
                            w_10 = ATgetArgument(u_10, 1);
                            if(((o_10 != NULL) && (o_10 != v_10)))
                              _fail(v_10);
                            else
                              o_10 = v_10;
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                  }
                  t = not_null(o_10);
                }
              }
            }
          }
        }
      }
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm x_10 = NULL;
        ATerm y_10 = NULL;
        y_10 = t;
        if(((x_10 != NULL) && (x_10 != y_10)))
          _fail(y_10);
        else
          x_10 = y_10;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_11), not_null(x_10)), term_p_11);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm parse_concrete_module_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm r_11 = NULL;
        t = not_null(n_11);
        {
          ATerm t_11 = NULL;
          t = get_syntax_0(t);
          {
            r_11 = t;
            {
              ATerm v_11 = NULL;
              t = get_parse_table_0(t);
              {
                t_11 = t;
                {
                  t = not_null(n_11);
                  {
                    t = basename_0(t);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = term_s_11;
                        return(t);
                      }
                      t = guarantee_extension_1(t, k_1);
                      {
                        v_11 = t;
                        {
                          t = not_null(n_11);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              t = term_u_11;
                              t = get_config_0(t);
                              return(t);
                            }
                            ATerm m_1 (ATerm t)
                            {
                              ATerm x_11 = NULL;
                              ATerm y_11 = NULL;
                              t = (ATerm) ATempty;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_w_11);
                                  return(t);
                                }
                                t = if_verbose3_1(t, o_1);
                                {
                                  y_11 = t;
                                  if(((x_11 != NULL) && (x_11 != y_11)))
                                    _fail(y_11);
                                  else
                                    x_11 = y_11;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_11)), not_null(t_11)), term_e_12), term_d_12);
                              return(t);
                            }
                            ATerm n_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                t = term_f_12;
                                t = get_config_0(t);
                                return(t);
                              }
                              ATerm q_1 (ATerm t)
                              {
                                t = (ATerm) ATempty;
                                {
                                  ATerm w_1 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, term_g_12);
                                    return(t);
                                  }
                                  t = if_less_verbose1_1(t, w_1);
                                }
                                return(t);
                              }
                              ATerm r_1 (ATerm t)
                              {
                                t = not_null(v_11);
                                return(t);
                              }
                              ATerm v_1 (ATerm t)
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = term_h_12;
                                  t = get_config_0(t);
                                  return(t);
                                }
                                ATerm y_1 (ATerm t)
                                {
                                  ATerm z_11 = NULL;
                                  ATerm a_12 = NULL;
                                  t = verbosity_0(t);
                                  {
                                    t = int_to_string_0(t);
                                    {
                                      a_12 = t;
                                      if(((z_11 != NULL) && (z_11 != a_12)))
                                        _fail(a_12);
                                      else
                                        z_11 = a_12;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_11)), term_t_7);
                                  return(t);
                                }
                                ATerm a_2 (ATerm t)
                                {
                                  ATerm b_2 (ATerm t)
                                  {
                                    t = term_i_12;
                                    t = get_config_0(t);
                                    return(t);
                                  }
                                  ATerm c_2 (ATerm t)
                                  {
                                    ATerm b_12 = NULL;
                                    ATerm c_12 = NULL;
                                    t = verbosity_0(t);
                                    {
                                      t = int_to_string_0(t);
                                      {
                                        c_12 = t;
                                        if(((b_12 != NULL) && (b_12 != c_12)))
                                          _fail(c_12);
                                        else
                                          b_12 = c_12;
                                      }
                                    }
                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_12)), term_t_7);
                                    return(t);
                                  }
                                  ATerm e_2 (ATerm t)
                                  {
                                    t = not_null(o_11);
                                    return(t);
                                  }
                                  t = call_out_4(t, b_2, c_2, e_2, _id);
                                  return(t);
                                }
                                t = call_tmp_3(t, x_1, y_1, a_2);
                                return(t);
                              }
                              t = call_out_4(t, p_1, q_1, r_1, v_1);
                              return(t);
                            }
                            t = call_tmp_3(t, l_1, m_1, n_1);
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
  return(t);
}
ATerm _2 (ATerm t, ATerm y_42 (ATerm), ATerm z_42 (ATerm))
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        ATerm w_12 = NULL,y_12 = NULL;
        ATerm x_12 = NULL;
        t = SSLgetAnnotations(not_null(q_12));
        {
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
        }
        {
          t = not_null(r_12);
          {
            ATerm a_13 = NULL;
            t = y_42(t);
            {
              y_12 = t;
              {
                t = not_null(s_12);
                {
                  ATerm c_13 = NULL;
                  t = z_42(t);
                  {
                    a_13 = t;
                    {
                      ATerm d_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_12), not_null(a_13)), not_null(w_12));
                      {
                        d_13 = t;
                        if(((c_13 != NULL) && (c_13 != d_13)))
                          _fail(d_13);
                        else
                          c_13 = d_13;
                      }
                      t = not_null(c_13);
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
  ATerm k_13 = NULL;
  ATerm l_13 = NULL;
  t = term_s_8;
  {
    t = new_0(t);
    {
      l_13 = t;
      if(((k_13 != NULL) && (k_13 != l_13)))
        _fail(l_13);
      else
        k_13 = l_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_j_12);
    {
      t = conc_strings_0(t);
      {
        ATerm f_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, f_2);
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_56 (ATerm))
{
  ATerm k_12;
  k_12 = t;
  {
    ATerm q_13 = NULL,s_13 = NULL;
    ATerm l_12;
    l_12 = t;
    {
      ATerm r_13 = NULL;
      t = z_56(t);
      {
        r_13 = t;
        if(((q_13 != NULL) && (q_13 != r_13)))
          _fail(r_13);
        else
          q_13 = r_13;
      }
    }
    t = l_12;
    {
      ATerm t_13 = NULL;
      t_13 = t;
      if(((s_13 != NULL) && (s_13 != t_13)))
        _fail(t_13);
      else
        s_13 = t_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_13)), not_null(q_13)));
        t = printnl_0(t);
      }
    }
  }
  t = k_12;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  x_13 :
  if(match_cons(y_13, sym__2))
    {
      z_13 = ATgetArgument(y_13, 0);
      a_14 = ATgetArgument(y_13, 1);
      {
        ATerm m_12;
        m_12 = t;
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_13), not_null(a_14));
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              t = SSL_gtr(not_null(z_13), not_null(a_14));
            }
        }
        t = m_12;
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
  ATerm g_14 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
      h_14 = t;
      f_14 :
      if(match_cons(h_14, sym__2))
        {
          i_14 = ATgetArgument(h_14, 0);
          j_14 = ATgetArgument(h_14, 1);
          {
            if(((g_14 != NULL) && (g_14 != i_14)))
              _fail(i_14);
            else
              g_14 = i_14;
            if(((g_14 != NULL) && (g_14 != j_14)))
              _fail(j_14);
            else
              g_14 = j_14;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm v_12;
    v_12 = t;
    {
      ATerm m_14 = NULL;
      ATerm n_14 = NULL;
      t = term_t_7;
      {
        t = get_config_0(t);
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_z_12);
        t = geq_0(t);
      }
    }
    t = v_12;
    t = o_49(t);
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      {
        t = not_null(s_14);
        {
          ATerm i_2 (ATerm t)
          {
            t = not_null(t_14);
            return(t);
          }
          t = at_end_1(t, i_2);
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
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym__2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        ATerm g_15 = NULL;
        ATerm h_15 = NULL,j_15 = NULL;
        ATerm i_15 = NULL;
        t = not_null(c_15);
        {
          ATerm b_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_13);
            }
          else
            {
              t = b_13;
              t = (ATerm) ATempty;
            }
          {
            i_15 = t;
            if(((h_15 != NULL) && (h_15 != i_15)))
              _fail(i_15);
            else
              h_15 = i_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_15), not_null(h_15));
          {
            t = conc_0(t);
            {
              j_15 = t;
              if(((g_15 != NULL) && (g_15 != j_15)))
                _fail(j_15);
              else
                g_15 = j_15;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_7, not_null(c_15), not_null(g_15));
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
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  s_15 :
  if(match_cons(y_15, sym__2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_7, not_null(z_15), not_null(a_16));
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
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
  i_16 = t;
  h_16 :
  if(match_string(i_16, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_16) == AT_LIST) && ((ATermList) i_16 != ATempty)))
        {
          j_16 = ATgetFirst((ATermList) i_16);
          k_16 = (ATerm) ATgetNext((ATermList) i_16);
          {
            ATerm n_16 = NULL;
            ATerm f_13;
            f_13 = t;
            {
              t = not_null(j_16);
              t = j_0(t);
            }
            t = f_13;
            {
              ATerm o_16 = NULL;
              t = term_s_8;
              {
                t = k_0(t);
                {
                  o_16 = t;
                  if(((n_16 != NULL) && (n_16 != o_16)))
                    _fail(o_16);
                  else
                    n_16 = o_16;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_16)), not_null(n_16));
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
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym__3))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      y_16 = ATgetArgument(v_16, 2);
      {
        ATerm g_13;
        g_13 = t;
        {
          ATerm c_17 = NULL;
          ATerm d_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), not_null(x_16));
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_16), not_null(x_16), (ATerm) ATinsert(CheckATermList(not_null(c_17)), not_null(y_16)));
            t = table_put_0(t);
          }
        }
        t = g_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm h_17 = NULL;
  ATerm i_17 = NULL;
  t = term_s_8;
  {
    t = o_54(t);
    {
      i_17 = t;
      if(((h_17 != NULL) && (h_17 != i_17)))
        _fail(i_17);
      else
        h_17 = i_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_13, term_m_13, not_null(h_17));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  p_17 = t;
  n_17 :
  if(match_string(p_17, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(p_17) == AT_LIST) && ((ATermList) p_17 != ATempty)))
        {
          q_17 = ATgetFirst((ATermList) p_17);
          r_17 = (ATerm) ATgetNext((ATermList) p_17);
          o_17 :
          if(((ATgetType(r_17) == AT_LIST) && ((ATermList) r_17 != ATempty)))
            {
              s_17 = ATgetFirst((ATermList) r_17);
              t_17 = (ATerm) ATgetNext((ATermList) r_17);
              {
                ATerm x_17 = NULL;
                ATerm n_13;
                n_13 = t;
                {
                  t = not_null(q_17);
                  t = e_0(t);
                }
                t = n_13;
                {
                  ATerm y_17 = NULL;
                  t = not_null(s_17);
                  {
                    t = f_0(t);
                    {
                      y_17 = t;
                      if(((x_17 != NULL) && (x_17 != y_17)))
                        _fail(y_17);
                      else
                        x_17 = y_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_17)), not_null(x_17));
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
  ATerm d_18 = NULL;
  d_18 = t;
  t = SSL_string_to_int(not_null(d_18));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm z_18 = NULL;
        z_18 = t;
        g_18 :
        if(!(match_string(z_18, "-i")))
          {
            if(!(match_string(z_18, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        ATerm c_19 = NULL;
        ATerm u_13;
        u_13 = t;
        {
          ATerm a_19 = NULL;
          ATerm b_19 = NULL;
          b_19 = t;
          if(((a_19 != NULL) && (a_19 != b_19)))
            _fail(b_19);
          else
            a_19 = b_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(a_19));
            t = set_config_0(t);
          }
        }
        t = u_13;
        {
          ATerm d_19 = NULL;
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_19));
        }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_v_13;
        return(t);
      }
      t = ArgOption_3(t, j_2, k_2, l_2);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm w_13 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              ATerm e_19 = NULL;
              e_19 = t;
              j_18 :
              if(!(match_string(e_19, "-o")))
                {
                  if(!(match_string(e_19, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              ATerm o_19 = NULL;
              ATerm c_14;
              c_14 = t;
              {
                ATerm j_19 = NULL;
                ATerm k_19 = NULL;
                k_19 = t;
                if(((j_19 != NULL) && (j_19 != k_19)))
                  _fail(k_19);
                else
                  j_19 = k_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(j_19));
                  t = set_config_0(t);
                }
              }
              t = c_14;
              {
                ATerm p_19 = NULL;
                p_19 = t;
                if(((o_19 != NULL) && (o_19 != p_19)))
                  _fail(p_19);
                else
                  o_19 = p_19;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_19));
              }
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              t = term_d_14;
              return(t);
            }
            t = ArgOption_3(t, m_2, n_2, o_2);
            LocalPopChoice(b_14);
          }
        else
          {
            t = w_13;
            {
              ATerm e_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm q_19 = NULL;
                    q_19 = t;
                    m_18 :
                    if(!(match_string(q_19, "-S")))
                      {
                        if(!(match_string(q_19, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    t = term_l_14;
                    t = set_config_0(t);
                    t = term_o_14;
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    t = term_p_14;
                    return(t);
                  }
                  t = Option_3(t, t_2, u_2, v_2);
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = e_14;
                  {
                    ATerm u_14 = t;
                    int v_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_2 (ATerm t)
                        {
                          ATerm r_19 = NULL;
                          r_19 = t;
                          n_18 :
                          if(!(match_string(r_19, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          ATerm u_19 = NULL;
                          ATerm w_14;
                          w_14 = t;
                          {
                            ATerm s_19 = NULL;
                            ATerm t_19 = NULL;
                            t = string_to_int_0(t);
                            {
                              t_19 = t;
                              if(((s_19 != NULL) && (s_19 != t_19)))
                                _fail(t_19);
                              else
                                s_19 = t_19;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(s_19));
                              t = set_config_0(t);
                            }
                          }
                          t = w_14;
                          {
                            ATerm v_19 = NULL;
                            v_19 = t;
                            if(((u_19 != NULL) && (u_19 != v_19)))
                              _fail(v_19);
                            else
                              u_19 = v_19;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_19));
                          }
                          return(t);
                        }
                        ATerm c_3 (ATerm t)
                        {
                          t = term_x_14;
                          return(t);
                        }
                        t = ArgOption_3(t, w_2, b_3, c_3);
                        LocalPopChoice(v_14);
                      }
                    else
                      {
                        t = u_14;
                        {
                          ATerm y_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_3 (ATerm t)
                              {
                                ATerm w_19 = NULL;
                                w_19 = t;
                                q_18 :
                                if(!(match_string(w_19, "-v")))
                                  {
                                    if(!(match_string(w_19, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm e_3 (ATerm t)
                              {
                                t = term_e_15;
                                t = set_config_0(t);
                                t = term_f_15;
                                return(t);
                              }
                              ATerm f_3 (ATerm t)
                              {
                                t = term_k_15;
                                return(t);
                              }
                              t = Option_3(t, d_3, e_3, f_3);
                              LocalPopChoice(z_14);
                            }
                          else
                            {
                              t = y_14;
                              {
                                ATerm l_15 = t;
                                int m_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_3 (ATerm t)
                                    {
                                      ATerm x_19 = NULL;
                                      x_19 = t;
                                      r_18 :
                                      if(!(match_string(x_19, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_3 (ATerm t)
                                    {
                                      t = term_o_15;
                                      t = set_config_0(t);
                                      t = term_p_15;
                                      return(t);
                                    }
                                    ATerm j_3 (ATerm t)
                                    {
                                      t = term_q_15;
                                      return(t);
                                    }
                                    t = Option_3(t, g_3, h_3, j_3);
                                    LocalPopChoice(m_15);
                                  }
                                else
                                  {
                                    t = l_15;
                                    {
                                      ATerm m_3 (ATerm t)
                                      {
                                        ATerm y_19 = NULL;
                                        y_19 = t;
                                        y_18 :
                                        if(!(match_string(y_19, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm n_3 (ATerm t)
                                      {
                                        t = term_t_15;
                                        t = set_config_0(t);
                                        t = term_u_15;
                                        return(t);
                                      }
                                      ATerm o_3 (ATerm t)
                                      {
                                        t = term_v_15;
                                        return(t);
                                      }
                                      t = Option_3(t, m_3, n_3, o_3);
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
  ATerm h_20 = NULL;
  h_20 = t;
  t = SSL_table_destroy(not_null(h_20));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  s_20 = t;
  p_20 :
  if(((ATgetType(s_20) == AT_LIST) && ((ATermList) s_20 != ATempty)))
    {
      q_20 = ATgetFirst((ATermList) s_20);
      r_20 = (ATerm) ATgetNext((ATermList) s_20);
      {
        ATerm x_20 = NULL;
        t = not_null(r_20);
        {
          ATerm w_15;
          w_15 = t;
          {
            ATerm y_20 = NULL,a_21 = NULL,d_21 = NULL;
            ATerm x_15;
            x_15 = t;
            {
              ATerm z_20 = NULL;
              t = b_0(t);
              {
                z_20 = t;
                if(((y_20 != NULL) && (y_20 != z_20)))
                  _fail(z_20);
                else
                  y_20 = z_20;
              }
            }
            t = x_15;
            {
              ATerm b_21 = NULL;
              t = not_null(q_20);
              {
                t = a_0(t);
                {
                  b_21 = t;
                  if(((a_21 != NULL) && (a_21 != b_21)))
                    _fail(b_21);
                  else
                    a_21 = b_21;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_20)), not_null(a_21));
                {
                  d_21 = t;
                  if(((x_20 != NULL) && (x_20 != d_21)))
                    _fail(d_21);
                  else
                    x_20 = d_21;
                }
              }
            }
          }
          t = w_15;
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(x_20);
              return(t);
            }
            t = reverse_acc_2(t, a_0, q_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) s_20 == ATempty))
        {
          {
            t = term_s_8;
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
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_3);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym__2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      t = SSL_table_get(not_null(p_21), not_null(q_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_44 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Program_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      {
        ATerm n_22 = NULL,p_22 = NULL;
        ATerm o_22 = NULL;
        t = SSLgetAnnotations(not_null(j_22));
        {
          o_22 = t;
          if(((n_22 != NULL) && (n_22 != o_22)))
            _fail(o_22);
          else
            n_22 = o_22;
        }
        {
          t = not_null(k_22);
          {
            ATerm r_22 = NULL;
            t = q_44(t);
            {
              p_22 = t;
              {
                ATerm s_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_22)), not_null(n_22));
                {
                  s_22 = t;
                  if(((r_22 != NULL) && (r_22 != s_22)))
                    _fail(s_22);
                  else
                    r_22 = s_22;
                }
                t = not_null(r_22);
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
  ATerm e_23 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm f_23 = NULL;
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
      return(t);
    }
    t = Program_1(t, t_3);
    return(t);
  }
  t = option_defined_1(t, s_3);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm g_23 = NULL;
      ATerm h_23 = NULL;
      t = term_s_8;
      {
        ATerm v_3 (ATerm t)
        {
          t = not_null(e_23);
          return(t);
        }
        t = short_description_1(t, v_3);
        {
          t = concat_strings_0(t);
          {
            h_23 = t;
            if(((g_23 != NULL) && (g_23 != h_23)))
              _fail(h_23);
            else
              g_23 = h_23;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATempty, not_null(g_23)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, u_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATempty, term_b_16));
      {
        t = printnl_0(t);
        {
          t = term_c_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm i_23 = NULL;
                  i_23 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), term_d_16));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_3);
                {
                  ATerm e_4 (ATerm t)
                  {
                    ATerm k_23 = NULL;
                    ATerm l_23 = NULL;
                    t = term_s_8;
                    {
                      ATerm f_4 (ATerm t)
                      {
                        t = not_null(e_23);
                        return(t);
                      }
                      t = long_description_1(t, f_4);
                      {
                        t = concat_strings_0(t);
                        {
                          l_23 = t;
                          if(((k_23 != NULL) && (k_23 != l_23)))
                            _fail(l_23);
                          else
                            k_23 = l_23;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_23)), term_e_16));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_4);
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
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym__2))
    {
      t_23 = ATgetArgument(s_23, 0);
      u_23 = ATgetArgument(s_23, 1);
      {
        ATerm f_16;
        f_16 = t;
        t = SSL_printnl(not_null(t_23), not_null(u_23));
        t = f_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_44 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_Undefined_1))
    {
      e_24 = ATgetArgument(d_24, 0);
      {
        ATerm h_24 = NULL,j_24 = NULL;
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(d_24));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        {
          t = not_null(e_24);
          {
            ATerm l_24 = NULL;
            t = r_44(t);
            {
              j_24 = t;
              {
                ATerm m_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_24)), not_null(h_24));
                {
                  m_24 = t;
                  if(((l_24 != NULL) && (l_24 != m_24)))
                    _fail(m_24);
                  else
                    l_24 = m_24;
                }
                t = not_null(l_24);
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
ATerm option_defined_1 (ATerm t, ATerm i_55 (ATerm))
{
  t = fetch_1(t, i_55);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_Help_0))
    {
      ATerm y_24 = NULL,a_25 = NULL;
      ATerm g_16;
      g_16 = t;
      {
        ATerm z_24 = NULL;
        t = SSLgetAnnotations(not_null(w_24));
        {
          z_24 = t;
          if(((y_24 != NULL) && (y_24 != z_24)))
            _fail(z_24);
          else
            y_24 = z_24;
        }
      }
      t = g_16;
      {
        ATerm d_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_24));
        {
          d_25 = t;
          if(((a_25 != NULL) && (a_25 != d_25)))
            _fail(d_25);
          else
            a_25 = d_25;
        }
        t = not_null(a_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_75 (ATerm))
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_75(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm j_25 = NULL;
    j_25 = t;
    i_25 :
    if(!(match_string(j_25, "--help")))
      {
        if(!(match_string(j_25, "-h")))
          {
            if(!(match_string(j_25, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  t = Option_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(((ATgetType(p_25) == AT_LIST) && ((ATermList) p_25 != ATempty)))
    {
      q_25 = ATgetFirst((ATermList) p_25);
      r_25 = (ATerm) ATgetNext((ATermList) p_25);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_25)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_25)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm r_16;
  r_16 = t;
  {
    ATerm j_4 (ATerm t)
    {
      t = term_s_16;
      t = m_54(t);
      return(t);
    }
    t = try_1(t, j_4);
  }
  t = r_16;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm z_25 = NULL;
      ATerm t_16;
      t_16 = t;
      {
        ATerm x_25 = NULL;
        ATerm y_25 = NULL;
        y_25 = t;
        if(((x_25 != NULL) && (x_25 != y_25)))
          _fail(y_25);
        else
          x_25 = y_25;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_16, not_null(x_25));
          t = set_config_0(t);
        }
      }
      t = t_16;
      {
        ATerm a_26 = NULL;
        a_26 = t;
        if(((z_25 != NULL) && (z_25 != a_26)))
          _fail(a_26);
        else
          z_25 = a_26;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_25));
      }
      return(t);
    }
    ATerm l_4 (ATerm t)
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              {
                t = m_54(t);
                t = Cons_2(t, _id, l_4);
              }
            }
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_4, l_4);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_54 (ATerm))
{
  ATerm f_26 = NULL;
  ATerm g_17;
  g_17 = t;
  {
    t = term_j_17;
    t = table_put_0(t);
  }
  t = g_17;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_54(t);
          LocalPopChoice(l_17);
        }
      else
        {
          t = k_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_4);
    {
      ATerm s_4 (ATerm t)
      {
        ATerm m_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_c_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_17);
          }
        else
          {
            t = m_17;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm g_26 = NULL;
                  g_26 = t;
                  if(((f_26 != NULL) && (f_26 != g_26)))
                    _fail(g_26);
                  else
                    f_26 = g_26;
                  return(t);
                }
                t = Undefined_1(t, y_4);
                return(t);
              }
              t = option_defined_1(t, x_4);
              {
                ATerm v_17;
                v_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_26)), term_w_17));
                  t = printnl_0(t);
                }
                t = v_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_4);
      {
        ATerm z_17;
        z_17 = t;
        {
          t = term_j_13;
          t = table_destroy_0(t);
        }
        t = z_17;
      }
    }
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm k_26 = NULL;
  ATerm m_26 = NULL;
  k_26 = t;
  {
    ATerm a_18;
    a_18 = t;
    {
      ATerm n_26 = NULL;
      t = term_b_18;
      {
        n_26 = t;
        if(((m_26 != NULL) && (m_26 != n_26)))
          _fail(n_26);
        else
          m_26 = n_26;
      }
    }
    t = a_18;
    {
      t = SSL_open_file(not_null(k_26), not_null(m_26));
      t = SSL_close_file(not_null(k_26));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm q_26 (ATerm t)
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_26);
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        {
          t = Nil_0(t);
          t = a_67(t);
        }
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = f_18;
      {
        ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
        t_26 = t;
        s_26 :
        if(((ATgetType(t_26) == AT_LIST) && ((ATermList) t_26 != ATempty)))
          {
            u_26 = ATgetFirst((ATermList) t_26);
            v_26 = (ATerm) ATgetNext((ATermList) t_26);
            {
              t = not_null(u_26);
              {
                ATerm z_4 (ATerm t)
                {
                  t = not_null(v_26);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_4);
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
ATerm fetch_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm a_27 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_66, _id);
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        t = Cons_2(t, _id, a_27);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm c_27 = NULL;
  ATerm a_5 (ATerm t)
  {
    ATerm d_27 = NULL;
    t = w_66(t);
    {
      d_27 = t;
      if(((c_27 != NULL) && (c_27 != d_27)))
        _fail(d_27);
      else
        c_27 = d_27;
    }
    return(t);
  }
  t = fetch_1(t, a_5);
  t = not_null(c_27);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm))
{
  ATerm l_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_50(t);
      {
        ATerm b_5 (ATerm t)
        {
          ATerm h_27 = NULL,j_27 = NULL;
          ATerm p_18;
          p_18 = t;
          {
            ATerm i_27 = NULL;
            i_27 = t;
            if(((h_27 != NULL) && (h_27 != i_27)))
              _fail(i_27);
            else
              h_27 = i_27;
          }
          t = p_18;
          {
            ATerm k_27 = NULL;
            t = c_50(t);
            {
              k_27 = t;
              if(((j_27 != NULL) && (j_27 != k_27)))
                _fail(k_27);
              else
                j_27 = k_27;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_27)), term_t_10), not_null(h_27));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, b_5);
      }
      LocalPopChoice(o_18);
    }
  else
    {
      t = l_18;
      {
        t = term_q_11;
        {
          t = debug_1(t, c_50);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_27 = NULL,v_27 = NULL,w_27 = NULL;
  ATerm s_18;
  s_18 = t;
  {
    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
    x_27 = t;
    q_27 :
    if(match_cons(x_27, sym__3))
      {
        y_27 = ATgetArgument(x_27, 0);
        z_27 = ATgetArgument(x_27, 1);
        a_28 = ATgetArgument(x_27, 2);
        {
          if(((s_27 != NULL) && (s_27 != y_27)))
            _fail(y_27);
          else
            s_27 = y_27;
          {
            if(((v_27 != NULL) && (v_27 != z_27)))
              _fail(z_27);
            else
              v_27 = z_27;
            {
              if(((w_27 != NULL) && (w_27 != a_28)))
                _fail(a_28);
              else
                w_27 = a_28;
              t = SSL_table_put(not_null(s_27), not_null(v_27), not_null(w_27));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_18;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  f_28 :
  if(((ATermList) g_28 == ATempty))
    {
      {
        ATerm i_28 = NULL,k_28 = NULL;
        ATerm t_18;
        t_18 = t;
        {
          ATerm j_28 = NULL;
          t = SSLgetAnnotations(not_null(g_28));
          {
            j_28 = t;
            if(((i_28 != NULL) && (i_28 != j_28)))
              _fail(j_28);
            else
              i_28 = j_28;
          }
        }
        t = t_18;
        {
          ATerm l_28 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_28));
          {
            l_28 = t;
            if(((k_28 != NULL) && (k_28 != l_28)))
              _fail(l_28);
            else
              k_28 = l_28;
          }
          t = not_null(k_28);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm p_28 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = Cons_2(t, l_66, p_28);
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym__2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      {
        t = not_null(w_28);
        {
          ATerm e_5 (ATerm t)
          {
            ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
            z_28 = t;
            s_28 :
            if(match_cons(z_28, sym__2))
              {
                a_29 = ATgetArgument(z_28, 0);
                b_29 = ATgetArgument(z_28, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_28), not_null(a_29), not_null(b_29));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm l_50 (ATerm))
{
  ATerm w_18;
  w_18 = t;
  {
    ATerm k_29 = NULL;
    t = l_50(t);
    {
      ATerm f_5 (ATerm t)
      {
        ATerm i_5 (ATerm t)
        {
          t = term_x_18;
          return(t);
        }
        t = debug_1(t, i_5);
        return(t);
      }
      t = if_verbose2_1(t, f_5);
      {
        t = ReadFromFile_0(t);
        {
          ATerm l_29 = NULL;
          l_29 = t;
          if(((k_29 != NULL) && (k_29 != l_29)))
            _fail(l_29);
          else
            k_29 = l_29;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(k_29));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = w_18;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  t = SSL_implode_string(not_null(o_29));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  t = SSL_explode_string(not_null(s_29));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 (ATerm t)
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, x_29);
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm w_29 = NULL;
                  w_29 = t;
                  v_29 :
                  if(!(match_int(w_29, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm o_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, j_5, o_5);
              }
            }
          return(t);
        }
        t = x_29(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(((ATgetType(e_30) == AT_LIST) && ((ATermList) e_30 != ATempty)))
    {
      f_30 = ATgetFirst((ATermList) e_30);
      g_30 = (ATerm) ATgetNext((ATermList) e_30);
      {
        ATerm k_30 = NULL,m_30 = NULL;
        ATerm l_30 = NULL;
        t = SSLgetAnnotations(not_null(e_30));
        {
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
        }
        {
          t = not_null(f_30);
          {
            ATerm o_30 = NULL;
            t = h_49(t);
            {
              m_30 = t;
              {
                t = not_null(g_30);
                {
                  ATerm s_30 = NULL;
                  t = i_49(t);
                  {
                    o_30 = t;
                    {
                      ATerm t_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_30)), not_null(m_30)), not_null(k_30));
                      {
                        t_30 = t;
                        if(((s_30 != NULL) && (s_30 != t_30)))
                          _fail(t_30);
                        else
                          s_30 = t_30;
                      }
                      t = not_null(s_30);
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
ATerm parse_cmod_0 (ATerm t)
{
  ATerm i_31 = NULL,k_31 = NULL,q_31 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm j_31 = NULL;
      t = get_path_0(t);
      {
        j_31 = t;
        if(((i_31 != NULL) && (i_31 != j_31)))
          _fail(j_31);
        else
          i_31 = j_31;
      }
      return(t);
    }
    t = Cons_2(t, p_5, _id);
  }
  t = l_19;
  {
    ATerm m_19;
    m_19 = t;
    {
      ATerm l_31 = NULL;
      t = get_conf_pkgdatadir();
      {
        l_31 = t;
        if(((k_31 != NULL) && (k_31 != l_31)))
          _fail(l_31);
        else
          k_31 = l_31;
      }
    }
    t = m_19;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_31)), not_null(i_31));
          return(t);
        }
        ATerm b_6 (ATerm t)
        {
          t = term_n_19;
          return(t);
        }
        t = find_config_file_2(t, w_5, b_6);
        return(t);
      }
      t = import_config_file_1(t, q_5);
      {
        ATerm s_31 = NULL;
        ATerm c_6 (ATerm t)
        {
          ATerm z_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = io_options_0(t);
              LocalPopChoice(a_20);
            }
          else
            {
              t = z_19;
              {
                ATerm b_20 = t;
                int c_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_6 (ATerm t)
                    {
                      ATerm m_31 = NULL;
                      m_31 = t;
                      b_31 :
                      if(!(match_string(m_31, "-I")))
                        {
                          if(!(match_string(m_31, "--Include")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm e_6 (ATerm t)
                    {
                      ATerm d_20;
                      d_20 = t;
                      {
                        ATerm n_31 = NULL;
                        ATerm o_31 = NULL;
                        o_31 = t;
                        if(((n_31 != NULL) && (n_31 != o_31)))
                          _fail(o_31);
                        else
                          n_31 = o_31;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, not_null(n_31)));
                          t = extend_config_0(t);
                        }
                      }
                      t = d_20;
                      return(t);
                    }
                    ATerm h_6 (ATerm t)
                    {
                      t = term_e_20;
                      return(t);
                    }
                    t = ArgOption_3(t, d_6, e_6, h_6);
                    LocalPopChoice(c_20);
                  }
                else
                  {
                    t = b_20;
                    {
                      ATerm i_6 (ATerm t)
                      {
                        ATerm p_31 = NULL;
                        p_31 = t;
                        d_31 :
                        if(!(match_string(p_31, "-silent")))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      ATerm l_6 (ATerm t)
                      {
                        ATerm f_20;
                        f_20 = t;
                        {
                          t = term_l_14;
                          t = set_config_0(t);
                        }
                        t = f_20;
                        return(t);
                      }
                      ATerm m_6 (ATerm t)
                      {
                        t = term_g_20;
                        return(t);
                      }
                      t = Option_3(t, i_6, l_6, m_6);
                    }
                  }
              }
            }
          return(t);
        }
        t = parse_options_1(t, c_6);
        {
          q_31 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, term_i_20));
            {
              t = extend_config_0(t);
              {
                t = term_f_8;
                {
                  ATerm u_31 = NULL;
                  t = get_config_0(t);
                  {
                    s_31 = t;
                    {
                      ATerm n_6 (ATerm t)
                      {
                        ATerm s_6 (ATerm t)
                        {
                          t = term_j_20;
                          return(t);
                        }
                        t = debug_1(t, s_6);
                        return(t);
                      }
                      t = if_verbose2_1(t, n_6);
                      {
                        ATerm k_20 = t;
                        int l_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_g_8;
                            t = get_config_0(t);
                            LocalPopChoice(l_20);
                          }
                        else
                          {
                            t = k_20;
                            t = new_file_0(t);
                          }
                        {
                          u_31 = t;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), not_null(u_31));
                            {
                              t = parse_concrete_module_0(t);
                              {
                                ATerm m_20 = t;
                                int n_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_g_8;
                                    t = get_config_0(t);
                                    LocalPopChoice(n_20);
                                  }
                                else
                                  {
                                    t = m_20;
                                    {
                                      ATerm w_31 = NULL;
                                      t = not_null(u_31);
                                      {
                                        t = ReadFromFile_0(t);
                                        {
                                          ATerm o_20;
                                          o_20 = t;
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(u_31));
                                            t = rm_files_0(t);
                                          }
                                          t = o_20;
                                          {
                                            ATerm x_31 = NULL;
                                            x_31 = t;
                                            if(((w_31 != NULL) && (w_31 != x_31)))
                                              _fail(x_31);
                                            else
                                              w_31 = x_31;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_t_20, not_null(w_31));
                                              t = WriteToTextFile_0(t);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                {
                                  t = term_c_8;
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
  t = parse_cmod_0(t);
  return(t);
}
