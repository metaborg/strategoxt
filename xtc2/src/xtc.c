#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_F__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_NestedTable_1;
static Symbol sym_Tables_0;
static Symbol sym_NewTable_0;
static Symbol sym_Path_1;
static Symbol sym_Version_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Tool_1;
static Symbol sym_Repository_0;
static Symbol sym_Stack_0;
static Symbol sym_Import_0;
static Symbol sym_Imported_1;
static Symbol sym_Files_0;
static Symbol sym_Tables_0;
static Symbol sym_XTC_0;
static Symbol sym_RepoFile_1;
static Symbol sym_Changed_1;
static Symbol sym_TempFiles_0;
static void init_module_constructors (void)
{
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_NestedTable_1 = ATmakeSymbol("NestedTable", 1, ATfalse);
  ATprotectSymbol(sym_NestedTable_1);
  sym_Tables_0 = ATmakeSymbol("Tables", 0, ATfalse);
  ATprotectSymbol(sym_Tables_0);
  sym_NewTable_0 = ATmakeSymbol("NewTable", 0, ATfalse);
  ATprotectSymbol(sym_NewTable_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Stack_0 = ATmakeSymbol("Stack", 0, ATfalse);
  ATprotectSymbol(sym_Stack_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_Files_0 = ATmakeSymbol("Files", 0, ATfalse);
  ATprotectSymbol(sym_Files_0);
  sym_Tables_0 = ATmakeSymbol("Tables", 0, ATfalse);
  ATprotectSymbol(sym_Tables_0);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_RepoFile_1 = ATmakeSymbol("RepoFile", 1, ATfalse);
  ATprotectSymbol(sym_RepoFile_1);
  sym_Changed_1 = ATmakeSymbol("Changed", 1, ATfalse);
  ATprotectSymbol(sym_Changed_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
static ATerm term_j_38;
static ATerm term_i_38;
static ATerm term_c_38;
static ATerm term_b_38;
static ATerm term_t_36;
static ATerm term_p_36;
static ATerm term_j_36;
static ATerm term_d_36;
static ATerm term_x_34;
static ATerm term_w_34;
static ATerm term_n_34;
static ATerm term_k_34;
static ATerm term_j_34;
static ATerm term_i_34;
static ATerm term_h_34;
static ATerm term_g_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_v_33;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_f_33;
static ATerm term_x_32;
static ATerm term_u_32;
static ATerm term_o_32;
static ATerm term_m_32;
static ATerm term_i_32;
static ATerm term_h_32;
static ATerm term_c_32;
static ATerm term_z_31;
static ATerm term_y_31;
static ATerm term_u_31;
static ATerm term_q_31;
static ATerm term_p_31;
static ATerm term_k_31;
static ATerm term_a_31;
static ATerm term_h_30;
static ATerm term_x_29;
static ATerm term_l_29;
static ATerm term_j_29;
static ATerm term_s_28;
static ATerm term_r_28;
static ATerm term_n_28;
static ATerm term_j_28;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_s_27;
static ATerm term_w_26;
static ATerm term_v_26;
static ATerm term_u_26;
static ATerm term_t_26;
static ATerm term_q_26;
static ATerm term_j_26;
static ATerm term_c_26;
static ATerm term_b_26;
static ATerm term_x_25;
static ATerm term_t_25;
static ATerm term_s_25;
static ATerm term_r_25;
static ATerm term_q_25;
static ATerm term_l_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_d_24;
static ATerm term_c_24;
static ATerm term_a_24;
static ATerm term_y_23;
static ATerm term_x_23;
static ATerm term_w_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_m_23;
static ATerm term_z_22;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_u_22;
static ATerm term_r_22;
static ATerm term_q_22;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_b_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_w_21;
static ATerm term_u_21;
static ATerm term_n_21;
static ATerm term_m_21;
static ATerm term_l_21;
static ATerm term_f_21;
static ATerm term_e_21;
static ATerm term_y_20;
static ATerm term_t_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_y_19;
static ATerm term_u_19;
static ATerm term_m_19;
static ATerm term_g_19;
static ATerm term_f_19;
static ATerm term_e_19;
static ATerm term_c_19;
static ATerm term_b_19;
static ATerm term_w_18;
static ATerm term_v_18;
static ATerm term_s_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_j_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_e_17;
static ATerm term_c_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_o_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_d_16;
static ATerm term_c_16;
static ATerm term_b_16;
static ATerm term_c_15;
static ATerm term_a_15;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_o_14;
static ATerm term_n_14;
static ATerm term_m_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-V", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_n_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_w_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Retrieving tool: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" : no registration", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(") : ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-a", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_s_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-R", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_w_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY=", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Tables_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("j_2", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Files_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XtcFilesAndTables", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("changed tables: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("  Saving repository ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No write permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-extend: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("c_4", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering imports: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("import", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("nestedtable-put-aux: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_NewTable_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("nestedtable-put: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-set: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("stack: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  Registering tool ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("    Tools:    ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("    Version:  ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("    Location: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  nested table: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  table: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Stack_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_z_21);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_q_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: xtc [-r rep] register -t tool -V vers -l loc\n", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] (import r)+\n", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("       xtc [-r rep] query (-a | -t tool [-V version]) [-L]", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("The xtc command supports the registration of tools in an XTC repository\n", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("and querying XTC repositories", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--repository rep | -r rep    Tool repository", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("import r | i r               Import repository r\n", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register | r                 Register a tool", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--tool n | -t n              Tool name", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-l loc  | --location loc     Location of tool", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--Version n | -V n           Version of tool\n", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("query", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("query | q                    Query the XTC repository", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_h_22);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--all | -a                   List all registered tools", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_h_22);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--Location | -L              List only location of tool", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_h_22);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--Repository | -R            Location of repository\n", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i                  Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_h_22);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_h_22);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_h_22);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, (ATerm) ATempty);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_q_26);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_q_25);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options parsed: ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("default repository: ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*** warning: xtc failed! ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_p_23);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_y_23);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Not imported: ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("a: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("b: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-file-to-table-new a:", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-file-to-table-new b:", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-file-to-table-new c:", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("y_3", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_4", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_m_23);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_v_16, term_y_21);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find? ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm version_query_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm d_123 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm tool_query_0_0 (ATerm t);
static ATerm q_8 (ATerm n_80, ATerm c_944, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm all_query_0_0 (ATerm t);
ATerm repository_query_0_0 (ATerm t);
ATerm aux_XtcFilesAndTables_0_0 (ATerm t);
ATerm bagof_XtcFilesAndTables_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_store_repository_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_store_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_extend_0_2 (ATerm g_77, ATerm h_77, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm register_import_0_0 (ATerm t);
ATerm hashtable_push_0_2 (ATerm d_57, ATerm e_57, ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm nestedtable_put_aux_2_2 (ATerm z_0 (ATerm), ATerm a_1 (ATerm), ATerm c_1, ATerm d_1, ATerm t);
static ATerm j_3 (ATerm t);
ATerm nestedtable_put_2_2 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm k_59, ATerm l_59, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_set_0_2 (ATerm e_77, ATerm f_77, ATerm t);
ATerm xtc_register_0_3 (ATerm i_77, ATerm j_77, ATerm k_77, ATerm t);
ATerm if_verbose2_1_0 (ATerm c_123 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm b_123 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm xtc_register_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm f_101 (ATerm), ATerm t);
static ATerm s_8 (ATerm f_58, ATerm t);
ATerm hashtable_getlist_0_0 (ATerm t);
ATerm reverse_map_1_0 (ATerm b_106 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_show_stack_0_0 (ATerm t);
ATerm xtc_push_file_0_0 (ATerm t);
ATerm xtc_push_default_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm default_system_usage_2_0 (ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_24 (ATerm q_23, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_8 (ATerm j_68, ATerm i_68, ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm xtc_options_0_0 (ATerm t);
static ATerm u_8 (ATerm d_58, ATerm e_58, ATerm t);
static ATerm v_8 (ATerm i_58, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm x_8 (ATerm d_68, ATerm e_68, ATerm t);
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_127 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm parse_options_3_0 (ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm xtc_main_0_0 (ATerm t);
static ATerm z_8 (ATerm d_81, ATerm e_81, ATerm t);
static ATerm a_9 (ATerm a_69, ATerm b_69, ATerm t);
ATerm debug_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm f_123 (ATerm), ATerm t);
static ATerm c_9 (ATerm p_94 (ATerm), ATerm k_14, ATerm i_14, ATerm t);
static ATerm d_9 (ATerm j_53, ATerm k_53, ATerm i_53, ATerm t);
static ATerm e_9 (ATerm a_33, ATerm c_297, ATerm t);
static ATerm f_9 (ATerm s_94 (ATerm), ATerm v_14, ATerm t_14, ATerm t);
ATerm if_verbose4_1_0 (ATerm e_123 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm g_123 (ATerm), ATerm t);
static ATerm i_9 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm l_38, ATerm k_38, ATerm t);
static ATerm j_9 (ATerm h_110 (ATerm), ATerm h_38, ATerm g_38, ATerm t);
static ATerm f_11 (ATerm t);
ATerm hashtable_pushunion_0_2 (ATerm h_57, ATerm i_57, ATerm t);
static ATerm g_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm xtc_read_0_1 (ATerm p_78, ATerm t);
ATerm filter_1_0 (ATerm z_113 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t);
static ATerm j_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm xtc_import_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm hashtable_putlist_0_1 (ATerm p_57, ATerm t);
static ATerm k_9 (ATerm s_51, ATerm t_51, ATerm t);
ATerm foldr_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t);
static ATerm p_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm hashtable_init_0_0 (ATerm t);
static ATerm l_9 (ATerm g_32, ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_9 (ATerm n_47, ATerm o_47, ATerm t);
static ATerm m_9 (ATerm a_32, ATerm b_32, ATerm t);
static ATerm r_48 (ATerm l_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_9 (ATerm z_47, ATerm a_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_50 (ATerm b_49, ATerm t);
static ATerm d_50 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm t);
static ATerm e_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm q_105 (ATerm), ATerm o_285, ATerm k_32, ATerm t);
static ATerm f_13 (ATerm t);
ATerm create_new_file_0_1 (ATerm j_78, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm r_9 (ATerm d_46, ATerm e_46, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm xtc_file_to_table_new_0_0 (ATerm t);
static ATerm s_9 (ATerm u_53, ATerm v_53, ATerm t);
ATerm XtcFilesAndTables_0_0 (ATerm t);
ATerm nestedtable_get_aux_1_1 (ATerm d_0 (ATerm), ATerm f_0, ATerm t);
ATerm nestedtable_get_1_1 (ATerm t_120 (ATerm), ATerm o_59, ATerm t);
ATerm fetch_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm i_106 (ATerm), ATerm t);
static ATerm u_9 (ATerm y_57, ATerm z_57, ATerm a_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_58, ATerm h_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm v_54, ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_9 (ATerm b_58, ATerm c_58, ATerm t);
static ATerm v_9 (ATerm c_55, ATerm d_55, ATerm t);
ATerm xtc_get_stack_0_0 (ATerm t);
static ATerm x_58 (ATerm j_58, ATerm t);
static ATerm c_14 (ATerm t);
ATerm xtc_find_loc_0_0 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm version_query_0_0 (ATerm t)
{
  ATerm e_0 = NULL,i_0 = NULL,k_0 = NULL,q_0 = NULL,t_0 = NULL,v_0 = NULL,y_0 = NULL,f_1 = NULL,i_1 = NULL,j_1 = NULL,m_1 = NULL,g_3 = NULL;
  q_0 = t;
  t = term_m_14;
  v_0 = t;
  t = term_n_14;
  y_0 = t;
  t = term_o_14;
  t = v_9(v_0, y_0, t);
  i_0 = t;
  t = q_0;
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_0);
  f_1 = t;
  t = i_1;
  if(match_cons(t, sym_Tool_1))
    {
      e_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((i_0 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((k_0 != NULL) && (k_0 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(a_0, t);
  }
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, m_1);
  g_3 = t;
  t = SSLsetAnnotations(g_3, f_1);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_0, not_null(k_0)));
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, e_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_0, not_null(k_0))));
  t = q_8(e_0, t_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL;
        t = term_m_14;
        s_1 = t;
        t = term_w_14;
        u_1 = t;
        t = term_x_14;
        t = v_9(s_1, u_1, t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_1, term_a_15);
        t = geq_0_0(t);
        t = p_1;
        t = d_123(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = p_1;
      }
  }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = debug_1_0(s_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm tool_query_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm c_2 = NULL;
    c_2 = t;
    {
      ATerm d_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = if_verbose3_1_0(c_0, t);
          t = (ATerm) ATmakeAppl(sym_Tool_1, c_2);
          t = xtc_find_0_0(t);
          if(((y_1 != NULL) && (y_1 != t)))
            _fail(t);
          else
            y_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, c_2), y_1);
          {
            ATerm n_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = version_query_0_0(t);
                LocalPopChoice(u_15);
              }
            else
              {
                t = n_15;
                if(match_cons(t, sym__2))
                  {
                    ATerm v_15 = ATgetArgument(t, 0);
                    ATerm z_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Tool_1, c_2), y_1);
                t = q_8(c_2, y_1, t);
              }
          }
          LocalPopChoice(l_15);
        }
      else
        {
          t = d_15;
          {
            ATerm k_2 = NULL,l_2 = NULL;
            t = term_b_16;
            k_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), term_c_16), c_2);
            l_2 = t;
            t = SSL_print(k_2, l_2);
            t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), term_c_16), c_2));
          }
        }
    }
    return(t);
  }
  t = term_m_14;
  z_1 = t;
  t = term_g_16;
  b_2 = t;
  t = term_h_16;
  t = v_9(z_1, b_2, t);
  t = map_1_0(b_0, t);
  return(t);
}
static ATerm q_8 (ATerm n_80, ATerm c_944, ATerm t)
{
  static ATerm b_1 (ATerm t);
  static ATerm b_1 (ATerm t)
  {
    ATerm m_2 = NULL,n_2 = NULL;
    if(match_cons(t, sym__2))
      {
        m_2 = ATgetArgument(t, 0);
        n_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
          t = term_m_14;
          q_2 = t;
          t = term_k_16;
          r_2 = t;
          t = term_l_16;
          t = v_9(q_2, r_2, t);
          t = term_b_16;
          o_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_d_16), n_2);
          p_2 = t;
          t = SSL_print(o_2, p_2);
          t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, term_d_16), n_2));
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          {
            ATerm s_2 = NULL,t_2 = NULL;
            t = term_b_16;
            s_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_16), n_2), term_o_16), m_2), term_m_16), n_80);
            t_2 = t;
            t = SSL_print(s_2, t_2);
            t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_16), n_2), term_o_16), m_2), term_m_16), n_80));
          }
        }
    }
    return(t);
  }
  t = c_944;
  t = map_1_0(b_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_2 = NULL,w_2 = NULL;
  static ATerm k_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm y_2 = NULL,a_3 = NULL;
    y_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), y_2);
    t = v_9(not_null(u_2), y_2, t);
    a_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_2, a_3);
    return(t);
  }
  if(((u_2 != NULL) && (u_2 != t)))
    _fail(t);
  else
    u_2 = t;
  t = lookup_table_0_1(u_2, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(w_2, t);
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,m_0 = NULL,r_0 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL,q_3 = NULL,o_3 = NULL;
            t = SSLgetAnnotations(u_4);
            r_0 = t;
            t = s_4;
            if(match_cons(t, sym_Tool_1))
              {
                g_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_4);
            e_1 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, g_1);
            o_3 = t;
            t = SSLsetAnnotations(o_3, e_1);
            h_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_1, t_4);
            q_3 = t;
            t = SSLsetAnnotations(q_3, r_0);
            if(match_cons(t, sym__2))
              {
                ATerm r_16 = ATgetArgument(t, 0);
                if(match_cons(r_16, sym_Tool_1))
                  {
                    h_0 = ATgetArgument(r_16, 0);
                  }
                else
                  _fail(t);
                m_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_8(h_0, m_0, t);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = u_4;
          }
      }
    }
  else
    {
      t = u_4;
    }
  return(t);
}
ATerm all_query_0_0 (ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL;
  t = term_m_14;
  l_3 = t;
  t = term_s_16;
  n_3 = t;
  t = term_t_16;
  t = v_9(l_3, n_3, t);
  t = xtc_import_0_0(t);
  t = term_v_16;
  t = table_getlist_0_0(t);
  t = map_1_0(l_1, t);
  return(t);
}
ATerm repository_query_0_0 (ATerm t)
{
  ATerm a_5 = NULL,c_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
  t = term_m_14;
  g_5 = t;
  t = term_w_16;
  h_5 = t;
  t = term_y_16;
  t = v_9(g_5, h_5, t);
  t = xtc_location_0_0(t);
  a_5 = t;
  t = term_b_16;
  c_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), a_5), term_z_16);
  f_5 = t;
  t = SSL_print(c_5, f_5);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), a_5), term_z_16));
  return(t);
}
ATerm aux_XtcFilesAndTables_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6;
  if(match_cons(t, sym_Tables_0))
    {
      ATerm a_2 = NULL;
      t = i_6;
      if(match_cons(t, sym_Defined_2))
        {
          j_6 = ATgetArgument(t, 0);
          k_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_6;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("j_2", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATmakeAppl(sym_Defined_2, term_e_17, k_6));
      a_2 = t;
      t = SSL_explode_term(a_2);
      if(match_cons(t, sym__2))
        {
          ATerm g_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) g_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm l_17 = ATgetArgument(t, 1);
            if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
              {
                ATerm p_17 = ATgetFirst((ATermList) l_17);
                ATerm q_17 = (ATerm) ATgetNext((ATermList) l_17);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_NestedTable_1, k_6);
    }
  else
    {
      ATerm b_3 = NULL;
      if(!(match_cons(t, sym_Files_0)))
        _fail(t);
      t = i_6;
      if(match_cons(t, sym_Defined_2))
        {
          j_6 = ATgetArgument(t, 0);
          k_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_6;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("p_0", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym_Defined_2, term_v_17, k_6));
      b_3 = t;
      t = SSL_explode_term(b_3);
      if(match_cons(t, sym__2))
        {
          ATerm w_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm x_17 = ATgetArgument(t, 1);
            if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
              {
                ATerm c_18 = ATgetFirst((ATermList) x_17);
                ATerm d_18 = (ATerm) ATgetNext((ATermList) x_17);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RepoFile_1, k_6);
    }
  return(t);
}
ATerm bagof_XtcFilesAndTables_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  if(match_cons(t, sym_Tables_0))
    {
      ATerm f_3 = NULL;
      static ATerm n_1 (ATerm t);
      static ATerm n_1 (ATerm t)
      {
        ATerm y_6 = NULL;
        y_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_6, y_6);
        t = aux_XtcFilesAndTables_0_0(t);
        return(t);
      }
      t = term_h_18;
      f_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, r_6);
      t = s_9(f_3, r_6, t);
      t = filter_1_0(n_1, t);
    }
  else
    {
      ATerm i_3 = NULL;
      static ATerm o_1 (ATerm t);
      static ATerm o_1 (ATerm t)
      {
        ATerm d_7 = NULL;
        d_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_6, d_7);
        t = aux_XtcFilesAndTables_0_0(t);
        return(t);
      }
      if(!(match_cons(t, sym_Files_0)))
        _fail(t);
      t = term_h_18;
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, r_6);
      t = s_9(i_3, r_6, t);
      t = filter_1_0(o_1, t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Changed_1, f_7);
  t = XtcFilesAndTables_0_0(t);
  t = f_7;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_i_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  j_7 = t;
  t = XtcFilesAndTables_0_0(t);
  n_7 = t;
  t = term_j_18;
  o_7 = t;
  t = (ATerm) ATinsert(ATempty, n_7);
  p_7 = t;
  t = SSL_printnl(o_7, p_7);
  t = n_7;
  if(match_cons(t, sym_RepoFile_1))
    {
      k_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_j_18;
  l_7 = t;
  t = (ATerm) ATinsert(ATempty, j_7);
  m_7 = t;
  t = SSL_printnl(l_7, m_7);
  t = j_7;
  if(match_cons(t, sym_NestedTable_1))
    {
      i_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7;
  t = hashtable_getlist_0_0(t);
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_7, h_7);
  t = p_9(w_1, k_7, h_7, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym_Stream_1))
        {
          q_7 = ATgetArgument(k_18, 0);
        }
      else
        _fail(t);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(q_7, r_7, t);
  return(t);
}
ATerm xtc_store_repository_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  t = term_c_17;
  t = bagof_XtcFilesAndTables_0_0(t);
  t = filter_1_0(q_1, t);
  t = debug_1_0(t_1, t);
  t = map_1_0(v_1, t);
  t = e_7;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  t = term_j_18;
  t_7 = t;
  t = (ATerm) ATinsert(ATempty, term_o_18);
  u_7 = t;
  t = SSL_printnl(t_7, u_7);
  t = s_7;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_p_18;
  return(t);
}
ATerm xtc_store_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_1, t);
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = xtc_store_repository_0_0(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = debug_1_0(d_2, t);
        _fail(t);
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_s_18;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      if((p_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcFilesAndTables_0_0(t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = xtc_file_to_table_new_0_0(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_8 = NULL,w_8 = NULL,h_9 = NULL;
  if(match_cons(t, sym_NestedTable_1))
    {
      r_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Changed_1, (ATerm) ATmakeAppl(sym_NestedTable_1, r_8));
  w_8 = t;
  t = term_w_18;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Changed_1, (ATerm) ATmakeAppl(sym_NestedTable_1, r_8)), term_w_18);
  t = c_9(i_2, w_8, h_9, t);
  t = (ATerm) ATmakeAppl(sym_NestedTable_1, r_8);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm xtc_extend_0_2 (ATerm g_77, ATerm h_77, ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL,l_8 = NULL,t_3 = NULL;
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_77, h_77);
  t = debug_1_0(e_2, t);
  t = xtc_get_stack_0_0(t);
  l_8 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_7 = ATgetFirst((ATermList) t);
      e_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_8);
  x_7 = t;
  t = y_7;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_7;
        t = nestedtable_get_1_1(_id, g_77, t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATempty;
      }
  }
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_77, k_8);
  t = j_9(f_2, h_77, k_8, t);
  h_8 = t;
  t = y_7;
  t = nestedtable_put_2_2(g_2, h_2, g_77, h_8, t);
  g_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_8), g_8);
  t_3 = t;
  t = SSLsetAnnotations(t_3, x_7);
  t = xtc_show_stack_0_0(t);
  t = w_7;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm register_import_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,d_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,n_10 = NULL;
  t = term_m_14;
  k_10 = t;
  t = term_e_19;
  n_10 = t;
  t = term_f_19;
  t = v_9(k_10, n_10, t);
  t = if_verbose2_1_0(v_2, t);
  t = term_m_14;
  i_10 = t;
  t = term_e_19;
  j_10 = t;
  t = term_f_19;
  t = v_9(i_10, j_10, t);
  x_9 = t;
  t = if_verbose5_1_0(z_2, t);
  d_10 = t;
  t = (ATerm) ATinsert(ATempty, term_g_19);
  y_9 = t;
  t = d_10;
  t = xtc_extend_0_2(y_9, x_9, t);
  return(t);
}
ATerm hashtable_push_0_2 (ATerm d_57, ATerm e_57, ATerm t)
{
  ATerm o_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  o_10 = t;
  {
    ATerm j_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 = NULL;
        t = o_10;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_9(d_57, u_10, t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  r_10 = t;
  t = (ATerm) ATinsert(CheckATermList(r_10), e_57);
  s_10 = t;
  t = o_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(d_57, s_10, t_10, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm nestedtable_put_aux_2_2 (ATerm z_0 (ATerm), ATerm a_1 (ATerm), ATerm c_1, ATerm d_1, ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,h_12 = NULL,i_12 = NULL,l_12 = NULL;
  l_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_12 = ATgetFirst((ATermList) t);
      i_12 = (ATerm) ATgetNext((ATermList) t);
      t = i_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_12 = ATgetFirst((ATermList) t);
          e_12 = (ATerm) ATgetNext((ATermList) t);
          {
            ATerm w_3 = NULL,d_4 = NULL;
            t = l_12;
            t = debug_1_0(d_3, t);
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_4 = NULL;
                  t = c_1;
                  if(match_cons(t, sym_Hashtable_1))
                    {
                      g_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_9(h_12, g_4, t);
                  t = z_0(t);
                  if(match_cons(t, sym_NestedTable_1))
                    {
                      d_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  {
                    ATerm j_4 = NULL,m_4 = NULL;
                    t = term_u_19;
                    t = z_0(t);
                    if(match_cons(t, sym__2))
                      {
                        w_3 = ATgetArgument(t, 0);
                        {
                          ATerm w_19 = ATgetArgument(t, 1);
                          if(match_cons(w_19, sym_NestedTable_1))
                            {
                              d_4 = ATgetArgument(w_19, 0);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = c_1;
                    if(match_cons(t, sym_Hashtable_1))
                      {
                        m_4 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_9(h_12, w_3, m_4, t);
                    t = term_c_17;
                    j_4 = t;
                    t = c_1;
                    t = hashtable_push_0_2(j_4, h_12, t);
                    t = (ATerm) ATmakeAppl(sym_NestedTable_1, c_1);
                    t = a_1(t);
                  }
                }
            }
            t = (ATerm) ATinsert(CheckATermList(e_12), d_12);
            t = nestedtable_put_aux_2_2(z_0, a_1, d_4, d_1, t);
            t = d_1;
          }
        }
      else
        {
          ATerm b_5 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_12;
          t = debug_1_0(e_3, t);
          t = c_1;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_9(h_12, d_1, b_5, t);
          t = (ATerm) ATmakeAppl(sym_NestedTable_1, c_1);
          t = a_1(t);
          t = c_1;
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_12;
      t = debug_1_0(h_3, t);
      _fail(t);
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm nestedtable_put_2_2 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm k_59, ATerm l_59, ATerm t)
{
  ATerm q_12 = NULL;
  t = r_120(t);
  t = debug_1_0(j_3, t);
  if(match_cons(t, sym_NestedTable_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_59;
  t = nestedtable_put_aux_2_2(r_120, s_120, q_12, l_59, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcFilesAndTables_0_0(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = d_20;
      t = xtc_file_to_table_new_0_0(t);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym_NestedTable_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Changed_1, (ATerm) ATmakeAppl(sym_NestedTable_1, y_12));
  z_12 = t;
  t = term_w_18;
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Changed_1, (ATerm) ATmakeAppl(sym_NestedTable_1, y_12)), term_w_18);
  t = c_9(s_3, z_12, a_13, t);
  t = (ATerm) ATmakeAppl(sym_NestedTable_1, y_12);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm xtc_set_0_2 (ATerm e_77, ATerm f_77, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,x_12 = NULL,e_4 = NULL;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_77, f_77);
  t = debug_1_0(k_3, t);
  t = xtc_get_stack_0_0(t);
  t = debug_1_0(m_3, t);
  x_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_12 = ATgetFirst((ATermList) t);
      u_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_12);
  s_12 = t;
  t = t_12;
  t = nestedtable_put_2_2(p_3, r_3, e_77, f_77, t);
  v_12 = t;
  t = (ATerm) ATinsert(CheckATermList(u_12), v_12);
  e_4 = t;
  t = SSLsetAnnotations(e_4, s_12);
  t = xtc_show_stack_0_0(t);
  t = r_12;
  return(t);
}
ATerm xtc_register_0_3 (ATerm i_77, ATerm j_77, ATerm k_77, ATerm t)
{
  ATerm d_13 = NULL;
  d_13 = t;
  t = i_77;
  {
    ATerm i_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_77;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_20 = ATgetFirst((ATermList) t);
                ATerm r_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_77;
          }
        LocalPopChoice(k_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATinsert(ATempty, i_77);
      }
  }
  {
    static ATerm u_3 (ATerm t);
    static ATerm u_3 (ATerm t)
    {
      ATerm i_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
      o_13 = t;
      t = term_j_18;
      p_13 = t;
      t = (ATerm) ATinsert(ATempty, o_13);
      q_13 = t;
      t = SSL_printnl(p_13, q_13);
      t = (ATerm) ATinsert(ATempty, o_13);
      i_13 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_13), term_t_20), k_77);
      n_13 = t;
      t = SSL_concat_strings(n_13);
      m_13 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_77, m_13));
      l_13 = t;
      t = o_13;
      t = xtc_set_0_2(i_13, l_13, t);
      return(t);
    }
    t = map_1_0(u_3, t);
  }
  t = d_13;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  {
    ATerm u_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL,x_13 = NULL,b_14 = NULL;
        t = term_m_14;
        x_13 = t;
        t = term_w_14;
        b_14 = t;
        t = term_x_14;
        t = v_9(x_13, b_14, t);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_13, term_y_20);
        t = geq_0_0(t);
        t = s_13;
        t = c_123(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = u_20;
        t = s_13;
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  {
    ATerm z_20 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_14 = NULL,y_14 = NULL,z_14 = NULL;
        t = term_m_14;
        y_14 = t;
        t = term_w_14;
        z_14 = t;
        t = term_x_14;
        t = v_9(y_14, z_14, t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_14, term_e_21);
        t = geq_0_0(t);
        t = f_14;
        t = b_123(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = z_20;
        t = f_14;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  t = term_j_18;
  p_15 = t;
  t = (ATerm) ATinsert(ATempty, term_f_21);
  q_15 = t;
  t = SSL_printnl(p_15, q_15);
  t = o_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_l_21;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = debug_1_0(f_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = debug_1_0(l_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm xtc_register_0_0 (ATerm t)
{
  ATerm b_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL;
  t = term_m_14;
  k_15 = t;
  t = term_g_16;
  m_15 = t;
  t = term_h_16;
  t = v_9(k_15, m_15, t);
  b_15 = t;
  t = if_verbose1_1_0(v_3, t);
  t = if_verbose2_1_0(x_3, t);
  t = term_m_14;
  i_15 = t;
  t = term_n_14;
  j_15 = t;
  t = term_o_14;
  t = v_9(i_15, j_15, t);
  e_15 = t;
  t = if_verbose2_1_0(b_4, t);
  t = term_m_14;
  g_15 = t;
  t = term_k_16;
  h_15 = t;
  t = term_l_16;
  t = v_9(g_15, h_15, t);
  f_15 = t;
  t = if_verbose2_1_0(k_4, t);
  t = b_15;
  t = xtc_register_0_3(b_15, e_15, f_15, t);
  return(t);
}
ATerm alltd_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t);
  static ATerm r_15 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_101(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = SRTS_all(r_15, t);
      }
    return(t);
  }
  t = r_15(t);
  return(t);
}
static ATerm s_8 (ATerm f_58, ATerm t)
{
  t = SSL_hashtable_keys(f_58);
  return(t);
}
ATerm hashtable_getlist_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  static ATerm n_4 (ATerm t);
  static ATerm n_4 (ATerm t)
  {
    ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
    w_15 = t;
    t = not_null(s_15);
    if(match_cons(t, sym_Hashtable_1))
      {
        y_15 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = t_9(w_15, y_15, t);
    x_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_15, x_15);
    return(t);
  }
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(t_15, t);
  t = map_1_0(n_4, t);
  return(t);
}
ATerm reverse_map_1_0 (ATerm b_106 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,d_17 = NULL;
  d_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_17 = ATgetFirst((ATermList) t);
      b_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,s_5 = NULL,t_5 = NULL,i_4 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(d_17);
        p_5 = t;
        t = b_17;
        t = reverse_map_1_0(b_106, t);
        s_5 = t;
        t = (ATerm) ATinsert(CheckATermList(s_5), a_17);
        h_4 = t;
        t = SSLsetAnnotations(h_4, p_5);
        t_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_5 = ATgetFirst((ATermList) t);
            n_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_5);
        l_5 = t;
        t = m_5;
        t = b_106(t);
        o_5 = t;
        t = (ATerm) ATinsert(CheckATermList(n_5), o_5);
        i_4 = t;
        t = SSLsetAnnotations(i_4, l_5);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_17;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  static ATerm r_17 (ATerm t);
  static ATerm r_17 (ATerm t)
  {
    ATerm k_17 = NULL;
    static ATerm v_4 (ATerm t);
    static ATerm v_4 (ATerm t)
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,z_4 = NULL;
      o_17 = t;
      if(match_cons(t, sym_RepoFile_1))
        {
          n_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_17);
      m_17 = t;
      t = (ATerm) ATmakeAppl(sym_RepoFile_1, n_17);
      z_4 = t;
      t = SSLsetAnnotations(z_4, m_17);
      t = r_17(t);
      return(t);
    }
    ATerm r_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcFilesAndTables_0_0(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = r_21;
        t = xtc_file_to_table_new_0_0(t);
      }
    t = debug_1_0(q_4, t);
    if(match_cons(t, sym_NestedTable_1))
      {
        k_17 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_17;
    t = debug_1_0(r_4, t);
    t = hashtable_getlist_0_0(t);
    t = alltd_1_0(v_4, t);
    return(t);
  }
  t = r_17(t);
  h_17 = t;
  t = term_j_18;
  i_17 = t;
  t = (ATerm) ATinsert(ATempty, h_17);
  j_17 = t;
  t = SSL_printnl(i_17, j_17);
  t = h_17;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_u_21;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm xtc_show_stack_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  t = xtc_get_stack_0_0(t);
  t = debug_1_0(o_4, t);
  t = reverse_map_1_0(p_4, t);
  t = f_17;
  return(t);
}
ATerm xtc_push_file_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,e_18 = NULL;
  s_17 = t;
  t = xtc_get_stack_0_0(t);
  t_17 = t;
  t = term_v_16;
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_16, term_y_21, (ATerm) ATinsert(CheckATermList(t_17), (ATerm) ATmakeAppl(sym_RepoFile_1, s_17)));
  t = lookup_table_0_1(y_17, t);
  e_18 = t;
  t = term_y_21;
  z_17 = t;
  t = (ATerm) ATinsert(CheckATermList(t_17), (ATerm) ATmakeAppl(sym_RepoFile_1, s_17));
  a_18 = t;
  t = e_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(z_17, a_18, b_18, t);
  t = s_17;
  return(t);
}
ATerm xtc_push_default_0_0 (ATerm t)
{
  t = xtc_location_0_0(t);
  t = xtc_push_file_0_0(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  t = term_m_14;
  f_18 = t;
  t = term_z_21;
  g_18 = t;
  t = term_b_22;
  t = v_9(f_18, g_18, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_22 = ATgetFirst((ATermList) t);
                ATerm g_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_18;
          }
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATinsert(ATempty, l_18);
      }
  }
  m_18 = t;
  t = term_b_16;
  n_18 = t;
  t = SSL_printnl(n_18, m_18);
  t = l_18;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,d_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_18 = ATgetFirst((ATermList) t);
      d_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_19 = NULL,i_19 = NULL;
        static ATerm w_4 (ATerm t);
        static ATerm w_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_19)), not_null(i_19));
          return(t);
        }
        t = d_19;
        t = o_0(t);
        if(((h_19 != NULL) && (h_19 != t)))
          _fail(t);
        else
          h_19 = t;
        t = z_18;
        t = n_0(t);
        if(((i_19 != NULL) && (i_19 != t)))
          _fail(t);
        else
          i_19 = t;
        t = d_19;
        t = reverse_acc_2_0(n_0, w_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_22;
      t = o_0(t);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL,w_5 = NULL;
  a_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_20);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_19);
  w_5 = t;
  t = SSLsetAnnotations(w_5, x_19);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_20), term_i_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL,t_19 = NULL;
      t = term_m_14;
      s_19 = t;
      t = term_z_21;
      t_19 = t;
      t = term_b_22;
      t = v_9(s_19, t_19, t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = fetch_1_0(x_4, t);
    }
  {
    ATerm l_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_128(t);
        t = echo_0_0(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = l_22;
      }
  }
  t = term_o_22;
  t = echo_0_0(t);
  t = term_p_22;
  o_19 = t;
  t = term_q_22;
  p_19 = t;
  t = term_r_22;
  t = v_9(o_19, p_19, t);
  t = reverse_acc_2_0(_id, y_4, t);
  t = map_1_0(d_5, t);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL;
        t = f_128(t);
        g_20 = t;
        t = (ATerm) ATinsert(CheckATermList(g_20), term_d_16);
        t = echo_0_0(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,z_5 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_20);
  z_5 = t;
  t = SSLsetAnnotations(z_5, o_20);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_22), term_w_22), term_u_22);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_22), term_y_22);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL,n_20 = NULL;
        t = term_m_14;
        m_20 = t;
        t = term_z_21;
        n_20 = t;
        t = term_b_22;
        t = v_9(m_20, n_20, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = fetch_1_0(e_5, t);
      }
  }
  t = j_20;
  t = default_system_usage_2_0(i_5, j_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,a_21 = NULL,c_21 = NULL,g_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
      t = term_h_22;
      t = x_0(t);
      i_21 = t;
      t = term_p_22;
      j_21 = t;
      t = term_q_22;
      k_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, i_21);
      t = d_9(j_21, k_21, i_21, t);
      _fail(t);
    }
  else
    {
      ATerm q_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_20 = ATgetFirst((ATermList) t);
          a_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_21 = ATgetFirst((ATermList) t);
          g_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_20;
      t = u_0(t);
      t = c_21;
      t = w_0(t);
      q_21 = t;
      t = (ATerm) ATinsert(CheckATermList(g_21), q_21);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  static ATerm j_23 (ATerm t);
  static ATerm j_23 (ATerm t)
  {
    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
    f_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_23 = ATgetFirst((ATermList) t);
        e_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_6 = NULL,u_6 = NULL,c_6 = NULL;
          t = SSLgetAnnotations(f_23);
          q_6 = t;
          t = e_23;
          t = j_23(t);
          u_6 = t;
          t = (ATerm) ATinsert(CheckATermList(u_6), d_23);
          c_6 = t;
          t = SSLsetAnnotations(c_6, q_6);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_23;
        t = n_106(t);
      }
    return(t);
  }
  t = j_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_21 = NULL,v_21 = NULL,x_21 = NULL;
  s_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_21;
    }
  else
    {
      static ATerm k_5 (ATerm t);
      static ATerm k_5 (ATerm t)
      {
        t = not_null(x_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_21 = ATgetFirst((ATermList) t);
          if(((x_21 != NULL) && (x_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_21;
      t = at_end_1_0(k_5, t);
    }
  return(t);
}
static ATerm q_24 (ATerm q_23, ATerm t)
{
  ATerm r_23 = NULL;
  t = SSL_explode_term(q_23);
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_23 = NULL,b_24 = NULL,k_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_5 (ATerm t);
            static ATerm q_5 (ATerm t)
            {
              t = b_24;
              return(t);
            }
            t = z_23;
            t = at_end_1_0(q_5, t);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = q_24(k_24, t);
          }
      }
    }
  else
    {
      t = q_24(k_24, t);
    }
  return(t);
}
static ATerm t_8 (ATerm j_68, ATerm i_68, ATerm t)
{
  ATerm r_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  t = j_68;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL;
        t = term_m_14;
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_14, j_68);
        t = v_9(c_25, j_68, t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
  }
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_68, y_24);
  t = conc_0_0(t);
  r_24 = t;
  t = term_m_14;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, j_68, r_24);
  t = lookup_table_0_1(z_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(j_68, r_24, a_25, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, j_68, r_24);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  if(match_string(t, "-r"))
    {
      t = u_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--repository", 0, ATtrue)))
        _fail(t);
      t = u_25;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  t = term_m_23;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_23, v_25);
  t = x_8(w_25, v_25, t);
  t = v_25;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  if(match_string(t, "i"))
    {
      t = y_25;
    }
  else
    {
      if(match_string(t, "imp"))
        {
          t = y_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("import", 0, ATtrue)))
            _fail(t);
          t = y_25;
        }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,f_26 = NULL;
  z_25 = t;
  t = term_e_19;
  a_26 = t;
  t = (ATerm) ATinsert(ATempty, z_25);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_19, (ATerm) ATinsert(ATempty, z_25));
  t = t_8(a_26, f_26, t);
  t = z_25;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "r"))
    {
      t = i_26;
    }
  else
    {
      if(match_string(t, "reg"))
        {
          t = i_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register", 0, ATtrue)))
            _fail(t);
          t = i_26;
        }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  t = term_p_23;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, l_26);
  t = x_8(m_26, l_26, t);
  t = l_26;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  if(match_string(t, "-t"))
    {
      t = r_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tool", 0, ATtrue)))
        _fail(t);
      t = r_26;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_26 = NULL,y_26 = NULL,z_26 = NULL;
  s_26 = t;
  t = term_g_16;
  y_26 = t;
  t = (ATerm) ATinsert(ATempty, s_26);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATempty, s_26));
  t = t_8(y_26, z_26, t);
  t = s_26;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  if(match_string(t, "-l"))
    {
      t = c_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--location", 0, ATtrue)))
        _fail(t);
      t = c_27;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  t = term_k_16;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, d_27);
  t = x_8(e_27, d_27, t);
  t = d_27;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "-V"))
    {
      t = h_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Version", 0, ATtrue)))
        _fail(t);
      t = h_27;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm i_27 = NULL,l_27 = NULL;
  i_27 = t;
  t = term_n_14;
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, i_27);
  t = x_8(l_27, i_27, t);
  t = i_27;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_x_23;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  if(match_string(t, "q"))
    {
      t = m_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("query", 0, ATtrue)))
        _fail(t);
      t = m_27;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  p_27 = t;
  t = term_y_23;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_23, p_27);
  t = x_8(q_27, p_27, t);
  t = p_27;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  if(match_string(t, "-a"))
    {
      t = v_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--all", 0, ATtrue)))
        _fail(t);
      t = v_27;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  t = term_s_16;
  x_27 = t;
  t = term_h_22;
  y_27 = t;
  t = term_c_24;
  t = x_8(x_27, y_27, t);
  t = w_27;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_string(t, "-L"))
    {
      t = z_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Location", 0, ATtrue)))
        _fail(t);
      t = z_27;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm a_28 = NULL,c_28 = NULL,d_28 = NULL;
  a_28 = t;
  t = term_k_16;
  c_28 = t;
  t = term_h_22;
  d_28 = t;
  t = term_f_24;
  t = x_8(c_28, d_28, t);
  t = a_28;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  if(match_string(t, "-R"))
    {
      t = e_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Repository", 0, ATtrue)))
        _fail(t);
      t = e_28;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  t = term_w_16;
  g_28 = t;
  t = term_h_22;
  h_28 = t;
  t = term_h_24;
  t = x_8(g_28, h_28, t);
  t = f_28;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_i_24;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  t = SSL_string_to_int(k_28);
  l_28 = t;
  t = term_w_14;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, l_28);
  t = x_8(m_28, l_28, t);
  t = k_28;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm xtc_options_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(r_5, u_5, v_5, t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_5, y_5, a_6, t);
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_6, d_6, e_6, t);
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm v_24 = t;
                    int x_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(l_6, n_6, o_6, t);
                        LocalPopChoice(x_24);
                      }
                    else
                      {
                        t = v_24;
                        {
                          ATerm b_25 = t;
                          int d_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(p_6, s_6, t_6, t);
                              LocalPopChoice(d_25);
                            }
                          else
                            {
                              t = b_25;
                              {
                                ATerm e_25 = t;
                                int h_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(v_6, w_6, x_6, t);
                                    LocalPopChoice(h_25);
                                  }
                                else
                                  {
                                    t = e_25;
                                    {
                                      ATerm i_25 = t;
                                      int j_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(z_6, a_7, b_7, t);
                                          LocalPopChoice(j_25);
                                        }
                                      else
                                        {
                                          t = i_25;
                                          {
                                            ATerm k_25 = t;
                                            int l_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(c_7, g_7, b_8, t);
                                                LocalPopChoice(l_25);
                                              }
                                            else
                                              {
                                                t = k_25;
                                                {
                                                  ATerm m_25 = t;
                                                  int n_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(c_8, d_8, m_8, t);
                                                      LocalPopChoice(n_25);
                                                    }
                                                  else
                                                    {
                                                      t = m_25;
                                                      {
                                                        ATerm o_25 = t;
                                                        int p_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(n_8, o_8, y_8, t);
                                                            LocalPopChoice(p_25);
                                                          }
                                                        else
                                                          {
                                                            t = o_25;
                                                            t = ArgOption_3_0(b_9, g_9, w_9, t);
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
          }
      }
    }
  return(t);
}
static ATerm u_8 (ATerm d_58, ATerm e_58, ATerm t)
{
  ATerm o_28 = NULL;
  t = SSL_hashtable_remove(e_58, d_58);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_28);
  return(t);
}
static ATerm v_8 (ATerm i_58, ATerm t)
{
  ATerm p_28 = NULL;
  t = SSL_hashtable_destroy(i_58);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_28);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_28 = NULL,t_28 = NULL,v_28 = NULL,w_28 = NULL;
  q_28 = t;
  t = table_hashtable_0_0(t);
  t_28 = t;
  t = lookup_table_0_1(q_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_8(w_28, t);
  t = t_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_8(q_28, v_28, t);
  t = q_28;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  t = term_q_25;
  z_28 = t;
  t = term_h_22;
  a_29 = t;
  t = term_r_25;
  t = x_8(z_28, a_29, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,f_29 = NULL,g_29 = NULL;
  t = term_q_25;
  f_29 = t;
  t = term_h_22;
  g_29 = t;
  t = term_r_25;
  t = x_8(f_29, g_29, t);
  t = term_t_25;
  b_29 = t;
  t = term_h_22;
  c_29 = t;
  t = term_x_25;
  t = x_8(b_29, c_29, t);
  t = term_b_26;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_9, a_10, b_10, t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = Option_3_0(c_10, e_10, f_10, t);
    }
  return(t);
}
static ATerm x_8 (ATerm d_68, ATerm e_68, ATerm t)
{
  ATerm h_29 = NULL,k_29 = NULL;
  t = term_m_14;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, d_68, e_68);
  t = lookup_table_0_1(h_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(d_68, e_68, k_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, d_68, e_68);
  return(t);
}
ATerm Option_3_0 (ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
      t = term_h_22;
      t = l_0(t);
      r_29 = t;
      t = term_p_22;
      s_29 = t;
      t = term_q_22;
      t_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, r_29);
      t = d_9(s_29, t_29, r_29, t);
      _fail(t);
    }
  else
    {
      ATerm a_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_29 = ATgetFirst((ATermList) t);
          p_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_29;
      t = g_0(t);
      t = term_h_22;
      t = j_0(t);
      a_30 = t;
      t = (ATerm) ATinsert(CheckATermList(p_29), a_30);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,f_6 = NULL;
  g_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_30 = ATgetFirst((ATermList) t);
      d_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_30);
  b_30 = t;
  t = c_30;
  t = q_85(t);
  e_30 = t;
  t = d_30;
  t = r_85(t);
  f_30 = t;
  t = (ATerm) ATinsert(CheckATermList(f_30), e_30);
  f_6 = t;
  t = SSLsetAnnotations(f_6, b_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_127 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,t_30 = NULL,v_30 = NULL,w_30 = NULL,m_6 = NULL;
  p_30 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_26;
        t = z_127(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
      }
  }
  t = p_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_30 = ATgetFirst((ATermList) t);
      t_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  q_30 = t;
  t = term_z_21;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, r_30);
  t = x_8(w_30, r_30, t);
  t = t_30;
  {
    static ATerm s_31 (ATerm t);
    static ATerm s_31 (ATerm t)
    {
      ATerm k_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_31 = NULL;
              c_31 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_31;
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              t = z_127(t);
              t = Cons_2_0(_id, s_31, t);
            }
          LocalPopChoice(n_26);
        }
      else
        {
          t = k_26;
          {
            ATerm g_31 = NULL,h_31 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_31 = ATgetFirst((ATermList) t);
                h_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_31), (ATerm) ATmakeAppl(sym_Undefined_1, g_31));
          }
        }
      return(t);
    }
    t = s_31(t);
  }
  v_30 = t;
  t = (ATerm) ATinsert(CheckATermList(v_30), (ATerm) ATmakeAppl(sym_Program_1, r_30));
  m_6 = t;
  t = SSLsetAnnotations(m_6, q_30);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  if(match_string(t, "--help"))
    {
      t = e_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_33;
        }
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  t = term_q_26;
  o_33 = t;
  t = term_h_22;
  p_33 = t;
  t = term_t_26;
  t = x_8(o_33, p_33, t);
  t = term_u_26;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_v_26;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,p_32 = NULL,v_32 = NULL,w_32 = NULL,b_33 = NULL,d_33 = NULL;
  f_32 = t;
  t = term_p_22;
  p_32 = t;
  t = term_w_26;
  t = lookup_table_0_1(p_32, t);
  d_33 = t;
  t = term_q_22;
  v_32 = t;
  t = (ATerm) ATempty;
  w_32 = t;
  t = d_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(v_32, w_32, b_33, t);
  t = f_32;
  {
    static ATerm g_10 (ATerm t);
    static ATerm g_10 (ATerm t)
    {
      ATerm x_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_127(t);
          LocalPopChoice(a_27);
        }
      else
        {
          t = x_26;
          {
            ATerm b_27 = t;
            int f_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_10, m_10, q_10, t);
                LocalPopChoice(f_27);
              }
            else
              {
                t = b_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_10, t);
  }
  {
    ATerm g_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL;
        l_34 = t;
        {
          ATerm k_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL;
              t = l_34;
              {
                ATerm o_27 = t;
                int r_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_7 = NULL,a_8 = NULL;
                    t = term_m_14;
                    z_7 = t;
                    t = term_q_26;
                    a_8 = t;
                    t = term_s_27;
                    t = v_9(z_7, a_8, t);
                    LocalPopChoice(r_27);
                  }
                else
                  {
                    t = o_27;
                    t = fetch_1_0(v_10, t);
                  }
              }
              t = l_34;
              t = x_127(t);
              t = term_t_27;
              v_7 = t;
              t = SSL_exit(v_7);
              LocalPopChoice(n_27);
            }
          else
            {
              t = k_27;
              {
                ATerm f_8 = NULL,i_8 = NULL,j_8 = NULL;
                t = term_m_14;
                i_8 = t;
                t = term_q_25;
                j_8 = t;
                t = term_u_27;
                t = v_9(i_8, j_8, t);
                t = l_34;
                t = y_127(t);
                t = term_t_27;
                f_8 = t;
                t = SSL_exit(f_8);
              }
            }
        }
        LocalPopChoice(j_27);
      }
    else
      {
        t = g_27;
        {
          ATerm b_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_34 = NULL,o_34 = NULL,p_34 = NULL;
              static ATerm w_10 (ATerm t);
              static ATerm w_10 (ATerm t)
              {
                ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,e_11 = NULL;
                t_34 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_34);
                r_34 = t;
                t = s_34;
                if(((d_32 != NULL) && (d_32 != t)))
                  _fail(t);
                else
                  d_32 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_34);
                e_11 = t;
                t = SSLsetAnnotations(e_11, r_34);
                return(t);
              }
              t = fetch_1_0(w_10, t);
              t = term_j_18;
              o_34 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_j_28);
              p_34 = t;
              t = SSL_printnl(o_34, p_34);
              t = (ATerm) ATmakeAppl(sym__2, term_j_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_32)), term_j_28));
              t = x_127(t);
              t = term_e_21;
              m_34 = t;
              t = SSL_exit(m_34);
              LocalPopChoice(i_28);
            }
          else
            {
              t = b_28;
            }
        }
      }
  }
  e_32 = t;
  t = term_p_22;
  t = table_destroy_0_0(t);
  t = e_32;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_n_28;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm xtc_main_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_35 = NULL;
      t = parse_options_3_0(xtc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
      t = debug_1_0(x_10, t);
      t = xtc_push_default_0_0(t);
      t = xtc_show_stack_0_0(t);
      t = debug_1_0(y_10, t);
      {
        ATerm y_28 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_29 = t;
            int i_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_35 = NULL,e_35 = NULL;
                t = term_m_14;
                c_35 = t;
                t = term_p_23;
                e_35 = t;
                t = term_j_29;
                t = v_9(c_35, e_35, t);
                t = xtc_register_0_0(t);
                LocalPopChoice(i_29);
              }
            else
              {
                t = e_29;
                {
                  ATerm g_35 = NULL,k_35 = NULL;
                  t = term_m_14;
                  g_35 = t;
                  t = term_e_19;
                  k_35 = t;
                  t = term_f_19;
                  t = v_9(g_35, k_35, t);
                  t = register_import_0_0(t);
                }
              }
            t = xtc_store_0_0(t);
            LocalPopChoice(d_29);
          }
        else
          {
            t = y_28;
            {
              ATerm o_35 = NULL,p_35 = NULL;
              t = term_m_14;
              o_35 = t;
              t = term_y_23;
              p_35 = t;
              t = term_l_29;
              t = v_9(o_35, p_35, t);
              {
                ATerm m_29 = t;
                int n_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = repository_query_0_0(t);
                    LocalPopChoice(n_29);
                  }
                else
                  {
                    t = m_29;
                    {
                      ATerm q_29 = t;
                      int u_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = all_query_0_0(t);
                          LocalPopChoice(u_29);
                        }
                      else
                        {
                          t = q_29;
                          t = tool_query_0_0(t);
                        }
                    }
                  }
              }
            }
          }
      }
      t = term_t_27;
      a_35 = t;
      t = SSL_exit(a_35);
      LocalPopChoice(x_28);
    }
  else
    {
      t = u_28;
      t = debug_1_0(z_10, t);
    }
  return(t);
}
static ATerm z_8 (ATerm d_81, ATerm e_81, ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  t = e_81;
  t = map_1_0(xtc_find_0_0, t);
  s_35 = t;
  t = term_b_16;
  w_35 = t;
  t = SSL_print(w_35, s_35);
  t = term_b_16;
  u_35 = t;
  t = (ATerm) ATinsert(ATempty, term_d_16);
  v_35 = t;
  t = SSL_print(u_35, v_35);
  t = term_t_27;
  t_35 = t;
  t = SSL_exit(t_35);
  return(t);
}
static ATerm a_9 (ATerm a_69, ATerm b_69, ATerm t)
{
  t = SSL_execvp(a_69, b_69);
  return(t);
}
ATerm debug_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,f_36 = NULL;
  z_35 = t;
  t = o_105(t);
  a_36 = t;
  t = term_j_18;
  b_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_35), a_36);
  f_36 = t;
  t = SSL_printnl(b_36, f_36);
  t = z_35;
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL,n_36 = NULL,q_36 = NULL;
        t = term_m_14;
        n_36 = t;
        t = term_w_14;
        q_36 = t;
        t = term_x_14;
        t = v_9(n_36, q_36, t);
        m_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_36, term_x_29);
        t = geq_0_0(t);
        t = k_36;
        t = f_123(t);
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = k_36;
      }
  }
  return(t);
}
static ATerm c_9 (ATerm p_94 (ATerm), ATerm k_14, ATerm i_14, ATerm t)
{
  ATerm x_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,h_37 = NULL;
  b_37 = t;
  t = p_94(t);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_36, k_14, i_14);
  t = d_9(x_36, k_14, i_14, t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_37 = NULL;
        t = term_h_30;
        i_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_36, term_h_30);
        t = v_9(x_36, i_37, t);
        {
          ATerm i_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_30;
            }
        }
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_36 = ATgetFirst((ATermList) t);
      a_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_36, term_h_30, (ATerm) ATinsert(CheckATermList(a_37), (ATerm) ATinsert(CheckATermList(z_36), k_14)));
  t = lookup_table_0_1(x_36, t);
  h_37 = t;
  t = term_h_30;
  c_37 = t;
  t = (ATerm) ATinsert(CheckATermList(a_37), (ATerm) ATinsert(CheckATermList(z_36), k_14));
  d_37 = t;
  t = h_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(c_37, d_37, e_37, t);
  t = b_37;
  return(t);
}
static ATerm d_9 (ATerm j_53, ATerm k_53, ATerm i_53, ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_30 = ATgetArgument(t, 0);
            ATerm m_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
        t = v_9(j_53, k_53, t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATempty;
      }
  }
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_53, k_53, (ATerm) ATinsert(CheckATermList(l_37), i_53));
  t = lookup_table_0_1(j_53, t);
  o_37 = t;
  t = (ATerm) ATinsert(CheckATermList(l_37), i_53);
  m_37 = t;
  t = o_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(k_53, m_37, n_37, t);
  t = k_37;
  return(t);
}
static ATerm e_9 (ATerm a_33, ATerm c_297, ATerm t)
{
  static ATerm a_11 (ATerm t);
  static ATerm a_11 (ATerm t)
  {
    if((a_33 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = c_297;
  t = fetch_1_0(a_11, t);
  return(t);
}
static ATerm f_9 (ATerm s_94 (ATerm), ATerm v_14, ATerm t_14, ATerm t)
{
  ATerm v_37 = NULL,x_37 = NULL,y_37 = NULL,e_38 = NULL,n_38 = NULL,o_38 = NULL;
  o_38 = t;
  t = s_94(t);
  y_37 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_38 = NULL;
        t = term_h_30;
        r_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_37, term_h_30);
        t = v_9(y_37, r_38, t);
        {
          ATerm s_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_30;
            }
        }
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_38 = ATgetFirst((ATermList) t);
      n_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm u_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_38 = NULL,u_38 = NULL,a_39 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, v_14, e_38);
        t = e_9(v_14, e_38, t);
        t = (ATerm) ATmakeAppl(sym__2, y_37, v_14);
        t = v_9(y_37, v_14, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_37 = ATgetFirst((ATermList) t);
            x_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, y_37, v_14, (ATerm) ATinsert(CheckATermList(x_37), (ATerm) ATinsert(CheckATermList(v_37), t_14)));
        t = lookup_table_0_1(y_37, t);
        a_39 = t;
        t = (ATerm) ATinsert(CheckATermList(x_37), (ATerm) ATinsert(CheckATermList(v_37), t_14));
        s_38 = t;
        t = a_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_9(v_14, s_38, u_38, t);
        t = (ATerm) ATmakeAppl(sym__3, y_37, v_14, (ATerm) ATinsert(CheckATermList(x_37), (ATerm) ATinsert(CheckATermList(v_37), t_14)));
        LocalPopChoice(x_30);
      }
    else
      {
        t = u_30;
        {
          ATerm e_39 = NULL,h_39 = NULL,i_39 = NULL,o_39 = NULL,p_39 = NULL;
          t = (ATerm) ATinsert(ATempty, t_14);
          p_39 = t;
          t = (ATerm) ATmakeAppl(sym__3, y_37, v_14, (ATerm) ATinsert(ATempty, t_14));
          t = d_9(y_37, v_14, p_39, t);
          t = (ATerm) ATmakeAppl(sym__3, y_37, term_h_30, (ATerm) ATinsert(CheckATermList(n_38), (ATerm) ATinsert(CheckATermList(e_38), v_14)));
          t = lookup_table_0_1(y_37, t);
          o_39 = t;
          t = term_h_30;
          e_39 = t;
          t = (ATerm) ATinsert(CheckATermList(n_38), (ATerm) ATinsert(CheckATermList(e_38), v_14));
          h_39 = t;
          t = o_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_9(e_39, h_39, i_39, t);
          t = (ATerm) ATmakeAppl(sym__3, y_37, term_h_30, (ATerm) ATinsert(CheckATermList(n_38), (ATerm) ATinsert(CheckATermList(e_38), v_14)));
        }
      }
  }
  t = o_38;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_39 = NULL,x_39 = NULL,z_39 = NULL;
        t = term_m_14;
        x_39 = t;
        t = term_w_14;
        z_39 = t;
        t = term_x_14;
        t = v_9(x_39, z_39, t);
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_39, term_a_31);
        t = geq_0_0(t);
        t = t_39;
        t = e_123(t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = t_39;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_40 = NULL,t_40 = NULL,w_40 = NULL;
  q_40 = t;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_40;
        if((t_40 != t))
          {
            _fail(t);
          }
        t = q_40;
        LocalPopChoice(d_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATmakeAppl(sym__2, t_40, w_40);
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_40, w_40);
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              t = SSL_gtr(t_40, w_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_40, w_40);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  ATerm b_41 = NULL;
  b_41 = t;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_41 = NULL,g_41 = NULL,i_41 = NULL;
        t = term_m_14;
        g_41 = t;
        t = term_w_14;
        i_41 = t;
        t = term_x_14;
        t = v_9(g_41, i_41, t);
        f_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_41, term_k_31);
        t = geq_0_0(t);
        t = b_41;
        t = g_123(t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = b_41;
      }
  }
  return(t);
}
static ATerm i_9 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm l_38, ATerm k_38, ATerm t)
{
  t = l_110(t);
  {
    static ATerm b_11 (ATerm t);
    static ATerm b_11 (ATerm t)
    {
      ATerm k_41 = NULL;
      k_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_38, k_41);
      t = k_110(t);
      return(t);
    }
    t = fetch_1_0(b_11, t);
  }
  t = k_38;
  return(t);
}
static ATerm j_9 (ATerm h_110 (ATerm), ATerm h_38, ATerm g_38, ATerm t)
{
  static ATerm c_42 (ATerm t);
  static ATerm c_42 (ATerm t)
  {
    ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
    x_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_41 = ATgetFirst((ATermList) t);
            z_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_41;
              {
                static ATerm d_11 (ATerm t);
                static ATerm d_11 (ATerm t)
                {
                  t = g_38;
                  return(t);
                }
                t = i_9(h_110, d_11, y_41, z_41, t);
              }
              t = c_42(t);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              {
                ATerm h_10 = NULL,p_10 = NULL,i_11 = NULL;
                t = SSLgetAnnotations(x_41);
                h_10 = t;
                t = z_41;
                t = c_42(t);
                p_10 = t;
                t = (ATerm) ATinsert(CheckATermList(p_10), y_41);
                i_11 = t;
                t = SSLsetAnnotations(i_11, h_10);
              }
            }
        }
      }
    return(t);
  }
  t = h_38;
  t = c_42(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm j_42 = NULL;
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      if((j_42 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm hashtable_pushunion_0_2 (ATerm h_57, ATerm i_57, ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  e_42 = t;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_42 = NULL;
        t = e_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_9(h_57, i_42, t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATempty;
      }
  }
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_57, g_42);
  t = j_9(f_11, i_57, g_42, t);
  f_42 = t;
  t = e_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(h_57, f_42, h_42, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_p_31;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_42 = NULL,o_42 = NULL;
      n_42 = t;
      t = (ATerm) ATinsert(ATempty, term_u_31);
      o_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_42, (ATerm) ATinsert(ATempty, term_u_31));
      t = q_9(n_42, o_42, t);
      LocalPopChoice(t_31);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_31 = t;
            if((PushChoice() == 0))
              {
                ATerm p_42 = NULL,v_42 = NULL;
                p_42 = t;
                t = (ATerm) ATinsert(ATempty, term_y_31);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_42, (ATerm) ATinsert(ATempty, term_y_31));
                t = q_9(p_42, v_42, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_31;
              }
            t = debug_1_0(g_11, t);
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            t = debug_1_0(j_11, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = debug_1_0(n_11, t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = debug_1_0(p_11, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = debug_1_0(s_11, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,d_44 = NULL;
  a_44 = t;
  t = term_j_18;
  b_44 = t;
  t = (ATerm) ATinsert(ATempty, term_i_32);
  d_44 = t;
  t = SSL_printnl(b_44, d_44);
  t = a_44;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  q_44 = t;
  if(match_cons(t, sym__2))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
      {
        ATerm j_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_11 = NULL,h_11 = NULL,k_11 = NULL;
            t = SSLgetAnnotations(q_44);
            c_11 = t;
            t = o_44;
            if(match_cons(t, sym_Tool_1))
              {
                h_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, h_11, p_44);
            k_11 = t;
            t = SSLsetAnnotations(k_11, c_11);
            LocalPopChoice(l_32);
          }
        else
          {
            t = j_32;
            t = q_44;
          }
      }
    }
  else
    {
      t = q_44;
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  t = term_j_18;
  u_44 = t;
  t = (ATerm) ATinsert(ATempty, term_m_32);
  v_44 = t;
  t = SSL_printnl(u_44, v_44);
  t = t_44;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  t = term_j_18;
  x_44 = t;
  t = (ATerm) ATinsert(ATempty, term_i_32);
  y_44 = t;
  t = SSL_printnl(x_44, y_44);
  t = w_44;
  return(t);
}
ATerm xtc_read_0_1 (ATerm p_78, ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,r_43 = NULL,s_43 = NULL;
  b_43 = t;
  t = if_verbose5_1_0(l_11, t);
  h_43 = t;
  {
    ATerm n_32 = t;
    if((PushChoice() == 0))
      {
        ATerm t_43 = NULL,y_43 = NULL;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_43);
        t_43 = t;
        t = p_78;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_9(t_43, y_43, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_32;
      }
  }
  t = h_43;
  t = if_verbose5_1_0(o_11, t);
  f_43 = t;
  t = term_o_32;
  p_43 = t;
  t = (ATerm) ATinsert(ATempty, b_43);
  r_43 = t;
  t = p_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(p_43, r_43, s_43, t);
  t = f_43;
  t = if_verbose4_1_0(r_11, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_11, t);
  t = map_1_0(w_11, t);
  c_43 = t;
  {
    static ATerm x_11 (ATerm t);
    static ATerm x_11 (ATerm t)
    {
      ATerm b_12 = NULL,c_12 = NULL;
      if(match_cons(t, sym__2))
        {
          b_12 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_78;
      t = hashtable_pushunion_0_2(b_12, c_12, t);
      return(t);
    }
    t = map_1_0(x_11, t);
  }
  t = p_78;
  t = if_verbose6_1_0(z_11, t);
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_43);
  i_43 = t;
  t = (ATerm) ATempty;
  n_43 = t;
  t = p_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(i_43, n_43, o_43, t);
  t = if_verbose4_1_0(a_12, t);
  return(t);
}
ATerm filter_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_45;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_45 = ATgetFirst((ATermList) t);
          n_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_12 = NULL,c_13 = NULL,e_13 = NULL,m_11 = NULL;
            t = SSLgetAnnotations(l_45);
            o_12 = t;
            t = m_45;
            t = z_113(t);
            c_13 = t;
            t = n_45;
            t = filter_1_0(z_113, t);
            e_13 = t;
            t = (ATerm) ATinsert(CheckATermList(e_13), c_13);
            m_11 = t;
            t = SSLsetAnnotations(m_11, o_12);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            t = n_45;
            t = filter_1_0(z_113, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  static ATerm t_45 (ATerm t);
  static ATerm t_45 (ATerm t)
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_98(t);
        t = t_45(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = o_98(t);
      }
    return(t);
  }
  t = t_45(t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_u_32;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  {
    static ATerm g_12 (ATerm t);
    static ATerm g_12 (ATerm t)
    {
      ATerm x_45 = NULL,y_45 = NULL;
      t = term_g_19;
      x_45 = t;
      t = w_45;
      if(match_cons(t, sym_Hashtable_1))
        {
          y_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_9(x_45, y_45, t);
      t = debug_1_0(j_12, t);
      {
        static ATerm k_12 (ATerm t);
        static ATerm k_12 (ATerm t)
        {
          t = xtc_read_0_1(w_45, t);
          return(t);
        }
        t = filter_1_0(k_12, t);
      }
      t = debug_1_0(m_12, t);
      {
        ATerm y_32 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_32;
          }
      }
      return(t);
    }
    t = repeat_2_0(g_12, _id, t);
  }
  t = w_45;
  return(t);
}
ATerm map_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  static ATerm s_46 (ATerm t);
  static ATerm s_46 (ATerm t)
  {
    ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
    p_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_46;
      }
    else
      {
        ATerm a_14 = NULL,g_14 = NULL,h_14 = NULL,q_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_46 = ATgetFirst((ATermList) t);
            r_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_46);
        a_14 = t;
        t = q_46;
        t = y_105(t);
        g_14 = t;
        t = r_46;
        t = s_46(t);
        h_14 = t;
        t = (ATerm) ATinsert(CheckATermList(h_14), g_14);
        q_11 = t;
        t = SSLsetAnnotations(q_11, a_14);
      }
    return(t);
  }
  t = s_46(t);
  return(t);
}
ATerm hashtable_putlist_0_1 (ATerm p_57, ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t = p_57;
  {
    static ATerm n_12 (ATerm t);
    static ATerm n_12 (ATerm t)
    {
      ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
      if(match_cons(t, sym__2))
        {
          v_46 = ATgetArgument(t, 0);
          w_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_46;
      if(match_cons(t, sym_Hashtable_1))
        {
          x_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_9(v_46, w_46, x_46, t);
      return(t);
    }
    t = map_1_0(n_12, t);
  }
  t = u_46;
  return(t);
}
static ATerm k_9 (ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm z_32 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_51, t_51);
      LocalPopChoice(c_33);
    }
  else
    {
      t = z_32;
      t = SSL_addr(s_51, t_51);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_46;
      t = x_112(t);
    }
  else
    {
      ATerm e_47 = NULL,f_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_47 = ATgetFirst((ATermList) t);
          b_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_47;
      t = z_112(t);
      e_47 = t;
      t = b_47;
      t = foldr_3_0(x_112, y_112, z_112, t);
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_47, f_47);
      t = y_112(t);
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  if(match_cons(t, sym__2))
    {
      k_47 = ATgetArgument(t, 0);
      l_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(k_47, l_47, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm hashtable_init_0_0 (ATerm t)
{
  ATerm g_47 = NULL,i_47 = NULL,j_47 = NULL;
  g_47 = t;
  t = foldr_3_0(p_12, w_12, b_13, t);
  j_47 = t;
  t = term_f_33;
  i_47 = t;
  t = g_47;
  t = new_hashtable_0_2(j_47, i_47, t);
  t = hashtable_putlist_0_1(g_47, t);
  return(t);
}
static ATerm l_9 (ATerm g_32, ATerm t)
{
  t = SSL_read_term_from_stream(g_32);
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,w_47 = NULL;
  w_47 = t;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_47, term_i_33);
        t = o_9(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm s_14 = NULL,u_14 = NULL;
          t = term_j_33;
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_33, w_47);
          t = r_9(u_14, w_47, t);
          s_14 = t;
          t = SSL_perror(s_14);
          _fail(t);
        }
      }
  }
  q_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_9(r_47, t);
  p_47 = t;
  t = q_47;
  t = fclose_0_0(t);
  t = p_47;
  return(t);
}
static ATerm q_9 (ATerm n_47, ATerm o_47, ATerm t)
{
  t = SSL_access(n_47, o_47);
  return(t);
}
static ATerm m_9 (ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm d_48 = NULL;
  t = SSL_write_term_to_stream_baf(a_32, b_32);
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_48);
  return(t);
}
static ATerm r_48 (ATerm l_48, ATerm t)
{
  t = SSL_fclose(l_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_48 = ATgetArgument(t, 0);
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_48);
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            t = r_48(p_48, t);
          }
      }
    }
  else
    {
      t = r_48(p_48, t);
    }
  return(t);
}
static ATerm n_9 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm s_48 = NULL;
  t = SSL_fopen(z_47, a_48);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_48 = NULL;
  t = SSL_stdin_stream();
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_48 = NULL;
  t = SSL_stdout_stream();
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_stderr_stream();
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_48);
  return(t);
}
static ATerm c_50 (ATerm b_49, ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_explode_term(b_49);
  if(match_cons(t, sym__2))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_33 = ATgetArgument(t, 1);
        if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
          {
            c_49 = ATgetFirst((ATermList) n_33);
            {
              ATerm q_33 = (ATerm) ATgetNext((ATermList) n_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_50 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(h_49);
  k_49 = t;
  t = f_49;
  if(match_cons(t, sym_Path_1))
    {
      n_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_49, g_49);
  t_11 = t;
  t = SSLsetAnnotations(t_11, k_49);
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(i_49, j_49, t);
  return(t);
}
static ATerm e_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,x_49 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(r_49);
  u_49 = t;
  t = SSL_is_string(p_49);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_49, q_49);
  v_11 = t;
  t = SSLsetAnnotations(v_11, u_49);
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(s_49, t_49, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
      {
        ATerm r_33 = t;
        int s_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_50(z_49, t);
            LocalPopChoice(s_33);
          }
        else
          {
            t = r_33;
            {
              ATerm t_33 = t;
              int u_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_50(a_50, b_50, z_49, t);
                  LocalPopChoice(u_33);
                }
              else
                {
                  t = t_33;
                  t = e_50(a_50, b_50, z_49, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_50(z_49, t);
    }
  return(t);
}
static ATerm p_9 (ATerm q_105 (ATerm), ATerm o_285, ATerm k_32, ATerm t)
{
  ATerm f_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_285, term_v_33);
  t = o_9(t);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, k_32);
  t = q_105(t);
  t = fclose_0_0(t);
  t = k_32;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(match_cons(w_33, sym_Stream_1))
        {
          h_50 = ATgetArgument(w_33, 0);
        }
      else
        _fail(t);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(h_50, i_50, t);
  return(t);
}
ATerm create_new_file_0_1 (ATerm j_78, ATerm t)
{
  ATerm g_50 = NULL;
  t = (ATerm) ATempty;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_78, (ATerm) ATempty);
  t = p_9(f_13, j_78, g_50, t);
  t = (ATerm) ATmakeAppl(sym_RepoFile_1, j_78);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = XtcFilesAndTables_0_0(t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = xtc_file_to_table_new_0_0(t);
      }
  }
  if(match_cons(t, sym_NestedTable_1))
    {
      ATerm z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm k_50 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_50 = NULL,a_16 = NULL;
      o_50 = t;
      t = term_c_34;
      a_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_50, term_c_34);
      t = r_9(o_50, a_16, t);
      k_50 = t;
      t = SSL_mkstemp(k_50);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm p_50 = NULL;
        t = term_d_34;
        p_50 = t;
        t = SSL_perror(p_50);
        _fail(t);
      }
    }
  return(t);
}
static ATerm r_9 (ATerm d_46, ATerm e_46, ATerm t)
{
  t = SSL_strcat(d_46, e_46);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_50 = NULL;
      t = term_g_34;
      r_50 = t;
      t = SSL_getenv(r_50);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
  t = temp_dir_0_0(t);
  v_50 = t;
  t = term_i_34;
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, term_i_34);
  t = r_9(v_50, w_50, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_22;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_50, term_h_22);
  t = c_9(g_13, t_50, u_50, t);
  t = SSL_close(s_50);
  t = t_50;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_k_34;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_h_18;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_h_18;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_h_18;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_h_18;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm xtc_file_to_table_new_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  j_51 = t;
  if(match_cons(t, sym_NewTable_0))
    {
      ATerm e_16 = NULL,f_16 = NULL;
      t = j_51;
      t = xtc_new_file_0_0(t);
      e_16 = t;
      t = create_new_file_0_1(e_16, t);
      if(match_cons(t, sym_NestedTable_1))
        {
          f_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_RepoFile_1, e_16), (ATerm) ATmakeAppl(sym_NestedTable_1, f_16));
    }
  else
    {
      if(match_cons(t, sym_RepoFile_1))
        {
          k_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm q_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_16 = NULL;
            t = k_51;
            {
              ATerm v_34 = t;
              if((PushChoice() == 0))
                {
                  ATerm u_16 = NULL,x_16 = NULL;
                  u_16 = t;
                  t = (ATerm) ATinsert(ATempty, term_y_31);
                  x_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_16, (ATerm) ATinsert(ATempty, term_y_31));
                  t = q_9(u_16, x_16, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_34;
                }
            }
            t = create_new_file_0_1(k_51, t);
            if(match_cons(t, sym_NestedTable_1))
              {
                n_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_NestedTable_1, n_16);
            LocalPopChoice(u_34);
          }
        else
          {
            t = q_34;
            {
              ATerm l_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
              t = j_51;
              t = debug_1_0(h_13, t);
              t = (ATerm) ATinsert(ATempty, term_u_31);
              y_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_51, (ATerm) ATinsert(ATempty, term_u_31));
              t = q_9(k_51, y_51, t);
              t = ReadFromFile_0_0(t);
              t = hashtable_init_0_0(t);
              t = xtc_import_0_0(t);
              l_51 = t;
              t = debug_1_0(j_13, t);
              t = term_u_17;
              w_51 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_17, k_51);
              x_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATmakeAppl(sym_Defined_2, term_v_17, k_51));
              t = f_9(k_13, w_51, x_51, t);
              t = term_c_17;
              u_51 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_17, l_51);
              v_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATmakeAppl(sym_Defined_2, term_e_17, l_51));
              t = f_9(r_13, u_51, v_51, t);
              t = (ATerm) ATmakeAppl(sym_RepoFile_1, k_51);
              q_51 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, l_51);
              r_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_RepoFile_1, k_51), (ATerm) ATmakeAppl(sym_Defined_2, term_w_34, l_51));
              t = c_9(t_13, q_51, r_51, t);
              t = (ATerm) ATmakeAppl(sym_NestedTable_1, l_51);
              o_51 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_34, k_51);
              p_51 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_NestedTable_1, l_51), (ATerm) ATmakeAppl(sym_Defined_2, term_x_34, k_51));
              t = c_9(u_13, o_51, p_51, t);
              t = (ATerm) ATmakeAppl(sym_RepoFile_1, k_51);
              t = XtcFilesAndTables_0_0(t);
              t = debug_1_0(v_13, t);
              t = (ATerm) ATmakeAppl(sym_NestedTable_1, l_51);
            }
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm u_53, ATerm v_53, ATerm t)
{
  ATerm b_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_53, v_53);
  t = v_9(u_53, v_53, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_52 = ATgetFirst((ATermList) t);
      {
        ATerm y_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_52;
  return(t);
}
ATerm XtcFilesAndTables_0_0 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  d_53 = t;
  if(match_cons(t, sym_Changed_1))
    {
      e_53 = ATgetArgument(t, 0);
      {
        ATerm a_19 = NULL;
        t = e_53;
        if(match_cons(t, sym_NestedTable_1))
          {
            c_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_h_18;
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_18, d_53);
        t = s_9(a_19, d_53, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_34) != ATmakeSymbol("c_4", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Changed_1, (ATerm) ATmakeAppl(sym_NestedTable_1, c_53));
      }
    }
  else
    {
      if(match_cons(t, sym_Tables_0))
        {
          ATerm k_19 = NULL,n_19 = NULL;
          t = term_h_18;
          n_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_18, d_53);
          t = s_9(n_19, d_53, t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_35 = ATgetFirst((ATermList) t);
              if(match_cons(b_35, sym_Defined_2))
                {
                  ATerm f_35 = ATgetArgument(b_35, 0);
                  if((ATgetSymbol((ATermAppl) f_35) != ATmakeSymbol("j_2", 0, ATtrue)))
                    _fail(t);
                  k_19 = ATgetArgument(b_35, 1);
                }
              else
                _fail(t);
              {
                ATerm d_35 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_NestedTable_1, k_19);
        }
      else
        {
          if(match_cons(t, sym_Files_0))
            {
              ATerm v_19 = NULL,f_20 = NULL;
              t = term_h_18;
              f_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_h_18, d_53);
              t = s_9(f_20, d_53, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_35 = ATgetFirst((ATermList) t);
                  if(match_cons(h_35, sym_Defined_2))
                    {
                      ATerm j_35 = ATgetArgument(h_35, 0);
                      if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("p_0", 0, ATtrue)))
                        _fail(t);
                      v_19 = ATgetArgument(h_35, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_35 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_RepoFile_1, v_19);
            }
          else
            {
              ATerm l_35 = t;
              int m_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_NestedTable_1))
                    {
                      ATerm n_35 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_35);
                  {
                    ATerm s_20 = NULL,x_20 = NULL;
                    t = term_h_18;
                    x_20 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_h_18, d_53);
                    t = s_9(x_20, d_53, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm q_35 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_35) != ATmakeSymbol("a_4", 0, ATtrue)))
                          _fail(t);
                        s_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_RepoFile_1, s_20);
                  }
                }
              else
                {
                  t = l_35;
                  {
                    ATerm d_21 = NULL,h_21 = NULL;
                    if(match_cons(t, sym_RepoFile_1))
                      {
                        ATerm r_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_h_18;
                    h_21 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_h_18, d_53);
                    t = s_9(h_21, d_53, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_35 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_35) != ATmakeSymbol("y_3", 0, ATtrue)))
                          _fail(t);
                        d_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_NestedTable_1, d_21);
                  }
                }
            }
        }
    }
  return(t);
}
ATerm nestedtable_get_aux_1_1 (ATerm d_0 (ATerm), ATerm f_0, ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,l_54 = NULL,m_54 = NULL;
  m_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_54 = ATgetFirst((ATermList) t);
      l_54 = (ATerm) ATgetNext((ATermList) t);
      t = l_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          h_54 = (ATerm) ATgetNext((ATermList) t);
          {
            ATerm a_22 = NULL,c_22 = NULL;
            t = f_0;
            if(match_cons(t, sym_Hashtable_1))
              {
                c_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_9(i_54, c_22, t);
            t = d_0(t);
            if(match_cons(t, sym_NestedTable_1))
              {
                a_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_54), g_54);
            t = nestedtable_get_aux_1_1(d_0, a_22, t);
          }
        }
      else
        {
          ATerm m_22 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_0;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_9(i_54, m_22, t);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_0;
    }
  return(t);
}
ATerm nestedtable_get_1_1 (ATerm t_120 (ATerm), ATerm o_59, ATerm t)
{
  ATerm p_54 = NULL;
  t = t_120(t);
  if(match_cons(t, sym_NestedTable_1))
    {
      p_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_59;
  t = nestedtable_get_aux_1_1(t_120, p_54, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  static ATerm s_55 (ATerm t);
  static ATerm s_55 (ATerm t)
  {
    ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
    p_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_55 = ATgetFirst((ATermList) t);
        r_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_35 = t;
      int c_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_22 = NULL,g_23 = NULL,y_11 = NULL;
          t = SSLgetAnnotations(p_55);
          v_22 = t;
          t = q_55;
          t = g_106(t);
          g_23 = t;
          t = (ATerm) ATinsert(CheckATermList(r_55), g_23);
          y_11 = t;
          t = SSLsetAnnotations(y_11, v_22);
          LocalPopChoice(c_36);
        }
      else
        {
          t = y_35;
          {
            ATerm s_23 = NULL,v_23 = NULL,f_12 = NULL;
            t = SSLgetAnnotations(p_55);
            s_23 = t;
            t = r_55;
            t = s_55(t);
            v_23 = t;
            t = (ATerm) ATinsert(CheckATermList(v_23), q_55);
            f_12 = t;
            t = SSLsetAnnotations(f_12, s_23);
          }
        }
    }
    return(t);
  }
  t = s_55(t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm v_55 = NULL;
  static ATerm y_13 (ATerm t);
  static ATerm y_13 (ATerm t)
  {
    t = i_106(t);
    if(((v_55 != NULL) && (v_55 != t)))
      _fail(t);
    else
      v_55 = t;
    return(t);
  }
  t = fetch_1_0(y_13, t);
  t = not_null(v_55);
  return(t);
}
static ATerm u_9 (ATerm y_57, ATerm z_57, ATerm a_58, ATerm t)
{
  ATerm w_55 = NULL;
  t = SSL_hashtable_put(a_58, y_57, z_57);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_55);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm x_55 = NULL;
  t = SSL_hashtable_create(g_58, h_58);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,c_56 = NULL,d_56 = NULL;
  y_55 = t;
  t = term_d_36;
  c_56 = t;
  t = term_f_33;
  d_56 = t;
  t = y_55;
  t = new_hashtable_0_2(c_56, d_56, t);
  z_55 = t;
  t = y_55;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(y_55, z_55, a_56, t);
  t = y_55;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_56 = NULL;
  t = SSL_table_hashtable();
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_56);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_54, ATerm t)
{
  ATerm n_56 = NULL;
  t = table_hashtable_0_0(t);
  n_56 = t;
  {
    ATerm e_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        t = n_56;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_9(v_54, e_24, t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = e_36;
        {
          ATerm j_24 = NULL;
          t = v_54;
          t = table_create_0_0(t);
          t = n_56;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_9(v_54, j_24, t);
        }
      }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_56 = NULL,r_56 = NULL;
      t = term_m_14;
      q_56 = t;
      t = term_m_23;
      r_56 = t;
      t = term_j_36;
      t = v_9(q_56, r_56, t);
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm l_36 = t;
        int o_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_56 = NULL;
            t = term_p_36;
            s_56 = t;
            t = SSL_getenv(s_56);
            LocalPopChoice(o_36);
          }
        else
          {
            t = l_36;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm b_58, ATerm c_58, ATerm t)
{
  t = SSL_hashtable_get(c_58, b_58);
  return(t);
}
static ATerm v_9 (ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm t_56 = NULL;
  t = lookup_table_0_1(c_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_9(d_55, t_56, t);
  return(t);
}
ATerm xtc_get_stack_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_56 = NULL,w_56 = NULL;
      t = term_v_16;
      v_56 = t;
      t = term_y_21;
      w_56 = t;
      t = term_t_36;
      t = v_9(v_56, w_56, t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
        t = xtc_location_0_0(t);
        x_56 = t;
        t = term_v_16;
        y_56 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_v_16, term_y_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RepoFile_1, x_56)));
        t = lookup_table_0_1(y_56, t);
        c_57 = t;
        t = term_y_21;
        z_56 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RepoFile_1, x_56));
        a_57 = t;
        t = c_57;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_9(z_56, a_57, b_57, t);
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RepoFile_1, x_56));
      }
    }
  return(t);
}
static ATerm x_58 (ATerm j_58, ATerm t)
{
  ATerm k_58 = NULL;
  t = SSL_is_string(j_58);
  k_58 = t;
  t = (ATerm) ATinsert(ATempty, k_58);
  t = xtc_find_loc_0_0(t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = XtcFilesAndTables_0_0(t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = xtc_file_to_table_new_0_0(t);
    }
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm n_58 = NULL,p_58 = NULL;
  p_58 = t;
  {
    ATerm w_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_37 = ATgetFirst((ATermList) t);
            ATerm g_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_36);
        {
          ATerm j_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_24 = NULL,w_24 = NULL;
              t = p_58;
              t = xtc_get_stack_0_0(t);
              {
                static ATerm z_13 (ATerm t);
                static ATerm z_13 (ATerm t)
                {
                  t = nestedtable_get_1_1(c_14, p_58, t);
                  return(t);
                }
                t = fetch_elem_1_0(z_13, t);
              }
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_24 = ATgetFirst((ATermList) t);
                  {
                    ATerm q_37 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(u_24);
              if(match_cons(t, sym__2))
                {
                  ATerm r_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_37) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_37 = ATgetArgument(t, 1);
                    if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
                      {
                        ATerm t_37 = ATgetFirst((ATermList) s_37);
                        ATerm u_37 = (ATerm) ATgetNext((ATermList) s_37);
                        if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
                          {
                            w_24 = ATgetFirst((ATermList) u_37);
                            {
                              ATerm w_37 = (ATerm) ATgetNext((ATermList) u_37);
                            }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = w_24;
              LocalPopChoice(p_37);
            }
          else
            {
              t = j_37;
              t = x_58(p_58, t);
            }
        }
      }
    else
      {
        t = w_36;
        if(match_cons(t, sym_Tool_1))
          {
            n_58 = ATgetArgument(t, 0);
            {
              ATerm z_37 = t;
              int a_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATempty, n_58);
                  t = xtc_find_loc_0_0(t);
                  LocalPopChoice(a_38);
                }
              else
                {
                  t = z_37;
                  t = x_58(p_58, t);
                }
            }
          }
        else
          {
            t = x_58(p_58, t);
          }
      }
  }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = debug_1_0(e_14, t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = debug_1_0(l_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(d_14, t);
      t = xtc_find_loc_0_0(t);
      t = if_verbose5_1_0(j_14, t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = d_38;
      {
        ATerm i_59 = NULL,f_25 = NULL,g_25 = NULL;
        i_59 = t;
        t = term_j_18;
        f_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_38), i_59), term_i_38);
        g_25 = t;
        t = SSL_printnl(f_25, g_25);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_38), i_59), term_i_38);
        _fail(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm m_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
      v_59 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_59 = ATgetFirst((ATermList) t);
          x_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_59 = ATgetFirst((ATermList) t);
          z_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_59;
      if(match_string(t, "call"))
        {
          ATerm d_60 = NULL;
          t = z_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_59 = ATgetFirst((ATermList) t);
              u_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_59;
          t = xtc_find_0_0(t);
          d_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_60, u_59);
          t = a_9(d_60, u_59, t);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("get", 0, ATtrue)))
            _fail(t);
          t = v_59;
          t = z_8(w_59, z_59, t);
        }
      LocalPopChoice(p_38);
    }
  else
    {
      t = m_38;
      t = xtc_main_0_0(t);
    }
  return(t);
}
