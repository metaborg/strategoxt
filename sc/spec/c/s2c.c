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
ATerm term_l_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_r_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_x_43;
ATerm term_u_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_r_39;
ATerm term_m_39;
ATerm term_j_39;
ATerm term_v_38;
ATerm term_n_38;
ATerm term_k_38;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_z_35;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_o_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_r_30;
ATerm term_c_30;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_s_17;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_m_14;
void init_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_u_15, (ATerm) ATempty);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_16, (ATerm) ATempty);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_16, term_d_16);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_a_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_1, term_g_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Id_1, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_IntConst_1, term_p_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Id_1, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Id_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Id_1, term_w_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Id_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Id_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, term_q_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Id_1, term_a_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Id_1, term_e_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Id_1, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Id_1, term_j_22);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Id_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Id_1, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Id_1, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_22, (ATerm) ATempty);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_22, term_d_16);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Id_1, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_23, (ATerm) ATempty);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_23, term_d_16);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Id_1, term_e_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Id_1, term_u_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Id_1, term_w_23);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_h_23);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_k_22);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Id_1, term_i_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_25, (ATerm) ATempty);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Equal_2, term_w_25, term_r_20);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Id_1, term_y_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_25, (ATerm) ATempty);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, term_k_22);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Id_1, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_26, (ATerm) ATempty);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Equal_2, term_o_26, term_r_20);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_u_26, (ATerm) ATempty);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Id_1, term_x_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Id_1, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_27, (ATerm) ATempty);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Stat_1, term_h_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Id_1, term_o_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_27);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_27, (ATerm) ATempty);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_27, term_d_16);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Id_1, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Id_1, term_a_28);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Id_1, term_c_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Id_1, term_i_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_28, (ATerm) ATempty);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_28, term_d_16);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Id_1, term_j_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_27, term_k_22);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Id_1, term_e_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Return_1, term_k_22);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_g_15, (ATerm) ATempty);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_22, term_d_16);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_16, term_s_32);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Id_1, term_i_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Id_1, term_l_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATempty);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Stat_1, term_n_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Id_1, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_34);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_34, (ATerm) ATempty);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_36, (ATerm) ATempty);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Some_1, term_f_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_x_15, term_g_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Id_1, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_36, (ATerm) ATempty);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Id_1, term_o_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Id_1, term_q_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_CallT_3, term_w_36, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_SDefT_4, term_u_36, (ATerm)ATempty, (ATerm)ATempty, term_x_36);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Op_2, term_d_37, (ATerm) ATempty);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_37, term_r_21);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_e_37, term_g_37);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_u_19);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_19);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__2, term_x_41, term_m_14);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym__2, term_g_42, term_h_42);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym__2, term_g_44, term_m_14);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__2, term_j_44, term_m_14);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym__2, term_u_43, term_m_14);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym__2, term_s_45, term_m_14);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm k_9 (ATerm b_86, ATerm c_86, ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm q_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm l_9 (ATerm a_43, ATerm c_43, ATerm b_43, ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm x_114 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm Real_1_0 (ATerm m_92 (ATerm), ATerm);
ATerm Str_1_0 (ATerm n_92 (ATerm), ATerm);
ATerm Int_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm a_5 (ATerm);
ATerm o_9 (ATerm m_42, ATerm p_42, ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm p_9 (ATerm c_47, ATerm b_47, ATerm);
ATerm q_9 (ATerm t_208, ATerm y_46, ATerm a_47, ATerm);
ATerm new_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm u_113 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm t_113 (ATerm), ATerm);
ATerm p_37 (ATerm z_24, ATerm b_25, ATerm c_25, ATerm e_25, ATerm);
ATerm q_37 (ATerm g_26, ATerm h_26, ATerm i_26, ATerm);
ATerm r_37 (ATerm q_26, ATerm t_26, ATerm v_26, ATerm);
ATerm s_37 (ATerm f_27, ATerm g_27, ATerm i_27, ATerm j_27, ATerm);
ATerm t_37 (ATerm u_27, ATerm v_27, ATerm w_27, ATerm x_27, ATerm);
ATerm u_37 (ATerm e_28, ATerm g_28, ATerm k_28, ATerm l_28, ATerm);
ATerm v_37 (ATerm s_28, ATerm u_28, ATerm v_28, ATerm w_28, ATerm x_28, ATerm y_28, ATerm z_28, ATerm c_29, ATerm);
ATerm w_37 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm h_30, ATerm i_30, ATerm j_30, ATerm);
ATerm x_37 (ATerm s_30, ATerm t_30, ATerm u_30, ATerm v_30, ATerm w_30, ATerm x_30, ATerm);
ATerm y_37 (ATerm l_31, ATerm m_31, ATerm n_31, ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm s_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm y_0, ATerm b_1, ATerm v_0, ATerm);
ATerm thread_map_1_0 (ATerm d_126 (ATerm), ATerm);
ATerm Var_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm y_42 (ATerm s_39, ATerm t_39, ATerm u_39, ATerm v_39, ATerm w_39, ATerm);
ATerm n_43 (ATerm n_40, ATerm o_40, ATerm p_40, ATerm q_40, ATerm);
ATerm p_43 (ATerm v_40, ATerm w_40, ATerm x_40, ATerm y_40, ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm x_9 (ATerm i_49, ATerm h_49, ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm a_10 (ATerm y_79, ATerm z_79, ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm b_10 (ATerm e_48, ATerm c_48, ATerm);
ATerm h_7 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm v_128 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm c_10 (ATerm r_47, ATerm q_47, ATerm);
ATerm s_7 (ATerm);
ATerm d_10 (ATerm o_47, ATerm);
ATerm concat_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_120 (ATerm), ATerm);
ATerm t_57 (ATerm l_57, ATerm);
ATerm conc_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm e_10 (ATerm j_47, ATerm k_47, ATerm);
ATerm downup2_2_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm);
ATerm f_10 (ATerm i_140 (ATerm), ATerm l_85, ATerm j_85, ATerm);
ATerm g_8 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm i_10 (ATerm o_70, ATerm p_70, ATerm);
ATerm j_10 (ATerm c_74, ATerm d_74, ATerm);
ATerm l_10 (ATerm s_131 (ATerm), ATerm f_539, ATerm g_74, ATerm);
ATerm k_10 (ATerm y_73, ATerm z_73, ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_133 (ATerm), ATerm);
ATerm j_61 (ATerm d_61, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_10 (ATerm e_74, ATerm);
ATerm n_10 (ATerm q_70, ATerm r_70, ATerm);
ATerm _2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_119 (ATerm), ATerm);
ATerm h_10 (ATerm s_65, ATerm t_65, ATerm);
ATerm debug_1_0 (ATerm q_131 (ATerm), ATerm);
ATerm j_9 (ATerm);
ATerm m_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_133 (ATerm), ATerm);
ATerm n_9 (ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm g_10 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm t_10 (ATerm u_85, ATerm v_85, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_10 (ATerm n_79, ATerm o_79, ATerm m_79, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_10 (ATerm c_68, ATerm d_68, ATerm);
ATerm foldr_2_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_11 (ATerm);
ATerm need_help_1_0 (ATerm q_134 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm q_10 (ATerm e_81, ATerm f_81, ATerm);
ATerm Program_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm j_12 (ATerm);
ATerm l_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm x_12 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm h_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_137 (ATerm), ATerm);
ATerm n_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm parse_options_1_0 (ATerm g_137 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm);
ATerm y_13 (ATerm);
ATerm a_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm g_14 (ATerm);
ATerm iowrap_3_0 (ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_0 = NULL,s_0 = NULL,x_0 = NULL,d_1 = NULL,g_1 = NULL;
  p_0 = t;
  t = term_m_14;
  t = whoami_0_0(t);
  s_0 = t;
  t = term_o_14;
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_14), s_0), term_q_14);
  d_1 = t;
  t = SSL_printnl(x_0, d_1);
  t = term_s_14;
  g_1 = t;
  t = SSL_exit(g_1);
  t = p_0;
  return(t);
}
ATerm k_9 (ATerm b_86, ATerm c_86, ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL,k_1 = NULL;
  t = b_86;
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, c_86);
    t = conc_0_0(t);
    j_1 = t;
    t = term_v_14;
    k_1 = t;
    t = SSL_table_put(k_1, b_86, j_1);
    t = (ATerm) ATmakeAppl(sym__3, term_v_14, b_86, j_1);
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = term_x_14;
  t = debug_1_0(q_3, t);
  m_1 = t;
  t = (ATerm) ATempty;
  n_1 = t;
  t = term_c_15;
  o_1 = t;
  t = term_d_15;
  t = f_10(x_3, n_1, o_1, t);
  t = m_1;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_e_15;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  p_1 = t;
  t = term_i_15;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, term_i_15);
  t = f_10(b_4, p_1, q_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, p_1);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL;
  r_1 = t;
  t = term_l_15;
  t_1 = t;
  t = (ATerm) ATinsert(ATempty, r_1);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATempty, r_1));
  t = k_9(t_1, u_1, t);
  t = (ATerm) ATmakeAppl(sym_Include_1, r_1);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, i_3, t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, z_3, a_4, t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            t = ArgOption_3_0(c_4, d_4, e_4, t);
          }
      }
    }
  return(t);
}
ATerm l_9 (ATerm a_43, ATerm c_43, ATerm b_43, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, c_43)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_43), term_r_15, b_43)));
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL;
  if(match_cons(t, sym__3))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
      z_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_9(x_1, y_1, z_1, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm w_1 = NULL;
  t = map_1_0(f_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, g_4, t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_v_15, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_x_15, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_v_15)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_1));
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm j_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      {
        ATerm z_15 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_2), term_d_16)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,q_0 = NULL,t_0 = NULL;
      t = (ATerm) ATempty;
      q_0 = t;
      t = term_g_16;
      t_0 = t;
      t = term_h_16;
      t = a_10(t_0, q_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm i_16 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          g_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_2;
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      t = (ATerm) ATempty;
    }
  b_2 = t;
  t = map_1_0(h_4, t);
  c_2 = t;
  t = b_2;
  t = InitTermIds_0_0(t);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATinsert(ATempty, e_2));
  t = conc_0_0(t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, f_2);
  return(t);
}
ATerm oncetd_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_114(t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = SRTS_one(l_2, t);
      }
    return(t);
  }
  t = l_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 (ATerm t)
      {
        t = listbu1_1_0(t_2, t);
        return(t);
      }
      t = Cons_2_0(_id, i_4, t);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_2(t);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
          }
      }
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = t_2(t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_16 = ATgetFirst((ATermList) t);
      if(match_cons(p_16, sym_Compound_2))
        {
          ATerm q_16 = ATgetArgument(p_16, 0);
          if(((ATgetType(q_16) != AT_LIST) || !(ATisEmpty(q_16))))
            _fail(t);
          y_4 = ATgetArgument(p_16, 1);
        }
      else
        _fail(t);
      z_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_4, z_4);
  t = conc_0_0(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_16 = ATgetFirst((ATermList) t);
      if(match_cons(r_16, sym_Compound_2))
        {
          ATerm s_16 = ATgetArgument(r_16, 0);
          if(((ATgetType(s_16) != AT_LIST) || !(ATisEmpty(s_16))))
            _fail(t);
          p_5 = ATgetArgument(r_16, 1);
        }
      else
        _fail(t);
      q_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_5, q_5);
  t = conc_0_0(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_16 = ATgetFirst((ATermList) t);
      if(match_cons(t_16, sym_Compound_2))
        {
          ATerm u_16 = ATgetArgument(t_16, 0);
          if(((ATgetType(u_16) != AT_LIST) || !(ATisEmpty(u_16))))
            _fail(t);
          w_5 = ATgetArgument(t_16, 1);
        }
      else
        _fail(t);
      x_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_5, x_5);
  t = conc_0_0(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm x_6 = NULL,j_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_16 = ATgetFirst((ATermList) t);
      if(match_cons(v_16, sym_Compound_2))
        {
          ATerm w_16 = ATgetArgument(v_16, 0);
          if(((ATgetType(w_16) != AT_LIST) || !(ATisEmpty(w_16))))
            _fail(t);
          x_6 = ATgetArgument(v_16, 1);
        }
      else
        _fail(t);
      j_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_6, j_7);
  t = conc_0_0(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm o_7 = NULL,q_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_16 = ATgetFirst((ATermList) t);
      if(match_cons(x_16, sym_Compound_2))
        {
          ATerm y_16 = ATgetArgument(x_16, 0);
          if(((ATgetType(y_16) != AT_LIST) || !(ATisEmpty(y_16))))
            _fail(t);
          o_7 = ATgetArgument(x_16, 1);
        }
      else
        _fail(t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, q_7);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      l_3 = ATgetArgument(t, 2);
      t = l_3;
      if(match_cons(t, sym_Compound_2))
        {
          m_3 = ATgetArgument(t, 0);
          n_3 = ATgetArgument(t, 1);
          t = n_3;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = m_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      t_3 = ATgetArgument(t, 0);
                      w_3 = ATgetArgument(t, 1);
                      t = w_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = t_3;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              ATerm z_16 = t;
                              int a_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, r_3), l_3);
                                  ;
                                  LocalPopChoice(a_17);
                                }
                              else
                                {
                                  t = z_16;
                                  t = (ATerm) ATmakeAppl(sym_If_2, r_3, s_3);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, r_3, s_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, r_3, s_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, r_3, s_3);
                    }
                }
              else
                {
                  t = s_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      t_3 = ATgetArgument(t, 0);
                      w_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, r_3), l_3);
                }
            }
          else
            {
              t = s_3;
              if(match_cons(t, sym_Compound_2))
                {
                  t_3 = ATgetArgument(t, 0);
                  w_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, r_3), l_3);
            }
        }
      else
        {
          t = s_3;
          if(match_cons(t, sym_Compound_2))
            {
              t_3 = ATgetArgument(t, 0);
              w_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, r_3), l_3);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_3 = ATgetFirst((ATermList) t);
          s_3 = (ATerm) ATgetNext((ATermList) t);
          t = r_3;
          if(match_cons(t, sym_Compound_2))
            {
              o_3 = ATgetArgument(t, 0);
              p_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, p_3, s_3);
          t = conc_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              r_3 = ATgetArgument(t, 0);
              s_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_3 = ATgetFirst((ATermList) t);
              w_3 = (ATerm) ATgetNext((ATermList) t);
              t = w_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      u_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      {
                        ATerm b_17 = t;
                        int d_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_4 = NULL;
                            t = s_3;
                            t = listbu1_1_0(j_4, t);
                            x_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, r_3, x_4);
                            ;
                            LocalPopChoice(d_17);
                          }
                        else
                          {
                            t = b_17;
                            {
                              ATerm g_17 = t;
                              int h_17 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_5 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, r_3, u_3);
                                  t = conc_0_0(t);
                                  d_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, d_5, v_3);
                                  ;
                                  LocalPopChoice(h_17);
                                }
                              else
                                {
                                  t = g_17;
                                  {
                                    ATerm j_5 = NULL,l_5 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, r_3, u_3);
                                    t = conc_0_0(t);
                                    j_5 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
                                    t = conc_0_0(t);
                                    l_5 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, j_5, l_5);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm o_5 = NULL;
                      t = s_3;
                      t = listbu1_1_0(k_4, t);
                      o_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, r_3, o_5);
                    }
                }
              else
                {
                  t = t_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      u_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      {
                        ATerm i_17 = t;
                        int j_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_5 = NULL;
                            t = s_3;
                            t = listbu1_1_0(l_4, t);
                            t_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, r_3, t_5);
                            ;
                            LocalPopChoice(j_17);
                          }
                        else
                          {
                            t = i_17;
                            {
                              ATerm g_6 = NULL,h_6 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, r_3, u_3);
                              t = conc_0_0(t);
                              g_6 = t;
                              t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
                              t = conc_0_0(t);
                              h_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, g_6, h_6);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_6 = NULL;
                      t = s_3;
                      t = listbu1_1_0(m_4, t);
                      w_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, r_3, w_6);
                    }
                }
            }
          else
            {
              ATerm n_7 = NULL;
              t = s_3;
              t = listbu1_1_0(n_4, t);
              n_7 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, r_3, n_7);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_112(t);
        t = r_7(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
      }
    return(t);
  }
  t = r_7(t);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,u_0 = NULL,e_1 = NULL;
  y_7 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      w_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_7);
  u_7 = t;
  t = w_7;
  t = g_93(t);
  x_7 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, x_7);
  u_0 = t;
  t = SSLsetAnnotations(u_0, u_7);
  return(t);
}
ATerm Real_1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,h_8 = NULL,j_8 = NULL,f_1 = NULL,i_1 = NULL;
  j_8 = t;
  if(match_cons(t, sym_Real_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_8);
  b_8 = t;
  t = c_8;
  t = m_92(t);
  h_8 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, h_8);
  f_1 = t;
  t = SSLsetAnnotations(f_1, b_8);
  return(t);
}
ATerm Str_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,r_8 = NULL,s_8 = NULL,l_1 = NULL,s_1 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      n_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  m_8 = t;
  t = n_8;
  t = n_92(t);
  r_8 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, r_8);
  l_1 = t;
  t = SSLsetAnnotations(l_1, m_8);
  return(t);
}
ATerm Int_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,b_9 = NULL,c_9 = NULL,v_1 = NULL,a_2 = NULL;
  c_9 = t;
  if(match_cons(t, sym_Int_1))
    {
      y_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_9);
  x_8 = t;
  t = y_8;
  t = l_92(t);
  b_9 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, b_9);
  v_1 = t;
  t = SSLsetAnnotations(v_1, x_8);
  return(t);
}
ATerm Anno_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,e_11 = NULL,q_11 = NULL,d_2 = NULL,h_2 = NULL;
  q_11 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  u_10 = t;
  t = w_10;
  t = v_92(t);
  z_10 = t;
  t = x_10;
  t = w_92(t);
  e_11 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, z_10, e_11);
  d_2 = t;
  t = SSLsetAnnotations(d_2, u_10);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = Cons_2_0(_id, s_4, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = Cons_2_0(proper_list_0_0, t_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm n_17 = t;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL;
      z_11 = t;
      if(match_string(t, "Nil"))
        {
          t = z_11;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          t = z_11;
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_17;
    }
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(o_4, p_4, t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Op_2_0(q_4, r_4, t);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = Op_2_0(u_4, _id, t);
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,n_12 = NULL,o_12 = NULL,i_2 = NULL,k_2 = NULL;
  o_12 = t;
  if(match_cons(t, sym_Op_2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  a_12 = t;
  t = b_12;
  t = p_92(t);
  d_12 = t;
  t = c_12;
  t = q_92(t);
  n_12 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, d_12, n_12);
  i_2 = t;
  t = SSLsetAnnotations(i_2, a_12);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = map_1_0(Cache_0_0, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm o_9 (ATerm m_42, ATerm p_42, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL;
  t = m_42;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Op_2_0(_id, v_4, t);
        t = proper_list_0_0(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Anno_2_0(Cache_0_0, Cache_0_0, t);
              ;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              {
                ATerm x_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1_0(_id, t);
                    ;
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = x_17;
                    {
                      ATerm z_17 = t;
                      int a_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1_0(_id, t);
                          ;
                          LocalPopChoice(a_18);
                        }
                      else
                        {
                          t = z_17;
                          {
                            ATerm b_18 = t;
                            int c_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1_0(_id, t);
                                ;
                                LocalPopChoice(c_18);
                              }
                            else
                              {
                                t = b_18;
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
    r_12 = t;
    t = term_d_18;
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_18, r_12);
    t = h_10(v_12, r_12, t);
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_18, s_12);
    w_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_42, (ATerm) ATmakeAppl(sym_Defined_2, term_e_18, s_12));
    t = f_10(w_4, m_42, w_12, t);
    t = s_12;
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_13 = NULL,z_0 = NULL,c_1 = NULL;
          t = (ATerm) ATempty;
          z_0 = t;
          t = term_g_16;
          c_1 = t;
          t = term_h_16;
          t = a_10(c_1, z_0, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              g_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_13;
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = (ATerm) ATempty;
        }
      t_12 = t;
      t = (ATerm) ATempty;
      z_12 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_18, (ATerm) ATinsert(CheckATermList(t_12), (ATerm) ATmakeAppl(sym__3, r_12, s_12, p_42)));
      a_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_18, (ATerm) ATinsert(CheckATermList(t_12), (ATerm) ATmakeAppl(sym__3, r_12, s_12, p_42))));
      t = f_10(a_5, z_12, a_13, t);
      t = (ATerm) ATmakeAppl(sym_Id_1, s_12);
    }
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  {
    ATerm j_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL,q_2 = NULL;
        t = term_s_17;
        q_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_17, t_13);
        t = a_10(q_2, t_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            n_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, n_2);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = j_18;
        {
          ATerm v_2 = NULL,y_2 = NULL;
          t = term_s_17;
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_17, t_13);
          t = a_10(y_2, t_13, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm z_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_18) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
              v_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_2;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = c_19;
      {
        ATerm n_14 = NULL,e_3 = NULL;
        n_14 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              ;
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
              {
                ATerm i_19 = t;
                int j_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(j_19);
                  }
                else
                  {
                    t = i_19;
                  }
              }
            }
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_14, e_3);
          {
            ATerm l_19 = t;
            int m_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm n_19 = ATgetArgument(t, 0);
                    ATerm o_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_14, e_3);
                t = o_9(n_14, e_3, t);
                ;
                LocalPopChoice(m_19);
              }
            else
              {
                t = l_19;
                {
                  ATerm j_3 = NULL,k_3 = NULL;
                  j_3 = t;
                  t = SSL_explode_term(j_3);
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_19 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm q_19 = ATgetArgument(t, 1);
                        if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
                          {
                            ATerm r_19 = ATgetFirst((ATermList) q_19);
                            ATerm s_19 = (ATerm) ATgetNext((ATermList) q_19);
                            if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
                              {
                                k_3 = ATgetFirst((ATermList) s_19);
                                {
                                  ATerm t_19 = (ATerm) ATgetNext((ATermList) s_19);
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
                  t = k_3;
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm p_9 (ATerm c_47, ATerm b_47, ATerm t)
{
  ATerm w_14 = NULL;
  t = new_0_0(t);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_14), term_d_16), (ATerm) ATmakeAppl(sym_AssignInit_1, b_47)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, c_47, (ATerm) ATmakeAppl(sym_Id_1, w_14))));
  return(t);
}
ATerm q_9 (ATerm t_208, ATerm y_46, ATerm a_47, ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,b_15 = NULL;
  t = SSLgetAnnotations(t_208);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_46);
  z_14 = t;
  t = SSLsetAnnotations(z_14, y_14);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, b_15, a_47);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(y_5, z_5, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL,f_17 = NULL;
  e_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      f_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATinsert(ATinsert(ATempty, c_17), f_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          f_17 = ATgetArgument(t, 0);
          c_17 = ATgetArgument(t, 1);
          {
            ATerm u_5 = NULL,v_5 = NULL,j_6 = NULL,l_6 = NULL;
            t = c_17;
            t = foldr_3_0(b_5, c_5, e_5, t);
            u_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_17, u_5);
            j_6 = t;
            t = term_y_19;
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATmakeAppl(sym__2, f_17, u_5));
            t = a_10(l_6, j_6, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm z_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_19) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                v_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(CheckATermList(c_17), (ATerm) ATmakeAppl(sym_Id_1, v_5))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              f_17 = ATgetArgument(t, 0);
              t = f_17;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  f_17 = ATgetArgument(t, 0);
                  {
                    ATerm c_20 = t;
                    int d_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(e_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_20 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) e_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm f_20 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(f_20) != AT_LIST) || !(ATisEmpty(f_20))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_17)));
                        ;
                        LocalPopChoice(d_20);
                      }
                    else
                      {
                        t = c_20;
                        {
                          ATerm i_20 = t;
                          int j_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(e_17);
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_17)));
                              ;
                              LocalPopChoice(j_20);
                            }
                          else
                            {
                              t = i_20;
                              t = SSLgetAnnotations(e_17);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm k_20 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) k_20) != ATmakeSymbol("bound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm l_20 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, f_17);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      f_17 = ATgetArgument(t, 0);
                      {
                        ATerm k_17 = NULL,l_7 = NULL,v_7 = NULL,d_8 = NULL,f_8 = NULL;
                        t = SSL_explode_string(f_17);
                        t = escape_chars_0_0(t);
                        l_7 = t;
                        t = SSL_implode_string(l_7);
                        v_7 = t;
                        t = SSL_explode_string(v_7);
                        f_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_8), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
                        t = conc_0_0(t);
                        d_8 = t;
                        t = SSL_implode_string(d_8);
                        k_17 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_20), term_r_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, k_17)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          f_17 = ATgetArgument(t, 0);
                          {
                            ATerm p_8 = NULL;
                            t = SSL_real_to_string(f_17);
                            p_8 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, p_8))));
                          }
                        }
                      else
                        {
                          ATerm e_9 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              f_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(f_17);
                          e_9 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_9))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,n_18 = NULL,o_18 = NULL,m_2 = NULL,o_2 = NULL;
  o_18 = t;
  if(match_cons(t, sym_Id_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_18);
  k_18 = t;
  t = l_18;
  t = p_102(t);
  n_18 = t;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_Id_1, n_18);
  m_2 = t;
  t = SSLsetAnnotations(m_2, k_18);
  return(t);
}
ATerm FunCall_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,p_2 = NULL,r_2 = NULL;
  y_18 = t;
  if(match_cons(t, sym_FunCall_2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_18);
  t_18 = t;
  t = u_18;
  t = r_105(t);
  w_18 = t;
  t = v_18;
  t = s_105(t);
  x_18 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_FunCall_2, w_18, x_18);
  p_2 = t;
  t = SSLsetAnnotations(p_2, t_18);
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = Id_1_0(i_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = Cons_2_0(_id, k_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = Cons_2_0(_id, m_5, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  if(match_string(t, "Cons"))
    {
      ATerm w_9 = NULL;
      t = k_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_21 = ATgetFirst((ATermList) t);
          f_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_21 = ATgetFirst((ATermList) t);
          h_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_21;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_10 = NULL,s_10 = NULL,v_10 = NULL,y_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                p_10 = ATgetArgument(t, 0);
                d_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_10;
            if(match_cons(t, sym_TypeName_2))
              {
                s_10 = ATgetArgument(t, 0);
                c_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_10;
            if(match_cons(t, sym_TypeSpec_3))
              {
                v_10 = ATgetArgument(t, 0);
                y_10 = ATgetArgument(t, 1);
                b_11 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_10;
            if(match_cons(t, sym_TypeId_1))
              {
                a_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_11;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = b_11;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_11;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = d_11;
            {
              ATerm a_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Id_1_0(f_5, t);
                  ;
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = a_21;
                  t = FunCall_2_0(g_5, h_5, t);
                }
            }
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_21, (ATerm) ATinsert(ATempty, g_21));
          }
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, e_21), w_9)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = k_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_21;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    t = bottomup_1_0(u_113, t);
    return(t);
  }
  t = SRTS_all(n_5, t);
  t = u_113(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  t = t_113(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = topdown_1_0(t_113, t);
      return(t);
    }
    t = SRTS_all(r_5, t);
  }
  return(t);
}
ATerm p_37 (ATerm z_24, ATerm b_25, ATerm c_25, ATerm e_25, ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,m_25 = NULL,m_11 = NULL,n_11 = NULL;
  t = z_24;
  {
    ATerm s_21 = t;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL;
        o_25 = t;
        if(match_string(t, "Nil"))
          {
            t = o_25;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = o_25;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_21;
      }
    t = (ATerm) ATmakeAppl(sym__2, b_25, term_u_19);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
        if(match_cons(t, sym__2))
          {
            p_25 = ATgetArgument(t, 0);
            q_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(q_25);
        r_25 = t;
        t = p_25;
        if(match_cons(t, sym_Var_1))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm t_21 = t;
              int u_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_26 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_25)), c_25));
                  a_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_25, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_25)), c_25)));
                  t = q_9(p_25, v_25, a_26, t);
                  ;
                  LocalPopChoice(u_21);
                }
              else
                {
                  t = t_21;
                  {
                    ATerm b_26 = NULL;
                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_25)), c_25));
                    b_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_25, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_25)), c_25)));
                    t = p_9(p_25, b_26, t);
                  }
                }
            }
          }
        else
          {
            ATerm c_26 = NULL;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_25)), c_25));
            c_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_25, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_25)), c_25)));
            t = p_9(p_25, c_26, t);
          }
        s_25 = t;
        t = term_s_14;
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_25, term_s_14);
        t = o_10(q_25, u_25, t);
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, t_25);
        return(t);
      }
      t = thread_map_1_0(s_5, t);
      if(match_cons(t, sym__2))
        {
          j_25 = ATgetArgument(t, 0);
          {
            ATerm c_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_25;
      t = foldr_3_0(a_6, b_6, c_6, t);
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, k_25);
      m_11 = t;
      t = term_y_19;
      n_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATmakeAppl(sym__2, z_24, k_25));
      t = a_10(n_11, m_11, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm d_22 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          m_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_25)), c_25)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, j_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22))));
    }
  }
  return(t);
}
ATerm q_37 (ATerm g_26, ATerm h_26, ATerm i_26, ATerm t)
{
  ATerm p_26 = NULL;
  t = SSL_real_to_string(g_26);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, h_26)), term_o_22), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_22, h_26))), (ATerm) ATmakeAppl(sym_FloatConst_1, p_26))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22))));
  return(t);
}
ATerm r_37 (ATerm q_26, ATerm t_26, ATerm v_26, ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_int_to_string(q_26);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, t_26)), term_w_22), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_23, t_26))), (ATerm) ATmakeAppl(sym_IntConst_1, e_27))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22))));
  return(t);
}
ATerm s_37 (ATerm f_27, ATerm g_27, ATerm i_27, ATerm j_27, ATerm t)
{
  t = SSLgetAnnotations(f_27);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_27), term_h_23), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_27), i_27)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, i_27))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_27), term_r_15, i_27)));
  return(t);
}
ATerm t_37 (ATerm u_27, ATerm v_27, ATerm w_27, ATerm x_27, ATerm t)
{
  t = SSLgetAnnotations(u_27);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_23 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_23 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, v_27), w_27), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, w_27))))));
  return(t);
}
ATerm u_37 (ATerm e_28, ATerm g_28, ATerm k_28, ATerm l_28, ATerm t)
{
  t = SSLgetAnnotations(e_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_23 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) n_23) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_23 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(p_23) != AT_LIST) || !(ATisEmpty(p_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_28), term_r_15, k_28));
  return(t);
}
ATerm v_37 (ATerm s_28, ATerm u_28, ATerm v_28, ATerm w_28, ATerm x_28, ATerm y_28, ATerm z_28, ATerm c_29, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,p_11 = NULL,r_11 = NULL;
  t = u_28;
  {
    ATerm q_23 = t;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL;
        t_29 = t;
        if(match_string(t, "Nil"))
          {
            t = t_29;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = t_29;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_23;
      }
    t = (ATerm) ATmakeAppl(sym__2, w_28, term_u_19);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm u_29 = NULL,v_29 = NULL,x_29 = NULL,z_29 = NULL,a_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            if(match_cons(r_23, sym_Var_1))
              {
                u_29 = ATgetArgument(r_23, 0);
              }
            else
              _fail(t);
            v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(v_29);
        x_29 = t;
        t = term_s_14;
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_29, term_s_14);
        t = o_10(v_29, a_30, t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, u_29), term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, x_29)), (ATerm) ATmakeAppl(sym_Id_1, s_28))))), z_29);
        return(t);
      }
      t = thread_map_1_0(d_6, t);
      if(match_cons(t, sym__2))
        {
          q_29 = ATgetArgument(t, 0);
          {
            ATerm s_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
      p_11 = t;
      t = term_y_19;
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATmakeAppl(sym__2, u_28, v_28));
      t = a_10(r_11, p_11, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm t_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          s_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, q_29, (ATerm) ATinsert(ATempty, x_28));
      t = conc_0_0(t);
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, s_29)), (ATerm) ATmakeAppl(sym_Id_1, s_28))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_29), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_28), y_28, z_28))));
    }
  }
  return(t);
}
ATerm w_37 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm h_30, ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_real_to_string(e_30);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, p_30)), (ATerm) ATmakeAppl(sym_Id_1, d_30))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_30)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, d_30), h_30, i_30))));
  return(t);
}
ATerm x_37 (ATerm s_30, ATerm t_30, ATerm u_30, ATerm v_30, ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm k_31 = NULL;
  t = SSL_int_to_string(t_30);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, k_31)), (ATerm) ATmakeAppl(sym_Id_1, s_30))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_30)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_30), v_30, w_30))));
  return(t);
}
ATerm y_37 (ATerm l_31, ATerm m_31, ATerm n_31, ATerm t)
{
  t = m_31;
  {
    ATerm z_23 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_23;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_31)));
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      e_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(e_26, f_26, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm y_33 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      if(match_cons(a_24, sym_SVar_1))
        {
          y_33 = ATgetArgument(a_24, 0);
        }
      else
        _fail(t);
      {
        ATerm b_24 = ATgetArgument(t, 1);
        if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
          _fail(t);
      }
      {
        ATerm c_24 = ATgetArgument(t, 2);
        if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, y_33);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = topdown_1_0(i_6, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(k_6, t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm h_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = h_24;
          }
      }
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm f_34 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if(match_cons(l_24, sym_SVar_1))
        {
          f_34 = ATgetArgument(l_24, 0);
        }
      else
        _fail(t);
      {
        ATerm o_24 = ATgetArgument(t, 1);
        if(((ATgetType(o_24) != AT_LIST) || !(ATisEmpty(o_24))))
          _fail(t);
      }
      {
        ATerm p_24 = ATgetArgument(t, 2);
        if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, f_34);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = topdown_1_0(o_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(p_6, t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  t = term_x_24;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_35, term_x_24);
  t = f_10(r_6, m_35, n_35, t);
  t = m_35;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_35), term_d_16), term_d_25);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  if(match_cons(t, sym__2))
    {
      v_35 = ATgetArgument(t, 0);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_35;
  if(match_cons(t, sym_Var_1))
    {
      t_35 = ATgetArgument(t, 0);
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_35;
            t = q_9(v_35, t_35, w_35, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = u_35;
            t = p_9(v_35, w_35, t);
          }
      }
    }
  else
    {
      t = u_35;
      t = p_9(v_35, w_35, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,u_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,k_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,x_32 = NULL,a_33 = NULL,d_33 = NULL,e_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_33 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, e_33, (ATerm) ATinsert(ATempty, x_32));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          e_33 = ATgetArgument(t, 0);
          {
            ATerm k_33 = NULL;
            t = d_33;
            t = new_0_0(t);
            k_33 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_33), term_d_16))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_Id_1, k_33)))), e_33), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_33), term_r_15, term_k_22))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              e_33 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, e_33);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  e_33 = ATgetArgument(t, 0);
                  x_32 = ATgetArgument(t, 1);
                  p_32 = ATgetArgument(t, 2);
                  {
                    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
                    t = e_33;
                    if(match_cons(t, sym_SVar_1))
                      {
                        a_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_32;
                    t = map_1_0(e_6, t);
                    v_33 = t;
                    t = p_32;
                    t = map_1_0(f_6, t);
                    w_33 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_22)), w_33), v_33);
                    t = concat_0_0(t);
                    x_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, a_33), x_33)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      e_33 = ATgetArgument(t, 0);
                      x_32 = ATgetArgument(t, 1);
                      p_32 = ATgetArgument(t, 2);
                      {
                        ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
                        t = x_32;
                        t = map_1_0(m_6, t);
                        c_34 = t;
                        t = p_32;
                        t = map_1_0(n_6, t);
                        d_34 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
                        t = conc_0_0(t);
                        e_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, e_33), e_34)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          e_33 = ATgetArgument(t, 0);
                          {
                            ATerm h_34 = NULL;
                            t = d_33;
                            t = new_0_0(t);
                            h_34 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_34), term_d_16), term_h_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_x_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_26), term_j_26), e_33)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_Id_1, h_34))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              e_33 = ATgetArgument(t, 0);
                              x_32 = ATgetArgument(t, 1);
                              {
                                ATerm l_34 = NULL;
                                t = d_33;
                                t = new_0_0(t);
                                l_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_34), term_d_16), term_h_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_r_26, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_33)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_Id_1, l_34))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  e_33 = ATgetArgument(t, 0);
                                  x_32 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, e_33, x_32);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      e_33 = ATgetArgument(t, 0);
                                      x_32 = ATgetArgument(t, 1);
                                      p_32 = ATgetArgument(t, 2);
                                      {
                                        ATerm w_34 = NULL,z_34 = NULL;
                                        t = d_33;
                                        t = new_0_0(t);
                                        w_34 = t;
                                        t = new_0_0(t);
                                        z_34 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_34), term_d_16), term_z_26)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_34), term_d_16), term_h_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_x_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_34))))), e_33)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_Id_1, w_34))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          e_33 = ATgetArgument(t, 0);
                                          x_32 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_35 = NULL,e_35 = NULL;
                                            t = d_33;
                                            t = new_0_0(t);
                                            c_35 = t;
                                            t = new_0_0(t);
                                            e_35 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_35), term_d_16), term_z_26)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_35), term_d_16), term_h_25)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_x_25, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_35))))), term_k_27), e_33)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, (ATerm) ATmakeAppl(sym_Id_1, c_35))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              e_33 = ATgetArgument(t, 0);
                                              x_32 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_33, x_32);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  e_33 = ATgetArgument(t, 0);
                                                  x_32 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_32), e_33));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      e_33 = ATgetArgument(t, 0);
                                                      x_32 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm l_35 = NULL;
                                                        t = e_33;
                                                        t = map_1_0(q_6, t);
                                                        t = e_33;
                                                        t = map_1_0(s_6, t);
                                                        l_35 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, l_35)), (ATerm) ATinsert(ATempty, x_32));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_l_27;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  e_33 = ATgetArgument(t, 0);
                                                                  x_32 = ATgetArgument(t, 1);
                                                                  t = e_33;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      a_33 = ATgetArgument(t, 0);
                                                                      y_31 = ATgetArgument(t, 1);
                                                                      t = y_31;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          r_31 = ATgetFirst((ATermList) t);
                                                                          s_31 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = s_31;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_31 = ATgetFirst((ATermList) t);
                                                                              x_31 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = x_31;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = a_33;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm m_27 = t;
                                                                                      int n_27 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm s_35 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_31, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_27, x_32)))))), (ATerm) ATmakeAppl(sym__2, r_31, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_27, x_32)))));
                                                                                          t = map_1_0(t_6, t);
                                                                                          s_35 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, x_32)), term_b_28), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_28, (ATerm) ATinsert(ATempty, x_32)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_35), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22))));
                                                                                          ;
                                                                                          LocalPopChoice(n_27);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_27;
                                                                                          t = p_37(a_33, y_31, x_32, d_33, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_37(a_33, y_31, x_32, d_33, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_33;
                                                                                  t = p_37(a_33, y_31, x_32, d_33, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_33;
                                                                              t = p_37(a_33, y_31, x_32, d_33, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = a_33;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm f_28 = t;
                                                                                  int h_28 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, x_32)), term_b_28), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_28, (ATerm) ATinsert(ATempty, x_32)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22))));
                                                                                      ;
                                                                                      LocalPopChoice(h_28);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = f_28;
                                                                                      t = p_37(a_33, y_31, x_32, d_33, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_37(a_33, y_31, x_32, d_33, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_33;
                                                                              t = p_37(a_33, y_31, x_32, d_33, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          a_33 = ATgetArgument(t, 0);
                                                                          t = q_37(a_33, x_32, d_33, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              a_33 = ATgetArgument(t, 0);
                                                                              t = r_37(a_33, x_32, d_33, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  a_33 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm h_36 = NULL,y_11 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL;
                                                                                    t = SSL_explode_string(a_33);
                                                                                    t = escape_chars_0_0(t);
                                                                                    y_11 = t;
                                                                                    t = SSL_implode_string(y_11);
                                                                                    f_12 = t;
                                                                                    t = SSL_explode_string(f_12);
                                                                                    i_12 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_12), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
                                                                                    t = conc_0_0(t);
                                                                                    g_12 = t;
                                                                                    t = SSL_implode_string(g_12);
                                                                                    h_36 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_28, x_32))), (ATerm) ATmakeAppl(sym_FunCall_2, term_o_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_20), term_r_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, h_36))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, term_k_22))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      a_33 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm q_28 = t;
                                                                                        int r_28 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = s_37(e_33, a_33, x_32, d_33, t);
                                                                                            ;
                                                                                            LocalPopChoice(r_28);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = q_28;
                                                                                            {
                                                                                              ATerm t_28 = t;
                                                                                              int a_29 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = t_37(e_33, a_33, x_32, d_33, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(a_29);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_28;
                                                                                                  t = u_37(e_33, a_33, x_32, d_33, t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          a_33 = ATgetArgument(t, 0);
                                                                                          y_31 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, y_31, x_32)), (ATerm) ATmakeAppl(sym_Match_2, a_33, x_32)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm b_29 = t;
                                                                                          int d_29 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm e_29 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(d_29);
                                                                                              t = term_l_27;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_29;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_l_27;
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
                                                                      e_33 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, e_33, term_k_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          e_33 = ATgetArgument(t, 0);
                                                                          x_32 = ATgetArgument(t, 1);
                                                                          p_32 = ATgetArgument(t, 2);
                                                                          t = e_33;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              a_33 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = x_32;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              r_32 = ATgetFirst((ATermList) t);
                                                                              o_32 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = r_32;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  h_32 = ATgetArgument(t, 0);
                                                                                  k_32 = ATgetArgument(t, 1);
                                                                                  n_32 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = h_32;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  i_32 = ATgetArgument(t, 0);
                                                                                  g_32 = ATgetArgument(t, 1);
                                                                                  t = k_32;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      z_31 = ATgetFirst((ATermList) t);
                                                                                      b_32 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = b_32;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          c_32 = ATgetFirst((ATermList) t);
                                                                                          e_32 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = e_32;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = c_32;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  d_32 = ATgetArgument(t, 0);
                                                                                                  t = z_31;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      a_32 = ATgetArgument(t, 0);
                                                                                                      t = g_32;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = i_32;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm f_29 = t;
                                                                                                              int g_29 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_33))), term_b_28), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_33))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_32), term_r_15, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_27, (ATerm) ATmakeAppl(sym_Id_1, a_33)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_32), term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_27, (ATerm) ATmakeAppl(sym_Id_1, a_33)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_33), o_32, p_32))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(g_29);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_29;
                                                                                                                  t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = i_32;
                                                                                                          t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_32;
                                                                                                      t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = i_32;
                                                                                                  t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = i_32;
                                                                                              t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_32;
                                                                                          t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = g_32;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = i_32;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm h_29 = t;
                                                                                                  int i_29 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_33))), term_b_28), (ATerm) ATmakeAppl(sym_FunCall_2, term_d_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_33)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_32), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_33), o_32, p_32))));
                                                                                                      ;
                                                                                                      LocalPopChoice(i_29);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_29;
                                                                                                      t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = i_32;
                                                                                              t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_32;
                                                                                          t = v_37(a_33, i_32, g_32, k_32, n_32, o_32, p_32, d_33, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      i_32 = ATgetArgument(t, 0);
                                                                                      t = w_37(a_33, i_32, n_32, o_32, p_32, d_33, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          i_32 = ATgetArgument(t, 0);
                                                                                          t = x_37(a_33, i_32, n_32, o_32, p_32, d_33, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm c_37 = NULL,k_12 = NULL,m_12 = NULL,u_12 = NULL,y_12 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              i_32 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(i_32);
                                                                                          t = escape_chars_0_0(t);
                                                                                          k_12 = t;
                                                                                          t = SSL_implode_string(k_12);
                                                                                          m_12 = t;
                                                                                          t = SSL_explode_string(m_12);
                                                                                          y_12 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_12), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
                                                                                          t = conc_0_0(t);
                                                                                          u_12 = t;
                                                                                          t = SSL_implode_string(u_12);
                                                                                          c_37 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_29, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, c_37))), (ATerm) ATmakeAppl(sym_Id_1, a_33))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_33), o_32, p_32))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = p_32;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              e_33 = ATgetArgument(t, 0);
                                                                              x_32 = ATgetArgument(t, 1);
                                                                              p_32 = ATgetArgument(t, 2);
                                                                              q_32 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, e_33), (ATerm) ATmakeAppl(sym_Case_3, x_32, p_32, q_32));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  e_33 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, e_33));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      e_33 = ATgetArgument(t, 0);
                                                                                      x_32 = ATgetArgument(t, 1);
                                                                                      t = e_33;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          a_33 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = x_32;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          r_32 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm l_29 = t;
                                                                                            int m_29 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_33), term_h_23), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_33), (ATerm) ATmakeAppl(sym_Id_1, r_32))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, r_32)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_33), term_r_15, (ATerm) ATmakeAppl(sym_Id_1, r_32))));
                                                                                                ;
                                                                                                LocalPopChoice(m_29);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = l_29;
                                                                                                t = y_37(a_33, x_32, d_33, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_37(a_33, x_32, d_33, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          e_33 = ATgetArgument(t, 0);
                                                                                          t = e_33;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              a_33 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_33), term_r_15, term_k_22));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm o_37 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              e_33 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = e_33;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          o_37 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_22, term_r_15, o_37));
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
ATerm s_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm y_0, ATerm b_1, ATerm v_0, ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_0, v_0);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_1, a_38);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_38), z_37), b_38);
  return(t);
}
ATerm thread_map_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm o_38 (ATerm t)
  {
    ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
    h_38 = t;
    if(match_cons(t, sym__2))
      {
        i_38 = ATgetArgument(t, 0);
        j_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_38 = ATgetFirst((ATermList) t);
        g_38 = (ATerm) ATgetNext((ATermList) t);
        t = h_38;
        t = s_9(d_126, o_38, f_38, g_38, j_38, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_38);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
ATerm Var_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,s_2 = NULL,u_2 = NULL;
  s_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_38);
  p_38 = t;
  t = q_38;
  t = j_92(t);
  r_38 = t;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_38);
  s_2 = t;
  t = SSLsetAnnotations(s_2, p_38);
  return(t);
}
ATerm y_42 (ATerm s_39, ATerm t_39, ATerm u_39, ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,b_13 = NULL,c_13 = NULL;
  t = s_39;
  {
    ATerm n_29 = t;
    if((PushChoice() == 0))
      {
        ATerm f_40 = NULL;
        f_40 = t;
        if(match_string(t, "Nil"))
          {
            t = f_40;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = f_40;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_29;
      }
    t = t_39;
    t = map_1_0(u_6, t);
    t = (ATerm) ATmakeAppl(sym__2, t_39, term_u_19);
    t = thread_map_1_0(v_6, t);
    if(match_cons(t, sym__2))
      {
        b_40 = ATgetArgument(t, 0);
        {
          ATerm o_29 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = t_39;
    t = foldr_3_0(y_6, z_6, a_7, t);
    c_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_39, c_40);
    b_13 = t;
    t = term_y_19;
    c_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATmakeAppl(sym__2, s_39, c_40));
    t = a_10(c_13, b_13, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm p_29 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) p_29) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        e_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, b_40, (ATerm) ATinsert(ATempty, u_39));
    t = conc_0_0(t);
    d_40 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_40)), term_k_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, d_40), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_39)));
  }
  return(t);
}
ATerm n_43 (ATerm n_40, ATerm o_40, ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_real_to_string(n_40);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, u_40)), term_k_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_40)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_40)));
  return(t);
}
ATerm p_43 (ATerm v_40, ATerm w_40, ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm c_41 = NULL;
  t = SSL_int_to_string(v_40);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_41)), term_k_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_40)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_40)));
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      if(match_cons(w_29, sym_Var_1))
        {
          g_40 = ATgetArgument(w_29, 0);
        }
      else
        _fail(t);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(h_40);
  i_40 = t;
  t = term_s_14;
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_40, term_s_14);
  t = o_10(h_40, k_40, t);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_40), term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, i_40)), term_k_22)))), j_40);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  if(match_cons(t, sym__2))
    {
      l_40 = ATgetArgument(t, 0);
      m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(l_40, m_40, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,e_42 = NULL;
  k_41 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      l_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
      e_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_41;
  if(match_cons(t, sym_Match_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_41;
  if(match_cons(t, sym_Op_2))
    {
      n_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
      t = j_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_41 = ATgetFirst((ATermList) t);
          f_41 = (ATerm) ATgetNext((ATermList) t);
          t = f_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_41 = ATgetFirst((ATermList) t);
              i_41 = (ATerm) ATgetNext((ATermList) t);
              t = i_41;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_41;
                  if(match_cons(t, sym_Var_1))
                    {
                      h_41 = ATgetArgument(t, 0);
                      t = d_41;
                      if(match_cons(t, sym_Var_1))
                        {
                          e_41 = ATgetArgument(t, 0);
                          t = n_41;
                          if(match_string(t, "Cons"))
                            {
                              ATerm y_29 = t;
                              int b_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, term_k_22)), term_b_28), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_28, (ATerm) ATinsert(ATempty, term_k_22)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_41), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_41), term_r_15, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_27, (ATerm) ATinsert(ATempty, term_c_30)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_41), term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_27, (ATerm) ATinsert(ATempty, term_c_30)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_42)));
                                  ;
                                  LocalPopChoice(b_30);
                                }
                              else
                                {
                                  t = y_29;
                                  t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                                }
                            }
                          else
                            {
                              t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                            }
                        }
                      else
                        {
                          t = n_41;
                          t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                        }
                    }
                  else
                    {
                      t = n_41;
                      t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                    }
                }
              else
                {
                  t = n_41;
                  t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                }
            }
          else
            {
              t = n_41;
              t = y_42(n_41, j_41, o_41, e_42, k_41, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = n_41;
              if(match_string(t, "Nil"))
                {
                  ATerm g_30 = t;
                  int k_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, term_k_22)), term_b_28), (ATerm) ATmakeAppl(sym_FunCall_2, term_d_28, (ATerm) ATinsert(ATempty, term_k_22))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_41)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_42)));
                      ;
                      LocalPopChoice(k_30);
                    }
                  else
                    {
                      t = g_30;
                      t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                    }
                }
              else
                {
                  t = y_42(n_41, j_41, o_41, e_42, k_41, t);
                }
            }
          else
            {
              t = n_41;
              t = y_42(n_41, j_41, o_41, e_42, k_41, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          n_41 = ATgetArgument(t, 0);
          t = n_43(n_41, o_41, e_42, k_41, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              n_41 = ATgetArgument(t, 0);
              t = p_43(n_41, o_41, e_42, k_41, t);
            }
          else
            {
              ATerm w_42 = NULL,f_13 = NULL,i_13 = NULL,j_13 = NULL,o_13 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  n_41 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(n_41);
              t = escape_chars_0_0(t);
              f_13 = t;
              t = SSL_implode_string(f_13);
              i_13 = t;
              t = SSL_explode_string(i_13);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_13), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
              t = conc_0_0(t);
              j_13 = t;
              t = SSL_implode_string(j_13);
              w_42 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_29, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, w_42))), term_k_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_41)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_42)));
            }
        }
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_45 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_30 = ATgetFirst((ATermList) t);
              if(((ATgetType(q_30) != AT_INT) || (ATgetInt((ATermInt) q_30) != 34)))
                _fail(t);
              y_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(y_45), term_m_20), term_r_30);
          ;
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          {
            ATerm a_46 = NULL,i_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_46 = ATgetFirst((ATermList) t);
                i_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_46;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(i_46), term_r_30), term_r_30);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(i_46), term_y_30), term_r_30);
              }
          }
        }
      t = Cons_2_0(_id, b_7, t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm x_9 (ATerm i_49, ATerm h_49, ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,p_13 = NULL,w_13 = NULL,b_14 = NULL,c_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL,k_14 = NULL,l_14 = NULL,p_14 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_31), i_49);
  z_47 = t;
  t = SSL_concat_strings(z_47);
  p_13 = t;
  t = SSL_explode_string(p_13);
  t = escape_chars_0_0(t);
  w_13 = t;
  t = SSL_implode_string(w_13);
  b_14 = t;
  t = SSL_explode_string(b_14);
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_14), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
  t = conc_0_0(t);
  c_14 = t;
  t = SSL_implode_string(c_14);
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_31), i_49);
  a_48 = t;
  t = SSL_concat_strings(a_48);
  h_14 = t;
  t = SSL_explode_string(h_14);
  t = escape_chars_0_0(t);
  i_14 = t;
  t = SSL_implode_string(i_14);
  k_14 = t;
  t = SSL_explode_string(k_14);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_14), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
  t = conc_0_0(t);
  l_14 = t;
  t = SSL_implode_string(l_14);
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_31), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), (ATerm) ATmakeAppl(sym_StringLit_1, y_47)), term_f_31)))), h_49), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), (ATerm) ATmakeAppl(sym_StringLit_1, x_47)), term_f_31)))));
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL;
        t = term_k_15;
        q_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_15, k_19);
        t = a_10(q_20, k_19, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm j_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_31) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = k_19;
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm b_21 = NULL,c_21 = NULL;
          t = (ATerm) ATempty;
          b_21 = t;
          t = term_g_15;
          c_21 = t;
          t = term_o_31;
          t = a_10(c_21, b_21, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm p_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_31) != ATmakeSymbol("o_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = k_19;
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  {
    ATerm q_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_23 = NULL;
        t = term_k_15;
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_15, f_22);
        t = a_10(a_23, f_22, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm v_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_31) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = f_22;
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = q_31;
        {
          ATerm f_23 = NULL,g_23 = NULL;
          t = (ATerm) ATempty;
          f_23 = t;
          t = term_g_15;
          g_23 = t;
          t = term_o_31;
          t = a_10(g_23, f_23, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm w_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("o_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = f_22;
        }
      }
  }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  l_53 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_53 = ATgetArgument(t, 0);
      n_53 = ATgetArgument(t, 1);
      o_53 = ATgetArgument(t, 2);
      k_53 = ATgetArgument(t, 3);
      {
        ATerm m_18 = NULL,p_18 = NULL,q_18 = NULL,a_19 = NULL,b_19 = NULL;
        t = n_53;
        t = map_1_0(TranslateVarDec_0_0, t);
        m_18 = t;
        t = o_53;
        t = map_1_0(TranslateVarDec_0_0, t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_18, p_18);
        t = conc_0_0(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_53, k_53);
        {
          ATerm f_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_19 = NULL,e_19 = NULL;
              t = _2_0(c_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_19 = ATgetArgument(t, 0);
                  e_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_9(d_19, e_19, t);
              ;
              LocalPopChoice(j_32);
            }
          else
            {
              t = f_32;
              if(match_cons(t, sym__2))
                {
                  ATerm l_32 = ATgetArgument(t, 0);
                  ATerm m_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_31), k_53));
            }
          a_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_18, (ATerm) ATinsert(ATempty, term_t_32));
          t = conc_0_0(t);
          b_19 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_c_16, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, b_19))), a_19);
        }
      }
    }
  else
    {
      ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          m_53 = ATgetArgument(t, 0);
          n_53 = ATgetArgument(t, 1);
          o_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_53;
      t = map_1_0(TranslateVarDec_0_0, t);
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_53, o_53);
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = NULL,z_21 = NULL;
            t = _2_0(d_7, _id, t);
            if(match_cons(t, sym__2))
              {
                y_21 = ATgetArgument(t, 0);
                z_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_9(y_21, z_21, t);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            if(match_cons(t, sym__2))
              {
                ATerm w_32 = ATgetArgument(t, 0);
                ATerm y_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_31), o_53));
          }
        w_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATinsert(ATempty, term_t_32));
        t = conc_0_0(t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_c_16, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, x_21))), w_21);
      }
    }
  return(t);
}
ATerm a_10 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm z_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_79, z_79);
  t = q_10(y_79, z_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_53 = ATgetFirst((ATermList) t);
      {
        ATerm z_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_53;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  if(match_cons(t, sym__2))
    {
      m_54 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(m_54, n_54, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm b_10 (ATerm e_48, ATerm c_48, ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,k_54 = NULL,i_23 = NULL,j_23 = NULL,m_23 = NULL,o_23 = NULL;
  t = c_48;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            k_54 = ATgetArgument(t, 0);
            {
              ATerm f_33 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_33);
        t = k_54;
        t = foldr_3_0(e_7, f_7, g_7, t);
      }
    else
      {
        t = b_33;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm g_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_u_19;
      }
    e_54 = t;
    t = SSL_int_to_string(e_54);
    f_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_48, e_54);
    i_23 = t;
    t = term_y_19;
    j_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_19, (ATerm) ATmakeAppl(sym__2, e_48, e_54));
    t = a_10(j_23, i_23, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm h_33 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        h_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(e_48);
    o_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_23), term_m_20), (ATerm) ATinsert(ATempty, term_m_20));
    t = conc_0_0(t);
    m_23 = t;
    t = SSL_implode_string(m_23);
    g_54 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_54))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_54), term_r_15, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_33), (ATerm) ATmakeAppl(sym_IntConst_1, f_54)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, g_54)))))));
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      s_54 = ATgetArgument(t, 0);
      t_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(s_54, t_54, t);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  t = map_1_0(h_7, t);
  t = concat_0_0(t);
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_54, (ATerm) ATinsert(ATempty, term_o_33));
  t = conc_0_0(t);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_v_15, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_q_33, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_v_15)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_54));
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_54 = ATgetFirst((ATermList) t);
      y_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_54;
  if(match_int(t, 95))
    {
      ATerm a_55 = NULL;
      t = y_54;
      t = n_0(t);
      a_55 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_55), term_r_33), term_r_33);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm c_55 = NULL;
          t = y_54;
          t = n_0(t);
          c_55 = t;
          t = (ATerm) ATinsert(CheckATermList(c_55), term_r_33);
        }
      else
        {
          ATerm e_55 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = y_54;
          t = n_0(t);
          e_55 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_55), term_r_33), term_s_33), term_r_33);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm v_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  f_55 = t;
  t = SSL_explode_string(f_55);
  {
    ATerm h_55 (ATerm t)
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_128(h_55, t);
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, h_55, t);
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = h_55(t);
    g_55 = t;
    t = SSL_implode_string(g_55);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t)
{
  ATerm b_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_125(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = b_34;
      {
        ATerm k_55 = NULL,l_55 = NULL,o_55 = NULL,p_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_55 = ATgetFirst((ATermList) t);
            l_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_55;
        t = r_125(t);
        o_55 = t;
        t = l_55;
        t = foldr_3_0(p_125, q_125, r_125, t);
        p_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
        t = q_125(t);
      }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  if(match_cons(t, sym__2))
    {
      c_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(c_56, d_56, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm c_10 (ATerm r_47, ATerm q_47, ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,a_56 = NULL;
  t = q_47;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            a_56 = ATgetArgument(t, 0);
            {
              ATerm k_34 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_34);
        t = a_56;
        t = foldr_3_0(i_7, k_7, m_7, t);
      }
    else
      {
        t = i_34;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm m_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_u_19;
      }
    r_55 = t;
    t = r_47;
    t = escape_1_0(Cify_1_0, t);
    s_55 = t;
    t = SSL_int_to_string(r_55);
    t_55 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_55), term_o_34), s_55), term_n_34);
    v_55 = t;
    t = SSL_concat_strings(v_55);
    u_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_47, r_55);
    w_55 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, u_55);
    x_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_47, r_55), (ATerm) ATmakeAppl(sym_Defined_2, term_p_34, u_55));
    t = f_10(p_7, w_55, x_55, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_55), term_d_16)));
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      i_56 = ATgetArgument(t, 0);
      j_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(i_56, j_56, t);
  return(t);
}
ATerm d_10 (ATerm o_47, ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  t = o_47;
  t = map_1_0(s_7, t);
  f_56 = t;
  t = o_47;
  t = InitConstructors_0_0(t);
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_56, (ATerm) ATinsert(ATempty, g_56));
  t = conc_0_0(t);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, h_56);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
        ATerm m_56 = NULL,n_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_56 = ATgetFirst((ATermList) t);
            n_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_56;
        {
          ATerm t_7 (ATerm t)
          {
            t = n_56;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_7, t);
        }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm u_56 = NULL;
  ATerm v_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          u_56 = ATgetArgument(t, 0);
          {
            ATerm y_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_34);
      {
        ATerm w_56 = NULL;
        t = u_56;
        t = map_1_0(TranslateType_0_0, t);
        w_56 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_ParamList_1, w_56));
      }
    }
  else
    {
      t = v_34;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm a_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_c_16;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_57;
  {
    ATerm b_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            d_57 = ATgetArgument(t, 0);
            {
              ATerm f_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_35);
        {
          ATerm g_57 = NULL;
          t = d_57;
          t = map_1_0(TranslateType_0_0, t);
          g_57 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_57), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, g_57))));
        }
      }
    else
      {
        t = b_35;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm g_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_16, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_57), term_d_16));
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  ATerm i_57 (ATerm t)
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_57, t);
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_120(t);
      }
    return(t);
  }
  t = i_57(t);
  return(t);
}
ATerm t_57 (ATerm l_57, ATerm t)
{
  ATerm n_57 = NULL;
  t = SSL_explode_term(l_57);
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_57;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  q_57 = t;
  if(match_cons(t, sym__2))
    {
      o_57 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
      {
        ATerm k_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 (ATerm t)
            {
              t = p_57;
              return(t);
            }
            t = o_57;
            t = at_end_1_0(z_7, t);
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = k_35;
            t = t_57(q_57, t);
          }
      }
    }
  else
    {
      t = t_57(q_57, t);
    }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_57 = ATgetArgument(t, 0);
          x_57 = ATgetArgument(t, 1);
          {
            ATerm x_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_35);
      {
        ATerm c_58 = NULL;
        t = x_57;
        t = map_1_0(TranslateVarDec_0_0, t);
        c_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_58, (ATerm) ATinsert(ATempty, term_c_16));
        t = conc_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_57), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, c_58)))));
      }
    }
  else
    {
      t = q_35;
      {
        ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            w_57 = ATgetArgument(t, 0);
            x_57 = ATgetArgument(t, 1);
            y_57 = ATgetArgument(t, 2);
            {
              ATerm y_35 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = x_57;
        t = map_1_0(TranslateVarDec_0_0, t);
        g_58 = t;
        t = y_57;
        t = map_1_0(TranslateVarDec_0_0, t);
        h_58 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_16)), h_58), g_58);
        t = concat_0_0(t);
        i_58 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_57), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, i_58)))));
      }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  n_58 = t;
  t = term_z_35;
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, n_58);
  t = h_10(p_58, n_58, t);
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, o_58);
  return(t);
}
ATerm e_10 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
  t = k_47;
  t = map_1_0(SDefToDeclaration_0_0, t);
  k_58 = t;
  t = term_l_15;
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        t = map_1_0(a_8, t);
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
    l_58 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(k_47), term_y_36)), k_58), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_36), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_v_15, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_36, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_m_36, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_n_36), term_p_36, term_d_16))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_36), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_s_36))), term_f_31)))))))), (ATerm) ATmakeAppl(sym_Signature_1, j_47)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_36, (ATerm) ATinsert(ATempty, term_i_36)))), l_58);
    t = concat_0_0(t);
    m_58 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, m_58);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm t)
{
  t = y_113(t);
  {
    ATerm e_8 (ATerm t)
    {
      t = downup2_2_0(y_113, z_113, t);
      return(t);
    }
    t = SRTS_all(e_8, t);
    t = z_113(t);
  }
  return(t);
}
ATerm f_10 (ATerm i_140 (ATerm), ATerm l_85, ATerm j_85, ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL;
  q_58 = t;
  t = i_140(t);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_58, l_85, j_85);
  t = r_10(r_58, l_85, j_85, t);
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_58 = NULL;
        t = term_b_37;
        w_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_58, term_b_37);
        t = q_10(r_58, w_58, t);
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_58 = ATgetFirst((ATermList) t);
        t_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_37;
    u_58 = t;
    t = (ATerm) ATinsert(CheckATermList(t_58), (ATerm) ATinsert(CheckATermList(s_58), l_85));
    v_58 = t;
    t = SSL_table_put(r_58, u_58, v_58);
    t = q_58;
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
  x_58 = t;
  t = term_e_37;
  y_58 = t;
  t = term_g_37;
  z_58 = t;
  t = term_h_37;
  t = f_10(g_8, y_58, z_58, t);
  t = x_58;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = repeat_1_0(l_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
      q_59 = t;
      if(match_cons(t, sym_Specification_1))
        {
          r_59 = ATgetArgument(t, 0);
          t = r_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_59 = ATgetFirst((ATermList) t);
              u_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_59;
          if(match_cons(t, sym_Signature_1))
            {
              t_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_59 = ATgetFirst((ATermList) t);
              p_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_59;
          if(match_cons(t, sym_Strategies_1))
            {
              o_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_59;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_59;
          t = e_10(t_59, o_59, t);
        }
      else
        {
          if(match_cons(t, sym_Signature_1))
            {
              r_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_59 = ATgetFirst((ATermList) t);
              u_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_59;
          if(match_cons(t, sym_Constructors_1))
            {
              t_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_59;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_59;
          t = d_10(t_59, t);
        }
      ;
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateDef_0_0(t);
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            {
              ATerm m_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateStratMatchGuard_0_0(t);
                  ;
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = m_37;
                  t = TranslateStrat_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_InitCachedTerms_0)))
    _fail(t);
  t = init_cached_terms_0_0(t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  t = downup2_2_0(i_8, k_8, t);
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(o_8, t);
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
      }
  }
  return(t);
}
ATerm i_10 (ATerm o_70, ATerm p_70, ATerm t)
{
  ATerm y_59 = NULL;
  t = SSL_fputc(o_70, p_70);
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_59);
  return(t);
}
ATerm j_10 (ATerm c_74, ATerm d_74, ATerm t)
{
  ATerm z_59 = NULL;
  t = SSL_write_term_to_stream_text(c_74, d_74);
  z_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_59);
  return(t);
}
ATerm l_10 (ATerm s_131 (ATerm), ATerm f_539, ATerm g_74, ATerm t)
{
  ATerm a_60 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_539, term_k_38);
  t = open_stream_0_0(t);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_60, g_74);
  t = s_131(t);
  t = fclose_0_0(t);
  t = g_74;
  return(t);
}
ATerm k_10 (ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm b_60 = NULL;
  t = SSL_write_term_to_stream_baf(y_73, z_73);
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_60);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = fetch_1_0(z_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  if(match_cons(t, sym__2))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(a_9, f_60, g_60, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(match_cons(l_38, sym_Stream_1))
        {
          h_60 = ATgetArgument(l_38, 0);
        }
      else
        _fail(t);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(h_60, i_60, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  if(match_cons(t, sym__2))
    {
      j_60 = ATgetArgument(t, 0);
      k_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(f_9, j_60, k_60, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_38 = ATgetArgument(t, 0);
      if(match_cons(m_38, sym_Stream_1))
        {
          m_60 = ATgetArgument(m_38, 0);
        }
      else
        _fail(t);
      n_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(m_60, n_60, t);
  l_60 = t;
  t = term_n_38;
  o_60 = t;
  t = l_60;
  if(match_cons(t, sym_Stream_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, l_60);
  t = i_10(o_60, p_60, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  c_60 = t;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm t_38 = t;
      int u_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((d_60 != NULL) && (d_60 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_8, t);
          ;
          LocalPopChoice(u_38);
        }
      else
        {
          t = t_38;
          t = term_v_38;
          if(((d_60 != NULL) && (d_60 != t)))
            _fail(t);
          else
            d_60 = t;
        }
      return(t);
    }
    t = _2_0(q_8, _id, t);
    t = c_60;
    {
      ATerm u_8 (ATerm t)
      {
        ATerm e_60 = NULL;
        e_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_60), e_60);
        return(t);
      }
      t = _2_0(_id, u_8, t);
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(v_8, w_8, t);
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            t = _2_0(_id, d_9, t);
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
ATerm apply_strategy_1_0 (ATerm s_133 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  q_60 = t;
  t = dtime_0_0(t);
  t = q_60;
  t = s_133(t);
  r_60 = t;
  t = dtime_0_0(t);
  s_60 = t;
  t = r_60;
  if(match_cons(t, sym__2))
    {
      t_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_60), (ATerm) ATmakeAppl(sym_Runtime_1, s_60)), u_60);
  return(t);
}
ATerm j_61 (ATerm d_61, ATerm t)
{
  t = SSL_fclose(d_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  h_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_61 = ATgetArgument(t, 0);
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_61);
            ;
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            t = j_61(h_61, t);
          }
      }
    }
  else
    {
      t = j_61(h_61, t);
    }
  return(t);
}
ATerm m_10 (ATerm e_74, ATerm t)
{
  t = SSL_read_term_from_stream(e_74);
  return(t);
}
ATerm n_10 (ATerm q_70, ATerm r_70, ATerm t)
{
  ATerm k_61 = NULL;
  t = SSL_fopen(q_70, r_70);
  k_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_61);
  return(t);
}
ATerm _2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,w_2 = NULL,x_2 = NULL;
  q_61 = t;
  if(match_cons(t, sym__2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_61);
  l_61 = t;
  t = m_61;
  t = j_86(t);
  o_61 = t;
  t = n_61;
  t = k_86(t);
  p_61 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
  w_2 = t;
  t = SSLsetAnnotations(w_2, l_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t = SSL_stdin_stream();
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_61 = NULL;
  t = SSL_stdout_stream();
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_61 = NULL;
  t = SSL_stderr_stream();
  v_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_61);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm f_62 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_62;
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  t = SSL_is_string(i_62);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      ATerm b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_62 = NULL,x_23 = NULL;
        c_62 = t;
        t = SSL_explode_term(c_62);
        if(match_cons(t, sym__2))
          {
            ATerm e_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_39 = ATgetArgument(t, 1);
              if(((ATgetType(f_39) == AT_LIST) && !(ATisEmpty(f_39))))
                {
                  x_23 = ATgetFirst((ATermList) f_39);
                  {
                    ATerm g_39 = (ATerm) ATgetNext((ATermList) f_39);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_23;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_23;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_23;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_23;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_62 = NULL,e_62 = NULL;
              t = _2_0(g_9, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_62 = ATgetArgument(t, 0);
                  e_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_10(d_62, e_62, t);
              ;
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
              {
                ATerm g_62 = NULL,h_62 = NULL;
                t = _2_0(h_9, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_62 = ATgetArgument(t, 0);
                    h_62 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_10(g_62, h_62, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_j_39;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_62 = NULL;
      n_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_62, term_m_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      t = debug_1_0(i_9, t);
      _fail(t);
    }
  k_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_10(m_62, t);
  l_62 = t;
  t = k_62;
  t = fclose_0_0(t);
  t = l_62;
  return(t);
}
ATerm fetch_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm p_62 (ATerm t)
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_119, _id, t);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = Cons_2_0(_id, p_62, t);
      }
    return(t);
  }
  t = p_62(t);
  return(t);
}
ATerm h_10 (ATerm s_65, ATerm t_65, ATerm t)
{
  t = SSL_strcat(s_65, t_65);
  return(t);
}
ATerm debug_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  q_62 = t;
  t = q_131(t);
  r_62 = t;
  t = term_o_14;
  s_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_62), r_62);
  t_62 = t;
  t = SSL_printnl(s_62, t_62);
  t = q_62;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_62 = NULL;
      z_62 = t;
      t = SSL_is_string(z_62);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_9, t);
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
              d_63 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_63 = ATgetArgument(t, 0);
                  t = e_63;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_63 = ATgetArgument(t, 0);
                      t = e_63;
                      {
                        ATerm r_40 = t;
                        int s_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_40);
                          }
                        else
                          {
                            t = r_40;
                            t = debug_1_0(m_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_63 = NULL,k_63 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_63 = ATgetArgument(t, 0);
                          f_63 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_63;
                      t = eval_config_0_0(t);
                      j_63 = t;
                      t = f_63;
                      t = eval_config_0_0(t);
                      k_63 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_63, k_63);
                      t = h_10(j_63, k_63, t);
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
  ATerm n_63 = NULL,o_63 = NULL;
  n_63 = t;
  t = term_v_14;
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, n_63);
  t = q_10(o_63, n_63, t);
  {
    ATerm t_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_63 = NULL,q_63 = NULL;
        t = eval_config_0_0(t);
        p_63 = t;
        t = term_v_14;
        q_63 = t;
        t = SSL_table_put(q_63, n_63, p_63);
        t = p_63;
        ;
        LocalPopChoice(z_40);
      }
    else
      {
        t = t_40;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_133 (ATerm), ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_63 = NULL,t_63 = NULL;
      r_63 = t;
      t = term_p_41;
      t = get_config_0_0(t);
      t_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_63, term_q_41);
      t = geq_0_0(t);
      t = r_63;
      t = d_133(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  if(match_string(t, "-k"))
    {
      t = v_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_63;
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  t = SSL_string_to_int(w_63);
  x_63 = t;
  t = term_r_41;
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_41, x_63);
  t = t_10(y_63, x_63, t);
  t = w_63;
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_s_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_9, r_9, t_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm a_64 = NULL;
  a_64 = t;
  if(match_string(t, "-S"))
    {
      t = a_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_64;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  t = term_p_41;
  b_64 = t;
  t = term_u_19;
  c_64 = t;
  t = term_t_41;
  t = t_10(b_64, c_64, t);
  t = term_u_41;
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_v_41;
  return(t);
}
ATerm z_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  d_64 = t;
  t = SSL_string_to_int(d_64);
  e_64 = t;
  t = term_p_41;
  f_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_41, e_64);
  t = t_10(f_64, e_64, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_64);
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_w_41;
  return(t);
}
ATerm g_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL;
  t = term_x_41;
  g_64 = t;
  t = term_m_14;
  h_64 = t;
  t = term_y_41;
  t = t_10(g_64, h_64, t);
  t = term_z_41;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_9, v_9, y_9, t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      {
        ATerm d_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_9, g_10, f_11, t);
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = d_42;
            t = Option_3_0(g_11, h_11, i_11, t);
          }
      }
    }
  return(t);
}
ATerm t_10 (ATerm u_85, ATerm v_85, ATerm t)
{
  ATerm i_64 = NULL;
  t = term_v_14;
  i_64 = t;
  t = SSL_table_put(i_64, u_85, v_85);
  t = (ATerm) ATmakeAppl(sym__3, term_v_14, u_85, v_85);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
      t = term_m_14;
      t = d_0(t);
      n_64 = t;
      t = term_g_42;
      o_64 = t;
      t = term_h_42;
      p_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_42, term_h_42, n_64);
      t = r_10(o_64, p_64, n_64, t);
      _fail(t);
    }
  else
    {
      ATerm s_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_64 = ATgetFirst((ATermList) t);
          m_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_64;
      t = a_0(t);
      t = term_m_14;
      t = b_0(t);
      s_64 = t;
      t = (ATerm) ATinsert(CheckATermList(m_64), s_64);
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm u_64 = NULL;
  u_64 = t;
  if(match_string(t, "-o"))
    {
      t = u_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_64;
    }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL;
  v_64 = t;
  t = term_i_42;
  w_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_42, v_64);
  t = t_10(w_64, v_64, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_64);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_j_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_11, k_11, l_11, t);
  return(t);
}
ATerm r_10 (ATerm n_79, ATerm o_79, ATerm m_79, ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_79, o_79);
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_42 = ATgetArgument(t, 0);
            ATerm o_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_79, o_79);
        t = q_10(n_79, o_79, t);
        ;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = (ATerm) ATempty;
      }
    z_64 = t;
    t = (ATerm) ATinsert(CheckATermList(z_64), m_79);
    a_65 = t;
    t = SSL_table_put(n_79, o_79, a_65);
    t = y_64;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
      t = term_m_14;
      t = m_0(t);
      o_65 = t;
      t = term_g_42;
      p_65 = t;
      t = term_h_42;
      q_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_42, term_h_42, o_65);
      t = r_10(p_65, q_65, o_65, t);
      _fail(t);
    }
  else
    {
      ATerm w_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_65 = ATgetFirst((ATermList) t);
          l_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_65 = ATgetFirst((ATermList) t);
          n_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_65;
      t = i_0(t);
      t = m_65;
      t = k_0(t);
      w_65 = t;
      t = (ATerm) ATinsert(CheckATermList(n_65), w_65);
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  if(match_string(t, "-i"))
    {
      t = y_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_65;
    }
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL;
  a_66 = t;
  t = term_q_42;
  b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_42, a_66);
  t = t_10(b_66, a_66, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_66);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_r_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_11, s_11, t_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_14;
  t = whoami_0_0(t);
  c_66 = t;
  t = term_o_14;
  d_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_42), c_66);
  e_66 = t;
  t = SSL_printnl(d_66, e_66);
  t = term_s_14;
  f_66 = t;
  t = SSL_exit(f_66);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_42;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_10 (ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_68, d_68);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      t = SSL_addr(c_68, d_68);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t)
{
  ATerm x_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_125(t);
      ;
      LocalPopChoice(z_42);
    }
  else
    {
      t = x_42;
      {
        ATerm i_66 = NULL,j_66 = NULL,m_66 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_66 = ATgetFirst((ATermList) t);
            j_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_66;
        t = foldr_2_0(n_125, o_125, t);
        m_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_66, m_66);
        t = o_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(m_24, n_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_66 = NULL,i_24 = NULL,j_24 = NULL;
  t = times_0_0(t);
  i_24 = t;
  t = SSL_explode_term(i_24);
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_24;
  t = foldr_2_0(u_11, v_11, t);
  p_66 = t;
  t = SSL_TicksToSeconds(p_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  if(match_cons(t, sym__2))
    {
      b_67 = ATgetArgument(t, 0);
      c_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_67;
        if((b_67 != t))
          {
            _fail(t);
          }
        t = a_67;
        ;
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
        {
          ATerm g_43 = t;
          int h_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_67, c_67);
              ;
              LocalPopChoice(h_43);
            }
          else
            {
              t = g_43;
              t = SSL_gtr(b_67, c_67);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_67 = NULL,h_67 = NULL;
      f_67 = t;
      t = term_p_41;
      t = get_config_0_0(t);
      h_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_67, term_s_14);
      t = geq_0_0(t);
      t = f_67;
      t = c_133(t);
      ;
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
    }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  t = run_time_0_0(t);
  j_67 = t;
  t = term_m_14;
  t = whoami_0_0(t);
  k_67 = t;
  t = term_o_14;
  l_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_43), j_67), term_k_43), k_67);
  m_67 = t;
  t = SSL_printnl(l_67, m_67);
  t = (ATerm) ATmakeAppl(sym__2, term_o_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_43), j_67), term_k_43), k_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_19;
  n_67 = t;
  t = SSL_exit(n_67);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm m_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = m_43;
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_134 (ATerm), ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      t = fetch_1_0(x_11, t);
    }
  t = q_134(t);
  return(t);
}
ATerm map_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm o_67 (ATerm t)
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_43);
      }
    else
      {
        t = v_43;
        t = Cons_2_0(k_119, o_67, t);
      }
    return(t);
  }
  t = o_67(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_67 = ATgetFirst((ATermList) t);
      r_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_67 = NULL,w_67 = NULL;
        t = r_67;
        t = g_0(t);
        v_67 = t;
        t = q_67;
        t = f_0(t);
        w_67 = t;
        t = r_67;
        {
          ATerm e_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_67), w_67);
            return(t);
          }
          t = reverse_acc_2_0(f_0, e_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_14;
      t = g_0(t);
    }
  return(t);
}
ATerm q_10 (ATerm e_81, ATerm f_81, ATerm t)
{
  t = SSL_table_get(e_81, f_81);
  return(t);
}
ATerm Program_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,z_2 = NULL,a_3 = NULL;
  a_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  x_67 = t;
  t = y_67;
  t = j_100(t);
  z_67 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_67);
  z_2 = t;
  t = SSLsetAnnotations(z_2, x_67);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm h_68 = NULL;
  h_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_68), term_x_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL;
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_42;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_43);
    }
  else
    {
      t = y_43;
      t = fetch_1_0(h_12, t);
    }
  t = term_a_44;
  t = echo_0_0(t);
  t = term_g_42;
  f_68 = t;
  t = term_h_42;
  g_68 = t;
  t = term_b_44;
  t = q_10(f_68, g_68, t);
  t = reverse_acc_2_0(_id, j_12, t);
  t = map_1_0(l_12, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,b_3 = NULL,c_3 = NULL;
  l_68 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_68);
  i_68 = t;
  t = j_68;
  t = k_100(t);
  k_68 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_68);
  b_3 = t;
  t = SSLsetAnnotations(b_3, i_68);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
  p_68 = t;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_68;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_44 = ATgetFirst((ATermList) t);
                ATerm f_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_68;
          }
        ;
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        t = (ATerm) ATinsert(ATempty, p_68);
      }
    q_68 = t;
    t = term_v_38;
    r_68 = t;
    t = SSL_printnl(r_68, q_68);
    t = p_68;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_42;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  t = term_g_44;
  v_68 = t;
  t = term_m_14;
  w_68 = t;
  t = term_h_44;
  t = t_10(v_68, w_68, t);
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_i_44;
  return(t);
}
ATerm d_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
  t = term_g_44;
  x_68 = t;
  t = term_m_14;
  y_68 = t;
  t = term_h_44;
  t = t_10(x_68, y_68, t);
  t = term_j_44;
  z_68 = t;
  t = term_m_14;
  a_69 = t;
  t = term_k_44;
  t = t_10(z_68, a_69, t);
  t = term_l_44;
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_m_44;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_12, q_12, x_12, t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      t = Option_3_0(d_13, e_13, h_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,d_3 = NULL,f_3 = NULL;
  g_69 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_69 = ATgetFirst((ATermList) t);
      d_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_69);
  b_69 = t;
  t = c_69;
  t = y_90(t);
  e_69 = t;
  t = d_69;
  t = z_90(t);
  f_69 = t;
  f_3 = t;
  t = (ATerm) ATinsert(CheckATermList(f_69), e_69);
  d_3 = t;
  t = SSLsetAnnotations(d_3, b_69);
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  m_69 = t;
  t = term_t_42;
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_42, m_69);
  t = t_10(n_69, m_69, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_69);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_137 (ATerm), ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_44;
        t = h_137(t);
        ;
        LocalPopChoice(q_44);
      }
    else
      {
        t = p_44;
      }
    t = l_69;
    {
      ATerm l_13 (ATerm t)
      {
        ATerm s_44 = t;
        int t_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_44 = t;
            int v_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_44);
              }
            else
              {
                t = u_44;
                t = h_137(t);
                t = Cons_2_0(_id, l_13, t);
              }
            ;
            LocalPopChoice(t_44);
          }
        else
          {
            t = s_44;
            {
              ATerm p_69 = NULL,q_69 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_69 = ATgetFirst((ATermList) t);
                  q_69 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_69), (ATerm) ATmakeAppl(sym_Undefined_1, p_69));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_13, l_13, t);
    }
  }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm e_70 = NULL;
  e_70 = t;
  if(match_string(t, "--help"))
    {
      t = e_70;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_70;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_70;
        }
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  t = term_u_43;
  f_70 = t;
  t = term_m_14;
  g_70 = t;
  t = term_w_44;
  t = t_10(f_70, g_70, t);
  t = term_x_44;
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm s_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_137 (ATerm), ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
  x_69 = t;
  t = term_g_42;
  a_70 = t;
  t = term_h_42;
  b_70 = t;
  t = (ATerm) ATempty;
  c_70 = t;
  t = SSL_table_put(a_70, b_70, c_70);
  t = x_69;
  {
    ATerm m_13 (ATerm t)
    {
      ATerm z_44 = t;
      int a_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_137(t);
          ;
          LocalPopChoice(a_45);
        }
      else
        {
          t = z_44;
          {
            ATerm b_45 = t;
            int c_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_13, q_13, r_13, t);
                ;
                LocalPopChoice(c_45);
              }
            else
              {
                t = b_45;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_13, t);
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_70 = NULL;
          n_70 = t;
          {
            ATerm f_45 = t;
            int g_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_25 = NULL;
                t = n_70;
                {
                  ATerm h_45 = t;
                  int i_45 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_43;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_45);
                    }
                  else
                    {
                      t = h_45;
                      t = fetch_1_0(s_13, t);
                    }
                  t = n_70;
                  t = default_system_usage_0_0(t);
                  t = term_u_19;
                  a_25 = t;
                  t = SSL_exit(a_25);
                }
                ;
                LocalPopChoice(g_45);
              }
            else
              {
                t = f_45;
                {
                  ATerm n_25 = NULL;
                  t = term_g_44;
                  t = get_config_0_0(t);
                  t = n_70;
                  t = default_system_about_0_0(t);
                  t = term_u_19;
                  n_25 = t;
                  t = SSL_exit(n_25);
                }
              }
          }
          ;
          LocalPopChoice(e_45);
        }
      else
        {
          t = d_45;
          {
            ATerm j_45 = t;
            int k_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
                ATerm u_13 (ATerm t)
                {
                  ATerm v_13 (ATerm t)
                  {
                    if(((y_69 != NULL) && (y_69 != t)))
                      _fail(t);
                    else
                      y_69 = t;
                    return(t);
                  }
                  t = Undefined_1_0(v_13, t);
                  return(t);
                }
                t = fetch_1_0(u_13, t);
                t = term_o_14;
                u_70 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_69)), term_l_45);
                v_70 = t;
                t = SSL_printnl(u_70, v_70);
                t = (ATerm) ATmakeAppl(sym__2, term_o_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_69)), term_l_45));
                t = default_system_usage_0_0(t);
                t = term_s_14;
                w_70 = t;
                t = SSL_exit(w_70);
                ;
                LocalPopChoice(k_45);
              }
            else
              {
                t = j_45;
              }
          }
        }
      z_69 = t;
      t = term_g_42;
      d_70 = t;
      t = SSL_table_destroy(d_70);
      t = z_69;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
  t = parse_options_1_0(s_134, t);
  z_70 = t;
  t = term_m_45;
  a_71 = t;
  t = SSL_table_create(a_71);
  t = term_m_45;
  b_71 = t;
  t = term_n_45;
  c_71 = t;
  t = SSL_table_put(b_71, c_71, z_70);
  t = z_70;
  t = u_134(t);
  {
    ATerm o_45 = t;
    int p_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_134, t);
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
              t = v_134(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_45);
            }
          else
            {
              t = q_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = if_verbose2_1_0(g_14, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL;
  t = term_s_45;
  d_71 = t;
  t = term_m_14;
  e_71 = t;
  t = term_t_45;
  t = t_10(d_71, e_71, t);
  t = term_u_45;
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
  f_71 = t;
  t = term_t_42;
  t = get_config_0_0(t);
  g_71 = t;
  t = term_o_14;
  h_71 = t;
  t = (ATerm) ATinsert(ATempty, g_71);
  i_71 = t;
  t = SSL_printnl(h_71, i_71);
  t = f_71;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_134(t);
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        {
          ATerm z_45 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(b_46);
            }
          else
            {
              t = z_45;
              {
                ATerm c_46 = t;
                int d_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(d_46);
                  }
                else
                  {
                    t = c_46;
                    {
                      ATerm e_46 = t;
                      int f_46 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_14, d_14, e_14, t);
                          ;
                          LocalPopChoice(f_46);
                        }
                      else
                        {
                          t = e_46;
                          {
                            ATerm g_46 = t;
                            int h_46 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_46);
                              }
                            else
                              {
                                t = g_46;
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
  ATerm z_13 (ATerm t)
  {
    ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
    j_71 = t;
    {
      ATerm j_46 = t;
      int k_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_71 != NULL) && (k_71 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_71 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_14, t);
          ;
          LocalPopChoice(k_46);
        }
      else
        {
          t = j_46;
          t = term_l_46;
          k_71 = t;
        }
      t = not_null(k_71);
      t = ReadFromFile_0_0(t);
      l_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_71, l_71);
      t = apply_strategy_1_0(b_134, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_13, d_134, y_13, z_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
