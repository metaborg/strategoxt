#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_CUT_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_w_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_s_18;
ATerm term_m_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_r_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_q_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_j_7;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
void init_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_r_7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_o_8);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_q_10);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_p_6);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_6);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_w_8);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_w_8);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_w_8);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm));
ATerm crush_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_76 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_62 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm v_62 (ATerm));
ATerm debug_1 (ATerm, ATerm s_61 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm o_76 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm n_76 (ATerm));
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm assert_1 (ATerm, ATerm o_62 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_62 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm k_62 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_55 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_70 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_53 (ATerm));
ATerm map_1 (ATerm, ATerm d_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_53 (ATerm));
ATerm Program_1 (ATerm, ATerm r_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_45 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_70 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_54 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_53 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_50 (ATerm), ATerm v_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_53 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_53 (ATerm));
ATerm sdf_to_sig_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATempty, term_n_5));
  {
    t = printnl_0(t);
    {
      t = term_o_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_0 = NULL,h_1 = NULL,i_1 = NULL;
  t_0 = t;
  s_0 :
  if(match_cons(t_0, sym__2))
    {
      h_1 = ATgetArgument(t_0, 0);
      i_1 = ATgetArgument(t_0, 1);
      {
        ATerm p_5;
        p_5 = t;
        t = SSL_printnl(not_null(h_1), not_null(i_1));
        t = p_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  t = SSL_is_string(not_null(a_2));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      {
        ATerm w_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_0);
            LocalPopChoice(y_5);
          }
        else
          {
            t = w_5;
            {
              ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
              j_2 = t;
              i_2 :
              if(match_cons(j_2, sym_Path_1))
                {
                  k_2 = ATgetArgument(j_2, 0);
                  t = not_null(k_2);
                }
              else
                {
                  if(match_cons(j_2, sym_Var_1))
                    {
                      k_2 = ATgetArgument(j_2, 0);
                      {
                        t = not_null(k_2);
                        {
                          ATerm z_5 = t;
                          int a_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_6);
                            }
                          else
                            {
                              t = z_5;
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  t = term_b_6;
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
                      if(match_cons(j_2, sym_Prefix_2))
                        {
                          k_2 = ATgetArgument(j_2, 0);
                          l_2 = ATgetArgument(j_2, 1);
                          {
                            ATerm q_2 = NULL,s_2 = NULL;
                            ATerm c_6;
                            c_6 = t;
                            {
                              ATerm r_2 = NULL;
                              t = not_null(k_2);
                              {
                                t = eval_config_0(t);
                                {
                                  r_2 = t;
                                  if(((q_2 != NULL) && (q_2 != r_2)))
                                    _fail(r_2);
                                  else
                                    q_2 = r_2;
                                }
                              }
                            }
                            t = c_6;
                            {
                              ATerm t_2 = NULL;
                              t = not_null(l_2);
                              {
                                t = eval_config_0(t);
                                {
                                  t_2 = t;
                                  if(((s_2 != NULL) && (s_2 != t_2)))
                                    _fail(t_2);
                                  else
                                    s_2 = t_2;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_2), not_null(s_2));
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
  ATerm b_3 = NULL;
  b_3 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_6, not_null(b_3));
    {
      t = table_get_0(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_6;
            g_6 = t;
            {
              ATerm d_3 = NULL;
              ATerm e_3 = NULL;
              e_3 = t;
              if(((d_3 != NULL) && (d_3 != e_3)))
                _fail(e_3);
              else
                d_3 = e_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_6, not_null(b_3), not_null(d_3));
                t = table_put_0(t);
              }
            }
            t = g_6;
          }
          return(t);
        }
        t = try_1(t, e_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  t = SSL_TicksToSeconds(not_null(i_3));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_3), not_null(p_3));
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            t = SSL_addr(not_null(o_3), not_null(p_3));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm))
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_64(t);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
        w_3 = t;
        v_3 :
        if(((ATgetType(w_3) == AT_LIST) && ((ATermList) w_3 != ATempty)))
          {
            x_3 = ATgetFirst((ATermList) w_3);
            y_3 = (ATerm) ATgetNext((ATermList) w_3);
            {
              ATerm b_4 = NULL;
              ATerm c_4 = NULL;
              t = not_null(y_3);
              {
                t = foldr_2(t, n_64, o_64);
                {
                  c_4 = t;
                  if(((b_4 != NULL) && (b_4 != c_4)))
                    _fail(c_4);
                  else
                    b_4 = c_4;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(b_4));
                t = o_64(t);
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
ATerm crush_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm j_4 = NULL;
  ATerm l_4 = NULL;
  j_4 = t;
  {
    ATerm m_4 = NULL;
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
    t = not_null(j_4);
    {
      m_4 = t;
      {
        t = SSL_explode_term(not_null(m_4));
        {
          o_4 = t;
          i_4 :
          if(match_cons(o_4, sym__2))
            {
              p_4 = ATgetArgument(o_4, 0);
              q_4 = ATgetArgument(o_4, 1);
              if(((l_4 != NULL) && (l_4 != q_4)))
                _fail(q_4);
              else
                l_4 = q_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_4);
      t = foldr_2(t, f_66, g_66);
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
    ATerm f_0 (ATerm t)
    {
      t = term_p_6;
      return(t);
    }
    t = crush_2(t, f_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    ATerm q_6;
    q_6 = t;
    {
      ATerm v_4 = NULL;
      ATerm w_4 = NULL;
      t = term_t_6;
      {
        t = get_config_0(t);
        {
          w_4 = t;
          if(((v_4 != NULL) && (v_4 != w_4)))
            _fail(w_4);
          else
            v_4 = w_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), term_o_5);
        t = geq_0(t);
      }
    }
    t = q_6;
    t = k_76(t);
    return(t);
  }
  t = try_1(t, o_0);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym__2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      t = SSL_call(not_null(b_5), not_null(c_5));
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
ATerm xtc_command_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm i_5 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm j_5 = NULL;
    t = u_62(t);
    {
      t = xtc_find_warning_0(t);
      {
        j_5 = t;
        if(((i_5 != NULL) && (i_5 != j_5)))
          _fail(j_5);
        else
          i_5 = j_5;
      }
    }
  }
  t = u_6;
  {
    ATerm v_6;
    v_6 = t;
    {
      ATerm k_5 = NULL;
      ATerm l_5 = NULL;
      l_5 = t;
      if(((k_5 != NULL) && (k_5 != l_5)))
        _fail(l_5);
      else
        k_5 = l_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), not_null(k_5));
        t = call_0(t);
      }
    }
    t = v_6;
  }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, v_62, p_0);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm q_5 = NULL,s_5 = NULL;
    ATerm h_7;
    h_7 = t;
    {
      ATerm r_5 = NULL;
      t = s_61(t);
      {
        r_5 = t;
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
      }
    }
    t = h_7;
    {
      ATerm t_5 = NULL;
      t_5 = t;
      if(((s_5 != NULL) && (s_5 != t_5)))
        _fail(t_5);
      else
        s_5 = t_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_5)), not_null(q_5)));
        t = printnl_0(t);
      }
    }
  }
  t = z_6;
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  t = SSL_table_keys(not_null(x_5));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm f_6 = NULL;
        ATerm h_6 = NULL;
        f_6 = t;
        {
          ATerm i_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(f_6));
          {
            t = table_get_0(t);
            {
              i_6 = t;
              if(((h_6 != NULL) && (h_6 != i_6)))
                _fail(i_6);
              else
                h_6 = i_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(h_6));
        }
        return(t);
      }
      t = map_1(t, q_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm i_7;
    i_7 = t;
    {
      ATerm n_6 = NULL;
      ATerm o_6 = NULL;
      t = term_t_6;
      {
        t = get_config_0(t);
        {
          o_6 = t;
          if(((n_6 != NULL) && (n_6 != o_6)))
            _fail(o_6);
          else
            n_6 = o_6;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), term_j_7);
        t = geq_0(t);
      }
    }
    t = i_7;
    t = o_76(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_7;
  k_7 = t;
  {
    ATerm r_6 = NULL;
    ATerm s_6 = NULL;
    s_6 = t;
    if(((r_6 != NULL) && (r_6 != s_6)))
      _fail(s_6);
    else
      r_6 = s_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_5, not_null(r_6));
      t = printnl_0(t);
    }
  }
  t = k_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_6 = NULL;
  ATerm a_7 = NULL,b_7 = NULL;
  y_6 = t;
  {
    ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_6)));
    {
      t = table_get_0(t);
      {
        c_7 = t;
        w_6 :
        if(((ATgetType(c_7) == AT_LIST) && ((ATermList) c_7 != ATempty)))
          {
            d_7 = ATgetFirst((ATermList) c_7);
            g_7 = (ATerm) ATgetNext((ATermList) c_7);
            x_6 :
            if(match_cons(d_7, sym__2))
              {
                e_7 = ATgetArgument(d_7, 0);
                f_7 = ATgetArgument(d_7, 1);
                {
                  if(((a_7 != NULL) && (a_7 != e_7)))
                    _fail(e_7);
                  else
                    a_7 = e_7;
                  if(((b_7 != NULL) && (b_7 != f_7)))
                    _fail(f_7);
                  else
                    b_7 = f_7;
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
    t = not_null(b_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym__2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm s_7 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_7)));
        {
          t = table_get_0(t);
          {
            ATerm u_0 (ATerm t)
            {
              ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
              t_7 = t;
              l_7 :
              if(match_cons(t_7, sym__2))
                {
                  u_7 = ATgetArgument(t_7, 0);
                  v_7 = ATgetArgument(t_7, 1);
                  {
                    if(((p_7 != NULL) && (p_7 != u_7)))
                      _fail(u_7);
                    else
                      p_7 = u_7;
                    if(((s_7 != NULL) && (s_7 != v_7)))
                      _fail(v_7);
                    else
                      s_7 = v_7;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_0);
          }
        }
        t = not_null(s_7);
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
  ATerm v_0 (ATerm t)
  {
    t = term_w_7;
    {
      t = table_get_0(t);
      {
        ATerm w_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, w_0);
      }
    }
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        t = not_null(e_8);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
            h_8 = t;
            a_8 :
            if(match_cons(h_8, sym__2))
              {
                i_8 = ATgetArgument(h_8, 0);
                j_8 = ATgetArgument(h_8, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_8), not_null(i_8), not_null(j_8));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym__2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      {
        ATerm x_7;
        x_7 = t;
        {
          ATerm y_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_8), not_null(s_8));
              LocalPopChoice(z_7);
            }
          else
            {
              t = y_7;
              t = SSL_gtr(not_null(r_8), not_null(s_8));
            }
        }
        t = x_7;
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
  ATerm y_8 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
      z_8 = t;
      x_8 :
      if(match_cons(z_8, sym__2))
        {
          a_9 = ATgetArgument(z_8, 0);
          b_9 = ATgetArgument(z_8, 1);
          {
            if(((y_8 != NULL) && (y_8 != a_9)))
              _fail(a_9);
            else
              y_8 = a_9;
            if(((y_8 != NULL) && (y_8 != b_9)))
              _fail(b_9);
            else
              y_8 = b_9;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm k_8;
    k_8 = t;
    {
      ATerm e_9 = NULL;
      ATerm f_9 = NULL;
      t = term_t_6;
      {
        t = get_config_0(t);
        {
          f_9 = t;
          if(((e_9 != NULL) && (e_9 != f_9)))
            _fail(f_9);
          else
            e_9 = f_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), term_l_8);
        t = geq_0(t);
      }
    }
    t = k_8;
    t = n_76(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm j_9 = NULL;
  ATerm l_9 = NULL;
  j_9 = t;
  {
    ATerm m_8 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_9)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_8;
      }
    {
      ATerm n_8;
      n_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_7, term_o_8, not_null(j_9));
        t = table_put_0(t);
      }
      t = n_8;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            t = term_t_8;
            return(t);
          }
          t = debug_1(t, a_1);
          return(t);
        }
        t = if_verbose4_1(t, z_0);
        {
          ATerm u_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(v_8);
            }
          else
            {
              t = u_8;
              t = (ATerm) ATempty;
            }
          {
            ATerm m_9 = NULL;
            m_9 = t;
            if(((l_9 != NULL) && (l_9 != m_9)))
              _fail(m_9);
            else
              l_9 = m_9;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_q_7, not_null(l_9));
              {
                t = table_putlist_0(t);
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_q_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_9)), term_w_8);
                  t = table_put_0(t);
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
  ATerm q_9 = NULL;
  q_9 = t;
  t = SSL_getenv(not_null(q_9));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_9;
      t = get_config_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_9;
            t = getenv_0(t);
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      t = term_n_9;
      return(t);
    }
    t = debug_1(t, c_1);
    return(t);
  }
  t = if_verbose5_1(t, b_1);
  {
    ATerm o_9;
    o_9 = t;
    {
      ATerm p_9 = t;
      int r_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_9;
          t = table_get_0(t);
          LocalPopChoice(r_9);
        }
      else
        {
          t = p_9;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = o_9;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm e_1 (ATerm t)
        {
          t = term_t_9;
          return(t);
        }
        t = debug_1(t, e_1);
        return(t);
      }
      t = if_verbose5_1(t, d_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
        {
          t = term_z_9;
          return(t);
        }
        t = debug_1(t, g_1);
        return(t);
      }
      t = if_verbose5_1(t, f_1);
      {
        t = xtc_load_0(t);
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm j_1 (ATerm t)
            {
              ATerm k_1 (ATerm t)
              {
                t = term_z_9;
                return(t);
              }
              t = debug_1(t, k_1);
              return(t);
            }
            t = if_verbose5_1(t, j_1);
          }
        }
      }
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm u_9 = NULL;
        ATerm v_9 = NULL;
        v_9 = t;
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), not_null(u_9)), term_c_10);
          {
            t = error_0(t);
            {
              ATerm l_1 (ATerm t)
              {
                t = term_q_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      t = term_e_10;
                      return(t);
                    }
                    t = debug_1(t, m_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, l_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  t = SSL_ReadFromFile(not_null(y_9));
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  f_10 :
  if(match_cons(g_10, sym_stdin_0))
    {
      ATerm i_10 = NULL;
      ATerm j_10 = NULL;
      t = term_k_10;
      {
        t = ReadFromFile_0(t);
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
      }
      t = not_null(i_10);
    }
  else
    {
      if(match_cons(g_10, sym_FILE_1))
        {
          h_10 = ATgetArgument(g_10, 0);
          {
            ATerm l_10 = NULL;
            ATerm m_10 = NULL;
            t = not_null(h_10);
            {
              t = ReadFromFile_0(t);
              {
                m_10 = t;
                if(((l_10 != NULL) && (l_10 != m_10)))
                  _fail(m_10);
                else
                  l_10 = m_10;
              }
            }
            t = not_null(l_10);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      t = SSL_WriteToTextFile(not_null(u_10), not_null(v_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm b_11 = NULL;
  ATerm d_11 = NULL;
  b_11 = t;
  {
    ATerm e_11 = NULL;
    t = xtc_new_file_0(t);
    {
      e_11 = t;
      {
        if(((d_11 != NULL) && (d_11 != e_11)))
          _fail(e_11);
        else
          d_11 = e_11;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(b_11));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_11));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_63, e_63);
    t = read_from_0(t);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
        ATerm n_10;
        n_10 = t;
        {
          ATerm u_11 = NULL;
          ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
          t = o_62(t);
          {
            u_11 = t;
            {
              if(((r_11 != NULL) && (r_11 != u_11)))
                _fail(u_11);
              else
                r_11 = u_11;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), not_null(n_11), not_null(o_11));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_q_10);
                        t = table_get_0(t);
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_11 = t;
                      k_11 :
                      if(((ATgetType(v_11) == AT_LIST) && ((ATermList) v_11 != ATempty)))
                        {
                          w_11 = ATgetFirst((ATermList) v_11);
                          x_11 = (ATerm) ATgetNext((ATermList) v_11);
                          {
                            if(((s_11 != NULL) && (s_11 != w_11)))
                              _fail(w_11);
                            else
                              s_11 = w_11;
                            {
                              if(((t_11 != NULL) && (t_11 != x_11)))
                                _fail(x_11);
                              else
                                t_11 = x_11;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_11), term_q_10, (ATerm) ATinsert(CheckATermList(not_null(t_11)), (ATerm) ATinsert(CheckATermList(not_null(s_11)), not_null(n_11))));
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
        t = n_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm d_12 = NULL;
  ATerm f_12 = NULL;
  d_12 = t;
  {
    ATerm r_10;
    r_10 = t;
    {
      ATerm g_12 = NULL;
      t = term_w_10;
      {
        g_12 = t;
        if(((f_12 != NULL) && (f_12 != g_12)))
          _fail(g_12);
        else
          f_12 = g_12;
      }
    }
    t = r_10;
    {
      t = SSL_open_file(not_null(d_12), not_null(f_12));
      t = SSL_close_file(not_null(d_12));
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        t = not_null(m_12);
        {
          ATerm n_1 (ATerm t)
          {
            t = not_null(n_12);
            return(t);
          }
          t = at_end_1(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym__2))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      {
        ATerm d_13 = NULL,f_13 = NULL;
        ATerm e_13 = NULL;
        t = SSLgetAnnotations(not_null(x_12));
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
        {
          t = not_null(y_12);
          {
            ATerm h_13 = NULL;
            t = i_44(t);
            {
              f_13 = t;
              {
                t = not_null(z_12);
                {
                  ATerm j_13 = NULL;
                  t = j_44(t);
                  {
                    h_13 = t;
                    {
                      ATerm k_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_13), not_null(h_13)), not_null(d_13));
                      {
                        k_13 = t;
                        if(((j_13 != NULL) && (j_13 != k_13)))
                          _fail(k_13);
                        else
                          j_13 = k_13;
                      }
                      t = not_null(j_13);
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
  ATerm r_13 = NULL;
  ATerm s_13 = NULL;
  t = term_w_8;
  {
    t = new_0(t);
    {
      s_13 = t;
      if(((r_13 != NULL) && (r_13 != s_13)))
        _fail(s_13);
      else
        r_13 = s_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_13), term_x_10);
    {
      t = conc_strings_0(t);
      {
        ATerm o_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, o_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm w_13 = NULL;
  t = new_file_0(t);
  {
    w_13 = t;
    {
      ATerm y_10;
      y_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_w_8);
        {
          ATerm p_1 (ATerm t)
          {
            t = term_z_10;
            return(t);
          }
          t = assert_1(t, p_1);
        }
      }
      t = y_10;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_stdin_0))
    {
      ATerm i_14 = NULL;
      ATerm j_14 = NULL;
      ATerm k_14 = NULL;
      t = xtc_new_file_0(t);
      {
        j_14 = t;
        {
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
          {
            ATerm l_14 = NULL;
            t = n_0(t);
            {
              l_14 = t;
              if(((k_14 != NULL) && (k_14 != l_14)))
                _fail(l_14);
              else
                k_14 = l_14;
            }
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_14)), not_null(i_14)), term_a_11);
              t = xtc_command_1(t, m_0);
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_14));
    }
  else
    {
      if(match_cons(g_14, sym_FILE_1))
        {
          h_14 = ATgetArgument(g_14, 0);
          {
            ATerm n_14 = NULL;
            ATerm o_14 = NULL;
            t = not_null(h_14);
            {
              ATerm p_14 = NULL;
              t = xtc_new_file_0(t);
              {
                o_14 = t;
                {
                  if(((n_14 != NULL) && (n_14 != o_14)))
                    _fail(o_14);
                  else
                    n_14 = o_14;
                  {
                    ATerm q_14 = NULL;
                    t = n_0(t);
                    {
                      q_14 = t;
                      if(((p_14 != NULL) && (p_14 != q_14)))
                        _fail(q_14);
                      else
                        p_14 = q_14;
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(p_14)), not_null(n_14)), term_a_11), not_null(h_14)), term_c_11);
                      t = xtc_command_1(t, m_0);
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_14));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, w_62, x_62);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = xtc_transform_term_2(t, w_62, x_62);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(((ATgetType(z_14) == AT_LIST) && ((ATermList) z_14 != ATempty)))
    {
      a_15 = ATgetFirst((ATermList) z_14);
      b_15 = (ATerm) ATgetNext((ATermList) z_14);
      t = not_null(b_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym__2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm h_11;
        h_11 = t;
        {
          ATerm n_15 = NULL;
          ATerm o_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(k_15));
          {
            ATerm i_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(j_11);
              }
            else
              {
                t = i_11;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_15), not_null(k_15), not_null(n_15));
            t = table_put_0(t);
          }
        }
        t = h_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    ATerm y_15 = NULL;
    ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
    t = l_62(t);
    {
      y_15 = t;
      {
        if(((w_15 != NULL) && (w_15 != y_15)))
          _fail(y_15);
        else
          w_15 = y_15;
        {
          ATerm q_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), term_q_10);
              t = table_get_0(t);
              LocalPopChoice(y_11);
            }
          else
            {
              t = q_11;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_15 = t;
            u_15 :
            if(((ATgetType(z_15) == AT_LIST) && ((ATermList) z_15 != ATempty)))
              {
                a_16 = ATgetFirst((ATermList) z_15);
                b_16 = (ATerm) ATgetNext((ATermList) z_15);
                {
                  if(((x_15 != NULL) && (x_15 != a_16)))
                    _fail(a_16);
                  else
                    x_15 = a_16;
                  {
                    if(((v_15 != NULL) && (v_15 != b_16)))
                      _fail(b_16);
                    else
                      v_15 = b_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_15), term_q_10, not_null(v_15));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_15);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm c_16 = NULL;
                              c_16 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), not_null(c_16));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, q_1);
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
  t = p_11;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = SSL_remove(not_null(i_16));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_62 (ATerm))
{
  ATerm n_16 = NULL;
  ATerm z_11;
  z_11 = t;
  {
    ATerm o_16 = NULL;
    ATerm p_16 = NULL;
    t = k_62(t);
    {
      o_16 = t;
      {
        if(((n_16 != NULL) && (n_16 != o_16)))
          _fail(o_16);
        else
          n_16 = o_16;
        {
          ATerm q_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), term_q_10);
          {
            ATerm a_12 = t;
            int b_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_12);
              }
            else
              {
                t = a_12;
                t = (ATerm) ATempty;
              }
            {
              q_16 = t;
              if(((p_16 != NULL) && (p_16 != q_16)))
                _fail(q_16);
              else
                p_16 = q_16;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_16), term_q_10, (ATerm) ATinsert(CheckATermList(not_null(p_16)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_11;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = term_z_10;
    return(t);
  }
  t = begin_scope_1(t, r_1);
  {
    t = t_62(t);
    {
      ATerm c_12;
      c_12 = t;
      {
        ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
        ATerm e_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_12;
            t = table_get_0(t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = e_12;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          x_16 = t;
          u_16 :
          if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
            {
              y_16 = ATgetFirst((ATermList) x_16);
              z_16 = (ATerm) ATgetNext((ATermList) x_16);
              {
                if(((w_16 != NULL) && (w_16 != y_16)))
                  _fail(y_16);
                else
                  w_16 = y_16;
                {
                  if(((v_16 != NULL) && (v_16 != z_16)))
                    _fail(z_16);
                  else
                    v_16 = z_16;
                  {
                    t = not_null(w_16);
                    {
                      ATerm s_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, s_1);
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
      t = c_12;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_z_10;
          return(t);
        }
        t = end_scope_1(t, t_1);
      }
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm d_17 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm e_17 = NULL,f_17 = NULL;
      e_17 = t;
      c_17 :
      if(match_cons(e_17, sym_Program_1))
        {
          f_17 = ATgetArgument(e_17, 0);
          if(((d_17 != NULL) && (d_17 != f_17)))
            _fail(f_17);
          else
            d_17 = f_17;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, u_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_12), not_null(d_17)), term_o_12));
      {
        t = printnl_0(t);
        {
          t = term_o_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_12;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_Version_0))
    {
      ATerm n_17 = NULL,p_17 = NULL;
      ATerm q_12;
      q_12 = t;
      {
        ATerm o_17 = NULL;
        t = SSLgetAnnotations(not_null(l_17));
        {
          o_17 = t;
          if(((n_17 != NULL) && (n_17 != o_17)))
            _fail(o_17);
          else
            n_17 = o_17;
        }
      }
      t = q_12;
      {
        ATerm q_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
        t = not_null(p_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_55 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_1);
  t = u_55(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  t = SSL_string_to_int(not_null(v_17));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  d_18 = t;
  b_18 :
  if(match_string(d_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_18) == AT_LIST) && ((ATermList) d_18 != ATempty)))
        {
          e_18 = ATgetFirst((ATermList) d_18);
          f_18 = (ATerm) ATgetNext((ATermList) d_18);
          c_18 :
          if(((ATgetType(f_18) == AT_LIST) && ((ATermList) f_18 != ATempty)))
            {
              g_18 = ATgetFirst((ATermList) f_18);
              h_18 = (ATerm) ATgetNext((ATermList) f_18);
              {
                ATerm t_18 = NULL;
                ATerm v_12;
                v_12 = t;
                {
                  t = not_null(e_18);
                  t = j_0(t);
                }
                t = v_12;
                {
                  ATerm u_18 = NULL;
                  t = not_null(g_18);
                  {
                    t = k_0(t);
                    {
                      u_18 = t;
                      if(((t_18 != NULL) && (t_18 != u_18)))
                        _fail(u_18);
                      else
                        t_18 = u_18;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_18)), not_null(t_18));
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
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm q_19 = NULL;
        q_19 = t;
        a_19 :
        if(!(match_string(q_19, "-i")))
          {
            if(!(match_string(q_19, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        ATerm t_19 = NULL;
        ATerm c_13;
        c_13 = t;
        {
          ATerm r_19 = NULL;
          ATerm s_19 = NULL;
          s_19 = t;
          if(((r_19 != NULL) && (r_19 != s_19)))
            _fail(s_19);
          else
            r_19 = s_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(r_19));
            t = set_config_0(t);
          }
        }
        t = c_13;
        {
          ATerm u_19 = NULL;
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_19));
        }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_g_13;
        return(t);
      }
      t = ArgOption_3(t, w_1, x_1, y_1);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm i_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              ATerm v_19 = NULL;
              v_19 = t;
              e_19 :
              if(!(match_string(v_19, "-o")))
                {
                  if(!(match_string(v_19, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm y_19 = NULL;
              ATerm m_13;
              m_13 = t;
              {
                ATerm w_19 = NULL;
                ATerm x_19 = NULL;
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(w_19));
                  t = set_config_0(t);
                }
              }
              t = m_13;
              {
                ATerm z_19 = NULL;
                z_19 = t;
                if(((y_19 != NULL) && (y_19 != z_19)))
                  _fail(z_19);
                else
                  y_19 = z_19;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_19));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_n_13;
              return(t);
            }
            t = ArgOption_3(t, z_1, b_2, c_2);
            LocalPopChoice(l_13);
          }
        else
          {
            t = i_13;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm a_20 = NULL;
                    a_20 = t;
                    h_19 :
                    if(!(match_string(a_20, "-S")))
                      {
                        if(!(match_string(a_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_q_13;
                    t = set_config_0(t);
                    t = term_t_13;
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_u_13;
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm v_13 = t;
                    int x_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm b_20 = NULL;
                          b_20 = t;
                          i_19 :
                          if(!(match_string(b_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm e_20 = NULL;
                          ATerm y_13;
                          y_13 = t;
                          {
                            ATerm c_20 = NULL;
                            ATerm d_20 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_20 = t;
                              if(((c_20 != NULL) && (c_20 != d_20)))
                                _fail(d_20);
                              else
                                c_20 = d_20;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_6, not_null(c_20));
                              t = set_config_0(t);
                            }
                          }
                          t = y_13;
                          {
                            ATerm f_20 = NULL;
                            f_20 = t;
                            if(((e_20 != NULL) && (e_20 != f_20)))
                              _fail(f_20);
                            else
                              e_20 = f_20;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_20));
                          }
                          return(t);
                        }
                        ATerm m_2 (ATerm t)
                        {
                          t = term_z_13;
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, m_2);
                        LocalPopChoice(x_13);
                      }
                    else
                      {
                        t = v_13;
                        {
                          ATerm a_14 = t;
                          int b_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_2 (ATerm t)
                              {
                                ATerm g_20 = NULL;
                                g_20 = t;
                                l_19 :
                                if(!(match_string(g_20, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                ATerm c_14;
                                c_14 = t;
                                {
                                  ATerm h_20 = NULL;
                                  ATerm i_20 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    i_20 = t;
                                    if(((h_20 != NULL) && (h_20 != i_20)))
                                      _fail(i_20);
                                    else
                                      h_20 = i_20;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_d_14, not_null(h_20));
                                    t = set_config_0(t);
                                  }
                                }
                                t = c_14;
                                return(t);
                              }
                              ATerm p_2 (ATerm t)
                              {
                                t = term_e_14;
                                return(t);
                              }
                              t = ArgOption_3(t, n_2, o_2, p_2);
                              LocalPopChoice(b_14);
                            }
                          else
                            {
                              t = a_14;
                              {
                                ATerm m_14 = t;
                                int r_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_2 (ATerm t)
                                    {
                                      ATerm j_20 = NULL;
                                      j_20 = t;
                                      n_19 :
                                      if(!(match_string(j_20, "-v")))
                                        {
                                          if(!(match_string(j_20, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm v_2 (ATerm t)
                                    {
                                      t = term_t_14;
                                      t = set_config_0(t);
                                      t = term_u_14;
                                      return(t);
                                    }
                                    ATerm w_2 (ATerm t)
                                    {
                                      t = term_v_14;
                                      return(t);
                                    }
                                    t = Option_3(t, u_2, v_2, w_2);
                                    LocalPopChoice(r_14);
                                  }
                                else
                                  {
                                    t = m_14;
                                    {
                                      ATerm w_14 = t;
                                      int x_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            ATerm k_20 = NULL;
                                            k_20 = t;
                                            o_19 :
                                            if(!(match_string(k_20, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_2 (ATerm t)
                                          {
                                            t = term_d_15;
                                            t = set_config_0(t);
                                            t = term_e_15;
                                            return(t);
                                          }
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_f_15;
                                            return(t);
                                          }
                                          t = Option_3(t, x_2, y_2, z_2);
                                          LocalPopChoice(x_14);
                                        }
                                      else
                                        {
                                          t = w_14;
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              ATerm l_20 = NULL;
                                              l_20 = t;
                                              p_19 :
                                              if(!(match_string(l_20, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = term_l_15;
                                              t = set_config_0(t);
                                              t = term_m_15;
                                              return(t);
                                            }
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = term_p_15;
                                              return(t);
                                            }
                                            t = Option_3(t, a_3, c_3, f_3);
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
  ATerm u_20 = NULL;
  u_20 = t;
  t = SSL_table_destroy(not_null(u_20));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_exit(not_null(y_20));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_implode_string(not_null(c_21));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm f_21 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_21);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
          t = Nil_0(t);
          t = s_70(t);
        }
      }
    return(t);
  }
  t = f_21(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
        o_21 = t;
        n_21 :
        if(((ATgetType(o_21) == AT_LIST) && ((ATermList) o_21 != ATempty)))
          {
            p_21 = ATgetFirst((ATermList) o_21);
            q_21 = (ATerm) ATgetNext((ATermList) o_21);
            {
              t = not_null(p_21);
              {
                ATerm g_3 (ATerm t)
                {
                  t = not_null(q_21);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_3);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  t = SSL_explode_string(not_null(x_21));
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
ATerm long_description_1 (ATerm t, ATerm r_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm a_22 (ATerm t)
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = Cons_2(t, d_70, a_22);
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  j_22 = t;
  g_22 :
  if(((ATgetType(j_22) == AT_LIST) && ((ATermList) j_22 != ATempty)))
    {
      h_22 = ATgetFirst((ATermList) j_22);
      i_22 = (ATerm) ATgetNext((ATermList) j_22);
      {
        ATerm m_22 = NULL;
        t = not_null(i_22);
        {
          ATerm f_16;
          f_16 = t;
          {
            ATerm n_22 = NULL,p_22 = NULL,r_22 = NULL;
            ATerm g_16;
            g_16 = t;
            {
              ATerm o_22 = NULL;
              t = i_0(t);
              {
                o_22 = t;
                if(((n_22 != NULL) && (n_22 != o_22)))
                  _fail(o_22);
                else
                  n_22 = o_22;
              }
            }
            t = g_16;
            {
              ATerm q_22 = NULL;
              t = not_null(h_22);
              {
                t = h_0(t);
                {
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_22)), not_null(p_22));
                {
                  r_22 = t;
                  if(((m_22 != NULL) && (m_22 != r_22)))
                    _fail(r_22);
                  else
                    m_22 = r_22;
                }
              }
            }
          }
          t = f_16;
          {
            ATerm h_3 (ATerm t)
            {
              t = not_null(m_22);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_22 == ATempty))
        {
          {
            t = term_w_8;
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
  ATerm j_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, j_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_45 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Program_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm g_23 = NULL,i_23 = NULL;
        ATerm h_23 = NULL;
        t = SSLgetAnnotations(not_null(c_23));
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
        {
          t = not_null(d_23);
          {
            ATerm k_23 = NULL;
            t = r_45(t);
            {
              i_23 = t;
              {
                ATerm l_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_23)), not_null(g_23));
                {
                  l_23 = t;
                  if(((k_23 != NULL) && (k_23 != l_23)))
                    _fail(l_23);
                  else
                    k_23 = l_23;
                }
                t = not_null(k_23);
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
  ATerm w_23 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm x_23 = NULL;
      x_23 = t;
      if(((w_23 != NULL) && (w_23 != x_23)))
        _fail(x_23);
      else
        w_23 = x_23;
      return(t);
    }
    t = Program_1(t, l_3);
    return(t);
  }
  t = option_defined_1(t, k_3);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm y_23 = NULL;
      ATerm z_23 = NULL;
      t = term_w_8;
      {
        ATerm r_3 (ATerm t)
        {
          t = not_null(w_23);
          return(t);
        }
        t = short_description_1(t, r_3);
        {
          t = concat_strings_0(t);
          {
            z_23 = t;
            if(((y_23 != NULL) && (y_23 != z_23)))
              _fail(z_23);
            else
              y_23 = z_23;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATempty, not_null(y_23)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATempty, term_h_16));
      {
        t = printnl_0(t);
        {
          t = term_l_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm a_24 = NULL;
                  a_24 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), term_m_16));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_3);
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm c_24 = NULL;
                    ATerm d_24 = NULL;
                    t = term_w_8;
                    {
                      ATerm u_3 (ATerm t)
                      {
                        t = not_null(w_23);
                        return(t);
                      }
                      t = long_description_1(t, u_3);
                      {
                        t = concat_strings_0(t);
                        {
                          d_24 = t;
                          if(((c_24 != NULL) && (c_24 != d_24)))
                            _fail(d_24);
                          else
                            c_24 = d_24;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_24)), term_r_16));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_3);
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
ATerm Undefined_1 (ATerm t, ATerm s_45 (ATerm))
{
  ATerm n_24 = NULL,o_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_Undefined_1))
    {
      o_24 = ATgetArgument(n_24, 0);
      {
        ATerm t_24 = NULL,w_24 = NULL;
        ATerm u_24 = NULL;
        t = SSLgetAnnotations(not_null(n_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
        {
          t = not_null(o_24);
          {
            ATerm z_24 = NULL;
            t = s_45(t);
            {
              w_24 = t;
              {
                ATerm a_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_24)), not_null(t_24));
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
ATerm fetch_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm f_25 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_70, _id);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, _id, f_25);
      }
    return(t);
  }
  t = f_25(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_54 (ATerm))
{
  t = fetch_1(t, v_54);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Help_0))
    {
      ATerm p_25 = NULL,r_25 = NULL;
      ATerm a_17;
      a_17 = t;
      {
        ATerm q_25 = NULL;
        t = SSLgetAnnotations(not_null(k_25));
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
      }
      t = a_17;
      {
        ATerm s_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        t = not_null(r_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm b_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_72(t);
      LocalPopChoice(g_17);
    }
  else
    {
      t = b_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym__2))
    {
      z_25 = ATgetArgument(y_25, 0);
      a_26 = ATgetArgument(y_25, 1);
      t = SSL_table_get(not_null(z_25), not_null(a_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym__3))
    {
      i_26 = ATgetArgument(h_26, 0);
      j_26 = ATgetArgument(h_26, 1);
      k_26 = ATgetArgument(h_26, 2);
      {
        ATerm h_17;
        h_17 = t;
        {
          ATerm o_26 = NULL;
          ATerm p_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), not_null(j_26));
          {
            ATerm i_17 = t;
            int j_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_17);
              }
            else
              {
                t = i_17;
                t = (ATerm) ATempty;
              }
            {
              p_26 = t;
              if(((o_26 != NULL) && (o_26 != p_26)))
                _fail(p_26);
              else
                o_26 = p_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_26), not_null(j_26), (ATerm) ATinsert(CheckATermList(not_null(o_26)), not_null(k_26)));
            t = table_put_0(t);
          }
        }
        t = h_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm t_26 = NULL;
  ATerm u_26 = NULL;
  t = term_w_8;
  {
    t = v_53(t);
    {
      u_26 = t;
      if(((t_26 != NULL) && (t_26 != u_26)))
        _fail(u_26);
      else
        t_26 = u_26;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(t_26));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_string(a_27, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_27) == AT_LIST) && ((ATermList) a_27 != ATempty)))
        {
          b_27 = ATgetFirst((ATermList) a_27);
          c_27 = (ATerm) ATgetNext((ATermList) a_27);
          {
            ATerm f_27 = NULL;
            ATerm m_17;
            m_17 = t;
            {
              t = not_null(b_27);
              t = a_0(t);
            }
            t = m_17;
            {
              ATerm g_27 = NULL;
              t = term_w_8;
              {
                t = b_0(t);
                {
                  g_27 = t;
                  if(((f_27 != NULL) && (f_27 != g_27)))
                    _fail(g_27);
                  else
                    f_27 = g_27;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_27)), not_null(f_27));
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
  ATerm z_3 (ATerm t)
  {
    ATerm l_27 = NULL;
    l_27 = t;
    k_27 :
    if(!(match_string(l_27, "--help")))
      {
        if(!(match_string(l_27, "-h")))
          {
            if(!(match_string(l_27, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  t = Option_3(t, z_3, a_4, d_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  o_27 = t;
  n_27 :
  if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
    {
      p_27 = ATgetFirst((ATermList) o_27);
      q_27 = (ATerm) ATgetNext((ATermList) o_27);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_27)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_50 (ATerm), ATerm v_50 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(((ATgetType(a_28) == AT_LIST) && ((ATermList) a_28 != ATempty)))
    {
      b_28 = ATgetFirst((ATermList) a_28);
      c_28 = (ATerm) ATgetNext((ATermList) a_28);
      {
        ATerm g_28 = NULL,i_28 = NULL;
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(a_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
        {
          t = not_null(b_28);
          {
            ATerm k_28 = NULL;
            t = u_50(t);
            {
              i_28 = t;
              {
                t = not_null(c_28);
                {
                  ATerm m_28 = NULL;
                  t = v_50(t);
                  {
                    k_28 = t;
                    {
                      ATerm n_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_28)), not_null(i_28)), not_null(g_28));
                      {
                        n_28 = t;
                        if(((m_28 != NULL) && (m_28 != n_28)))
                          _fail(n_28);
                        else
                          m_28 = n_28;
                      }
                      t = not_null(m_28);
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
  ATerm x_28 = NULL;
  x_28 = t;
  w_28 :
  if(((ATermList) x_28 == ATempty))
    {
      {
        ATerm z_28 = NULL,b_29 = NULL;
        ATerm t_17;
        t_17 = t;
        {
          ATerm a_29 = NULL;
          t = SSLgetAnnotations(not_null(x_28));
          {
            a_29 = t;
            if(((z_28 != NULL) && (z_28 != a_29)))
              _fail(a_29);
            else
              z_28 = a_29;
          }
        }
        t = t_17;
        {
          ATerm c_29 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_28));
          {
            c_29 = t;
            if(((b_29 != NULL) && (b_29 != c_29)))
              _fail(c_29);
            else
              b_29 = c_29;
          }
          t = not_null(b_29);
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
  ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym__2))
    {
      m_29 = ATgetArgument(j_29, 0);
      n_29 = ATgetArgument(j_29, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_6, not_null(m_29), not_null(n_29));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm u_17;
  u_17 = t;
  {
    ATerm e_4 (ATerm t)
    {
      t = term_w_17;
      t = t_53(t);
      return(t);
    }
    t = try_1(t, e_4);
  }
  t = u_17;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm i_30 = NULL;
      ATerm x_17;
      x_17 = t;
      {
        ATerm g_30 = NULL;
        ATerm h_30 = NULL;
        h_30 = t;
        if(((g_30 != NULL) && (g_30 != h_30)))
          _fail(h_30);
        else
          g_30 = h_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(g_30));
          t = set_config_0(t);
        }
      }
      t = x_17;
      {
        ATerm j_30 = NULL;
        j_30 = t;
        if(((i_30 != NULL) && (i_30 != j_30)))
          _fail(j_30);
        else
          i_30 = j_30;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_30));
      }
      return(t);
    }
    ATerm g_4 (ATerm t)
    {
      ATerm z_17 = t;
      int a_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                t = t_53(t);
                t = Cons_2(t, _id, g_4);
              }
            }
          LocalPopChoice(a_18);
        }
      else
        {
          t = z_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_4, g_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,j_31 = NULL;
    e_31 = t;
    u_30 :
    if(match_cons(e_31, sym__3))
      {
        f_31 = ATgetArgument(e_31, 0);
        g_31 = ATgetArgument(e_31, 1);
        j_31 = ATgetArgument(e_31, 2);
        {
          if(((b_31 != NULL) && (b_31 != f_31)))
            _fail(f_31);
          else
            b_31 = f_31;
          {
            if(((c_31 != NULL) && (c_31 != g_31)))
              _fail(g_31);
            else
              c_31 = g_31;
            {
              if(((d_31 != NULL) && (d_31 != j_31)))
                _fail(j_31);
              else
                d_31 = j_31;
              t = SSL_table_put(not_null(b_31), not_null(c_31), not_null(d_31));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm m_31 = NULL;
  ATerm l_18;
  l_18 = t;
  {
    t = term_m_18;
    t = table_put_0(t);
  }
  t = l_18;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_53(t);
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_4);
    {
      ATerm k_4 (ATerm t)
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm r_4 (ATerm t)
                {
                  ATerm n_31 = NULL;
                  n_31 = t;
                  if(((m_31 != NULL) && (m_31 != n_31)))
                    _fail(n_31);
                  else
                    m_31 = n_31;
                  return(t);
                }
                t = Undefined_1(t, r_4);
                return(t);
              }
              t = option_defined_1(t, n_4);
              {
                ATerm r_18;
                r_18 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_31)), term_s_18));
                  t = printnl_0(t);
                }
                t = r_18;
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_4);
      {
        ATerm v_18;
        v_18 = t;
        {
          t = term_j_16;
          t = table_destroy_0(t);
        }
        t = v_18;
      }
    }
  }
  return(t);
}
ATerm sdf_to_sig_0 (ATerm t)
{
  t = parse_options_1(t, io_options_0);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1(t, default_usage_0);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_4 (ATerm t)
              {
                ATerm n_32 = NULL;
                ATerm b_19 = t;
                int c_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_32 = NULL;
                    ATerm g_32 = NULL;
                    t = term_c_11;
                    {
                      t = get_config_0(t);
                      {
                        g_32 = t;
                        if(((f_32 != NULL) && (f_32 != g_32)))
                          _fail(g_32);
                        else
                          f_32 = g_32;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_32));
                    LocalPopChoice(c_19);
                  }
                else
                  {
                    t = b_19;
                    t = term_k_10;
                  }
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = term_d_19;
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    ATerm h_32 = NULL;
                    ATerm i_32 = NULL;
                    t = term_f_19;
                    {
                      t = xtc_find_0(t);
                      {
                        i_32 = t;
                        if(((h_32 != NULL) && (h_32 != i_32)))
                          _fail(i_32);
                        else
                          h_32 = i_32;
                      }
                    }
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_32)), term_j_19), term_g_19);
                    return(t);
                  }
                  t = xtc_transform_2(t, t_4, u_4);
                  {
                    ATerm x_4 (ATerm t)
                    {
                      t = term_k_19;
                      return(t);
                    }
                    t = xtc_transform_1(t, x_4);
                    {
                      ATerm y_4 (ATerm t)
                      {
                        t = term_m_19;
                        return(t);
                      }
                      t = xtc_transform_1(t, y_4);
                      {
                        ATerm d_5 (ATerm t)
                        {
                          t = term_m_20;
                          return(t);
                        }
                        ATerm e_5 (ATerm t)
                        {
                          ATerm j_32 = NULL,l_32 = NULL;
                          ATerm n_20;
                          n_20 = t;
                          {
                            ATerm k_32 = NULL;
                            t = term_o_20;
                            {
                              t = xtc_find_0(t);
                              {
                                k_32 = t;
                                if(((j_32 != NULL) && (j_32 != k_32)))
                                  _fail(k_32);
                                else
                                  j_32 = k_32;
                              }
                            }
                          }
                          t = n_20;
                          {
                            ATerm m_32 = NULL;
                            t = term_p_20;
                            {
                              t = xtc_find_0(t);
                              {
                                m_32 = t;
                                if(((l_32 != NULL) && (l_32 != m_32)))
                                  _fail(m_32);
                                else
                                  l_32 = m_32;
                              }
                            }
                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_32)), term_j_19), not_null(j_32)), term_j_19);
                          }
                          return(t);
                        }
                        t = xtc_transform_2(t, d_5, e_5);
                        {
                          ATerm f_5 (ATerm t)
                          {
                            t = term_q_20;
                            return(t);
                          }
                          t = xtc_transform_1(t, f_5);
                          {
                            ATerm o_32 = NULL,p_32 = NULL;
                            o_32 = t;
                            c_32 :
                            if(match_cons(o_32, sym_FILE_1))
                              {
                                p_32 = ATgetArgument(o_32, 0);
                                {
                                  ATerm t_32 = NULL;
                                  t = not_null(p_32);
                                  {
                                    t_32 = t;
                                    if(((n_32 != NULL) && (n_32 != t_32)))
                                      _fail(t_32);
                                    else
                                      n_32 = t_32;
                                  }
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, term_r_20), not_null(n_32));
                              {
                                ATerm g_5 (ATerm t)
                                {
                                  t = term_s_20;
                                  return(t);
                                }
                                t = xtc_command_1(t, g_5);
                                {
                                  ATerm h_5 (ATerm t)
                                  {
                                    ATerm u_32 = NULL,w_32 = NULL;
                                    ATerm t_20;
                                    t_20 = t;
                                    {
                                      ATerm v_32 = NULL;
                                      t = run_time_0(t);
                                      {
                                        v_32 = t;
                                        if(((u_32 != NULL) && (u_32 != v_32)))
                                          _fail(v_32);
                                        else
                                          u_32 = v_32;
                                      }
                                    }
                                    t = t_20;
                                    {
                                      ATerm x_32 = NULL;
                                      t = term_y_17;
                                      {
                                        t = get_config_0(t);
                                        {
                                          x_32 = t;
                                          if(((w_32 != NULL) && (w_32 != x_32)))
                                            _fail(x_32);
                                          else
                                            w_32 = x_32;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_m_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_20), not_null(u_32)), term_v_20), not_null(w_32)));
                                        t = printnl_0(t);
                                      }
                                    }
                                    return(t);
                                  }
                                  t = if_verbose1_1(t, h_5);
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
              t = xtc_temp_files_1(t, s_4);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = report_failure_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sdf_to_sig_0(t);
  return(t);
}
