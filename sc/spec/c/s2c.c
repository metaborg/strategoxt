#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_Match_2;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
Symbol sym_Include_1;
Symbol sym_InitCachedTerms_0;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_As_2;
Symbol sym_List_1;
Symbol sym_BuildDefault_1;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_StringLit_1;
Symbol sym_IdDecl_3;
Symbol sym_TranslationUnit_1;
Symbol sym_FunDef_3;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Return_1;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Stat_1;
Symbol sym_Compound_2;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_TypeSpec_3;
Symbol sym_DeclInit_2;
Symbol sym_AssignInit_1;
Symbol sym_Declaration2_2;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Void_0;
Symbol sym_EmptyExp_0;
Symbol sym_AssignEq_0;
Symbol sym_Assign_3;
Symbol sym_LOr_2;
Symbol sym_LAnd_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_TypeCast_2;
Symbol sym_Address_1;
Symbol sym_Negation_1;
Symbol sym_FunCall_2;
Symbol sym_TypeName_2;
Symbol sym_TypeName_2;
Symbol sym_ParamDecl_2;
Symbol sym_FunType_2;
Symbol sym_ParamList_1;
Symbol sym_PointerOf_1;
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
Symbol sym_Scopes_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_InitCachedTerms_0 = ATmakeSymbol("InitCachedTerms", 0, ATfalse);
  ATprotectSymbol(sym_InitCachedTerms_0);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
  ATprotectSymbol(sym_Goto_1);
  sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
  ATprotectSymbol(sym_Continue_0);
  sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
  ATprotectSymbol(sym_Return_1);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
  ATprotectSymbol(sym_DeclInit_2);
  sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
  ATprotectSymbol(sym_AssignInit_1);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
  ATprotectSymbol(sym_Char_0);
  sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
  ATprotectSymbol(sym_Void_0);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
  sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
  ATprotectSymbol(sym_AssignEq_0);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
  ATprotectSymbol(sym_Address_1);
  sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
  ATprotectSymbol(sym_Negation_1);
  sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
  ATprotectSymbol(sym_FunCall_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_n_57;
ATerm term_x_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_p_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_n_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_i_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_l_51;
ATerm term_i_51;
ATerm term_g_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_d_50;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_l_34;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_l_20;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
void init_constant_terms (void)
{
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Id_1, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_18, (ATerm) ATempty);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_19, (ATerm) ATempty);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_19, term_c_19);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Id_1, term_y_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Id_1, term_c_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Id_1, term_k_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Id_1, term_u_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_IntConst_1, term_w_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Id_1, term_y_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Id_1, term_c_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Id_1, term_e_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Id_1, term_x_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Id_1, term_z_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Id_1, term_d_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, term_e_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Id_1, term_m_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_n_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Id_1, term_e_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Equal_2, term_g_25, term_x_22);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Id_1, term_i_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_25, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Id_1, term_m_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, term_n_24);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_o_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Id_1, term_s_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_25, (ATerm) ATempty);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Equal_2, term_u_25, term_x_22);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Id_1, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Id_1, term_g_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Id_1, term_x_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Id_1, term_m_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_27, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_27, term_c_19);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Id_1, term_s_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Id_1, term_w_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Id_1, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Id_1, term_a_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Id_1, term_o_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Id_1, term_u_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Id_1, term_z_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Id_1, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_29, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_29, term_c_19);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Id_1, term_k_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Id_1, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_29, (ATerm) ATempty);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_29, term_c_19);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Id_1, term_v_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_29, (ATerm) ATempty);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_29, term_c_19);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Id_1, term_m_32);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Id_1, term_u_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Id_1, term_c_33);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_27, term_n_24);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Return_1, term_n_24);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_Id_1, term_d_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_n_24, term_c_19);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_19, term_n_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Id_1, term_x_36);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Id_1, term_z_36);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATempty);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Stat_1, term_b_37);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Id_1, term_d_37);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_37);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_38, (ATerm) ATempty);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_48);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_48, (ATerm) ATempty);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym_Some_1, term_r_48);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_18, term_s_48);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Id_1, term_u_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_48, (ATerm) ATempty);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Id_1, term_z_48);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Id_1, term_b_49);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_49);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_49, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_SDefT_4, term_f_49, (ATerm)ATempty, (ATerm)ATempty, term_i_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym_Op_2, term_s_49, (ATerm) ATempty);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym__2, term_c_51, term_n_28);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_28);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym__2, term_x_52, term_u_36);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym__2, term_j_53, term_u_36);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym__2, term_b_55, term_c_55);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym__2, term_a_56, term_u_36);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym__2, term_d_56, term_u_36);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym__2, term_n_54, term_u_36);
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym__3, term_b_55, term_c_55, (ATerm) ATempty);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0_0 (ATerm);
ATerm Option_2_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm DeclareTermId_0_0 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm LiftCompound_0_0 (ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_105 (ATerm), ATerm);
ATerm Snd_0_0 (ATerm);
ATerm CachedTerms_0_0 (ATerm);
ATerm BuildDefault_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm Real_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm Str_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm Int_1_0 (ATerm p_85 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm);
ATerm CacheConstant_0_0 (ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm MatchArg2_0_0 (ATerm);
ATerm MatchArg1_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm construct_term_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm real_to_string_0_0 (ATerm);
ATerm Nil_T_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm Var_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm PlainBody_0_0 (ATerm);
ATerm Escape_linefeed_0_0 (ATerm);
ATerm Escape_backslash_0_0 (ATerm);
ATerm Escape_double_quote_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm TracedBody_0_0 (ATerm);
ATerm TraceAllFuns_0_0 (ATerm);
ATerm TraceFun_0_0 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm c_122 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm n_133 (ATerm), ATerm);
ATerm ConstructorName_0_0 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm y_121 (ATerm (ATerm), ATerm), ATerm);
ATerm cify_0_0 (ATerm);
ATerm foldr_3_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm Arity_0_0 (ATerm);
ATerm DeclareConstructor_0_0 (ATerm);
ATerm TranslateSig_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm TranslateSpec_0_0 (ATerm);
ATerm downup2_2_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm assert_1_0 (ATerm l_133 (ATerm), ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_113 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_125 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_124 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_126 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_124 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm _2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_125 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_127 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_130 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm h_130 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm m_130 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm k_130 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm j_130 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm);
ATerm s2c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_82 != NULL) && (q_82 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_82 = ATgetArgument(t, 0);
      if(((r_82 != NULL) && (r_82 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_670 = NULL;
    ATerm o_0 = NULL;
    if(((o_0 != NULL) && (o_0 != t)))
      _fail(t);
    else
      o_0 = t;
    {
      ATerm u_670 = NULL;
      ATerm r_0 = NULL;
      if(((r_0 != NULL) && (r_0 != t)))
        _fail(t);
      else
        r_0 = t;
      t = not_null(q_82);
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            t = (ATerm) ATempty;
          }
        if(((u_670 != NULL) && (u_670 != t)))
          _fail(t);
        else
          u_670 = t;
        t = not_null(r_0);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_670), not_null(r_82));
      t = conc_0_0(t);
      if(((r_670 != NULL) && (r_670 != t)))
        _fail(t);
      else
        r_670 = t;
      t = not_null(o_0);
    }
    t = (ATerm) ATmakeAppl(sym__3, term_a_18, not_null(q_82), not_null(r_670));
    t = table_put_0_0(t);
  }
  return(t);
}
ATerm Option_2_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = Option_3_0(m_129, n_129, r_12, t);
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm t_12 (ATerm t)
      {
        t = term_e_18;
        {
          ATerm u_12 (ATerm t)
          {
            t = term_f_18;
            return(t);
          }
          t = debug_1_0(u_12, t);
          {
            ATerm v_0 = NULL;
            if(((v_0 != NULL) && (v_0 != t)))
              _fail(t);
            else
              v_0 = t;
            t = term_i_18;
            {
              ATerm v_12 (ATerm t)
              {
                t = term_j_18;
                return(t);
              }
              t = assert_1_0(v_12, t);
              t = not_null(v_0);
            }
          }
        }
        return(t);
      }
      t = Option_2_0(s_12, t_12, t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm x_12 (ATerm t)
            {
              ATerm v_47 = NULL;
              if(((v_47 != NULL) && (v_47 != t)))
                _fail(t);
              else
                v_47 = t;
              {
                ATerm y_0 = NULL;
                if(((y_0 != NULL) && (y_0 != t)))
                  _fail(t);
                else
                  y_0 = t;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_47), term_n_18);
                {
                  ATerm z_12 (ATerm t)
                  {
                    t = term_o_18;
                    return(t);
                  }
                  t = assert_1_0(z_12, t);
                  t = not_null(y_0);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(v_47));
              }
              return(t);
            }
            ATerm y_12 (ATerm t)
            {
              t = term_p_18;
              return(t);
            }
            t = ArgOption_3_0(w_12, x_12, y_12, t);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm a_13 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_13 (ATerm t)
              {
                ATerm d_1 = NULL;
                if(((d_1 != NULL) && (d_1 != t)))
                  _fail(t);
                else
                  d_1 = t;
                {
                  ATerm y_238 = NULL;
                  ATerm e_1 = NULL;
                  if(((e_1 != NULL) && (e_1 != t)))
                    _fail(t);
                  else
                    e_1 = t;
                  if(((y_238 != NULL) && (y_238 != t)))
                    _fail(t);
                  else
                    y_238 = t;
                  t = not_null(e_1);
                  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATempty, not_null(y_238)));
                  t = post_extend_config_0_0(t);
                  t = not_null(d_1);
                }
                {
                  ATerm j_239 = NULL;
                  ATerm f_1 = NULL;
                  if(((f_1 != NULL) && (f_1 != t)))
                    _fail(t);
                  else
                    f_1 = t;
                  if(((j_239 != NULL) && (j_239 != t)))
                    _fail(t);
                  else
                    j_239 = t;
                  t = not_null(f_1);
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(j_239));
                }
                return(t);
              }
              ATerm c_13 (ATerm t)
              {
                t = term_r_18;
                return(t);
              }
              t = ArgOption_3_0(a_13, b_13, c_13, t);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((p_39 != NULL) && (p_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_39 = ATgetArgument(t, 0);
      if(((r_39 != NULL) && (r_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_39 = ATgetArgument(t, 1);
      if(((q_39 != NULL) && (q_39 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_39))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_39)), term_s_18, not_null(q_39))));
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm o_39 = NULL;
  if(((o_39 != NULL) && (o_39 != t)))
    _fail(t);
  else
    o_39 = t;
  {
    ATerm p_174 = NULL;
    ATerm g_1 = NULL;
    if(((g_1 != NULL) && (g_1 != t)))
      _fail(t);
    else
      g_1 = t;
    t = not_null(o_39);
    t = map_1_0(InitTermId_0_0, t);
    t = concat_0_0(t);
    t = reverse_0_0(t);
    if(((p_174 != NULL) && (p_174 != t)))
      _fail(t);
    else
      p_174 = t;
    t = not_null(g_1);
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_18, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_18, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_18)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(p_174)));
  }
  return(t);
}
ATerm DeclareTermId_0_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_39 = ATgetArgument(t, 0);
      if(((n_39 != NULL) && (n_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_39 = ATgetArgument(t, 1);
      if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        m_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_39)), term_c_19)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = (ATerm) ATempty;
    }
  {
    ATerm x_172 = NULL;
    ATerm h_1 = NULL;
    if(((h_1 != NULL) && (h_1 != t)))
      _fail(t);
    else
      h_1 = t;
    {
      ATerm z_172 = NULL;
      ATerm i_1 = NULL;
      if(((i_1 != NULL) && (i_1 != t)))
        _fail(t);
      else
        i_1 = t;
      t = map_1_0(DeclareTermId_0_0, t);
      if(((z_172 != NULL) && (z_172 != t)))
        _fail(t);
      else
        z_172 = t;
      t = not_null(i_1);
      {
        ATerm g_173 = NULL;
        ATerm j_1 = NULL;
        if(((j_1 != NULL) && (j_1 != t)))
          _fail(t);
        else
          j_1 = t;
        t = InitTermIds_0_0(t);
        if(((g_173 != NULL) && (g_173 != t)))
          _fail(t);
        else
          g_173 = t;
        t = not_null(j_1);
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_172), (ATerm) ATinsert(ATempty, not_null(g_173)));
      }
      t = conc_0_0(t);
      if(((x_172 != NULL) && (x_172 != t)))
        _fail(t);
      else
        x_172 = t;
      t = not_null(h_1);
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(x_172));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm c_108 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = SRTS_one(c_108, t);
      }
    return(t);
  }
  t = c_108(t);
  return(t);
}
ATerm LiftCompound_0_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_19 = ATgetFirst((ATermList) t);
      if(match_cons(h_19, sym_Compound_2))
        {
          ATerm i_19 = ATgetArgument(h_19, 0);
          if(((ATgetType(i_19) != AT_LIST) || !(ATisEmpty(i_19))))
            _fail(t);
          if(((d_81 != NULL) && (d_81 != ATgetArgument(h_19, 1))))
            _fail(ATgetArgument(h_19, 1));
          else
            d_81 = ATgetArgument(h_19, 1);
        }
      else
        _fail(t);
      if(((e_81 != NULL) && (e_81 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        e_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_81), not_null(e_81));
  t = conc_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_13 (ATerm t)
      {
        t = listbu1_1_0(t_2, t);
        return(t);
      }
      t = Cons_2_0(_id, d_13, t);
      t = try_1_0(t_2, t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = t_2(t);
    }
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_81 = NULL,k_81 = NULL;
      if(match_cons(t, sym_IfElse_3))
        {
          if(((j_81 != NULL) && (j_81 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_81 = ATgetArgument(t, 0);
          {
            ATerm n_19 = ATgetArgument(t, 1);
            if(match_cons(n_19, sym_Compound_2))
              {
                ATerm o_19 = ATgetArgument(n_19, 0);
                if(((ATgetType(o_19) != AT_LIST) || !(ATisEmpty(o_19))))
                  _fail(t);
                {
                  ATerm p_19 = ATgetArgument(n_19, 1);
                  if(((ATgetType(p_19) != AT_LIST) || !(ATisEmpty(p_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
          if(((k_81 != NULL) && (k_81 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            k_81 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(j_81)), not_null(k_81));
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_81 = NULL,i_81 = NULL;
            if(match_cons(t, sym_IfElse_3))
              {
                if(((h_81 != NULL) && (h_81 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_81 = ATgetArgument(t, 0);
                if(((i_81 != NULL) && (i_81 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_81 = ATgetArgument(t, 1);
                {
                  ATerm s_19 = ATgetArgument(t, 2);
                  if(match_cons(s_19, sym_Compound_2))
                    {
                      ATerm t_19 = ATgetArgument(s_19, 0);
                      if(((ATgetType(t_19) != AT_LIST) || !(ATisEmpty(t_19))))
                        _fail(t);
                      {
                        ATerm u_19 = ATgetArgument(s_19, 1);
                        if(((ATgetType(u_19) != AT_LIST) || !(ATisEmpty(u_19))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_If_2, not_null(h_81), not_null(i_81));
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm v_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_81 = NULL,g_81 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_19 = ATgetFirst((ATermList) t);
                      if(match_cons(x_19, sym_Compound_2))
                        {
                          ATerm y_19 = ATgetArgument(x_19, 0);
                          if(((ATgetType(y_19) != AT_LIST) || !(ATisEmpty(y_19))))
                            _fail(t);
                          if(((f_81 != NULL) && (f_81 != ATgetArgument(x_19, 1))))
                            _fail(ATgetArgument(x_19, 1));
                          else
                            f_81 = ATgetArgument(x_19, 1);
                        }
                      else
                        _fail(t);
                      if(((g_81 != NULL) && (g_81 != (ATerm) ATgetNext((ATermList) t))))
                        _fail((ATerm) ATgetNext((ATermList) t));
                      else
                        g_81 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_81), not_null(g_81));
                  t = conc_0_0(t);
                  ;
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = v_19;
                  {
                    ATerm z_19 = t;
                    int a_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
                        if(match_cons(t, sym_Compound_2))
                          {
                            if(((a_81 != NULL) && (a_81 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              a_81 = ATgetArgument(t, 0);
                            if(((b_81 != NULL) && (b_81 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              b_81 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm k_1 = NULL;
                          if(((k_1 != NULL) && (k_1 != t)))
                            _fail(t);
                          else
                            k_1 = t;
                          t = not_null(b_81);
                          t = listbu1_1_0(LiftCompound_0_0, t);
                          if(((c_81 != NULL) && (c_81 != t)))
                            _fail(t);
                          else
                            c_81 = t;
                          t = not_null(k_1);
                          t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(a_81), not_null(c_81));
                        }
                        ;
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
                              ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
                              if(match_cons(t, sym_Compound_2))
                                {
                                  if(((x_80 != NULL) && (x_80 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    x_80 = ATgetArgument(t, 0);
                                  {
                                    ATerm d_20 = ATgetArgument(t, 1);
                                    if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
                                      {
                                        ATerm e_20 = ATgetFirst((ATermList) d_20);
                                        if(match_cons(e_20, sym_Compound_2))
                                          {
                                            if(((y_80 != NULL) && (y_80 != ATgetArgument(e_20, 0))))
                                              _fail(ATgetArgument(e_20, 0));
                                            else
                                              y_80 = ATgetArgument(e_20, 0);
                                            if(((z_80 != NULL) && (z_80 != ATgetArgument(e_20, 1))))
                                              _fail(ATgetArgument(e_20, 1));
                                            else
                                              z_80 = ATgetArgument(e_20, 1);
                                          }
                                        else
                                          _fail(t);
                                        {
                                          ATerm f_20 = (ATerm) ATgetNext((ATermList) d_20);
                                          if(((ATgetType(f_20) != AT_LIST) || !(ATisEmpty(f_20))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              {
                                ATerm l_653 = NULL;
                                ATerm l_1 = NULL;
                                if(((l_1 != NULL) && (l_1 != t)))
                                  _fail(t);
                                else
                                  l_1 = t;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_80), not_null(y_80));
                                t = conc_0_0(t);
                                if(((l_653 != NULL) && (l_653 != t)))
                                  _fail(t);
                                else
                                  l_653 = t;
                                t = not_null(l_1);
                                t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(l_653), not_null(z_80));
                              }
                              ;
                              LocalPopChoice(c_20);
                            }
                          else
                            {
                              t = b_20;
                              {
                                ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL;
                                if(match_cons(t, sym_Compound_2))
                                  {
                                    if(((t_80 != NULL) && (t_80 != ATgetArgument(t, 0))))
                                      _fail(ATgetArgument(t, 0));
                                    else
                                      t_80 = ATgetArgument(t, 0);
                                    {
                                      ATerm g_20 = ATgetArgument(t, 1);
                                      if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
                                        {
                                          ATerm h_20 = ATgetFirst((ATermList) g_20);
                                          if(match_cons(h_20, sym_Compound_2))
                                            {
                                              if(((u_80 != NULL) && (u_80 != ATgetArgument(h_20, 0))))
                                                _fail(ATgetArgument(h_20, 0));
                                              else
                                                u_80 = ATgetArgument(h_20, 0);
                                              if(((v_80 != NULL) && (v_80 != ATgetArgument(h_20, 1))))
                                                _fail(ATgetArgument(h_20, 1));
                                              else
                                                v_80 = ATgetArgument(h_20, 1);
                                            }
                                          else
                                            _fail(t);
                                          if(((w_80 != NULL) && (w_80 != (ATerm) ATgetNext((ATermList) g_20))))
                                            _fail((ATerm) ATgetNext((ATermList) g_20));
                                          else
                                            w_80 = (ATerm) ATgetNext((ATermList) g_20);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm e_652 = NULL;
                                  ATerm m_1 = NULL;
                                  if(((m_1 != NULL) && (m_1 != t)))
                                    _fail(t);
                                  else
                                    m_1 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_80), not_null(u_80));
                                  t = conc_0_0(t);
                                  if(((e_652 != NULL) && (e_652 != t)))
                                    _fail(t);
                                  else
                                    e_652 = t;
                                  t = not_null(m_1);
                                  {
                                    ATerm q_652 = NULL;
                                    ATerm n_1 = NULL;
                                    if(((n_1 != NULL) && (n_1 != t)))
                                      _fail(t);
                                    else
                                      n_1 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_80), not_null(w_80));
                                    t = conc_0_0(t);
                                    if(((q_652 != NULL) && (q_652 != t)))
                                      _fail(t);
                                    else
                                      q_652 = t;
                                    t = not_null(n_1);
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(e_652), not_null(q_652));
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
ATerm repeat_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm a_106 (ATerm t)
  {
    ATerm e_13 (ATerm t)
    {
      t = z_105(t);
      t = a_106(t);
      return(t);
    }
    t = try_1_0(e_13, t);
    return(t);
  }
  t = a_106(t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  ATerm c_343 = NULL;
  if(((c_343 != NULL) && (c_343 != t)))
    _fail(t);
  else
    c_343 = t;
  {
    ATerm o_1 = NULL;
    if(((o_1 != NULL) && (o_1 != t)))
      _fail(t);
    else
      o_1 = t;
    t = not_null(c_343);
    {
      ATerm d_343 = NULL;
      if(((d_343 != NULL) && (d_343 != t)))
        _fail(t);
      else
        d_343 = t;
      t = SSL_explode_term(not_null(d_343));
      if(match_cons(t, sym__2))
        {
          ATerm i_20 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_20 = ATgetArgument(t, 1);
            if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
              {
                if(((j_57 != NULL) && (j_57 != ATgetFirst((ATermList) j_20))))
                  _fail(ATgetFirst((ATermList) j_20));
                else
                  j_57 = ATgetFirst((ATermList) j_20);
                {
                  ATerm k_20 = (ATerm) ATgetNext((ATermList) j_20);
                  if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
                    {
                      if(((l_57 != NULL) && (l_57 != ATgetFirst((ATermList) k_20))))
                        _fail(ATgetFirst((ATermList) k_20));
                      else
                        l_57 = ATgetFirst((ATermList) k_20);
                      if(((k_57 != NULL) && (k_57 != (ATerm) ATgetNext((ATermList) k_20))))
                        _fail((ATerm) ATgetNext((ATermList) k_20));
                      else
                        k_57 = (ATerm) ATgetNext((ATermList) k_20);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(o_1);
    }
  }
  t = not_null(l_57);
  return(t);
}
ATerm CachedTerms_0_0 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  if(((g_39 != NULL) && (g_39 != t)))
    _fail(t);
  else
    g_39 = t;
  {
    ATerm p_1 = NULL;
    if(((p_1 != NULL) && (p_1 != t)))
      _fail(t);
    else
      p_1 = t;
    t = (ATerm) ATempty;
    {
      ATerm f_13 (ATerm t)
      {
        t = term_l_20;
        return(t);
      }
      t = rewrite_1_0(f_13, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm m_20 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_20) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          if(((h_39 != NULL) && (h_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(p_1);
    }
    t = not_null(h_39);
  }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm r_1 = NULL,q_1 = NULL,s_1 = NULL;
  ATerm t_1 = NULL;
  if(((t_1 != NULL) && (t_1 != t)))
    _fail(t);
  else
    t_1 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      if(((q_1 != NULL) && (q_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_1 = NULL;
    if(((v_1 != NULL) && (v_1 != t)))
      _fail(t);
    else
      v_1 = t;
    t = SSLgetAnnotations(not_null(t_1));
    if(((r_1 != NULL) && (r_1 != t)))
      _fail(t);
    else
      r_1 = t;
    t = not_null(v_1);
  }
  t = not_null(q_1);
  t = k_86(t);
  if(((s_1 != NULL) && (s_1 != t)))
    _fail(t);
  else
    s_1 = t;
  {
    ATerm u_1 = NULL;
    ATerm w_1 = NULL;
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(s_1)), not_null(r_1));
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = not_null(w_1);
    t = not_null(u_1);
  }
  return(t);
}
ATerm Real_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,x_1 = NULL,z_1 = NULL;
  ATerm a_2 = NULL;
  if(((a_2 != NULL) && (a_2 != t)))
    _fail(t);
  else
    a_2 = t;
  if(match_cons(t, sym_Real_1))
    {
      if(((x_1 != NULL) && (x_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_2 = NULL;
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    t = SSLgetAnnotations(not_null(a_2));
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    t = not_null(c_2);
  }
  t = not_null(x_1);
  t = q_85(t);
  if(((z_1 != NULL) && (z_1 != t)))
    _fail(t);
  else
    z_1 = t;
  {
    ATerm b_2 = NULL;
    ATerm d_2 = NULL;
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(z_1)), not_null(y_1));
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    t = not_null(d_2);
    t = not_null(b_2);
  }
  return(t);
}
ATerm Str_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,e_2 = NULL,g_2 = NULL;
  ATerm h_2 = NULL;
  if(((h_2 != NULL) && (h_2 != t)))
    _fail(t);
  else
    h_2 = t;
  if(match_cons(t, sym_Str_1))
    {
      if(((e_2 != NULL) && (e_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_2 = NULL;
    if(((k_2 != NULL) && (k_2 != t)))
      _fail(t);
    else
      k_2 = t;
    t = SSLgetAnnotations(not_null(h_2));
    if(((f_2 != NULL) && (f_2 != t)))
      _fail(t);
    else
      f_2 = t;
    t = not_null(k_2);
  }
  t = not_null(e_2);
  t = r_85(t);
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  {
    ATerm j_2 = NULL;
    ATerm l_2 = NULL;
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(g_2)), not_null(f_2));
    if(((j_2 != NULL) && (j_2 != t)))
      _fail(t);
    else
      j_2 = t;
    t = not_null(l_2);
    t = not_null(j_2);
  }
  return(t);
}
ATerm Int_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,m_2 = NULL,o_2 = NULL;
  ATerm p_2 = NULL;
  if(((p_2 != NULL) && (p_2 != t)))
    _fail(t);
  else
    p_2 = t;
  if(match_cons(t, sym_Int_1))
    {
      if(((m_2 != NULL) && (m_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_2 = NULL;
    if(((r_2 != NULL) && (r_2 != t)))
      _fail(t);
    else
      r_2 = t;
    t = SSLgetAnnotations(not_null(p_2));
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    t = not_null(r_2);
  }
  t = not_null(m_2);
  t = p_85(t);
  if(((o_2 != NULL) && (o_2 != t)))
    _fail(t);
  else
    o_2 = t;
  {
    ATerm q_2 = NULL;
    ATerm s_2 = NULL;
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(o_2)), not_null(n_2));
    if(((q_2 != NULL) && (q_2 != t)))
      _fail(t);
    else
      q_2 = t;
    t = not_null(s_2);
    t = not_null(q_2);
  }
  return(t);
}
ATerm Anno_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL;
  ATerm z_2 = NULL;
  if(((z_2 != NULL) && (z_2 != t)))
    _fail(t);
  else
    z_2 = t;
  if(match_cons(t, sym_Anno_2))
    {
      if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_2 = ATgetArgument(t, 0);
      if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_3 = NULL;
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    t = SSLgetAnnotations(not_null(z_2));
    if(((w_2 != NULL) && (w_2 != t)))
      _fail(t);
    else
      w_2 = t;
    t = not_null(b_3);
  }
  t = not_null(u_2);
  t = z_85(t);
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = not_null(v_2);
  t = a_86(t);
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  {
    ATerm a_3 = NULL;
    ATerm c_3 = NULL;
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(x_2), not_null(y_2)), not_null(w_2));
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    t = not_null(c_3);
    t = not_null(a_3);
  }
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      t = Op_2_0(g_13, Nil_0_0, t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_13 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm i_13 (ATerm t)
            {
              ATerm j_13 (ATerm t)
              {
                t = Cons_2_0(proper_list_0_0, Nil_0_0, t);
                return(t);
              }
              t = Cons_2_0(_id, j_13, t);
              return(t);
            }
            t = Op_2_0(h_13, i_13, t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm k_13 (ATerm t)
              {
                ATerm r_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_20 = t;
                    int t_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
                          _fail(t);
                        ;
                        LocalPopChoice(t_20);
                      }
                    else
                      {
                        t = s_20;
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                          _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_20;
                  }
                return(t);
              }
              t = Op_2_0(k_13, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL;
  ATerm i_3 = NULL;
  if(((i_3 != NULL) && (i_3 != t)))
    _fail(t);
  else
    i_3 = t;
  if(match_cons(t, sym_Op_2))
    {
      if(((d_3 != NULL) && (d_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_3 = ATgetArgument(t, 0);
      if(((e_3 != NULL) && (e_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_3 = NULL;
    if(((k_3 != NULL) && (k_3 != t)))
      _fail(t);
    else
      k_3 = t;
    t = SSLgetAnnotations(not_null(i_3));
    if(((f_3 != NULL) && (f_3 != t)))
      _fail(t);
    else
      f_3 = t;
    t = not_null(k_3);
  }
  t = not_null(d_3);
  t = t_85(t);
  if(((g_3 != NULL) && (g_3 != t)))
    _fail(t);
  else
    g_3 = t;
  t = not_null(e_3);
  t = u_85(t);
  if(((h_3 != NULL) && (h_3 != t)))
    _fail(t);
  else
    h_3 = t;
  {
    ATerm j_3 = NULL;
    ATerm l_3 = NULL;
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(g_3), not_null(h_3)), not_null(f_3));
    if(((j_3 != NULL) && (j_3 != t)))
      _fail(t);
    else
      j_3 = t;
    t = not_null(l_3);
    t = not_null(j_3);
  }
  return(t);
}
ATerm CacheConstant_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_39 != NULL) && (b_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_39 = ATgetArgument(t, 0);
      if(((e_39 != NULL) && (e_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_3 = NULL;
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    t = not_null(b_39);
    {
      ATerm u_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_13 (ATerm t)
          {
            t = map_1_0(Cache_0_0, t);
            return(t);
          }
          t = Op_2_0(_id, l_13, t);
          t = proper_list_0_0(t);
          ;
          LocalPopChoice(v_20);
        }
      else
        {
          t = u_20;
          {
            ATerm w_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Anno_2_0(Cache_0_0, Cache_0_0, t);
                ;
                LocalPopChoice(x_20);
              }
            else
              {
                t = w_20;
                {
                  ATerm y_20 = t;
                  int z_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Int_1_0(_id, t);
                      ;
                      LocalPopChoice(z_20);
                    }
                  else
                    {
                      t = y_20;
                      {
                        ATerm a_21 = t;
                        int b_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Str_1_0(_id, t);
                            ;
                            LocalPopChoice(b_21);
                          }
                        else
                          {
                            t = a_21;
                            {
                              ATerm c_21 = t;
                              int d_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Real_1_0(_id, t);
                                  ;
                                  LocalPopChoice(d_21);
                                }
                              else
                                {
                                  t = c_21;
                                  t = BuildDefault_1_0(_id, t);
                                }
                            }
                          }
                      }
                    }
                }
              }
          }
        }
      t = new_0_0(t);
      if(((c_39 != NULL) && (c_39 != t)))
        _fail(t);
      else
        c_39 = t;
      {
        ATerm c_168 = NULL;
        ATerm n_3 = NULL;
        if(((n_3 != NULL) && (n_3 != t)))
          _fail(t);
        else
          n_3 = t;
        if(((c_168 != NULL) && (c_168 != t)))
          _fail(t);
        else
          c_168 = t;
        t = not_null(n_3);
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, not_null(c_168));
        t = conc_strings_0_0(t);
        if(((d_39 != NULL) && (d_39 != t)))
          _fail(t);
        else
          d_39 = t;
        {
          ATerm o_3 = NULL;
          if(((o_3 != NULL) && (o_3 != t)))
            _fail(t);
          else
            o_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_39), (ATerm) ATmakeAppl(sym_Defined_2, term_f_21, not_null(d_39)));
          {
            ATerm m_13 (ATerm t)
            {
              t = term_g_21;
              return(t);
            }
            t = assert_1_0(m_13, t);
            t = not_null(o_3);
          }
          {
            ATerm a_169 = NULL;
            ATerm p_3 = NULL;
            if(((p_3 != NULL) && (p_3 != t)))
              _fail(t);
            else
              p_3 = t;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CachedTerms_0_0(t);
                  ;
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = (ATerm) ATempty;
                }
              if(((a_169 != NULL) && (a_169 != t)))
                _fail(t);
              else
                a_169 = t;
              t = not_null(p_3);
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(a_169)), (ATerm) ATmakeAppl(sym__3, not_null(c_39), not_null(d_39), not_null(e_39)));
            if(((f_39 != NULL) && (f_39 != t)))
              _fail(t);
            else
              f_39 = t;
            {
              ATerm q_3 = NULL;
              if(((q_3 != NULL) && (q_3 != t)))
                _fail(t);
              else
                q_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_21, not_null(f_39)));
              {
                ATerm n_13 (ATerm t)
                {
                  t = term_l_20;
                  return(t);
                }
                t = assert_1_0(n_13, t);
                t = not_null(q_3);
              }
              t = not_null(m_3);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(d_39));
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
      if(((j_39 != NULL) && (j_39 != t)))
        _fail(t);
      else
        j_39 = t;
      if(((i_39 != NULL) && (i_39 != t)))
        _fail(t);
      else
        i_39 = t;
      {
        ATerm r_3 = NULL;
        if(((r_3 != NULL) && (r_3 != t)))
          _fail(t);
        else
          r_3 = t;
        t = not_null(j_39);
        {
          ATerm o_13 (ATerm t)
          {
            t = term_g_21;
            return(t);
          }
          t = rewrite_1_0(o_13, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm m_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                k_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(r_3);
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(k_39));
      }
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
        if(((z_38 != NULL) && (z_38 != t)))
          _fail(t);
        else
          z_38 = t;
        if(((y_38 != NULL) && (y_38 != t)))
          _fail(t);
        else
          y_38 = t;
        {
          ATerm s_3 = NULL;
          if(((s_3 != NULL) && (s_3 != t)))
            _fail(t);
          else
            s_3 = t;
          t = not_null(z_38);
          {
            ATerm p_13 (ATerm t)
            {
              t = term_g_21;
              return(t);
            }
            t = rewrite_1_0(p_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm n_21 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_21) != ATmakeSymbol("b_0", 0, ATtrue)))
                  _fail(t);
                if(((a_39 != NULL) && (a_39 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(s_3);
          }
          t = not_null(a_39);
        }
      }
    }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm w_166 = NULL;
        ATerm t_3 = NULL;
        if(((t_3 != NULL) && (t_3 != t)))
          _fail(t);
        else
          t_3 = t;
        if(((w_166 != NULL) && (w_166 != t)))
          _fail(t);
        else
          w_166 = t;
        t = not_null(t_3);
        {
          ATerm d_167 = NULL;
          ATerm u_3 = NULL;
          if(((u_3 != NULL) && (u_3 != t)))
            _fail(t);
          else
            u_3 = t;
          t = SRTS_all(construct_term_caching_0_0, t);
          {
            ATerm q_13 (ATerm t)
            {
              ATerm q_21 = t;
              int r_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0_0(t);
                  ;
                  LocalPopChoice(r_21);
                }
              else
                {
                  t = q_21;
                  t = ConstructTerm_0_0(t);
                }
              return(t);
            }
            t = try_1_0(q_13, t);
            if(((d_167 != NULL) && (d_167 != t)))
              _fail(t);
            else
              d_167 = t;
            t = not_null(u_3);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_166), not_null(d_167));
        }
        {
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CacheConstant_0_0(t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              t = Snd_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm MatchArg2_0_0 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_43 != NULL) && (r_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_43 = ATgetArgument(t, 0);
      if(((q_43 != NULL) && (q_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_3 = NULL;
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    t = new_0_0(t);
    if(((s_43 != NULL) && (s_43 != t)))
      _fail(t);
    else
      s_43 = t;
    t = not_null(v_3);
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_43)), term_c_19), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(q_43))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(r_43), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_43)))));
  }
  return(t);
}
ATerm MatchArg1_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  ATerm w_201 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      if(((w_201 != NULL) && (w_201 != u_21)))
        _fail(u_21);
      else
        w_201 = u_21;
      if(match_cons(u_21, sym_Var_1))
        {
          if(((n_43 != NULL) && (n_43 != ATgetArgument(u_21, 0))))
            _fail(ATgetArgument(u_21, 0));
          else
            n_43 = ATgetArgument(u_21, 0);
        }
      else
        _fail(t);
      if(((p_43 != NULL) && (p_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_3 = NULL;
    if(((w_3 != NULL) && (w_3 != t)))
      _fail(t);
    else
      w_3 = t;
    t = SSLgetAnnotations(not_null(w_201));
    if(((o_43 != NULL) && (o_43 != t)))
      _fail(t);
    else
      o_43 = t;
    t = not_null(w_3);
  }
  {
    ATerm h_202 = NULL;
    ATerm x_3 = NULL;
    if(((x_3 != NULL) && (x_3 != t)))
      _fail(t);
    else
      x_3 = t;
    {
      ATerm i_202 = NULL;
      ATerm y_3 = NULL;
      if(((y_3 != NULL) && (y_3 != t)))
        _fail(t);
      else
        y_3 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_43));
      if(((i_202 != NULL) && (i_202 != t)))
        _fail(t);
      else
        i_202 = t;
      t = not_null(y_3);
      t = SSLsetAnnotations(not_null(i_202), not_null(o_43));
      if(((h_202 != NULL) && (h_202 != t)))
        _fail(t);
      else
        h_202 = t;
      t = not_null(x_3);
    }
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(h_202), not_null(p_43));
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_38 = NULL,p_38 = NULL;
      if(match_cons(t, sym_Anno_2))
        {
          if(((o_38 != NULL) && (o_38 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_38 = ATgetArgument(t, 0);
          if(((p_38 != NULL) && (p_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_38)), not_null(o_38))));
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_38 = NULL,n_38 = NULL;
            if(match_cons(t, sym_Op_2))
              {
                if(((m_38 != NULL) && (m_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_38 = ATgetArgument(t, 0);
                if(((n_38 != NULL) && (n_38 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm k_160 = NULL;
              ATerm z_3 = NULL;
              if(((z_3 != NULL) && (z_3 != t)))
                _fail(t);
              else
                z_3 = t;
              {
                ATerm n_160 = NULL;
                ATerm a_4 = NULL;
                if(((a_4 != NULL) && (a_4 != t)))
                  _fail(t);
                else
                  a_4 = t;
                t = not_null(n_38);
                t = length_0_0(t);
                if(((n_160 != NULL) && (n_160 != t)))
                  _fail(t);
                else
                  n_160 = t;
                t = not_null(a_4);
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(n_160));
                t = ConstructorName_0_0(t);
                if(((k_160 != NULL) && (k_160 != t)))
                  _fail(t);
                else
                  k_160 = t;
                t = not_null(z_3);
              }
              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_22, (ATerm) ATinsert(CheckATermList(not_null(n_38)), (ATerm) ATmakeAppl(sym_Id_1, not_null(k_160)))));
            }
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm e_22 = t;
              int f_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_38 = NULL;
                  if(match_cons(t, sym_BuildDefault_1))
                    {
                      if(((l_38 != NULL) && (l_38 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(l_38);
                  ;
                  LocalPopChoice(f_22);
                }
              else
                {
                  t = e_22;
                  {
                    ATerm g_22 = t;
                    int h_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_38 = NULL;
                        ATerm f_159 = NULL;
                        if(((f_159 != NULL) && (f_159 != t)))
                          _fail(t);
                        else
                          f_159 = t;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((k_38 != NULL) && (k_38 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              k_38 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        {
                          ATerm b_4 = NULL;
                          if(((b_4 != NULL) && (b_4 != t)))
                            _fail(t);
                          else
                            b_4 = t;
                          t = SSLgetAnnotations(not_null(f_159));
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm i_22 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(j_22) != AT_LIST) || !(ATisEmpty(j_22))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = not_null(b_4);
                        }
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_38))));
                        ;
                        LocalPopChoice(h_22);
                      }
                    else
                      {
                        t = g_22;
                        {
                          ATerm m_22 = t;
                          int n_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_38 = NULL;
                              ATerm q_158 = NULL;
                              if(((q_158 != NULL) && (q_158 != t)))
                                _fail(t);
                              else
                                q_158 = t;
                              if(match_cons(t, sym_Var_1))
                                {
                                  if(((j_38 != NULL) && (j_38 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    j_38 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              {
                                ATerm c_4 = NULL;
                                if(((c_4 != NULL) && (c_4 != t)))
                                  _fail(t);
                                else
                                  c_4 = t;
                                t = SSLgetAnnotations(not_null(q_158));
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = not_null(c_4);
                              }
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_38))));
                              ;
                              LocalPopChoice(n_22);
                            }
                          else
                            {
                              t = m_22;
                              {
                                ATerm o_22 = t;
                                int p_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_38 = NULL;
                                    ATerm b_158 = NULL;
                                    if(((b_158 != NULL) && (b_158 != t)))
                                      _fail(t);
                                    else
                                      b_158 = t;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          i_38 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    {
                                      ATerm d_4 = NULL;
                                      if(((d_4 != NULL) && (d_4 != t)))
                                        _fail(t);
                                      else
                                        d_4 = t;
                                      t = SSLgetAnnotations(not_null(b_158));
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm q_22 = ATgetFirst((ATermList) t);
                                          if((ATgetSymbol((ATermAppl) q_22) != ATmakeSymbol("bound", 0, ATtrue)))
                                            _fail(t);
                                          {
                                            ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
                                            if(((ATgetType(r_22) != AT_LIST) || !(ATisEmpty(r_22))))
                                              _fail(t);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(d_4);
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(i_38));
                                    ;
                                    LocalPopChoice(p_22);
                                  }
                                else
                                  {
                                    t = o_22;
                                    {
                                      ATerm s_22 = t;
                                      int t_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_38 = NULL;
                                          if(match_cons(t, sym_Str_1))
                                            {
                                              if(((h_38 != NULL) && (h_38 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                h_38 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm n_157 = NULL;
                                            ATerm e_4 = NULL;
                                            if(((e_4 != NULL) && (e_4 != t)))
                                              _fail(t);
                                            else
                                              e_4 = t;
                                            t = not_null(h_38);
                                            t = escape_0_0(t);
                                            t = double_quote_0_0(t);
                                            if(((n_157 != NULL) && (n_157 != t)))
                                              _fail(t);
                                            else
                                              n_157 = t;
                                            t = not_null(e_4);
                                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), term_x_22), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(n_157))))))));
                                          }
                                          ;
                                          LocalPopChoice(t_22);
                                        }
                                      else
                                        {
                                          t = s_22;
                                          {
                                            ATerm a_23 = t;
                                            int b_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_38 = NULL;
                                                if(match_cons(t, sym_Real_1))
                                                  {
                                                    if(((g_38 != NULL) && (g_38 != ATgetArgument(t, 0))))
                                                      _fail(ATgetArgument(t, 0));
                                                    else
                                                      g_38 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                {
                                                  ATerm s_156 = NULL;
                                                  ATerm f_4 = NULL;
                                                  if(((f_4 != NULL) && (f_4 != t)))
                                                    _fail(t);
                                                  else
                                                    f_4 = t;
                                                  t = not_null(g_38);
                                                  t = real_to_string_0_0(t);
                                                  if(((s_156 != NULL) && (s_156 != t)))
                                                    _fail(t);
                                                  else
                                                    s_156 = t;
                                                  t = not_null(f_4);
                                                  t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_156)))));
                                                }
                                                ;
                                                LocalPopChoice(b_23);
                                              }
                                            else
                                              {
                                                t = a_23;
                                                {
                                                  ATerm f_38 = NULL;
                                                  if(match_cons(t, sym_Int_1))
                                                    {
                                                      if(((f_38 != NULL) && (f_38 != ATgetArgument(t, 0))))
                                                        _fail(ATgetArgument(t, 0));
                                                      else
                                                        f_38 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  {
                                                    ATerm x_155 = NULL;
                                                    ATerm g_4 = NULL;
                                                    if(((g_4 != NULL) && (g_4 != t)))
                                                      _fail(t);
                                                    else
                                                      g_4 = t;
                                                    t = not_null(f_38);
                                                    t = int_to_string_0_0(t);
                                                    if(((x_155 != NULL) && (x_155 != t)))
                                                      _fail(t);
                                                    else
                                                      x_155 = t;
                                                    t = not_null(g_4);
                                                    t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(x_155)))));
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
ATerm Id_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,h_4 = NULL,j_4 = NULL;
  ATerm k_4 = NULL;
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  if(match_cons(t, sym_Id_1))
    {
      if(((h_4 != NULL) && (h_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_4 = NULL;
    if(((m_4 != NULL) && (m_4 != t)))
      _fail(t);
    else
      m_4 = t;
    t = SSLgetAnnotations(not_null(k_4));
    if(((i_4 != NULL) && (i_4 != t)))
      _fail(t);
    else
      i_4 = t;
    t = not_null(m_4);
  }
  t = not_null(h_4);
  t = t_95(t);
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  {
    ATerm l_4 = NULL;
    ATerm n_4 = NULL;
    if(((n_4 != NULL) && (n_4 != t)))
      _fail(t);
    else
      n_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(j_4)), not_null(i_4));
    if(((l_4 != NULL) && (l_4 != t)))
      _fail(t);
    else
      l_4 = t;
    t = not_null(n_4);
    t = not_null(l_4);
  }
  return(t);
}
ATerm FunCall_2_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL,s_4 = NULL;
  ATerm t_4 = NULL;
  if(((t_4 != NULL) && (t_4 != t)))
    _fail(t);
  else
    t_4 = t;
  if(match_cons(t, sym_FunCall_2))
    {
      if(((o_4 != NULL) && (o_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_4 = ATgetArgument(t, 0);
      if(((p_4 != NULL) && (p_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_4 = NULL;
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    t = SSLgetAnnotations(not_null(t_4));
    if(((q_4 != NULL) && (q_4 != t)))
      _fail(t);
    else
      q_4 = t;
    t = not_null(v_4);
  }
  t = not_null(o_4);
  t = v_98(t);
  if(((r_4 != NULL) && (r_4 != t)))
    _fail(t);
  else
    r_4 = t;
  t = not_null(p_4);
  t = w_98(t);
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  {
    ATerm u_4 = NULL;
    ATerm w_4 = NULL;
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(r_4), not_null(s_4)), not_null(q_4));
    if(((u_4 != NULL) && (u_4 != t)))
      _fail(t);
    else
      u_4 = t;
    t = not_null(w_4);
    t = not_null(u_4);
  }
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_23) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_23 = ATgetArgument(t, 1);
            if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
              {
                if(((q_38 != NULL) && (q_38 != ATgetFirst((ATermList) j_23))))
                  _fail(ATgetFirst((ATermList) j_23));
                else
                  q_38 = ATgetFirst((ATermList) j_23);
                {
                  ATerm k_23 = (ATerm) ATgetNext((ATermList) j_23);
                  if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
                    {
                      if(((r_38 != NULL) && (r_38 != ATgetFirst((ATermList) k_23))))
                        _fail(ATgetFirst((ATermList) k_23));
                      else
                        r_38 = ATgetFirst((ATermList) k_23);
                      {
                        ATerm l_23 = (ATerm) ATgetNext((ATermList) k_23);
                        if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm x_4 = NULL;
        if(((x_4 != NULL) && (x_4 != t)))
          _fail(t);
        else
          x_4 = t;
        t = not_null(r_38);
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_162 = NULL;
              if(match_cons(t, sym_TypeCast_2))
                {
                  ATerm o_23 = ATgetArgument(t, 0);
                  if(match_cons(o_23, sym_TypeName_2))
                    {
                      ATerm p_23 = ATgetArgument(o_23, 0);
                      if(match_cons(p_23, sym_TypeSpec_3))
                        {
                          ATerm r_23 = ATgetArgument(p_23, 0);
                          if(((ATgetType(r_23) != AT_LIST) || !(ATisEmpty(r_23))))
                            _fail(t);
                          {
                            ATerm s_23 = ATgetArgument(p_23, 1);
                            if(match_cons(s_23, sym_TypeId_1))
                              {
                                ATerm u_23 = ATgetArgument(s_23, 0);
                                if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("ATerm", 0, ATtrue)))
                                  _fail(t);
                              }
                            else
                              _fail(t);
                          }
                          {
                            ATerm t_23 = ATgetArgument(p_23, 2);
                            if(((ATgetType(t_23) != AT_LIST) || !(ATisEmpty(t_23))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_23 = ATgetArgument(o_23, 1);
                        if(!(match_cons(q_23, sym_None_0)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  if(((m_162 != NULL) && (m_162 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    m_162 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = not_null(m_162);
              {
                ATerm v_23 = t;
                int w_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_13 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    t = Id_1_0(r_13, t);
                    ;
                    LocalPopChoice(w_23);
                  }
                else
                  {
                    t = v_23;
                    {
                      ATerm s_13 (ATerm t)
                      {
                        ATerm u_13 (ATerm t)
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                            _fail(t);
                          return(t);
                        }
                        t = Id_1_0(u_13, t);
                        return(t);
                      }
                      ATerm t_13 (ATerm t)
                      {
                        ATerm v_13 (ATerm t)
                        {
                          t = Cons_2_0(_id, Nil_0_0, t);
                          return(t);
                        }
                        t = Cons_2_0(_id, v_13, t);
                        return(t);
                      }
                      t = FunCall_2_0(s_13, t_13, t);
                    }
                  }
              }
              ;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_23, (ATerm) ATinsert(ATempty, not_null(r_38)));
            }
          if(((s_38 != NULL) && (s_38 != t)))
            _fail(t);
          else
            s_38 = t;
          t = not_null(x_4);
        }
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), not_null(s_38))));
      }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      if(match_cons(t, sym_Op_2))
        {
          ATerm b_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) b_24) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          {
            ATerm c_24 = ATgetArgument(t, 1);
            if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = term_f_24;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    t = bottomup_1_0(y_106, t);
    return(t);
  }
  t = SRTS_all(w_13, t);
  t = y_106(t);
  return(t);
}
ATerm construct_term_0_0 (ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm y_13 (ATerm t)
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0_0(t);
          ;
          LocalPopChoice(h_24);
        }
      else
        {
          t = g_24;
          t = ConstructTerm_0_0(t);
        }
      return(t);
    }
    t = try_1_0(y_13, t);
    return(t);
  }
  t = bottomup_1_0(x_13, t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  t = x_106(t);
  {
    ATerm z_13 (ATerm t)
    {
      t = topdown_1_0(x_106, t);
      return(t);
    }
    t = SRTS_all(z_13, t);
  }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_47 = NULL,u_47 = NULL;
      if(match_cons(t, sym_Let_2))
        {
          if(((t_47 != NULL) && (t_47 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_47 = ATgetArgument(t, 0);
          if(((u_47 != NULL) && (u_47 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(t_47), (ATerm) ATinsert(ATempty, not_null(u_47)));
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_47 = NULL,s_47 = NULL;
            if(match_cons(t, sym_Where_1))
              {
                if(((r_47 != NULL) && (r_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            {
              ATerm y_4 = NULL;
              if(((y_4 != NULL) && (y_4 != t)))
                _fail(t);
              else
                y_4 = t;
              t = new_0_0(t);
              if(((s_47 != NULL) && (s_47 != t)))
                _fail(t);
              else
                s_47 = t;
              t = not_null(y_4);
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_47)), term_c_19))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(s_47))))), not_null(r_47)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_47)), term_s_18, term_n_24))));
            }
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_47 = NULL;
                  if(match_cons(t, sym_Test_1))
                    {
                      if(((q_47 != NULL) && (q_47 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Where_1, not_null(q_47));
                  ;
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm q_24 = t;
                    int r_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
                        if(match_cons(t, sym_CallT_3))
                          {
                            ATerm s_24 = ATgetArgument(t, 0);
                            if(match_cons(s_24, sym_SVar_1))
                              {
                                if(((j_47 != NULL) && (j_47 != ATgetArgument(s_24, 0))))
                                  _fail(ATgetArgument(s_24, 0));
                                else
                                  j_47 = ATgetArgument(s_24, 0);
                              }
                            else
                              _fail(t);
                            if(((k_47 != NULL) && (k_47 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              k_47 = ATgetArgument(t, 1);
                            if(((l_47 != NULL) && (l_47 != ATgetArgument(t, 2))))
                              _fail(ATgetArgument(t, 2));
                            else
                              l_47 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        {
                          ATerm z_4 = NULL;
                          if(((z_4 != NULL) && (z_4 != t)))
                            _fail(t);
                          else
                            z_4 = t;
                          t = not_null(k_47);
                          {
                            ATerm a_14 (ATerm t)
                            {
                              ATerm p_47 = NULL;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  ATerm t_24 = ATgetArgument(t, 0);
                                  if(match_cons(t_24, sym_SVar_1))
                                    {
                                      if(((p_47 != NULL) && (p_47 != ATgetArgument(t_24, 0))))
                                        _fail(ATgetArgument(t_24, 0));
                                      else
                                        p_47 = ATgetArgument(t_24, 0);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm u_24 = ATgetArgument(t, 1);
                                    if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
                                      _fail(t);
                                  }
                                  {
                                    ATerm v_24 = ATgetArgument(t, 2);
                                    if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, not_null(p_47));
                              return(t);
                            }
                            t = map_1_0(a_14, t);
                            if(((m_47 != NULL) && (m_47 != t)))
                              _fail(t);
                            else
                              m_47 = t;
                            t = not_null(l_47);
                            {
                              ATerm b_14 (ATerm t)
                              {
                                ATerm c_14 (ATerm t)
                                {
                                  t = try_1_0(construct_term_0_0, t);
                                  return(t);
                                }
                                t = topdown_1_0(c_14, t);
                                return(t);
                              }
                              t = map_1_0(b_14, t);
                              if(((n_47 != NULL) && (n_47 != t)))
                                _fail(t);
                              else
                                n_47 = t;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_24)), not_null(n_47)), not_null(m_47));
                              t = concat_0_0(t);
                              if(((o_47 != NULL) && (o_47 != t)))
                                _fail(t);
                              else
                                o_47 = t;
                              t = not_null(z_4);
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_47)), not_null(o_47))));
                        }
                        ;
                        LocalPopChoice(r_24);
                      }
                    else
                      {
                        t = q_24;
                        {
                          ATerm w_24 = t;
                          int x_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
                              if(match_cons(t, sym_PrimT_3))
                                {
                                  if(((c_47 != NULL) && (c_47 != ATgetArgument(t, 0))))
                                    _fail(ATgetArgument(t, 0));
                                  else
                                    c_47 = ATgetArgument(t, 0);
                                  if(((d_47 != NULL) && (d_47 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    d_47 = ATgetArgument(t, 1);
                                  if(((e_47 != NULL) && (e_47 != ATgetArgument(t, 2))))
                                    _fail(ATgetArgument(t, 2));
                                  else
                                    e_47 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              {
                                ATerm a_5 = NULL;
                                if(((a_5 != NULL) && (a_5 != t)))
                                  _fail(t);
                                else
                                  a_5 = t;
                                t = not_null(d_47);
                                {
                                  ATerm d_14 (ATerm t)
                                  {
                                    ATerm i_47 = NULL;
                                    if(match_cons(t, sym_CallT_3))
                                      {
                                        ATerm y_24 = ATgetArgument(t, 0);
                                        if(match_cons(y_24, sym_SVar_1))
                                          {
                                            if(((i_47 != NULL) && (i_47 != ATgetArgument(y_24, 0))))
                                              _fail(ATgetArgument(y_24, 0));
                                            else
                                              i_47 = ATgetArgument(y_24, 0);
                                          }
                                        else
                                          _fail(t);
                                        {
                                          ATerm z_24 = ATgetArgument(t, 1);
                                          if(((ATgetType(z_24) != AT_LIST) || !(ATisEmpty(z_24))))
                                            _fail(t);
                                        }
                                        {
                                          ATerm a_25 = ATgetArgument(t, 2);
                                          if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(i_47));
                                    return(t);
                                  }
                                  t = map_1_0(d_14, t);
                                  if(((f_47 != NULL) && (f_47 != t)))
                                    _fail(t);
                                  else
                                    f_47 = t;
                                  t = not_null(e_47);
                                  {
                                    ATerm e_14 (ATerm t)
                                    {
                                      ATerm f_14 (ATerm t)
                                      {
                                        t = try_1_0(construct_term_0_0, t);
                                        return(t);
                                      }
                                      t = topdown_1_0(f_14, t);
                                      return(t);
                                    }
                                    t = map_1_0(e_14, t);
                                    if(((g_47 != NULL) && (g_47 != t)))
                                      _fail(t);
                                    else
                                      g_47 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_47), not_null(g_47));
                                    t = conc_0_0(t);
                                    if(((h_47 != NULL) && (h_47 != t)))
                                      _fail(t);
                                    else
                                      h_47 = t;
                                    t = not_null(a_5);
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_47)), not_null(h_47))));
                              }
                              ;
                              LocalPopChoice(x_24);
                            }
                          else
                            {
                              t = w_24;
                              {
                                ATerm b_25 = t;
                                int c_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_47 = NULL,b_47 = NULL;
                                    if(match_cons(t, sym_Not_1))
                                      {
                                        if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          a_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    {
                                      ATerm b_5 = NULL;
                                      if(((b_5 != NULL) && (b_5 != t)))
                                        _fail(t);
                                      else
                                        b_5 = t;
                                      t = new_0_0(t);
                                      if(((b_47 != NULL) && (b_47 != t)))
                                        _fail(t);
                                      else
                                        b_47 = t;
                                      t = not_null(b_5);
                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_47)), term_c_19), term_d_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_h_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_25), term_l_25), not_null(a_47))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_47)))))))));
                                    }
                                    ;
                                    LocalPopChoice(c_25);
                                  }
                                else
                                  {
                                    t = b_25;
                                    {
                                      ATerm q_25 = t;
                                      int r_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              if(((x_46 != NULL) && (x_46 != ATgetArgument(t, 0))))
                                                _fail(ATgetArgument(t, 0));
                                              else
                                                x_46 = ATgetArgument(t, 0);
                                              if(((y_46 != NULL) && (y_46 != ATgetArgument(t, 1))))
                                                _fail(ATgetArgument(t, 1));
                                              else
                                                y_46 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm c_5 = NULL;
                                            if(((c_5 != NULL) && (c_5 != t)))
                                              _fail(t);
                                            else
                                              c_5 = t;
                                            t = new_0_0(t);
                                            if(((z_46 != NULL) && (z_46 != t)))
                                              _fail(t);
                                            else
                                              z_46 = t;
                                            t = not_null(c_5);
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_46)), term_c_19), term_d_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_46)))))))));
                                          }
                                          ;
                                          LocalPopChoice(r_25);
                                        }
                                      else
                                        {
                                          t = q_25;
                                          {
                                            ATerm w_25 = t;
                                            int x_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_46 = NULL,w_46 = NULL;
                                                if(match_cons(t, sym_GChoice_2))
                                                  {
                                                    if(((v_46 != NULL) && (v_46 != ATgetArgument(t, 0))))
                                                      _fail(ATgetArgument(t, 0));
                                                    else
                                                      v_46 = ATgetArgument(t, 0);
                                                    if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 1))))
                                                      _fail(ATgetArgument(t, 1));
                                                    else
                                                      w_46 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(v_46), not_null(w_46));
                                                ;
                                                LocalPopChoice(x_25);
                                              }
                                            else
                                              {
                                                t = w_25;
                                                {
                                                  ATerm y_25 = t;
                                                  int z_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                        {
                                                          if(((q_46 != NULL) && (q_46 != ATgetArgument(t, 0))))
                                                            _fail(ATgetArgument(t, 0));
                                                          else
                                                            q_46 = ATgetArgument(t, 0);
                                                          if(((r_46 != NULL) && (r_46 != ATgetArgument(t, 1))))
                                                            _fail(ATgetArgument(t, 1));
                                                          else
                                                            r_46 = ATgetArgument(t, 1);
                                                          if(((s_46 != NULL) && (s_46 != ATgetArgument(t, 2))))
                                                            _fail(ATgetArgument(t, 2));
                                                          else
                                                            s_46 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      {
                                                        ATerm d_5 = NULL;
                                                        if(((d_5 != NULL) && (d_5 != t)))
                                                          _fail(t);
                                                        else
                                                          d_5 = t;
                                                        t = new_0_0(t);
                                                        if(((t_46 != NULL) && (t_46 != t)))
                                                          _fail(t);
                                                        else
                                                          t_46 = t;
                                                        t = new_0_0(t);
                                                        if(((u_46 != NULL) && (u_46 != t)))
                                                          _fail(t);
                                                        else
                                                          u_46 = t;
                                                        t = not_null(d_5);
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_46)), term_c_19), term_f_26)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_46)), term_c_19), term_d_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_h_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_46)))))), not_null(q_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_46)))))))));
                                                      }
                                                      ;
                                                      LocalPopChoice(z_25);
                                                    }
                                                  else
                                                    {
                                                      t = y_25;
                                                      {
                                                        ATerm i_26 = t;
                                                        int j_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                if(((m_46 != NULL) && (m_46 != ATgetArgument(t, 0))))
                                                                  _fail(ATgetArgument(t, 0));
                                                                else
                                                                  m_46 = ATgetArgument(t, 0);
                                                                if(((n_46 != NULL) && (n_46 != ATgetArgument(t, 1))))
                                                                  _fail(ATgetArgument(t, 1));
                                                                else
                                                                  n_46 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            {
                                                              ATerm e_5 = NULL;
                                                              if(((e_5 != NULL) && (e_5 != t)))
                                                                _fail(t);
                                                              else
                                                                e_5 = t;
                                                              t = new_0_0(t);
                                                              if(((o_46 != NULL) && (o_46 != t)))
                                                                _fail(t);
                                                              else
                                                                o_46 = t;
                                                              t = new_0_0(t);
                                                              if(((p_46 != NULL) && (p_46 != t)))
                                                                _fail(t);
                                                              else
                                                                p_46 = t;
                                                              t = not_null(e_5);
                                                              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_l_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(p_46)), term_c_19), term_f_26)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_46)), term_c_19), term_d_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_h_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_46)))))), term_n_26), not_null(m_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_46)))))))));
                                                            }
                                                            ;
                                                            LocalPopChoice(j_26);
                                                          }
                                                        else
                                                          {
                                                            t = i_26;
                                                            {
                                                              ATerm o_26 = t;
                                                              int p_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_46 = NULL,l_46 = NULL;
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      if(((k_46 != NULL) && (k_46 != ATgetArgument(t, 0))))
                                                                        _fail(ATgetArgument(t, 0));
                                                                      else
                                                                        k_46 = ATgetArgument(t, 0);
                                                                      if(((l_46 != NULL) && (l_46 != ATgetArgument(t, 1))))
                                                                        _fail(ATgetArgument(t, 1));
                                                                      else
                                                                        l_46 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_46), not_null(l_46));
                                                                  ;
                                                                  LocalPopChoice(p_26);
                                                                }
                                                              else
                                                                {
                                                                  t = o_26;
                                                                  {
                                                                    ATerm q_26 = t;
                                                                    int r_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm i_46 = NULL,j_46 = NULL;
                                                                        if(match_cons(t, sym_Seq_2))
                                                                          {
                                                                            if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
                                                                              _fail(ATgetArgument(t, 0));
                                                                            else
                                                                              i_46 = ATgetArgument(t, 0);
                                                                            if(((j_46 != NULL) && (j_46 != ATgetArgument(t, 1))))
                                                                              _fail(ATgetArgument(t, 1));
                                                                            else
                                                                              j_46 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_46)), not_null(i_46)));
                                                                        ;
                                                                        LocalPopChoice(r_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_26;
                                                                        {
                                                                          ATerm s_26 = t;
                                                                          int t_26 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm c_46 = NULL,d_46 = NULL;
                                                                              if(match_cons(t, sym_Scope_2))
                                                                                {
                                                                                  if(((d_46 != NULL) && (d_46 != ATgetArgument(t, 0))))
                                                                                    _fail(ATgetArgument(t, 0));
                                                                                  else
                                                                                    d_46 = ATgetArgument(t, 0);
                                                                                  if(((c_46 != NULL) && (c_46 != ATgetArgument(t, 1))))
                                                                                    _fail(ATgetArgument(t, 1));
                                                                                  else
                                                                                    c_46 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              {
                                                                                ATerm f_5 = NULL;
                                                                                if(((f_5 != NULL) && (f_5 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  f_5 = t;
                                                                                t = not_null(d_46);
                                                                                {
                                                                                  ATerm g_14 (ATerm t)
                                                                                  {
                                                                                    ATerm e_46 = NULL;
                                                                                    if(((e_46 != NULL) && (e_46 != t)))
                                                                                      _fail(t);
                                                                                    else
                                                                                      e_46 = t;
                                                                                    {
                                                                                      ATerm g_5 = NULL;
                                                                                      if(((g_5 != NULL) && (g_5 != t)))
                                                                                        _fail(t);
                                                                                      else
                                                                                        g_5 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_46), term_v_26);
                                                                                      {
                                                                                        ATerm h_14 (ATerm t)
                                                                                        {
                                                                                          t = term_w_26;
                                                                                          return(t);
                                                                                        }
                                                                                        t = assert_1_0(h_14, t);
                                                                                        t = not_null(g_5);
                                                                                      }
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  t = map_1_0(g_14, t);
                                                                                  t = not_null(f_5);
                                                                                }
                                                                                {
                                                                                  ATerm x_226 = NULL;
                                                                                  ATerm h_5 = NULL;
                                                                                  if(((h_5 != NULL) && (h_5 != t)))
                                                                                    _fail(t);
                                                                                  else
                                                                                    h_5 = t;
                                                                                  t = not_null(d_46);
                                                                                  {
                                                                                    ATerm i_14 (ATerm t)
                                                                                    {
                                                                                      ATerm f_46 = NULL;
                                                                                      if(((f_46 != NULL) && (f_46 != t)))
                                                                                        _fail(t);
                                                                                      else
                                                                                        f_46 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_c_19), term_z_26);
                                                                                      return(t);
                                                                                    }
                                                                                    t = map_1_0(i_14, t);
                                                                                    if(((x_226 != NULL) && (x_226 != t)))
                                                                                      _fail(t);
                                                                                    else
                                                                                      x_226 = t;
                                                                                    t = not_null(h_5);
                                                                                  }
                                                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, not_null(x_226))), (ATerm) ATinsert(ATempty, not_null(c_46)));
                                                                                }
                                                                              }
                                                                              ;
                                                                              LocalPopChoice(t_26);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_26;
                                                                              {
                                                                                ATerm a_27 = t;
                                                                                int b_27 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(!(match_cons(t, sym_Fail_0)))
                                                                                      _fail(t);
                                                                                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24)));
                                                                                    ;
                                                                                    LocalPopChoice(b_27);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_27;
                                                                                    {
                                                                                      ATerm c_27 = t;
                                                                                      int d_27 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(!(match_cons(t, sym_Id_0)))
                                                                                            _fail(t);
                                                                                          t = term_e_27;
                                                                                          ;
                                                                                          LocalPopChoice(d_27);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_27;
                                                                                          {
                                                                                            ATerm f_27 = t;
                                                                                            int g_27 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
                                                                                                if(match_cons(t, sym_Match_2))
                                                                                                  {
                                                                                                    ATerm h_27 = ATgetArgument(t, 0);
                                                                                                    if(match_cons(h_27, sym_Op_2))
                                                                                                      {
                                                                                                        ATerm i_27 = ATgetArgument(h_27, 0);
                                                                                                        if((ATgetSymbol((ATermAppl) i_27) != ATmakeSymbol("Cons", 0, ATtrue)))
                                                                                                          _fail(t);
                                                                                                        {
                                                                                                          ATerm j_27 = ATgetArgument(h_27, 1);
                                                                                                          if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
                                                                                                            {
                                                                                                              if(((u_43 != NULL) && (u_43 != ATgetFirst((ATermList) j_27))))
                                                                                                                _fail(ATgetFirst((ATermList) j_27));
                                                                                                              else
                                                                                                                u_43 = ATgetFirst((ATermList) j_27);
                                                                                                              {
                                                                                                                ATerm k_27 = (ATerm) ATgetNext((ATermList) j_27);
                                                                                                                if(((ATgetType(k_27) == AT_LIST) && !(ATisEmpty(k_27))))
                                                                                                                  {
                                                                                                                    if(((v_43 != NULL) && (v_43 != ATgetFirst((ATermList) k_27))))
                                                                                                                      _fail(ATgetFirst((ATermList) k_27));
                                                                                                                    else
                                                                                                                      v_43 = ATgetFirst((ATermList) k_27);
                                                                                                                    {
                                                                                                                      ATerm l_27 = (ATerm) ATgetNext((ATermList) k_27);
                                                                                                                      if(((ATgetType(l_27) != AT_LIST) || !(ATisEmpty(l_27))))
                                                                                                                        _fail(t);
                                                                                                                    }
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                        }
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    if(((w_43 != NULL) && (w_43 != ATgetArgument(t, 1))))
                                                                                                      _fail(ATgetArgument(t, 1));
                                                                                                    else
                                                                                                      w_43 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                {
                                                                                                  ATerm i_5 = NULL;
                                                                                                  if(((i_5 != NULL) && (i_5 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    i_5 = t;
                                                                                                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(v_43), (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_27, not_null(w_43))))))), (ATerm) ATmakeAppl(sym__2, not_null(u_43), (ATerm) ATmakeAppl(sym_FunCall_2, term_n_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_27, not_null(w_43))))));
                                                                                                  {
                                                                                                    ATerm j_14 (ATerm t)
                                                                                                    {
                                                                                                      ATerm u_27 = t;
                                                                                                      int v_27 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = MatchArg1_0_0(t);
                                                                                                          ;
                                                                                                          LocalPopChoice(v_27);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = u_27;
                                                                                                          t = MatchArg2_0_0(t);
                                                                                                        }
                                                                                                      return(t);
                                                                                                    }
                                                                                                    t = map_1_0(j_14, t);
                                                                                                    if(((x_43 != NULL) && (x_43 != t)))
                                                                                                      _fail(t);
                                                                                                    else
                                                                                                      x_43 = t;
                                                                                                    t = not_null(i_5);
                                                                                                  }
                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, not_null(w_43))), term_z_27), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_28, (ATerm) ATinsert(ATempty, not_null(w_43))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(x_43)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24))));
                                                                                                }
                                                                                                ;
                                                                                                LocalPopChoice(g_27);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_27;
                                                                                                {
                                                                                                  ATerm c_28 = t;
                                                                                                  int d_28 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm t_43 = NULL;
                                                                                                      if(match_cons(t, sym_Match_2))
                                                                                                        {
                                                                                                          ATerm e_28 = ATgetArgument(t, 0);
                                                                                                          if(match_cons(e_28, sym_Op_2))
                                                                                                            {
                                                                                                              ATerm f_28 = ATgetArgument(e_28, 0);
                                                                                                              if((ATgetSymbol((ATermAppl) f_28) != ATmakeSymbol("Nil", 0, ATtrue)))
                                                                                                                _fail(t);
                                                                                                              {
                                                                                                                ATerm g_28 = ATgetArgument(e_28, 1);
                                                                                                                if(((ATgetType(g_28) != AT_LIST) || !(ATisEmpty(g_28))))
                                                                                                                  _fail(t);
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 1))))
                                                                                                            _fail(ATgetArgument(t, 1));
                                                                                                          else
                                                                                                            t_43 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, not_null(t_43))), term_z_27), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_28, (ATerm) ATinsert(ATempty, not_null(t_43))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24))));
                                                                                                      ;
                                                                                                      LocalPopChoice(d_28);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_28;
                                                                                                      {
                                                                                                        ATerm h_28 = t;
                                                                                                        int i_28 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
                                                                                                            if(match_cons(t, sym_Match_2))
                                                                                                              {
                                                                                                                ATerm j_28 = ATgetArgument(t, 0);
                                                                                                                if(match_cons(j_28, sym_Op_2))
                                                                                                                  {
                                                                                                                    if(((h_43 != NULL) && (h_43 != ATgetArgument(j_28, 0))))
                                                                                                                      _fail(ATgetArgument(j_28, 0));
                                                                                                                    else
                                                                                                                      h_43 = ATgetArgument(j_28, 0);
                                                                                                                    if(((i_43 != NULL) && (i_43 != ATgetArgument(j_28, 1))))
                                                                                                                      _fail(ATgetArgument(j_28, 1));
                                                                                                                    else
                                                                                                                      i_43 = ATgetArgument(j_28, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                if(((j_43 != NULL) && (j_43 != ATgetArgument(t, 1))))
                                                                                                                  _fail(ATgetArgument(t, 1));
                                                                                                                else
                                                                                                                  j_43 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            {
                                                                                                              ATerm j_5 = NULL;
                                                                                                              if(((j_5 != NULL) && (j_5 != t)))
                                                                                                                _fail(t);
                                                                                                              else
                                                                                                                j_5 = t;
                                                                                                              t = not_null(h_43);
                                                                                                              {
                                                                                                                ATerm k_28 = t;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm l_28 = t;
                                                                                                                    int m_28 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
                                                                                                                          _fail(t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(m_28);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = l_28;
                                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                                                                                                                          _fail(t);
                                                                                                                      }
                                                                                                                    PopChoice();
                                                                                                                    _fail(t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = k_28;
                                                                                                                  }
                                                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_43), term_n_28);
                                                                                                                {
                                                                                                                  ATerm k_14 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm l_43 = NULL,m_43 = NULL;
                                                                                                                    if(match_cons(t, sym__2))
                                                                                                                      {
                                                                                                                        if(((l_43 != NULL) && (l_43 != ATgetArgument(t, 0))))
                                                                                                                          _fail(ATgetArgument(t, 0));
                                                                                                                        else
                                                                                                                          l_43 = ATgetArgument(t, 0);
                                                                                                                        if(((m_43 != NULL) && (m_43 != ATgetArgument(t, 1))))
                                                                                                                          _fail(ATgetArgument(t, 1));
                                                                                                                        else
                                                                                                                          m_43 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    {
                                                                                                                      ATerm d_199 = NULL;
                                                                                                                      ATerm k_5 = NULL;
                                                                                                                      if(((k_5 != NULL) && (k_5 != t)))
                                                                                                                        _fail(t);
                                                                                                                      else
                                                                                                                        k_5 = t;
                                                                                                                      {
                                                                                                                        ATerm g_199 = NULL;
                                                                                                                        ATerm l_5 = NULL;
                                                                                                                        if(((l_5 != NULL) && (l_5 != t)))
                                                                                                                          _fail(t);
                                                                                                                        else
                                                                                                                          l_5 = t;
                                                                                                                        t = not_null(m_43);
                                                                                                                        t = int_to_string_0_0(t);
                                                                                                                        if(((g_199 != NULL) && (g_199 != t)))
                                                                                                                          _fail(t);
                                                                                                                        else
                                                                                                                          g_199 = t;
                                                                                                                        t = not_null(l_5);
                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_43), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(g_199))), not_null(j_43))));
                                                                                                                        {
                                                                                                                          ATerm q_28 = t;
                                                                                                                          int r_28 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = MatchArg1_0_0(t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(r_28);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_28;
                                                                                                                              t = MatchArg2_0_0(t);
                                                                                                                            }
                                                                                                                          if(((d_199 != NULL) && (d_199 != t)))
                                                                                                                            _fail(t);
                                                                                                                          else
                                                                                                                            d_199 = t;
                                                                                                                          t = not_null(k_5);
                                                                                                                        }
                                                                                                                      }
                                                                                                                      {
                                                                                                                        ATerm b_200 = NULL;
                                                                                                                        ATerm m_5 = NULL;
                                                                                                                        if(((m_5 != NULL) && (m_5 != t)))
                                                                                                                          _fail(t);
                                                                                                                        else
                                                                                                                          m_5 = t;
                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), term_s_28);
                                                                                                                        t = add_0_0(t);
                                                                                                                        if(((b_200 != NULL) && (b_200 != t)))
                                                                                                                          _fail(t);
                                                                                                                        else
                                                                                                                          b_200 = t;
                                                                                                                        t = not_null(m_5);
                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_199), not_null(b_200));
                                                                                                                      }
                                                                                                                    }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = thread_map_1_0(k_14, t);
                                                                                                                  if(match_cons(t, sym__2))
                                                                                                                    {
                                                                                                                      if(((k_43 != NULL) && (k_43 != ATgetArgument(t, 0))))
                                                                                                                        _fail(ATgetArgument(t, 0));
                                                                                                                      else
                                                                                                                        k_43 = ATgetArgument(t, 0);
                                                                                                                      {
                                                                                                                        ATerm t_28 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = not_null(j_5);
                                                                                                                }
                                                                                                              }
                                                                                                              {
                                                                                                                ATerm w_200 = NULL;
                                                                                                                ATerm n_5 = NULL;
                                                                                                                if(((n_5 != NULL) && (n_5 != t)))
                                                                                                                  _fail(t);
                                                                                                                else
                                                                                                                  n_5 = t;
                                                                                                                {
                                                                                                                  ATerm z_200 = NULL;
                                                                                                                  ATerm o_5 = NULL;
                                                                                                                  if(((o_5 != NULL) && (o_5 != t)))
                                                                                                                    _fail(t);
                                                                                                                  else
                                                                                                                    o_5 = t;
                                                                                                                  t = not_null(i_43);
                                                                                                                  t = length_0_0(t);
                                                                                                                  if(((z_200 != NULL) && (z_200 != t)))
                                                                                                                    _fail(t);
                                                                                                                  else
                                                                                                                    z_200 = t;
                                                                                                                  t = not_null(o_5);
                                                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_43), not_null(z_200));
                                                                                                                  t = ConstructorName_0_0(t);
                                                                                                                  if(((w_200 != NULL) && (w_200 != t)))
                                                                                                                    _fail(t);
                                                                                                                  else
                                                                                                                    w_200 = t;
                                                                                                                  t = not_null(n_5);
                                                                                                                }
                                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_200))), not_null(j_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(k_43)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24))));
                                                                                                              }
                                                                                                            }
                                                                                                            ;
                                                                                                            LocalPopChoice(i_28);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_28;
                                                                                                            {
                                                                                                              ATerm w_28 = t;
                                                                                                              int x_28 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm f_43 = NULL,g_43 = NULL;
                                                                                                                  if(match_cons(t, sym_Match_2))
                                                                                                                    {
                                                                                                                      ATerm y_28 = ATgetArgument(t, 0);
                                                                                                                      if(match_cons(y_28, sym_Real_1))
                                                                                                                        {
                                                                                                                          if(((g_43 != NULL) && (g_43 != ATgetArgument(y_28, 0))))
                                                                                                                            _fail(ATgetArgument(y_28, 0));
                                                                                                                          else
                                                                                                                            g_43 = ATgetArgument(y_28, 0);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      if(((f_43 != NULL) && (f_43 != ATgetArgument(t, 1))))
                                                                                                                        _fail(ATgetArgument(t, 1));
                                                                                                                      else
                                                                                                                        f_43 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  {
                                                                                                                    ATerm l_197 = NULL;
                                                                                                                    ATerm p_5 = NULL;
                                                                                                                    if(((p_5 != NULL) && (p_5 != t)))
                                                                                                                      _fail(t);
                                                                                                                    else
                                                                                                                      p_5 = t;
                                                                                                                    t = not_null(g_43);
                                                                                                                    t = real_to_string_0_0(t);
                                                                                                                    if(((l_197 != NULL) && (l_197 != t)))
                                                                                                                      _fail(t);
                                                                                                                    else
                                                                                                                      l_197 = t;
                                                                                                                    t = not_null(p_5);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, not_null(f_43))), term_a_29), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_29, not_null(f_43)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(l_197)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24))));
                                                                                                                  }
                                                                                                                  ;
                                                                                                                  LocalPopChoice(x_28);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_28;
                                                                                                                  {
                                                                                                                    ATerm h_29 = t;
                                                                                                                    int i_29 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm d_43 = NULL,e_43 = NULL;
                                                                                                                        if(match_cons(t, sym_Match_2))
                                                                                                                          {
                                                                                                                            ATerm j_29 = ATgetArgument(t, 0);
                                                                                                                            if(match_cons(j_29, sym_Int_1))
                                                                                                                              {
                                                                                                                                if(((e_43 != NULL) && (e_43 != ATgetArgument(j_29, 0))))
                                                                                                                                  _fail(ATgetArgument(j_29, 0));
                                                                                                                                else
                                                                                                                                  e_43 = ATgetArgument(j_29, 0);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            if(((d_43 != NULL) && (d_43 != ATgetArgument(t, 1))))
                                                                                                                              _fail(ATgetArgument(t, 1));
                                                                                                                            else
                                                                                                                              d_43 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        {
                                                                                                                          ATerm q_196 = NULL;
                                                                                                                          ATerm q_5 = NULL;
                                                                                                                          if(((q_5 != NULL) && (q_5 != t)))
                                                                                                                            _fail(t);
                                                                                                                          else
                                                                                                                            q_5 = t;
                                                                                                                          t = not_null(e_43);
                                                                                                                          t = int_to_string_0_0(t);
                                                                                                                          if(((q_196 != NULL) && (q_196 != t)))
                                                                                                                            _fail(t);
                                                                                                                          else
                                                                                                                            q_196 = t;
                                                                                                                          t = not_null(q_5);
                                                                                                                          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, not_null(d_43))), term_l_29), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_29, not_null(d_43)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(q_196)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24))));
                                                                                                                        }
                                                                                                                        ;
                                                                                                                        LocalPopChoice(i_29);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_29;
                                                                                                                        {
                                                                                                                          ATerm s_29 = t;
                                                                                                                          int t_29 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm b_43 = NULL,c_43 = NULL;
                                                                                                                              if(match_cons(t, sym_Match_2))
                                                                                                                                {
                                                                                                                                  ATerm u_29 = ATgetArgument(t, 0);
                                                                                                                                  if(match_cons(u_29, sym_Str_1))
                                                                                                                                    {
                                                                                                                                      if(((c_43 != NULL) && (c_43 != ATgetArgument(u_29, 0))))
                                                                                                                                        _fail(ATgetArgument(u_29, 0));
                                                                                                                                      else
                                                                                                                                        c_43 = ATgetArgument(u_29, 0);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  if(((b_43 != NULL) && (b_43 != ATgetArgument(t, 1))))
                                                                                                                                    _fail(ATgetArgument(t, 1));
                                                                                                                                  else
                                                                                                                                    b_43 = ATgetArgument(t, 1);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              {
                                                                                                                                ATerm v_195 = NULL;
                                                                                                                                ATerm r_5 = NULL;
                                                                                                                                if(((r_5 != NULL) && (r_5 != t)))
                                                                                                                                  _fail(t);
                                                                                                                                else
                                                                                                                                  r_5 = t;
                                                                                                                                t = not_null(c_43);
                                                                                                                                t = escape_0_0(t);
                                                                                                                                t = double_quote_0_0(t);
                                                                                                                                if(((v_195 != NULL) && (v_195 != t)))
                                                                                                                                  _fail(t);
                                                                                                                                else
                                                                                                                                  v_195 = t;
                                                                                                                                t = not_null(r_5);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_30, not_null(b_43)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), term_x_22), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(v_195)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, term_n_24))));
                                                                                                                              }
                                                                                                                              ;
                                                                                                                              LocalPopChoice(t_29);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_29;
                                                                                                                              {
                                                                                                                                ATerm b_30 = t;
                                                                                                                                int c_30 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm z_42 = NULL,a_43 = NULL;
                                                                                                                                    ATerm z_194 = NULL;
                                                                                                                                    if(match_cons(t, sym_Match_2))
                                                                                                                                      {
                                                                                                                                        ATerm d_30 = ATgetArgument(t, 0);
                                                                                                                                        if(((z_194 != NULL) && (z_194 != d_30)))
                                                                                                                                          _fail(d_30);
                                                                                                                                        else
                                                                                                                                          z_194 = d_30;
                                                                                                                                        if(match_cons(d_30, sym_Var_1))
                                                                                                                                          {
                                                                                                                                            if(((z_42 != NULL) && (z_42 != ATgetArgument(d_30, 0))))
                                                                                                                                              _fail(ATgetArgument(d_30, 0));
                                                                                                                                            else
                                                                                                                                              z_42 = ATgetArgument(d_30, 0);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          _fail(t);
                                                                                                                                        if(((a_43 != NULL) && (a_43 != ATgetArgument(t, 1))))
                                                                                                                                          _fail(ATgetArgument(t, 1));
                                                                                                                                        else
                                                                                                                                          a_43 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    {
                                                                                                                                      ATerm s_5 = NULL;
                                                                                                                                      if(((s_5 != NULL) && (s_5 != t)))
                                                                                                                                        _fail(t);
                                                                                                                                      else
                                                                                                                                        s_5 = t;
                                                                                                                                      t = SSLgetAnnotations(not_null(z_194));
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = not_null(s_5);
                                                                                                                                    }
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_42)), term_y_26), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_42)), not_null(a_43))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, not_null(a_43)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_42)), term_s_18, not_null(a_43))));
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(c_30);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = b_30;
                                                                                                                                    {
                                                                                                                                      ATerm e_30 = t;
                                                                                                                                      int f_30 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm v_42 = NULL,w_42 = NULL;
                                                                                                                                          ATerm j_193 = NULL;
                                                                                                                                          if(match_cons(t, sym_Match_2))
                                                                                                                                            {
                                                                                                                                              ATerm g_30 = ATgetArgument(t, 0);
                                                                                                                                              if(((j_193 != NULL) && (j_193 != g_30)))
                                                                                                                                                _fail(g_30);
                                                                                                                                              else
                                                                                                                                                j_193 = g_30;
                                                                                                                                              if(match_cons(g_30, sym_Var_1))
                                                                                                                                                {
                                                                                                                                                  if(((v_42 != NULL) && (v_42 != ATgetArgument(g_30, 0))))
                                                                                                                                                    _fail(ATgetArgument(g_30, 0));
                                                                                                                                                  else
                                                                                                                                                    v_42 = ATgetArgument(g_30, 0);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              if(((w_42 != NULL) && (w_42 != ATgetArgument(t, 1))))
                                                                                                                                                _fail(ATgetArgument(t, 1));
                                                                                                                                              else
                                                                                                                                                w_42 = ATgetArgument(t, 1);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          {
                                                                                                                                            ATerm t_5 = NULL;
                                                                                                                                            if(((t_5 != NULL) && (t_5 != t)))
                                                                                                                                              _fail(t);
                                                                                                                                            else
                                                                                                                                              t_5 = t;
                                                                                                                                            t = SSLgetAnnotations(not_null(j_193));
                                                                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                              {
                                                                                                                                                ATerm h_30 = ATgetFirst((ATermList) t);
                                                                                                                                                if((ATgetSymbol((ATermAppl) h_30) != ATmakeSymbol("bound", 0, ATtrue)))
                                                                                                                                                  _fail(t);
                                                                                                                                                {
                                                                                                                                                  ATerm i_30 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                  if(((ATgetType(i_30) != AT_LIST) || !(ATisEmpty(i_30))))
                                                                                                                                                    _fail(t);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = not_null(t_5);
                                                                                                                                          }
                                                                                                                                          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_42)), not_null(w_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, not_null(w_42)))))));
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(f_30);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_30;
                                                                                                                                          {
                                                                                                                                            ATerm j_30 = t;
                                                                                                                                            int k_30 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm t_42 = NULL,u_42 = NULL;
                                                                                                                                                ATerm u_192 = NULL;
                                                                                                                                                if(match_cons(t, sym_Match_2))
                                                                                                                                                  {
                                                                                                                                                    ATerm l_30 = ATgetArgument(t, 0);
                                                                                                                                                    if(((u_192 != NULL) && (u_192 != l_30)))
                                                                                                                                                      _fail(l_30);
                                                                                                                                                    else
                                                                                                                                                      u_192 = l_30;
                                                                                                                                                    if(match_cons(l_30, sym_Var_1))
                                                                                                                                                      {
                                                                                                                                                        if(((t_42 != NULL) && (t_42 != ATgetArgument(l_30, 0))))
                                                                                                                                                          _fail(ATgetArgument(l_30, 0));
                                                                                                                                                        else
                                                                                                                                                          t_42 = ATgetArgument(l_30, 0);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    if(((u_42 != NULL) && (u_42 != ATgetArgument(t, 1))))
                                                                                                                                                      _fail(ATgetArgument(t, 1));
                                                                                                                                                    else
                                                                                                                                                      u_42 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  _fail(t);
                                                                                                                                                {
                                                                                                                                                  ATerm u_5 = NULL;
                                                                                                                                                  if(((u_5 != NULL) && (u_5 != t)))
                                                                                                                                                    _fail(t);
                                                                                                                                                  else
                                                                                                                                                    u_5 = t;
                                                                                                                                                  t = SSLgetAnnotations(not_null(u_192));
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      ATerm m_30 = ATgetFirst((ATermList) t);
                                                                                                                                                      if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("unbound", 0, ATtrue)))
                                                                                                                                                        _fail(t);
                                                                                                                                                      {
                                                                                                                                                        ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
                                                                                                                                                          _fail(t);
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = not_null(u_5);
                                                                                                                                                }
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_42)), term_s_18, not_null(u_42)));
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(k_30);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = j_30;
                                                                                                                                                {
                                                                                                                                                  ATerm o_30 = t;
                                                                                                                                                  int p_30 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
                                                                                                                                                      if(match_cons(t, sym_Match_2))
                                                                                                                                                        {
                                                                                                                                                          ATerm q_30 = ATgetArgument(t, 0);
                                                                                                                                                          if(match_cons(q_30, sym_As_2))
                                                                                                                                                            {
                                                                                                                                                              if(((q_42 != NULL) && (q_42 != ATgetArgument(q_30, 0))))
                                                                                                                                                                _fail(ATgetArgument(q_30, 0));
                                                                                                                                                              else
                                                                                                                                                                q_42 = ATgetArgument(q_30, 0);
                                                                                                                                                              if(((r_42 != NULL) && (r_42 != ATgetArgument(q_30, 1))))
                                                                                                                                                                _fail(ATgetArgument(q_30, 1));
                                                                                                                                                              else
                                                                                                                                                                r_42 = ATgetArgument(q_30, 1);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          if(((s_42 != NULL) && (s_42 != ATgetArgument(t, 1))))
                                                                                                                                                            _fail(ATgetArgument(t, 1));
                                                                                                                                                          else
                                                                                                                                                            s_42 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(r_42), not_null(s_42))), (ATerm) ATmakeAppl(sym_Match_2, not_null(q_42), not_null(s_42))));
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(p_30);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = o_30;
                                                                                                                                                      {
                                                                                                                                                        ATerm r_30 = t;
                                                                                                                                                        int s_30 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm o_42 = NULL,p_42 = NULL;
                                                                                                                                                            if(match_cons(t, sym_Match_2))
                                                                                                                                                              {
                                                                                                                                                                ATerm t_30 = ATgetArgument(t, 0);
                                                                                                                                                                if(match_cons(t_30, sym_BuildDefault_1))
                                                                                                                                                                  {
                                                                                                                                                                    if(((o_42 != NULL) && (o_42 != ATgetArgument(t_30, 0))))
                                                                                                                                                                      _fail(ATgetArgument(t_30, 0));
                                                                                                                                                                    else
                                                                                                                                                                      o_42 = ATgetArgument(t_30, 0);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                if(((p_42 != NULL) && (p_42 != ATgetArgument(t, 1))))
                                                                                                                                                                  _fail(ATgetArgument(t, 1));
                                                                                                                                                                else
                                                                                                                                                                  p_42 = ATgetArgument(t, 1);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              _fail(t);
                                                                                                                                                            t = term_e_27;
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(s_30);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = r_30;
                                                                                                                                                            {
                                                                                                                                                              ATerm u_30 = t;
                                                                                                                                                              int v_30 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  ATerm n_42 = NULL;
                                                                                                                                                                  if(match_cons(t, sym_Match_2))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm w_30 = ATgetArgument(t, 0);
                                                                                                                                                                      if(!(match_cons(w_30, sym_Wld_0)))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      if(((n_42 != NULL) && (n_42 != ATgetArgument(t, 1))))
                                                                                                                                                                        _fail(ATgetArgument(t, 1));
                                                                                                                                                                      else
                                                                                                                                                                        n_42 = ATgetArgument(t, 1);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = term_e_27;
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(v_30);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = u_30;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm x_30 = t;
                                                                                                                                                                    int y_30 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm m_42 = NULL;
                                                                                                                                                                        if(match_cons(t, sym_Match_1))
                                                                                                                                                                          {
                                                                                                                                                                            if(((m_42 != NULL) && (m_42 != ATgetArgument(t, 0))))
                                                                                                                                                                              _fail(ATgetArgument(t, 0));
                                                                                                                                                                            else
                                                                                                                                                                              m_42 = ATgetArgument(t, 0);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          _fail(t);
                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_2, not_null(m_42), term_n_24);
                                                                                                                                                                        ;
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
                                                                                                                                                                              ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
                                                                                                                                                                              if(match_cons(t, sym_Case_3))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm b_31 = ATgetArgument(t, 0);
                                                                                                                                                                                  if(match_cons(b_31, sym_Var_1))
                                                                                                                                                                                    {
                                                                                                                                                                                      if(((n_41 != NULL) && (n_41 != ATgetArgument(b_31, 0))))
                                                                                                                                                                                        _fail(ATgetArgument(b_31, 0));
                                                                                                                                                                                      else
                                                                                                                                                                                        n_41 = ATgetArgument(b_31, 0);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm c_31 = ATgetArgument(t, 1);
                                                                                                                                                                                    if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
                                                                                                                                                                                      {
                                                                                                                                                                                        ATerm d_31 = ATgetFirst((ATermList) c_31);
                                                                                                                                                                                        if(match_cons(d_31, sym_Alt_3))
                                                                                                                                                                                          {
                                                                                                                                                                                            ATerm e_31 = ATgetArgument(d_31, 0);
                                                                                                                                                                                            if(match_cons(e_31, sym_Fun_2))
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm g_31 = ATgetArgument(e_31, 0);
                                                                                                                                                                                                if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("Cons", 0, ATtrue)))
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm h_31 = ATgetArgument(e_31, 1);
                                                                                                                                                                                                  if(((ATgetType(h_31) != AT_INT) || (ATgetInt((ATermInt) h_31) != 2)))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                }
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm f_31 = ATgetArgument(d_31, 1);
                                                                                                                                                                                              if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm i_31 = ATgetFirst((ATermList) f_31);
                                                                                                                                                                                                  if(match_cons(i_31, sym_Var_1))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(((k_41 != NULL) && (k_41 != ATgetArgument(i_31, 0))))
                                                                                                                                                                                                        _fail(ATgetArgument(i_31, 0));
                                                                                                                                                                                                      else
                                                                                                                                                                                                        k_41 = ATgetArgument(i_31, 0);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  {
                                                                                                                                                                                                    ATerm j_31 = (ATerm) ATgetNext((ATermList) f_31);
                                                                                                                                                                                                    if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
                                                                                                                                                                                                      {
                                                                                                                                                                                                        ATerm k_31 = ATgetFirst((ATermList) j_31);
                                                                                                                                                                                                        if(match_cons(k_31, sym_Var_1))
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if(((l_41 != NULL) && (l_41 != ATgetArgument(k_31, 0))))
                                                                                                                                                                                                              _fail(ATgetArgument(k_31, 0));
                                                                                                                                                                                                            else
                                                                                                                                                                                                              l_41 = ATgetArgument(k_31, 0);
                                                                                                                                                                                                          }
                                                                                                                                                                                                        else
                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm l_31 = (ATerm) ATgetNext((ATermList) j_31);
                                                                                                                                                                                                          if(((ATgetType(l_31) != AT_LIST) || !(ATisEmpty(l_31))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                    else
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                            }
                                                                                                                                                                                            if(((m_41 != NULL) && (m_41 != ATgetArgument(d_31, 2))))
                                                                                                                                                                                              _fail(ATgetArgument(d_31, 2));
                                                                                                                                                                                            else
                                                                                                                                                                                              m_41 = ATgetArgument(d_31, 2);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                        if(((o_41 != NULL) && (o_41 != (ATerm) ATgetNext((ATermList) c_31))))
                                                                                                                                                                                          _fail((ATerm) ATgetNext((ATermList) c_31));
                                                                                                                                                                                        else
                                                                                                                                                                                          o_41 = (ATerm) ATgetNext((ATermList) c_31);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                  }
                                                                                                                                                                                  if(((p_41 != NULL) && (p_41 != ATgetArgument(t, 2))))
                                                                                                                                                                                    _fail(ATgetArgument(t, 2));
                                                                                                                                                                                  else
                                                                                                                                                                                    p_41 = ATgetArgument(t, 2);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_41)))), term_z_27), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_41)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_41)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_41)), term_s_18, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_27, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_41))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_41)), term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_27, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_41))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_41)), not_null(o_41), not_null(p_41)))));
                                                                                                                                                                              ;
                                                                                                                                                                              LocalPopChoice(a_31);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              t = z_30;
                                                                                                                                                                              {
                                                                                                                                                                                ATerm m_31 = t;
                                                                                                                                                                                int n_31 = stack_ptr;
                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
                                                                                                                                                                                    if(match_cons(t, sym_Case_3))
                                                                                                                                                                                      {
                                                                                                                                                                                        ATerm o_31 = ATgetArgument(t, 0);
                                                                                                                                                                                        if(match_cons(o_31, sym_Var_1))
                                                                                                                                                                                          {
                                                                                                                                                                                            if(((h_41 != NULL) && (h_41 != ATgetArgument(o_31, 0))))
                                                                                                                                                                                              _fail(ATgetArgument(o_31, 0));
                                                                                                                                                                                            else
                                                                                                                                                                                              h_41 = ATgetArgument(o_31, 0);
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm p_31 = ATgetArgument(t, 1);
                                                                                                                                                                                          if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm q_31 = ATgetFirst((ATermList) p_31);
                                                                                                                                                                                              if(match_cons(q_31, sym_Alt_3))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm r_31 = ATgetArgument(q_31, 0);
                                                                                                                                                                                                  if(match_cons(r_31, sym_Fun_2))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm t_31 = ATgetArgument(r_31, 0);
                                                                                                                                                                                                      if((ATgetSymbol((ATermAppl) t_31) != ATmakeSymbol("Nil", 0, ATtrue)))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      {
                                                                                                                                                                                                        ATerm u_31 = ATgetArgument(r_31, 1);
                                                                                                                                                                                                        if(((ATgetType(u_31) != AT_INT) || (ATgetInt((ATermInt) u_31) != 0)))
                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  {
                                                                                                                                                                                                    ATerm s_31 = ATgetArgument(q_31, 1);
                                                                                                                                                                                                    if(((ATgetType(s_31) != AT_LIST) || !(ATisEmpty(s_31))))
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                  }
                                                                                                                                                                                                  if(((g_41 != NULL) && (g_41 != ATgetArgument(q_31, 2))))
                                                                                                                                                                                                    _fail(ATgetArgument(q_31, 2));
                                                                                                                                                                                                  else
                                                                                                                                                                                                    g_41 = ATgetArgument(q_31, 2);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              if(((i_41 != NULL) && (i_41 != (ATerm) ATgetNext((ATermList) p_31))))
                                                                                                                                                                                                _fail((ATerm) ATgetNext((ATermList) p_31));
                                                                                                                                                                                              else
                                                                                                                                                                                                i_41 = (ATerm) ATgetNext((ATermList) p_31);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                        }
                                                                                                                                                                                        if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 2))))
                                                                                                                                                                                          _fail(ATgetArgument(t, 2));
                                                                                                                                                                                        else
                                                                                                                                                                                          j_41 = ATgetArgument(t, 2);
                                                                                                                                                                                      }
                                                                                                                                                                                    else
                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_41)))), term_z_27), (ATerm) ATmakeAppl(sym_FunCall_2, term_b_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_41))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(g_41)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_41)), not_null(i_41), not_null(j_41)))));
                                                                                                                                                                                    ;
                                                                                                                                                                                    LocalPopChoice(n_31);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  {
                                                                                                                                                                                    t = m_31;
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm v_31 = t;
                                                                                                                                                                                      int w_31 = stack_ptr;
                                                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
                                                                                                                                                                                          if(match_cons(t, sym_Case_3))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm x_31 = ATgetArgument(t, 0);
                                                                                                                                                                                              if(match_cons(x_31, sym_Var_1))
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(((c_41 != NULL) && (c_41 != ATgetArgument(x_31, 0))))
                                                                                                                                                                                                    _fail(ATgetArgument(x_31, 0));
                                                                                                                                                                                                  else
                                                                                                                                                                                                    c_41 = ATgetArgument(x_31, 0);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm y_31 = ATgetArgument(t, 1);
                                                                                                                                                                                                if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
                                                                                                                                                                                                  {
                                                                                                                                                                                                    ATerm z_31 = ATgetFirst((ATermList) y_31);
                                                                                                                                                                                                    if(match_cons(z_31, sym_Alt_3))
                                                                                                                                                                                                      {
                                                                                                                                                                                                        ATerm a_32 = ATgetArgument(z_31, 0);
                                                                                                                                                                                                        if(match_cons(a_32, sym_Fun_2))
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if(((a_41 != NULL) && (a_41 != ATgetArgument(a_32, 0))))
                                                                                                                                                                                                              _fail(ATgetArgument(a_32, 0));
                                                                                                                                                                                                            else
                                                                                                                                                                                                              a_41 = ATgetArgument(a_32, 0);
                                                                                                                                                                                                            if(((w_40 != NULL) && (w_40 != ATgetArgument(a_32, 1))))
                                                                                                                                                                                                              _fail(ATgetArgument(a_32, 1));
                                                                                                                                                                                                            else
                                                                                                                                                                                                              w_40 = ATgetArgument(a_32, 1);
                                                                                                                                                                                                          }
                                                                                                                                                                                                        else
                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                        if(((b_41 != NULL) && (b_41 != ATgetArgument(z_31, 1))))
                                                                                                                                                                                                          _fail(ATgetArgument(z_31, 1));
                                                                                                                                                                                                        else
                                                                                                                                                                                                          b_41 = ATgetArgument(z_31, 1);
                                                                                                                                                                                                        if(((x_40 != NULL) && (x_40 != ATgetArgument(z_31, 2))))
                                                                                                                                                                                                          _fail(ATgetArgument(z_31, 2));
                                                                                                                                                                                                        else
                                                                                                                                                                                                          x_40 = ATgetArgument(z_31, 2);
                                                                                                                                                                                                      }
                                                                                                                                                                                                    else
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                    if(((y_40 != NULL) && (y_40 != (ATerm) ATgetNext((ATermList) y_31))))
                                                                                                                                                                                                      _fail((ATerm) ATgetNext((ATermList) y_31));
                                                                                                                                                                                                    else
                                                                                                                                                                                                      y_40 = (ATerm) ATgetNext((ATermList) y_31);
                                                                                                                                                                                                  }
                                                                                                                                                                                                else
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                              }
                                                                                                                                                                                              if(((z_40 != NULL) && (z_40 != ATgetArgument(t, 2))))
                                                                                                                                                                                                _fail(ATgetArgument(t, 2));
                                                                                                                                                                                              else
                                                                                                                                                                                                z_40 = ATgetArgument(t, 2);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          {
                                                                                                                                                                                            ATerm v_5 = NULL;
                                                                                                                                                                                            if(((v_5 != NULL) && (v_5 != t)))
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            else
                                                                                                                                                                                              v_5 = t;
                                                                                                                                                                                            t = not_null(a_41);
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm b_32 = t;
                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm c_32 = t;
                                                                                                                                                                                                  int d_32 = stack_ptr;
                                                                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      ;
                                                                                                                                                                                                      LocalPopChoice(d_32);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      t = c_32;
                                                                                                                                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  PopChoice();
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  t = b_32;
                                                                                                                                                                                                }
                                                                                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_41), term_n_28);
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm l_14 (ATerm t)
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm e_41 = NULL,f_41 = NULL;
                                                                                                                                                                                                  if(match_cons(t, sym__2))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm e_32 = ATgetArgument(t, 0);
                                                                                                                                                                                                      if(match_cons(e_32, sym_Var_1))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(((e_41 != NULL) && (e_41 != ATgetArgument(e_32, 0))))
                                                                                                                                                                                                            _fail(ATgetArgument(e_32, 0));
                                                                                                                                                                                                          else
                                                                                                                                                                                                            e_41 = ATgetArgument(e_32, 0);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      if(((f_41 != NULL) && (f_41 != ATgetArgument(t, 1))))
                                                                                                                                                                                                        _fail(ATgetArgument(t, 1));
                                                                                                                                                                                                      else
                                                                                                                                                                                                        f_41 = ATgetArgument(t, 1);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  {
                                                                                                                                                                                                    ATerm h_181 = NULL;
                                                                                                                                                                                                    ATerm w_5 = NULL;
                                                                                                                                                                                                    if(((w_5 != NULL) && (w_5 != t)))
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                    else
                                                                                                                                                                                                      w_5 = t;
                                                                                                                                                                                                    t = not_null(f_41);
                                                                                                                                                                                                    t = int_to_string_0_0(t);
                                                                                                                                                                                                    if(((h_181 != NULL) && (h_181 != t)))
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                    else
                                                                                                                                                                                                      h_181 = t;
                                                                                                                                                                                                    t = not_null(w_5);
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm t_181 = NULL;
                                                                                                                                                                                                      ATerm x_5 = NULL;
                                                                                                                                                                                                      if(((x_5 != NULL) && (x_5 != t)))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      else
                                                                                                                                                                                                        x_5 = t;
                                                                                                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_41), term_s_28);
                                                                                                                                                                                                      t = add_0_0(t);
                                                                                                                                                                                                      if(((t_181 != NULL) && (t_181 != t)))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      else
                                                                                                                                                                                                        t_181 = t;
                                                                                                                                                                                                      t = not_null(x_5);
                                                                                                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_41)), term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(h_181))), (ATerm) ATmakeAppl(sym_Id_1, not_null(c_41)))))), not_null(t_181));
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                  return(t);
                                                                                                                                                                                                }
                                                                                                                                                                                                t = thread_map_1_0(l_14, t);
                                                                                                                                                                                                if(match_cons(t, sym__2))
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if(((d_41 != NULL) && (d_41 != ATgetArgument(t, 0))))
                                                                                                                                                                                                      _fail(ATgetArgument(t, 0));
                                                                                                                                                                                                    else
                                                                                                                                                                                                      d_41 = ATgetArgument(t, 0);
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm f_32 = ATgetArgument(t, 1);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                else
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                t = not_null(v_5);
                                                                                                                                                                                              }
                                                                                                                                                                                            }
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm o_182 = NULL;
                                                                                                                                                                                              ATerm y_5 = NULL;
                                                                                                                                                                                              if(((y_5 != NULL) && (y_5 != t)))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              else
                                                                                                                                                                                                y_5 = t;
                                                                                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_41), not_null(w_40));
                                                                                                                                                                                              t = ConstructorName_0_0(t);
                                                                                                                                                                                              if(((o_182 != NULL) && (o_182 != t)))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              else
                                                                                                                                                                                                o_182 = t;
                                                                                                                                                                                              t = not_null(y_5);
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm a_183 = NULL;
                                                                                                                                                                                                ATerm z_5 = NULL;
                                                                                                                                                                                                if(((z_5 != NULL) && (z_5 != t)))
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                else
                                                                                                                                                                                                  z_5 = t;
                                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_41), (ATerm) ATinsert(ATempty, not_null(x_40)));
                                                                                                                                                                                                t = conc_0_0(t);
                                                                                                                                                                                                if(((a_183 != NULL) && (a_183 != t)))
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                else
                                                                                                                                                                                                  a_183 = t;
                                                                                                                                                                                                t = not_null(z_5);
                                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_182))), (ATerm) ATmakeAppl(sym_Id_1, not_null(c_41)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(a_183)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_41)), not_null(y_40), not_null(z_40)))));
                                                                                                                                                                                              }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                          ;
                                                                                                                                                                                          LocalPopChoice(w_31);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          t = v_31;
                                                                                                                                                                                          {
                                                                                                                                                                                            ATerm g_32 = t;
                                                                                                                                                                                            int h_32 = stack_ptr;
                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
                                                                                                                                                                                                if(match_cons(t, sym_Case_3))
                                                                                                                                                                                                  {
                                                                                                                                                                                                    ATerm i_32 = ATgetArgument(t, 0);
                                                                                                                                                                                                    if(match_cons(i_32, sym_Var_1))
                                                                                                                                                                                                      {
                                                                                                                                                                                                        if(((t_40 != NULL) && (t_40 != ATgetArgument(i_32, 0))))
                                                                                                                                                                                                          _fail(ATgetArgument(i_32, 0));
                                                                                                                                                                                                        else
                                                                                                                                                                                                          t_40 = ATgetArgument(i_32, 0);
                                                                                                                                                                                                      }
                                                                                                                                                                                                    else
                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm j_32 = ATgetArgument(t, 1);
                                                                                                                                                                                                      if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm k_32 = ATgetFirst((ATermList) j_32);
                                                                                                                                                                                                          if(match_cons(k_32, sym_Alt_3))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              ATerm l_32 = ATgetArgument(k_32, 0);
                                                                                                                                                                                                              if(match_cons(l_32, sym_Real_1))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(((r_40 != NULL) && (r_40 != ATgetArgument(l_32, 0))))
                                                                                                                                                                                                                    _fail(ATgetArgument(l_32, 0));
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    r_40 = ATgetArgument(l_32, 0);
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              if(((q_40 != NULL) && (q_40 != ATgetArgument(k_32, 1))))
                                                                                                                                                                                                                _fail(ATgetArgument(k_32, 1));
                                                                                                                                                                                                              else
                                                                                                                                                                                                                q_40 = ATgetArgument(k_32, 1);
                                                                                                                                                                                                              if(((s_40 != NULL) && (s_40 != ATgetArgument(k_32, 2))))
                                                                                                                                                                                                                _fail(ATgetArgument(k_32, 2));
                                                                                                                                                                                                              else
                                                                                                                                                                                                                s_40 = ATgetArgument(k_32, 2);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          if(((u_40 != NULL) && (u_40 != (ATerm) ATgetNext((ATermList) j_32))))
                                                                                                                                                                                                            _fail((ATerm) ATgetNext((ATermList) j_32));
                                                                                                                                                                                                          else
                                                                                                                                                                                                            u_40 = (ATerm) ATgetNext((ATermList) j_32);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                    if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 2))))
                                                                                                                                                                                                      _fail(ATgetArgument(t, 2));
                                                                                                                                                                                                    else
                                                                                                                                                                                                      v_40 = ATgetArgument(t, 2);
                                                                                                                                                                                                  }
                                                                                                                                                                                                else
                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm p_179 = NULL;
                                                                                                                                                                                                  ATerm a_6 = NULL;
                                                                                                                                                                                                  if(((a_6 != NULL) && (a_6 != t)))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  else
                                                                                                                                                                                                    a_6 = t;
                                                                                                                                                                                                  t = not_null(r_40);
                                                                                                                                                                                                  t = real_to_string_0_0(t);
                                                                                                                                                                                                  if(((p_179 != NULL) && (p_179 != t)))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  else
                                                                                                                                                                                                    p_179 = t;
                                                                                                                                                                                                  t = not_null(a_6);
                                                                                                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(p_179))), (ATerm) ATmakeAppl(sym_Id_1, not_null(t_40)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(s_40))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_40)), not_null(u_40), not_null(v_40)))));
                                                                                                                                                                                                }
                                                                                                                                                                                                ;
                                                                                                                                                                                                LocalPopChoice(h_32);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              {
                                                                                                                                                                                                t = g_32;
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm o_32 = t;
                                                                                                                                                                                                  int p_32 = stack_ptr;
                                                                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
                                                                                                                                                                                                      if(match_cons(t, sym_Case_3))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm q_32 = ATgetArgument(t, 0);
                                                                                                                                                                                                          if(match_cons(q_32, sym_Var_1))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(((n_40 != NULL) && (n_40 != ATgetArgument(q_32, 0))))
                                                                                                                                                                                                                _fail(ATgetArgument(q_32, 0));
                                                                                                                                                                                                              else
                                                                                                                                                                                                                n_40 = ATgetArgument(q_32, 0);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          {
                                                                                                                                                                                                            ATerm r_32 = ATgetArgument(t, 1);
                                                                                                                                                                                                            if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
                                                                                                                                                                                                              {
                                                                                                                                                                                                                ATerm s_32 = ATgetFirst((ATermList) r_32);
                                                                                                                                                                                                                if(match_cons(s_32, sym_Alt_3))
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    ATerm t_32 = ATgetArgument(s_32, 0);
                                                                                                                                                                                                                    if(match_cons(t_32, sym_Int_1))
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        if(((l_40 != NULL) && (l_40 != ATgetArgument(t_32, 0))))
                                                                                                                                                                                                                          _fail(ATgetArgument(t_32, 0));
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                          l_40 = ATgetArgument(t_32, 0);
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                                    if(((k_40 != NULL) && (k_40 != ATgetArgument(s_32, 1))))
                                                                                                                                                                                                                      _fail(ATgetArgument(s_32, 1));
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                      k_40 = ATgetArgument(s_32, 1);
                                                                                                                                                                                                                    if(((m_40 != NULL) && (m_40 != ATgetArgument(s_32, 2))))
                                                                                                                                                                                                                      _fail(ATgetArgument(s_32, 2));
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                      m_40 = ATgetArgument(s_32, 2);
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                else
                                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                                if(((o_40 != NULL) && (o_40 != (ATerm) ATgetNext((ATermList) r_32))))
                                                                                                                                                                                                                  _fail((ATerm) ATgetNext((ATermList) r_32));
                                                                                                                                                                                                                else
                                                                                                                                                                                                                  o_40 = (ATerm) ATgetNext((ATermList) r_32);
                                                                                                                                                                                                              }
                                                                                                                                                                                                            else
                                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                                          }
                                                                                                                                                                                                          if(((p_40 != NULL) && (p_40 != ATgetArgument(t, 2))))
                                                                                                                                                                                                            _fail(ATgetArgument(t, 2));
                                                                                                                                                                                                          else
                                                                                                                                                                                                            p_40 = ATgetArgument(t, 2);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      {
                                                                                                                                                                                                        ATerm u_178 = NULL;
                                                                                                                                                                                                        ATerm b_6 = NULL;
                                                                                                                                                                                                        if(((b_6 != NULL) && (b_6 != t)))
                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                        else
                                                                                                                                                                                                          b_6 = t;
                                                                                                                                                                                                        t = not_null(l_40);
                                                                                                                                                                                                        t = int_to_string_0_0(t);
                                                                                                                                                                                                        if(((u_178 != NULL) && (u_178 != t)))
                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                        else
                                                                                                                                                                                                          u_178 = t;
                                                                                                                                                                                                        t = not_null(b_6);
                                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_178))), (ATerm) ATmakeAppl(sym_Id_1, not_null(n_40)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(m_40))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_40)), not_null(o_40), not_null(p_40)))));
                                                                                                                                                                                                      }
                                                                                                                                                                                                      ;
                                                                                                                                                                                                      LocalPopChoice(p_32);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      t = o_32;
                                                                                                                                                                                                      {
                                                                                                                                                                                                        ATerm w_32 = t;
                                                                                                                                                                                                        int x_32 = stack_ptr;
                                                                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                                                                          {
                                                                                                                                                                                                            ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
                                                                                                                                                                                                            if(match_cons(t, sym_Case_3))
                                                                                                                                                                                                              {
                                                                                                                                                                                                                ATerm y_32 = ATgetArgument(t, 0);
                                                                                                                                                                                                                if(match_cons(y_32, sym_Var_1))
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    if(((h_40 != NULL) && (h_40 != ATgetArgument(y_32, 0))))
                                                                                                                                                                                                                      _fail(ATgetArgument(y_32, 0));
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                      h_40 = ATgetArgument(y_32, 0);
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                else
                                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  ATerm z_32 = ATgetArgument(t, 1);
                                                                                                                                                                                                                  if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      ATerm a_33 = ATgetFirst((ATermList) z_32);
                                                                                                                                                                                                                      if(match_cons(a_33, sym_Alt_3))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          ATerm b_33 = ATgetArgument(a_33, 0);
                                                                                                                                                                                                                          if(match_cons(b_33, sym_Str_1))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(((f_40 != NULL) && (f_40 != ATgetArgument(b_33, 0))))
                                                                                                                                                                                                                                _fail(ATgetArgument(b_33, 0));
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                f_40 = ATgetArgument(b_33, 0);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          if(((e_40 != NULL) && (e_40 != ATgetArgument(a_33, 1))))
                                                                                                                                                                                                                            _fail(ATgetArgument(a_33, 1));
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            e_40 = ATgetArgument(a_33, 1);
                                                                                                                                                                                                                          if(((g_40 != NULL) && (g_40 != ATgetArgument(a_33, 2))))
                                                                                                                                                                                                                            _fail(ATgetArgument(a_33, 2));
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            g_40 = ATgetArgument(a_33, 2);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      if(((i_40 != NULL) && (i_40 != (ATerm) ATgetNext((ATermList) z_32))))
                                                                                                                                                                                                                        _fail((ATerm) ATgetNext((ATermList) z_32));
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        i_40 = (ATerm) ATgetNext((ATermList) z_32);
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                }
                                                                                                                                                                                                                if(((j_40 != NULL) && (j_40 != ATgetArgument(t, 2))))
                                                                                                                                                                                                                  _fail(ATgetArgument(t, 2));
                                                                                                                                                                                                                else
                                                                                                                                                                                                                  j_40 = ATgetArgument(t, 2);
                                                                                                                                                                                                              }
                                                                                                                                                                                                            else
                                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                                            {
                                                                                                                                                                                                              ATerm z_177 = NULL;
                                                                                                                                                                                                              ATerm c_6 = NULL;
                                                                                                                                                                                                              if(((c_6 != NULL) && (c_6 != t)))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              else
                                                                                                                                                                                                                c_6 = t;
                                                                                                                                                                                                              t = not_null(f_40);
                                                                                                                                                                                                              t = escape_0_0(t);
                                                                                                                                                                                                              t = double_quote_0_0(t);
                                                                                                                                                                                                              if(((z_177 != NULL) && (z_177 != t)))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              else
                                                                                                                                                                                                                z_177 = t;
                                                                                                                                                                                                              t = not_null(c_6);
                                                                                                                                                                                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(z_177)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(h_40)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_40))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_40)), not_null(i_40), not_null(j_40)))));
                                                                                                                                                                                                            }
                                                                                                                                                                                                            ;
                                                                                                                                                                                                            LocalPopChoice(x_32);
                                                                                                                                                                                                          }
                                                                                                                                                                                                        else
                                                                                                                                                                                                          {
                                                                                                                                                                                                            t = w_32;
                                                                                                                                                                                                            {
                                                                                                                                                                                                              ATerm e_33 = t;
                                                                                                                                                                                                              int f_33 = stack_ptr;
                                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  ATerm c_40 = NULL,d_40 = NULL;
                                                                                                                                                                                                                  if(match_cons(t, sym_Case_3))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      ATerm g_33 = ATgetArgument(t, 0);
                                                                                                                                                                                                                      if(match_cons(g_33, sym_Var_1))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(((c_40 != NULL) && (c_40 != ATgetArgument(g_33, 0))))
                                                                                                                                                                                                                            _fail(ATgetArgument(g_33, 0));
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            c_40 = ATgetArgument(g_33, 0);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        ATerm h_33 = ATgetArgument(t, 1);
                                                                                                                                                                                                                        if(((ATgetType(h_33) != AT_LIST) || !(ATisEmpty(h_33))))
                                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      if(((d_40 != NULL) && (d_40 != ATgetArgument(t, 2))))
                                                                                                                                                                                                                        _fail(ATgetArgument(t, 2));
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        d_40 = ATgetArgument(t, 2);
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = not_null(d_40);
                                                                                                                                                                                                                  ;
                                                                                                                                                                                                                  LocalPopChoice(f_33);
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = e_33;
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    ATerm i_33 = t;
                                                                                                                                                                                                                    int j_33 = stack_ptr;
                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
                                                                                                                                                                                                                        if(match_cons(t, sym_Case_4))
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            if(((y_39 != NULL) && (y_39 != ATgetArgument(t, 0))))
                                                                                                                                                                                                                              _fail(ATgetArgument(t, 0));
                                                                                                                                                                                                                            else
                                                                                                                                                                                                                              y_39 = ATgetArgument(t, 0);
                                                                                                                                                                                                                            if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 1))))
                                                                                                                                                                                                                              _fail(ATgetArgument(t, 1));
                                                                                                                                                                                                                            else
                                                                                                                                                                                                                              z_39 = ATgetArgument(t, 1);
                                                                                                                                                                                                                            if(((a_40 != NULL) && (a_40 != ATgetArgument(t, 2))))
                                                                                                                                                                                                                              _fail(ATgetArgument(t, 2));
                                                                                                                                                                                                                            else
                                                                                                                                                                                                                              a_40 = ATgetArgument(t, 2);
                                                                                                                                                                                                                            if(((b_40 != NULL) && (b_40 != ATgetArgument(t, 3))))
                                                                                                                                                                                                                              _fail(ATgetArgument(t, 3));
                                                                                                                                                                                                                            else
                                                                                                                                                                                                                              b_40 = ATgetArgument(t, 3);
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_39)), (ATerm) ATmakeAppl(sym_Case_3, not_null(z_39), not_null(a_40), not_null(b_40)));
                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                        LocalPopChoice(j_33);
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    else
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        t = i_33;
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          ATerm k_33 = t;
                                                                                                                                                                                                                          int l_33 = stack_ptr;
                                                                                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm x_39 = NULL;
                                                                                                                                                                                                                              if(match_cons(t, sym_Continue_1))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(((x_39 != NULL) && (x_39 != ATgetArgument(t, 0))))
                                                                                                                                                                                                                                    _fail(ATgetArgument(t, 0));
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    x_39 = ATgetArgument(t, 0);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_39)));
                                                                                                                                                                                                                              ;
                                                                                                                                                                                                                              LocalPopChoice(l_33);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              t = k_33;
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                ATerm m_33 = t;
                                                                                                                                                                                                                                int n_33 = stack_ptr;
                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                    ATerm v_39 = NULL,w_39 = NULL;
                                                                                                                                                                                                                                    if(match_cons(t, sym_Assign_2))
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                        ATerm o_33 = ATgetArgument(t, 0);
                                                                                                                                                                                                                                        if(match_cons(o_33, sym_Var_1))
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            if(((v_39 != NULL) && (v_39 != ATgetArgument(o_33, 0))))
                                                                                                                                                                                                                                              _fail(ATgetArgument(o_33, 0));
                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                              v_39 = ATgetArgument(o_33, 0);
                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                          _fail(t);
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm p_33 = ATgetArgument(t, 1);
                                                                                                                                                                                                                                          if(match_cons(p_33, sym_Var_1))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(((w_39 != NULL) && (w_39 != ATgetArgument(p_33, 0))))
                                                                                                                                                                                                                                                _fail(ATgetArgument(p_33, 0));
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                w_39 = ATgetArgument(p_33, 0);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_39)), term_y_26), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_39)), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_39)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_39))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_39)), term_s_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_39)))));
                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                    LocalPopChoice(n_33);
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                    t = m_33;
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm q_33 = t;
                                                                                                                                                                                                                                      int r_33 = stack_ptr;
                                                                                                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm t_39 = NULL,u_39 = NULL;
                                                                                                                                                                                                                                          if(match_cons(t, sym_Assign_2))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              ATerm s_33 = ATgetArgument(t, 0);
                                                                                                                                                                                                                                              if(match_cons(s_33, sym_Var_1))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(((t_39 != NULL) && (t_39 != ATgetArgument(s_33, 0))))
                                                                                                                                                                                                                                                    _fail(ATgetArgument(s_33, 0));
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    t_39 = ATgetArgument(s_33, 0);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              if(((u_39 != NULL) && (u_39 != ATgetArgument(t, 1))))
                                                                                                                                                                                                                                                _fail(ATgetArgument(t, 1));
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                u_39 = ATgetArgument(t, 1);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            ATerm d_6 = NULL;
                                                                                                                                                                                                                                            if(((d_6 != NULL) && (d_6 != t)))
                                                                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                              d_6 = t;
                                                                                                                                                                                                                                            t = not_null(u_39);
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              ATerm t_33 = t;
                                                                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = Var_1_0(_id, t);
                                                                                                                                                                                                                                                  PopChoice();
                                                                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = t_33;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              t = not_null(d_6);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_39)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_39))));
                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                          ;
                                                                                                                                                                                                                                          LocalPopChoice(r_33);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          t = q_33;
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            ATerm u_33 = t;
                                                                                                                                                                                                                                            int v_33 = stack_ptr;
                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm s_39 = NULL;
                                                                                                                                                                                                                                                if(match_cons(t, sym_Assign_1))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm w_33 = ATgetArgument(t, 0);
                                                                                                                                                                                                                                                    if(match_cons(w_33, sym_Var_1))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        if(((s_39 != NULL) && (s_39 != ATgetArgument(w_33, 0))))
                                                                                                                                                                                                                                                          _fail(ATgetArgument(w_33, 0));
                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                          s_39 = ATgetArgument(w_33, 0);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_39)), term_s_18, term_n_24));
                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                LocalPopChoice(v_33);
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                t = u_33;
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  ATerm e_38 = NULL;
                                                                                                                                                                                                                                                  if(match_cons(t, sym_Build_1))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
                                                                                                                                                                                                                                                        _fail(ATgetArgument(t, 0));
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        e_38 = ATgetArgument(t, 0);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm c_155 = NULL;
                                                                                                                                                                                                                                                    ATerm e_6 = NULL;
                                                                                                                                                                                                                                                    if(((e_6 != NULL) && (e_6 != t)))
                                                                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      e_6 = t;
                                                                                                                                                                                                                                                    t = not_null(e_38);
                                                                                                                                                                                                                                                    t = construct_term_caching_0_0(t);
                                                                                                                                                                                                                                                    if(((c_155 != NULL) && (c_155 != t)))
                                                                                                                                                                                                                                                      _fail(t);
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      c_155 = t;
                                                                                                                                                                                                                                                    t = not_null(e_6);
                                                                                                                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_n_24, term_s_18, not_null(c_155)));
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
                }
            }
          }
      }
    }
  return(t);
}
ATerm real_to_string_0_0 (ATerm t)
{
  ATerm b_66 = NULL;
  if(((b_66 != NULL) && (b_66 != t)))
    _fail(t);
  else
    b_66 = t;
  t = SSL_real_to_string(not_null(b_66));
  return(t);
}
ATerm Nil_T_0_0 (ATerm t)
{
  ATerm i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if(((ATgetType(x_33) != AT_LIST) || !(ATisEmpty(x_33))))
        _fail(t);
      if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,t_0 = NULL,q_0 = NULL,x_0 = NULL,b_1 = NULL,z_0 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if(((ATgetType(y_33) == AT_LIST) && !(ATisEmpty(y_33))))
        {
          if(((x_0 != NULL) && (x_0 != ATgetFirst((ATermList) y_33))))
            _fail(ATgetFirst((ATermList) y_33));
          else
            x_0 = ATgetFirst((ATermList) y_33);
          if(((b_1 != NULL) && (b_1 != (ATerm) ATgetNext((ATermList) y_33))))
            _fail((ATerm) ATgetNext((ATermList) y_33));
          else
            b_1 = (ATerm) ATgetNext((ATermList) y_33);
        }
      else
        _fail(t);
      if(((u_0 != NULL) && (u_0 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_6 = NULL;
    if(((f_6 != NULL) && (f_6 != t)))
      _fail(t);
    else
      f_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_0), not_null(u_0));
    t = w_0(t);
    if(match_cons(t, sym__2))
      {
        if(((z_0 != NULL) && (z_0 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_0 = ATgetArgument(t, 0);
        if(((t_0 != NULL) && (t_0 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_1), not_null(t_0));
    t = a_1(t);
    if(match_cons(t, sym__2))
      {
        if(((c_1 != NULL) && (c_1 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_1 = ATgetArgument(t, 0);
        if(((q_0 != NULL) && (q_0 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_0 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(f_6);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_1)), not_null(z_0)), not_null(q_0));
  }
  return(t);
}
ATerm thread_map_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm h_119 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(g_119, h_119, t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = Nil_T_0_0(t);
      }
    return(t);
  }
  t = h_119(t);
  return(t);
}
ATerm Var_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,g_6 = NULL,i_6 = NULL;
  ATerm j_6 = NULL;
  if(((j_6 != NULL) && (j_6 != t)))
    _fail(t);
  else
    j_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((g_6 != NULL) && (g_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_6 = NULL;
    if(((l_6 != NULL) && (l_6 != t)))
      _fail(t);
    else
      l_6 = t;
    t = SSLgetAnnotations(not_null(j_6));
    if(((h_6 != NULL) && (h_6 != t)))
      _fail(t);
    else
      h_6 = t;
    t = not_null(l_6);
  }
  t = not_null(g_6);
  t = n_85(t);
  if(((i_6 != NULL) && (i_6 != t)))
    _fail(t);
  else
    i_6 = t;
  {
    ATerm k_6 = NULL;
    ATerm m_6 = NULL;
    if(((m_6 != NULL) && (m_6 != t)))
      _fail(t);
    else
      m_6 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_6)), not_null(h_6));
    if(((k_6 != NULL) && (k_6 != t)))
      _fail(t);
    else
      k_6 = t;
    t = not_null(m_6);
    t = not_null(k_6);
  }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
      if(match_cons(t, sym_GuardedLChoice_3))
        {
          ATerm d_34 = ATgetArgument(t, 0);
          if(match_cons(d_34, sym_Match_1))
            {
              ATerm e_34 = ATgetArgument(d_34, 0);
              if(match_cons(e_34, sym_Op_2))
                {
                  ATerm f_34 = ATgetArgument(e_34, 0);
                  if((ATgetSymbol((ATermAppl) f_34) != ATmakeSymbol("Cons", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_34 = ATgetArgument(e_34, 1);
                    if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
                      {
                        ATerm h_34 = ATgetFirst((ATermList) g_34);
                        if(match_cons(h_34, sym_Var_1))
                          {
                            if(((i_42 != NULL) && (i_42 != ATgetArgument(h_34, 0))))
                              _fail(ATgetArgument(h_34, 0));
                            else
                              i_42 = ATgetArgument(h_34, 0);
                          }
                        else
                          _fail(t);
                        {
                          ATerm i_34 = (ATerm) ATgetNext((ATermList) g_34);
                          if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
                            {
                              ATerm j_34 = ATgetFirst((ATermList) i_34);
                              if(match_cons(j_34, sym_Var_1))
                                {
                                  if(((j_42 != NULL) && (j_42 != ATgetArgument(j_34, 0))))
                                    _fail(ATgetArgument(j_34, 0));
                                  else
                                    j_42 = ATgetArgument(j_34, 0);
                                }
                              else
                                _fail(t);
                              {
                                ATerm k_34 = (ATerm) ATgetNext((ATermList) i_34);
                                if(((ATgetType(k_34) != AT_LIST) || !(ATisEmpty(k_34))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          if(((k_42 != NULL) && (k_42 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_42 = ATgetArgument(t, 1);
          if(((l_42 != NULL) && (l_42 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            l_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, term_n_24)), term_z_27), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_28, (ATerm) ATinsert(ATempty, term_n_24)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_42)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_42)), term_s_18, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_27, (ATerm) ATinsert(ATempty, term_l_34)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_42)), term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_27, (ATerm) ATinsert(ATempty, term_l_34)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_42))));
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_42 = NULL,h_42 = NULL;
            if(match_cons(t, sym_GuardedLChoice_3))
              {
                ATerm o_34 = ATgetArgument(t, 0);
                if(match_cons(o_34, sym_Match_1))
                  {
                    ATerm p_34 = ATgetArgument(o_34, 0);
                    if(match_cons(p_34, sym_Op_2))
                      {
                        ATerm q_34 = ATgetArgument(p_34, 0);
                        if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("Nil", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm r_34 = ATgetArgument(p_34, 1);
                          if(((ATgetType(r_34) != AT_LIST) || !(ATisEmpty(r_34))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                if(((g_42 != NULL) && (g_42 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_42 = ATgetArgument(t, 1);
                if(((h_42 != NULL) && (h_42 != ATgetArgument(t, 2))))
                  _fail(ATgetArgument(t, 2));
                else
                  h_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_27, (ATerm) ATinsert(ATempty, term_n_24)), term_z_27), (ATerm) ATmakeAppl(sym_FunCall_2, term_b_28, (ATerm) ATinsert(ATempty, term_n_24))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(g_42))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_42))));
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm s_34 = t;
              int t_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
                  if(match_cons(t, sym_GuardedLChoice_3))
                    {
                      ATerm u_34 = ATgetArgument(t, 0);
                      if(match_cons(u_34, sym_Match_1))
                        {
                          ATerm v_34 = ATgetArgument(u_34, 0);
                          if(match_cons(v_34, sym_Op_2))
                            {
                              if(((b_42 != NULL) && (b_42 != ATgetArgument(v_34, 0))))
                                _fail(ATgetArgument(v_34, 0));
                              else
                                b_42 = ATgetArgument(v_34, 0);
                              if(((c_42 != NULL) && (c_42 != ATgetArgument(v_34, 1))))
                                _fail(ATgetArgument(v_34, 1));
                              else
                                c_42 = ATgetArgument(v_34, 1);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      if(((z_41 != NULL) && (z_41 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        z_41 = ATgetArgument(t, 1);
                      if(((a_42 != NULL) && (a_42 != ATgetArgument(t, 2))))
                        _fail(ATgetArgument(t, 2));
                      else
                        a_42 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_6 = NULL;
                    if(((n_6 != NULL) && (n_6 != t)))
                      _fail(t);
                    else
                      n_6 = t;
                    t = not_null(b_42);
                    {
                      ATerm w_34 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm x_34 = t;
                          int y_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
                                _fail(t);
                              ;
                              LocalPopChoice(y_34);
                            }
                          else
                            {
                              t = x_34;
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                                _fail(t);
                            }
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = w_34;
                        }
                      t = not_null(c_42);
                      {
                        ATerm m_14 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        t = map_1_0(m_14, t);
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_42), term_n_28);
                        {
                          ATerm n_14 (ATerm t)
                          {
                            ATerm e_42 = NULL,f_42 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm z_34 = ATgetArgument(t, 0);
                                if(match_cons(z_34, sym_Var_1))
                                  {
                                    if(((e_42 != NULL) && (e_42 != ATgetArgument(z_34, 0))))
                                      _fail(ATgetArgument(z_34, 0));
                                    else
                                      e_42 = ATgetArgument(z_34, 0);
                                  }
                                else
                                  _fail(t);
                                if(((f_42 != NULL) && (f_42 != ATgetArgument(t, 1))))
                                  _fail(ATgetArgument(t, 1));
                                else
                                  f_42 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            {
                              ATerm z_187 = NULL;
                              ATerm o_6 = NULL;
                              if(((o_6 != NULL) && (o_6 != t)))
                                _fail(t);
                              else
                                o_6 = t;
                              t = not_null(f_42);
                              t = int_to_string_0_0(t);
                              if(((z_187 != NULL) && (z_187 != t)))
                                _fail(t);
                              else
                                z_187 = t;
                              t = not_null(o_6);
                              {
                                ATerm l_188 = NULL;
                                ATerm p_6 = NULL;
                                if(((p_6 != NULL) && (p_6 != t)))
                                  _fail(t);
                                else
                                  p_6 = t;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_42), term_s_28);
                                t = add_0_0(t);
                                if(((l_188 != NULL) && (l_188 != t)))
                                  _fail(t);
                                else
                                  l_188 = t;
                                t = not_null(p_6);
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_42)), term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(z_187))), term_n_24)))), not_null(l_188));
                              }
                            }
                            return(t);
                          }
                          t = thread_map_1_0(n_14, t);
                          if(match_cons(t, sym__2))
                            {
                              if(((d_42 != NULL) && (d_42 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                d_42 = ATgetArgument(t, 0);
                              {
                                ATerm a_35 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          t = not_null(n_6);
                        }
                      }
                    }
                    {
                      ATerm g_189 = NULL;
                      ATerm q_6 = NULL;
                      if(((q_6 != NULL) && (q_6 != t)))
                        _fail(t);
                      else
                        q_6 = t;
                      {
                        ATerm j_189 = NULL;
                        ATerm r_6 = NULL;
                        if(((r_6 != NULL) && (r_6 != t)))
                          _fail(t);
                        else
                          r_6 = t;
                        t = not_null(c_42);
                        t = length_0_0(t);
                        if(((j_189 != NULL) && (j_189 != t)))
                          _fail(t);
                        else
                          j_189 = t;
                        t = not_null(r_6);
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_42), not_null(j_189));
                        t = ConstructorName_0_0(t);
                        if(((g_189 != NULL) && (g_189 != t)))
                          _fail(t);
                        else
                          g_189 = t;
                        t = not_null(q_6);
                      }
                      {
                        ATerm e_190 = NULL;
                        ATerm s_6 = NULL;
                        if(((s_6 != NULL) && (s_6 != t)))
                          _fail(t);
                        else
                          s_6 = t;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_42), (ATerm) ATinsert(ATempty, not_null(z_41)));
                        t = conc_0_0(t);
                        if(((e_190 != NULL) && (e_190 != t)))
                          _fail(t);
                        else
                          e_190 = t;
                        t = not_null(s_6);
                        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_189))), term_n_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(e_190)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_42))));
                      }
                    }
                  }
                  ;
                  LocalPopChoice(t_34);
                }
              else
                {
                  t = s_34;
                  {
                    ATerm b_35 = t;
                    int c_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            ATerm d_35 = ATgetArgument(t, 0);
                            if(match_cons(d_35, sym_Match_1))
                              {
                                ATerm e_35 = ATgetArgument(d_35, 0);
                                if(match_cons(e_35, sym_Real_1))
                                  {
                                    if(((w_41 != NULL) && (w_41 != ATgetArgument(e_35, 0))))
                                      _fail(ATgetArgument(e_35, 0));
                                    else
                                      w_41 = ATgetArgument(e_35, 0);
                                  }
                                else
                                  _fail(t);
                              }
                            else
                              _fail(t);
                            if(((x_41 != NULL) && (x_41 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              x_41 = ATgetArgument(t, 1);
                            if(((y_41 != NULL) && (y_41 != ATgetArgument(t, 2))))
                              _fail(ATgetArgument(t, 2));
                            else
                              y_41 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        {
                          ATerm d_186 = NULL;
                          ATerm t_6 = NULL;
                          if(((t_6 != NULL) && (t_6 != t)))
                            _fail(t);
                          else
                            t_6 = t;
                          t = not_null(w_41);
                          t = real_to_string_0_0(t);
                          if(((d_186 != NULL) && (d_186 != t)))
                            _fail(t);
                          else
                            d_186 = t;
                          t = not_null(t_6);
                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(d_186))), term_n_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_41))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_41))));
                        }
                        ;
                        LocalPopChoice(c_35);
                      }
                    else
                      {
                        t = b_35;
                        {
                          ATerm f_35 = t;
                          int g_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  ATerm h_35 = ATgetArgument(t, 0);
                                  if(match_cons(h_35, sym_Match_1))
                                    {
                                      ATerm i_35 = ATgetArgument(h_35, 0);
                                      if(match_cons(i_35, sym_Int_1))
                                        {
                                          if(((t_41 != NULL) && (t_41 != ATgetArgument(i_35, 0))))
                                            _fail(ATgetArgument(i_35, 0));
                                          else
                                            t_41 = ATgetArgument(i_35, 0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                  if(((u_41 != NULL) && (u_41 != ATgetArgument(t, 1))))
                                    _fail(ATgetArgument(t, 1));
                                  else
                                    u_41 = ATgetArgument(t, 1);
                                  if(((v_41 != NULL) && (v_41 != ATgetArgument(t, 2))))
                                    _fail(ATgetArgument(t, 2));
                                  else
                                    v_41 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              {
                                ATerm i_185 = NULL;
                                ATerm u_6 = NULL;
                                if(((u_6 != NULL) && (u_6 != t)))
                                  _fail(t);
                                else
                                  u_6 = t;
                                t = not_null(t_41);
                                t = int_to_string_0_0(t);
                                if(((i_185 != NULL) && (i_185 != t)))
                                  _fail(t);
                                else
                                  i_185 = t;
                                t = not_null(u_6);
                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(i_185))), term_n_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(u_41))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_41))));
                              }
                              ;
                              LocalPopChoice(g_35);
                            }
                          else
                            {
                              t = f_35;
                              {
                                ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
                                if(match_cons(t, sym_GuardedLChoice_3))
                                  {
                                    ATerm j_35 = ATgetArgument(t, 0);
                                    if(match_cons(j_35, sym_Match_1))
                                      {
                                        ATerm k_35 = ATgetArgument(j_35, 0);
                                        if(match_cons(k_35, sym_Str_1))
                                          {
                                            if(((q_41 != NULL) && (q_41 != ATgetArgument(k_35, 0))))
                                              _fail(ATgetArgument(k_35, 0));
                                            else
                                              q_41 = ATgetArgument(k_35, 0);
                                          }
                                        else
                                          _fail(t);
                                      }
                                    else
                                      _fail(t);
                                    if(((r_41 != NULL) && (r_41 != ATgetArgument(t, 1))))
                                      _fail(ATgetArgument(t, 1));
                                    else
                                      r_41 = ATgetArgument(t, 1);
                                    if(((s_41 != NULL) && (s_41 != ATgetArgument(t, 2))))
                                      _fail(ATgetArgument(t, 2));
                                    else
                                      s_41 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm n_184 = NULL;
                                  ATerm v_6 = NULL;
                                  if(((v_6 != NULL) && (v_6 != t)))
                                    _fail(t);
                                  else
                                    v_6 = t;
                                  t = not_null(q_41);
                                  t = escape_0_0(t);
                                  t = double_quote_0_0(t);
                                  if(((n_184 != NULL) && (n_184 != t)))
                                    _fail(t);
                                  else
                                    n_184 = t;
                                  t = not_null(v_6);
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(n_184)))), term_n_24)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(r_41))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(s_41))));
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
ATerm PlainBody_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_45 != NULL) && (u_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_45 = ATgetArgument(t, 0);
      if(((v_45 != NULL) && (v_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_l_35), not_null(v_45)));
  return(t);
}
ATerm Escape_linefeed_0_0 (ATerm t)
{
  ATerm z_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_35 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_35) != AT_INT) || (ATgetInt((ATermInt) m_35) != 10)))
        _fail(t);
      if(((z_61 != NULL) && (z_61 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        z_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_61)), term_o_35), term_n_35);
  return(t);
}
ATerm Escape_backslash_0_0 (ATerm t)
{
  ATerm y_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_35 = ATgetFirst((ATermList) t);
      if(((ATgetType(p_35) != AT_INT) || (ATgetInt((ATermInt) p_35) != 92)))
        _fail(t);
      if(((y_61 != NULL) && (y_61 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        y_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_61)), term_n_35), term_n_35);
  return(t);
}
ATerm Escape_double_quote_0_0 (ATerm t)
{
  ATerm w_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_35 = ATgetFirst((ATermList) t);
      if(((ATgetType(q_35) != AT_INT) || (ATgetInt((ATermInt) q_35) != 34)))
        _fail(t);
      if(((w_61 != NULL) && (w_61 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        w_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_61)), term_r_35), term_n_35);
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0_0(t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0_0(t);
            ;
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            t = Escape_linefeed_0_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm o_14 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_14, t);
      }
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            t = Nil_0_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(escape_chars_0_0, t);
  return(t);
}
ATerm TracedBody_0_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_45 != NULL) && (x_45 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_45 = ATgetArgument(t, 0);
      if(((w_45 != NULL) && (w_45 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_221 = NULL;
    ATerm w_6 = NULL;
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_a_36), not_null(x_45));
    t = concat_strings_0_0(t);
    t = escape_0_0(t);
    t = double_quote_0_0(t);
    if(((z_221 != NULL) && (z_221 != t)))
      _fail(t);
    else
      z_221 = t;
    t = not_null(w_6);
    {
      ATerm l_222 = NULL;
      ATerm x_6 = NULL;
      if(((x_6 != NULL) && (x_6 != t)))
        _fail(t);
      else
        x_6 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, term_b_36), not_null(x_45));
      t = concat_strings_0_0(t);
      t = escape_0_0(t);
      t = double_quote_0_0(t);
      if(((l_222 != NULL) && (l_222 != t)))
        _fail(t);
      else
        l_222 = t;
      t = not_null(x_6);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_35), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_24), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(l_222))), term_e_36)))), not_null(w_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_24), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(z_221))), term_e_36)))));
    }
  }
  return(t);
}
ATerm TraceAllFuns_0_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  if(((y_47 != NULL) && (y_47 != t)))
    _fail(t);
  else
    y_47 = t;
  if(((z_47 != NULL) && (z_47 != t)))
    _fail(t);
  else
    z_47 = t;
  {
    ATerm y_6 = NULL;
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = (ATerm) ATempty;
    {
      ATerm p_14 (ATerm t)
      {
        t = term_j_18;
        return(t);
      }
      t = rewrite_1_0(p_14, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm f_36 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) f_36) != ATmakeSymbol("p_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = not_null(y_6);
    }
    t = not_null(z_47);
  }
  return(t);
}
ATerm TraceFun_0_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  if(((x_47 != NULL) && (x_47 != t)))
    _fail(t);
  else
    x_47 = t;
  if(((w_47 != NULL) && (w_47 != t)))
    _fail(t);
  else
    w_47 = t;
  {
    ATerm z_6 = NULL;
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    t = not_null(x_47);
    {
      ATerm q_14 (ATerm t)
      {
        t = term_o_18;
        return(t);
      }
      t = rewrite_1_0(q_14, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm g_36 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) g_36) != ATmakeSymbol("s_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = not_null(z_6);
    }
    t = not_null(w_47);
  }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          if(((r_45 != NULL) && (r_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_45 = ATgetArgument(t, 0);
          if(((m_45 != NULL) && (m_45 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_45 = ATgetArgument(t, 1);
          if(((n_45 != NULL) && (n_45 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_45 = ATgetArgument(t, 2);
          if(((s_45 != NULL) && (s_45 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            s_45 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      {
        ATerm a_7 = NULL;
        if(((a_7 != NULL) && (a_7 != t)))
          _fail(t);
        else
          a_7 = t;
        t = not_null(m_45);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((o_45 != NULL) && (o_45 != t)))
          _fail(t);
        else
          o_45 = t;
        t = not_null(n_45);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((p_45 != NULL) && (p_45 != t)))
          _fail(t);
        else
          p_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_45), not_null(p_45));
        t = conc_0_0(t);
        if(((q_45 != NULL) && (q_45 != t)))
          _fail(t);
        else
          q_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), not_null(s_45));
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_14 (ATerm t)
              {
                ATerm l_36 = t;
                int m_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TraceFun_0_0(t);
                    ;
                    LocalPopChoice(m_36);
                  }
                else
                  {
                    t = l_36;
                    t = TraceAllFuns_0_0(t);
                  }
                return(t);
              }
              t = _2_0(r_14, _id, t);
              t = TracedBody_0_0(t);
              ;
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              t = PlainBody_0_0(t);
            }
          if(((t_45 != NULL) && (t_45 != t)))
            _fail(t);
          else
            t_45 = t;
          t = not_null(a_7);
        }
        {
          ATerm v_220 = NULL;
          ATerm b_7 = NULL;
          if(((b_7 != NULL) && (b_7 != t)))
            _fail(t);
          else
            b_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_45), (ATerm) ATinsert(ATempty, term_o_36));
          t = conc_0_0(t);
          if(((v_220 != NULL) && (v_220 != t)))
            _fail(t);
          else
            v_220 = t;
          t = not_null(b_7);
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_19, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(v_220)))), not_null(t_45));
        }
      }
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
        if(match_cons(t, sym_SDef_3))
          {
            if(((j_45 != NULL) && (j_45 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              j_45 = ATgetArgument(t, 0);
            if(((h_45 != NULL) && (h_45 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_45 = ATgetArgument(t, 1);
            if(((k_45 != NULL) && (k_45 != ATgetArgument(t, 2))))
              _fail(ATgetArgument(t, 2));
            else
              k_45 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        {
          ATerm c_7 = NULL;
          if(((c_7 != NULL) && (c_7 != t)))
            _fail(t);
          else
            c_7 = t;
          t = not_null(h_45);
          t = map_1_0(TranslateVarDec_0_0, t);
          if(((i_45 != NULL) && (i_45 != t)))
            _fail(t);
          else
            i_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_45), not_null(k_45));
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_14 (ATerm t)
                {
                  ATerm r_36 = t;
                  int s_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = TraceFun_0_0(t);
                      ;
                      LocalPopChoice(s_36);
                    }
                  else
                    {
                      t = r_36;
                      t = TraceAllFuns_0_0(t);
                    }
                  return(t);
                }
                t = _2_0(s_14, _id, t);
                t = TracedBody_0_0(t);
                ;
                LocalPopChoice(q_36);
              }
            else
              {
                t = p_36;
                t = PlainBody_0_0(t);
              }
            if(((l_45 != NULL) && (l_45 != t)))
              _fail(t);
            else
              l_45 = t;
            t = not_null(c_7);
          }
          {
            ATerm q_218 = NULL;
            ATerm d_7 = NULL;
            if(((d_7 != NULL) && (d_7 != t)))
              _fail(t);
            else
              d_7 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), (ATerm) ATinsert(ATempty, term_o_36));
            t = conc_0_0(t);
            if(((q_218 != NULL) && (q_218 != t)))
              _fail(t);
            else
              q_218 = t;
            t = not_null(d_7);
            t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_19, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_45)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(q_218)))), not_null(l_45));
          }
        }
      }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_61 != NULL) && (s_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_61 = ATgetArgument(t, 0);
      if(((r_61 != NULL) && (r_61 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_61)), not_null(s_61)), (ATerm) ATinsert(ATempty, not_null(s_61)));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm y_397 = NULL;
  ATerm e_7 = NULL;
  if(((e_7 != NULL) && (e_7 != t)))
    _fail(t);
  else
    e_7 = t;
  if(((y_397 != NULL) && (y_397 != t)))
    _fail(t);
  else
    y_397 = t;
  t = not_null(e_7);
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, not_null(y_397));
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  t = c_122(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm h_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_50 != NULL) && (h_50 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_50 = ATgetFirst((ATermList) t);
      {
        ATerm t_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(h_50);
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_76 != NULL) && (n_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_76 = ATgetArgument(t, 0);
      if(((o_76 != NULL) && (o_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = table_get_0_0(t);
  t = Hd_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm n_133 (ATerm), ATerm t)
{
  ATerm g_82 = NULL;
  if(((g_82 != NULL) && (g_82 != t)))
    _fail(t);
  else
    g_82 = t;
  {
    ATerm w_661 = NULL;
    ATerm f_7 = NULL;
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    t = term_u_36;
    t = n_133(t);
    if(((w_661 != NULL) && (w_661 != t)))
      _fail(t);
    else
      w_661 = t;
    t = not_null(f_7);
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_661), not_null(g_82));
    t = table_lookup_0_0(t);
  }
  return(t);
}
ATerm ConstructorName_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_44 != NULL) && (j_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_44 = ATgetArgument(t, 0);
      if(((k_44 != NULL) && (k_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_7 = NULL;
    if(((g_7 != NULL) && (g_7 != t)))
      _fail(t);
    else
      g_7 = t;
    t = not_null(l_44);
    {
      ATerm t_14 (ATerm t)
      {
        t = term_v_36;
        return(t);
      }
      t = rewrite_1_0(t_14, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm w_36 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_36) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          if(((m_44 != NULL) && (m_44 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(g_7);
    }
    t = not_null(m_44);
  }
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_44 = ATgetArgument(t, 0);
      if(((r_44 != NULL) && (r_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_7 = NULL;
    if(((h_7 != NULL) && (h_7 != t)))
      _fail(t);
    else
      h_7 = t;
    t = not_null(r_44);
    t = Arity_0_0(t);
    if(((u_44 != NULL) && (u_44 != t)))
      _fail(t);
    else
      u_44 = t;
    t = int_to_string_0_0(t);
    if(((s_44 != NULL) && (s_44 != t)))
      _fail(t);
    else
      s_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_44), not_null(u_44));
    t = ConstructorName_0_0(t);
    if(((v_44 != NULL) && (v_44 != t)))
      _fail(t);
    else
      v_44 = t;
    t = not_null(h_7);
    {
      ATerm x_214 = NULL;
      ATerm i_7 = NULL;
      if(((i_7 != NULL) && (i_7 != t)))
        _fail(t);
      else
        i_7 = t;
      t = not_null(t_44);
      t = double_quote_0_0(t);
      if(((x_214 != NULL) && (x_214 != t)))
        _fail(t);
      else
        x_214 = t;
      t = not_null(i_7);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_37, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_44)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_44)), term_s_18, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_36), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(s_44))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(x_214))))))));
    }
  }
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm q_44 = NULL;
  if(((q_44 != NULL) && (q_44 != t)))
    _fail(t);
  else
    q_44 = t;
  {
    ATerm t_212 = NULL;
    ATerm j_7 = NULL;
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    {
      ATerm w_212 = NULL;
      ATerm k_7 = NULL;
      if(((k_7 != NULL) && (k_7 != t)))
        _fail(t);
      else
        k_7 = t;
      t = not_null(q_44);
      t = map_1_0(InitConstructor_0_0, t);
      t = concat_0_0(t);
      if(((w_212 != NULL) && (w_212 != t)))
        _fail(t);
      else
        w_212 = t;
      t = not_null(k_7);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_212), (ATerm) ATinsert(ATempty, term_c_37));
      t = conc_0_0(t);
      if(((t_212 != NULL) && (t_212 != t)))
        _fail(t);
      else
        t_212 = t;
      t = not_null(j_7);
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_18, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_37, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_18)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(t_212)));
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm i_64 = NULL;
  if(((i_64 != NULL) && (i_64 != t)))
    _fail(t);
  else
    i_64 = t;
  t = SSL_int_to_string(not_null(i_64));
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm h_37 = ATgetFirst((ATermList) t);
          if(((ATgetType(h_37) != AT_INT) || (ATgetInt((ATermInt) h_37) != 95)))
            _fail(t);
          if(((v_61 != NULL) && (v_61 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_400 = NULL;
        ATerm l_7 = NULL;
        if(((l_7 != NULL) && (l_7 != t)))
          _fail(t);
        else
          l_7 = t;
        t = not_null(v_61);
        t = n_0(t);
        if(((f_400 != NULL) && (f_400 != t)))
          _fail(t);
        else
          f_400 = t;
        t = not_null(l_7);
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_400)), term_i_37), term_i_37);
      }
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_37 = ATgetFirst((ATermList) t);
                if(((ATgetType(l_37) != AT_INT) || (ATgetInt((ATermInt) l_37) != 45)))
                  _fail(t);
                if(((u_61 != NULL) && (u_61 != (ATerm) ATgetNext((ATermList) t))))
                  _fail((ATerm) ATgetNext((ATermList) t));
                else
                  u_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm k_399 = NULL;
              ATerm m_7 = NULL;
              if(((m_7 != NULL) && (m_7 != t)))
                _fail(t);
              else
                m_7 = t;
              t = not_null(u_61);
              t = n_0(t);
              if(((k_399 != NULL) && (k_399 != t)))
                _fail(t);
              else
                k_399 = t;
              t = not_null(m_7);
              t = (ATerm) ATinsert(CheckATermList(not_null(k_399)), term_i_37);
            }
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            {
              ATerm t_61 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_37 = ATgetFirst((ATermList) t);
                  if(((ATgetType(m_37) != AT_INT) || (ATgetInt((ATermInt) m_37) != 39)))
                    _fail(t);
                  if(((t_61 != NULL) && (t_61 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    t_61 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              {
                ATerm p_398 = NULL;
                ATerm n_7 = NULL;
                if(((n_7 != NULL) && (n_7 != t)))
                  _fail(t);
                else
                  n_7 = t;
                t = not_null(t_61);
                t = n_0(t);
                if(((p_398 != NULL) && (p_398 != t)))
                  _fail(t);
                else
                  p_398 = t;
                t = not_null(n_7);
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(p_398)), term_i_37), term_n_37), term_i_37);
              }
            }
          }
      }
    }
  return(t);
}
ATerm escape_1_0 (ATerm y_121 (ATerm (ATerm), ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm z_121 (ATerm t)
    {
      ATerm o_37 = t;
      int p_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_121(z_121, t);
          ;
          LocalPopChoice(p_37);
        }
      else
        {
          t = o_37;
          {
            ATerm q_37 = t;
            int r_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, z_121, t);
                ;
                LocalPopChoice(r_37);
              }
            else
              {
                t = q_37;
                t = Nil_0_0(t);
              }
          }
        }
      return(t);
    }
    t = z_121(t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm cify_0_0 (ATerm t)
{
  t = escape_1_0(Cify_1_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = s_118(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm u_55 = NULL,v_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((u_55 != NULL) && (u_55 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              u_55 = ATgetFirst((ATermList) t);
            if(((v_55 != NULL) && (v_55 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              v_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_322 = NULL;
          ATerm o_7 = NULL;
          if(((o_7 != NULL) && (o_7 != t)))
            _fail(t);
          else
            o_7 = t;
          t = not_null(u_55);
          t = u_118(t);
          if(((m_322 != NULL) && (m_322 != t)))
            _fail(t);
          else
            m_322 = t;
          t = not_null(o_7);
          {
            ATerm y_322 = NULL;
            ATerm p_7 = NULL;
            if(((p_7 != NULL) && (p_7 != t)))
              _fail(t);
            else
              p_7 = t;
            t = not_null(v_55);
            t = foldr_3_0(s_118, t_118, u_118, t);
            if(((y_322 != NULL) && (y_322 != t)))
              _fail(t);
            else
              y_322 = t;
            t = not_null(p_7);
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_322), not_null(y_322));
          }
          t = t_118(t);
        }
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm u_14 (ATerm t)
  {
    t = term_n_28;
    return(t);
  }
  ATerm v_14 (ATerm t)
  {
    t = term_s_28;
    return(t);
  }
  t = foldr_3_0(u_14, add_0_0, v_14, t);
  return(t);
}
ATerm Arity_0_0 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_44 = NULL,p_44 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          if(((p_44 != NULL) && (p_44 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_44 = ATgetArgument(t, 0);
          if(((o_44 != NULL) && (o_44 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(p_44);
      t = length_0_0(t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm n_44 = NULL;
        if(match_cons(t, sym_ConstType_1))
          {
            if(((n_44 != NULL) && (n_44 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              n_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_n_28;
      }
    }
  return(t);
}
ATerm DeclareConstructor_0_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      if(((g_44 != NULL) && (g_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_44 = ATgetArgument(t, 0);
      if(((f_44 != NULL) && (f_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_7 = NULL;
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = not_null(f_44);
    t = Arity_0_0(t);
    if(((h_44 != NULL) && (h_44 != t)))
      _fail(t);
    else
      h_44 = t;
    {
      ATerm h_209 = NULL;
      ATerm r_7 = NULL;
      if(((r_7 != NULL) && (r_7 != t)))
        _fail(t);
      else
        r_7 = t;
      t = not_null(g_44);
      t = cify_0_0(t);
      if(((h_209 != NULL) && (h_209 != t)))
        _fail(t);
      else
        h_209 = t;
      t = not_null(r_7);
      {
        ATerm t_209 = NULL;
        ATerm s_7 = NULL;
        if(((s_7 != NULL) && (s_7 != t)))
          _fail(t);
        else
          s_7 = t;
        t = not_null(h_44);
        t = int_to_string_0_0(t);
        if(((t_209 != NULL) && (t_209 != t)))
          _fail(t);
        else
          t_209 = t;
        t = not_null(s_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_209)), term_x_37), not_null(h_209)), term_w_37);
      }
      t = concat_strings_0_0(t);
      if(((i_44 != NULL) && (i_44 != t)))
        _fail(t);
      else
        i_44 = t;
      {
        ATerm t_7 = NULL;
        if(((t_7 != NULL) && (t_7 != t)))
          _fail(t);
        else
          t_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_44), not_null(h_44)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_37, not_null(i_44)));
        {
          ATerm w_14 (ATerm t)
          {
            t = term_v_36;
            return(t);
          }
          t = assert_1_0(w_14, t);
          t = not_null(t_7);
        }
        t = not_null(q_7);
      }
    }
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_38, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_44)), term_c_19)));
  }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
        {
          ATerm d_38 = ATgetFirst((ATermList) c_38);
          if(match_cons(d_38, sym_Constructors_1))
            {
              if(((d_44 != NULL) && (d_44 != ATgetArgument(d_38, 0))))
                _fail(ATgetArgument(d_38, 0));
              else
                d_44 = ATgetArgument(d_38, 0);
            }
          else
            _fail(t);
          {
            ATerm t_38 = (ATerm) ATgetNext((ATermList) c_38);
            if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm u_7 = NULL;
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = not_null(d_44);
    t = map_1_0(DeclareConstructor_0_0, t);
    if(((c_44 != NULL) && (c_44 != t)))
      _fail(t);
    else
      c_44 = t;
    t = not_null(d_44);
    t = InitConstructors_0_0(t);
    if(((e_44 != NULL) && (e_44 != t)))
      _fail(t);
    else
      e_44 = t;
    t = not_null(u_7);
    {
      ATerm d_208 = NULL;
      ATerm v_7 = NULL;
      if(((v_7 != NULL) && (v_7 != t)))
        _fail(t);
      else
        v_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_44), (ATerm) ATinsert(ATempty, not_null(e_44)));
      t = conc_0_0(t);
      if(((d_208 != NULL) && (d_208 != t)))
        _fail(t);
      else
        d_208 = t;
      t = not_null(v_7);
      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(d_208));
    }
  }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_46 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          if(((b_46 != NULL) && (b_46 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_46 = ATgetArgument(t, 0);
          {
            ATerm x_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      {
        ATerm t_224 = NULL;
        ATerm w_7 = NULL;
        if(((w_7 != NULL) && (w_7 != t)))
          _fail(t);
        else
          w_7 = t;
        t = not_null(b_46);
        t = map_1_0(TranslateType_0_0, t);
        if(((t_224 != NULL) && (t_224 != t)))
          _fail(t);
        else
          t_224 = t;
        t = not_null(w_7);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_19, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(t_224)));
      }
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm y_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_b_19;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_45 = NULL,a_46 = NULL;
      if(match_cons(t, sym_VarDec_2))
        {
          if(((z_45 != NULL) && (z_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_45 = ATgetArgument(t, 0);
          {
            ATerm a_48 = ATgetArgument(t, 1);
            if(match_cons(a_48, sym_FunType_2))
              {
                if(((a_46 != NULL) && (a_46 != ATgetArgument(a_48, 0))))
                  _fail(ATgetArgument(a_48, 0));
                else
                  a_46 = ATgetArgument(a_48, 0);
                {
                  ATerm b_48 = ATgetArgument(a_48, 1);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm p_223 = NULL;
        ATerm x_7 = NULL;
        if(((x_7 != NULL) && (x_7 != t)))
          _fail(t);
        else
          x_7 = t;
        t = not_null(a_46);
        t = map_1_0(TranslateType_0_0, t);
        if(((p_223 != NULL) && (p_223 != t)))
          _fail(t);
        else
          p_223 = t;
        t = not_null(x_7);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_19, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(p_223)))));
      }
      ;
      LocalPopChoice(h_46);
    }
  else
    {
      t = g_46;
      {
        ATerm y_45 = NULL;
        if(match_cons(t, sym_VarDec_2))
          {
            if(((y_45 != NULL) && (y_45 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              y_45 = ATgetArgument(t, 0);
            {
              ATerm c_48 = ATgetArgument(t, 1);
              if(match_cons(c_48, sym_ConstType_1))
                {
                  ATerm d_48 = ATgetArgument(c_48, 0);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_19, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_45)), term_c_19));
      }
    }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm e_48 = t;
  int f_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          if(((e_45 != NULL) && (e_45 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_45 = ATgetArgument(t, 0);
          if(((f_45 != NULL) && (f_45 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_45 = ATgetArgument(t, 1);
          if(((d_45 != NULL) && (d_45 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            d_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      {
        ATerm y_7 = NULL;
        if(((y_7 != NULL) && (y_7 != t)))
          _fail(t);
        else
          y_7 = t;
        t = not_null(f_45);
        t = map_1_0(TranslateVarDec_0_0, t);
        if(((g_45 != NULL) && (g_45 != t)))
          _fail(t);
        else
          g_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_45), (ATerm) ATinsert(ATempty, term_b_19));
        t = conc_0_0(t);
        t = not_null(y_7);
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_45)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(g_45))))));
      }
      ;
      LocalPopChoice(f_48);
    }
  else
    {
      t = e_48;
      {
        ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            if(((x_44 != NULL) && (x_44 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              x_44 = ATgetArgument(t, 0);
            if(((y_44 != NULL) && (y_44 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              y_44 = ATgetArgument(t, 1);
            if(((z_44 != NULL) && (z_44 != ATgetArgument(t, 2))))
              _fail(ATgetArgument(t, 2));
            else
              z_44 = ATgetArgument(t, 2);
            if(((w_44 != NULL) && (w_44 != ATgetArgument(t, 3))))
              _fail(ATgetArgument(t, 3));
            else
              w_44 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        {
          ATerm z_7 = NULL;
          if(((z_7 != NULL) && (z_7 != t)))
            _fail(t);
          else
            z_7 = t;
          t = not_null(y_44);
          t = map_1_0(TranslateVarDec_0_0, t);
          if(((a_45 != NULL) && (a_45 != t)))
            _fail(t);
          else
            a_45 = t;
          t = not_null(z_44);
          t = map_1_0(TranslateVarDec_0_0, t);
          if(((b_45 != NULL) && (b_45 != t)))
            _fail(t);
          else
            b_45 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_19)), not_null(b_45)), not_null(a_45));
          t = concat_0_0(t);
          if(((c_45 != NULL) && (c_45 != t)))
            _fail(t);
          else
            c_45 = t;
          t = not_null(z_7);
          t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_44)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(c_45))))));
        }
      }
    }
  return(t);
}
ATerm TranslateSpec_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm g_48 = ATgetArgument(t, 0);
      if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
        {
          ATerm h_48 = ATgetFirst((ATermList) g_48);
          if(match_cons(h_48, sym_Signature_1))
            {
              if(((y_43 != NULL) && (y_43 != ATgetArgument(h_48, 0))))
                _fail(ATgetArgument(h_48, 0));
              else
                y_43 = ATgetArgument(h_48, 0);
            }
          else
            _fail(t);
          {
            ATerm i_48 = (ATerm) ATgetNext((ATermList) g_48);
            if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
              {
                ATerm j_48 = ATgetFirst((ATermList) i_48);
                if(match_cons(j_48, sym_Strategies_1))
                  {
                    if(((z_43 != NULL) && (z_43 != ATgetArgument(j_48, 0))))
                      _fail(ATgetArgument(j_48, 0));
                    else
                      z_43 = ATgetArgument(j_48, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm k_48 = (ATerm) ATgetNext((ATermList) i_48);
                  if(((ATgetType(k_48) != AT_LIST) || !(ATisEmpty(k_48))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  {
    ATerm a_8 = NULL;
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(z_43);
    t = map_1_0(SDefToDeclaration_0_0, t);
    if(((a_44 != NULL) && (a_44 != t)))
      _fail(t);
    else
      a_44 = t;
    t = term_q_18;
    {
      ATerm l_48 = t;
      int m_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0_0(t);
          {
            ATerm x_14 (ATerm t)
            {
              ATerm k_205 = NULL;
              ATerm b_8 = NULL;
              if(((b_8 != NULL) && (b_8 != t)))
                _fail(t);
              else
                b_8 = t;
              {
                ATerm m_205 = NULL;
                ATerm c_8 = NULL;
                if(((c_8 != NULL) && (c_8 != t)))
                  _fail(t);
                else
                  c_8 = t;
                if(((m_205 != NULL) && (m_205 != t)))
                  _fail(t);
                else
                  m_205 = t;
                t = not_null(c_8);
                t = (ATerm) ATmakeAppl(sym__2, term_n_48, not_null(m_205));
                t = conc_strings_0_0(t);
                if(((k_205 != NULL) && (k_205 != t)))
                  _fail(t);
                else
                  k_205 = t;
                t = not_null(b_8);
              }
              t = (ATerm) ATmakeAppl(sym_Include_1, not_null(k_205));
              return(t);
            }
            t = map_1_0(x_14, t);
          }
          ;
          LocalPopChoice(m_48);
        }
      else
        {
          t = l_48;
          t = (ATerm) ATempty;
        }
      if(((b_44 != NULL) && (b_44 != t)))
        _fail(t);
      else
        b_44 = t;
      t = not_null(a_8);
    }
    {
      ATerm q_206 = NULL;
      ATerm d_8 = NULL;
      if(((d_8 != NULL) && (d_8 != t)))
        _fail(t);
      else
        d_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(not_null(z_43)), term_j_49)), not_null(a_44)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_49), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_w_18, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_48, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_x_48, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_y_48), term_a_49, term_c_19))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_49, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_49), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_d_49))), term_e_36)))))))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(y_43))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_48, (ATerm) ATinsert(ATempty, term_t_48)))), not_null(b_44));
      t = concat_0_0(t);
      if(((q_206 != NULL) && (q_206 != t)))
        _fail(t);
      else
        q_206 = t;
      t = not_null(d_8);
      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(q_206));
    }
  }
  return(t);
}
ATerm downup2_2_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  t = c_107(t);
  {
    ATerm y_14 (ATerm t)
    {
      t = downup2_2_0(c_107, d_107, t);
      return(t);
    }
    t = SRTS_all(y_14, t);
    t = d_107(t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm l_133 (ATerm), ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_82 != NULL) && (a_82 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_82 = ATgetArgument(t, 0);
      if(((y_81 != NULL) && (y_81 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_8 = NULL;
    if(((e_8 != NULL) && (e_8 != t)))
      _fail(t);
    else
      e_8 = t;
    t = l_133(t);
    if(((z_81 != NULL) && (z_81 != t)))
      _fail(t);
    else
      z_81 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_81), not_null(a_82), not_null(y_81));
    t = table_push_0_0(t);
    {
      ATerm k_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_81), term_r_49);
          t = table_get_0_0(t);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = k_49;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_82 != NULL) && (b_82 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_82 = ATgetFirst((ATermList) t);
          if(((c_82 != NULL) && (c_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(z_81), term_r_49, (ATerm) ATinsert(CheckATermList(not_null(c_82)), (ATerm) ATinsert(CheckATermList(not_null(b_82)), not_null(a_82))));
      t = table_put_0_0(t);
      t = not_null(e_8);
    }
  }
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  ATerm f_8 = NULL;
  if(((f_8 != NULL) && (f_8 != t)))
    _fail(t);
  else
    f_8 = t;
  t = term_t_49;
  if(((w_38 != NULL) && (w_38 != t)))
    _fail(t);
  else
    w_38 = t;
  t = term_f_24;
  if(((x_38 != NULL) && (x_38 != t)))
    _fail(t);
  else
    x_38 = t;
  t = not_null(f_8);
  {
    ATerm g_8 = NULL;
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_38), (ATerm) ATmakeAppl(sym_Defined_2, term_u_49, not_null(x_38)));
    {
      ATerm z_14 (ATerm t)
      {
        t = term_g_21;
        return(t);
      }
      t = assert_1_0(z_14, t);
      t = not_null(g_8);
    }
  }
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  {
    ATerm a_15 (ATerm t)
    {
      ATerm c_15 (ATerm t)
      {
        ATerm v_49 = t;
        int w_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateSpec_0_0(t);
            ;
            LocalPopChoice(w_49);
          }
        else
          {
            t = v_49;
            {
              ATerm x_49 = t;
              int y_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateSig_0_0(t);
                  ;
                  LocalPopChoice(y_49);
                }
              else
                {
                  t = x_49;
                  {
                    ATerm z_49 = t;
                    int a_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TranslateDef_0_0(t);
                        ;
                        LocalPopChoice(a_50);
                      }
                    else
                      {
                        t = z_49;
                        {
                          ATerm b_50 = t;
                          int c_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TranslateStratMatchGuard_0_0(t);
                              ;
                              LocalPopChoice(c_50);
                            }
                          else
                            {
                              t = b_50;
                              t = TranslateStrat_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(c_15, t);
      return(t);
    }
    ATerm b_15 (ATerm t)
    {
      t = repeat_1_0(Csimplify_0_0, t);
      return(t);
    }
    t = downup2_2_0(a_15, b_15, t);
    {
      ATerm d_15 (ATerm t)
      {
        ATerm e_15 (ATerm t)
        {
          if(!(match_cons(t, sym_InitCachedTerms_0)))
            _fail(t);
          t = init_cached_terms_0_0(t);
          return(t);
        }
        t = oncetd_1_0(e_15, t);
        return(t);
      }
      t = try_1_0(d_15, t);
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  {
    ATerm g_550 = NULL;
    ATerm i_8 = NULL;
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    t = term_u_36;
    t = whoami_0_0(t);
    if(((g_550 != NULL) && (g_550 != t)))
      _fail(t);
    else
      g_550 = t;
    t = not_null(i_8);
    t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_50), not_null(g_550)), term_i_50));
    t = printnl_0_0(t);
    t = term_s_28;
    t = exit_0_0(t);
    t = not_null(h_8);
  }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_70 != NULL) && (m_70 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_70 = ATgetArgument(t, 0);
      if(((n_70 != NULL) && (n_70 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_8 = NULL;
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    t = SSL_printnl(not_null(m_70), not_null(n_70));
    t = not_null(j_8);
  }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm i_62 = NULL;
  if(((i_62 != NULL) && (i_62 != t)))
    _fail(t);
  else
    i_62 = t;
  t = SSL_implode_string(not_null(i_62));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
      {
        ATerm o_49 = NULL,p_49 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_49 != NULL) && (o_49 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_49 = ATgetFirst((ATermList) t);
            if(((p_49 != NULL) && (p_49 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              p_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(o_49);
        {
          ATerm f_15 (ATerm t)
          {
            t = not_null(p_49);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_15, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm g_260 = NULL;
  if(((g_260 != NULL) && (g_260 != t)))
    _fail(t);
  else
    g_260 = t;
  {
    ATerm k_8 = NULL;
    if(((k_8 != NULL) && (k_8 != t)))
      _fail(t);
    else
      k_8 = t;
    t = not_null(g_260);
    {
      ATerm h_260 = NULL;
      if(((h_260 != NULL) && (h_260 != t)))
        _fail(t);
      else
        h_260 = t;
      t = SSL_explode_term(not_null(h_260));
      if(match_cons(t, sym__2))
        {
          ATerm m_50 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_50) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          if(((n_49 != NULL) && (n_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(k_8);
    }
  }
  t = not_null(n_49);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_113 (ATerm), ATerm t)
{
  ATerm g_113 (ATerm t)
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_113, t);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = Nil_0_0(t);
        t = f_113(t);
      }
    return(t);
  }
  t = g_113(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_49 != NULL) && (m_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_49 = ATgetArgument(t, 0);
      if(((l_49 != NULL) && (l_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_49);
  {
    ATerm g_15 (ATerm t)
    {
      t = not_null(l_49);
      return(t);
    }
    t = at_end_1_0(g_15, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_50 = t;
  int q_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(q_50);
    }
  else
    {
      t = p_50;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm j_62 = NULL;
  if(((j_62 != NULL) && (j_62 != t)))
    _fail(t);
  else
    j_62 = t;
  t = SSL_explode_string(not_null(j_62));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_50 = t;
  int s_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(s_50);
    }
  else
    {
      t = r_50;
      {
        ATerm t_50 = t;
        int u_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_15 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(h_15, t);
            ;
            LocalPopChoice(u_50);
          }
        else
          {
            t = t_50;
            {
              ATerm v_50 = t;
              int w_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_82 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((w_82 != NULL) && (w_82 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(w_82);
                  ;
                  LocalPopChoice(w_50);
                }
              else
                {
                  t = v_50;
                  {
                    ATerm x_50 = t;
                    int y_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_82 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((v_82 != NULL) && (v_82 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              v_82 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(v_82);
                        {
                          ATerm z_50 = t;
                          int a_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(a_51);
                            }
                          else
                            {
                              t = z_50;
                              {
                                ATerm i_15 (ATerm t)
                                {
                                  t = term_b_51;
                                  return(t);
                                }
                                t = debug_1_0(i_15, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(y_50);
                      }
                    else
                      {
                        t = x_50;
                        {
                          ATerm t_82 = NULL,u_82 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((t_82 != NULL) && (t_82 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                t_82 = ATgetArgument(t, 0);
                              if(((u_82 != NULL) && (u_82 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                u_82 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          {
                            ATerm e_673 = NULL;
                            ATerm l_8 = NULL;
                            if(((l_8 != NULL) && (l_8 != t)))
                              _fail(t);
                            else
                              l_8 = t;
                            t = not_null(t_82);
                            t = eval_config_0_0(t);
                            if(((e_673 != NULL) && (e_673 != t)))
                              _fail(t);
                            else
                              e_673 = t;
                            t = not_null(l_8);
                            {
                              ATerm q_673 = NULL;
                              ATerm m_8 = NULL;
                              if(((m_8 != NULL) && (m_8 != t)))
                                _fail(t);
                              else
                                m_8 = t;
                              t = not_null(u_82);
                              t = eval_config_0_0(t);
                              if(((q_673 != NULL) && (q_673 != t)))
                                _fail(t);
                              else
                                q_673 = t;
                              t = not_null(m_8);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(e_673), not_null(q_673));
                            }
                            t = conc_strings_0_0(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_82 = NULL;
  if(((s_82 != NULL) && (s_82 != t)))
    _fail(t);
  else
    s_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(s_82));
  t = table_get_0_0(t);
  {
    ATerm j_15 (ATerm t)
    {
      t = eval_config_0_0(t);
      {
        ATerm n_8 = NULL;
        if(((n_8 != NULL) && (n_8 != t)))
          _fail(t);
        else
          n_8 = t;
        {
          ATerm f_672 = NULL;
          ATerm o_8 = NULL;
          if(((o_8 != NULL) && (o_8 != t)))
            _fail(t);
          else
            o_8 = t;
          if(((f_672 != NULL) && (f_672 != t)))
            _fail(t);
          else
            f_672 = t;
          t = not_null(o_8);
          t = (ATerm) ATmakeAppl(sym__3, term_a_18, not_null(s_82), not_null(f_672));
          t = table_put_0_0(t);
          t = not_null(n_8);
        }
      }
      return(t);
    }
    t = try_1_0(j_15, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_125 (ATerm), ATerm t)
{
  ATerm k_15 (ATerm t)
  {
    ATerm p_8 = NULL;
    if(((p_8 != NULL) && (p_8 != t)))
      _fail(t);
    else
      p_8 = t;
    {
      ATerm a_525 = NULL;
      ATerm q_8 = NULL;
      if(((q_8 != NULL) && (q_8 != t)))
        _fail(t);
      else
        q_8 = t;
      t = term_c_51;
      t = get_config_0_0(t);
      if(((a_525 != NULL) && (a_525 != t)))
        _fail(t);
      else
        a_525 = t;
      t = not_null(q_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_525), term_d_51);
      t = geq_0_0(t);
      t = not_null(p_8);
    }
    t = z_125(t);
    return(t);
  }
  t = try_1_0(k_15, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_67 != NULL) && (e_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_67 = ATgetArgument(t, 0);
      {
        ATerm e_51 = ATgetArgument(t, 1);
        if(match_cons(e_51, sym_Stream_1))
          {
            if(((f_67 != NULL) && (f_67 != ATgetArgument(e_51, 0))))
              _fail(ATgetArgument(e_51, 0));
            else
              f_67 = ATgetArgument(e_51, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(e_67), not_null(f_67));
  {
    ATerm y_465 = NULL;
    ATerm r_8 = NULL;
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    if(((y_465 != NULL) && (y_465 != t)))
      _fail(t);
    else
      y_465 = t;
    t = not_null(r_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_465));
  }
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_51 = ATgetArgument(t, 0);
      if(match_cons(f_51, sym_Stream_1))
        {
          if(((s_70 != NULL) && (s_70 != ATgetArgument(f_51, 0))))
            _fail(ATgetArgument(f_51, 0));
          else
            s_70 = ATgetArgument(f_51, 0);
        }
      else
        _fail(t);
      if(((t_70 != NULL) && (t_70 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(s_70), not_null(t_70));
  {
    ATerm m_508 = NULL;
    ATerm s_8 = NULL;
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    if(((m_508 != NULL) && (m_508 != t)))
      _fail(t);
    else
      m_508 = t;
    t = not_null(s_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_508));
  }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm l_15 (ATerm t)
  {
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm a_510 = NULL;
      ATerm t_8 = NULL;
      if(((t_8 != NULL) && (t_8 != t)))
        _fail(t);
      else
        t_8 = t;
      if(((a_510 != NULL) && (a_510 != t)))
        _fail(t);
      else
        a_510 = t;
      t = not_null(t_8);
      t = (ATerm) ATmakeAppl(sym__2, term_g_51, not_null(a_510));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(l_15, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_51 = ATgetArgument(t, 0);
      if(match_cons(h_51, sym_Stream_1))
        {
          if(((o_70 != NULL) && (o_70 != ATgetArgument(h_51, 0))))
            _fail(ATgetArgument(h_51, 0));
          else
            o_70 = ATgetArgument(h_51, 0);
        }
      else
        _fail(t);
      if(((p_70 != NULL) && (p_70 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(o_70), not_null(p_70));
  {
    ATerm g_507 = NULL;
    ATerm u_8 = NULL;
    if(((u_8 != NULL) && (u_8 != t)))
      _fail(t);
    else
      u_8 = t;
    if(((g_507 != NULL) && (g_507 != t)))
      _fail(t);
    else
      g_507 = t;
    t = not_null(u_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_507));
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  ATerm w_70 = NULL;
  ATerm l_510 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_510 != NULL) && (l_510 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_510 = ATgetArgument(t, 0);
      if(((w_70 != NULL) && (w_70 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_510);
  {
    ATerm w_510 = NULL;
    ATerm v_8 = NULL;
    if(((v_8 != NULL) && (v_8 != t)))
      _fail(t);
    else
      v_8 = t;
    if(((w_510 != NULL) && (w_510 != t)))
      _fail(t);
    else
      w_510 = t;
    t = not_null(v_8);
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_510), term_i_51);
    t = open_stream_0_0(t);
    {
      ATerm h_511 = NULL;
      ATerm w_8 = NULL;
      if(((w_8 != NULL) && (w_8 != t)))
        _fail(t);
      else
        w_8 = t;
      if(((h_511 != NULL) && (h_511 != t)))
        _fail(t);
      else
        h_511 = t;
      t = not_null(w_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_511), not_null(w_70));
      t = v_124(t);
      t = fclose_0_0(t);
      t = not_null(w_70);
    }
  }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_73 = NULL;
  ATerm x_8 = NULL;
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  {
    ATerm m_15 (ATerm t)
    {
      ATerm j_51 = t;
      int k_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_15 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_73 != NULL) && (b_73 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_73 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(n_15, t);
          ;
          LocalPopChoice(k_51);
        }
      else
        {
          t = j_51;
          t = term_l_51;
          if(((b_73 != NULL) && (b_73 != t)))
            _fail(t);
          else
            b_73 = t;
        }
      return(t);
    }
    t = _2_0(m_15, _id, t);
    t = not_null(x_8);
  }
  {
    ATerm o_15 (ATerm t)
    {
      ATerm p_15 (ATerm t)
      {
        t = not_null(b_73);
        return(t);
      }
      t = split_2_0(p_15, _id, t);
      return(t);
    }
    t = _2_0(_id, o_15, t);
    {
      ATerm m_51 = t;
      int n_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_15 (ATerm t)
          {
            ATerm r_15 (ATerm t)
            {
              if(!(match_cons(t, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1_0(r_15, t);
            return(t);
          }
          t = _2_0(q_15, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(n_51);
        }
      else
        {
          t = m_51;
          t = _2_0(_id, WriteToTextFile_0_0, t);
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm y_72 = NULL;
  ATerm y_8 = NULL;
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = dtime_0_0(t);
  t = not_null(y_8);
  t = v_126(t);
  {
    ATerm z_8 = NULL;
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    t = dtime_0_0(t);
    if(((y_72 != NULL) && (y_72 != t)))
      _fail(t);
    else
      y_72 = t;
    t = not_null(z_8);
    {
      ATerm z_72 = NULL,a_73 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((z_72 != NULL) && (z_72 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_72 = ATgetArgument(t, 0);
          if(((a_73 != NULL) && (a_73 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_72)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_72))), not_null(a_73));
    }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((i_67 != NULL) && (i_67 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(i_67));
      ;
      LocalPopChoice(p_51);
    }
  else
    {
      t = o_51;
      if(((j_67 != NULL) && (j_67 != t)))
        _fail(t);
      else
        j_67 = t;
      t = SSL_fclose(not_null(j_67));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm u_70 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((u_70 != NULL) && (u_70 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(u_70));
  return(t);
}
ATerm debug_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  ATerm a_9 = NULL;
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  {
    ATerm i_501 = NULL;
    ATerm b_9 = NULL;
    if(((b_9 != NULL) && (b_9 != t)))
      _fail(t);
    else
      b_9 = t;
    t = h_124(t);
    if(((i_501 != NULL) && (i_501 != t)))
      _fail(t);
    else
      i_501 = t;
    t = not_null(b_9);
    {
      ATerm p_501 = NULL;
      ATerm c_9 = NULL;
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      if(((p_501 != NULL) && (p_501 != t)))
        _fail(t);
      else
        p_501 = t;
      t = not_null(c_9);
      t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_501)), not_null(i_501)));
    }
    t = printnl_0_0(t);
    t = not_null(a_9);
  }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_67 != NULL) && (g_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_67 = ATgetArgument(t, 0);
      if(((h_67 != NULL) && (h_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(g_67), not_null(h_67));
  {
    ATerm o_466 = NULL;
    ATerm d_9 = NULL;
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    if(((o_466 != NULL) && (o_466 != t)))
      _fail(t);
    else
      o_466 = t;
    t = not_null(d_9);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_466));
  }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm h_62 = NULL;
  if(((h_62 != NULL) && (h_62 != t)))
    _fail(t);
  else
    h_62 = t;
  t = SSL_is_string(not_null(h_62));
  return(t);
}
ATerm _2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL,i_9 = NULL;
  ATerm j_9 = NULL;
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  if(match_cons(t, sym__2))
    {
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_9 = ATgetArgument(t, 0);
      if(((f_9 != NULL) && (f_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_9 = NULL;
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = SSLgetAnnotations(not_null(j_9));
    if(((g_9 != NULL) && (g_9 != t)))
      _fail(t);
    else
      g_9 = t;
    t = not_null(l_9);
  }
  t = not_null(e_9);
  t = y_82(t);
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = not_null(f_9);
  t = z_82(t);
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  {
    ATerm k_9 = NULL;
    ATerm m_9 = NULL;
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_9), not_null(i_9)), not_null(g_9));
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    t = not_null(m_9);
    t = not_null(k_9);
  }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  t = SSL_stdin_stream();
  {
    ATerm p_468 = NULL;
    ATerm n_9 = NULL;
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    if(((p_468 != NULL) && (p_468 != t)))
      _fail(t);
    else
      p_468 = t;
    t = not_null(n_9);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_468));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  t = SSL_stdout_stream();
  {
    ATerm a_469 = NULL;
    ATerm o_9 = NULL;
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
    if(((a_469 != NULL) && (a_469 != t)))
      _fail(t);
    else
      a_469 = t;
    t = not_null(o_9);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_469));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  t = SSL_stderr_stream();
  {
    ATerm l_469 = NULL;
    ATerm p_9 = NULL;
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    if(((l_469 != NULL) && (l_469 != t)))
      _fail(t);
    else
      l_469 = t;
    t = not_null(p_9);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_469));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
      ;
      LocalPopChoice(r_51);
    }
  else
    {
      t = q_51;
      {
        ATerm s_51 = t;
        int t_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(t_51);
          }
        else
          {
            t = s_51;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = stdin_stream_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL;
  ATerm a_342 = NULL;
  if(((a_342 != NULL) && (a_342 != t)))
    _fail(t);
  else
    a_342 = t;
  {
    ATerm q_9 = NULL;
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = not_null(a_342);
    {
      ATerm b_342 = NULL;
      if(((b_342 != NULL) && (b_342 != t)))
        _fail(t);
      else
        b_342 = t;
      t = SSL_explode_term(not_null(b_342));
      if(match_cons(t, sym__2))
        {
          ATerm u_51 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) u_51) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm v_51 = ATgetArgument(t, 1);
            if(((ATgetType(v_51) == AT_LIST) && !(ATisEmpty(v_51))))
              {
                if(((i_57 != NULL) && (i_57 != ATgetFirst((ATermList) v_51))))
                  _fail(ATgetFirst((ATermList) v_51));
                else
                  i_57 = ATgetFirst((ATermList) v_51);
                if(((h_57 != NULL) && (h_57 != (ATerm) ATgetNext((ATermList) v_51))))
                  _fail((ATerm) ATgetNext((ATermList) v_51));
                else
                  h_57 = (ATerm) ATgetNext((ATermList) v_51);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(q_9);
    }
  }
  t = not_null(i_57);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_51 = ATgetArgument(t, 0);
      ATerm x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        {
          ATerm a_52 = t;
          int b_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_15 (ATerm t)
              {
                ATerm a_460 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((a_460 != NULL) && (a_460 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_460 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(a_460);
                return(t);
              }
              t = _2_0(s_15, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(b_52);
            }
          else
            {
              t = a_52;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_70 = NULL;
  ATerm c_52 = t;
  int d_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_509 = NULL;
      ATerm r_9 = NULL;
      if(((r_9 != NULL) && (r_9 != t)))
        _fail(t);
      else
        r_9 = t;
      if(((c_509 != NULL) && (c_509 != t)))
        _fail(t);
      else
        c_509 = t;
      t = not_null(r_9);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_509), term_e_52);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_52);
    }
  else
    {
      t = c_52;
      {
        ATerm t_15 (ATerm t)
        {
          t = term_f_52;
          return(t);
        }
        t = debug_1_0(t_15, t);
        _fail(t);
      }
    }
  {
    ATerm s_9 = NULL;
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = read_from_stream_0_0(t);
    if(((v_70 != NULL) && (v_70 != t)))
      _fail(t);
    else
      v_70 = t;
    t = not_null(s_9);
    t = fclose_0_0(t);
    t = not_null(v_70);
  }
  return(t);
}
ATerm split_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm n_345 = NULL;
  ATerm t_9 = NULL;
  if(((t_9 != NULL) && (t_9 != t)))
    _fail(t);
  else
    t_9 = t;
  t = f_120(t);
  if(((n_345 != NULL) && (n_345 != t)))
    _fail(t);
  else
    n_345 = t;
  t = not_null(t_9);
  {
    ATerm u_345 = NULL;
    ATerm u_9 = NULL;
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = g_120(t);
    if(((u_345 != NULL) && (u_345 != t)))
      _fail(t);
    else
      u_345 = t;
    t = not_null(u_9);
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_345), not_null(u_345));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm x_72 = NULL;
  ATerm v_9 = NULL;
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  {
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((x_72 != NULL) && (x_72 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(u_15, t);
        ;
        LocalPopChoice(h_52);
      }
    else
      {
        t = g_52;
        t = term_i_52;
        if(((x_72 != NULL) && (x_72 != t)))
          _fail(t);
        else
          x_72 = t;
      }
    t = not_null(v_9);
  }
  {
    ATerm v_15 (ATerm t)
    {
      t = not_null(x_72);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, v_15, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_15 (ATerm t)
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm x_15 (ATerm t)
  {
    ATerm w_9 = NULL;
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    {
      ATerm r_553 = NULL;
      ATerm x_9 = NULL;
      if(((x_9 != NULL) && (x_9 != t)))
        _fail(t);
      else
        x_9 = t;
      t = string_to_int_0_0(t);
      if(((r_553 != NULL) && (r_553 != t)))
        _fail(t);
      else
        r_553 = t;
      t = not_null(x_9);
      t = (ATerm) ATmakeAppl(sym__2, term_l_52, not_null(r_553));
      t = set_config_0_0(t);
      t = not_null(w_9);
    }
    return(t);
  }
  ATerm y_15 (ATerm t)
  {
    t = term_m_52;
    return(t);
  }
  t = ArgOption_3_0(w_15, x_15, y_15, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm j_64 = NULL;
  if(((j_64 != NULL) && (j_64 != t)))
    _fail(t);
  else
    j_64 = t;
  t = SSL_string_to_int(not_null(j_64));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_52 = t;
  int o_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_15 (ATerm t)
      {
        ATerm p_52 = t;
        int q_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(q_52);
          }
        else
          {
            t = p_52;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm a_16 (ATerm t)
      {
        ATerm y_9 = NULL;
        if(((y_9 != NULL) && (y_9 != t)))
          _fail(t);
        else
          y_9 = t;
        t = term_r_52;
        t = set_config_0_0(t);
        t = not_null(y_9);
        t = term_s_52;
        return(t);
      }
      ATerm b_16 (ATerm t)
      {
        t = term_t_52;
        return(t);
      }
      t = Option_3_0(z_15, a_16, b_16, t);
      ;
      LocalPopChoice(o_52);
    }
  else
    {
      t = n_52;
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_16 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm d_16 (ATerm t)
            {
              ATerm z_9 = NULL;
              if(((z_9 != NULL) && (z_9 != t)))
                _fail(t);
              else
                z_9 = t;
              {
                ATerm w_558 = NULL;
                ATerm a_10 = NULL;
                if(((a_10 != NULL) && (a_10 != t)))
                  _fail(t);
                else
                  a_10 = t;
                t = string_to_int_0_0(t);
                if(((w_558 != NULL) && (w_558 != t)))
                  _fail(t);
                else
                  w_558 = t;
                t = not_null(a_10);
                t = (ATerm) ATmakeAppl(sym__2, term_c_51, not_null(w_558));
                t = set_config_0_0(t);
                t = not_null(z_9);
              }
              {
                ATerm h_559 = NULL;
                ATerm b_10 = NULL;
                if(((b_10 != NULL) && (b_10 != t)))
                  _fail(t);
                else
                  b_10 = t;
                if(((h_559 != NULL) && (h_559 != t)))
                  _fail(t);
                else
                  h_559 = t;
                t = not_null(b_10);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_559));
              }
              return(t);
            }
            ATerm e_16 (ATerm t)
            {
              t = term_w_52;
              return(t);
            }
            t = ArgOption_3_0(c_16, d_16, e_16, t);
            ;
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
            {
              ATerm f_16 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm g_16 (ATerm t)
              {
                ATerm c_10 = NULL;
                if(((c_10 != NULL) && (c_10 != t)))
                  _fail(t);
                else
                  c_10 = t;
                t = term_y_52;
                t = set_config_0_0(t);
                t = not_null(c_10);
                t = term_z_52;
                return(t);
              }
              ATerm h_16 (ATerm t)
              {
                t = term_a_53;
                return(t);
              }
              t = Option_3_0(f_16, g_16, h_16, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_53);
    }
  else
    {
      t = b_53;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm i_16 (ATerm t)
  {
    ATerm d_53 = t;
    int e_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(e_53);
      }
    else
      {
        t = d_53;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm j_16 (ATerm t)
  {
    ATerm d_10 = NULL;
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    {
      ATerm e_556 = NULL;
      ATerm e_10 = NULL;
      if(((e_10 != NULL) && (e_10 != t)))
        _fail(t);
      else
        e_10 = t;
      if(((e_556 != NULL) && (e_556 != t)))
        _fail(t);
      else
        e_556 = t;
      t = not_null(e_10);
      t = (ATerm) ATmakeAppl(sym__2, term_f_53, not_null(e_556));
      t = set_config_0_0(t);
      t = not_null(d_10);
    }
    {
      ATerm p_556 = NULL;
      ATerm f_10 = NULL;
      if(((f_10 != NULL) && (f_10 != t)))
        _fail(t);
      else
        f_10 = t;
      if(((p_556 != NULL) && (p_556 != t)))
        _fail(t);
      else
        p_556 = t;
      t = not_null(f_10);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_556));
    }
    return(t);
  }
  ATerm k_16 (ATerm t)
  {
    t = term_g_53;
    return(t);
  }
  t = ArgOption_3_0(i_16, j_16, k_16, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_53);
    }
  else
    {
      t = h_53;
      {
        ATerm l_16 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_16 (ATerm t)
        {
          ATerm g_10 = NULL;
          if(((g_10 != NULL) && (g_10 != t)))
            _fail(t);
          else
            g_10 = t;
          t = term_k_53;
          t = set_config_0_0(t);
          t = not_null(g_10);
          t = term_l_53;
          return(t);
        }
        ATerm n_16 (ATerm t)
        {
          t = term_m_53;
          return(t);
        }
        t = Option_3_0(l_16, m_16, n_16, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(l_0, t);
      ;
      LocalPopChoice(o_53);
    }
  else
    {
      t = n_53;
      {
        ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_75 != NULL) && (r_75 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_75 = ATgetFirst((ATermList) t);
            {
              ATerm p_53 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(p_53) == AT_LIST) && !(ATisEmpty(p_53))))
                {
                  if(((p_75 != NULL) && (p_75 != ATgetFirst((ATermList) p_53))))
                    _fail(ATgetFirst((ATermList) p_53));
                  else
                    p_75 = ATgetFirst((ATermList) p_53);
                  if(((q_75 != NULL) && (q_75 != (ATerm) ATgetNext((ATermList) p_53))))
                    _fail((ATerm) ATgetNext((ATermList) p_53));
                  else
                    q_75 = (ATerm) ATgetNext((ATermList) p_53);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        {
          ATerm h_10 = NULL;
          if(((h_10 != NULL) && (h_10 != t)))
            _fail(t);
          else
            h_10 = t;
          t = not_null(r_75);
          t = i_0(t);
          t = not_null(h_10);
          {
            ATerm b_604 = NULL;
            ATerm i_10 = NULL;
            if(((i_10 != NULL) && (i_10 != t)))
              _fail(t);
            else
              i_10 = t;
            t = not_null(p_75);
            t = k_0(t);
            if(((b_604 != NULL) && (b_604 != t)))
              _fail(t);
            else
              b_604 = t;
            t = not_null(i_10);
            t = (ATerm) ATinsert(CheckATermList(not_null(q_75)), not_null(b_604));
          }
        }
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm p_16 (ATerm t)
  {
    ATerm j_10 = NULL;
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    {
      ATerm u_554 = NULL;
      ATerm k_10 = NULL;
      if(((k_10 != NULL) && (k_10 != t)))
        _fail(t);
      else
        k_10 = t;
      if(((u_554 != NULL) && (u_554 != t)))
        _fail(t);
      else
        u_554 = t;
      t = not_null(k_10);
      t = (ATerm) ATmakeAppl(sym__2, term_s_53, not_null(u_554));
      t = set_config_0_0(t);
      t = not_null(j_10);
    }
    {
      ATerm f_555 = NULL;
      ATerm l_10 = NULL;
      if(((l_10 != NULL) && (l_10 != t)))
        _fail(t);
      else
        l_10 = t;
      if(((f_555 != NULL) && (f_555 != t)))
        _fail(t);
      else
        f_555 = t;
      t = not_null(l_10);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_555));
    }
    return(t);
  }
  ATerm q_16 (ATerm t)
  {
    t = term_t_53;
    return(t);
  }
  t = ArgOption_3_0(o_16, p_16, q_16, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_53);
    }
  else
    {
      t = u_53;
      {
        ATerm w_53 = t;
        int x_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(x_53);
          }
        else
          {
            t = w_53;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  {
    ATerm n_551 = NULL;
    ATerm m_10 = NULL;
    if(((m_10 != NULL) && (m_10 != t)))
      _fail(t);
    else
      m_10 = t;
    t = term_u_36;
    t = whoami_0_0(t);
    if(((n_551 != NULL) && (n_551 != t)))
      _fail(t);
    else
      n_551 = t;
    t = not_null(m_10);
    t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATempty, term_y_53), not_null(n_551)));
    t = printnl_0_0(t);
    t = term_s_28;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_53;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm g_73 = NULL;
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  t = SSL_TicksToSeconds(not_null(g_73));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_64 != NULL) && (o_64 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_64 = ATgetArgument(t, 0);
      if(((p_64 != NULL) && (p_64 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(o_64), not_null(p_64));
        ;
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = SSL_addr(not_null(o_64), not_null(p_64));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  ATerm c_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_118(t);
      ;
      LocalPopChoice(d_54);
    }
  else
    {
      t = c_54;
      {
        ATerm s_55 = NULL,t_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_55 != NULL) && (s_55 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_55 = ATgetFirst((ATermList) t);
            if(((t_55 != NULL) && (t_55 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              t_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_321 = NULL;
          ATerm n_10 = NULL;
          if(((n_10 != NULL) && (n_10 != t)))
            _fail(t);
          else
            n_10 = t;
          t = not_null(t_55);
          t = foldr_2_0(q_118, r_118, t);
          if(((r_321 != NULL) && (r_321 != t)))
            _fail(t);
          else
            r_321 = t;
          t = not_null(n_10);
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_55), not_null(r_321));
          t = r_118(t);
        }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm t)
{
  ATerm l_62 = NULL;
  ATerm q_412 = NULL;
  if(((q_412 != NULL) && (q_412 != t)))
    _fail(t);
  else
    q_412 = t;
  {
    ATerm o_10 = NULL;
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = not_null(q_412);
    {
      ATerm r_412 = NULL;
      if(((r_412 != NULL) && (r_412 != t)))
        _fail(t);
      else
        r_412 = t;
      t = SSL_explode_term(not_null(r_412));
      if(match_cons(t, sym__2))
        {
          ATerm e_54 = ATgetArgument(t, 0);
          if(((l_62 != NULL) && (l_62 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(o_10);
    }
  }
  t = not_null(l_62);
  t = foldr_2_0(j_122, k_122, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm r_16 (ATerm t)
    {
      t = term_n_28;
      return(t);
    }
    t = crush_2_0(r_16, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_65 != NULL) && (o_65 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_65 = ATgetArgument(t, 0);
      if(((p_65 != NULL) && (p_65 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_10 = NULL;
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    {
      ATerm f_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(not_null(o_65), not_null(p_65));
          ;
          LocalPopChoice(g_54);
        }
      else
        {
          t = f_54;
          t = SSL_gtr(not_null(o_65), not_null(p_65));
        }
      t = not_null(p_10);
    }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_65 = NULL;
  ATerm h_54 = t;
  int i_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((u_65 != NULL) && (u_65 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_65 = ATgetArgument(t, 0);
          if(((u_65 != NULL) && (u_65 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(i_54);
    }
  else
    {
      t = h_54;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm s_16 (ATerm t)
  {
    ATerm q_10 = NULL;
    if(((q_10 != NULL) && (q_10 != t)))
      _fail(t);
    else
      q_10 = t;
    {
      ATerm k_524 = NULL;
      ATerm r_10 = NULL;
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
      t = term_c_51;
      t = get_config_0_0(t);
      if(((k_524 != NULL) && (k_524 != t)))
        _fail(t);
      else
        k_524 = t;
      t = not_null(r_10);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_524), term_s_28);
      t = geq_0_0(t);
      t = not_null(q_10);
    }
    t = y_125(t);
    return(t);
  }
  t = try_1_0(s_16, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_16 (ATerm t)
  {
    ATerm g_552 = NULL;
    ATerm s_10 = NULL;
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    t = run_time_0_0(t);
    if(((g_552 != NULL) && (g_552 != t)))
      _fail(t);
    else
      g_552 = t;
    t = not_null(s_10);
    {
      ATerm o_552 = NULL;
      ATerm t_10 = NULL;
      if(((t_10 != NULL) && (t_10 != t)))
        _fail(t);
      else
        t_10 = t;
      t = term_u_36;
      t = whoami_0_0(t);
      if(((o_552 != NULL) && (o_552 != t)))
        _fail(t);
      else
        o_552 = t;
      t = not_null(t_10);
      t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_54), not_null(g_552)), term_j_54), not_null(o_552)));
    }
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(t_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_n_28;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  ATerm l_54 = t;
  int m_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_54;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_54);
    }
  else
    {
      t = l_54;
      {
        ATerm u_16 (ATerm t)
        {
          ATerm o_54 = t;
          int p_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(p_54);
            }
          else
            {
              t = o_54;
              {
                ATerm q_54 = t;
                int r_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(r_54);
                  }
                else
                  {
                    t = q_54;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(u_16, t);
      }
    }
  t = t_127(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_77 = NULL;
  if(((o_77 != NULL) && (o_77 != t)))
    _fail(t);
  else
    o_77 = t;
  t = SSL_table_create(not_null(o_77));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm c_73 = NULL;
  if(((c_73 != NULL) && (c_73 != t)))
    _fail(t);
  else
    c_73 = t;
  {
    ATerm u_10 = NULL;
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = term_s_54;
    t = table_create_0_0(t);
    t = (ATerm) ATmakeAppl(sym__3, term_s_54, term_t_54, not_null(c_73));
    t = table_put_0_0(t);
    t = not_null(u_10);
  }
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_77 = NULL;
  if(((p_77 != NULL) && (p_77 != t)))
    _fail(t);
  else
    p_77 = t;
  t = SSL_table_destroy(not_null(p_77));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm h_72 = NULL;
  if(((h_72 != NULL) && (h_72 != t)))
    _fail(t);
  else
    h_72 = t;
  t = SSL_exit(not_null(h_72));
  return(t);
}
ATerm long_description_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm p_112 (ATerm t)
  {
    ATerm u_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(v_54);
      }
    else
      {
        t = u_54;
        t = Cons_2_0(o_112, p_112, t);
      }
    return(t);
  }
  t = p_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_54 = t;
  int x_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_50 = NULL,f_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_50 != NULL) && (e_50 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_50 = ATgetFirst((ATermList) t);
          if(((f_50 != NULL) && (f_50 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_50);
      {
        ATerm g_50 = NULL;
        ATerm v_10 = NULL;
        if(((v_10 != NULL) && (v_10 != t)))
          _fail(t);
        else
          v_10 = t;
        {
          ATerm m_269 = NULL;
          ATerm w_10 = NULL;
          if(((w_10 != NULL) && (w_10 != t)))
            _fail(t);
          else
            w_10 = t;
          t = g_0(t);
          if(((m_269 != NULL) && (m_269 != t)))
            _fail(t);
          else
            m_269 = t;
          t = not_null(w_10);
          {
            ATerm u_269 = NULL;
            ATerm x_10 = NULL;
            if(((x_10 != NULL) && (x_10 != t)))
              _fail(t);
            else
              x_10 = t;
            t = not_null(e_50);
            t = e_0(t);
            if(((u_269 != NULL) && (u_269 != t)))
              _fail(t);
            else
              u_269 = t;
            t = not_null(x_10);
            t = (ATerm) ATinsert(CheckATermList(not_null(m_269)), not_null(u_269));
          }
          if(((g_50 != NULL) && (g_50 != t)))
            _fail(t);
          else
            g_50 = t;
          t = not_null(v_10);
        }
        {
          ATerm v_16 (ATerm t)
          {
            t = not_null(g_50);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_16, t);
        }
      }
      ;
      LocalPopChoice(x_54);
    }
  else
    {
      t = w_54;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_36;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm w_16 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, w_16, t);
  return(t);
}
ATerm short_description_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,y_10 = NULL,a_11 = NULL;
  ATerm b_11 = NULL;
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((y_10 != NULL) && (y_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_11 = NULL;
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = SSLgetAnnotations(not_null(b_11));
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = not_null(d_11);
  }
  t = not_null(y_10);
  t = n_93(t);
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  {
    ATerm c_11 = NULL;
    ATerm e_11 = NULL;
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_11)), not_null(z_10));
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = not_null(e_11);
    t = not_null(c_11);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_76 = NULL;
  ATerm y_54 = t;
  int z_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_53;
      t = get_config_0_0(t);
      if(((d_76 != NULL) && (d_76 != t)))
        _fail(t);
      else
        d_76 = t;
      ;
      LocalPopChoice(z_54);
    }
  else
    {
      t = y_54;
      {
        ATerm x_16 (ATerm t)
        {
          ATerm y_16 (ATerm t)
          {
            if(((d_76 != NULL) && (d_76 != t)))
              _fail(t);
            else
              d_76 = t;
            return(t);
          }
          t = Program_1_0(y_16, t);
          return(t);
        }
        t = option_defined_1_0(x_16, t);
      }
    }
  {
    ATerm z_16 (ATerm t)
    {
      ATerm a_17 (ATerm t)
      {
        t = not_null(d_76);
        return(t);
      }
      t = short_description_1_0(a_17, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(z_16, t);
    t = term_a_55;
    t = echo_0_0(t);
    t = term_d_55;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm b_17 (ATerm t)
      {
        ATerm v_613 = NULL;
        ATerm f_11 = NULL;
        if(((f_11 != NULL) && (f_11 != t)))
          _fail(t);
        else
          f_11 = t;
        if(((v_613 != NULL) && (v_613 != t)))
          _fail(t);
        else
          v_613 = t;
        t = not_null(f_11);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_613)), term_e_55);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(b_17, t);
      {
        ATerm c_17 (ATerm t)
        {
          ATerm g_614 = NULL;
          ATerm g_11 = NULL;
          if(((g_11 != NULL) && (g_11 != t)))
            _fail(t);
          else
            g_11 = t;
          {
            ATerm d_17 (ATerm t)
            {
              t = not_null(d_76);
              return(t);
            }
            t = long_description_1_0(d_17, t);
            if(((g_614 != NULL) && (g_614 != t)))
              _fail(t);
            else
              g_614 = t;
            t = not_null(g_11);
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(g_614)), term_f_55);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(c_17, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm g_55 = t;
  int h_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(h_55);
    }
  else
    {
      t = g_55;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,h_11 = NULL,j_11 = NULL;
  ATerm k_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_11 = NULL;
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = SSLgetAnnotations(not_null(k_11));
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = not_null(m_11);
  }
  t = not_null(h_11);
  t = o_93(t);
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  {
    ATerm l_11 = NULL;
    ATerm n_11 = NULL;
    if(((n_11 != NULL) && (n_11 != t)))
      _fail(t);
    else
      n_11 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_11)), not_null(i_11));
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(n_11);
    t = not_null(l_11);
  }
  return(t);
}
ATerm fetch_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm a_113 (ATerm t)
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_112, _id, t);
        ;
        LocalPopChoice(j_55);
      }
    else
      {
        t = i_55;
        t = Cons_2_0(_id, a_113, t);
      }
    return(t);
  }
  t = a_113(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  t = fetch_1_0(h_129, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm k_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_55);
    }
  else
    {
      t = k_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_55 = ATgetFirst((ATermList) t);
          ATerm n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  {
    ATerm j_498 = NULL;
    ATerm p_11 = NULL;
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    {
      ATerm o_55 = t;
      int p_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(p_55);
        }
      else
        {
          t = o_55;
          {
            ATerm l_498 = NULL;
            ATerm q_11 = NULL;
            if(((q_11 != NULL) && (q_11 != t)))
              _fail(t);
            else
              q_11 = t;
            if(((l_498 != NULL) && (l_498 != t)))
              _fail(t);
            else
              l_498 = t;
            t = not_null(q_11);
            t = (ATerm) ATinsert(ATempty, not_null(l_498));
          }
        }
      if(((j_498 != NULL) && (j_498 != t)))
        _fail(t);
      else
        j_498 = t;
      t = not_null(p_11);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_l_51, not_null(j_498));
    t = printnl_0_0(t);
    t = not_null(o_11);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_53;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm w_55 = t;
  int x_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_105(t);
      ;
      LocalPopChoice(x_55);
    }
  else
    {
      t = w_55;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_17 (ATerm t)
      {
        t = term_b_56;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm g_17 (ATerm t)
      {
        t = term_c_56;
        return(t);
      }
      t = Option_3_0(e_17, f_17, g_17, t);
      ;
      LocalPopChoice(z_55);
    }
  else
    {
      t = y_55;
      {
        ATerm h_17 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_17 (ATerm t)
        {
          ATerm r_11 = NULL;
          if(((r_11 != NULL) && (r_11 != t)))
            _fail(t);
          else
            r_11 = t;
          t = term_b_56;
          t = set_config_0_0(t);
          t = term_e_56;
          t = set_config_0_0(t);
          t = not_null(r_11);
          t = term_f_56;
          return(t);
        }
        ATerm j_17 (ATerm t)
        {
          t = term_g_56;
          return(t);
        }
        t = Option_3_0(h_17, i_17, j_17, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_77 != NULL) && (t_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_77 = ATgetArgument(t, 0);
      if(((u_77 != NULL) && (u_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(t_77), not_null(u_77));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((f_76 != NULL) && (f_76 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_76 = ATgetArgument(t, 0);
      if(((g_76 != NULL) && (g_76 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_76 = ATgetArgument(t, 1);
      if(((e_76 != NULL) && (e_76 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm s_11 = NULL;
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    {
      ATerm b_617 = NULL;
      ATerm t_11 = NULL;
      if(((t_11 != NULL) && (t_11 != t)))
        _fail(t);
      else
        t_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_76), not_null(g_76));
      {
        ATerm h_56 = t;
        int i_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0_0(t);
            ;
            LocalPopChoice(i_56);
          }
        else
          {
            t = h_56;
            t = (ATerm) ATempty;
          }
        if(((b_617 != NULL) && (b_617 != t)))
          _fail(t);
        else
          b_617 = t;
        t = not_null(t_11);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(f_76), not_null(g_76), (ATerm) ATinsert(CheckATermList(not_null(b_617)), not_null(e_76)));
      t = table_put_0_0(t);
      t = not_null(s_11);
    }
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm g_612 = NULL;
  ATerm u_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  t = term_u_36;
  t = m_130(t);
  if(((g_612 != NULL) && (g_612 != t)))
    _fail(t);
  else
    g_612 = t;
  t = not_null(u_11);
  t = (ATerm) ATmakeAppl(sym__3, term_b_55, term_c_55, not_null(g_612));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(k_56);
    }
  else
    {
      t = j_56;
      {
        ATerm n_75 = NULL,o_75 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_75 != NULL) && (o_75 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_75 = ATgetFirst((ATermList) t);
            if(((n_75 != NULL) && (n_75 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_11 = NULL;
          if(((v_11 != NULL) && (v_11 != t)))
            _fail(t);
          else
            v_11 = t;
          t = not_null(o_75);
          t = a_0(t);
          t = not_null(v_11);
          {
            ATerm t_602 = NULL;
            ATerm w_11 = NULL;
            if(((w_11 != NULL) && (w_11 != t)))
              _fail(t);
            else
              w_11 = t;
            t = term_u_36;
            t = c_0(t);
            if(((t_602 != NULL) && (t_602 != t)))
              _fail(t);
            else
              t_602 = t;
            t = not_null(w_11);
            t = (ATerm) ATinsert(CheckATermList(not_null(n_75)), not_null(t_602));
          }
        }
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm k_17 (ATerm t)
  {
    ATerm l_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(m_56);
      }
    else
      {
        t = l_56;
        {
          ATerm n_56 = t;
          int o_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(o_56);
            }
          else
            {
              t = n_56;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm l_17 (ATerm t)
  {
    t = term_p_56;
    t = set_config_0_0(t);
    t = term_q_56;
    return(t);
  }
  ATerm m_17 (ATerm t)
  {
    t = term_r_56;
    return(t);
  }
  t = Option_3_0(k_17, l_17, m_17, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_76 != NULL) && (a_76 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_76 = ATgetFirst((ATermList) t);
      if(((b_76 != NULL) && (b_76 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(b_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_76)));
  return(t);
}
ATerm Cons_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,x_11 = NULL,y_11 = NULL,a_12 = NULL,b_12 = NULL;
  ATerm c_12 = NULL;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((x_11 != NULL) && (x_11 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        x_11 = ATgetFirst((ATermList) t);
      if(((y_11 != NULL) && (y_11 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        y_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm e_12 = NULL;
    if(((e_12 != NULL) && (e_12 != t)))
      _fail(t);
    else
      e_12 = t;
    t = SSLgetAnnotations(not_null(c_12));
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = not_null(e_12);
  }
  t = not_null(x_11);
  t = h_84(t);
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = not_null(y_11);
  t = i_84(t);
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  {
    ATerm d_12 = NULL;
    ATerm f_12 = NULL;
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_12)), not_null(a_12)), not_null(z_11));
    if(((d_12 != NULL) && (d_12 != t)))
      _fail(t);
    else
      d_12 = t;
    t = not_null(f_12);
    t = not_null(d_12);
  }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_82 != NULL) && (j_82 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_82 = ATgetArgument(t, 0);
      if(((k_82 != NULL) && (k_82 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_18, not_null(j_82), not_null(k_82));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm g_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  {
    ATerm n_17 (ATerm t)
    {
      t = term_s_56;
      t = k_130(t);
      return(t);
    }
    t = try_1_0(n_17, t);
    t = not_null(g_12);
  }
  {
    ATerm o_17 (ATerm t)
    {
      ATerm h_12 = NULL;
      if(((h_12 != NULL) && (h_12 != t)))
        _fail(t);
      else
        h_12 = t;
      {
        ATerm j_611 = NULL;
        ATerm i_12 = NULL;
        if(((i_12 != NULL) && (i_12 != t)))
          _fail(t);
        else
          i_12 = t;
        if(((j_611 != NULL) && (j_611 != t)))
          _fail(t);
        else
          j_611 = t;
        t = not_null(i_12);
        t = (ATerm) ATmakeAppl(sym__2, term_z_53, not_null(j_611));
        t = set_config_0_0(t);
        t = not_null(h_12);
      }
      {
        ATerm u_611 = NULL;
        ATerm j_12 = NULL;
        if(((j_12 != NULL) && (j_12 != t)))
          _fail(t);
        else
          j_12 = t;
        if(((u_611 != NULL) && (u_611 != t)))
          _fail(t);
        else
          u_611 = t;
        t = not_null(j_12);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_611));
      }
      return(t);
    }
    ATerm p_17 (ATerm t)
    {
      ATerm t_56 = t;
      int u_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_56 = t;
          int w_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(w_56);
            }
          else
            {
              t = v_56;
              t = k_130(t);
              t = Cons_2_0(_id, p_17, t);
            }
          ;
          LocalPopChoice(u_56);
        }
      else
        {
          t = t_56;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(o_17, p_17, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,k_12 = NULL;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  if(match_cons(t, sym__3))
    {
      if(((q_77 != NULL) && (q_77 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_77 = ATgetArgument(t, 0);
      if(((r_77 != NULL) && (r_77 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_77 = ATgetArgument(t, 1);
      if(((s_77 != NULL) && (s_77 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(q_77), not_null(r_77), not_null(s_77));
  t = not_null(k_12);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm c_76 = NULL;
  ATerm l_12 = NULL;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = term_x_56;
  t = table_put_0_0(t);
  t = not_null(l_12);
  {
    ATerm q_17 (ATerm t)
    {
      ATerm y_56 = t;
      int z_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_130(t);
          ;
          LocalPopChoice(z_56);
        }
      else
        {
          t = y_56;
          {
            ATerm a_57 = t;
            int b_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(b_57);
              }
            else
              {
                t = a_57;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_17, t);
    {
      ATerm r_17 (ATerm t)
      {
        ATerm c_57 = t;
        int d_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_12 = NULL;
            if(((m_12 != NULL) && (m_12 != t)))
              _fail(t);
            else
              m_12 = t;
            {
              ATerm e_57 = t;
              int f_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_54;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(f_57);
                }
              else
                {
                  t = e_57;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(m_12);
            }
            t = system_usage_0_0(t);
            t = term_n_28;
            t = exit_0_0(t);
            ;
            LocalPopChoice(d_57);
          }
        else
          {
            t = c_57;
            {
              ATerm g_57 = t;
              int m_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_12 = NULL;
                  if(((n_12 != NULL) && (n_12 != t)))
                    _fail(t);
                  else
                    n_12 = t;
                  t = term_a_56;
                  t = get_config_0_0(t);
                  t = not_null(n_12);
                  t = system_about_0_0(t);
                  t = term_n_28;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(m_57);
                }
              else
                {
                  t = g_57;
                  {
                    ATerm s_17 (ATerm t)
                    {
                      ATerm t_17 (ATerm t)
                      {
                        if(((c_76 != NULL) && (c_76 != t)))
                          _fail(t);
                        else
                          c_76 = t;
                        return(t);
                      }
                      t = Undefined_1_0(t_17, t);
                      return(t);
                    }
                    t = option_defined_1_0(s_17, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_76)), term_n_57));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_s_28;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(r_17, t);
      {
        ATerm o_12 = NULL;
        if(((o_12 != NULL) && (o_12 != t)))
          _fail(t);
        else
          o_12 = t;
        t = term_b_55;
        t = table_destroy_0_0(t);
        t = not_null(o_12);
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t)
{
  t = parse_options_1_0(v_127, t);
  t = store_options_0_0(t);
  t = x_127(t);
  {
    ATerm o_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_127, t);
        ;
        LocalPopChoice(p_57);
      }
    else
      {
        t = o_57;
        {
          ATerm q_57 = t;
          int r_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_127(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_57);
            }
          else
            {
              t = q_57;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    ATerm s_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_127(t);
        ;
        LocalPopChoice(t_57);
      }
    else
      {
        t = s_57;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm v_17 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(k_127, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_17, m_127, n_127, v_17, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm e_127 (ATerm), ATerm f_127 (ATerm), ATerm g_127 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm x_17 (ATerm t)
    {
      ATerm p_12 = NULL;
      if(((p_12 != NULL) && (p_12 != t)))
        _fail(t);
      else
        p_12 = t;
      {
        ATerm m_549 = NULL;
        ATerm q_12 = NULL;
        if(((q_12 != NULL) && (q_12 != t)))
          _fail(t);
        else
          q_12 = t;
        t = term_z_53;
        t = get_config_0_0(t);
        if(((m_549 != NULL) && (m_549 != t)))
          _fail(t);
        else
          m_549 = t;
        t = not_null(q_12);
        t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATempty, not_null(m_549)));
        t = printnl_0_0(t);
        t = not_null(p_12);
      }
      return(t);
    }
    t = if_verbose2_1_0(x_17, t);
    return(t);
  }
  t = iowrap_4_0(e_127, f_127, g_127, w_17, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm t)
{
  t = iowrap_3_0(c_127, d_127, default_usage_0_0, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  t = iowrap_2_0(compile_0_0, s2c_options_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = s2c_0_0(t);
  return(t);
}
