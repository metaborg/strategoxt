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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
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
ATerm term_z_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_d_72;
ATerm term_c_72;
ATerm term_b_72;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_e_71;
ATerm term_z_70;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_n_70;
ATerm term_i_70;
ATerm term_d_70;
ATerm term_w_69;
ATerm term_v_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_x_68;
ATerm term_w_68;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_p_68;
ATerm term_o_68;
ATerm term_n_68;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_k_68;
ATerm term_j_68;
ATerm term_i_68;
ATerm term_h_68;
ATerm term_e_68;
ATerm term_b_68;
ATerm term_h_67;
ATerm term_g_67;
ATerm term_q_66;
ATerm term_n_66;
ATerm term_k_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_u_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_p_65;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_y_64;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_f_64;
ATerm term_v_61;
ATerm term_r_61;
ATerm term_q_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_t_59;
ATerm term_r_59;
ATerm term_t_56;
ATerm term_g_56;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_m_55;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_p_53;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_h_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_t_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_o_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_y_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_l_42;
ATerm term_h_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_i_40;
ATerm term_d_36;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_d_15;
void init_constant_terms (void)
{
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_b_34);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_34);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Id_1, term_r_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_34, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Id_1, term_a_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_35);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_35, (ATerm) ATempty);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_35, term_v_35);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Id_1, term_q_42);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Id_1, term_x_42);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym_Id_1, term_e_43);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_Id_1, term_m_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_IntConst_1, term_o_43);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_Id_1, term_r_43);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Id_1, term_t_43);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym_Id_1, term_v_43);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Id_1, term_c_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_Id_1, term_f_44);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Id_1, term_h_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, term_i_44);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_Id_1, term_o_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Id_1, term_y_44);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Id_1, term_a_45);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym_Id_1, term_c_45);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Id_1, term_e_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_Id_1, term_g_45);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_Id_1, term_i_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_45);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_45, (ATerm) ATempty);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_45, term_v_35);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym_Id_1, term_o_45);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Id_1, term_q_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_45, (ATerm) ATempty);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_45, term_v_35);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Id_1, term_z_45);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym_Id_1, term_u_46);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Id_1, term_w_46);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_48);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_a_46);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_45);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Id_1, term_t_48);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_48, (ATerm) ATempty);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Equal_2, term_v_48, term_p_43);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Id_1, term_x_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_48, (ATerm) ATempty);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Stat_1, term_z_48);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, term_d_45);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_49);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Id_1, term_e_49);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_49, (ATerm) ATempty);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_49, term_p_43);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_49, (ATerm) ATempty);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_Id_1, term_r_49);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_s_49);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Id_1, term_u_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_49, (ATerm) ATempty);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Stat_1, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_Id_1, term_d_50);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_50);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_50, (ATerm) ATempty);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(sym_TypeName_2, term_h_50, term_v_35);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Id_1, term_k_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Id_1, term_m_50);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Id_1, term_o_50);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym_Id_1, term_t_50);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_50);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_51, (ATerm) ATempty);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_51, term_v_35);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Id_1, term_k_52);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_50, term_d_45);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(sym_Id_1, term_q_55);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym_Return_1, term_d_45);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_45, term_v_35);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_35, term_g_56);
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym_Id_1, term_r_59);
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym_Id_1, term_w_59);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_35, (ATerm) ATempty);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_60);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym_Id_1, term_p_60);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_61);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_61, (ATerm) ATempty);
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_64);
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_64, (ATerm) ATempty);
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(sym_Some_1, term_z_64);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_35, term_a_65);
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(sym_Id_1, term_c_65);
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_65, (ATerm) ATempty);
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(sym_Id_1, term_h_65);
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym_Id_1, term_j_65);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_65);
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym_CallT_3, term_p_65, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(sym_SDefT_4, term_n_65, (ATerm)ATempty, (ATerm)ATempty, term_q_65);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym_Op_2, term_v_65, (ATerm) ATempty);
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_65, term_j_44);
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(sym__2, term_w_65, term_y_65);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_42);
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(sym__3, term_q_33, term_u_70, term_d_15);
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm v_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm k_21 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm m_21 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm h_10 (ATerm q_4, ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm);
ATerm a_22 (ATerm);
ATerm e_22 (ATerm);
ATerm h_22 (ATerm);
ATerm j_22 (ATerm);
ATerm m_22 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm Real_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm Str_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm Int_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm r_22 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm w_22 (ATerm);
ATerm x_22 (ATerm);
ATerm y_22 (ATerm);
ATerm a_23 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm CacheConstant_0_0 (ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm MatchArg2_0_0 (ATerm);
ATerm MatchArg1_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm e_23 (ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm);
ATerm h_23 (ATerm);
ATerm i_23 (ATerm);
ATerm j_23 (ATerm);
ATerm o_23 (ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm i_113 (ATerm), ATerm);
ATerm k_32 (ATerm k_23, ATerm l_23, ATerm m_23, ATerm n_23, ATerm);
ATerm l_32 (ATerm c_24, ATerm d_24, ATerm e_24, ATerm);
ATerm m_32 (ATerm i_24, ATerm j_24, ATerm k_24, ATerm);
ATerm n_32 (ATerm o_24, ATerm p_24, ATerm q_24, ATerm r_24, ATerm);
ATerm o_32 (ATerm v_24, ATerm w_24, ATerm y_24, ATerm a_25, ATerm);
ATerm p_32 (ATerm g_25, ATerm h_25, ATerm i_25, ATerm k_25, ATerm);
ATerm q_32 (ATerm p_25, ATerm q_25, ATerm r_25, ATerm t_25, ATerm u_25, ATerm v_25, ATerm w_25, ATerm x_25, ATerm);
ATerm r_32 (ATerm s_26, ATerm t_26, ATerm u_26, ATerm v_26, ATerm w_26, ATerm x_26, ATerm);
ATerm s_32 (ATerm e_27, ATerm f_27, ATerm g_27, ATerm h_27, ATerm i_27, ATerm j_27, ATerm);
ATerm t_32 (ATerm t_27, ATerm u_27, ATerm v_27, ATerm);
ATerm l_24 (ATerm);
ATerm m_24 (ATerm);
ATerm s_24 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm o_25 (ATerm);
ATerm s_25 (ATerm);
ATerm z_25 (ATerm);
ATerm a_26 (ATerm);
ATerm b_26 (ATerm);
ATerm c_26 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm r_125 (ATerm), ATerm);
ATerm Var_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm e_37 (ATerm t_34, ATerm u_34, ATerm v_34, ATerm w_34, ATerm x_34, ATerm);
ATerm f_37 (ATerm q_35, ATerm r_35, ATerm s_35, ATerm t_35, ATerm);
ATerm g_37 (ATerm y_35, ATerm z_35, ATerm a_36, ATerm b_36, ATerm);
ATerm d_26 (ATerm);
ATerm f_26 (ATerm);
ATerm i_26 (ATerm);
ATerm p_26 (ATerm);
ATerm q_26 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm y_26 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm TracedBody_0_0 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm k_27 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm q_27 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm r_27 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm j_128 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm w_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm DeclareConstructor_0_0 (ATerm);
ATerm TranslateSig_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm h_28 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm t_28 (ATerm);
ATerm TranslateSpec_0_0 (ATerm);
ATerm downup2_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm);
ATerm assert_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm v_28 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm y_28 (ATerm);
ATerm d_29 (ATerm);
ATerm e_29 (ATerm);
ATerm f_29 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm k_29 (ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm u_29 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_133 (ATerm), ATerm);
ATerm z_55 (ATerm t_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_29 (ATerm);
ATerm x_29 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_119 (ATerm), ATerm);
ATerm _2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm);
ATerm a_30 (ATerm);
ATerm b_30 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm d_30 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_132 (ATerm), ATerm);
ATerm g_30 (ATerm);
ATerm h_30 (ATerm);
ATerm k_30 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_30 (ATerm);
ATerm m_30 (ATerm);
ATerm n_30 (ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm t_30 (ATerm);
ATerm u_30 (ATerm);
ATerm v_30 (ATerm);
ATerm x_30 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_30 (ATerm);
ATerm z_30 (ATerm);
ATerm b_31 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_31 (ATerm);
ATerm g_31 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_132 (ATerm), ATerm);
ATerm h_31 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_31 (ATerm);
ATerm need_help_1_0 (ATerm e_134 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_99 (ATerm), ATerm);
ATerm k_31 (ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm t_31 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_136 (ATerm), ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm z_31 (ATerm);
ATerm a_32 (ATerm);
ATerm parse_options_1_0 (ATerm u_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm);
ATerm e_32 (ATerm);
ATerm g_32 (ATerm);
ATerm i_32 (ATerm);
ATerm j_32 (ATerm);
ATerm b_33 (ATerm);
ATerm iowrap_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_0 = NULL,r_0 = NULL,q_0 = NULL,t_0 = NULL,u_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  o_0 = t;
  t = term_d_15;
  t = whoami_0_0(t);
  r_0 = t;
  u_0 = t;
  t = term_d_33;
  q_0 = t;
  t = u_0;
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_33), r_0), term_g_33);
  t_0 = t;
  t = SSL_printnl(q_0, t_0);
  z_0 = t;
  t = term_n_33;
  y_0 = t;
  t = SSL_exit(y_0);
  t = o_0;
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,e_1 = NULL;
        e_1 = t;
        t = term_q_33;
        c_1 = t;
        t = SSL_table_get(c_1, d_1);
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL,f_1 = NULL,i_1 = NULL;
              t = eval_config_0_0(t);
              v_0 = t;
              i_1 = t;
              t = term_q_33;
              f_1 = t;
              t = SSL_table_put(f_1, d_1, v_0);
              t = v_0;
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
            }
        }
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_33 = ATgetArgument(t, 0);
              ATerm w_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_1;
          {
            ATerm u_20 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = at_end_1_0(u_20, t);
          }
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm b_1 = NULL,k_1 = NULL,l_1 = NULL;
            l_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
            k_1 = t;
            t = SSL_explode_term(k_1);
            if(match_cons(t, sym__2))
              {
                ATerm x_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                b_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_1;
            t = concat_0_0(t);
          }
        }
      j_1 = t;
      n_1 = t;
      t = term_q_33;
      m_1 = t;
      t = SSL_table_put(m_1, d_1, j_1);
      t = (ATerm) ATmakeAppl(sym__3, term_q_33, d_1, j_1);
    }
  }
  return(t);
}
ATerm v_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm o_1 = NULL,u_1 = NULL,w_1 = NULL,x_1 = NULL;
  t = term_y_33;
  w_1 = t;
  t = term_d_33;
  o_1 = t;
  t = w_1;
  x_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_33), term_y_33);
  u_1 = t;
  t = SSL_printnl(o_1, u_1);
  t = term_c_34;
  t = assert_1_0(c_21, t);
  t = term_z_33;
  return(t);
}
ATerm b_21 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm d_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, term_g_34);
  t = assert_1_0(g_21, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, p_1);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm h_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, (ATerm) ATinsert(ATempty, q_1));
  t = post_extend_config_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Include_1, q_1);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_20, a_21, b_21, t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_21, e_21, f_21, t);
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            t = ArgOption_3_0(h_21, i_21, j_21, t);
          }
      }
    }
  return(t);
}
ATerm InitTermId_0_0 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
      r_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, t_1)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_1), term_q_34, r_1)));
  return(t);
}
ATerm k_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm v_1 = NULL;
  t = map_1_0(InitTermId_0_0, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, k_21, t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_34, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_35, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_z_34)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_1));
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm d_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
      {
        ATerm n_35 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_2), term_v_35)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL;
  ATerm w_35 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 = NULL,s_1 = NULL,a_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
      t = term_d_36;
      g_2 = t;
      t = term_d_36;
      a_2 = t;
      t = g_2;
      h_2 = t;
      t = (ATerm) ATempty;
      f_2 = t;
      t = SSL_table_get(a_2, f_2);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          {
            ATerm e_36 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = s_1;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm t_36 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_36) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          e_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_2;
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = w_35;
      t = (ATerm) ATempty;
    }
  y_1 = t;
  t = map_1_0(m_21, t);
  z_1 = t;
  t = y_1;
  t = InitTermIds_0_0(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, b_2));
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_36 = ATgetArgument(t, 0);
            ATerm x_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_1;
        {
          ATerm o_21 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, b_2);
            return(t);
          }
          t = at_end_1_0(o_21, t);
        }
        ;
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        {
          ATerm m_2 = NULL,i_2 = NULL,k_2 = NULL;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, b_2));
          i_2 = t;
          t = SSL_explode_term(i_2);
          if(match_cons(t, sym__2))
            {
              ATerm y_36 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_36) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_2;
          t = concat_0_0(t);
        }
      }
    c_2 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, c_2);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_114(t);
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = SRTS_one(j_2, t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm b_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 (ATerm t)
      {
        t = listbu1_1_0(t_2, t);
        return(t);
      }
      t = Cons_2_0(_id, r_21, t);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_2(t);
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
          }
      }
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = b_37;
      t = t_2(t);
    }
  return(t);
}
ATerm h_10 (ATerm q_4, ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
  {
    ATerm k_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 (ATerm t)
        {
          t = r_4;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm o_37 = ATgetArgument(t, 0);
            ATerm p_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_4;
        t = at_end_1_0(t_21, t);
        ;
        LocalPopChoice(n_37);
      }
    else
      {
        t = k_37;
        {
          ATerm z_2 = NULL,l_2 = NULL,n_2 = NULL;
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
          l_2 = t;
          t = SSL_explode_term(l_2);
          if(match_cons(t, sym__2))
            {
              ATerm q_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_2;
          t = concat_0_0(t);
        }
      }
    z_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
    {
      ATerm v_37 = t;
      int w_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_21 (ATerm t)
          {
            t = t_4;
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              ATerm x_37 = ATgetArgument(t, 0);
              ATerm y_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_4;
          t = at_end_1_0(v_21, t);
          ;
          LocalPopChoice(w_37);
        }
      else
        {
          t = v_37;
          {
            ATerm d_3 = NULL,o_2 = NULL,p_2 = NULL;
            p_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
            o_2 = t;
            t = SSL_explode_term(o_2);
            if(match_cons(t, sym__2))
              {
                ATerm z_37 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_37) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                d_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_3;
            t = concat_0_0(t);
          }
        }
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym_Compound_2, z_4, a_5);
    }
  }
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm o_7 = NULL,q_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_38 = ATgetFirst((ATermList) t);
      if(match_cons(a_38, sym_Compound_2))
        {
          ATerm b_38 = ATgetArgument(a_38, 0);
          if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
            _fail(t);
          o_7 = ATgetArgument(a_38, 1);
        }
      else
        _fail(t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, q_7);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 (ATerm t)
        {
          t = q_7;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm e_38 = ATgetArgument(t, 0);
            ATerm f_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_7;
        t = at_end_1_0(b_22, t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        {
          ATerm l_4 = NULL,s_2 = NULL,u_2 = NULL;
          u_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_7, q_7);
          s_2 = t;
          t = SSL_explode_term(s_2);
          if(match_cons(t, sym__2))
            {
              ATerm g_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_4;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_38 = ATgetFirst((ATermList) t);
      if(match_cons(h_38, sym_Compound_2))
        {
          ATerm i_38 = ATgetArgument(h_38, 0);
          if(((ATgetType(i_38) != AT_LIST) || !(ATisEmpty(i_38))))
            _fail(t);
          y_7 = ATgetArgument(h_38, 1);
        }
      else
        _fail(t);
      z_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 (ATerm t)
        {
          t = z_7;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm l_38 = ATgetArgument(t, 0);
            ATerm m_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_7;
        t = at_end_1_0(f_22, t);
        ;
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        {
          ATerm d_7 = NULL,x_2 = NULL,y_2 = NULL;
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
          x_2 = t;
          t = SSL_explode_term(x_2);
          if(match_cons(t, sym__2))
            {
              ATerm n_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_7;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_38 = ATgetFirst((ATermList) t);
      if(match_cons(o_38, sym_Compound_2))
        {
          ATerm p_38 = ATgetArgument(o_38, 0);
          if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
            _fail(t);
          l_8 = ATgetArgument(o_38, 1);
        }
      else
        _fail(t);
      m_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 (ATerm t)
        {
          t = m_8;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm s_38 = ATgetArgument(t, 0);
            ATerm t_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_8;
        t = at_end_1_0(i_22, t);
        ;
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        {
          ATerm i_7 = NULL,a_3 = NULL,b_3 = NULL;
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
          a_3 = t;
          t = SSL_explode_term(a_3);
          if(match_cons(t, sym__2))
            {
              ATerm u_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_7;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm j_22 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_38 = ATgetFirst((ATermList) t);
      if(match_cons(v_38, sym_Compound_2))
        {
          ATerm w_38 = ATgetArgument(v_38, 0);
          if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
            _fail(t);
          x_8 = ATgetArgument(v_38, 1);
        }
      else
        _fail(t);
      y_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_22 (ATerm t)
        {
          t = y_8;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm z_38 = ATgetArgument(t, 0);
            ATerm a_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_8;
        t = at_end_1_0(k_22, t);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        {
          ATerm d_8 = NULL,c_3 = NULL,e_3 = NULL;
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
          c_3 = t;
          t = SSL_explode_term(c_3);
          if(match_cons(t, sym__2))
            {
              ATerm b_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_39) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_8;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_39 = ATgetFirst((ATermList) t);
      if(match_cons(c_39, sym_Compound_2))
        {
          ATerm d_39 = ATgetArgument(c_39, 0);
          if(((ATgetType(d_39) != AT_LIST) || !(ATisEmpty(d_39))))
            _fail(t);
          r_9 = ATgetArgument(c_39, 1);
        }
      else
        _fail(t);
      s_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 (ATerm t)
        {
          t = s_9;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm g_39 = ATgetArgument(t, 0);
            ATerm h_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_9;
        t = at_end_1_0(o_22, t);
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        {
          ATerm i_8 = NULL,f_3 = NULL,g_3 = NULL;
          g_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
          f_3 = t;
          t = SSL_explode_term(f_3);
          if(match_cons(t, sym__2))
            {
              ATerm i_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_39) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_8;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  n_5 = t;
  if(match_cons(t, sym_IfElse_3))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
      i_5 = ATgetArgument(t, 2);
      t = i_5;
      if(match_cons(t, sym_Compound_2))
        {
          j_5 = ATgetArgument(t, 0);
          k_5 = ATgetArgument(t, 1);
          t = k_5;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_5;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      q_5 = ATgetArgument(t, 0);
                      u_5 = ATgetArgument(t, 1);
                      t = u_5;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = q_5;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              ATerm j_39 = t;
                              int k_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, o_5), i_5);
                                  ;
                                  LocalPopChoice(k_39);
                                }
                              else
                                {
                                  t = j_39;
                                  t = (ATerm) ATmakeAppl(sym_If_2, o_5, p_5);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, o_5, p_5);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, o_5, p_5);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, o_5, p_5);
                    }
                }
              else
                {
                  t = p_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      q_5 = ATgetArgument(t, 0);
                      u_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_5;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_5;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, o_5), i_5);
                }
            }
          else
            {
              t = p_5;
              if(match_cons(t, sym_Compound_2))
                {
                  q_5 = ATgetArgument(t, 0);
                  u_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_5;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_5;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, o_5), i_5);
            }
        }
      else
        {
          t = p_5;
          if(match_cons(t, sym_Compound_2))
            {
              q_5 = ATgetArgument(t, 0);
              u_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_5;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, o_5), i_5);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_5 = ATgetFirst((ATermList) t);
          p_5 = (ATerm) ATgetNext((ATermList) t);
          t = o_5;
          if(match_cons(t, sym_Compound_2))
            {
              l_5 = ATgetArgument(t, 0);
              m_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_5;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_5, p_5);
          {
            ATerm l_39 = t;
            int m_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_21 (ATerm t)
                {
                  t = p_5;
                  return(t);
                }
                if(match_cons(t, sym__2))
                  {
                    ATerm n_39 = ATgetArgument(t, 0);
                    ATerm o_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_5;
                t = at_end_1_0(y_21, t);
                ;
                LocalPopChoice(m_39);
              }
            else
              {
                t = l_39;
                {
                  ATerm s_3 = NULL,q_2 = NULL,r_2 = NULL;
                  r_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_5, p_5);
                  q_2 = t;
                  t = SSL_explode_term(q_2);
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_39 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) p_39) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      s_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_3;
                  t = concat_0_0(t);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              o_5 = ATgetArgument(t, 0);
              p_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_5 = ATgetFirst((ATermList) t);
              u_5 = (ATerm) ATgetNext((ATermList) t);
              t = u_5;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      s_5 = ATgetArgument(t, 0);
                      t_5 = ATgetArgument(t, 1);
                      {
                        ATerm q_39 = t;
                        int r_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_7 = NULL;
                            t = p_5;
                            t = listbu1_1_0(a_22, t);
                            n_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, n_7);
                            ;
                            LocalPopChoice(r_39);
                          }
                        else
                          {
                            t = q_39;
                            {
                              ATerm s_39 = t;
                              int t_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_6 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, o_5, s_5);
                                  {
                                    ATerm u_39 = t;
                                    int v_39 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm c_22 (ATerm t)
                                        {
                                          t = s_5;
                                          return(t);
                                        }
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm w_39 = ATgetArgument(t, 0);
                                            ATerm x_39 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_5;
                                        t = at_end_1_0(c_22, t);
                                        ;
                                        LocalPopChoice(v_39);
                                      }
                                    else
                                      {
                                        t = u_39;
                                        {
                                          ATerm y_6 = NULL,v_2 = NULL,w_2 = NULL;
                                          w_2 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, o_5, s_5);
                                          v_2 = t;
                                          t = SSL_explode_term(v_2);
                                          if(match_cons(t, sym__2))
                                            {
                                              ATerm y_39 = ATgetArgument(t, 0);
                                              if((ATgetSymbol((ATermAppl) y_39) != ATmakeSymbol("", 0, ATtrue)))
                                                _fail(t);
                                              y_6 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = y_6;
                                          t = concat_0_0(t);
                                        }
                                      }
                                    j_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, j_6, t_5);
                                  }
                                  ;
                                  LocalPopChoice(t_39);
                                }
                              else
                                {
                                  t = s_39;
                                  t = h_10(o_5, s_5, t_5, u_5, n_5, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_7 = NULL;
                      t = p_5;
                      t = listbu1_1_0(e_22, t);
                      x_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, x_7);
                    }
                }
              else
                {
                  t = q_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      s_5 = ATgetArgument(t, 0);
                      t_5 = ATgetArgument(t, 1);
                      {
                        ATerm z_39 = t;
                        int a_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_8 = NULL;
                            t = p_5;
                            t = listbu1_1_0(h_22, t);
                            k_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, k_8);
                            ;
                            LocalPopChoice(a_40);
                          }
                        else
                          {
                            t = z_39;
                            t = h_10(o_5, s_5, t_5, u_5, n_5, t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_8 = NULL;
                      t = p_5;
                      t = listbu1_1_0(j_22, t);
                      v_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, v_8);
                    }
                }
            }
          else
            {
              ATerm q_9 = NULL;
              t = p_5;
              t = listbu1_1_0(m_22, t);
              q_9 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, q_9);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm j_10 (ATerm t)
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        t = j_10(t);
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
      }
    return(t);
  }
  t = j_10(t);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,u_10 = NULL,d_11 = NULL,h_3 = NULL,i_3 = NULL;
  d_11 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      q_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_11);
  p_10 = t;
  t = q_10;
  t = v_92(t);
  u_10 = t;
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, u_10);
  h_3 = t;
  t = SSLsetAnnotations(h_3, p_10);
  return(t);
}
ATerm Real_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,o_11 = NULL,p_11 = NULL,j_3 = NULL,k_3 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Real_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  g_11 = t;
  t = h_11;
  t = b_92(t);
  o_11 = t;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, o_11);
  j_3 = t;
  t = SSLsetAnnotations(j_3, g_11);
  return(t);
}
ATerm Str_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,c_12 = NULL,l_3 = NULL,m_3 = NULL;
  c_12 = t;
  if(match_cons(t, sym_Str_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_12);
  v_11 = t;
  t = w_11;
  t = c_92(t);
  x_11 = t;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, x_11);
  l_3 = t;
  t = SSLsetAnnotations(l_3, v_11);
  return(t);
}
ATerm Int_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,n_3 = NULL,o_3 = NULL;
  l_12 = t;
  if(match_cons(t, sym_Int_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_12);
  f_12 = t;
  t = j_12;
  t = a_92(t);
  k_12 = t;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, k_12);
  n_3 = t;
  t = SSLsetAnnotations(n_3, f_12);
  return(t);
}
ATerm Anno_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,y_12 = NULL,a_13 = NULL,p_3 = NULL,q_3 = NULL;
  a_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_13);
  s_12 = t;
  t = t_12;
  t = k_92(t);
  v_12 = t;
  t = u_12;
  t = l_92(t);
  y_12 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, v_12, y_12);
  p_3 = t;
  t = SSLsetAnnotations(p_3, s_12);
  return(t);
}
ATerm r_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_22 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = Cons_2_0(_id, x_22, t);
  return(t);
}
ATerm x_22 (ATerm t)
{
  t = Cons_2_0(proper_list_0_0, y_22, t);
  return(t);
}
ATerm y_22 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm d_40 = t;
  if((PushChoice() == 0))
    {
      ATerm n_13 = NULL;
      n_13 = t;
      if(match_string(t, "Nil"))
        {
          t = n_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          t = n_13;
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_40;
    }
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(r_22, u_22, t);
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      {
        ATerm g_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Op_2_0(v_22, w_22, t);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = g_40;
            t = Op_2_0(a_23, _id, t);
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,r_3 = NULL,t_3 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_14);
  p_13 = t;
  t = x_13;
  t = e_92(t);
  z_13 = t;
  t = y_13;
  t = f_92(t);
  a_14 = t;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, z_13, a_14);
  r_3 = t;
  t = SSLsetAnnotations(r_3, p_13);
  return(t);
}
ATerm b_23 (ATerm t)
{
  t = map_1_0(Cache_0_0, t);
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm CacheConstant_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Op_2_0(_id, b_23, t);
        t = proper_list_0_0(t);
        ;
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm l_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Anno_2_0(Cache_0_0, Cache_0_0, t);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = l_40;
              {
                ATerm s_40 = t;
                int t_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1_0(_id, t);
                    ;
                    LocalPopChoice(t_40);
                  }
                else
                  {
                    t = s_40;
                    {
                      ATerm u_40 = t;
                      int v_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1_0(_id, t);
                          ;
                          LocalPopChoice(v_40);
                        }
                      else
                        {
                          t = u_40;
                          {
                            ATerm w_40 = t;
                            int x_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1_0(_id, t);
                                ;
                                LocalPopChoice(x_40);
                              }
                            else
                              {
                                t = w_40;
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
    g_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_41, g_14);
    t = conc_strings_0_0(t);
    h_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_14, (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, h_14));
    t = assert_1_0(c_23, t);
    t = h_14;
    {
      ATerm d_41 = t;
      int e_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_14 = NULL,q_8 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
          t = term_d_36;
          w_3 = t;
          t = term_d_36;
          u_3 = t;
          t = w_3;
          x_3 = t;
          t = (ATerm) ATempty;
          v_3 = t;
          t = SSL_table_get(u_3, v_3);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_8 = ATgetFirst((ATermList) t);
              {
                ATerm f_41 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = q_8;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm g_41 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_41) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              l_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_14;
          ;
          LocalPopChoice(e_41);
        }
      else
        {
          t = d_41;
          t = (ATerm) ATempty;
        }
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_41, (ATerm) ATinsert(CheckATermList(i_14), (ATerm) ATmakeAppl(sym__3, g_14, h_14, f_14))));
      t = assert_1_0(d_23, t);
      t = (ATerm) ATmakeAppl(sym_Id_1, h_14);
    }
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_9 = NULL,v_9 = NULL,y_3 = NULL,z_3 = NULL;
        t = term_i_40;
        z_3 = t;
        t = term_i_40;
        y_3 = t;
        t = SSL_table_get(y_3, v_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_9 = ATgetFirst((ATermList) t);
            {
              ATerm o_41 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_9;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_41) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            m_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, m_9);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        {
          ATerm d_10 = NULL,k_10 = NULL,a_4 = NULL,b_4 = NULL;
          t = term_i_40;
          b_4 = t;
          t = term_i_40;
          a_4 = t;
          t = SSL_table_get(a_4, v_14);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_10 = ATgetFirst((ATermList) t);
              {
                ATerm q_41 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = k_10;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_41 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_41) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_10;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm c_15 = NULL,x_10 = NULL;
        c_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              {
                ATerm x_41 = t;
                int y_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(y_41);
                  }
                else
                  {
                    t = x_41;
                  }
              }
            }
          x_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_15, x_10);
          {
            ATerm z_41 = t;
            int a_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CacheConstant_0_0(t);
                ;
                LocalPopChoice(a_42);
              }
            else
              {
                t = z_41;
                {
                  ATerm c_11 = NULL,c_4 = NULL,d_4 = NULL;
                  d_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_15, x_10);
                  c_4 = t;
                  t = SSL_explode_term(c_4);
                  if(match_cons(t, sym__2))
                    {
                      ATerm f_42 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) f_42) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm g_42 = ATgetArgument(t, 1);
                        if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
                          {
                            ATerm h_42 = ATgetFirst((ATermList) g_42);
                            ATerm i_42 = (ATerm) ATgetNext((ATermList) g_42);
                            if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
                              {
                                c_11 = ATgetFirst((ATermList) i_42);
                                {
                                  ATerm j_42 = (ATerm) ATgetNext((ATermList) i_42);
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
                  t = c_11;
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm MatchArg2_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_15), term_v_35), (ATerm) ATmakeAppl(sym_AssignInit_1, g_15)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, f_15, (ATerm) ATmakeAppl(sym_Id_1, h_15))));
  return(t);
}
ATerm MatchArg1_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,o_15 = NULL,e_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      i_15 = k_42;
      if(match_cons(k_42, sym_Var_1))
        {
          j_15 = ATgetArgument(k_42, 0);
        }
      else
        _fail(t);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  m_15 = t;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_15);
  e_4 = t;
  t = SSLsetAnnotations(e_4, m_15);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, o_15, k_15);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_23 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_17, h_17);
        ;
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
        t = SSL_addr(g_17, h_17);
      }
  }
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      v_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_42, (ATerm) ATinsert(ATinsert(ATempty, t_16), v_16)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          v_16 = ATgetArgument(t, 0);
          t_16 = ATgetArgument(t, 1);
          {
            ATerm d_17 = NULL,l_11 = NULL,q_11 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
            t = t_16;
            t = foldr_3_0(e_23, f_23, g_23, t);
            d_17 = t;
            t = term_t_42;
            i_4 = t;
            t = term_t_42;
            g_4 = t;
            t = i_4;
            j_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_16, d_17);
            h_4 = t;
            t = SSL_table_get(g_4, h_4);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_11 = ATgetFirst((ATermList) t);
                {
                  ATerm u_42 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = q_11;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm w_42 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_42) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                l_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_42, (ATerm) ATinsert(CheckATermList(t_16), (ATerm) ATmakeAppl(sym_Id_1, l_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              v_16 = ATgetArgument(t, 0);
              t = v_16;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  v_16 = ATgetArgument(t, 0);
                  {
                    ATerm a_43 = t;
                    int b_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(u_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_43 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) c_43) != ATmakeSymbol("unbound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm d_43 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_43) != AT_LIST) || !(ATisEmpty(d_43))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, v_16)));
                        ;
                        LocalPopChoice(b_43);
                      }
                    else
                      {
                        t = a_43;
                        {
                          ATerm g_43 = t;
                          int h_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(u_16);
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, v_16)));
                              ;
                              LocalPopChoice(h_43);
                            }
                          else
                            {
                              t = g_43;
                              t = SSLgetAnnotations(u_16);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm j_43 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("bound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm k_43 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(k_43) != AT_LIST) || !(ATisEmpty(k_43))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, v_16);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      v_16 = ATgetArgument(t, 0);
                      {
                        ATerm l_17 = NULL,g_13 = NULL,i_13 = NULL,j_13 = NULL,m_13 = NULL;
                        t = SSL_explode_string(v_16);
                        t = escape_chars_0_0(t);
                        g_13 = t;
                        t = SSL_implode_string(g_13);
                        i_13 = t;
                        t = SSL_explode_string(i_13);
                        m_13 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_l_43, m_13);
                        t = quote_chars_0_0(t);
                        j_13 = t;
                        t = SSL_implode_string(j_13);
                        l_17 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_43, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_43), term_p_43), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, l_17)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          v_16 = ATgetArgument(t, 0);
                          {
                            ATerm s_13 = NULL;
                            t = SSL_real_to_string(v_16);
                            s_13 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, s_13))));
                          }
                        }
                      else
                        {
                          ATerm k_14 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              v_16 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(v_16);
                          k_14 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, k_14))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,k_4 = NULL,m_4 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Id_1))
    {
      t_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_17);
  s_17 = t;
  t = t_17;
  t = e_102(t);
  u_17 = t;
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Id_1, u_17);
  k_4 = t;
  t = SSLsetAnnotations(k_4, s_17);
  return(t);
}
ATerm FunCall_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,n_4 = NULL,o_4 = NULL;
  g_18 = t;
  if(match_cons(t, sym_FunCall_2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_18);
  a_18 = t;
  t = b_18;
  t = g_105(t);
  e_18 = t;
  t = c_18;
  t = h_105(t);
  f_18 = t;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_FunCall_2, e_18, f_18);
  n_4 = t;
  t = SSLsetAnnotations(n_4, a_18);
  return(t);
}
ATerm h_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_23 (ATerm t)
{
  t = Id_1_0(o_23, t);
  return(t);
}
ATerm j_23 (ATerm t)
{
  t = Cons_2_0(_id, p_23, t);
  return(t);
}
ATerm o_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = Cons_2_0(_id, q_23, t);
  return(t);
}
ATerm q_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,z_19 = NULL,b_20 = NULL;
  x_19 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_19;
  if(match_string(t, "Cons"))
    {
      ATerm u_15 = NULL;
      t = b_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_19 = ATgetFirst((ATermList) t);
          u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_19 = ATgetFirst((ATermList) t);
          w_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_19;
      {
        ATerm x_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL,y_16 = NULL,a_17 = NULL,c_17 = NULL,f_17 = NULL,j_17 = NULL,w_17 = NULL,x_17 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                p_16 = ATgetArgument(t, 0);
                x_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_16;
            if(match_cons(t, sym_TypeName_2))
              {
                y_16 = ATgetArgument(t, 0);
                w_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_16;
            if(match_cons(t, sym_TypeSpec_3))
              {
                a_17 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
                j_17 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_17;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_17;
            if(match_cons(t, sym_TypeId_1))
              {
                f_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = f_17;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = j_17;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_17;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = x_17;
            {
              ATerm a_44 = t;
              int b_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Id_1_0(h_23, t);
                  ;
                  LocalPopChoice(b_44);
                }
              else
                {
                  t = a_44;
                  t = FunCall_2_0(i_23, j_23, t);
                }
            }
            ;
            LocalPopChoice(z_43);
          }
        else
          {
            t = x_43;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_44, (ATerm) ATinsert(ATempty, v_19));
          }
        u_15 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_44, (ATerm) ATinsert(ATinsert(ATempty, t_19), u_15)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = b_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_44;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm t_23 (ATerm t)
  {
    t = bottomup_1_0(j_113, t);
    return(t);
  }
  t = SRTS_all(t_23, t);
  t = j_113(t);
  return(t);
}
ATerm topdown_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  t = i_113(t);
  {
    ATerm f_24 (ATerm t)
    {
      t = topdown_1_0(i_113, t);
      return(t);
    }
    t = SRTS_all(f_24, t);
  }
  return(t);
}
ATerm k_32 (ATerm k_23, ATerm l_23, ATerm m_23, ATerm n_23, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,x_18 = NULL,a_19 = NULL,y_4 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  t = k_23;
  {
    ATerm k_44 = t;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        u_23 = t;
        if(match_string(t, "Nil"))
          {
            t = u_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = u_23;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_44;
      }
    t = (ATerm) ATmakeAppl(sym__2, l_23, term_l_42);
    {
      ATerm g_24 (ATerm t)
      {
        ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
        if(match_cons(t, sym__2))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(w_23);
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_44, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, x_23)), m_23)));
        {
          ATerm q_44 = t;
          int r_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchArg1_0_0(t);
              ;
              LocalPopChoice(r_44);
            }
          else
            {
              t = q_44;
              t = MatchArg2_0_0(t);
            }
          y_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_23, term_n_33);
          {
            ATerm s_44 = t;
            int u_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_4 = NULL,v_4 = NULL;
                v_4 = t;
                t = term_n_33;
                p_4 = t;
                t = SSL_addi(w_23, p_4);
                ;
                LocalPopChoice(u_44);
              }
            else
              {
                t = s_44;
                {
                  ATerm w_4 = NULL,x_4 = NULL;
                  x_4 = t;
                  t = term_n_33;
                  w_4 = t;
                  t = SSL_addr(w_23, w_4);
                }
              }
            z_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_23, z_23);
          }
        }
        return(t);
      }
      t = thread_map_1_0(g_24, t);
      if(match_cons(t, sym__2))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm v_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_23;
      t = foldr_3_0(l_24, m_24, s_24, t);
      s_23 = t;
      t = term_t_42;
      c_5 = t;
      t = term_t_42;
      y_4 = t;
      t = c_5;
      d_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_23, s_23);
      b_5 = t;
      t = SSL_table_get(y_4, b_5);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_19 = ATgetFirst((ATermList) t);
          {
            ATerm w_44 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = a_19;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm x_44 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_44) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          x_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_44, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_18)), m_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45))));
    }
  }
  return(t);
}
ATerm l_32 (ATerm c_24, ATerm d_24, ATerm e_24, ATerm t)
{
  ATerm h_24 = NULL;
  t = SSL_real_to_string(c_24);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, d_24)), term_h_45), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_45, d_24))), (ATerm) ATmakeAppl(sym_FloatConst_1, h_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45))));
  return(t);
}
ATerm m_32 (ATerm i_24, ATerm j_24, ATerm k_24, ATerm t)
{
  ATerm n_24 = NULL;
  t = SSL_int_to_string(i_24);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, j_24)), term_p_45), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_y_45, j_24))), (ATerm) ATmakeAppl(sym_IntConst_1, n_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45))));
  return(t);
}
ATerm n_32 (ATerm o_24, ATerm p_24, ATerm q_24, ATerm r_24, ATerm t)
{
  t = SSLgetAnnotations(o_24);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_24), term_a_46), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_24), q_24)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, q_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_24), term_q_34, q_24)));
  return(t);
}
ATerm o_32 (ATerm v_24, ATerm w_24, ATerm y_24, ATerm a_25, ATerm t)
{
  t = SSLgetAnnotations(v_24);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_46 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) b_46) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_46 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(c_46) != AT_LIST) || !(ATisEmpty(c_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, w_24), y_24), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, y_24))))));
  return(t);
}
ATerm p_32 (ATerm g_25, ATerm h_25, ATerm i_25, ATerm k_25, ATerm t)
{
  t = SSLgetAnnotations(g_25);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_46 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) d_46) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_46 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_46) != AT_LIST) || !(ATisEmpty(e_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_25), term_q_34, i_25));
  return(t);
}
ATerm q_32 (ATerm p_25, ATerm q_25, ATerm r_25, ATerm t_25, ATerm u_25, ATerm v_25, ATerm w_25, ATerm x_25, ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL,f_20 = NULL,i_20 = NULL,r_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  t = q_25;
  {
    ATerm f_46 = t;
    if((PushChoice() == 0))
      {
        ATerm k_26 = NULL;
        k_26 = t;
        if(match_string(t, "Nil"))
          {
            t = k_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = k_26;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_46;
      }
    t = (ATerm) ATmakeAppl(sym__2, t_25, term_l_42);
    {
      ATerm t_24 (ATerm t)
      {
        ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_46 = ATgetArgument(t, 0);
            if(match_cons(h_46, sym_Var_1))
              {
                l_26 = ATgetArgument(h_46, 0);
              }
            else
              _fail(t);
            m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(m_26);
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_26, term_n_33);
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_5 = NULL,f_5 = NULL;
              f_5 = t;
              t = term_n_33;
              e_5 = t;
              t = SSL_addi(m_26, e_5);
              ;
              LocalPopChoice(j_46);
            }
          else
            {
              t = i_46;
              {
                ATerm g_5 = NULL,h_5 = NULL;
                h_5 = t;
                t = term_n_33;
                g_5 = t;
                t = SSL_addr(m_26, g_5);
              }
            }
          o_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_26), term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_44, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_26)), (ATerm) ATmakeAppl(sym_Id_1, p_25))))), o_26);
        }
        return(t);
      }
      t = thread_map_1_0(t_24, t);
      if(match_cons(t, sym__2))
        {
          h_26 = ATgetArgument(t, 0);
          {
            ATerm k_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = term_t_42;
      w_5 = t;
      t = term_t_42;
      r_5 = t;
      t = w_5;
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
      v_5 = t;
      t = SSL_table_get(r_5, v_5);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_20 = ATgetFirst((ATermList) t);
          {
            ATerm m_46 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = i_20;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm n_46 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) n_46) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          f_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_26, (ATerm) ATinsert(ATempty, u_25));
      {
        ATerm o_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, u_25);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                ATerm r_46 = ATgetArgument(t, 0);
                ATerm s_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_26;
            t = at_end_1_0(u_24, t);
            ;
            LocalPopChoice(q_46);
          }
        else
          {
            t = o_46;
            {
              ATerm n_20 = NULL,y_5 = NULL,z_5 = NULL;
              z_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_26, (ATerm) ATinsert(ATempty, u_25));
              y_5 = t;
              t = SSL_explode_term(y_5);
              if(match_cons(t, sym__2))
                {
                  ATerm t_46 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_46) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  n_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_20;
              t = concat_0_0(t);
            }
          }
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_44, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_20)), (ATerm) ATmakeAppl(sym_Id_1, p_25))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, j_26), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, p_25), v_25, w_25))));
      }
    }
  }
  return(t);
}
ATerm r_32 (ATerm s_26, ATerm t_26, ATerm u_26, ATerm v_26, ATerm w_26, ATerm x_26, ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_real_to_string(t_26);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, d_27)), (ATerm) ATmakeAppl(sym_Id_1, s_26))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_26)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_26), v_26, w_26))));
  return(t);
}
ATerm s_32 (ATerm e_27, ATerm f_27, ATerm g_27, ATerm h_27, ATerm i_27, ATerm j_27, ATerm t)
{
  ATerm s_27 = NULL;
  t = SSL_int_to_string(f_27);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), (ATerm) ATmakeAppl(sym_Id_1, e_27))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_27)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_27), h_27, i_27))));
  return(t);
}
ATerm t_32 (ATerm t_27, ATerm u_27, ATerm v_27, ATerm t)
{
  t = u_27;
  {
    ATerm z_46 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_46;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_27)));
  }
  return(t);
}
ATerm l_24 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm m_24 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_47 = t;
    int c_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_24, b_24);
        ;
        LocalPopChoice(c_47);
      }
    else
      {
        t = b_47;
        t = SSL_addr(a_24, b_24);
      }
  }
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm t_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm e_47 = ATgetArgument(t, 0);
      if(match_cons(e_47, sym_SVar_1))
        {
          t_29 = ATgetArgument(e_47, 0);
        }
      else
        _fail(t);
      {
        ATerm g_47 = ATgetArgument(t, 1);
        if(((ATgetType(g_47) != AT_LIST) || !(ATisEmpty(g_47))))
          _fail(t);
      }
      {
        ATerm h_47 = ATgetArgument(t, 2);
        if(((ATgetType(h_47) != AT_LIST) || !(ATisEmpty(h_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, t_29);
  return(t);
}
ATerm c_25 (ATerm t)
{
  t = topdown_1_0(d_25, t);
  return(t);
}
ATerm d_25 (ATerm t)
{
  ATerm i_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(e_25, t);
      ;
      LocalPopChoice(k_47);
    }
  else
    {
      t = i_47;
    }
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      {
        ATerm o_47 = t;
        int r_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(r_47);
          }
        else
          {
            t = o_47;
          }
      }
    }
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm z_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_47 = ATgetArgument(t, 0);
      if(match_cons(s_47, sym_SVar_1))
        {
          z_20 = ATgetArgument(s_47, 0);
        }
      else
        _fail(t);
      {
        ATerm t_47 = ATgetArgument(t, 1);
        if(((ATgetType(t_47) != AT_LIST) || !(ATisEmpty(t_47))))
          _fail(t);
      }
      {
        ATerm u_47 = ATgetArgument(t, 2);
        if(((ATgetType(u_47) != AT_LIST) || !(ATisEmpty(u_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, z_20);
  return(t);
}
ATerm n_25 (ATerm t)
{
  t = topdown_1_0(o_25, t);
  return(t);
}
ATerm o_25 (ATerm t)
{
  ATerm v_47 = t;
  int w_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(s_25, t);
      ;
      LocalPopChoice(w_47);
    }
  else
    {
      t = v_47;
    }
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(y_47);
    }
  else
    {
      t = x_47;
      {
        ATerm z_47 = t;
        int b_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(b_48);
          }
        else
          {
            t = z_47;
          }
      }
    }
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_30, term_e_48);
  t = assert_1_0(a_26, t);
  t = r_30;
  return(t);
}
ATerm a_26 (ATerm t)
{
  t = term_f_48;
  return(t);
}
ATerm b_26 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_30), term_v_35), term_g_48);
  return(t);
}
ATerm c_26 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatchArg1_0_0(t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      t = MatchArg2_0_0(t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,g_29 = NULL;
  c_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_29 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, g_29, (ATerm) ATinsert(ATempty, a_29));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm l_29 = NULL;
            t = c_29;
            t = new_0_0(t);
            l_29 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_29), term_v_35))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_Id_1, l_29)))), g_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_29), term_q_34, term_d_45))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              g_29 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, g_29);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  g_29 = ATgetArgument(t, 0);
                  a_29 = ATgetArgument(t, 1);
                  w_28 = ATgetArgument(t, 2);
                  {
                    ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
                    t = g_29;
                    if(match_cons(t, sym_SVar_1))
                      {
                        b_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_29;
                    t = map_1_0(b_25, t);
                    q_29 = t;
                    t = w_28;
                    t = map_1_0(c_25, t);
                    r_29 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_45)), r_29), q_29);
                    t = concat_0_0(t);
                    s_29 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, b_29), s_29)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      g_29 = ATgetArgument(t, 0);
                      a_29 = ATgetArgument(t, 1);
                      w_28 = ATgetArgument(t, 2);
                      {
                        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
                        t = a_29;
                        t = map_1_0(m_25, t);
                        w_20 = t;
                        t = w_28;
                        t = map_1_0(n_25, t);
                        x_20 = t;
                        t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
                        {
                          ATerm k_48 = t;
                          int l_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_25 (ATerm t)
                              {
                                t = x_20;
                                return(t);
                              }
                              if(match_cons(t, sym__2))
                                {
                                  ATerm n_48 = ATgetArgument(t, 0);
                                  ATerm o_48 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = w_20;
                              t = at_end_1_0(y_25, t);
                              ;
                              LocalPopChoice(l_48);
                            }
                          else
                            {
                              t = k_48;
                              {
                                ATerm l_21 = NULL,a_6 = NULL,b_6 = NULL;
                                b_6 = t;
                                t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
                                a_6 = t;
                                t = SSL_explode_term(a_6);
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm p_48 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) p_48) != ATmakeSymbol("", 0, ATtrue)))
                                      _fail(t);
                                    l_21 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = l_21;
                                t = concat_0_0(t);
                              }
                            }
                          y_20 = t;
                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, g_29), y_20)));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          g_29 = ATgetArgument(t, 0);
                          {
                            ATerm v_29 = NULL;
                            t = c_29;
                            t = new_0_0(t);
                            v_29 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_29), term_v_35), term_s_48)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_w_48, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_49), term_a_49), g_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_Id_1, v_29))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              g_29 = ATgetArgument(t, 0);
                              a_29 = ATgetArgument(t, 1);
                              {
                                ATerm y_29 = NULL;
                                t = c_29;
                                t = new_0_0(t);
                                y_29 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_29), term_v_35), term_s_48)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_49, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_Id_1, y_29))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  g_29 = ATgetArgument(t, 0);
                                  a_29 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, g_29, a_29);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      g_29 = ATgetArgument(t, 0);
                                      a_29 = ATgetArgument(t, 1);
                                      w_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm e_30 = NULL,f_30 = NULL;
                                        t = c_29;
                                        t = new_0_0(t);
                                        e_30 = t;
                                        t = new_0_0(t);
                                        f_30 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_o_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_30), term_v_35), term_t_49)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_30), term_v_35), term_s_48)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_w_48, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_30))))), g_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, w_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_Id_1, e_30))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          g_29 = ATgetArgument(t, 0);
                                          a_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm i_30 = NULL,j_30 = NULL;
                                            t = c_29;
                                            t = new_0_0(t);
                                            i_30 = t;
                                            t = new_0_0(t);
                                            j_30 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_30), term_v_35), term_t_49)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_30), term_v_35), term_s_48)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_w_48, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_30))))), term_z_49), g_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, (ATerm) ATmakeAppl(sym_Id_1, i_30))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              g_29 = ATgetArgument(t, 0);
                                              a_29 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_29, a_29);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  g_29 = ATgetArgument(t, 0);
                                                  a_29 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_29), g_29));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      g_29 = ATgetArgument(t, 0);
                                                      a_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm q_30 = NULL;
                                                        t = g_29;
                                                        t = map_1_0(z_25, t);
                                                        t = g_29;
                                                        t = map_1_0(b_26, t);
                                                        q_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, q_30)), (ATerm) ATinsert(ATempty, a_29));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_a_50;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  g_29 = ATgetArgument(t, 0);
                                                                  a_29 = ATgetArgument(t, 1);
                                                                  t = g_29;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      b_29 = ATgetArgument(t, 0);
                                                                      f_28 = ATgetArgument(t, 1);
                                                                      t = f_28;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          b_28 = ATgetFirst((ATermList) t);
                                                                          c_28 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = c_28;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              d_28 = ATgetFirst((ATermList) t);
                                                                              e_28 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = e_28;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = b_29;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm b_50 = t;
                                                                                      int c_50 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm w_30 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_28, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_50, a_29)))))), (ATerm) ATmakeAppl(sym__2, b_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_50, a_29)))));
                                                                                          t = map_1_0(c_26, t);
                                                                                          w_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, a_29)), term_n_50), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_50, (ATerm) ATinsert(ATempty, a_29)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_30), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45))));
                                                                                          ;
                                                                                          LocalPopChoice(c_50);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_50;
                                                                                          t = k_32(b_29, f_28, a_29, c_29, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_32(b_29, f_28, a_29, c_29, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_29;
                                                                                  t = k_32(b_29, f_28, a_29, c_29, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_29;
                                                                              t = k_32(b_29, f_28, a_29, c_29, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = b_29;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm r_50 = t;
                                                                                  int s_50 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, a_29)), term_n_50), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_50, (ATerm) ATinsert(ATempty, a_29)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45))));
                                                                                      ;
                                                                                      LocalPopChoice(s_50);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_50;
                                                                                      t = k_32(b_29, f_28, a_29, c_29, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = k_32(b_29, f_28, a_29, c_29, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_29;
                                                                              t = k_32(b_29, f_28, a_29, c_29, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          b_29 = ATgetArgument(t, 0);
                                                                          t = l_32(b_29, a_29, c_29, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              b_29 = ATgetArgument(t, 0);
                                                                              t = m_32(b_29, a_29, c_29, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  b_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm a_31 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,s_21 = NULL;
                                                                                    t = SSL_explode_string(b_29);
                                                                                    t = escape_chars_0_0(t);
                                                                                    n_21 = t;
                                                                                    t = SSL_implode_string(n_21);
                                                                                    p_21 = t;
                                                                                    t = SSL_explode_string(p_21);
                                                                                    s_21 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_l_43, s_21);
                                                                                    t = quote_chars_0_0(t);
                                                                                    q_21 = t;
                                                                                    t = SSL_implode_string(q_21);
                                                                                    a_31 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_51, a_29))), (ATerm) ATmakeAppl(sym_FunCall_2, term_n_43, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_43), term_p_43), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, a_31))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, term_d_45))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      b_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm i_51 = t;
                                                                                        int l_51 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = n_32(g_29, b_29, a_29, c_29, t);
                                                                                            ;
                                                                                            LocalPopChoice(l_51);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_51;
                                                                                            {
                                                                                              ATerm m_51 = t;
                                                                                              int p_51 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = o_32(g_29, b_29, a_29, c_29, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(p_51);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = m_51;
                                                                                                  t = p_32(g_29, b_29, a_29, c_29, t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          b_29 = ATgetArgument(t, 0);
                                                                                          f_28 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, f_28, a_29)), (ATerm) ATmakeAppl(sym_Match_2, b_29, a_29)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm q_51 = t;
                                                                                          int s_51 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm y_51 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(s_51);
                                                                                              t = term_a_50;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = q_51;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_a_50;
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
                                                                  if(match_cons(t, sym_Match_1))
                                                                    {
                                                                      g_29 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, g_29, term_d_45);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          g_29 = ATgetArgument(t, 0);
                                                                          a_29 = ATgetArgument(t, 1);
                                                                          w_28 = ATgetArgument(t, 2);
                                                                          t = g_29;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              b_29 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = a_29;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              z_28 = ATgetFirst((ATermList) t);
                                                                              s_28 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = z_28;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  o_28 = ATgetArgument(t, 0);
                                                                                  q_28 = ATgetArgument(t, 1);
                                                                                  r_28 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = o_28;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  p_28 = ATgetArgument(t, 0);
                                                                                  n_28 = ATgetArgument(t, 1);
                                                                                  t = q_28;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      g_28 = ATgetFirst((ATermList) t);
                                                                                      j_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = j_28;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          k_28 = ATgetFirst((ATermList) t);
                                                                                          m_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = m_28;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = k_28;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  l_28 = ATgetArgument(t, 0);
                                                                                                  t = g_28;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      i_28 = ATgetArgument(t, 0);
                                                                                                      t = n_28;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = p_28;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm z_51 = t;
                                                                                                              int b_52 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_29))), term_n_50), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_29))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_28), term_q_34, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_50, (ATerm) ATmakeAppl(sym_Id_1, b_29)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_28), term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_50, (ATerm) ATmakeAppl(sym_Id_1, b_29)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_29), s_28, w_28))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(b_52);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_51;
                                                                                                                  t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = p_28;
                                                                                                          t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = p_28;
                                                                                                      t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = p_28;
                                                                                                  t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = p_28;
                                                                                              t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_28;
                                                                                          t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = n_28;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = p_28;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm e_52 = t;
                                                                                                  int j_52 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_29))), term_n_50), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_50, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_29)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_28), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_29), s_28, w_28))));
                                                                                                      ;
                                                                                                      LocalPopChoice(j_52);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_52;
                                                                                                      t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = p_28;
                                                                                              t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_28;
                                                                                          t = q_32(b_29, p_28, n_28, q_28, r_28, s_28, w_28, c_29, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      p_28 = ATgetArgument(t, 0);
                                                                                      t = r_32(b_29, p_28, r_28, s_28, w_28, c_29, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          p_28 = ATgetArgument(t, 0);
                                                                                          t = s_32(b_29, p_28, r_28, s_28, w_28, c_29, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm v_31 = NULL,u_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              p_28 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(p_28);
                                                                                          t = escape_chars_0_0(t);
                                                                                          u_21 = t;
                                                                                          t = SSL_implode_string(u_21);
                                                                                          w_21 = t;
                                                                                          t = SSL_explode_string(w_21);
                                                                                          z_21 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_l_43, z_21);
                                                                                          t = quote_chars_0_0(t);
                                                                                          x_21 = t;
                                                                                          t = SSL_implode_string(x_21);
                                                                                          v_31 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_52, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, v_31))), (ATerm) ATmakeAppl(sym_Id_1, b_29))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_28)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_29), s_28, w_28))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = w_28;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              g_29 = ATgetArgument(t, 0);
                                                                              a_29 = ATgetArgument(t, 1);
                                                                              w_28 = ATgetArgument(t, 2);
                                                                              x_28 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, g_29), (ATerm) ATmakeAppl(sym_Case_3, a_29, w_28, x_28));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  g_29 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, g_29));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      g_29 = ATgetArgument(t, 0);
                                                                                      a_29 = ATgetArgument(t, 1);
                                                                                      t = g_29;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          b_29 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = a_29;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          z_28 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm m_52 = t;
                                                                                            int n_52 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, b_29), term_a_46), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, b_29), (ATerm) ATmakeAppl(sym_Id_1, z_28))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_45, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_28)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_29), term_q_34, (ATerm) ATmakeAppl(sym_Id_1, z_28))));
                                                                                                ;
                                                                                                LocalPopChoice(n_52);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_52;
                                                                                                t = t_32(b_29, a_29, c_29, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_32(b_29, a_29, c_29, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          g_29 = ATgetArgument(t, 0);
                                                                                          t = g_29;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              b_29 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_29), term_q_34, term_d_45));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm h_32 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              g_29 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = g_29;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          h_32 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_45, term_q_34, h_32));
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
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_52 = ATgetArgument(t, 0);
      if(((ATgetType(o_52) == AT_LIST) && !(ATisEmpty(o_52))))
        {
          u_32 = ATgetFirst((ATermList) o_52);
          v_32 = (ATerm) ATgetNext((ATermList) o_52);
        }
      else
        _fail(t);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_32, w_32);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_32, y_32);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_33), x_32), z_32);
  return(t);
}
ATerm thread_map_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  ATerm h_33 (ATerm t)
  {
    ATerm p_52 = t;
    int q_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(r_125, h_33, t);
        ;
        LocalPopChoice(q_52);
      }
    else
      {
        t = p_52;
        {
          ATerm e_33 = NULL,f_33 = NULL;
          if(match_cons(t, sym__2))
            {
              e_33 = ATgetArgument(t, 0);
              f_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_33);
        }
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm Var_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,c_6 = NULL,d_6 = NULL;
  l_33 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_33);
  i_33 = t;
  t = j_33;
  t = y_91(t);
  k_33 = t;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_33);
  c_6 = t;
  t = SSLsetAnnotations(c_6, i_33);
  return(t);
}
ATerm e_37 (ATerm t_34, ATerm u_34, ATerm v_34, ATerm w_34, ATerm x_34, ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,f_35 = NULL,d_22 = NULL,g_22 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  t = t_34;
  {
    ATerm s_52 = t;
    if((PushChoice() == 0))
      {
        ATerm g_35 = NULL;
        g_35 = t;
        if(match_string(t, "Nil"))
          {
            t = g_35;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = g_35;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_52;
      }
    t = u_34;
    t = map_1_0(d_26, t);
    t = (ATerm) ATmakeAppl(sym__2, u_34, term_l_42);
    t = thread_map_1_0(f_26, t);
    if(match_cons(t, sym__2))
      {
        c_35 = ATgetArgument(t, 0);
        {
          ATerm t_52 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = u_34;
    t = foldr_3_0(i_26, p_26, q_26, t);
    d_35 = t;
    t = term_t_42;
    l_6 = t;
    t = term_t_42;
    i_6 = t;
    t = l_6;
    m_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_34, d_35);
    k_6 = t;
    t = SSL_table_get(i_6, k_6);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_22 = ATgetFirst((ATermList) t);
        {
          ATerm u_52 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_22;
    if(match_cons(t, sym_Defined_2))
      {
        ATerm v_52 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) v_52) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        d_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, c_35, (ATerm) ATinsert(ATempty, v_34));
    {
      ATerm y_52 = t;
      int z_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_26 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, v_34);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              ATerm a_53 = ATgetArgument(t, 0);
              ATerm e_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_35;
          t = at_end_1_0(r_26, t);
          ;
          LocalPopChoice(z_52);
        }
      else
        {
          t = y_52;
          {
            ATerm l_22 = NULL,n_6 = NULL,o_6 = NULL;
            o_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_35, (ATerm) ATinsert(ATempty, v_34));
            n_6 = t;
            t = SSL_explode_term(n_6);
            if(match_cons(t, sym__2))
              {
                ATerm f_53 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_53) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                l_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_22;
            t = concat_0_0(t);
          }
        }
      f_35 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_44, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_22)), term_d_45)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, f_35), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_34)));
    }
  }
  return(t);
}
ATerm f_37 (ATerm q_35, ATerm r_35, ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm x_35 = NULL;
  t = SSL_real_to_string(q_35);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, x_35)), term_d_45)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_35)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_35)));
  return(t);
}
ATerm g_37 (ATerm y_35, ATerm z_35, ATerm a_36, ATerm b_36, ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_int_to_string(y_35);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, f_36)), term_d_45)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_35)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_36)));
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm f_26 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_53 = ATgetArgument(t, 0);
      if(match_cons(h_53, sym_Var_1))
        {
          h_35 = ATgetArgument(h_53, 0);
        }
      else
        _fail(t);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(i_35);
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_35, term_n_33);
  {
    ATerm i_53 = t;
    int j_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL,f_6 = NULL;
        f_6 = t;
        t = term_n_33;
        e_6 = t;
        t = SSL_addi(i_35, e_6);
        ;
        LocalPopChoice(j_53);
      }
    else
      {
        t = i_53;
        {
          ATerm g_6 = NULL,h_6 = NULL;
          h_6 = t;
          t = term_n_33;
          g_6 = t;
          t = SSL_addr(i_35, g_6);
        }
      }
    k_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_35), term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_44, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, j_35)), term_d_45)))), k_35);
  }
  return(t);
}
ATerm i_26 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm p_26 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym__2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_35, m_35);
        ;
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        t = SSL_addr(l_35, m_35);
      }
  }
  return(t);
}
ATerm q_26 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      o_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      s_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_36;
  if(match_cons(t, sym_Match_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_36;
  if(match_cons(t, sym_Op_2))
    {
      q_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
      t = m_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_36 = ATgetFirst((ATermList) t);
          i_36 = (ATerm) ATgetNext((ATermList) t);
          t = i_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_36 = ATgetFirst((ATermList) t);
              l_36 = (ATerm) ATgetNext((ATermList) t);
              t = l_36;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = j_36;
                  if(match_cons(t, sym_Var_1))
                    {
                      k_36 = ATgetArgument(t, 0);
                      t = g_36;
                      if(match_cons(t, sym_Var_1))
                        {
                          h_36 = ATgetArgument(t, 0);
                          t = q_36;
                          if(match_string(t, "Cons"))
                            {
                              ATerm n_53 = t;
                              int o_53 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, term_d_45)), term_n_50), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_50, (ATerm) ATinsert(ATempty, term_d_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_36), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_36), term_q_34, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_42, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_50, (ATerm) ATinsert(ATempty, term_p_53)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_36), term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_50, (ATerm) ATinsert(ATempty, term_p_53)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_36)));
                                  ;
                                  LocalPopChoice(o_53);
                                }
                              else
                                {
                                  t = n_53;
                                  t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                                }
                            }
                          else
                            {
                              t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                            }
                        }
                      else
                        {
                          t = q_36;
                          t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                        }
                    }
                  else
                    {
                      t = q_36;
                      t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                    }
                }
              else
                {
                  t = q_36;
                  t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                }
            }
          else
            {
              t = q_36;
              t = e_37(q_36, m_36, r_36, s_36, n_36, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = q_36;
              if(match_string(t, "Nil"))
                {
                  ATerm q_53 = t;
                  int r_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_45, (ATerm) ATinsert(ATempty, term_d_45)), term_n_50), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_50, (ATerm) ATinsert(ATempty, term_d_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_36)));
                      ;
                      LocalPopChoice(r_53);
                    }
                  else
                    {
                      t = q_53;
                      t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                    }
                }
              else
                {
                  t = e_37(q_36, m_36, r_36, s_36, n_36, t);
                }
            }
          else
            {
              t = q_36;
              t = e_37(q_36, m_36, r_36, s_36, n_36, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          q_36 = ATgetArgument(t, 0);
          t = f_37(q_36, r_36, s_36, n_36, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              q_36 = ATgetArgument(t, 0);
              t = g_37(q_36, r_36, s_36, n_36, t);
            }
          else
            {
              ATerm c_37 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  q_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(q_36);
              t = escape_chars_0_0(t);
              n_22 = t;
              t = SSL_implode_string(n_22);
              p_22 = t;
              t = SSL_explode_string(p_22);
              s_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_43, s_22);
              t = quote_chars_0_0(t);
              q_22 = t;
              t = SSL_implode_string(q_22);
              c_37 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_52, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, c_37))), term_d_45)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_36)));
            }
        }
    }
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm s_53 = t;
  int t_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_53 = t;
      int v_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_37 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_54 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_54) != AT_INT) || (ATgetInt((ATermInt) a_54) != 34)))
                _fail(t);
              j_37 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_37), term_l_43), term_b_54);
          ;
          LocalPopChoice(v_53);
        }
      else
        {
          t = u_53;
          {
            ATerm l_37 = NULL,m_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_37 = ATgetFirst((ATermList) t);
                m_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_37;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_37), term_b_54), term_b_54);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_37), term_c_54), term_b_54);
              }
          }
        }
      t = Cons_2_0(_id, y_26, t);
      ;
      LocalPopChoice(t_53);
    }
  else
    {
      t = s_53;
      {
        ATerm d_54 = t;
        int h_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(h_54);
          }
        else
          {
            t = d_54;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm TracedBody_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,t_22 = NULL,z_22 = NULL,x_24 = NULL,z_24 = NULL,f_25 = NULL,j_25 = NULL,l_25 = NULL,e_26 = NULL,g_26 = NULL,m_27 = NULL;
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_55), r_37);
  t = concat_strings_0_0(t);
  t_22 = t;
  t = SSL_explode_string(t_22);
  t = escape_chars_0_0(t);
  z_22 = t;
  t = SSL_implode_string(z_22);
  x_24 = t;
  t = SSL_explode_string(x_24);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_43, f_25);
  t = quote_chars_0_0(t);
  z_24 = t;
  t = SSL_implode_string(z_24);
  t_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_55), r_37);
  t = concat_strings_0_0(t);
  j_25 = t;
  t = SSL_explode_string(j_25);
  t = escape_chars_0_0(t);
  l_25 = t;
  t = SSL_implode_string(l_25);
  e_26 = t;
  t = SSL_explode_string(e_26);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_43, m_27);
  t = quote_chars_0_0(t);
  g_26 = t;
  t = SSL_implode_string(g_26);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_55), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_55, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_45), (ATerm) ATmakeAppl(sym_StringLit_1, u_37)), term_r_55)))), s_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_55, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_45), (ATerm) ATmakeAppl(sym_StringLit_1, t_37)), term_r_55)))));
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm w_41 = NULL;
  w_41 = t;
  {
    ATerm u_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_43 = NULL,r_6 = NULL,s_6 = NULL;
        t = term_i_34;
        s_6 = t;
        t = term_i_34;
        r_6 = t;
        t = SSL_table_get(r_6, w_41);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_43 = ATgetFirst((ATermList) t);
            {
              ATerm y_55 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = q_43;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_56) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = w_41;
        ;
        LocalPopChoice(v_55);
      }
    else
      {
        t = u_55;
        {
          ATerm y_43 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
          t = term_e_34;
          v_6 = t;
          t = term_e_34;
          t_6 = t;
          t = v_6;
          w_6 = t;
          t = (ATerm) ATempty;
          u_6 = t;
          t = SSL_table_get(t_6, u_6);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_43 = ATgetFirst((ATermList) t);
              {
                ATerm e_56 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = y_43;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_56) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = w_41;
        }
      }
  }
  return(t);
}
ATerm b_27 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_56);
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL,a_7 = NULL,b_7 = NULL;
        t = term_i_34;
        b_7 = t;
        t = term_i_34;
        a_7 = t;
        t = SSL_table_get(a_7, t_44);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_45 = ATgetFirst((ATermList) t);
            {
              ATerm w_56 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = x_45;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_56) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = t_44;
        ;
        LocalPopChoice(v_56);
      }
    else
      {
        t = u_56;
        {
          ATerm g_46 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
          t = term_e_34;
          f_7 = t;
          t = term_e_34;
          c_7 = t;
          t = f_7;
          g_7 = t;
          t = (ATerm) ATempty;
          e_7 = t;
          t = SSL_table_get(c_7, e_7);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_46 = ATgetFirst((ATermList) t);
              {
                ATerm z_56 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = g_46;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_57 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_57) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = t_44;
        }
      }
  }
  return(t);
}
ATerm k_27 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_56);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  n_40 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_40 = ATgetArgument(t, 0);
      p_40 = ATgetArgument(t, 1);
      q_40 = ATgetArgument(t, 2);
      m_40 = ATgetArgument(t, 3);
      {
        ATerm y_40 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
        t = p_40;
        t = map_1_0(TranslateVarDec_0_0, t);
        y_40 = t;
        t = q_40;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_40, k_41);
        {
          ATerm d_57 = t;
          int e_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm f_57 = ATgetArgument(t, 0);
                  ATerm g_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_40;
              {
                ATerm z_26 (ATerm t)
                {
                  t = k_41;
                  return(t);
                }
                t = at_end_1_0(z_26, t);
              }
              ;
              LocalPopChoice(e_57);
            }
          else
            {
              t = d_57;
              {
                ATerm z_42 = NULL,p_6 = NULL,q_6 = NULL;
                q_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_40, k_41);
                p_6 = t;
                t = SSL_explode_term(p_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_57 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_57) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    z_42 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_42;
                t = concat_0_0(t);
              }
            }
          l_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_40, m_40);
          {
            ATerm p_57 = t;
            int u_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(a_27, _id, t);
                t = TracedBody_0_0(t);
                ;
                LocalPopChoice(u_57);
              }
            else
              {
                t = p_57;
                if(match_cons(t, sym__2))
                  {
                    ATerm x_57 = ATgetArgument(t, 0);
                    ATerm y_57 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_55), m_40));
              }
            m_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_41, (ATerm) ATinsert(ATempty, term_t_56));
            {
              ATerm z_57 = t;
              int a_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm b_58 = ATgetArgument(t, 0);
                      ATerm c_58 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_41;
                  t = at_end_1_0(b_27, t);
                  ;
                  LocalPopChoice(a_58);
                }
              else
                {
                  t = z_57;
                  {
                    ATerm d_44 = NULL,x_6 = NULL,z_6 = NULL;
                    z_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_41, (ATerm) ATinsert(ATempty, term_t_56));
                    x_6 = t;
                    t = SSL_explode_term(x_6);
                    if(match_cons(t, sym__2))
                      {
                        ATerm d_58 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_58) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        d_44 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = d_44;
                    t = concat_0_0(t);
                  }
                }
              n_41 = t;
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_35, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_40), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, n_41))), m_41);
            }
          }
        }
      }
    }
  else
    {
      ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          o_40 = ATgetArgument(t, 0);
          p_40 = ATgetArgument(t, 1);
          q_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_40;
      t = map_1_0(TranslateVarDec_0_0, t);
      l_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_40, q_40);
      {
        ATerm e_58 = t;
        int f_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(c_27, _id, t);
            t = TracedBody_0_0(t);
            ;
            LocalPopChoice(f_58);
          }
        else
          {
            t = e_58;
            if(match_cons(t, sym__2))
              {
                ATerm h_58 = ATgetArgument(t, 0);
                ATerm i_58 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_55), q_40));
          }
        m_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_44, (ATerm) ATinsert(ATempty, term_t_56));
        {
          ATerm j_58 = t;
          int n_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm o_58 = ATgetArgument(t, 0);
                  ATerm p_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_44;
              t = at_end_1_0(k_27, t);
              ;
              LocalPopChoice(n_58);
            }
          else
            {
              t = j_58;
              {
                ATerm l_46 = NULL,h_7 = NULL,j_7 = NULL;
                j_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_44, (ATerm) ATinsert(ATempty, term_t_56));
                h_7 = t;
                t = SSL_explode_term(h_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_58 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_58) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    l_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_46;
                t = concat_0_0(t);
              }
            }
          n_44 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_35, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_40), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, n_44))), m_44);
        }
      }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  if(match_cons(t, sym__2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_41), z_40), (ATerm) ATinsert(ATempty, z_40));
  {
    ATerm t_58 = t;
    int u_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_58 = ATgetArgument(t, 0);
            ATerm x_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_41), z_40);
        {
          ATerm l_27 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, z_40);
            return(t);
          }
          t = at_end_1_0(l_27, t);
        }
        ;
        LocalPopChoice(u_58);
      }
    else
      {
        t = t_58;
        {
          ATerm p_46 = NULL,k_7 = NULL,l_7 = NULL;
          l_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_41), z_40), (ATerm) ATinsert(ATempty, z_40));
          k_7 = t;
          t = SSL_explode_term(k_7);
          if(match_cons(t, sym__2))
            {
              ATerm y_58 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_58) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_46;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm n_27 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm v_42 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_42, i_43);
        ;
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        t = SSL_addr(v_42, i_43);
      }
  }
  return(t);
}
ATerm p_27 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,m_42 = NULL,r_42 = NULL,x_46 = NULL,a_47 = NULL,d_47 = NULL,f_47 = NULL,m_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      b_42 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_42;
  {
    ATerm b_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            r_42 = ATgetArgument(t, 0);
            {
              ATerm h_59 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_59);
        t = r_42;
        t = foldr_3_0(n_27, o_27, p_27, t);
      }
    else
      {
        t = b_59;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm l_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_l_42;
      }
    d_42 = t;
    t = SSL_int_to_string(d_42);
    e_42 = t;
    t = term_t_42;
    r_7 = t;
    t = term_t_42;
    m_7 = t;
    t = r_7;
    s_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_42, d_42);
    p_7 = t;
    t = SSL_table_get(m_7, p_7);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_47 = ATgetFirst((ATermList) t);
        {
          ATerm m_59 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_47;
    if(match_cons(t, sym_Defined_2))
      {
        ATerm q_59 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_59) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        x_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(b_42);
    f_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_43, f_47);
    t = quote_chars_0_0(t);
    d_47 = t;
    t = SSL_implode_string(d_47);
    m_42 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_46), term_q_34, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_43, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_59), (ATerm) ATmakeAppl(sym_IntConst_1, e_42)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_42)))))));
  }
  return(t);
}
ATerm q_27 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_60);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t = map_1_0(InitConstructor_0_0, t);
  t = concat_0_0(t);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_45, (ATerm) ATinsert(ATempty, term_d_60));
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_60 = ATgetArgument(t, 0);
            ATerm i_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_45;
        t = at_end_1_0(q_27, t);
        ;
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
        {
          ATerm j_47 = NULL,t_7 = NULL,u_7 = NULL;
          u_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_45, (ATerm) ATinsert(ATempty, term_d_60));
          t_7 = t;
          t = SSL_explode_term(t_7);
          if(match_cons(t, sym__2))
            {
              ATerm n_60 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_60) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_47;
          t = concat_0_0(t);
        }
      }
    u_45 = t;
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_34, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_q_60, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_z_34)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, u_45));
  }
  return(t);
}
ATerm r_27 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  t = SSL_explode_string(q_47);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm p_47 = NULL;
  t = map_1_0(r_27, t);
  t = concat_0_0(t);
  p_47 = t;
  t = SSL_implode_string(p_47);
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,j_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_48 = ATgetFirst((ATermList) t);
      j_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_48;
  if(match_int(t, 95))
    {
      ATerm b_49 = NULL;
      t = j_48;
      t = n_0(t);
      b_49 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(b_49), term_r_60), term_r_60);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm n_49 = NULL;
          t = j_48;
          t = n_0(t);
          n_49 = t;
          t = (ATerm) ATinsert(CheckATermList(n_49), term_r_60);
        }
      else
        {
          ATerm d_51 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = j_48;
          t = n_0(t);
          d_51 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_51), term_r_60), term_s_60), term_r_60);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm j_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  e_51 = t;
  t = SSL_explode_string(e_51);
  {
    ATerm g_51 (ATerm t)
    {
      ATerm u_60 = t;
      int y_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_128(g_51, t);
          ;
          LocalPopChoice(y_60);
        }
      else
        {
          t = u_60;
          {
            ATerm z_60 = t;
            int c_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, g_51, t);
                ;
                LocalPopChoice(c_61);
              }
            else
              {
                t = z_60;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = g_51(t);
    f_51 = t;
    t = SSL_implode_string(f_51);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm d_61 = t;
  int f_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(f_61);
    }
  else
    {
      t = d_61;
      {
        ATerm j_51 = NULL,k_51 = NULL,n_51 = NULL,o_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_51 = ATgetFirst((ATermList) t);
            k_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_51;
        t = f_125(t);
        n_51 = t;
        t = k_51;
        t = foldr_3_0(d_125, e_125, f_125, t);
        o_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_51, o_51);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm w_27 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym__2))
    {
      c_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_52, d_52);
        ;
        LocalPopChoice(i_61);
      }
    else
      {
        t = g_61;
        t = SSL_addr(c_52, d_52);
      }
  }
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm z_27 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm DeclareConstructor_0_0 (ATerm t)
{
  ATerm r_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,a_52 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      r_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_51;
  {
    ATerm j_61 = t;
    int k_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            a_52 = ATgetArgument(t, 0);
            {
              ATerm l_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_61);
        t = a_52;
        t = foldr_3_0(w_27, x_27, y_27, t);
      }
    else
      {
        t = j_61;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm m_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_l_42;
      }
    u_51 = t;
    t = r_51;
    t = escape_1_0(Cify_1_0, t);
    v_51 = t;
    t = SSL_int_to_string(u_51);
    w_51 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_51), term_o_61), v_51), term_n_61);
    t = concat_strings_0_0(t);
    x_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_51, u_51), (ATerm) ATmakeAppl(sym_Defined_2, term_p_61, x_51));
    t = assert_1_0(z_27, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_61, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_51), term_v_35)));
  }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      ATerm w_61 = ATgetArgument(t, 0);
      if(((ATgetType(w_61) == AT_LIST) && !(ATisEmpty(w_61))))
        {
          ATerm y_61 = ATgetFirst((ATermList) w_61);
          if(match_cons(y_61, sym_Constructors_1))
            {
              f_52 = ATgetArgument(y_61, 0);
            }
          else
            _fail(t);
          {
            ATerm a_62 = (ATerm) ATgetNext((ATermList) w_61);
            if(((ATgetType(a_62) != AT_LIST) || !(ATisEmpty(a_62))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = f_52;
  t = map_1_0(DeclareConstructor_0_0, t);
  g_52 = t;
  t = f_52;
  t = InitConstructors_0_0(t);
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_52, (ATerm) ATinsert(ATempty, h_52));
  {
    ATerm h_62 = t;
    int i_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_62 = ATgetArgument(t, 0);
            ATerm q_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_52;
        {
          ATerm a_28 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, h_52);
            return(t);
          }
          t = at_end_1_0(a_28, t);
        }
        ;
        LocalPopChoice(i_62);
      }
    else
      {
        t = h_62;
        {
          ATerm n_47 = NULL,v_7 = NULL,w_7 = NULL;
          w_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_52, (ATerm) ATinsert(ATempty, h_52));
          v_7 = t;
          t = SSL_explode_term(v_7);
          if(match_cons(t, sym__2))
            {
              ATerm r_62 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_62) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_47;
          t = concat_0_0(t);
        }
      }
    i_52 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, i_52);
  }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm r_52 = NULL;
  ATerm x_62 = t;
  int y_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          r_52 = ATgetArgument(t, 0);
          {
            ATerm z_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_62);
      {
        ATerm w_52 = NULL;
        t = r_52;
        t = map_1_0(TranslateType_0_0, t);
        w_52 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_35, (ATerm) ATmakeAppl(sym_ParamList_1, w_52));
      }
    }
  else
    {
      t = x_62;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm c_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_u_35;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_53 = ATgetArgument(t, 0);
      c_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_53;
  {
    ATerm d_63 = t;
    int e_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            d_53 = ATgetArgument(t, 0);
            {
              ATerm l_63 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_63);
        {
          ATerm g_53 = NULL;
          t = d_53;
          t = map_1_0(TranslateType_0_0, t);
          g_53 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_35, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, g_53))));
        }
      }
    else
      {
        t = d_63;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm m_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_35, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_53), term_v_35));
      }
  }
  return(t);
}
ATerm h_28 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_35);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  w_53 = t;
  {
    ATerm n_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            x_53 = ATgetArgument(t, 0);
            y_53 = ATgetArgument(t, 1);
            {
              ATerm t_63 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_63);
        {
          ATerm a_48 = NULL;
          t = y_53;
          t = map_1_0(TranslateVarDec_0_0, t);
          a_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_48, (ATerm) ATinsert(ATempty, term_u_35));
          {
            ATerm u_63 = t;
            int v_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm w_63 = ATgetArgument(t, 0);
                    ATerm y_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_48;
                t = at_end_1_0(h_28, t);
                ;
                LocalPopChoice(v_63);
              }
            else
              {
                t = u_63;
                {
                  ATerm m_48 = NULL,a_8 = NULL,b_8 = NULL;
                  b_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_48, (ATerm) ATinsert(ATempty, term_u_35));
                  a_8 = t;
                  t = SSL_explode_term(a_8);
                  if(match_cons(t, sym__2))
                    {
                      ATerm d_64 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) d_64) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      m_48 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_48;
                  t = concat_0_0(t);
                }
              }
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, a_48)))));
          }
        }
      }
    else
      {
        t = n_63;
        {
          ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              x_53 = ATgetArgument(t, 0);
              y_53 = ATgetArgument(t, 1);
              z_53 = ATgetArgument(t, 2);
              {
                ATerm e_64 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = y_53;
          t = map_1_0(TranslateVarDec_0_0, t);
          e_54 = t;
          t = z_53;
          t = map_1_0(TranslateVarDec_0_0, t);
          f_54 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_35)), f_54), e_54);
          t = concat_0_0(t);
          g_54 = t;
          t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, g_54)))));
        }
      }
  }
  return(t);
}
ATerm t_28 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_64, n_54);
  t = conc_strings_0_0(t);
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, o_54);
  return(t);
}
ATerm TranslateSpec_0_0 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm g_64 = ATgetArgument(t, 0);
      if(((ATgetType(g_64) == AT_LIST) && !(ATisEmpty(g_64))))
        {
          ATerm i_64 = ATgetFirst((ATermList) g_64);
          if(match_cons(i_64, sym_Signature_1))
            {
              i_54 = ATgetArgument(i_64, 0);
            }
          else
            _fail(t);
          {
            ATerm j_64 = (ATerm) ATgetNext((ATermList) g_64);
            if(((ATgetType(j_64) == AT_LIST) && !(ATisEmpty(j_64))))
              {
                ATerm p_64 = ATgetFirst((ATermList) j_64);
                if(match_cons(p_64, sym_Strategies_1))
                  {
                    j_54 = ATgetArgument(p_64, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm r_64 = (ATerm) ATgetNext((ATermList) j_64);
                  if(((ATgetType(r_64) != AT_LIST) || !(ATisEmpty(r_64))))
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
  t = j_54;
  t = map_1_0(SDefToDeclaration_0_0, t);
  k_54 = t;
  t = term_j_34;
  {
    ATerm s_64 = t;
    int t_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
        f_8 = t;
        t = term_q_33;
        c_8 = t;
        t = f_8;
        g_8 = t;
        t = term_j_34;
        e_8 = t;
        t = SSL_table_get(c_8, e_8);
        {
          ATerm u_64 = t;
          int v_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_48 = NULL,h_8 = NULL,j_8 = NULL,n_8 = NULL,o_8 = NULL;
              t = eval_config_0_0(t);
              q_48 = t;
              n_8 = t;
              t = term_q_33;
              h_8 = t;
              t = n_8;
              o_8 = t;
              t = term_j_34;
              j_8 = t;
              t = SSL_table_put(h_8, j_8, q_48);
              t = q_48;
              ;
              LocalPopChoice(v_64);
            }
          else
            {
              t = u_64;
            }
          t = map_1_0(t_28, t);
        }
        ;
        LocalPopChoice(t_64);
      }
    else
      {
        t = s_64;
        t = (ATerm) ATempty;
      }
    l_54 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(j_54), term_r_65)), k_54), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_65), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_z_34, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_65, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_65, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_g_65), term_i_65, term_v_35))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_65, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_65), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_l_65))), term_r_55)))))))), (ATerm) ATmakeAppl(sym_Signature_1, i_54)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_y_64, (ATerm) ATinsert(ATempty, term_b_65)))), l_54);
    t = concat_0_0(t);
    m_54 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, m_54);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  t = n_113(t);
  {
    ATerm u_28 (ATerm t)
    {
      t = downup2_2_0(n_113, o_113, t);
      return(t);
    }
    t = SRTS_all(u_28, t);
    t = o_113(t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      p_54 = ATgetArgument(t, 0);
      q_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_139(t);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_54, p_54, q_54);
  t = table_push_0_0(t);
  {
    ATerm s_65 = t;
    int t_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL,r_8 = NULL;
        r_8 = t;
        t = term_u_65;
        p_8 = t;
        t = SSL_table_get(r_54, p_8);
        ;
        LocalPopChoice(t_65);
      }
    else
      {
        t = s_65;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_54 = ATgetFirst((ATermList) t);
        t_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    u_8 = t;
    t = term_u_65;
    s_8 = t;
    t = u_8;
    w_8 = t;
    t = (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATinsert(CheckATermList(s_54), p_54));
    t_8 = t;
    t = SSL_table_put(r_54, s_8, t_8);
    t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
  }
  return(t);
}
ATerm v_28 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm u_54 = NULL;
  u_54 = t;
  t = term_z_65;
  t = assert_1_0(v_28, t);
  t = u_54;
  return(t);
}
ATerm y_28 (ATerm t)
{
  t = repeat_1_0(e_29, t);
  return(t);
}
ATerm d_29 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm a_66 = t;
  int b_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateSpec_0_0(t);
      ;
      LocalPopChoice(b_66);
    }
  else
    {
      t = a_66;
      {
        ATerm c_66 = t;
        int d_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateSig_0_0(t);
            ;
            LocalPopChoice(d_66);
          }
        else
          {
            t = c_66;
            {
              ATerm e_66 = t;
              int f_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateDef_0_0(t);
                  ;
                  LocalPopChoice(f_66);
                }
              else
                {
                  t = e_66;
                  {
                    ATerm g_66 = t;
                    int h_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TranslateStratMatchGuard_0_0(t);
                        ;
                        LocalPopChoice(h_66);
                      }
                    else
                      {
                        t = g_66;
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
ATerm f_29 (ATerm t)
{
  if(!(match_cons(t, sym_InitCachedTerms_0)))
    _fail(t);
  t = init_cached_terms_0_0(t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  t = downup2_2_0(y_28, d_29, t);
  {
    ATerm i_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(f_29, t);
        ;
        LocalPopChoice(j_66);
      }
    else
      {
        t = i_66;
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  if(match_cons(t, sym__2))
    {
      v_54 = ATgetArgument(t, 0);
      w_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_54, term_k_66);
  t = open_stream_0_0(t);
  x_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_54, w_54);
  t = g_131(t);
  t = fclose_0_0(t);
  t = w_54;
  return(t);
}
ATerm k_29 (ATerm t)
{
  t = fetch_1_0(n_29, t);
  return(t);
}
ATerm m_29 (ATerm t)
{
  t = WriteToFile_1_0(o_29, t);
  return(t);
}
ATerm n_29 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_29 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_66 = ATgetArgument(t, 0);
      if(match_cons(l_66, sym_Stream_1))
        {
          a_55 = ATgetArgument(l_66, 0);
        }
      else
        _fail(t);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(a_55, b_55);
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_55);
  return(t);
}
ATerm p_29 (ATerm t)
{
  t = WriteToFile_1_0(u_29, t);
  return(t);
}
ATerm u_29 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_66 = ATgetArgument(t, 0);
      if(match_cons(m_66, sym_Stream_1))
        {
          d_55 = ATgetArgument(m_66, 0);
        }
      else
        _fail(t);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(d_55, e_55);
  f_55 = t;
  a_9 = t;
  t = term_n_66;
  z_8 = t;
  t = SSL_fputc(z_8, f_55);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_55);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  y_54 = t;
  {
    ATerm h_29 (ATerm t)
    {
      ATerm o_66 = t;
      int p_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_29 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((z_54 != NULL) && (z_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_29, t);
          ;
          LocalPopChoice(p_66);
        }
      else
        {
          t = o_66;
          t = term_q_66;
          if(((z_54 != NULL) && (z_54 != t)))
            _fail(t);
          else
            z_54 = t;
        }
      return(t);
    }
    t = _2_0(h_29, _id, t);
    t = y_54;
    {
      ATerm j_29 (ATerm t)
      {
        ATerm r_48 = NULL;
        r_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_54), r_48);
        return(t);
      }
      t = _2_0(_id, j_29, t);
      {
        ATerm r_66 = t;
        int s_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(k_29, m_29, t);
            ;
            LocalPopChoice(s_66);
          }
        else
          {
            t = r_66;
            t = _2_0(_id, p_29, t);
          }
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
ATerm apply_strategy_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  h_55 = t;
  t = dtime_0_0(t);
  t = h_55;
  t = g_133(t);
  i_55 = t;
  t = dtime_0_0(t);
  j_55 = t;
  t = i_55;
  if(match_cons(t, sym__2))
    {
      k_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_55), (ATerm) ATmakeAppl(sym_Runtime_1, j_55)), l_55);
  return(t);
}
ATerm z_55 (ATerm t_55, ATerm t)
{
  t = SSL_fclose(t_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  x_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_55 = ATgetArgument(t, 0);
      {
        ATerm t_66 = t;
        int u_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_55);
            ;
            LocalPopChoice(u_66);
          }
        else
          {
            t = t_66;
            t = z_55(x_55, t);
          }
      }
    }
  else
    {
      t = z_55(x_55, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_56 = NULL;
  t = SSL_stdin_stream();
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_stdout_stream();
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_56 = NULL;
  t = SSL_stderr_stream();
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_56);
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm k_56 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_56;
  return(t);
}
ATerm x_29 (ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  t = SSL_is_string(o_56);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_66 = ATgetArgument(t, 0);
      ATerm w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_49 = NULL,h_49 = NULL;
        g_49 = t;
        t = SSL_explode_term(g_49);
        if(match_cons(t, sym__2))
          {
            ATerm z_66 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_66) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_67 = ATgetArgument(t, 1);
              if(((ATgetType(a_67) == AT_LIST) && !(ATisEmpty(a_67))))
                {
                  h_49 = ATgetFirst((ATermList) a_67);
                  {
                    ATerm b_67 = (ATerm) ATgetNext((ATermList) a_67);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_49;
        if(match_cons(t, sym_stderr_0))
          {
            t = h_49;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = h_49;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_49;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(y_66);
      }
    else
      {
        t = x_66;
        {
          ATerm c_67 = t;
          int d_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
              t = _2_0(w_29, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_56 = ATgetArgument(t, 0);
                  i_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_56, i_56);
              j_56 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_56);
              ;
              LocalPopChoice(d_67);
            }
          else
            {
              t = c_67;
              {
                ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
                t = _2_0(x_29, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_56 = ATgetArgument(t, 0);
                    m_56 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_56, m_56);
                n_56 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_56);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  ATerm e_67 = t;
  int f_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_56 = NULL;
      s_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_56, term_g_67);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_67);
    }
  else
    {
      t = e_67;
      {
        ATerm i_49 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
        i_49 = t;
        t = term_h_67;
        d_9 = t;
        t = term_d_33;
        b_9 = t;
        t = d_9;
        e_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_49), term_h_67);
        c_9 = t;
        t = SSL_printnl(b_9, c_9);
        t = i_49;
        _fail(t);
      }
    }
  p_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_56);
  q_56 = t;
  t = p_56;
  t = fclose_0_0(t);
  t = q_56;
  return(t);
}
ATerm fetch_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm x_56 (ATerm t)
  {
    ATerm i_67 = t;
    int j_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_119, _id, t);
        ;
        LocalPopChoice(j_67);
      }
    else
      {
        t = i_67;
        t = Cons_2_0(_id, x_56, t);
      }
    return(t);
  }
  t = x_56(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_67 = t;
  int l_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_67);
    }
  else
    {
      t = k_67;
      {
        ATerm a_57 = NULL,b_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_57 = ATgetFirst((ATermList) t);
            b_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_57;
        {
          ATerm z_29 (ATerm t)
          {
            t = b_57;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_29, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm h_57 (ATerm t)
  {
    ATerm m_67 = t;
    int n_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_57, t);
        ;
        LocalPopChoice(n_67);
      }
    else
      {
        t = m_67;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_119(t);
      }
    return(t);
  }
  t = h_57(t);
  return(t);
}
ATerm _2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,f_9 = NULL,g_9 = NULL;
  n_57 = t;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_57);
  i_57 = t;
  t = j_57;
  t = d_86(t);
  l_57 = t;
  t = k_57;
  t = e_86(t);
  m_57 = t;
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
  f_9 = t;
  t = SSLsetAnnotations(f_9, i_57);
  return(t);
}
ATerm a_30 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  t = SSL_explode_string(s_57);
  return(t);
}
ATerm b_30 (ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  t = SSL_explode_string(t_57);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_57 = NULL;
  t = _2_0(a_30, b_30, t);
  {
    ATerm o_67 = t;
    int p_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_57 = NULL,w_57 = NULL;
        if(match_cons(t, sym__2))
          {
            v_57 = ATgetArgument(t, 0);
            w_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_57;
        {
          ATerm c_30 (ATerm t)
          {
            t = w_57;
            return(t);
          }
          t = at_end_1_0(c_30, t);
        }
        ;
        LocalPopChoice(p_67);
      }
    else
      {
        t = o_67;
        {
          ATerm p_49 = NULL,q_49 = NULL;
          p_49 = t;
          t = SSL_explode_term(p_49);
          if(match_cons(t, sym__2))
            {
              ATerm q_67 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_67) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_49;
          t = concat_0_0(t);
        }
      }
    r_57 = t;
    t = SSL_implode_string(r_57);
  }
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm r_67 = t;
  int s_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_67);
    }
  else
    {
      t = r_67;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_67 = t;
  int u_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_58 = NULL;
      g_58 = t;
      t = SSL_is_string(g_58);
      ;
      LocalPopChoice(u_67);
    }
  else
    {
      t = t_67;
      {
        ATerm v_67 = t;
        int w_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_30, t);
            ;
            LocalPopChoice(w_67);
          }
        else
          {
            t = v_67;
            {
              ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
              k_58 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_58 = ATgetArgument(t, 0);
                  t = l_58;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_58 = ATgetArgument(t, 0);
                      t = l_58;
                      {
                        ATerm x_67 = t;
                        int y_67 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_9 = NULL,i_9 = NULL;
                            i_9 = t;
                            t = term_q_33;
                            h_9 = t;
                            t = SSL_table_get(h_9, l_58);
                            {
                              ATerm z_67 = t;
                              int a_68 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_50 = NULL,j_9 = NULL,k_9 = NULL;
                                  t = eval_config_0_0(t);
                                  j_50 = t;
                                  k_9 = t;
                                  t = term_q_33;
                                  j_9 = t;
                                  t = SSL_table_put(j_9, l_58, j_50);
                                  t = j_50;
                                  ;
                                  LocalPopChoice(a_68);
                                }
                              else
                                {
                                  t = z_67;
                                }
                            }
                            ;
                            LocalPopChoice(y_67);
                          }
                        else
                          {
                            t = x_67;
                            {
                              ATerm l_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
                              t = term_b_68;
                              o_9 = t;
                              t = term_d_33;
                              l_9 = t;
                              t = o_9;
                              p_9 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, l_58), term_b_68);
                              n_9 = t;
                              t = SSL_printnl(l_9, n_9);
                              t = l_58;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm q_58 = NULL,r_58 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_58 = ATgetArgument(t, 0);
                          m_58 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_58;
                      t = eval_config_0_0(t);
                      q_58 = t;
                      t = m_58;
                      t = eval_config_0_0(t);
                      r_58 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_58, r_58);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm c_68 = t;
  int d_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_58 = NULL,c_59 = NULL,t_9 = NULL,u_9 = NULL,w_9 = NULL,x_9 = NULL;
      w_58 = t;
      t = term_e_68;
      w_9 = t;
      t = term_q_33;
      t_9 = t;
      t = w_9;
      x_9 = t;
      t = term_e_68;
      u_9 = t;
      t = SSL_table_get(t_9, u_9);
      {
        ATerm f_68 = t;
        int g_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_50 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
            t = eval_config_0_0(t);
            q_50 = t;
            a_10 = t;
            t = term_q_33;
            y_9 = t;
            t = a_10;
            b_10 = t;
            t = term_e_68;
            z_9 = t;
            t = SSL_table_put(y_9, z_9, q_50);
            t = q_50;
            ;
            LocalPopChoice(g_68);
          }
        else
          {
            t = f_68;
          }
        c_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_59, term_h_68);
        t = geq_0_0(t);
        t = w_58;
        t = r_132(t);
      }
      ;
      LocalPopChoice(d_68);
    }
  else
    {
      t = c_68;
    }
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm e_59 = NULL;
  e_59 = t;
  if(match_string(t, "-k"))
    {
      t = e_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_59;
    }
  return(t);
}
ATerm h_30 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  f_59 = t;
  t = SSL_string_to_int(f_59);
  g_59 = t;
  f_10 = t;
  t = term_q_33;
  c_10 = t;
  t = f_10;
  g_10 = t;
  t = term_i_68;
  e_10 = t;
  t = SSL_table_put(c_10, e_10, g_59);
  t = f_59;
  return(t);
}
ATerm k_30 (ATerm t)
{
  t = term_j_68;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_30, h_30, k_30, t);
  return(t);
}
ATerm l_30 (ATerm t)
{
  ATerm i_59 = NULL;
  i_59 = t;
  if(match_string(t, "-S"))
    {
      t = i_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_59;
    }
  return(t);
}
ATerm m_30 (ATerm t)
{
  ATerm i_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,r_10 = NULL;
  n_10 = t;
  t = term_q_33;
  i_10 = t;
  t = n_10;
  o_10 = t;
  t = term_e_68;
  l_10 = t;
  t = o_10;
  r_10 = t;
  t = term_l_42;
  m_10 = t;
  t = SSL_table_put(i_10, l_10, m_10);
  t = term_k_68;
  return(t);
}
ATerm n_30 (ATerm t)
{
  t = term_l_68;
  return(t);
}
ATerm o_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,w_10 = NULL;
  j_59 = t;
  t = SSL_string_to_int(j_59);
  k_59 = t;
  v_10 = t;
  t = term_q_33;
  s_10 = t;
  t = v_10;
  w_10 = t;
  t = term_e_68;
  t_10 = t;
  t = SSL_table_put(s_10, t_10, k_59);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_59);
  return(t);
}
ATerm t_30 (ATerm t)
{
  t = term_m_68;
  return(t);
}
ATerm u_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_30 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,e_11 = NULL,f_11 = NULL;
  b_11 = t;
  t = term_q_33;
  y_10 = t;
  t = b_11;
  e_11 = t;
  t = term_n_68;
  z_10 = t;
  t = e_11;
  f_11 = t;
  t = term_d_15;
  a_11 = t;
  t = SSL_table_put(y_10, z_10, a_11);
  t = term_o_68;
  return(t);
}
ATerm x_30 (ATerm t)
{
  t = term_p_68;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_68 = t;
  int r_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_30, m_30, n_30, t);
      ;
      LocalPopChoice(r_68);
    }
  else
    {
      t = q_68;
      {
        ATerm s_68 = t;
        int t_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_30, p_30, t_30, t);
            ;
            LocalPopChoice(t_68);
          }
        else
          {
            t = s_68;
            t = Option_3_0(u_30, v_30, x_30, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_59 = NULL;
      t = term_d_15;
      t = d_0(t);
      p_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_68, term_v_68, p_59);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_59 = ATgetFirst((ATermList) t);
          o_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_59;
      t = a_0(t);
      t = term_d_15;
      t = c_0(t);
      s_59 = t;
      t = (ATerm) ATinsert(CheckATermList(o_59), s_59);
    }
  return(t);
}
ATerm y_30 (ATerm t)
{
  ATerm u_59 = NULL;
  u_59 = t;
  if(match_string(t, "-o"))
    {
      t = u_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_59;
    }
  return(t);
}
ATerm z_30 (ATerm t)
{
  ATerm v_59 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL;
  v_59 = t;
  k_11 = t;
  t = term_q_33;
  i_11 = t;
  t = k_11;
  m_11 = t;
  t = term_w_68;
  j_11 = t;
  t = SSL_table_put(i_11, j_11, v_59);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_59);
  return(t);
}
ATerm b_31 (ATerm t)
{
  t = term_x_68;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_30, z_30, b_31, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,n_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__3))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
      a_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_59, z_59);
  {
    ATerm y_68 = t;
    int z_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_69 = ATgetArgument(t, 0);
            ATerm b_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_59, z_59);
        ;
        LocalPopChoice(z_68);
      }
    else
      {
        t = y_68;
        t = (ATerm) ATempty;
      }
    b_60 = t;
    r_11 = t;
    t = (ATerm) ATinsert(CheckATermList(b_60), a_60);
    n_11 = t;
    t = SSL_table_put(y_59, z_59, n_11);
    t = (ATerm) ATmakeAppl(sym__3, y_59, z_59, a_60);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_60 = NULL;
      t = term_d_15;
      t = l_0(t);
      o_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_68, term_v_68, o_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_60 = ATgetFirst((ATermList) t);
          k_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_60 = ATgetFirst((ATermList) t);
          m_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_60;
      t = i_0(t);
      t = l_60;
      t = k_0(t);
      t_60 = t;
      t = (ATerm) ATinsert(CheckATermList(m_60), t_60);
    }
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm v_60 = NULL;
  v_60 = t;
  if(match_string(t, "-i"))
    {
      t = v_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_60;
    }
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm w_60 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,y_11 = NULL;
  w_60 = t;
  u_11 = t;
  t = term_q_33;
  s_11 = t;
  t = u_11;
  y_11 = t;
  t = term_c_69;
  t_11 = t;
  t = SSL_table_put(s_11, t_11, w_60);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_60);
  return(t);
}
ATerm e_31 (ATerm t)
{
  t = term_d_69;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_31, d_31, e_31, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_60 = NULL,e_12 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,g_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_15;
  t = whoami_0_0(t);
  x_60 = t;
  b_12 = t;
  t = term_d_33;
  z_11 = t;
  t = b_12;
  d_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_69), x_60);
  a_12 = t;
  t = SSL_printnl(z_11, a_12);
  g_12 = t;
  t = term_n_33;
  e_12 = t;
  t = SSL_exit(e_12);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,m_12 = NULL,n_12 = NULL;
  t = term_f_69;
  m_12 = t;
  t = term_q_33;
  h_12 = t;
  t = m_12;
  n_12 = t;
  t = term_f_69;
  i_12 = t;
  t = SSL_table_get(h_12, i_12);
  {
    ATerm g_69 = t;
    int h_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_50 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
        t = eval_config_0_0(t);
        u_50 = t;
        q_12 = t;
        t = term_q_33;
        o_12 = t;
        t = q_12;
        r_12 = t;
        t = term_f_69;
        p_12 = t;
        t = SSL_table_put(o_12, p_12, u_50);
        t = u_50;
        ;
        LocalPopChoice(h_69);
      }
    else
      {
        t = g_69;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm i_69 = t;
  int j_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(j_69);
    }
  else
    {
      t = i_69;
      {
        ATerm a_61 = NULL,b_61 = NULL,e_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_61 = ATgetFirst((ATermList) t);
            b_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_61;
        t = foldr_2_0(b_125, c_125, t);
        e_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_61, e_61);
        t = c_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_31 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  if(match_cons(t, sym__2))
    {
      z_50 = ATgetArgument(t, 0);
      a_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_50, a_51);
        ;
        LocalPopChoice(l_69);
      }
    else
      {
        t = k_69;
        t = SSL_addr(z_50, a_51);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_61 = NULL,v_50 = NULL,w_50 = NULL;
  t = times_0_0(t);
  v_50 = t;
  t = SSL_explode_term(v_50);
  if(match_cons(t, sym__2))
    {
      ATerm m_69 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_50;
  t = foldr_2_0(f_31, g_31, t);
  h_61 = t;
  t = SSL_TicksToSeconds(h_61);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  s_61 = t;
  if(match_cons(t, sym__2))
    {
      t_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_69 = t;
    int o_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_61;
        if((t_61 != t))
          {
            _fail(t);
          }
        t = s_61;
        ;
        LocalPopChoice(o_69);
      }
    else
      {
        t = n_69;
        t = s_61;
        {
          ATerm p_69 = t;
          int q_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_61, u_61);
              ;
              LocalPopChoice(q_69);
            }
          else
            {
              t = p_69;
              t = SSL_gtr(t_61, u_61);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_61, u_61);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm r_69 = t;
  int s_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_61 = NULL,z_61 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,b_13 = NULL;
      x_61 = t;
      t = term_e_68;
      z_12 = t;
      t = term_q_33;
      w_12 = t;
      t = z_12;
      b_13 = t;
      t = term_e_68;
      x_12 = t;
      t = SSL_table_get(w_12, x_12);
      {
        ATerm t_69 = t;
        int u_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_52 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
            t = eval_config_0_0(t);
            x_52 = t;
            e_13 = t;
            t = term_q_33;
            c_13 = t;
            t = e_13;
            f_13 = t;
            t = term_e_68;
            d_13 = t;
            t = SSL_table_put(c_13, d_13, x_52);
            t = x_52;
            ;
            LocalPopChoice(u_69);
          }
        else
          {
            t = t_69;
          }
        z_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_61, term_n_33);
        t = geq_0_0(t);
        t = x_61;
        t = q_132(t);
      }
      ;
      LocalPopChoice(s_69);
    }
  else
    {
      t = r_69;
    }
  return(t);
}
ATerm h_31 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL,o_13 = NULL;
  t = run_time_0_0(t);
  b_62 = t;
  t = term_d_15;
  t = whoami_0_0(t);
  c_62 = t;
  l_13 = t;
  t = term_d_33;
  h_13 = t;
  t = l_13;
  o_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_69), b_62), term_v_69), c_62);
  k_13 = t;
  t = SSL_printnl(h_13, k_13);
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_69), b_62), term_v_69), c_62));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_31, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  t = report_run_time_0_0(t);
  r_13 = t;
  t = term_l_42;
  q_13 = t;
  t = SSL_exit(q_13);
  return(t);
}
ATerm i_31 (ATerm t)
{
  ATerm x_69 = t;
  int y_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_69);
    }
  else
    {
      t = x_69;
      {
        ATerm z_69 = t;
        int a_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_70);
          }
        else
          {
            t = z_69;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm b_70 = t;
  int c_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
      t = term_d_70;
      v_13 = t;
      t = term_q_33;
      t_13 = t;
      t = v_13;
      w_13 = t;
      t = term_d_70;
      u_13 = t;
      t = SSL_table_get(t_13, u_13);
      {
        ATerm e_70 = t;
        int f_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_53 = NULL,c_14 = NULL,d_14 = NULL,j_14 = NULL,m_14 = NULL;
            t = eval_config_0_0(t);
            k_53 = t;
            j_14 = t;
            t = term_q_33;
            c_14 = t;
            t = j_14;
            m_14 = t;
            t = term_d_70;
            d_14 = t;
            t = SSL_table_put(c_14, d_14, k_53);
            t = k_53;
            ;
            LocalPopChoice(f_70);
          }
        else
          {
            t = e_70;
          }
      }
      ;
      LocalPopChoice(c_70);
    }
  else
    {
      t = b_70;
      t = fetch_1_0(i_31, t);
    }
  t = e_134(t);
  return(t);
}
ATerm map_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm d_62 (ATerm t)
  {
    ATerm g_70 = t;
    int h_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_70);
      }
    else
      {
        t = g_70;
        t = Cons_2_0(z_118, d_62, t);
      }
    return(t);
  }
  t = d_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_62 = ATgetFirst((ATermList) t);
      g_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_62 = NULL,l_62 = NULL;
        t = g_62;
        t = g_0(t);
        k_62 = t;
        t = f_62;
        t = e_0(t);
        l_62 = t;
        t = g_62;
        {
          ATerm j_31 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_62), l_62);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_31, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_15;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,n_14 = NULL,o_14 = NULL;
  p_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_62);
  m_62 = t;
  t = n_62;
  t = y_99(t);
  o_62 = t;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_62);
  n_14 = t;
  t = SSLsetAnnotations(n_14, m_62);
  return(t);
}
ATerm k_31 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm s_62 = NULL;
  s_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_62), term_i_70);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  ATerm j_70 = t;
  int k_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
      t = term_f_69;
      r_14 = t;
      t = term_q_33;
      p_14 = t;
      t = r_14;
      s_14 = t;
      t = term_f_69;
      q_14 = t;
      t = SSL_table_get(p_14, q_14);
      {
        ATerm l_70 = t;
        int m_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_55 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL;
            t = eval_config_0_0(t);
            n_55 = t;
            w_14 = t;
            t = term_q_33;
            t_14 = t;
            t = w_14;
            x_14 = t;
            t = term_f_69;
            u_14 = t;
            t = SSL_table_put(t_14, u_14, n_55);
            t = n_55;
            ;
            LocalPopChoice(m_70);
          }
        else
          {
            t = l_70;
          }
      }
      ;
      LocalPopChoice(k_70);
    }
  else
    {
      t = j_70;
      t = fetch_1_0(k_31, t);
    }
  t = term_n_70;
  t = echo_0_0(t);
  a_15 = t;
  t = term_u_68;
  y_14 = t;
  t = a_15;
  b_15 = t;
  t = term_v_68;
  z_14 = t;
  t = SSL_table_get(y_14, z_14);
  t = reverse_acc_2_0(_id, l_31, t);
  t = map_1_0(m_31, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,e_15 = NULL,l_15 = NULL;
  w_62 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  t_62 = t;
  t = u_62;
  t = z_99(t);
  v_62 = t;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_62);
  e_15 = t;
  t = SSLsetAnnotations(e_15, t_62);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,n_15 = NULL,p_15 = NULL;
  a_63 = t;
  {
    ATerm o_70 = t;
    int p_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_70 = ATgetFirst((ATermList) t);
                ATerm r_70 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_63;
          }
        ;
        LocalPopChoice(p_70);
      }
    else
      {
        t = o_70;
        t = (ATerm) ATinsert(ATempty, a_63);
      }
    b_63 = t;
    p_15 = t;
    t = term_q_66;
    n_15 = t;
    t = SSL_printnl(n_15, b_63);
    t = a_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
  t = term_f_69;
  s_15 = t;
  t = term_q_33;
  q_15 = t;
  t = s_15;
  t_15 = t;
  t = term_f_69;
  r_15 = t;
  t = SSL_table_get(q_15, r_15);
  {
    ATerm s_70 = t;
    int t_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_57 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
        t = eval_config_0_0(t);
        q_57 = t;
        x_15 = t;
        t = term_q_33;
        v_15 = t;
        t = x_15;
        y_15 = t;
        t = term_f_69;
        w_15 = t;
        t = SSL_table_put(v_15, w_15, q_57);
        t = q_57;
        ;
        LocalPopChoice(t_70);
      }
    else
      {
        t = s_70;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_31 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  t = term_q_33;
  z_15 = t;
  t = c_16;
  d_16 = t;
  t = term_u_70;
  a_16 = t;
  t = d_16;
  e_16 = t;
  t = term_d_15;
  b_16 = t;
  t = SSL_table_put(z_15, a_16, b_16);
  t = term_v_70;
  return(t);
}
ATerm p_31 (ATerm t)
{
  t = term_w_70;
  return(t);
}
ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_31 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL,r_16 = NULL;
  i_16 = t;
  t = term_q_33;
  f_16 = t;
  t = i_16;
  j_16 = t;
  t = term_u_70;
  g_16 = t;
  t = j_16;
  k_16 = t;
  t = term_d_15;
  h_16 = t;
  t = SSL_table_put(f_16, g_16, h_16);
  o_16 = t;
  t = term_q_33;
  l_16 = t;
  t = o_16;
  q_16 = t;
  t = term_x_70;
  m_16 = t;
  t = q_16;
  r_16 = t;
  t = term_d_15;
  n_16 = t;
  t = SSL_table_put(l_16, m_16, n_16);
  t = term_y_70;
  return(t);
}
ATerm s_31 (ATerm t)
{
  t = term_z_70;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_71 = t;
  int b_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_31, o_31, p_31, t);
      ;
      LocalPopChoice(b_71);
    }
  else
    {
      t = a_71;
      t = Option_3_0(q_31, r_31, s_31, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,s_16 = NULL,w_16 = NULL;
  k_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_63 = ATgetFirst((ATermList) t);
      h_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_63);
  f_63 = t;
  t = g_63;
  t = s_90(t);
  i_63 = t;
  t = h_63;
  t = t_90(t);
  j_63 = t;
  w_16 = t;
  t = (ATerm) ATinsert(CheckATermList(j_63), i_63);
  s_16 = t;
  t = SSLsetAnnotations(s_16, f_63);
  return(t);
}
ATerm t_31 (ATerm t)
{
  ATerm p_63 = NULL,x_16 = NULL,z_16 = NULL,b_17 = NULL,e_17 = NULL;
  p_63 = t;
  b_17 = t;
  t = term_q_33;
  x_16 = t;
  t = b_17;
  e_17 = t;
  t = term_f_69;
  z_16 = t;
  t = SSL_table_put(x_16, z_16, p_63);
  t = (ATerm) ATmakeAppl(sym_Program_1, p_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm o_63 = NULL;
  o_63 = t;
  {
    ATerm c_71 = t;
    int d_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_71;
        t = v_136(t);
        ;
        LocalPopChoice(d_71);
      }
    else
      {
        t = c_71;
      }
    t = o_63;
    {
      ATerm u_31 (ATerm t)
      {
        ATerm f_71 = t;
        int g_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_71 = t;
            int i_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_71);
              }
            else
              {
                t = h_71;
                t = v_136(t);
                t = Cons_2_0(_id, u_31, t);
              }
            ;
            LocalPopChoice(g_71);
          }
        else
          {
            t = f_71;
            {
              ATerm r_63 = NULL,s_63 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_63 = ATgetFirst((ATermList) t);
                  s_63 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_63), (ATerm) ATmakeAppl(sym_Undefined_1, r_63));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_31, u_31, t);
    }
  }
  return(t);
}
ATerm x_31 (ATerm t)
{
  ATerm c_64 = NULL;
  c_64 = t;
  if(match_string(t, "--help"))
    {
      t = c_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_64;
        }
    }
  return(t);
}
ATerm y_31 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,y_17 = NULL,z_17 = NULL,d_18 = NULL,h_18 = NULL;
  z_17 = t;
  t = term_q_33;
  q_17 = t;
  t = z_17;
  d_18 = t;
  t = term_d_70;
  r_17 = t;
  t = d_18;
  h_18 = t;
  t = term_d_15;
  y_17 = t;
  t = SSL_table_put(q_17, r_17, y_17);
  t = term_j_71;
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = term_k_71;
  return(t);
}
ATerm a_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_136 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,i_17 = NULL,k_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,k_19 = NULL,l_19 = NULL;
  z_63 = t;
  n_17 = t;
  t = term_u_68;
  i_17 = t;
  t = n_17;
  o_17 = t;
  t = term_v_68;
  k_17 = t;
  t = o_17;
  p_17 = t;
  t = (ATerm) ATempty;
  m_17 = t;
  t = SSL_table_put(i_17, k_17, m_17);
  t = z_63;
  {
    ATerm w_31 (ATerm t)
    {
      ATerm l_71 = t;
      int m_71 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_136(t);
          ;
          LocalPopChoice(m_71);
        }
      else
        {
          t = l_71;
          {
            ATerm n_71 = t;
            int o_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_31, y_31, z_31, t);
                ;
                LocalPopChoice(o_71);
              }
            else
              {
                t = n_71;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_31, t);
    {
      ATerm p_71 = t;
      int q_71 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_64 = NULL;
          h_64 = t;
          {
            ATerm r_71 = t;
            int s_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_18 = NULL,r_18 = NULL;
                t = h_64;
                {
                  ATerm t_71 = t;
                  int u_71 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
                      t = term_d_70;
                      k_18 = t;
                      t = term_q_33;
                      i_18 = t;
                      t = k_18;
                      l_18 = t;
                      t = term_d_70;
                      j_18 = t;
                      t = SSL_table_get(i_18, j_18);
                      {
                        ATerm v_71 = t;
                        int w_71 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_60 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
                            t = eval_config_0_0(t);
                            h_60 = t;
                            o_18 = t;
                            t = term_q_33;
                            m_18 = t;
                            t = o_18;
                            p_18 = t;
                            t = term_d_70;
                            n_18 = t;
                            t = SSL_table_put(m_18, n_18, h_60);
                            t = h_60;
                            ;
                            LocalPopChoice(w_71);
                          }
                        else
                          {
                            t = v_71;
                          }
                      }
                      ;
                      LocalPopChoice(u_71);
                    }
                  else
                    {
                      t = t_71;
                      t = fetch_1_0(a_32, t);
                    }
                  t = h_64;
                  t = default_system_usage_0_0(t);
                  r_18 = t;
                  t = term_l_42;
                  q_18 = t;
                  t = SSL_exit(q_18);
                }
                ;
                LocalPopChoice(s_71);
              }
            else
              {
                t = r_71;
                {
                  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,c_19 = NULL,d_19 = NULL;
                  t = term_u_70;
                  u_18 = t;
                  t = term_q_33;
                  s_18 = t;
                  t = u_18;
                  v_18 = t;
                  t = term_u_70;
                  t_18 = t;
                  t = SSL_table_get(s_18, t_18);
                  {
                    ATerm x_71 = t;
                    int y_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_62 = NULL,w_18 = NULL,y_18 = NULL,z_18 = NULL,b_19 = NULL;
                        t = eval_config_0_0(t);
                        e_62 = t;
                        z_18 = t;
                        t = term_q_33;
                        w_18 = t;
                        t = z_18;
                        b_19 = t;
                        t = term_u_70;
                        y_18 = t;
                        t = SSL_table_put(w_18, y_18, e_62);
                        t = e_62;
                        ;
                        LocalPopChoice(y_71);
                      }
                    else
                      {
                        t = x_71;
                      }
                    t = h_64;
                    t = default_system_about_0_0(t);
                    d_19 = t;
                    t = term_l_42;
                    c_19 = t;
                    t = SSL_exit(c_19);
                  }
                }
              }
          }
          ;
          LocalPopChoice(q_71);
        }
      else
        {
          t = p_71;
          {
            ATerm z_71 = t;
            int a_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
                ATerm b_32 (ATerm t)
                {
                  ATerm c_32 (ATerm t)
                  {
                    if(((a_64 != NULL) && (a_64 != t)))
                      _fail(t);
                    else
                      a_64 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_32, t);
                  return(t);
                }
                t = fetch_1_0(b_32, t);
                g_19 = t;
                t = term_d_33;
                e_19 = t;
                t = g_19;
                h_19 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_64)), term_b_72);
                f_19 = t;
                t = SSL_printnl(e_19, f_19);
                t = (ATerm) ATmakeAppl(sym__2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_64)), term_b_72));
                t = default_system_usage_0_0(t);
                j_19 = t;
                t = term_n_33;
                i_19 = t;
                t = SSL_exit(i_19);
                ;
                LocalPopChoice(a_72);
              }
            else
              {
                t = z_71;
              }
          }
        }
      b_64 = t;
      l_19 = t;
      t = term_u_68;
      k_19 = t;
      t = SSL_table_destroy(k_19);
      t = b_64;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = parse_options_1_0(g_134, t);
  k_64 = t;
  n_19 = t;
  t = term_c_72;
  m_19 = t;
  t = SSL_table_create(m_19);
  q_19 = t;
  t = term_c_72;
  o_19 = t;
  t = q_19;
  r_19 = t;
  t = term_d_72;
  p_19 = t;
  t = SSL_table_put(o_19, p_19, k_64);
  t = k_64;
  t = i_134(t);
  {
    ATerm e_72 = t;
    int f_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_134, t);
        ;
        LocalPopChoice(f_72);
      }
    else
      {
        t = e_72;
        {
          ATerm g_72 = t;
          int h_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_134(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_72);
            }
          else
            {
              t = g_72;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_32 (ATerm t)
{
  t = if_verbose2_1_0(b_33, t);
  return(t);
}
ATerm g_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_32 (ATerm t)
{
  ATerm s_19 = NULL,y_19 = NULL,a_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  t = term_q_33;
  s_19 = t;
  t = c_20;
  d_20 = t;
  t = term_i_72;
  y_19 = t;
  t = d_20;
  e_20 = t;
  t = term_d_15;
  a_20 = t;
  t = SSL_table_put(s_19, y_19, a_20);
  t = term_j_72;
  return(t);
}
ATerm j_32 (ATerm t)
{
  t = term_k_72;
  return(t);
}
ATerm b_33 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL,k_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  l_64 = t;
  t = term_f_69;
  j_20 = t;
  t = term_q_33;
  g_20 = t;
  t = j_20;
  k_20 = t;
  t = term_f_69;
  h_20 = t;
  t = SSL_table_get(g_20, h_20);
  {
    ATerm l_72 = t;
    int m_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_63 = NULL,l_20 = NULL,m_20 = NULL,o_20 = NULL,p_20 = NULL;
        t = eval_config_0_0(t);
        x_63 = t;
        o_20 = t;
        t = term_q_33;
        l_20 = t;
        t = o_20;
        p_20 = t;
        t = term_f_69;
        m_20 = t;
        t = SSL_table_put(l_20, m_20, x_63);
        t = x_63;
        ;
        LocalPopChoice(m_72);
      }
    else
      {
        t = l_72;
      }
    m_64 = t;
    s_20 = t;
    t = term_d_33;
    q_20 = t;
    t = s_20;
    t_20 = t;
    t = (ATerm) ATinsert(ATempty, m_64);
    r_20 = t;
    t = SSL_printnl(q_20, r_20);
    t = l_64;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t)
{
  ATerm d_32 (ATerm t)
  {
    ATerm n_72 = t;
    int o_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_133(t);
        ;
        LocalPopChoice(o_72);
      }
    else
      {
        t = n_72;
        {
          ATerm p_72 = t;
          int q_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_72);
            }
          else
            {
              t = p_72;
              {
                ATerm r_72 = t;
                int s_72 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_72);
                  }
                else
                  {
                    t = r_72;
                    {
                      ATerm t_72 = t;
                      int u_72 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_32, i_32, j_32, t);
                          ;
                          LocalPopChoice(u_72);
                        }
                      else
                        {
                          t = t_72;
                          {
                            ATerm v_72 = t;
                            int w_72 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_72);
                              }
                            else
                              {
                                t = v_72;
                                t = keep_option_0_0(t);
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
  ATerm f_32 (ATerm t)
  {
    ATerm n_64 = NULL,o_64 = NULL,q_64 = NULL;
    n_64 = t;
    {
      ATerm x_72 = t;
      int y_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_33 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_64 != NULL) && (o_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_33, t);
          ;
          LocalPopChoice(y_72);
        }
      else
        {
          t = x_72;
          t = term_z_72;
          o_64 = t;
        }
      t = not_null(o_64);
      t = ReadFromFile_0_0(t);
      q_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_64, q_64);
      t = apply_strategy_1_0(p_133, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_32, r_133, e_32, f_32, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
