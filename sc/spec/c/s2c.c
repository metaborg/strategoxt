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
ATerm term_k_54;
ATerm term_p_53;
ATerm term_l_53;
ATerm term_c_53;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_f_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_m_50;
ATerm term_h_50;
ATerm term_t_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_s_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_i_48;
ATerm term_d_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_t_46;
ATerm term_z_45;
ATerm term_u_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_z_44;
ATerm term_x_44;
ATerm term_v_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_m_43;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_w_41;
ATerm term_q_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_v_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_q_35;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_p_33;
ATerm term_k_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_n_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_w_19;
ATerm term_b_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_d_10;
void init_constant_terms (void)
{
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Id_1, term_s_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_11, (ATerm) ATempty);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Id_1, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_12, (ATerm) ATempty);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_12, term_j_12);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Id_1, term_n_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Id_1, term_y_20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Id_1, term_r_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_IntConst_1, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Id_1, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Id_1, term_y_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Id_1, term_b_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Id_1, term_k_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Id_1, term_p_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Id_1, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Id_1, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Id_1, term_z_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_23, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_23, term_j_12);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Id_1, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Id_1, term_h_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Id_1, term_j_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Id_1, term_q_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_23, (ATerm) ATempty);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_24, term_j_12);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Id_1, term_o_24);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Id_1, term_m_25);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Id_1, term_l_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Id_1, term_n_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Id_1, term_x_26);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_p_24);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_i_23);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Id_1, term_s_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_30, (ATerm) ATempty);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Equal_2, term_u_30, term_v_21);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Id_1, term_x_30);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_30, (ATerm) ATempty);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Stat_1, term_z_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, term_i_23);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Id_1, term_e_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_31, (ATerm) ATempty);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Equal_2, term_g_31, term_v_21);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Id_1, term_l_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Id_1, term_o_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_31, (ATerm) ATempty);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Stat_1, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Id_1, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_32, (ATerm) ATempty);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_32, term_j_12);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Id_1, term_e_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Id_1, term_g_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Id_1, term_i_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Id_1, term_r_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_33, (ATerm) ATempty);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_33, term_j_12);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Id_1, term_n_34);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_32, term_i_23);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_Id_1, term_q_38);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_Return_1, term_i_23);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_i_23, term_j_12);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_12, term_a_39);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym_Id_1, term_t_40);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_Id_1, term_v_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_11, (ATerm) ATempty);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Stat_1, term_x_40);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Id_1, term_e_41);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_42);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_42, (ATerm) ATempty);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_43);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_43, (ATerm) ATempty);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Some_1, term_a_44);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_11, term_b_44);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Id_1, term_d_44);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_44, (ATerm) ATempty);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Id_1, term_k_44);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Id_1, term_m_44);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_44);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_CallT_3, term_v_44, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_SDefT_4, term_r_44, (ATerm)ATempty, (ATerm)ATempty, term_x_44);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym_Op_2, term_c_45, (ATerm) ATempty);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Defined_2, term_e_45, term_u_22);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_d_45, term_g_45);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_19);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(sym__3, term_p_10, term_u_50, term_d_10);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm u_0 (ATerm);
ATerm c_1 (ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm a_11 (ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm v_4, ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_112 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm Real_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm Str_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm Int_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm y_2 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm CacheConstant_0_0 (ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm MatchArg2_0_0 (ATerm);
ATerm MatchArg1_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm k_3 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm k_113 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm v_32 (ATerm f_24, ATerm g_24, ATerm h_24, ATerm);
ATerm w_32 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm);
ATerm x_32 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm u_24, ATerm);
ATerm y_32 (ATerm y_24, ATerm a_25, ATerm c_25, ATerm d_25, ATerm);
ATerm z_32 (ATerm h_25, ATerm i_25, ATerm j_25, ATerm k_25, ATerm);
ATerm d_33 (ATerm o_25, ATerm p_25, ATerm q_25, ATerm r_25, ATerm s_25, ATerm t_25, ATerm u_25, ATerm v_25, ATerm);
ATerm e_33 (ATerm o_26, ATerm p_26, ATerm q_26, ATerm s_26, ATerm t_26, ATerm u_26, ATerm);
ATerm f_33 (ATerm e_27, ATerm f_27, ATerm h_27, ATerm i_27, ATerm j_27, ATerm k_27, ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm u_32 (ATerm l_23, ATerm m_23, ATerm n_23, ATerm p_23, ATerm);
ATerm b_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm s_125 (ATerm), ATerm);
ATerm Var_1_0 (ATerm z_91 (ATerm), ATerm);
ATerm y_37 (ATerm f_36, ATerm g_36, ATerm h_36, ATerm i_36, ATerm);
ATerm z_37 (ATerm n_36, ATerm o_36, ATerm p_36, ATerm q_36, ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm TracedBody_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm k_128 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm DeclareConstructor_0_0 (ATerm);
ATerm TranslateSig_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm TranslateSpec_0_0 (ATerm);
ATerm downup2_2_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm);
ATerm assert_1_0 (ATerm x_139 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm n_6 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm h_131 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm b_7 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_133 (ATerm), ATerm);
ATerm f_57 (ATerm x_56, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_119 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_119 (ATerm), ATerm);
ATerm _2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_132 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm h_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_132 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_134 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_136 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm parse_options_1_0 (ATerm v_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm k_134 (ATerm), ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm v_9 (ATerm);
ATerm iowrap_3_0 (ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm s_133 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_0 = NULL,r_0 = NULL;
  o_0 = t;
  t = term_d_10;
  t = whoami_0_0(t);
  r_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_0;
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_1);
        {
          ATerm i_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = eval_config_0_0(t);
              v_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_1, v_0);
              t = v_0;
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = i_10;
            }
        }
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_10 = ATgetArgument(t, 0);
              ATerm n_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_1;
          {
            ATerm q_0 (ATerm t)
            {
              t = g_1;
              return(t);
            }
            t = at_end_1_0(q_0, t);
          }
          ;
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          {
            ATerm b_1 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_1, g_1));
            if(match_cons(t, sym__2))
              {
                ATerm o_10 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("", 0, ATtrue)))
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
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_1, j_1);
      t = (ATerm) ATmakeAppl(sym__3, term_p_10, d_1, j_1);
    }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm i_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, (ATerm) ATinsert(ATempty, p_1));
  t = post_extend_config_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Include_1, p_1);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TraceAll_0)), (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue))));
  t = term_y_10;
  t = assert_1_0(y_0, t);
  t = term_z_10;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm o_1 = NULL;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_e_11);
  t = assert_1_0(f_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, o_1);
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_0, u_0, x_0, t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = f_11;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_0, c_1, e_1, t);
            ;
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            t = ArgOption_3_0(i_1, k_1, l_1, t);
          }
      }
    }
  return(t);
}
ATerm InitTermId_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
      r_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, s_1)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_1), term_r_11, r_1)));
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm u_1 = NULL;
  t = map_1_0(InitTermId_0_0, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, m_1, t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, u_1));
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm q_1 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      {
        ATerm b_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_1), term_j_12)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL,c_2 = NULL;
  ATerm k_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 = NULL,e_2 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue)), (ATerm) ATempty);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_2 = ATgetFirst((ATermList) t);
          {
            ATerm o_12 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = e_2;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm p_12 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_12) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          d_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_2;
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = k_12;
      t = (ATerm) ATempty;
    }
  x_1 = t;
  t = map_1_0(n_1, t);
  z_1 = t;
  t = x_1;
  t = InitTermIds_0_0(t);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, a_2));
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            ATerm w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_1;
        {
          ATerm t_1 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, a_2);
            return(t);
          }
          t = at_end_1_0(t_1, t);
        }
        ;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
          ATerm i_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, a_2)));
          if(match_cons(t, sym__2))
            {
              ATerm x_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_2;
          t = concat_0_0(t);
        }
      }
    c_2 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, c_2);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm z_12 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_114(t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = z_12;
        t = SRTS_one(j_2, t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm d_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = listbu1_1_0(t_2, t);
        return(t);
      }
      t = Cons_2_0(_id, v_1, t);
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_2(t);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
          }
      }
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = d_13;
      t = t_2(t);
    }
  return(t);
}
ATerm a_11 (ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm v_4, ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
  {
    ATerm i_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          t = s_4;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm n_13 = ATgetArgument(t, 0);
            ATerm q_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_4;
        t = at_end_1_0(w_1, t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = i_13;
        {
          ATerm w_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_4, s_4));
          if(match_cons(t, sym__2))
            {
              ATerm t_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_2;
          t = concat_0_0(t);
        }
      }
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
    {
      ATerm u_13 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            t = u_4;
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              ATerm i_14 = ATgetArgument(t, 0);
              ATerm s_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_4;
          t = at_end_1_0(y_1, t);
          ;
          LocalPopChoice(h_14);
        }
      else
        {
          t = u_13;
          {
            ATerm a_3 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_4, u_4));
            if(match_cons(t, sym__2))
              {
                ATerm t_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_14) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                a_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_3;
            t = concat_0_0(t);
          }
        }
      b_5 = t;
      t = (ATerm) ATmakeAppl(sym_Compound_2, a_5, b_5);
    }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm r_7 = NULL,u_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_14 = ATgetFirst((ATermList) t);
      if(match_cons(u_14, sym_Compound_2))
        {
          ATerm v_14 = ATgetArgument(u_14, 0);
          if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
            _fail(t);
          r_7 = ATgetArgument(u_14, 1);
        }
      else
        _fail(t);
      u_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_7, u_7);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 (ATerm t)
        {
          t = u_7;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm y_14 = ATgetArgument(t, 0);
            ATerm z_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_7;
        t = at_end_1_0(g_2, t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm t_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_7, u_7));
          if(match_cons(t, sym__2))
            {
              ATerm b_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              t_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_3;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_15 = ATgetFirst((ATermList) t);
      if(match_cons(c_15, sym_Compound_2))
        {
          ATerm e_15 = ATgetArgument(c_15, 0);
          if(((ATgetType(e_15) != AT_LIST) || !(ATisEmpty(e_15))))
            _fail(t);
          f_8 = ATgetArgument(c_15, 1);
        }
      else
        _fail(t);
      g_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_8, g_8);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_2 (ATerm t)
        {
          t = g_8;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            ATerm i_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_8;
        t = at_end_1_0(l_2, t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm p_6 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_8, g_8));
          if(match_cons(t, sym__2))
            {
              ATerm k_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_6;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm y_8 = NULL,d_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_15 = ATgetFirst((ATermList) t);
      if(match_cons(l_15, sym_Compound_2))
        {
          ATerm o_15 = ATgetArgument(l_15, 0);
          if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
            _fail(t);
          y_8 = ATgetArgument(l_15, 1);
        }
      else
        _fail(t);
      d_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_8, d_9);
  {
    ATerm t_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          t = d_9;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm x_15 = ATgetArgument(t, 0);
            ATerm y_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_8;
        t = at_end_1_0(n_2, t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = t_15;
        {
          ATerm u_6 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_8, d_9));
          if(match_cons(t, sym__2))
            {
              ATerm z_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_6;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_16 = ATgetFirst((ATermList) t);
      if(match_cons(a_16, sym_Compound_2))
        {
          ATerm b_16 = ATgetArgument(a_16, 0);
          if(((ATgetType(b_16) != AT_LIST) || !(ATisEmpty(b_16))))
            _fail(t);
          q_9 = ATgetArgument(a_16, 1);
        }
      else
        _fail(t);
      r_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 (ATerm t)
        {
          t = r_9;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm e_16 = ATgetArgument(t, 0);
            ATerm f_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_9;
        t = at_end_1_0(p_2, t);
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        {
          ATerm e_7 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_9, r_9));
          if(match_cons(t, sym__2))
            {
              ATerm g_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_16) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_7;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_16 = ATgetFirst((ATermList) t);
      if(match_cons(h_16, sym_Compound_2))
        {
          ATerm i_16 = ATgetArgument(h_16, 0);
          if(((ATgetType(i_16) != AT_LIST) || !(ATisEmpty(i_16))))
            _fail(t);
          g_10 = ATgetArgument(h_16, 1);
        }
      else
        _fail(t);
      h_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_10, h_10);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 (ATerm t)
        {
          t = h_10;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            ATerm m_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_10;
        t = at_end_1_0(r_2, t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        {
          ATerm s_7 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, g_10, h_10));
          if(match_cons(t, sym__2))
            {
              ATerm n_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_16) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_7;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,s_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,c_6 = NULL;
  o_5 = t;
  if(match_cons(t, sym_IfElse_3))
    {
      q_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
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
                  t = s_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      u_5 = ATgetArgument(t, 0);
                      c_6 = ATgetArgument(t, 1);
                      t = c_6;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = u_5;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              ATerm o_16 = t;
                              int p_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, q_5), i_5);
                                  ;
                                  LocalPopChoice(p_16);
                                }
                              else
                                {
                                  t = o_16;
                                  t = (ATerm) ATmakeAppl(sym_If_2, q_5, s_5);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, q_5, s_5);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, q_5, s_5);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, q_5, s_5);
                    }
                }
              else
                {
                  t = s_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      u_5 = ATgetArgument(t, 0);
                      c_6 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_5;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_6;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, q_5), i_5);
                }
            }
          else
            {
              t = s_5;
              if(match_cons(t, sym_Compound_2))
                {
                  u_5 = ATgetArgument(t, 0);
                  c_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_5;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_6;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, q_5), i_5);
            }
        }
      else
        {
          t = s_5;
          if(match_cons(t, sym_Compound_2))
            {
              u_5 = ATgetArgument(t, 0);
              c_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_5;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_6;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, q_5), i_5);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_5 = ATgetFirst((ATermList) t);
          s_5 = (ATerm) ATgetNext((ATermList) t);
          t = q_5;
          if(match_cons(t, sym_Compound_2))
            {
              m_5 = ATgetArgument(t, 0);
              n_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_5;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, n_5, s_5);
          {
            ATerm q_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_2 (ATerm t)
                {
                  t = s_5;
                  return(t);
                }
                if(match_cons(t, sym__2))
                  {
                    ATerm s_16 = ATgetArgument(t, 0);
                    ATerm t_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_5;
                t = at_end_1_0(b_2, t);
                ;
                LocalPopChoice(r_16);
              }
            else
              {
                t = q_16;
                {
                  ATerm p_3 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_5, s_5));
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_16 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      p_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_3;
                  t = concat_0_0(t);
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              q_5 = ATgetArgument(t, 0);
              s_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_5 = ATgetFirst((ATermList) t);
              c_6 = (ATerm) ATgetNext((ATermList) t);
              t = c_6;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = u_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      v_5 = ATgetArgument(t, 0);
                      w_5 = ATgetArgument(t, 1);
                      {
                        ATerm v_16 = t;
                        int w_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_7 = NULL;
                            t = s_5;
                            t = listbu1_1_0(f_2, t);
                            p_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, q_5, p_7);
                            ;
                            LocalPopChoice(w_16);
                          }
                        else
                          {
                            t = v_16;
                            {
                              ATerm x_16 = t;
                              int b_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_5 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, q_5, v_5);
                                  {
                                    ATerm c_17 = t;
                                    int d_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_2 (ATerm t)
                                        {
                                          t = v_5;
                                          return(t);
                                        }
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm e_17 = ATgetArgument(t, 0);
                                            ATerm g_17 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = q_5;
                                        t = at_end_1_0(h_2, t);
                                        ;
                                        LocalPopChoice(d_17);
                                      }
                                    else
                                      {
                                        t = c_17;
                                        {
                                          ATerm j_6 = NULL;
                                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_5, v_5));
                                          if(match_cons(t, sym__2))
                                            {
                                              ATerm i_17 = ATgetArgument(t, 0);
                                              if((ATgetSymbol((ATermAppl) i_17) != ATmakeSymbol("", 0, ATtrue)))
                                                _fail(t);
                                              j_6 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = j_6;
                                          t = concat_0_0(t);
                                        }
                                      }
                                    t_5 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, t_5, w_5);
                                  }
                                  ;
                                  LocalPopChoice(b_17);
                                }
                              else
                                {
                                  t = x_16;
                                  t = a_11(q_5, v_5, w_5, c_6, o_5, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm e_8 = NULL;
                      t = s_5;
                      t = listbu1_1_0(k_2, t);
                      e_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, q_5, e_8);
                    }
                }
              else
                {
                  t = u_5;
                  if(match_cons(t, sym_Compound_2))
                    {
                      v_5 = ATgetArgument(t, 0);
                      w_5 = ATgetArgument(t, 1);
                      {
                        ATerm j_17 = t;
                        int l_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_8 = NULL;
                            t = s_5;
                            t = listbu1_1_0(m_2, t);
                            x_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, q_5, x_8);
                            ;
                            LocalPopChoice(l_17);
                          }
                        else
                          {
                            t = j_17;
                            t = a_11(q_5, v_5, w_5, c_6, o_5, t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_9 = NULL;
                      t = s_5;
                      t = listbu1_1_0(o_2, t);
                      o_9 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, q_5, o_9);
                    }
                }
            }
          else
            {
              ATerm b_10 = NULL;
              t = s_5;
              t = listbu1_1_0(q_2, t);
              b_10 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, q_5, b_10);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm m_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_112(t);
        t = b_11(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = m_17;
      }
    return(t);
  }
  t = b_11(t);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,j_11 = NULL,k_11 = NULL,n_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_11);
  g_11 = t;
  t = j_11;
  t = w_92(t);
  k_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, k_11), g_11);
  return(t);
}
ATerm Real_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_Real_1))
    {
      g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_12);
  e_12 = t;
  t = g_12;
  t = c_92(t);
  h_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, h_12), e_12);
  return(t);
}
ATerm Str_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,q_12 = NULL,r_12 = NULL,u_12 = NULL;
  u_12 = t;
  if(match_cons(t, sym_Str_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  n_12 = t;
  t = q_12;
  t = d_92(t);
  r_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, r_12), n_12);
  return(t);
}
ATerm Int_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,a_13 = NULL,b_13 = NULL,e_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_Int_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_13);
  y_12 = t;
  t = a_13;
  t = b_92(t);
  b_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, b_13), y_12);
  return(t);
}
ATerm Anno_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,o_13 = NULL,p_13 = NULL,r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      k_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  j_13 = t;
  t = k_13;
  t = l_92(t);
  p_13 = t;
  t = o_13;
  t = m_92(t);
  r_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, p_13, r_13), j_13);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_17 = t;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL;
      x_13 = t;
      if(match_string(t, "Nil"))
        {
          t = x_13;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          t = x_13;
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_17;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = Cons_2_0(proper_list_0_0, z_2, t);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(s_2, u_2, t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              t = Cons_2_0(_id, y_2, t);
              return(t);
            }
            t = Op_2_0(v_2, x_2, t);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = Op_2_0(b_3, _id, t);
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,b_14 = NULL,c_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Op_2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_14);
  y_13 = t;
  t = b_14;
  t = f_92(t);
  e_14 = t;
  t = c_14;
  t = g_92(t);
  f_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, e_14, f_14), y_13);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = map_1_0(Cache_0_0, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm CacheConstant_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_14;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Op_2_0(_id, c_3, t);
        t = proper_list_0_0(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Anno_2_0(Cache_0_0, Cache_0_0, t);
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
                    t = Int_1_0(_id, t);
                    ;
                    LocalPopChoice(l_18);
                  }
                else
                  {
                    t = k_18;
                    {
                      ATerm m_18 = t;
                      int n_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1_0(_id, t);
                          ;
                          LocalPopChoice(n_18);
                        }
                      else
                        {
                          t = m_18;
                          {
                            ATerm q_18 = t;
                            int r_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1_0(_id, t);
                                ;
                                LocalPopChoice(r_18);
                              }
                            else
                              {
                                t = q_18;
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
    l_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_18, l_14);
    t = conc_strings_0_0(t);
    m_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_14, (ATerm) ATmakeAppl(sym_Defined_2, term_t_18, m_14));
    t = assert_1_0(d_3, t);
    t = m_14;
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL,p_14 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_14 = ATgetFirst((ATermList) t);
              {
                ATerm y_18 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = p_14;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm a_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_19) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              o_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_14;
          ;
          LocalPopChoice(x_18);
        }
      else
        {
          t = w_18;
          t = (ATerm) ATempty;
        }
      n_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_19, (ATerm) ATinsert(CheckATermList(n_14), (ATerm) ATmakeAppl(sym__3, l_14, m_14, k_14))));
      t = assert_1_0(e_3, t);
      t = (ATerm) ATmakeAppl(sym_Id_1, m_14);
    }
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL,a_8 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue)), a_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_8 = ATgetFirst((ATermList) t);
            {
              ATerm e_19 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_8;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            z_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, z_7);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm l_8 = NULL,o_8 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue)), a_15);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_8 = ATgetFirst((ATermList) t);
              {
                ATerm g_19 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = o_8;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              l_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_8;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm j_15 = NULL,z_8 = NULL;
        j_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              {
                ATerm m_19 = t;
                int n_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(n_19);
                  }
                else
                  {
                    t = m_19;
                  }
              }
            }
          z_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_15, z_8);
          {
            ATerm o_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CacheConstant_0_0(t);
                ;
                LocalPopChoice(p_19);
              }
            else
              {
                t = o_19;
                {
                  ATerm j_9 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_15, z_8));
                  if(match_cons(t, sym__2))
                    {
                      ATerm q_19 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) q_19) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm r_19 = ATgetArgument(t, 1);
                        if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
                          {
                            ATerm s_19 = ATgetFirst((ATermList) r_19);
                            ATerm t_19 = (ATerm) ATgetNext((ATermList) r_19);
                            if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
                              {
                                j_9 = ATgetFirst((ATermList) t_19);
                                {
                                  ATerm u_19 = (ATerm) ATgetNext((ATermList) t_19);
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
                  t = j_9;
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
  ATerm m_15 = NULL,n_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_15), term_j_12), (ATerm) ATmakeAppl(sym_AssignInit_1, n_15)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, m_15, (ATerm) ATmakeAppl(sym_Id_1, p_15))));
  return(t);
}
ATerm MatchArg1_0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      q_15 = v_19;
      if(match_cons(v_19, sym_Var_1))
        {
          r_15 = ATgetArgument(v_19, 0);
        }
      else
        _fail(t);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  u_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, r_15), u_15);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, v_15, s_15);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm h_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_19 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(h_17, k_17);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = x_19;
        t = SSL_addr(h_17, k_17);
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  z_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_17 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_20, (ATerm) ATinsert(ATinsert(ATempty, y_16), a_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          a_17 = ATgetArgument(t, 0);
          y_16 = ATgetArgument(t, 1);
          {
            ATerm f_17 = NULL,t_9 = NULL,u_9 = NULL;
            t = y_16;
            t = foldr_3_0(f_3, g_3, h_3, t);
            f_17 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, a_17, f_17));
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_9 = ATgetFirst((ATermList) t);
                {
                  ATerm p_20 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = u_9;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm q_20 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_20) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                t_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(CheckATermList(y_16), (ATerm) ATmakeAppl(sym_Id_1, t_9))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              a_17 = ATgetArgument(t, 0);
              t = a_17;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  a_17 = ATgetArgument(t, 0);
                  {
                    ATerm t_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(z_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm v_20 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm w_20 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(w_20) != AT_LIST) || !(ATisEmpty(w_20))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_17)));
                        ;
                        LocalPopChoice(u_20);
                      }
                    else
                      {
                        t = t_20;
                        {
                          ATerm d_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(z_16);
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_17)));
                              ;
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = d_21;
                              t = SSLgetAnnotations(z_16);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm g_21 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("bound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(h_21) != AT_LIST) || !(ATisEmpty(h_21))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, a_17);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      a_17 = ATgetArgument(t, 0);
                      {
                        ATerm n_17 = NULL,d_11 = NULL,h_11 = NULL,i_11 = NULL,m_11 = NULL;
                        t = SSL_explode_string(a_17);
                        t = escape_chars_0_0(t);
                        d_11 = t;
                        t = SSL_implode_string(d_11);
                        h_11 = t;
                        t = SSL_explode_string(h_11);
                        m_11 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_11), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
                        {
                          ATerm i_21 = t;
                          int j_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm k_21 = ATgetArgument(t, 0);
                                  ATerm m_21 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(m_11), term_h_20);
                              t = at_end_1_0(i_3, t);
                              ;
                              LocalPopChoice(j_21);
                            }
                          else
                            {
                              t = i_21;
                              {
                                ATerm u_11 = NULL;
                                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_11), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm o_21 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) o_21) != ATmakeSymbol("", 0, ATtrue)))
                                      _fail(t);
                                    u_11 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = u_11;
                                t = concat_0_0(t);
                              }
                            }
                          i_11 = t;
                          t = SSL_implode_string(i_11);
                          n_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), term_v_21), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, n_17)))))));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          a_17 = ATgetArgument(t, 0);
                          {
                            ATerm z_11 = NULL;
                            t = SSL_real_to_string(a_17);
                            z_11 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, z_11))));
                          }
                        }
                      else
                        {
                          ATerm l_12 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              a_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(a_17);
                          l_12 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, l_12))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Id_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_18);
  y_17 = t;
  t = z_17;
  t = f_102(t);
  a_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, a_18), y_17);
  return(t);
}
ATerm FunCall_2_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_FunCall_2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_18);
  e_18 = t;
  t = f_18;
  t = h_105(t);
  h_18 = t;
  t = g_18;
  t = i_105(t);
  i_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, h_18, i_18), e_18);
  return(t);
}
ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = Id_1_0(m_3, t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  if(match_string(t, "Cons"))
    {
      ATerm l_13 = NULL;
      t = e_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_19 = ATgetFirst((ATermList) t);
          z_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_20 = ATgetFirst((ATermList) t);
          b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_20;
      {
        ATerm d_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_13 = NULL,w_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,q_14 = NULL,r_14 = NULL,d_15 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                v_13 = ATgetArgument(t, 0);
                d_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_13;
            if(match_cons(t, sym_TypeName_2))
              {
                w_13 = ATgetArgument(t, 0);
                r_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_13;
            if(match_cons(t, sym_TypeSpec_3))
              {
                z_13 = ATgetArgument(t, 0);
                a_14 = ATgetArgument(t, 1);
                q_14 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_13;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_14;
            if(match_cons(t, sym_TypeId_1))
              {
                d_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_14;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = q_14;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_14;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = d_15;
            {
              ATerm h_22 = t;
              int i_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Id_1_0(j_3, t);
                  ;
                  LocalPopChoice(i_22);
                }
              else
                {
                  t = h_22;
                  {
                    ATerm l_3 (ATerm t)
                    {
                      ATerm n_3 (ATerm t)
                      {
                        t = Cons_2_0(_id, o_3, t);
                        return(t);
                      }
                      t = Cons_2_0(_id, n_3, t);
                      return(t);
                    }
                    t = FunCall_2_0(k_3, l_3, t);
                  }
                }
            }
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = d_22;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, a_20));
          }
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, y_19), l_13)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = e_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_22;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = bottomup_1_0(k_113, t);
    return(t);
  }
  t = SRTS_all(q_3, t);
  t = k_113(t);
  return(t);
}
ATerm topdown_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  t = j_113(t);
  {
    ATerm r_3 (ATerm t)
    {
      t = topdown_1_0(j_113, t);
      return(t);
    }
    t = SRTS_all(r_3, t);
  }
  return(t);
}
ATerm v_32 (ATerm f_24, ATerm g_24, ATerm h_24, ATerm t)
{
  ATerm k_24 = NULL;
  t = SSL_real_to_string(f_24);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, g_24)), term_y_22), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_23, g_24))), (ATerm) ATmakeAppl(sym_FloatConst_1, k_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23))));
  return(t);
}
ATerm w_32 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm q_24 = NULL;
  t = SSL_int_to_string(l_24);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, m_24)), term_k_23), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_24, m_24))), (ATerm) ATmakeAppl(sym_IntConst_1, q_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23))));
  return(t);
}
ATerm x_32 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSLgetAnnotations(r_24);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, s_24), term_p_24), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, s_24), t_24)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, t_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_24), term_r_11, t_24)));
  return(t);
}
ATerm y_32 (ATerm y_24, ATerm a_25, ATerm c_25, ATerm d_25, ATerm t)
{
  t = SSLgetAnnotations(y_24);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_24 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) v_24) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_24 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_25), c_25), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, c_25))))));
  return(t);
}
ATerm z_32 (ATerm h_25, ATerm i_25, ATerm j_25, ATerm k_25, ATerm t)
{
  t = SSLgetAnnotations(h_25);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_24 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_25 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_25) != AT_LIST) || !(ATisEmpty(b_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_25), term_r_11, j_25));
  return(t);
}
ATerm d_33 (ATerm o_25, ATerm p_25, ATerm q_25, ATerm r_25, ATerm s_25, ATerm t_25, ATerm u_25, ATerm v_25, ATerm t)
{
  ATerm d_26 = NULL,f_26 = NULL,u_18 = NULL,v_18 = NULL;
  t = p_25;
  {
    ATerm e_25 = t;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        g_26 = t;
        if(match_string(t, "Nil"))
          {
            t = g_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = g_26;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_25;
      }
    t = (ATerm) ATmakeAppl(sym__2, r_25, term_w_19);
    {
      ATerm x_3 (ATerm t)
      {
        ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            if(match_cons(f_25, sym_Var_1))
              {
                h_26 = ATgetArgument(f_25, 0);
              }
            else
              _fail(t);
            i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(i_26);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, term_g_20);
        {
          ATerm g_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(i_26, (ATerm) ATmakeInt(1));
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = g_25;
              t = SSL_addr(i_26, (ATerm) ATmakeInt(1));
            }
          k_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_26), term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, j_26)), (ATerm) ATmakeAppl(sym_Id_1, o_25))))), k_26);
        }
        return(t);
      }
      t = thread_map_1_0(x_3, t);
      if(match_cons(t, sym__2))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, p_25, q_25));
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_18 = ATgetFirst((ATermList) t);
          {
            ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = v_18;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm y_25 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          u_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, d_26, (ATerm) ATinsert(ATempty, s_25));
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, s_25);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                ATerm b_26 = ATgetArgument(t, 0);
                ATerm c_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_26;
            t = at_end_1_0(y_3, t);
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm z_18 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_26, (ATerm) ATinsert(ATempty, s_25)));
              if(match_cons(t, sym__2))
                {
                  ATerm e_26 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_26) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  z_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_18;
              t = concat_0_0(t);
            }
          }
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_18)), (ATerm) ATmakeAppl(sym_Id_1, o_25))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, f_26), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, o_25), t_25, u_25))));
      }
    }
  }
  return(t);
}
ATerm e_33 (ATerm o_26, ATerm p_26, ATerm q_26, ATerm s_26, ATerm t_26, ATerm u_26, ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_real_to_string(p_26);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, d_27)), (ATerm) ATmakeAppl(sym_Id_1, o_26))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_26)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, o_26), s_26, t_26))));
  return(t);
}
ATerm f_33 (ATerm e_27, ATerm f_27, ATerm h_27, ATerm i_27, ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm q_27 = NULL;
  t = SSL_int_to_string(f_27);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, q_27)), (ATerm) ATmakeAppl(sym_Id_1, e_27))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_27)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_27), i_27, j_27))));
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_24, e_24);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = SSL_addr(c_24, e_24);
      }
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm m_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      if(match_cons(c_27, sym_SVar_1))
        {
          m_29 = ATgetArgument(c_27, 0);
        }
      else
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
          _fail(t);
      }
      {
        ATerm l_27 = ATgetArgument(t, 2);
        if(((ATgetType(l_27) != AT_LIST) || !(ATisEmpty(l_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, m_29);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
          }
      }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym_SVar_1))
        {
          l_20 = ATgetArgument(u_27, 0);
        }
      else
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
        if(((ATgetType(v_27) != AT_LIST) || !(ATisEmpty(v_27))))
          _fail(t);
      }
      {
        ATerm w_27 = ATgetArgument(t, 2);
        if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, l_20);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm x_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = x_27;
      {
        ATerm b_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = b_28;
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_30), term_j_12), term_c_29);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm d_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatchArg1_0_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = d_29;
      t = MatchArg2_0_0(t);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm u_32 (ATerm l_23, ATerm m_23, ATerm n_23, ATerm p_23, ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,o_18 = NULL,p_18 = NULL;
  t = l_23;
  {
    ATerm g_29 = t;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        w_23 = t;
        if(match_string(t, "Nil"))
          {
            t = w_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = w_23;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_29;
      }
    t = (ATerm) ATmakeAppl(sym__2, m_23, term_w_19);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
        if(match_cons(t, sym__2))
          {
            x_23 = ATgetArgument(t, 0);
            y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(y_23);
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, z_23)), n_23)));
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchArg1_0_0(t);
              ;
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = MatchArg2_0_0(t);
            }
          a_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_23, term_g_20);
          {
            ATerm n_29 = t;
            int p_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(y_23, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_29);
              }
            else
              {
                t = n_29;
                t = SSL_addr(y_23, (ATerm) ATmakeInt(1));
              }
            b_24 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_24, b_24);
          }
        }
        return(t);
      }
      t = thread_map_1_0(s_3, t);
      if(match_cons(t, sym__2))
        {
          t_23 = ATgetArgument(t, 0);
          {
            ATerm q_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_23;
      t = foldr_3_0(u_3, v_3, w_3, t);
      u_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, l_23, u_23));
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_18 = ATgetFirst((ATermList) t);
          {
            ATerm s_29 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = p_18;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm t_29 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          o_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_18)), n_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, t_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23))));
    }
  }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(c_4, t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm w_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_4, t);
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = w_29;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, term_d_30);
  t = assert_1_0(j_4, t);
  t = q_30;
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm g_33 (ATerm r_27, ATerm s_27, ATerm t_27, ATerm t)
  {
    t = s_27;
    {
      ATerm f_30 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_30;
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_27)));
    }
    return(t);
  }
  ATerm y_27 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  z_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_29 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, a_29, (ATerm) ATinsert(ATempty, x_28));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          a_29 = ATgetArgument(t, 0);
          {
            ATerm e_29 = NULL;
            t = z_28;
            t = new_0_0(t);
            e_29 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_29), term_j_12))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_Id_1, e_29)))), a_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_29), term_r_11, term_i_23))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              a_29 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, a_29);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  a_29 = ATgetArgument(t, 0);
                  x_28 = ATgetArgument(t, 1);
                  u_28 = ATgetArgument(t, 2);
                  {
                    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
                    t = a_29;
                    if(match_cons(t, sym_SVar_1))
                      {
                        y_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_28;
                    t = map_1_0(z_3, t);
                    j_29 = t;
                    t = u_28;
                    {
                      ATerm a_4 (ATerm t)
                      {
                        t = topdown_1_0(b_4, t);
                        return(t);
                      }
                      t = map_1_0(a_4, t);
                      k_29 = t;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_23)), k_29), j_29);
                      t = concat_0_0(t);
                      l_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, y_28), l_29)));
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      a_29 = ATgetArgument(t, 0);
                      x_28 = ATgetArgument(t, 1);
                      u_28 = ATgetArgument(t, 2);
                      {
                        ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
                        t = x_28;
                        t = map_1_0(d_4, t);
                        i_20 = t;
                        t = u_28;
                        {
                          ATerm e_4 (ATerm t)
                          {
                            t = topdown_1_0(f_4, t);
                            return(t);
                          }
                          t = map_1_0(e_4, t);
                          j_20 = t;
                          t = (ATerm) ATmakeAppl(sym__2, i_20, j_20);
                          {
                            ATerm g_30 = t;
                            int h_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_4 (ATerm t)
                                {
                                  t = j_20;
                                  return(t);
                                }
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm i_30 = ATgetArgument(t, 0);
                                    ATerm l_30 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = i_20;
                                t = at_end_1_0(h_4, t);
                                ;
                                LocalPopChoice(h_30);
                              }
                            else
                              {
                                t = g_30;
                                {
                                  ATerm x_20 = NULL;
                                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_20, j_20));
                                  if(match_cons(t, sym__2))
                                    {
                                      ATerm m_30 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("", 0, ATtrue)))
                                        _fail(t);
                                      x_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = x_20;
                                  t = concat_0_0(t);
                                }
                              }
                            k_20 = t;
                            t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, a_29), k_20)));
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          a_29 = ATgetArgument(t, 0);
                          {
                            ATerm o_29 = NULL;
                            t = z_28;
                            t = new_0_0(t);
                            o_29 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_29), term_j_12), term_n_30)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_30, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_31), term_b_31), a_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_Id_1, o_29))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              a_29 = ATgetArgument(t, 0);
                              x_28 = ATgetArgument(t, 1);
                              {
                                ATerm r_29 = NULL;
                                t = z_28;
                                t = new_0_0(t);
                                r_29 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_29), term_j_12), term_n_30)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_h_31, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_Id_1, r_29))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  a_29 = ATgetArgument(t, 0);
                                  x_28 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, a_29, x_28);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      a_29 = ATgetArgument(t, 0);
                                      x_28 = ATgetArgument(t, 1);
                                      u_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm x_29 = NULL,y_29 = NULL;
                                        t = z_28;
                                        t = new_0_0(t);
                                        x_29 = t;
                                        t = new_0_0(t);
                                        y_29 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_29), term_j_12), term_n_31)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_29), term_j_12), term_n_30)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_30, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_29))))), a_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, u_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_Id_1, x_29))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          a_29 = ATgetArgument(t, 0);
                                          x_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_30 = NULL,c_30 = NULL;
                                            t = z_28;
                                            t = new_0_0(t);
                                            b_30 = t;
                                            t = new_0_0(t);
                                            c_30 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_r_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_30), term_j_12), term_n_31)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_30), term_j_12), term_n_30)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_v_30, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_30))))), term_t_31), a_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, (ATerm) ATmakeAppl(sym_Id_1, b_30))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              a_29 = ATgetArgument(t, 0);
                                              x_28 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, a_29, x_28);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  a_29 = ATgetArgument(t, 0);
                                                  x_28 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_28), a_29));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      a_29 = ATgetArgument(t, 0);
                                                      x_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm p_30 = NULL;
                                                        t = a_29;
                                                        t = map_1_0(i_4, t);
                                                        t = a_29;
                                                        t = map_1_0(k_4, t);
                                                        p_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, p_30)), (ATerm) ATinsert(ATempty, x_28));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_u_31;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  a_29 = ATgetArgument(t, 0);
                                                                  x_28 = ATgetArgument(t, 1);
                                                                  t = a_29;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      y_28 = ATgetArgument(t, 0);
                                                                      e_28 = ATgetArgument(t, 1);
                                                                      t = e_28;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          y_27 = ATgetFirst((ATermList) t);
                                                                          a_28 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = a_28;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              c_28 = ATgetFirst((ATermList) t);
                                                                              d_28 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = d_28;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = y_28;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm v_31 = t;
                                                                                      int w_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm w_30 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_28, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_32, x_28)))))), (ATerm) ATmakeAppl(sym__2, y_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_32, x_28)))));
                                                                                          t = map_1_0(l_4, t);
                                                                                          w_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, x_28)), term_h_32), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATempty, x_28)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_30), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23))));
                                                                                          ;
                                                                                          LocalPopChoice(w_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_31;
                                                                                          t = u_32(y_28, e_28, x_28, z_28, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_32(y_28, e_28, x_28, z_28, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_28;
                                                                                  t = u_32(y_28, e_28, x_28, z_28, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_28;
                                                                              t = u_32(y_28, e_28, x_28, z_28, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = y_28;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm k_32 = t;
                                                                                  int l_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, x_28)), term_h_32), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATempty, x_28)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23))));
                                                                                      ;
                                                                                      LocalPopChoice(l_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_32;
                                                                                      t = u_32(y_28, e_28, x_28, z_28, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_32(y_28, e_28, x_28, z_28, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_28;
                                                                              t = u_32(y_28, e_28, x_28, z_28, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          y_28 = ATgetArgument(t, 0);
                                                                          t = v_32(y_28, x_28, z_28, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              y_28 = ATgetArgument(t, 0);
                                                                              t = w_32(y_28, x_28, z_28, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  y_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm a_31 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL,e_21 = NULL;
                                                                                    t = SSL_explode_string(y_28);
                                                                                    t = escape_chars_0_0(t);
                                                                                    z_20 = t;
                                                                                    t = SSL_implode_string(z_20);
                                                                                    b_21 = t;
                                                                                    t = SSL_explode_string(b_21);
                                                                                    e_21 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_21), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
                                                                                    {
                                                                                      ATerm m_32 = t;
                                                                                      int n_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym__2))
                                                                                            {
                                                                                              ATerm o_32 = ATgetArgument(t, 0);
                                                                                              ATerm p_32 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATinsert(CheckATermList(e_21), term_h_20);
                                                                                          t = at_end_1_0(m_4, t);
                                                                                          ;
                                                                                          LocalPopChoice(n_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_32;
                                                                                          {
                                                                                            ATerm l_21 = NULL;
                                                                                            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_21), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                                                                                            if(match_cons(t, sym__2))
                                                                                              {
                                                                                                ATerm q_32 = ATgetArgument(t, 0);
                                                                                                if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
                                                                                                  _fail(t);
                                                                                                l_21 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            t = l_21;
                                                                                            t = concat_0_0(t);
                                                                                          }
                                                                                        }
                                                                                      c_21 = t;
                                                                                      t = SSL_implode_string(c_21);
                                                                                      a_31 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_33, x_28))), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), term_v_21), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, a_31))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, term_i_23))));
                                                                                    }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      y_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm q_33 = t;
                                                                                        int t_33 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = x_32(a_29, y_28, x_28, z_28, t);
                                                                                            ;
                                                                                            LocalPopChoice(t_33);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = q_33;
                                                                                            {
                                                                                              ATerm w_33 = t;
                                                                                              int x_33 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = y_32(a_29, y_28, x_28, z_28, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(x_33);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = w_33;
                                                                                                  t = z_32(a_29, y_28, x_28, z_28, t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          y_28 = ATgetArgument(t, 0);
                                                                                          e_28 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, e_28, x_28)), (ATerm) ATmakeAppl(sym_Match_2, y_28, x_28)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm y_33 = t;
                                                                                          int b_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm d_34 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(b_34);
                                                                                              t = term_u_31;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_33;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_u_31;
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
                                                                      a_29 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, a_29, term_i_23);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          a_29 = ATgetArgument(t, 0);
                                                                          x_28 = ATgetArgument(t, 1);
                                                                          u_28 = ATgetArgument(t, 2);
                                                                          t = a_29;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              y_28 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = x_28;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_28 = ATgetFirst((ATermList) t);
                                                                              r_28 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = w_28;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  m_28 = ATgetArgument(t, 0);
                                                                                  p_28 = ATgetArgument(t, 1);
                                                                                  q_28 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = m_28;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  n_28 = ATgetArgument(t, 0);
                                                                                  l_28 = ATgetArgument(t, 1);
                                                                                  t = p_28;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_28 = ATgetFirst((ATermList) t);
                                                                                      h_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = h_28;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          i_28 = ATgetFirst((ATermList) t);
                                                                                          k_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = k_28;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = i_28;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  j_28 = ATgetArgument(t, 0);
                                                                                                  t = f_28;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      g_28 = ATgetArgument(t, 0);
                                                                                                      t = l_28;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = n_28;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm e_34 = t;
                                                                                                              int f_34 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_28))), term_h_32), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_28))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_28), term_r_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_32, (ATerm) ATmakeAppl(sym_Id_1, y_28)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_28), term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_32, (ATerm) ATmakeAppl(sym_Id_1, y_28)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, y_28), r_28, u_28))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(f_34);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_34;
                                                                                                                  t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_28;
                                                                                                          t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_28;
                                                                                                      t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_28;
                                                                                                  t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_28;
                                                                                              t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_28;
                                                                                          t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = l_28;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = n_28;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm g_34 = t;
                                                                                                  int h_34 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_28))), term_h_32), (ATerm) ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_28)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_28), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, y_28), r_28, u_28))));
                                                                                                      ;
                                                                                                      LocalPopChoice(h_34);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_34;
                                                                                                      t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_28;
                                                                                              t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_28;
                                                                                          t = d_33(y_28, n_28, l_28, p_28, q_28, r_28, u_28, z_28, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      n_28 = ATgetArgument(t, 0);
                                                                                      t = e_33(y_28, n_28, q_28, r_28, u_28, z_28, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          n_28 = ATgetArgument(t, 0);
                                                                                          t = f_33(y_28, n_28, q_28, r_28, u_28, z_28, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm a_32 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,s_21 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              n_28 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(n_28);
                                                                                          t = escape_chars_0_0(t);
                                                                                          n_21 = t;
                                                                                          t = SSL_implode_string(n_21);
                                                                                          p_21 = t;
                                                                                          t = SSL_explode_string(p_21);
                                                                                          s_21 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_21), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
                                                                                          {
                                                                                            ATerm i_34 = t;
                                                                                            int j_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym__2))
                                                                                                  {
                                                                                                    ATerm k_34 = ATgetArgument(t, 0);
                                                                                                    ATerm l_34 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                t = (ATerm) ATinsert(CheckATermList(s_21), term_h_20);
                                                                                                t = at_end_1_0(n_4, t);
                                                                                                ;
                                                                                                LocalPopChoice(j_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_34;
                                                                                                {
                                                                                                  ATerm z_21 = NULL;
                                                                                                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_21), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                                                                                                  if(match_cons(t, sym__2))
                                                                                                    {
                                                                                                      ATerm m_34 = ATgetArgument(t, 0);
                                                                                                      if((ATgetSymbol((ATermAppl) m_34) != ATmakeSymbol("", 0, ATtrue)))
                                                                                                        _fail(t);
                                                                                                      z_21 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = z_21;
                                                                                                  t = concat_0_0(t);
                                                                                                }
                                                                                              }
                                                                                            q_21 = t;
                                                                                            t = SSL_implode_string(q_21);
                                                                                            a_32 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_34, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, a_32))), (ATerm) ATmakeAppl(sym_Id_1, y_28))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_28)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, y_28), r_28, u_28))));
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = u_28;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              a_29 = ATgetArgument(t, 0);
                                                                              x_28 = ATgetArgument(t, 1);
                                                                              u_28 = ATgetArgument(t, 2);
                                                                              v_28 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, a_29), (ATerm) ATmakeAppl(sym_Case_3, x_28, u_28, v_28));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  a_29 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, a_29));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      a_29 = ATgetArgument(t, 0);
                                                                                      x_28 = ATgetArgument(t, 1);
                                                                                      t = a_29;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          y_28 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = x_28;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          w_28 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm p_34 = t;
                                                                                            int q_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, y_28), term_p_24), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, y_28), (ATerm) ATmakeAppl(sym_Id_1, w_28))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_28)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_28), term_r_11, (ATerm) ATmakeAppl(sym_Id_1, w_28))));
                                                                                                ;
                                                                                                LocalPopChoice(q_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_34;
                                                                                                t = g_33(y_28, x_28, z_28, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_33(y_28, x_28, z_28, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          a_29 = ATgetArgument(t, 0);
                                                                                          t = a_29;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              y_28 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_28), term_r_11, term_i_23));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm s_32 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              a_29 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_29;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          s_32 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_i_23, term_r_11, s_32));
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          h_33 = ATgetFirst((ATermList) r_34);
          i_33 = (ATerm) ATgetNext((ATermList) r_34);
        }
      else
        _fail(t);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_33, j_33);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_33, m_33);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_33), l_33), n_33);
  return(t);
}
ATerm thread_map_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  ATerm u_33 (ATerm t)
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(s_125, u_33, t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        {
          ATerm r_33 = NULL,s_33 = NULL;
          r_33 = t;
          if(match_cons(t, sym__2))
            {
              s_33 = ATgetArgument(t, 0);
              {
                ATerm u_34 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = s_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_33;
        }
      }
    return(t);
  }
  t = u_33(t);
  return(t);
}
ATerm Var_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,z_33 = NULL,a_34 = NULL,c_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_34);
  v_33 = t;
  t = z_33;
  t = z_91(t);
  a_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, a_34), v_33);
  return(t);
}
ATerm y_37 (ATerm f_36, ATerm g_36, ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm m_36 = NULL;
  t = SSL_real_to_string(f_36);
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, m_36)), term_i_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_36)));
  return(t);
}
ATerm z_37 (ATerm n_36, ATerm o_36, ATerm p_36, ATerm q_36, ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_int_to_string(n_36);
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), term_i_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_36)));
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(match_cons(v_34, sym_Var_1))
        {
          w_35 = ATgetArgument(v_34, 0);
        }
      else
        _fail(t);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(x_35);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_35, term_g_20);
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(x_35, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = SSL_addr(x_35, (ATerm) ATmakeInt(1));
      }
    z_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_35), term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_35)), term_i_23)))), z_35);
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  if(match_cons(t, sym__2))
    {
      a_36 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_36, b_36);
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = SSL_addr(a_36, b_36);
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm x_37 (ATerm i_35, ATerm j_35, ATerm k_35, ATerm l_35, ATerm m_35, ATerm t)
  {
    ATerm r_35 = NULL,s_35 = NULL,u_35 = NULL,e_22 = NULL,f_22 = NULL;
    t = i_35;
    {
      ATerm a_35 = t;
      if((PushChoice() == 0))
        {
          ATerm v_35 = NULL;
          v_35 = t;
          if(match_string(t, "Nil"))
            {
              t = v_35;
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = v_35;
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_35;
        }
      t = j_35;
      {
        ATerm o_4 (ATerm t)
        {
          t = Var_1_0(_id, t);
          return(t);
        }
        t = map_1_0(o_4, t);
        t = (ATerm) ATmakeAppl(sym__2, j_35, term_w_19);
        t = thread_map_1_0(p_4, t);
        if(match_cons(t, sym__2))
          {
            r_35 = ATgetArgument(t, 0);
            {
              ATerm b_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = j_35;
        t = foldr_3_0(q_4, w_4, x_4, t);
        s_35 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, i_35, s_35));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_22 = ATgetFirst((ATermList) t);
            {
              ATerm c_35 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_22;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_35) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_35, (ATerm) ATinsert(ATempty, k_35));
        {
          ATerm e_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_4 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, k_35);
                return(t);
              }
              if(match_cons(t, sym__2))
                {
                  ATerm g_35 = ATgetArgument(t, 0);
                  ATerm h_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_35;
              t = at_end_1_0(y_4, t);
              ;
              LocalPopChoice(f_35);
            }
          else
            {
              t = e_35;
              {
                ATerm j_22 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_35, (ATerm) ATinsert(ATempty, k_35)));
                if(match_cons(t, sym__2))
                  {
                    ATerm n_35 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_35) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    j_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_22;
                t = concat_0_0(t);
              }
            }
          u_35 = t;
          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_22)), term_i_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, u_35), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_35)));
        }
      }
    }
    return(t);
  }
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      d_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
      h_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_37;
  if(match_cons(t, sym_Match_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_37;
  if(match_cons(t, sym_Op_2))
    {
      f_37 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
      t = b_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_36 = ATgetFirst((ATermList) t);
          x_36 = (ATerm) ATgetNext((ATermList) t);
          t = x_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_36 = ATgetFirst((ATermList) t);
              a_37 = (ATerm) ATgetNext((ATermList) t);
              t = a_37;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = y_36;
                  if(match_cons(t, sym_Var_1))
                    {
                      z_36 = ATgetArgument(t, 0);
                      t = v_36;
                      if(match_cons(t, sym_Var_1))
                        {
                          w_36 = ATgetArgument(t, 0);
                          t = f_37;
                          if(match_string(t, "Cons"))
                            {
                              ATerm o_35 = t;
                              int p_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, term_i_23)), term_h_32), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATempty, term_i_23)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_36), term_r_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_32, (ATerm) ATinsert(ATempty, term_q_35)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_36), term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_31, (ATerm) ATinsert(ATempty, term_q_35)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_37)));
                                  ;
                                  LocalPopChoice(p_35);
                                }
                              else
                                {
                                  t = o_35;
                                  t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                                }
                            }
                          else
                            {
                              t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                            }
                        }
                      else
                        {
                          t = f_37;
                          t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                        }
                    }
                  else
                    {
                      t = f_37;
                      t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                    }
                }
              else
                {
                  t = f_37;
                  t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                }
            }
          else
            {
              t = f_37;
              t = x_37(f_37, b_37, g_37, h_37, c_37, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = f_37;
              if(match_string(t, "Nil"))
                {
                  ATerm t_35 = t;
                  int c_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, term_i_23)), term_h_32), (ATerm) ATmakeAppl(sym_FunCall_2, term_j_32, (ATerm) ATinsert(ATempty, term_i_23))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_37)));
                      ;
                      LocalPopChoice(c_36);
                    }
                  else
                    {
                      t = t_35;
                      t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                    }
                }
              else
                {
                  t = x_37(f_37, b_37, g_37, h_37, c_37, t);
                }
            }
          else
            {
              t = f_37;
              t = x_37(f_37, b_37, g_37, h_37, c_37, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          f_37 = ATgetArgument(t, 0);
          t = y_37(f_37, g_37, h_37, c_37, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_37 = ATgetArgument(t, 0);
              t = z_37(f_37, g_37, h_37, c_37, t);
            }
          else
            {
              ATerm s_37 = NULL,l_22 = NULL,n_22 = NULL,o_22 = NULL,q_22 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  f_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(f_37);
              t = escape_chars_0_0(t);
              l_22 = t;
              t = SSL_implode_string(l_22);
              n_22 = t;
              t = SSL_explode_string(n_22);
              q_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_22), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
              {
                ATerm d_36 = t;
                int e_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm j_36 = ATgetArgument(t, 0);
                        ATerm k_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(q_22), term_h_20);
                    t = at_end_1_0(z_4, t);
                    ;
                    LocalPopChoice(e_36);
                  }
                else
                  {
                    t = d_36;
                    {
                      ATerm o_23 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_22), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                      if(match_cons(t, sym__2))
                        {
                          ATerm l_36 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          o_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_23;
                      t = concat_0_0(t);
                    }
                  }
                o_22 = t;
                t = SSL_implode_string(o_22);
                s_37 = t;
                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_34, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_37))), term_i_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_37)));
              }
            }
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_36 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_38 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_37 = ATgetFirst((ATermList) t);
              if(((ATgetType(j_37) != AT_INT) || (ATgetInt((ATermInt) j_37) != 34)))
                _fail(t);
              c_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_38), term_h_20), term_k_37);
          ;
          LocalPopChoice(i_37);
        }
      else
        {
          t = t_36;
          {
            ATerm e_38 = NULL,f_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_38 = ATgetFirst((ATermList) t);
                f_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_38;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(f_38), term_k_37), term_k_37);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(f_38), term_l_37), term_k_37);
              }
          }
        }
      {
        ATerm c_5 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, c_5, t);
      }
      ;
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm m_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(n_37);
          }
        else
          {
            t = m_37;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm TracedBody_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,d_24 = NULL,z_24 = NULL,r_26 = NULL,w_26 = NULL,b_27 = NULL,t_28 = NULL,e_30 = NULL,j_30 = NULL,k_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_37), l_38);
  t = concat_strings_0_0(t);
  d_24 = t;
  t = SSL_explode_string(d_24);
  t = escape_chars_0_0(t);
  z_24 = t;
  t = SSL_implode_string(z_24);
  r_26 = t;
  t = SSL_explode_string(r_26);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_37 = ATgetArgument(t, 0);
            ATerm t_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_27), term_h_20);
        t = at_end_1_0(d_5, t);
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        {
          ATerm s_28 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_27), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
          if(match_cons(t, sym__2))
            {
              ATerm u_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_28;
          t = concat_0_0(t);
        }
      }
    w_26 = t;
    t = SSL_implode_string(w_26);
    n_38 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, term_v_37), l_38);
    t = concat_strings_0_0(t);
    t_28 = t;
    t = SSL_explode_string(t_28);
    t = escape_chars_0_0(t);
    e_30 = t;
    t = SSL_implode_string(e_30);
    j_30 = t;
    t = SSL_explode_string(j_30);
    o_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_30), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
    {
      ATerm w_37 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_38 = ATgetArgument(t, 0);
              ATerm h_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(o_30), term_h_20);
          t = at_end_1_0(e_5, t);
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = w_37;
          {
            ATerm a_33 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_30), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
            if(match_cons(t, sym__2))
              {
                ATerm i_38 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_38) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                a_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_33;
            t = concat_0_0(t);
          }
        }
      k_30 = t;
      t = SSL_implode_string(k_30);
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_38), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), (ATerm) ATmakeAppl(sym_StringLit_1, o_38)), term_r_38)))), m_38), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), (ATerm) ATmakeAppl(sym_StringLit_1, n_38)), term_r_38)))));
    }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_41 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue)), i_39);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_41 = ATgetFirst((ATermList) t);
            {
              ATerm v_38 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = x_41;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm w_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_38) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = i_39;
        ;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm h_42 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_42 = ATgetFirst((ATermList) t);
              {
                ATerm y_38 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = h_42;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm z_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_38) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = i_39;
        }
      }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_39);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue)), n_43);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_44 = ATgetFirst((ATermList) t);
            {
              ATerm e_39 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_44;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_39) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = n_43;
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm j_44 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_44 = ATgetFirst((ATermList) t);
              {
                ATerm g_39 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = j_44;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm h_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_39) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = n_43;
        }
      }
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_39);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm o_42 = NULL,r_42 = NULL,s_42 = NULL,v_42 = NULL,i_43 = NULL;
  r_42 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_42 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
      i_43 = ATgetArgument(t, 2);
      o_42 = ATgetArgument(t, 3);
      {
        ATerm a_38 = NULL,b_38 = NULL,j_38 = NULL,k_38 = NULL,x_38 = NULL;
        t = v_42;
        t = map_1_0(TranslateVarDec_0_0, t);
        a_38 = t;
        t = i_43;
        t = map_1_0(TranslateVarDec_0_0, t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
        {
          ATerm j_39 = t;
          int k_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm l_39 = ATgetArgument(t, 0);
                  ATerm m_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_38;
              {
                ATerm f_5 (ATerm t)
                {
                  t = b_38;
                  return(t);
                }
                t = at_end_1_0(f_5, t);
              }
              ;
              LocalPopChoice(k_39);
            }
          else
            {
              t = j_39;
              {
                ATerm t_41 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_38, b_38));
                if(match_cons(t, sym__2))
                  {
                    ATerm n_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_39) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    t_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_41;
                t = concat_0_0(t);
              }
            }
          j_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_42, o_42);
          {
            ATerm o_39 = t;
            int p_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(g_5, _id, t);
                t = TracedBody_0_0(t);
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
                if(match_cons(t, sym__2))
                  {
                    ATerm q_39 = ATgetArgument(t, 0);
                    ATerm r_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_38), o_42));
              }
            k_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_38, (ATerm) ATinsert(ATempty, term_b_39));
            {
              ATerm s_39 = t;
              int t_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_39 = ATgetArgument(t, 0);
                      ATerm v_39 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_38;
                  t = at_end_1_0(h_5, t);
                  ;
                  LocalPopChoice(t_39);
                }
              else
                {
                  t = s_39;
                  {
                    ATerm q_42 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_38, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm) ATmakeAppl(sym_None_0))))));
                    if(match_cons(t, sym__2))
                      {
                        ATerm w_39 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) w_39) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        q_42 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = q_42;
                    t = concat_0_0(t);
                  }
                }
              x_38 = t;
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_42), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, x_38))), k_38);
            }
          }
        }
      }
    }
  else
    {
      ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          s_42 = ATgetArgument(t, 0);
          v_42 = ATgetArgument(t, 1);
          i_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_42;
      t = map_1_0(TranslateVarDec_0_0, t);
      b_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_42, i_43);
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(l_5, _id, t);
            t = TracedBody_0_0(t);
            ;
            LocalPopChoice(y_39);
          }
        else
          {
            t = x_39;
            if(match_cons(t, sym__2))
              {
                ATerm z_39 = ATgetArgument(t, 0);
                ATerm a_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_38), i_43));
          }
        c_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_43, (ATerm) ATinsert(ATempty, term_b_39));
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm d_40 = ATgetArgument(t, 0);
                  ATerm e_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_43;
              t = at_end_1_0(p_5, t);
              ;
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
              {
                ATerm o_44 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm) ATmakeAppl(sym_None_0))))));
                if(match_cons(t, sym__2))
                  {
                    ATerm f_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_40) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    o_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_44;
                t = concat_0_0(t);
              }
            }
          d_43 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_42), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, d_43))), c_43);
        }
      }
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  if(match_cons(t, sym__2))
    {
      g_51 = ATgetArgument(t, 0);
      h_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_51, h_51);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = SSL_addr(g_51, h_51);
      }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_20);
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm c_48 = NULL,j_48 = NULL,a_49 = NULL,b_49 = NULL,n_49 = NULL,e_51 = NULL,t_44 = NULL,u_44 = NULL,w_44 = NULL,y_44 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      c_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_48;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            e_51 = ATgetArgument(t, 0);
            {
              ATerm k_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_40);
        t = e_51;
        t = foldr_3_0(r_5, x_5, y_5, t);
      }
    else
      {
        t = i_40;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm l_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_w_19;
      }
    a_49 = t;
    t = SSL_int_to_string(a_49);
    b_49 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, c_48, a_49));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_44 = ATgetFirst((ATermList) t);
        {
          ATerm m_40 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_44;
    if(match_cons(t, sym_Defined_2))
      {
        ATerm n_40 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) n_40) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        t_44 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(c_48);
    y_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_44), term_h_20), (ATerm) ATinsert(ATempty, term_h_20));
    {
      ATerm o_40 = t;
      int p_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_40 = ATgetArgument(t, 0);
              ATerm r_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(y_44), term_h_20);
          t = at_end_1_0(z_5, t);
          ;
          LocalPopChoice(p_40);
        }
      else
        {
          t = o_40;
          {
            ATerm f_45 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_44), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
            if(match_cons(t, sym__2))
              {
                ATerm s_40 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_40) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                f_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_45;
            t = concat_0_0(t);
          }
        }
      w_44 = t;
      t = SSL_implode_string(w_44);
      n_49 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_44))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_44), term_r_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_40), (ATerm) ATmakeAppl(sym_IntConst_1, b_49)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, n_49)))))));
    }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_40);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  t = map_1_0(InitConstructor_0_0, t);
  t = concat_0_0(t);
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_51, (ATerm) ATinsert(ATempty, term_y_40));
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_41 = ATgetArgument(t, 0);
            ATerm c_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_51;
        t = at_end_1_0(a_6, t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        {
          ATerm j_45 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue))), (ATerm) ATempty)))));
          if(match_cons(t, sym__2))
            {
              ATerm d_41 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_41) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_45;
          t = concat_0_0(t);
        }
      }
    p_51 = t;
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_f_41, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_51));
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  t = SSL_explode_string(u_51);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = map_1_0(b_6, t);
  t = concat_0_0(t);
  t_51 = t;
  t = SSL_implode_string(t_51);
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_51 = ATgetFirst((ATermList) t);
      z_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_51;
  if(match_int(t, 95))
    {
      ATerm b_52 = NULL;
      t = z_51;
      t = n_0(t);
      b_52 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(b_52), term_g_41), term_g_41);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm d_52 = NULL;
          t = z_51;
          t = n_0(t);
          d_52 = t;
          t = (ATerm) ATinsert(CheckATermList(d_52), term_g_41);
        }
      else
        {
          ATerm f_52 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = z_51;
          t = n_0(t);
          f_52 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(f_52), term_g_41), term_h_41), term_g_41);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm k_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  g_52 = t;
  t = SSL_explode_string(g_52);
  {
    ATerm j_52 (ATerm t)
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_128(j_52, t);
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          {
            ATerm k_41 = t;
            int l_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, j_52, t);
                ;
                LocalPopChoice(l_41);
              }
            else
              {
                t = k_41;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = j_52(t);
    h_52 = t;
    t = SSL_implode_string(h_52);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm t)
{
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_125(t);
      ;
      LocalPopChoice(n_41);
    }
  else
    {
      t = m_41;
      {
        ATerm m_52 = NULL,n_52 = NULL,q_52 = NULL,r_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_52 = ATgetFirst((ATermList) t);
            n_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_52;
        t = g_125(t);
        q_52 = t;
        t = n_52;
        t = foldr_3_0(e_125, f_125, g_125, t);
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_52, r_52);
        t = f_125(t);
      }
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  if(match_cons(t, sym__2))
    {
      g_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_53, h_53);
        ;
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = SSL_addr(g_53, h_53);
      }
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_q_41;
  return(t);
}
ATerm DeclareConstructor_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_52;
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            e_53 = ATgetArgument(t, 0);
            {
              ATerm u_41 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_41);
        t = e_53;
        t = foldr_3_0(d_6, e_6, f_6, t);
      }
    else
      {
        t = r_41;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm v_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_w_19;
      }
    y_52 = t;
    t = w_52;
    t = escape_1_0(Cify_1_0, t);
    z_52 = t;
    t = SSL_int_to_string(y_52);
    a_53 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_53), term_y_41), z_52), term_w_41);
    t = concat_strings_0_0(t);
    b_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_52, y_52), (ATerm) ATmakeAppl(sym_Defined_2, term_z_41, b_53));
    t = assert_1_0(g_6, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_53), term_j_12)));
  }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm j_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
        {
          ATerm e_42 = ATgetFirst((ATermList) d_42);
          if(match_cons(e_42, sym_Constructors_1))
            {
              j_53 = ATgetArgument(e_42, 0);
            }
          else
            _fail(t);
          {
            ATerm f_42 = (ATerm) ATgetNext((ATermList) d_42);
            if(((ATgetType(f_42) != AT_LIST) || !(ATisEmpty(f_42))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = j_53;
  t = map_1_0(DeclareConstructor_0_0, t);
  m_53 = t;
  t = j_53;
  t = InitConstructors_0_0(t);
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_53, (ATerm) ATinsert(ATempty, n_53));
  {
    ATerm g_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            ATerm k_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_53;
        {
          ATerm h_6 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, n_53);
            return(t);
          }
          t = at_end_1_0(h_6, t);
        }
        ;
        LocalPopChoice(i_42);
      }
    else
      {
        t = g_42;
        {
          ATerm n_45 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_53, (ATerm) ATinsert(ATempty, n_53)));
          if(match_cons(t, sym__2))
            {
              ATerm l_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_42) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_45;
          t = concat_0_0(t);
        }
      }
    o_53 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, o_53);
  }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm v_53 = NULL;
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          v_53 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_42);
      {
        ATerm x_53 = NULL;
        t = v_53;
        t = map_1_0(TranslateType_0_0, t);
        x_53 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_12, (ATerm) ATmakeAppl(sym_ParamList_1, x_53));
      }
    }
  else
    {
      t = m_42;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm t_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_f_12;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_54;
  {
    ATerm u_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            g_54 = ATgetArgument(t, 0);
            {
              ATerm x_42 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        {
          ATerm j_54 = NULL;
          t = g_54;
          t = map_1_0(TranslateType_0_0, t);
          j_54 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_54), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, j_54))));
        }
      }
    else
      {
        t = u_42;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm y_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_54), term_j_12));
      }
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_12);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,b_55 = NULL,c_55 = NULL;
  x_54 = t;
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            y_54 = ATgetArgument(t, 0);
            b_55 = ATgetArgument(t, 1);
            {
              ATerm e_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_43);
        {
          ATerm a_46 = NULL;
          t = b_55;
          t = map_1_0(TranslateVarDec_0_0, t);
          a_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_46, (ATerm) ATinsert(ATempty, term_f_12));
          {
            ATerm f_43 = t;
            int g_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm h_43 = ATgetArgument(t, 0);
                    ATerm j_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_46;
                t = at_end_1_0(i_6, t);
                ;
                LocalPopChoice(g_43);
              }
            else
              {
                t = f_43;
                {
                  ATerm m_46 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty))));
                  if(match_cons(t, sym__2))
                    {
                      ATerm k_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) k_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      m_46 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_46;
                  t = concat_0_0(t);
                }
              }
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_54), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, a_46)))));
          }
        }
      }
    else
      {
        t = z_42;
        {
          ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              y_54 = ATgetArgument(t, 0);
              b_55 = ATgetArgument(t, 1);
              c_55 = ATgetArgument(t, 2);
              {
                ATerm l_43 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = b_55;
          t = map_1_0(TranslateVarDec_0_0, t);
          h_55 = t;
          t = c_55;
          t = map_1_0(TranslateVarDec_0_0, t);
          i_55 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_12)), i_55), h_55);
          t = concat_0_0(t);
          j_55 = t;
          t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_54), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, j_55)))));
        }
      }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_43, q_55);
  t = conc_strings_0_0(t);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, r_55);
  return(t);
}
ATerm TranslateSpec_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm o_43 = ATgetArgument(t, 0);
      if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
        {
          ATerm p_43 = ATgetFirst((ATermList) o_43);
          if(match_cons(p_43, sym_Signature_1))
            {
              l_55 = ATgetArgument(p_43, 0);
            }
          else
            _fail(t);
          {
            ATerm q_43 = (ATerm) ATgetNext((ATermList) o_43);
            if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
              {
                ATerm r_43 = ATgetFirst((ATermList) q_43);
                if(match_cons(r_43, sym_Strategies_1))
                  {
                    m_55 = ATgetArgument(r_43, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm s_43 = (ATerm) ATgetNext((ATermList) q_43);
                  if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
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
  t = m_55;
  t = map_1_0(SDefToDeclaration_0_0, t);
  n_55 = t;
  t = term_u_10;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
        {
          ATerm v_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_46 = NULL;
              t = eval_config_0_0(t);
              q_46 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), q_46);
              t = q_46;
              ;
              LocalPopChoice(w_43);
            }
          else
            {
              t = v_43;
            }
          t = map_1_0(k_6, t);
        }
        ;
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        t = (ATerm) ATempty;
      }
    o_55 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(m_55), term_z_44)), n_55), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_44), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_w_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_44, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_h_44, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_i_44), term_l_44, term_j_12))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_44, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_44), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_p_44))), term_r_38)))))))), (ATerm) ATmakeAppl(sym_Signature_1, l_55)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_43, (ATerm) ATinsert(ATempty, term_c_44)))), o_55);
    t = concat_0_0(t);
    p_55 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, p_55);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t)
{
  t = o_113(t);
  {
    ATerm l_6 (ATerm t)
    {
      t = downup2_2_0(o_113, p_113, t);
      return(t);
    }
    t = SRTS_all(l_6, t);
    t = p_113(t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm x_139 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  if(match_cons(t, sym__2))
    {
      s_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_139(t);
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_55, s_55, u_55);
  t = table_push_0_0(t);
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(v_55, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_55 = ATgetFirst((ATermList) t);
        x_55 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(v_55, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_55), (ATerm) ATinsert(CheckATermList(w_55), s_55)));
    t = (ATerm) ATmakeAppl(sym__2, s_55, u_55);
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm y_55 = NULL;
  y_55 = t;
  t = term_h_45;
  t = assert_1_0(m_6, t);
  t = y_55;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm i_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateSpec_0_0(t);
      ;
      LocalPopChoice(k_45);
    }
  else
    {
      t = i_45;
      {
        ATerm l_45 = t;
        int m_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateSig_0_0(t);
            ;
            LocalPopChoice(m_45);
          }
        else
          {
            t = l_45;
            {
              ATerm o_45 = t;
              int p_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateDef_0_0(t);
                  ;
                  LocalPopChoice(p_45);
                }
              else
                {
                  t = o_45;
                  {
                    ATerm q_45 = t;
                    int r_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TranslateStratMatchGuard_0_0(t);
                        ;
                        LocalPopChoice(r_45);
                      }
                    else
                      {
                        t = q_45;
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
ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_InitCachedTerms_0)))
    _fail(t);
  t = init_cached_terms_0_0(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = repeat_1_0(q_6, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  t = downup2_2_0(n_6, o_6, t);
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(r_6, t);
        ;
        LocalPopChoice(t_45);
      }
    else
      {
        t = s_45;
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_55, term_u_45);
  t = open_stream_0_0(t);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_56, a_56);
  t = h_131(t);
  t = fclose_0_0(t);
  t = a_56;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_45 = ATgetArgument(t, 0);
      if(match_cons(v_45, sym_Stream_1))
        {
          e_56 = ATgetArgument(v_45, 0);
        }
      else
        _fail(t);
      f_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(e_56, f_56);
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_56);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_45 = ATgetArgument(t, 0);
      if(match_cons(w_45, sym_Stream_1))
        {
          h_56 = ATgetArgument(w_45, 0);
        }
      else
        _fail(t);
      i_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(h_56, i_56);
  j_56 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), j_56);
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_56);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = fetch_1_0(y_6, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = WriteToFile_1_0(z_6, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = WriteToFile_1_0(b_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  c_56 = t;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm x_45 = t;
      int y_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((d_56 != NULL) && (d_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_6, t);
          ;
          LocalPopChoice(y_45);
        }
      else
        {
          t = x_45;
          t = term_z_45;
          if(((d_56 != NULL) && (d_56 != t)))
            _fail(t);
          else
            d_56 = t;
        }
      return(t);
    }
    t = _2_0(s_6, _id, t);
    t = c_56;
    {
      ATerm v_6 (ATerm t)
      {
        ATerm r_46 = NULL;
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_56), r_46);
        return(t);
      }
      t = _2_0(_id, v_6, t);
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_6, x_6, t);
            ;
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            t = _2_0(_id, a_7, t);
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
ATerm apply_strategy_1_0 (ATerm h_133 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  l_56 = t;
  t = dtime_0_0(t);
  t = l_56;
  t = h_133(t);
  m_56 = t;
  t = dtime_0_0(t);
  n_56 = t;
  t = m_56;
  if(match_cons(t, sym__2))
    {
      o_56 = ATgetArgument(t, 0);
      p_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_56), (ATerm) ATmakeAppl(sym_Runtime_1, n_56)), p_56);
  return(t);
}
ATerm f_57 (ATerm x_56, ATerm t)
{
  t = SSL_fclose(x_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_57 = ATgetArgument(t, 0);
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_57);
            ;
            LocalPopChoice(e_46);
          }
        else
          {
            t = d_46;
            t = f_57(b_57, t);
          }
      }
    }
  else
    {
      t = f_57(b_57, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_stdin_stream();
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  t = SSL_stdout_stream();
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_57 = NULL;
  t = SSL_stderr_stream();
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_57);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm q_57 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      q_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_57;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  t = SSL_is_string(u_57);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      ATerm g_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_47 = NULL,f_47 = NULL;
        e_47 = t;
        t = SSL_explode_term(e_47);
        if(match_cons(t, sym__2))
          {
            ATerm j_46 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_46) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_46 = ATgetArgument(t, 1);
              if(((ATgetType(k_46) == AT_LIST) && !(ATisEmpty(k_46))))
                {
                  f_47 = ATgetFirst((ATermList) k_46);
                  {
                    ATerm l_46 = (ATerm) ATgetNext((ATermList) k_46);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_47;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_47;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_47;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_47;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_46);
      }
    else
      {
        t = h_46;
        {
          ATerm n_46 = t;
          int o_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
              t = _2_0(c_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_57 = ATgetArgument(t, 0);
                  o_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_57, o_57);
              p_57 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_57);
              ;
              LocalPopChoice(o_46);
            }
          else
            {
              t = n_46;
              {
                ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
                t = _2_0(d_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_57 = ATgetArgument(t, 0);
                    s_57 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_57, s_57);
                t_57 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_57);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  ATerm p_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_57 = NULL;
      y_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_57, term_t_46);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = p_46;
      {
        ATerm g_47 = NULL;
        g_47 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_47), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = g_47;
        _fail(t);
      }
    }
  v_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_57);
  w_57 = t;
  t = v_57;
  t = fclose_0_0(t);
  t = w_57;
  return(t);
}
ATerm fetch_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm f_58 (ATerm t)
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_119, _id, t);
        ;
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        t = Cons_2_0(_id, f_58, t);
      }
    return(t);
  }
  t = f_58(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
      {
        ATerm i_58 = NULL,j_58 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_58 = ATgetFirst((ATermList) t);
            j_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_58;
        {
          ATerm f_7 (ATerm t)
          {
            t = j_58;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_7, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm p_58 (ATerm t)
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_58, t);
        ;
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_119(t);
      }
    return(t);
  }
  t = p_58(t);
  return(t);
}
ATerm _2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL;
  v_58 = t;
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_58);
  q_58 = t;
  t = r_58;
  t = e_86(t);
  t_58 = t;
  t = s_58;
  t = f_86(t);
  u_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_58, u_58), q_58);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm e_59 = NULL;
  e_59 = t;
  t = SSL_explode_string(e_59);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm f_59 = NULL;
  f_59 = t;
  t = SSL_explode_string(f_59);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  t = _2_0(g_7, h_7, t);
  {
    ATerm a_47 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL,i_59 = NULL;
        if(match_cons(t, sym__2))
          {
            h_59 = ATgetArgument(t, 0);
            i_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_59;
        {
          ATerm i_7 (ATerm t)
          {
            t = i_59;
            return(t);
          }
          t = at_end_1_0(i_7, t);
        }
        ;
        LocalPopChoice(b_47);
      }
    else
      {
        t = a_47;
        {
          ATerm l_47 = NULL,m_47 = NULL;
          l_47 = t;
          t = SSL_explode_term(l_47);
          if(match_cons(t, sym__2))
            {
              ATerm c_47 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_47) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_47;
          t = concat_0_0(t);
        }
      }
    d_59 = t;
    t = SSL_implode_string(d_59);
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm d_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_47);
    }
  else
    {
      t = d_47;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_59 = NULL;
      s_59 = t;
      t = SSL_is_string(s_59);
      ;
      LocalPopChoice(j_47);
    }
  else
    {
      t = i_47;
      {
        ATerm k_47 = t;
        int n_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_7, t);
            ;
            LocalPopChoice(n_47);
          }
        else
          {
            t = k_47;
            {
              ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
              w_59 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_59 = ATgetArgument(t, 0);
                  t = x_59;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_59 = ATgetArgument(t, 0);
                      t = x_59;
                      {
                        ATerm o_47 = t;
                        int p_47 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_59);
                            {
                              ATerm q_47 = t;
                              int r_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_48 = NULL;
                                  t = eval_config_0_0(t);
                                  k_48 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_59, k_48);
                                  t = k_48;
                                  ;
                                  LocalPopChoice(r_47);
                                }
                              else
                                {
                                  t = q_47;
                                }
                            }
                            ;
                            LocalPopChoice(p_47);
                          }
                        else
                          {
                            t = o_47;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_59), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = x_59;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_60 = NULL,d_60 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_59 = ATgetArgument(t, 0);
                          y_59 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_59;
                      t = eval_config_0_0(t);
                      c_60 = t;
                      t = y_59;
                      t = eval_config_0_0(t);
                      d_60 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_132 (ATerm), ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_60 = NULL,k_60 = NULL;
      i_60 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_47 = t;
        int v_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_48 = NULL;
            t = eval_config_0_0(t);
            r_48 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_48);
            t = r_48;
            ;
            LocalPopChoice(v_47);
          }
        else
          {
            t = u_47;
          }
        k_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_60, term_w_47);
        t = geq_0_0(t);
        t = i_60;
        t = l_132(t);
      }
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  if(match_string(t, "-k"))
    {
      t = m_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_60;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm n_60 = NULL,p_60 = NULL;
  n_60 = t;
  t = SSL_string_to_int(n_60);
  p_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_60);
  t = n_60;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_x_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, l_7, m_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm s_60 = NULL;
  s_60 = t;
  if(match_string(t, "-S"))
    {
      t = s_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_60;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_y_47;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  t_60 = t;
  t = SSL_string_to_int(t_60);
  u_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_60);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_60);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_48;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_d_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_48 = t;
  int f_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, o_7, q_7, t);
      ;
      LocalPopChoice(f_48);
    }
  else
    {
      t = e_48;
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_7, v_7, w_7, t);
            ;
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            t = Option_3_0(x_7, y_7, b_8, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_60 = NULL;
      t = term_d_10;
      t = d_0(t);
      z_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_48, term_l_48, z_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_60 = ATgetFirst((ATermList) t);
          y_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_60;
      t = a_0(t);
      t = term_d_10;
      t = c_0(t);
      c_61 = t;
      t = (ATerm) ATinsert(CheckATermList(y_60), c_61);
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm e_61 = NULL;
  e_61 = t;
  if(match_string(t, "-o"))
    {
      t = e_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_61;
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm f_61 = NULL;
  f_61 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_61);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_61);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_m_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_8, d_8, h_8, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym__3))
    {
      i_61 = ATgetArgument(t, 0);
      j_61 = ATgetArgument(t, 1);
      k_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_61, j_61);
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_48 = ATgetArgument(t, 0);
            ATerm q_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_61, j_61);
        ;
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
        t = (ATerm) ATempty;
      }
    l_61 = t;
    t = SSL_table_put(i_61, j_61, (ATerm) ATinsert(CheckATermList(l_61), k_61));
    t = (ATerm) ATmakeAppl(sym__3, i_61, j_61, k_61);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_61 = NULL;
      t = term_d_10;
      t = l_0(t);
      x_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_48, term_l_48, x_61);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_61 = ATgetFirst((ATermList) t);
          u_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_61 = ATgetFirst((ATermList) t);
          w_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_61;
      t = i_0(t);
      t = v_61;
      t = k_0(t);
      b_62 = t;
      t = (ATerm) ATinsert(CheckATermList(w_61), b_62);
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm d_62 = NULL;
  d_62 = t;
  if(match_string(t, "-i"))
    {
      t = d_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_62;
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm e_62 = NULL;
  e_62 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_62);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_62);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_s_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_8, j_8, k_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_10;
  t = whoami_0_0(t);
  f_62 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_62));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_48 = NULL;
        t = eval_config_0_0(t);
        v_48 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_48);
        t = v_48;
        ;
        LocalPopChoice(u_48);
      }
    else
      {
        t = t_48;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t)
{
  ATerm y_48 = t;
  int z_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_125(t);
      ;
      LocalPopChoice(z_48);
    }
  else
    {
      t = y_48;
      {
        ATerm i_62 = NULL,j_62 = NULL,m_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_62 = ATgetFirst((ATermList) t);
            j_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_62;
        t = foldr_2_0(c_125, d_125, t);
        m_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_62, m_62);
        t = d_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      c_49 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_49, d_49);
        ;
        LocalPopChoice(f_49);
      }
    else
      {
        t = e_49;
        t = SSL_addr(c_49, d_49);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_62 = NULL,w_48 = NULL,x_48 = NULL;
  t = times_0_0(t);
  w_48 = t;
  t = SSL_explode_term(w_48);
  if(match_cons(t, sym__2))
    {
      ATerm g_49 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_48;
  t = foldr_2_0(m_8, n_8, t);
  p_62 = t;
  t = SSL_TicksToSeconds(p_62);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  a_63 = t;
  if(match_cons(t, sym__2))
    {
      b_63 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_63;
        if((b_63 != t))
          {
            _fail(t);
          }
        t = a_63;
        ;
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = a_63;
        {
          ATerm j_49 = t;
          int k_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_63, c_63);
              ;
              LocalPopChoice(k_49);
            }
          else
            {
              t = j_49;
              t = SSL_gtr(b_63, c_63);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm l_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_63 = NULL,h_63 = NULL;
      f_63 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_49 = NULL;
            t = eval_config_0_0(t);
            s_49 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_49);
            t = s_49;
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
          }
        h_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_63, term_g_20);
        t = geq_0_0(t);
        t = f_63;
        t = k_132(t);
      }
      ;
      LocalPopChoice(m_49);
    }
  else
    {
      t = l_49;
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL;
  t = run_time_0_0(t);
  j_63 = t;
  t = term_d_10;
  t = whoami_0_0(t);
  k_63 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_63), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_63));
  t = (ATerm) ATmakeAppl(sym__2, term_q_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_49), j_63), term_r_49), k_63));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_134 (ATerm), ATerm t)
{
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm x_49 = t;
        int y_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_49 = NULL;
            t = eval_config_0_0(t);
            w_49 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_49);
            t = w_49;
            ;
            LocalPopChoice(y_49);
          }
        else
          {
            t = x_49;
          }
      }
      ;
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm q_8 (ATerm t)
        {
          ATerm z_49 = t;
          int b_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(b_50);
            }
          else
            {
              t = z_49;
              {
                ATerm c_50 = t;
                int d_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(d_50);
                  }
                else
                  {
                    t = c_50;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(q_8, t);
      }
    }
  t = f_134(t);
  return(t);
}
ATerm map_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm l_63 (ATerm t)
  {
    ATerm f_50 = t;
    int g_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_50);
      }
    else
      {
        t = f_50;
        t = Cons_2_0(a_119, l_63, t);
      }
    return(t);
  }
  t = l_63(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_63 = ATgetFirst((ATermList) t);
      o_63 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_63 = NULL,t_63 = NULL;
        t = o_63;
        t = g_0(t);
        s_63 = t;
        t = n_63;
        t = e_0(t);
        t_63 = t;
        t = o_63;
        {
          ATerm r_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_63), t_63);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_10;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
  x_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_63);
  u_63 = t;
  t = v_63;
  t = z_99(t);
  w_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_63), u_63);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm a_64 = NULL;
  a_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_64), term_h_50);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_50 = t;
        int l_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_50 = NULL;
            t = eval_config_0_0(t);
            a_50 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_50);
            t = a_50;
            ;
            LocalPopChoice(l_50);
          }
        else
          {
            t = k_50;
          }
      }
      ;
      LocalPopChoice(j_50);
    }
  else
    {
      t = i_50;
      {
        ATerm s_8 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(s_8, t);
      }
    }
  t = term_m_50;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, t_8, t);
  t = map_1_0(u_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL;
  e_64 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_64);
  b_64 = t;
  t = c_64;
  t = a_100(t);
  d_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, d_64), b_64);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL;
  i_64 = t;
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_64;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_50 = ATgetFirst((ATermList) t);
                ATerm q_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_64;
          }
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = (ATerm) ATinsert(ATempty, i_64);
      }
    j_64 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), j_64);
    t = i_64;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_50 = t;
    int s_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_50 = NULL;
        t = eval_config_0_0(t);
        e_50 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_50);
        t = e_50;
        ;
        LocalPopChoice(s_50);
      }
    else
      {
        t = r_50;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_50;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_50;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_y_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_50 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_8, w_8, a_9, t);
      ;
      LocalPopChoice(b_51);
    }
  else
    {
      t = z_50;
      t = Option_3_0(b_9, c_9, e_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  s_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_64 = ATgetFirst((ATermList) t);
      p_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_64);
  n_64 = t;
  t = o_64;
  t = t_90(t);
  q_64 = t;
  t = p_64;
  t = u_90(t);
  r_64 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_64), q_64), n_64);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_64);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_64);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_136 (ATerm), ATerm t)
{
  ATerm w_64 = NULL;
  w_64 = t;
  {
    ATerm c_51 = t;
    int d_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_51;
        t = w_136(t);
        ;
        LocalPopChoice(d_51);
      }
    else
      {
        t = c_51;
      }
    t = w_64;
    {
      ATerm g_9 (ATerm t)
      {
        ATerm i_51 = t;
        int j_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_51 = t;
            int l_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_51);
              }
            else
              {
                t = k_51;
                t = w_136(t);
                t = Cons_2_0(_id, g_9, t);
              }
            ;
            LocalPopChoice(j_51);
          }
        else
          {
            t = i_51;
            {
              ATerm c_65 = NULL,d_65 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_65 = ATgetFirst((ATermList) t);
                  d_65 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_65), (ATerm) ATmakeAppl(sym_Undefined_1, c_65));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_9, g_9, t);
    }
  }
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  if(match_string(t, "--help"))
    {
      t = n_65;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_65;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_65;
        }
    }
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_51;
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm m_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = k_65;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm q_51 = t;
      int r_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_136(t);
          ;
          LocalPopChoice(r_51);
        }
      else
        {
          t = q_51;
          {
            ATerm s_51 = t;
            int v_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_9, k_9, l_9, t);
                ;
                LocalPopChoice(v_51);
              }
            else
              {
                t = s_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_9, t);
    {
      ATerm x_51 = t;
      int a_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_65 = NULL;
          t_65 = t;
          {
            ATerm c_52 = t;
            int e_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_65;
                {
                  ATerm i_52 = t;
                  int k_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm l_52 = t;
                        int o_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_50 = NULL;
                            t = eval_config_0_0(t);
                            t_50 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_50);
                            t = t_50;
                            ;
                            LocalPopChoice(o_52);
                          }
                        else
                          {
                            t = l_52;
                          }
                      }
                      ;
                      LocalPopChoice(k_52);
                    }
                  else
                    {
                      t = i_52;
                      t = fetch_1_0(m_9, t);
                    }
                  t = t_65;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(e_52);
              }
            else
              {
                t = c_52;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm p_52 = t;
                  int t_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_51 = NULL;
                      t = eval_config_0_0(t);
                      a_51 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), a_51);
                      t = a_51;
                      ;
                      LocalPopChoice(t_52);
                    }
                  else
                    {
                      t = p_52;
                    }
                  t = t_65;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(a_52);
        }
      else
        {
          t = x_51;
          {
            ATerm u_52 = t;
            int v_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_9 (ATerm t)
                {
                  ATerm p_9 (ATerm t)
                  {
                    if(((l_65 != NULL) && (l_65 != t)))
                      _fail(t);
                    else
                      l_65 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_9, t);
                  return(t);
                }
                t = fetch_1_0(n_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_65)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_49, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_65)), term_c_53));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_52);
              }
            else
              {
                t = u_52;
              }
          }
        }
      m_65 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = m_65;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm k_134 (ATerm), ATerm t)
{
  ATerm w_65 = NULL;
  t = parse_options_1_0(h_134, t);
  w_65 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_65);
  t = w_65;
  t = j_134(t);
  {
    ATerm d_53 = t;
    int f_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_134, t);
        ;
        LocalPopChoice(f_53);
      }
    else
      {
        t = d_53;
        {
          ATerm i_53 = t;
          int k_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_134(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_53);
            }
          else
            {
              t = i_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_53;
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL;
  x_65 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL;
        t = eval_config_0_0(t);
        w_51 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_51);
        t = w_51;
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
      }
    y_65 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_65));
    t = x_65;
  }
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = if_verbose2_1_0(a_10, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm s_133 (ATerm), ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    ATerm s_53 = t;
    int t_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_133(t);
        ;
        LocalPopChoice(t_53);
      }
    else
      {
        t = s_53;
        {
          ATerm u_53 = t;
          int w_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_53);
            }
          else
            {
              t = u_53;
              {
                ATerm y_53 = t;
                int z_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_53);
                  }
                else
                  {
                    t = y_53;
                    {
                      ATerm a_54 = t;
                      int b_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_9, y_9, z_9, t);
                          ;
                          LocalPopChoice(b_54);
                        }
                      else
                        {
                          t = a_54;
                          {
                            ATerm c_54 = t;
                            int d_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(d_54);
                              }
                            else
                              {
                                t = c_54;
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
  ATerm w_9 (ATerm t)
  {
    ATerm z_65 = NULL,a_66 = NULL,s_52 = NULL;
    z_65 = t;
    {
      ATerm h_54 = t;
      int i_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_66 != NULL) && (a_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_10, t);
          ;
          LocalPopChoice(i_54);
        }
      else
        {
          t = h_54;
          t = term_k_54;
          a_66 = t;
        }
      t = not_null(a_66);
      t = ReadFromFile_0_0(t);
      s_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_65, s_52);
      t = apply_strategy_1_0(q_133, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_9, s_133, v_9, w_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
