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
ATerm term_i_52;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_n_50;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_m_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_q_48;
ATerm term_k_48;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_t_47;
ATerm term_x_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_p_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_b_45;
ATerm term_h_44;
ATerm term_b_44;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_q_41;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_k_34;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
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
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_t_9;
void init_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_i_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Id_1, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_11, (ATerm) ATempty);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Id_1, term_r_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_12, term_b_12);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_1, term_r_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Id_1, term_c_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Id_1, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_IntConst_1, term_u_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Id_1, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Id_1, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Id_1, term_e_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Id_1, term_k_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Id_1, term_o_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Id_1, term_t_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, term_v_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Id_1, term_b_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Id_1, term_o_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Id_1, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Id_1, term_x_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Id_1, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Id_1, term_d_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_23, (ATerm) ATempty);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_TypeName_2, term_h_23, term_b_12);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Id_1, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Id_1, term_p_23);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_TypeId_1, term_e_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_f_24, (ATerm) ATempty);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_24, term_b_12);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Id_1, term_r_24);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Id_1, term_e_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Id_1, term_o_26);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_s_24);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_w_22);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Id_1, term_t_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_29, (ATerm) ATempty);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Equal_2, term_w_29, term_v_20);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Id_1, term_z_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_30, (ATerm) ATempty);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Stat_1, term_b_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, term_w_22);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Stat_1, term_f_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Id_1, term_j_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_30, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_30, term_v_20);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_30, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Id_1, term_t_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_u_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Id_1, term_x_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_31, (ATerm) ATempty);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Id_1, term_h_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_31, (ATerm) ATempty);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_TypeName_2, term_l_31, term_b_12);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Id_1, term_n_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Id_1, term_p_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Id_1, term_r_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Id_1, term_w_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_31, (ATerm) ATempty);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_32, term_b_12);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Id_1, term_m_33);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_31, term_w_22);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Id_1, term_s_35);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Return_1, term_w_22);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_22, term_b_12);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, term_u_36);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Id_1, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Id_1, term_z_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_11, (ATerm) ATempty);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Stat_1, term_b_39);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Id_1, term_i_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_40);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_40, (ATerm) ATempty);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_42);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_42, (ATerm) ATempty);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Some_1, term_j_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_11, term_k_42);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Id_1, term_m_42);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_42, (ATerm) ATempty);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Id_1, term_u_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_Id_1, term_w_42);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_43);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_CallT_3, term_d_43, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym_SDefT_4, term_b_43, (ATerm)ATempty, (ATerm)ATempty, term_e_43);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Op_2, term_i_43, (ATerm) ATempty);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_43, term_y_21);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_j_43, term_l_43);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_19);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym__3, term_f_10, term_z_48, term_t_9);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm h_10 (ATerm q_4, ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm);
ATerm f_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm Real_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm Str_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm Int_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
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
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm i_113 (ATerm), ATerm);
ATerm i_32 (ATerm j_23, ATerm k_23, ATerm l_23, ATerm m_23, ATerm);
ATerm k_32 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm);
ATerm l_32 (ATerm h_24, ATerm i_24, ATerm j_24, ATerm);
ATerm m_32 (ATerm n_24, ATerm o_24, ATerm p_24, ATerm q_24, ATerm);
ATerm n_32 (ATerm u_24, ATerm v_24, ATerm w_24, ATerm y_24, ATerm);
ATerm o_32 (ATerm d_25, ATerm g_25, ATerm h_25, ATerm i_25, ATerm);
ATerm p_32 (ATerm o_25, ATerm p_25, ATerm q_25, ATerm r_25, ATerm t_25, ATerm u_25, ATerm v_25, ATerm w_25, ATerm);
ATerm q_32 (ATerm r_26, ATerm s_26, ATerm t_26, ATerm u_26, ATerm v_26, ATerm w_26, ATerm);
ATerm r_32 (ATerm d_27, ATerm e_27, ATerm f_27, ATerm g_27, ATerm h_27, ATerm i_27, ATerm);
ATerm s_32 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm r_125 (ATerm), ATerm);
ATerm Var_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm c_37 (ATerm r_34, ATerm s_34, ATerm t_34, ATerm u_34, ATerm v_34, ATerm);
ATerm d_37 (ATerm o_35, ATerm p_35, ATerm q_35, ATerm r_35, ATerm);
ATerm e_37 (ATerm w_35, ATerm x_35, ATerm y_35, ATerm z_35, ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm TracedBody_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm j_128 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm DeclareConstructor_0_0 (ATerm);
ATerm TranslateSig_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm TranslateSpec_0_0 (ATerm);
ATerm downup2_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm);
ATerm assert_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_133 (ATerm), ATerm);
ATerm x_55 (ATerm r_55, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_119 (ATerm), ATerm);
ATerm _2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm a_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_132 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm a_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_132 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_8 (ATerm);
ATerm need_help_1_0 (ATerm e_134 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_99 (ATerm), ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm n_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_136 (ATerm), ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm parse_options_1_0 (ATerm u_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm iowrap_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm);
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
  t = term_t_9;
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
    ATerm u_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_1);
        {
          ATerm x_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = eval_config_0_0(t);
              v_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_1, v_0);
              t = v_0;
              ;
              LocalPopChoice(y_9);
            }
          else
            {
              t = x_9;
            }
        }
        ;
        LocalPopChoice(w_9);
      }
    else
      {
        t = u_9;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
    {
      ATerm z_9 = t;
      int a_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm b_10 = ATgetArgument(t, 0);
              ATerm c_10 = ATgetArgument(t, 1);
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
          LocalPopChoice(a_10);
        }
      else
        {
          t = z_9;
          {
            ATerm b_1 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_1, g_1));
            if(match_cons(t, sym__2))
              {
                ATerm e_10 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("", 0, ATtrue)))
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
      t = (ATerm) ATmakeAppl(sym__3, term_f_10, d_1, j_1);
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
ATerm u_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TraceAll_0)), (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue))));
  t = term_l_10;
  t = assert_1_0(y_0, t);
  t = term_m_10;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, term_s_10);
  t = assert_1_0(f_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, p_1);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_v_10;
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
  ATerm q_1 = NULL;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATinsert(ATempty, q_1));
  t = post_extend_config_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Include_1, q_1);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_0, u_0, x_0, t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm b_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_0, c_1, e_1, t);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = b_11;
            t = ArgOption_3_0(i_1, k_1, l_1, t);
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
      ATerm f_11 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
      r_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, t_1)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_1), term_i_11, r_1)));
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm v_1 = NULL;
  t = map_1_0(InitTermId_0_0, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, m_1, t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_n_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_1));
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm d_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
      {
        ATerm u_11 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_2), term_b_12)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 = NULL,s_1 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue)), (ATerm) ATempty);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          {
            ATerm g_12 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = s_1;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm h_12 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          e_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_2;
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = (ATerm) ATempty;
    }
  y_1 = t;
  t = map_1_0(n_1, t);
  z_1 = t;
  t = y_1;
  t = InitTermIds_0_0(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, b_2));
  {
    ATerm i_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_12 = ATgetArgument(t, 0);
            ATerm o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_1;
        {
          ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, b_2);
            return(t);
          }
          t = at_end_1_0(o_1, t);
        }
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = i_12;
        {
          ATerm m_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, b_2)));
          if(match_cons(t, sym__2))
            {
              ATerm p_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_12) != ATmakeSymbol("", 0, ATtrue)))
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
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_114(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = SRTS_one(j_2, t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        t = listbu1_1_0(t_2, t);
        return(t);
      }
      t = Cons_2_0(_id, u_1, t);
      {
        ATerm z_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_2(t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = z_12;
          }
      }
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = t_2(t);
    }
  return(t);
}
ATerm h_10 (ATerm q_4, ATerm r_4, ATerm s_4, ATerm t_4, ATerm u_4, ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          t = r_4;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            ATerm f_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_4;
        t = at_end_1_0(w_1, t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
          ATerm z_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_4, r_4));
          if(match_cons(t, sym__2))
            {
              ATerm h_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("", 0, ATtrue)))
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
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            t = t_4;
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              ATerm o_13 = ATgetArgument(t, 0);
              ATerm q_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_4;
          t = at_end_1_0(x_1, t);
          ;
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          {
            ATerm d_3 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_4, t_4));
            if(match_cons(t, sym__2))
              {
                ATerm r_13 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_13) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm f_2 (ATerm t)
{
  ATerm o_7 = NULL,q_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_13 = ATgetFirst((ATermList) t);
      if(match_cons(t_13, sym_Compound_2))
        {
          ATerm u_13 = ATgetArgument(t_13, 0);
          if(((ATgetType(u_13) != AT_LIST) || !(ATisEmpty(u_13))))
            _fail(t);
          o_7 = ATgetArgument(t_13, 1);
        }
      else
        _fail(t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, q_7);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 (ATerm t)
        {
          t = q_7;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm c_14 = ATgetArgument(t, 0);
            ATerm d_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_7;
        t = at_end_1_0(g_2, t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm l_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_7, q_7));
          if(match_cons(t, sym__2))
            {
              ATerm j_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_14) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm i_2 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_14 = ATgetFirst((ATermList) t);
      if(match_cons(m_14, sym_Compound_2))
        {
          ATerm n_14 = ATgetArgument(m_14, 0);
          if(((ATgetType(n_14) != AT_LIST) || !(ATisEmpty(n_14))))
            _fail(t);
          y_7 = ATgetArgument(m_14, 1);
        }
      else
        _fail(t);
      z_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          t = z_7;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            ATerm r_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_7;
        t = at_end_1_0(k_2, t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm d_7 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_7, z_7));
          if(match_cons(t, sym__2))
            {
              ATerm s_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_14) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm l_2 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_14 = ATgetFirst((ATermList) t);
      if(match_cons(t_14, sym_Compound_2))
        {
          ATerm u_14 = ATgetArgument(t_14, 0);
          if(((ATgetType(u_14) != AT_LIST) || !(ATisEmpty(u_14))))
            _fail(t);
          l_8 = ATgetArgument(t_14, 1);
        }
      else
        _fail(t);
      m_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          t = m_8;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm y_14 = ATgetArgument(t, 0);
            ATerm z_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_8;
        t = at_end_1_0(n_2, t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm i_7 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, l_8, m_8));
          if(match_cons(t, sym__2))
            {
              ATerm a_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm o_2 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_15 = ATgetFirst((ATermList) t);
      if(match_cons(b_15, sym_Compound_2))
        {
          ATerm d_15 = ATgetArgument(b_15, 0);
          if(((ATgetType(d_15) != AT_LIST) || !(ATisEmpty(d_15))))
            _fail(t);
          x_8 = ATgetArgument(b_15, 1);
        }
      else
        _fail(t);
      y_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
  {
    ATerm e_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 (ATerm t)
        {
          t = y_8;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm n_15 = ATgetArgument(t, 0);
            ATerm p_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_8;
        t = at_end_1_0(p_2, t);
        ;
        LocalPopChoice(l_15);
      }
    else
      {
        t = e_15;
        {
          ATerm d_8 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, x_8, y_8));
          if(match_cons(t, sym__2))
            {
              ATerm q_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_15) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm q_2 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_15 = ATgetFirst((ATermList) t);
      if(match_cons(r_15, sym_Compound_2))
        {
          ATerm s_15 = ATgetArgument(r_15, 0);
          if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
            _fail(t);
          r_9 = ATgetArgument(r_15, 1);
        }
      else
        _fail(t);
      s_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
  {
    ATerm t_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 (ATerm t)
        {
          t = s_9;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm w_15 = ATgetArgument(t, 0);
            ATerm x_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_9;
        t = at_end_1_0(r_2, t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = t_15;
        {
          ATerm i_8 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_9, s_9));
          if(match_cons(t, sym__2))
            {
              ATerm y_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_15) != ATmakeSymbol("", 0, ATtrue)))
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
                              ATerm z_15 = t;
                              int a_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, o_5), i_5);
                                  ;
                                  LocalPopChoice(a_16);
                                }
                              else
                                {
                                  t = z_15;
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
            ATerm b_16 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_2 (ATerm t)
                {
                  t = p_5;
                  return(t);
                }
                if(match_cons(t, sym__2))
                  {
                    ATerm d_16 = ATgetArgument(t, 0);
                    ATerm e_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_5;
                t = at_end_1_0(a_2, t);
                ;
                LocalPopChoice(c_16);
              }
            else
              {
                t = b_16;
                {
                  ATerm s_3 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_5, p_5));
                  if(match_cons(t, sym__2))
                    {
                      ATerm f_16 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) f_16) != ATmakeSymbol("", 0, ATtrue)))
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
                        ATerm g_16 = t;
                        int h_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_7 = NULL;
                            t = p_5;
                            t = listbu1_1_0(f_2, t);
                            n_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, n_7);
                            ;
                            LocalPopChoice(h_16);
                          }
                        else
                          {
                            t = g_16;
                            {
                              ATerm i_16 = t;
                              int j_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_6 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, o_5, s_5);
                                  {
                                    ATerm k_16 = t;
                                    int l_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_2 (ATerm t)
                                        {
                                          t = s_5;
                                          return(t);
                                        }
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm m_16 = ATgetArgument(t, 0);
                                            ATerm n_16 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_5;
                                        t = at_end_1_0(h_2, t);
                                        ;
                                        LocalPopChoice(l_16);
                                      }
                                    else
                                      {
                                        t = k_16;
                                        {
                                          ATerm y_6 = NULL;
                                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_5, s_5));
                                          if(match_cons(t, sym__2))
                                            {
                                              ATerm o_16 = ATgetArgument(t, 0);
                                              if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("", 0, ATtrue)))
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
                                  LocalPopChoice(j_16);
                                }
                              else
                                {
                                  t = i_16;
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
                      t = listbu1_1_0(i_2, t);
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
                        ATerm p_16 = t;
                        int q_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_8 = NULL;
                            t = p_5;
                            t = listbu1_1_0(l_2, t);
                            k_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, k_8);
                            ;
                            LocalPopChoice(q_16);
                          }
                        else
                          {
                            t = p_16;
                            t = h_10(o_5, s_5, t_5, u_5, n_5, t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_8 = NULL;
                      t = p_5;
                      t = listbu1_1_0(o_2, t);
                      v_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, v_8);
                    }
                }
            }
          else
            {
              ATerm q_9 = NULL;
              t = p_5;
              t = listbu1_1_0(q_2, t);
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
    ATerm r_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        t = j_10(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = r_16;
      }
    return(t);
  }
  t = j_10(t);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,u_10 = NULL,d_11 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, u_10), p_10);
  return(t);
}
ATerm Real_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,o_11 = NULL,p_11 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, o_11), g_11);
  return(t);
}
ATerm Str_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,c_12 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, x_11), v_11);
  return(t);
}
ATerm Int_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, k_12), f_12);
  return(t);
}
ATerm Anno_2_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,y_12 = NULL,a_13 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, v_12, y_12), s_12);
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
ATerm w_2 (ATerm t)
{
  t = Cons_2_0(_id, x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = Cons_2_0(proper_list_0_0, y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm w_16 = t;
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
      t = w_16;
    }
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(s_2, u_2, t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = x_16;
      {
        ATerm d_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Op_2_0(v_2, w_2, t);
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = d_17;
            t = Op_2_0(a_3, _id, t);
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, z_13, a_14), p_13);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = map_1_0(Cache_0_0, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_l_17;
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
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Op_2_0(_id, b_3, t);
        t = proper_list_0_0(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Anno_2_0(Cache_0_0, Cache_0_0, t);
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm q_17 = t;
                int v_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1_0(_id, t);
                    ;
                    LocalPopChoice(v_17);
                  }
                else
                  {
                    t = q_17;
                    {
                      ATerm y_17 = t;
                      int g_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1_0(_id, t);
                          ;
                          LocalPopChoice(g_18);
                        }
                      else
                        {
                          t = y_17;
                          {
                            ATerm h_18 = t;
                            int i_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1_0(_id, t);
                                ;
                                LocalPopChoice(i_18);
                              }
                            else
                              {
                                t = h_18;
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
    t = (ATerm) ATmakeAppl(sym__2, term_j_18, g_14);
    t = conc_strings_0_0(t);
    h_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_14, (ATerm) ATmakeAppl(sym_Defined_2, term_k_18, h_14));
    t = assert_1_0(c_3, t);
    t = h_14;
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_14 = NULL,q_8 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_8 = ATgetFirst((ATermList) t);
              {
                ATerm n_18 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = q_8;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm o_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              l_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_14;
          ;
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          t = (ATerm) ATempty;
        }
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_18, (ATerm) ATinsert(CheckATermList(i_14), (ATerm) ATmakeAppl(sym__3, g_14, h_14, f_14))));
      t = assert_1_0(e_3, t);
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
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_9 = NULL,v_9 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue)), v_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_9 = ATgetFirst((ATermList) t);
            {
              ATerm s_18 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_9;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            m_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, m_9);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm d_10 = NULL,k_10 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue)), v_14);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_10 = ATgetFirst((ATermList) t);
              {
                ATerm u_18 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = k_10;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_18) != ATmakeSymbol("b_0", 0, ATtrue)))
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
  ATerm w_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = w_18;
      {
        ATerm c_15 = NULL,x_10 = NULL;
        c_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              {
                ATerm c_19 = t;
                int d_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(d_19);
                  }
                else
                  {
                    t = c_19;
                  }
              }
            }
          x_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_15, x_10);
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CacheConstant_0_0(t);
                ;
                LocalPopChoice(f_19);
              }
            else
              {
                t = e_19;
                {
                  ATerm c_11 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_15, x_10));
                  if(match_cons(t, sym__2))
                    {
                      ATerm g_19 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm h_19 = ATgetArgument(t, 1);
                        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
                          {
                            ATerm i_19 = ATgetFirst((ATermList) h_19);
                            ATerm j_19 = (ATerm) ATgetNext((ATermList) h_19);
                            if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
                              {
                                c_11 = ATgetFirst((ATermList) j_19);
                                {
                                  ATerm k_19 = (ATerm) ATgetNext((ATermList) j_19);
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
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_15), term_b_12), (ATerm) ATmakeAppl(sym_AssignInit_1, g_15)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, f_15, (ATerm) ATmakeAppl(sym_Id_1, h_15))));
  return(t);
}
ATerm MatchArg1_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      i_15 = l_19;
      if(match_cons(l_19, sym_Var_1))
        {
          j_15 = ATgetArgument(l_19, 0);
        }
      else
        _fail(t);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  m_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, j_15), m_15);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, o_15, k_15);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(e_17, g_17);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = SSL_addr(e_17, g_17);
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      u_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATinsert(ATempty, s_16), u_16)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          u_16 = ATgetArgument(t, 0);
          s_16 = ATgetArgument(t, 1);
          {
            ATerm b_17 = NULL,l_11 = NULL,q_11 = NULL;
            t = s_16;
            t = foldr_3_0(f_3, g_3, h_3, t);
            b_17 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, u_16, b_17));
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_11 = ATgetFirst((ATermList) t);
                {
                  ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = q_11;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm b_20 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                l_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_20, (ATerm) ATinsert(CheckATermList(s_16), (ATerm) ATmakeAppl(sym_Id_1, l_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              u_16 = ATgetArgument(t, 0);
              t = u_16;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  u_16 = ATgetArgument(t, 0);
                  {
                    ATerm e_20 = t;
                    int g_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(t_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm h_20 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) h_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm j_20 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_16)));
                        ;
                        LocalPopChoice(g_20);
                      }
                    else
                      {
                        t = e_20;
                        {
                          ATerm m_20 = t;
                          int o_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(t_16);
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_16)));
                              ;
                              LocalPopChoice(o_20);
                            }
                          else
                            {
                              t = m_20;
                              t = SSLgetAnnotations(t_16);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm p_20 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) p_20) != ATmakeSymbol("bound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm q_20 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, u_16);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      u_16 = ATgetArgument(t, 0);
                      {
                        ATerm k_17 = NULL,g_13 = NULL,i_13 = NULL,j_13 = NULL,m_13 = NULL;
                        t = SSL_explode_string(u_16);
                        t = escape_chars_0_0(t);
                        g_13 = t;
                        t = SSL_implode_string(g_13);
                        i_13 = t;
                        t = SSL_explode_string(i_13);
                        m_13 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_r_20, m_13);
                        t = quote_chars_0_0(t);
                        j_13 = t;
                        t = SSL_implode_string(j_13);
                        k_17 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_21), term_v_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, k_17)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          u_16 = ATgetArgument(t, 0);
                          {
                            ATerm s_13 = NULL;
                            t = SSL_real_to_string(u_16);
                            s_13 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, s_13))));
                          }
                        }
                      else
                        {
                          ATerm k_14 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              u_16 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(u_16);
                          k_14 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, k_14))));
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_Id_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  r_17 = t;
  t = s_17;
  t = e_102(t);
  t_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, t_17), r_17);
  return(t);
}
ATerm FunCall_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_FunCall_2))
    {
      a_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  z_17 = t;
  t = a_18;
  t = g_105(t);
  c_18 = t;
  t = b_18;
  t = h_105(t);
  e_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, c_18, e_18), z_17);
  return(t);
}
ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = Id_1_0(l_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = Cons_2_0(_id, m_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = Cons_2_0(_id, n_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,z_19 = NULL;
  w_19 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_19;
  if(match_string(t, "Cons"))
    {
      ATerm u_15 = NULL;
      t = z_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_19 = ATgetFirst((ATermList) t);
          t_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_19 = ATgetFirst((ATermList) t);
          v_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_19;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_16 = NULL,a_17 = NULL,c_17 = NULL,f_17 = NULL,j_17 = NULL,w_17 = NULL,x_17 = NULL,d_18 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                y_16 = ATgetArgument(t, 0);
                d_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_16;
            if(match_cons(t, sym_TypeName_2))
              {
                a_17 = ATgetArgument(t, 0);
                x_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_17;
            if(match_cons(t, sym_TypeSpec_3))
              {
                c_17 = ATgetArgument(t, 0);
                f_17 = ATgetArgument(t, 1);
                w_17 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = c_17;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_17;
            if(match_cons(t, sym_TypeId_1))
              {
                j_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_17;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = w_17;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_17;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = d_18;
            {
              ATerm i_21 = t;
              int j_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Id_1_0(i_3, t);
                  ;
                  LocalPopChoice(j_21);
                }
              else
                {
                  t = i_21;
                  t = FunCall_2_0(j_3, k_3, t);
                }
            }
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_21, (ATerm) ATinsert(ATempty, u_19));
          }
        u_15 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, s_19), u_15)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = z_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_21;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = bottomup_1_0(j_113, t);
    return(t);
  }
  t = SRTS_all(o_3, t);
  t = j_113(t);
  return(t);
}
ATerm topdown_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  t = i_113(t);
  {
    ATerm p_3 (ATerm t)
    {
      t = topdown_1_0(i_113, t);
      return(t);
    }
    t = SRTS_all(p_3, t);
  }
  return(t);
}
ATerm i_32 (ATerm j_23, ATerm k_23, ATerm l_23, ATerm m_23, ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,x_18 = NULL,b_19 = NULL;
  t = j_23;
  {
    ATerm a_22 = t;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        t_23 = t;
        if(match_string(t, "Nil"))
          {
            t = t_23;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = t_23;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_22;
      }
    t = (ATerm) ATmakeAppl(sym__2, k_23, term_m_19);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
        if(match_cons(t, sym__2))
          {
            u_23 = ATgetArgument(t, 0);
            v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(v_23);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_23, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, w_23)), l_23)));
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchArg1_0_0(t);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              t = MatchArg2_0_0(t);
            }
          x_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_23, term_p_19);
          {
            ATerm h_22 = t;
            int i_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(v_23, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_22);
              }
            else
              {
                t = h_22;
                t = SSL_addr(v_23, (ATerm) ATmakeInt(1));
              }
            y_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_23, y_23);
          }
        }
        return(t);
      }
      t = thread_map_1_0(q_3, t);
      if(match_cons(t, sym__2))
        {
          q_23 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_23;
      t = foldr_3_0(r_3, t_3, u_3, t);
      r_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, j_23, r_23));
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_19 = ATgetFirst((ATermList) t);
          {
            ATerm k_22 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = b_19;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm m_22 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_22) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          x_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_18)), l_23)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22))));
    }
  }
  return(t);
}
ATerm k_32 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm g_24 = NULL;
  t = SSL_real_to_string(b_24);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, c_24)), term_c_23), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_23, c_24))), (ATerm) ATmakeAppl(sym_FloatConst_1, g_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22))));
  return(t);
}
ATerm l_32 (ATerm h_24, ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm m_24 = NULL;
  t = SSL_int_to_string(h_24);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, i_24)), term_o_23), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_24, i_24))), (ATerm) ATmakeAppl(sym_IntConst_1, m_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22))));
  return(t);
}
ATerm m_32 (ATerm n_24, ATerm o_24, ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSLgetAnnotations(n_24);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, o_24), term_s_24), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, o_24), p_24)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, p_24))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_24), term_i_11, p_24)));
  return(t);
}
ATerm n_32 (ATerm u_24, ATerm v_24, ATerm w_24, ATerm y_24, ATerm t)
{
  t = SSLgetAnnotations(u_24);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_24 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_24 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(x_24) != AT_LIST) || !(ATisEmpty(x_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, v_24), w_24), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, w_24))))));
  return(t);
}
ATerm o_32 (ATerm d_25, ATerm g_25, ATerm h_25, ATerm i_25, ATerm t)
{
  t = SSLgetAnnotations(d_25);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_25 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) a_25) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_25 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_25) != AT_LIST) || !(ATisEmpty(b_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_25), term_i_11, h_25));
  return(t);
}
ATerm p_32 (ATerm o_25, ATerm p_25, ATerm q_25, ATerm r_25, ATerm t_25, ATerm u_25, ATerm v_25, ATerm w_25, ATerm t)
{
  ATerm f_26 = NULL,i_26 = NULL,f_20 = NULL,i_20 = NULL;
  t = p_25;
  {
    ATerm c_25 = t;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL;
        j_26 = t;
        if(match_string(t, "Nil"))
          {
            t = j_26;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = j_26;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_25;
      }
    t = (ATerm) ATmakeAppl(sym__2, r_25, term_m_19);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            if(match_cons(f_25, sym_Var_1))
              {
                k_26 = ATgetArgument(f_25, 0);
              }
            else
              _fail(t);
            l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(l_26);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_26, term_p_19);
        {
          ATerm k_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(l_26, (ATerm) ATmakeInt(1));
              ;
              LocalPopChoice(m_25);
            }
          else
            {
              t = k_25;
              t = SSL_addr(l_26, (ATerm) ATmakeInt(1));
            }
          n_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_26), term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_26)), (ATerm) ATmakeAppl(sym_Id_1, o_25))))), n_26);
        }
        return(t);
      }
      t = thread_map_1_0(v_3, t);
      if(match_cons(t, sym__2))
        {
          f_26 = ATgetArgument(t, 0);
          {
            ATerm n_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, p_25, q_25));
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_20 = ATgetFirst((ATermList) t);
          {
            ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = i_20;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm y_25 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          f_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_26, (ATerm) ATinsert(ATempty, t_25));
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, t_25);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                ATerm b_26 = ATgetArgument(t, 0);
                ATerm c_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_26;
            t = at_end_1_0(w_3, t);
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm n_20 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_26, (ATerm) ATinsert(ATempty, t_25)));
              if(match_cons(t, sym__2))
                {
                  ATerm d_26 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  n_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_20;
              t = concat_0_0(t);
            }
          }
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_20)), (ATerm) ATmakeAppl(sym_Id_1, o_25))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, i_26), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, o_25), u_25, v_25))));
      }
    }
  }
  return(t);
}
ATerm q_32 (ATerm r_26, ATerm s_26, ATerm t_26, ATerm u_26, ATerm v_26, ATerm w_26, ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_real_to_string(s_26);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, c_27)), (ATerm) ATmakeAppl(sym_Id_1, r_26))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_26)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, r_26), u_26, v_26))));
  return(t);
}
ATerm r_32 (ATerm d_27, ATerm e_27, ATerm f_27, ATerm g_27, ATerm h_27, ATerm i_27, ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_int_to_string(e_27);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_27)), (ATerm) ATmakeAppl(sym_Id_1, d_27))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_27)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, d_27), g_27, h_27))));
  return(t);
}
ATerm s_32 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm t)
{
  t = t_27;
  {
    ATerm q_26 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_26;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_27)));
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_23, a_24);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = SSL_addr(z_23, a_24);
      }
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm s_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym_SVar_1))
        {
          s_29 = ATgetArgument(z_26, 0);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(((ATgetType(a_27) != AT_LIST) || !(ATisEmpty(a_27))))
          _fail(t);
      }
      {
        ATerm b_27 = ATgetArgument(t, 2);
        if(((ATgetType(b_27) != AT_LIST) || !(ATisEmpty(b_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, s_29);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = topdown_1_0(z_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(a_4, t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm m_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = m_27;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
          }
      }
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm z_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(match_cons(v_27, sym_SVar_1))
        {
          z_20 = ATgetArgument(v_27, 0);
        }
      else
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
          _fail(t);
      }
      {
        ATerm x_27 = ATgetArgument(t, 2);
        if(((ATgetType(x_27) != AT_LIST) || !(ATisEmpty(x_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, z_20);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = topdown_1_0(d_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(e_4, t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm h_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = h_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
          }
      }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, term_d_29);
  t = assert_1_0(h_4, t);
  t = q_30;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_30), term_b_12), term_f_29);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatchArg1_0_0(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      t = MatchArg2_0_0(t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_29 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, c_29, (ATerm) ATinsert(ATempty, z_28));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm k_29 = NULL;
            t = b_29;
            t = new_0_0(t);
            k_29 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_29), term_b_12))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_Id_1, k_29)))), c_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_29), term_i_11, term_w_22))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              c_29 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, c_29);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  c_29 = ATgetArgument(t, 0);
                  z_28 = ATgetArgument(t, 1);
                  s_28 = ATgetArgument(t, 2);
                  {
                    ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
                    t = c_29;
                    if(match_cons(t, sym_SVar_1))
                      {
                        a_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = z_28;
                    t = map_1_0(x_3, t);
                    p_29 = t;
                    t = s_28;
                    t = map_1_0(y_3, t);
                    q_29 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_22)), q_29), p_29);
                    t = concat_0_0(t);
                    r_29 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, a_29), r_29)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      c_29 = ATgetArgument(t, 0);
                      z_28 = ATgetArgument(t, 1);
                      s_28 = ATgetArgument(t, 2);
                      {
                        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
                        t = z_28;
                        t = map_1_0(b_4, t);
                        w_20 = t;
                        t = s_28;
                        t = map_1_0(c_4, t);
                        x_20 = t;
                        t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
                        {
                          ATerm i_29 = t;
                          int j_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_4 (ATerm t)
                              {
                                t = x_20;
                                return(t);
                              }
                              if(match_cons(t, sym__2))
                                {
                                  ATerm l_29 = ATgetArgument(t, 0);
                                  ATerm m_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = w_20;
                              t = at_end_1_0(f_4, t);
                              ;
                              LocalPopChoice(j_29);
                            }
                          else
                            {
                              t = i_29;
                              {
                                ATerm l_21 = NULL;
                                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_20, x_20));
                                if(match_cons(t, sym__2))
                                  {
                                    ATerm n_29 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) n_29) != ATmakeSymbol("", 0, ATtrue)))
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
                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, c_29), y_20)));
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          c_29 = ATgetArgument(t, 0);
                          {
                            ATerm u_29 = NULL;
                            t = b_29;
                            t = new_0_0(t);
                            u_29 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_29), term_b_12), term_o_29)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_29, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_30), term_c_30), c_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_Id_1, u_29))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              c_29 = ATgetArgument(t, 0);
                              z_28 = ATgetArgument(t, 1);
                              {
                                ATerm x_29 = NULL;
                                t = b_29;
                                t = new_0_0(t);
                                x_29 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_29), term_b_12), term_o_29)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_30, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_Id_1, x_29))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  c_29 = ATgetArgument(t, 0);
                                  z_28 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_29, z_28);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      c_29 = ATgetArgument(t, 0);
                                      z_28 = ATgetArgument(t, 1);
                                      s_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm d_30 = NULL,e_30 = NULL;
                                        t = b_29;
                                        t = new_0_0(t);
                                        d_30 = t;
                                        t = new_0_0(t);
                                        e_30 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_30), term_b_12), term_w_30)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_30), term_b_12), term_o_29)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_29, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_30))))), c_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_Id_1, d_30))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          c_29 = ATgetArgument(t, 0);
                                          z_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm h_30 = NULL,i_30 = NULL;
                                            t = b_29;
                                            t = new_0_0(t);
                                            h_30 = t;
                                            t = new_0_0(t);
                                            i_30 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_30), term_b_12), term_w_30)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_30), term_b_12), term_o_29)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_29, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_30))))), term_d_31), c_29)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, (ATerm) ATmakeAppl(sym_Id_1, h_30))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              c_29 = ATgetArgument(t, 0);
                                              z_28 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_29, z_28);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  c_29 = ATgetArgument(t, 0);
                                                  z_28 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_28), c_29));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      c_29 = ATgetArgument(t, 0);
                                                      z_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm p_30 = NULL;
                                                        t = c_29;
                                                        t = map_1_0(g_4, t);
                                                        t = c_29;
                                                        t = map_1_0(i_4, t);
                                                        p_30 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, p_30)), (ATerm) ATinsert(ATempty, z_28));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_e_31;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  c_29 = ATgetArgument(t, 0);
                                                                  z_28 = ATgetArgument(t, 1);
                                                                  t = c_29;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      a_29 = ATgetArgument(t, 0);
                                                                      e_28 = ATgetArgument(t, 1);
                                                                      t = e_28;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          a_28 = ATgetFirst((ATermList) t);
                                                                          b_28 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = b_28;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              c_28 = ATgetFirst((ATermList) t);
                                                                              d_28 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = d_28;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = a_29;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm f_31 = t;
                                                                                      int g_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm v_30 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_28, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_31, z_28)))))), (ATerm) ATmakeAppl(sym__2, a_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_31, z_28)))));
                                                                                          t = map_1_0(j_4, t);
                                                                                          v_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, z_28)), term_q_31), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_31, (ATerm) ATinsert(ATempty, z_28)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_30), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22))));
                                                                                          ;
                                                                                          LocalPopChoice(g_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_31;
                                                                                          t = i_32(a_29, e_28, z_28, b_29, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_32(a_29, e_28, z_28, b_29, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_29;
                                                                                  t = i_32(a_29, e_28, z_28, b_29, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_29;
                                                                              t = i_32(a_29, e_28, z_28, b_29, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = a_29;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm t_31 = t;
                                                                                  int v_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, z_28)), term_q_31), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_31, (ATerm) ATinsert(ATempty, z_28)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22))));
                                                                                      ;
                                                                                      LocalPopChoice(v_31);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_31;
                                                                                      t = i_32(a_29, e_28, z_28, b_29, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = i_32(a_29, e_28, z_28, b_29, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_29;
                                                                              t = i_32(a_29, e_28, z_28, b_29, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          a_29 = ATgetArgument(t, 0);
                                                                          t = k_32(a_29, z_28, b_29, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              a_29 = ATgetArgument(t, 0);
                                                                              t = l_32(a_29, z_28, b_29, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  a_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm z_30 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,s_21 = NULL;
                                                                                    t = SSL_explode_string(a_29);
                                                                                    t = escape_chars_0_0(t);
                                                                                    n_21 = t;
                                                                                    t = SSL_implode_string(n_21);
                                                                                    p_21 = t;
                                                                                    t = SSL_explode_string(p_21);
                                                                                    s_21 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_r_20, s_21);
                                                                                    t = quote_chars_0_0(t);
                                                                                    q_21 = t;
                                                                                    t = SSL_implode_string(q_21);
                                                                                    z_30 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_32, z_28))), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_21), term_v_20), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, z_30))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, term_w_22))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      a_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm c_32 = t;
                                                                                        int d_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = m_32(c_29, a_29, z_28, b_29, t);
                                                                                            ;
                                                                                            LocalPopChoice(d_32);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_32;
                                                                                            {
                                                                                              ATerm e_32 = t;
                                                                                              int f_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = n_32(c_29, a_29, z_28, b_29, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(f_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_32;
                                                                                                  t = o_32(c_29, a_29, z_28, b_29, t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          a_29 = ATgetArgument(t, 0);
                                                                                          e_28 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, e_28, z_28)), (ATerm) ATmakeAppl(sym_Match_2, a_29, z_28)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm h_32 = t;
                                                                                          int j_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm a_33 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(j_32);
                                                                                              t = term_e_31;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_32;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_e_31;
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
                                                                      c_29 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, c_29, term_w_22);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          c_29 = ATgetArgument(t, 0);
                                                                          z_28 = ATgetArgument(t, 1);
                                                                          s_28 = ATgetArgument(t, 2);
                                                                          t = c_29;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              a_29 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = z_28;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              x_28 = ATgetFirst((ATermList) t);
                                                                              r_28 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = x_28;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  n_28 = ATgetArgument(t, 0);
                                                                                  p_28 = ATgetArgument(t, 1);
                                                                                  q_28 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = n_28;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  o_28 = ATgetArgument(t, 0);
                                                                                  m_28 = ATgetArgument(t, 1);
                                                                                  t = p_28;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_28 = ATgetFirst((ATermList) t);
                                                                                      i_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = i_28;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          j_28 = ATgetFirst((ATermList) t);
                                                                                          l_28 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = l_28;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = j_28;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  k_28 = ATgetArgument(t, 0);
                                                                                                  t = f_28;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      g_28 = ATgetArgument(t, 0);
                                                                                                      t = m_28;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = o_28;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm b_33 = t;
                                                                                                              int e_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_29))), term_q_31), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_29))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_28), term_i_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_31, (ATerm) ATmakeAppl(sym_Id_1, a_29)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_28), term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_31, (ATerm) ATmakeAppl(sym_Id_1, a_29)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_29), r_28, s_28))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(e_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_33;
                                                                                                                  t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_28;
                                                                                                          t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_28;
                                                                                                      t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = o_28;
                                                                                                  t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_28;
                                                                                              t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_28;
                                                                                          t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = m_28;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = o_28;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm k_33 = t;
                                                                                                  int l_33 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_29))), term_q_31), (ATerm) ATmakeAppl(sym_FunCall_2, term_s_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_29)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_28), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_29), r_28, s_28))));
                                                                                                      ;
                                                                                                      LocalPopChoice(l_33);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = k_33;
                                                                                                      t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_28;
                                                                                              t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_28;
                                                                                          t = p_32(a_29, o_28, m_28, p_28, q_28, r_28, s_28, b_29, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      o_28 = ATgetArgument(t, 0);
                                                                                      t = q_32(a_29, o_28, q_28, r_28, s_28, b_29, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          o_28 = ATgetArgument(t, 0);
                                                                                          t = r_32(a_29, o_28, q_28, r_28, s_28, b_29, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm u_31 = NULL,u_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              o_28 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(o_28);
                                                                                          t = escape_chars_0_0(t);
                                                                                          u_21 = t;
                                                                                          t = SSL_implode_string(u_21);
                                                                                          w_21 = t;
                                                                                          t = SSL_explode_string(w_21);
                                                                                          z_21 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_r_20, z_21);
                                                                                          t = quote_chars_0_0(t);
                                                                                          x_21 = t;
                                                                                          t = SSL_implode_string(x_21);
                                                                                          u_31 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, u_31))), (ATerm) ATmakeAppl(sym_Id_1, a_29))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_28)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_29), r_28, s_28))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = s_28;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              c_29 = ATgetArgument(t, 0);
                                                                              z_28 = ATgetArgument(t, 1);
                                                                              s_28 = ATgetArgument(t, 2);
                                                                              w_28 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, c_29), (ATerm) ATmakeAppl(sym_Case_3, z_28, s_28, w_28));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  c_29 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, c_29));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      c_29 = ATgetArgument(t, 0);
                                                                                      z_28 = ATgetArgument(t, 1);
                                                                                      t = c_29;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          a_29 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = z_28;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          x_28 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm o_33 = t;
                                                                                            int p_33 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_29), term_s_24), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_29), (ATerm) ATmakeAppl(sym_Id_1, x_28))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_28)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_29), term_i_11, (ATerm) ATmakeAppl(sym_Id_1, x_28))));
                                                                                                ;
                                                                                                LocalPopChoice(p_33);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_33;
                                                                                                t = s_32(a_29, z_28, b_29, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_32(a_29, z_28, b_29, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          c_29 = ATgetArgument(t, 0);
                                                                                          t = c_29;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              a_29 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_29), term_i_11, term_w_22));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm g_32 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              c_29 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_29;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          g_32 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_22, term_i_11, g_32));
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
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      if(((ATgetType(q_33) == AT_LIST) && !(ATisEmpty(q_33))))
        {
          t_32 = ATgetFirst((ATermList) q_33);
          u_32 = (ATerm) ATgetNext((ATermList) q_33);
        }
      else
        _fail(t);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_32, v_32);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_32, x_32);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_32), w_32), y_32);
  return(t);
}
ATerm thread_map_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(r_125, f_33, t);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm c_33 = NULL,d_33 = NULL;
          c_33 = t;
          if(match_cons(t, sym__2))
            {
              d_33 = ATgetArgument(t, 0);
              {
                ATerm t_33 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = d_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_33;
        }
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm Var_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_33);
  g_33 = t;
  t = h_33;
  t = y_91(t);
  i_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, i_33), g_33);
  return(t);
}
ATerm c_37 (ATerm r_34, ATerm s_34, ATerm t_34, ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,d_35 = NULL,d_22 = NULL,g_22 = NULL;
  t = r_34;
  {
    ATerm u_33 = t;
    if((PushChoice() == 0))
      {
        ATerm e_35 = NULL;
        e_35 = t;
        if(match_string(t, "Nil"))
          {
            t = e_35;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = e_35;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_33;
      }
    t = s_34;
    t = map_1_0(k_4, t);
    t = (ATerm) ATmakeAppl(sym__2, s_34, term_m_19);
    t = thread_map_1_0(m_4, t);
    if(match_cons(t, sym__2))
      {
        a_35 = ATgetArgument(t, 0);
        {
          ATerm v_33 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = s_34;
    t = foldr_3_0(n_4, o_4, p_4, t);
    b_35 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, r_34, b_35));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_22 = ATgetFirst((ATermList) t);
        {
          ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_22;
    if(match_cons(t, sym_Defined_2))
      {
        ATerm x_33 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        d_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, a_35, (ATerm) ATinsert(ATempty, t_34));
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, t_34);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              ATerm a_34 = ATgetArgument(t, 0);
              ATerm b_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_35;
          t = at_end_1_0(v_4, t);
          ;
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm l_22 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_35, (ATerm) ATinsert(ATempty, t_34)));
            if(match_cons(t, sym__2))
              {
                ATerm c_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_34) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                l_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_22;
            t = concat_0_0(t);
          }
        }
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_22)), term_w_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, d_35), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_34)));
    }
  }
  return(t);
}
ATerm d_37 (ATerm o_35, ATerm p_35, ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_real_to_string(o_35);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, v_35)), term_w_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_35)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_35)));
  return(t);
}
ATerm e_37 (ATerm w_35, ATerm x_35, ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_int_to_string(w_35);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_26, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_36)), term_w_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_35)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_35)));
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_34 = ATgetArgument(t, 0);
      if(match_cons(d_34, sym_Var_1))
        {
          f_35 = ATgetArgument(d_34, 0);
        }
      else
        _fail(t);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(g_35);
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_35, term_p_19);
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_35, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = SSL_addr(g_35, (ATerm) ATmakeInt(1));
      }
    i_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_35), term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, h_35)), term_w_22)))), i_35);
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_35, k_35);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = SSL_addr(j_35, k_35);
      }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      m_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
      q_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_36;
  if(match_cons(t, sym_Match_1))
    {
      n_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_36;
  if(match_cons(t, sym_Op_2))
    {
      o_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
      t = k_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_36 = ATgetFirst((ATermList) t);
          g_36 = (ATerm) ATgetNext((ATermList) t);
          t = g_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_36 = ATgetFirst((ATermList) t);
              j_36 = (ATerm) ATgetNext((ATermList) t);
              t = j_36;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = h_36;
                  if(match_cons(t, sym_Var_1))
                    {
                      i_36 = ATgetArgument(t, 0);
                      t = e_36;
                      if(match_cons(t, sym_Var_1))
                        {
                          f_36 = ATgetArgument(t, 0);
                          t = o_36;
                          if(match_string(t, "Cons"))
                            {
                              ATerm i_34 = t;
                              int j_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, term_w_22)), term_q_31), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_31, (ATerm) ATinsert(ATempty, term_w_22)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_36), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_36), term_i_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_19, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_31, (ATerm) ATinsert(ATempty, term_k_34)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_36), term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_31, (ATerm) ATinsert(ATempty, term_k_34)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_36)));
                                  ;
                                  LocalPopChoice(j_34);
                                }
                              else
                                {
                                  t = i_34;
                                  t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                                }
                            }
                          else
                            {
                              t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                            }
                        }
                      else
                        {
                          t = o_36;
                          t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                        }
                    }
                  else
                    {
                      t = o_36;
                      t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                    }
                }
              else
                {
                  t = o_36;
                  t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                }
            }
          else
            {
              t = o_36;
              t = c_37(o_36, k_36, p_36, q_36, l_36, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = o_36;
              if(match_string(t, "Nil"))
                {
                  ATerm l_34 = t;
                  int m_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_22, (ATerm) ATinsert(ATempty, term_w_22)), term_q_31), (ATerm) ATmakeAppl(sym_FunCall_2, term_s_31, (ATerm) ATinsert(ATempty, term_w_22))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_36)));
                      ;
                      LocalPopChoice(m_34);
                    }
                  else
                    {
                      t = l_34;
                      t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                    }
                }
              else
                {
                  t = c_37(o_36, k_36, p_36, q_36, l_36, t);
                }
            }
          else
            {
              t = o_36;
              t = c_37(o_36, k_36, p_36, q_36, l_36, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          o_36 = ATgetArgument(t, 0);
          t = d_37(o_36, p_36, q_36, l_36, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              o_36 = ATgetArgument(t, 0);
              t = e_37(o_36, p_36, q_36, l_36, t);
            }
          else
            {
              ATerm a_37 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  o_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(o_36);
              t = escape_chars_0_0(t);
              n_22 = t;
              t = SSL_implode_string(n_22);
              p_22 = t;
              t = SSL_explode_string(p_22);
              s_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_20, s_22);
              t = quote_chars_0_0(t);
              q_22 = t;
              t = SSL_implode_string(q_22);
              a_37 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, a_37))), term_w_22)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_36)));
            }
        }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_37 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_34 = ATgetFirst((ATermList) t);
              if(((ATgetType(w_34) != AT_INT) || (ATgetInt((ATermInt) w_34) != 34)))
                _fail(t);
              h_37 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(h_37), term_r_20), term_x_34);
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm j_37 = NULL,k_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_37 = ATgetFirst((ATermList) t);
                k_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_37;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_37), term_x_34), term_x_34);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_37), term_y_34), term_x_34);
              }
          }
        }
      t = Cons_2_0(_id, w_4, t);
      ;
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm z_34 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(c_35);
          }
        else
          {
            t = z_34;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm TracedBody_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,r_37 = NULL,s_37 = NULL,z_22 = NULL,a_23 = NULL,z_24 = NULL,e_25 = NULL,j_25 = NULL,l_25 = NULL,s_25 = NULL,g_26 = NULL,l_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_35), o_37);
  t = concat_strings_0_0(t);
  z_22 = t;
  t = SSL_explode_string(z_22);
  t = escape_chars_0_0(t);
  a_23 = t;
  t = SSL_implode_string(a_23);
  z_24 = t;
  t = SSL_explode_string(z_24);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, j_25);
  t = quote_chars_0_0(t);
  e_25 = t;
  t = SSL_implode_string(e_25);
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_35), o_37);
  t = concat_strings_0_0(t);
  l_25 = t;
  t = SSL_explode_string(l_25);
  t = escape_chars_0_0(t);
  s_25 = t;
  t = SSL_implode_string(s_25);
  g_26 = t;
  t = SSL_explode_string(g_26);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, n_27);
  t = quote_chars_0_0(t);
  l_27 = t;
  t = SSL_implode_string(l_27);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_35), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_22), (ATerm) ATmakeAppl(sym_StringLit_1, s_37)), term_t_35)))), p_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_22), (ATerm) ATmakeAppl(sym_StringLit_1, r_37)), term_t_35)))));
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm w_41 = NULL;
  w_41 = t;
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue)), w_41);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_43 = ATgetFirst((ATermList) t);
            {
              ATerm c_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = r_43;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm r_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_36) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = w_41;
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        {
          ATerm z_43 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_43 = ATgetFirst((ATermList) t);
              {
                ATerm s_36 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = z_43;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_36 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_36) != ATmakeSymbol("p_0", 0, ATtrue)))
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
ATerm b_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_36);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_45 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue)), u_44);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_45 = ATgetFirst((ATermList) t);
            {
              ATerm y_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_45;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_36) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = u_44;
        ;
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        {
          ATerm h_46 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_46 = ATgetFirst((ATermList) t);
              {
                ATerm b_37 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = h_46;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_37) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = u_44;
        }
      }
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_36);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      o_40 = ATgetArgument(t, 2);
      k_40 = ATgetArgument(t, 3);
      {
        ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
        t = n_40;
        t = map_1_0(TranslateVarDec_0_0, t);
        j_41 = t;
        t = o_40;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
        {
          ATerm g_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm l_37 = ATgetArgument(t, 0);
                  ATerm m_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_41;
              {
                ATerm x_4 (ATerm t)
                {
                  t = k_41;
                  return(t);
                }
                t = at_end_1_0(x_4, t);
              }
              ;
              LocalPopChoice(i_37);
            }
          else
            {
              t = g_37;
              {
                ATerm a_43 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_41, k_41));
                if(match_cons(t, sym__2))
                  {
                    ATerm n_37 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_37) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    a_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_43;
                t = concat_0_0(t);
              }
            }
          l_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_40, k_40);
          {
            ATerm q_37 = t;
            int t_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(y_4, _id, t);
                t = TracedBody_0_0(t);
                ;
                LocalPopChoice(t_37);
              }
            else
              {
                t = q_37;
                if(match_cons(t, sym__2))
                  {
                    ATerm u_37 = ATgetArgument(t, 0);
                    ATerm v_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_u_35), k_40));
              }
            m_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_41, (ATerm) ATinsert(ATempty, term_v_36));
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_37 = ATgetArgument(t, 0);
                      ATerm z_37 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_41;
                  t = at_end_1_0(b_5, t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  {
                    ATerm e_44 = NULL;
                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, l_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm) ATmakeAppl(sym_None_0))))));
                    if(match_cons(t, sym__2))
                      {
                        ATerm a_38 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        e_44 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_44;
                    t = concat_0_0(t);
                  }
                }
              n_41 = t;
              t = (ATerm) ATmakeAppl(sym_FunDef_3, term_a_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_40), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, n_41))), m_41);
            }
          }
        }
      }
    }
  else
    {
      ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          m_40 = ATgetArgument(t, 0);
          n_40 = ATgetArgument(t, 1);
          o_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_40;
      t = map_1_0(TranslateVarDec_0_0, t);
      m_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_40, o_40);
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(c_5, _id, t);
            t = TracedBody_0_0(t);
            ;
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            if(match_cons(t, sym__2))
              {
                ATerm d_38 = ATgetArgument(t, 0);
                ATerm e_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_u_35), o_40));
          }
        n_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_44, (ATerm) ATinsert(ATempty, term_v_36));
        {
          ATerm f_38 = t;
          int g_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm h_38 = ATgetArgument(t, 0);
                  ATerm i_38 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_44;
              t = at_end_1_0(d_5, t);
              ;
              LocalPopChoice(g_38);
            }
          else
            {
              t = f_38;
              {
                ATerm m_46 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, (ATerm)ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty), (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue))), (ATerm) ATmakeAppl(sym_None_0))))));
                if(match_cons(t, sym__2))
                  {
                    ATerm j_38 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_38) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    m_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_46;
                t = concat_0_0(t);
              }
            }
          o_44 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_a_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_40), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, o_44))), n_44);
        }
      }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_40), x_40), (ATerm) ATinsert(ATempty, x_40));
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_38 = ATgetArgument(t, 0);
            ATerm n_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
        {
          ATerm e_5 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, x_40);
            return(t);
          }
          t = at_end_1_0(e_5, t);
        }
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        {
          ATerm q_46 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_40), x_40), (ATerm) ATinsert(ATempty, x_40)));
          if(match_cons(t, sym__2))
            {
              ATerm o_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_46;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(r_42, s_42);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = SSL_addr(r_42, s_42);
      }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,e_42 = NULL,n_42 = NULL,y_46 = NULL,b_47 = NULL,e_47 = NULL,g_47 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            n_42 = ATgetArgument(t, 0);
            {
              ATerm t_38 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_38);
        t = n_42;
        t = foldr_3_0(f_5, g_5, h_5, t);
      }
    else
      {
        t = r_38;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm u_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_m_19;
      }
    b_42 = t;
    t = SSL_int_to_string(b_42);
    c_42 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, z_41, b_42));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_47 = ATgetFirst((ATermList) t);
        {
          ATerm v_38 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_47;
    if(match_cons(t, sym_Defined_2))
      {
        ATerm w_38 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_38) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        y_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(z_41);
    g_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_20, g_47);
    t = quote_chars_0_0(t);
    e_47 = t;
    t = SSL_implode_string(e_47);
    e_42 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_46))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_46), term_i_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_38), (ATerm) ATmakeAppl(sym_IntConst_1, c_42)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, e_42)))))));
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_39);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm q_43 = NULL,w_43 = NULL;
  t = map_1_0(InitConstructor_0_0, t);
  t = concat_0_0(t);
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, (ATerm) ATinsert(ATempty, term_c_39));
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_39 = ATgetArgument(t, 0);
            ATerm g_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_43;
        t = at_end_1_0(r_5, t);
        ;
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        {
          ATerm k_47 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue))), (ATerm) ATempty)))));
          if(match_cons(t, sym__2))
            {
              ATerm h_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_39) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_47;
          t = concat_0_0(t);
        }
      }
    w_43 = t;
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_39, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_n_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_43));
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  t = SSL_explode_string(e_46);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm d_46 = NULL;
  t = map_1_0(v_5, t);
  t = concat_0_0(t);
  d_46 = t;
  t = SSL_implode_string(d_46);
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_47 = ATgetFirst((ATermList) t);
      v_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_47;
  if(match_int(t, 95))
    {
      ATerm j_48 = NULL;
      t = v_47;
      t = n_0(t);
      j_48 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(j_48), term_k_39), term_k_39);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm b_49 = NULL;
          t = v_47;
          t = n_0(t);
          b_49 = t;
          t = (ATerm) ATinsert(CheckATermList(b_49), term_k_39);
        }
      else
        {
          ATerm n_49 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = v_47;
          t = n_0(t);
          n_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_49), term_k_39), term_l_39), term_k_39);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm j_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  c_51 = t;
  t = SSL_explode_string(c_51);
  {
    ATerm e_51 (ATerm t)
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_128(e_51, t);
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm o_39 = t;
            int p_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, e_51, t);
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = e_51(t);
    d_51 = t;
    t = SSL_implode_string(d_51);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm h_51 = NULL,i_51 = NULL,l_51 = NULL,m_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_51 = ATgetFirst((ATermList) t);
            i_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_51;
        t = f_125(t);
        l_51 = t;
        t = i_51;
        t = foldr_3_0(d_125, e_125, f_125, t);
        m_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_51, m_51);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_52, b_52);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = SSL_addr(a_52, b_52);
      }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm DeclareConstructor_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,r_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,y_51 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      o_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_51;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            y_51 = ATgetArgument(t, 0);
            {
              ATerm x_39 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_39);
        t = y_51;
        t = foldr_3_0(w_5, x_5, y_5, t);
      }
    else
      {
        t = v_39;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm y_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_m_19;
      }
    r_51 = t;
    t = o_51;
    t = escape_1_0(Cify_1_0, t);
    t_51 = t;
    t = SSL_int_to_string(r_51);
    u_51 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_51), term_a_40), t_51), term_z_39);
    t = concat_strings_0_0(t);
    v_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_51, r_51), (ATerm) ATmakeAppl(sym_Defined_2, term_b_40, v_51));
    t = assert_1_0(z_5, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_51), term_b_12)));
  }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          ATerm g_40 = ATgetFirst((ATermList) f_40);
          if(match_cons(g_40, sym_Constructors_1))
            {
              d_52 = ATgetArgument(g_40, 0);
            }
          else
            _fail(t);
          {
            ATerm h_40 = (ATerm) ATgetNext((ATermList) f_40);
            if(((ATgetType(h_40) != AT_LIST) || !(ATisEmpty(h_40))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = d_52;
  t = map_1_0(DeclareConstructor_0_0, t);
  e_52 = t;
  t = d_52;
  t = InitConstructors_0_0(t);
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_52, (ATerm) ATinsert(ATempty, f_52));
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_40 = ATgetArgument(t, 0);
            ATerm q_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_52;
        {
          ATerm a_6 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, f_52);
            return(t);
          }
          t = at_end_1_0(a_6, t);
        }
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        {
          ATerm o_47 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_52, (ATerm) ATinsert(ATempty, f_52)));
          if(match_cons(t, sym__2))
            {
              ATerm r_40 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_40) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_47;
          t = concat_0_0(t);
        }
      }
    g_52 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, g_52);
  }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm n_52 = NULL;
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          n_52 = ATgetArgument(t, 0);
          {
            ATerm u_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_40);
      {
        ATerm r_52 = NULL;
        t = n_52;
        t = map_1_0(TranslateType_0_0, t);
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_ParamList_1, r_52));
      }
    }
  else
    {
      t = s_40;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm v_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_a_12;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_52 = ATgetArgument(t, 0);
      a_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_53;
  {
    ATerm w_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            b_53 = ATgetArgument(t, 0);
            {
              ATerm a_41 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_40);
        {
          ATerm e_53 = NULL;
          t = b_53;
          t = map_1_0(TranslateType_0_0, t);
          e_53 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_52), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, e_53))));
        }
      }
    else
      {
        t = w_40;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm b_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_12, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_52), term_b_12));
      }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_12);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  u_53 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            v_53 = ATgetArgument(t, 0);
            w_53 = ATgetArgument(t, 1);
            {
              ATerm e_41 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_41);
        {
          ATerm b_48 = NULL;
          t = w_53;
          t = map_1_0(TranslateVarDec_0_0, t);
          b_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_48, (ATerm) ATinsert(ATempty, term_a_12));
          {
            ATerm f_41 = t;
            int g_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm h_41 = ATgetArgument(t, 0);
                    ATerm i_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_48;
                t = at_end_1_0(b_6, t);
                ;
                LocalPopChoice(g_41);
              }
            else
              {
                t = f_41;
                {
                  ATerm n_48 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_TypeId_1, (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue))), (ATerm) ATempty))));
                  if(match_cons(t, sym__2))
                    {
                      ATerm o_41 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) o_41) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      n_48 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_48;
                  t = concat_0_0(t);
                }
              }
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, b_48)))));
          }
        }
      }
    else
      {
        t = c_41;
        {
          ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              v_53 = ATgetArgument(t, 0);
              w_53 = ATgetArgument(t, 1);
              x_53 = ATgetArgument(t, 2);
              {
                ATerm p_41 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = w_53;
          t = map_1_0(TranslateVarDec_0_0, t);
          c_54 = t;
          t = x_53;
          t = map_1_0(TranslateVarDec_0_0, t);
          d_54 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_12)), d_54), c_54);
          t = concat_0_0(t);
          e_54 = t;
          t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_53), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, e_54)))));
        }
      }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_41, l_54);
  t = conc_strings_0_0(t);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, m_54);
  return(t);
}
ATerm TranslateSpec_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm r_41 = ATgetArgument(t, 0);
      if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
        {
          ATerm s_41 = ATgetFirst((ATermList) r_41);
          if(match_cons(s_41, sym_Signature_1))
            {
              g_54 = ATgetArgument(s_41, 0);
            }
          else
            _fail(t);
          {
            ATerm t_41 = (ATerm) ATgetNext((ATermList) r_41);
            if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
              {
                ATerm u_41 = ATgetFirst((ATermList) t_41);
                if(match_cons(u_41, sym_Strategies_1))
                  {
                    h_54 = ATgetArgument(u_41, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm v_41 = (ATerm) ATgetNext((ATermList) t_41);
                  if(((ATgetType(v_41) != AT_LIST) || !(ATisEmpty(v_41))))
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
  t = h_54;
  t = map_1_0(SDefToDeclaration_0_0, t);
  i_54 = t;
  t = term_w_10;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
        {
          ATerm d_42 = t;
          int f_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_48 = NULL;
              t = eval_config_0_0(t);
              r_48 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), r_48);
              t = r_48;
              ;
              LocalPopChoice(f_42);
            }
          else
            {
              t = d_42;
            }
          t = map_1_0(c_6, t);
        }
        ;
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = (ATerm) ATempty;
      }
    j_54 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(h_54), term_f_43)), i_54), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_42), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_n_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_42, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_42, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_t_42), term_v_42, term_b_12))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_42, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_42), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_y_42))), term_t_35)))))))), (ATerm) ATmakeAppl(sym_Signature_1, g_54)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_42, (ATerm) ATinsert(ATempty, term_l_42)))), j_54);
    t = concat_0_0(t);
    k_54 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, k_54);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  t = n_113(t);
  {
    ATerm d_6 (ATerm t)
    {
      t = downup2_2_0(n_113, o_113, t);
      return(t);
    }
    t = SRTS_all(d_6, t);
    t = o_113(t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  if(match_cons(t, sym__2))
    {
      n_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_139(t);
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_54, n_54, o_54);
  t = table_push_0_0(t);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_54, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_54 = ATgetFirst((ATermList) t);
        r_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_54, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(r_54), (ATerm) ATinsert(CheckATermList(q_54), n_54)));
    t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
  }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  t = term_m_43;
  t = assert_1_0(e_6, t);
  t = s_54;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = repeat_1_0(h_6, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateSpec_0_0(t);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = n_43;
      {
        ATerm p_43 = t;
        int s_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateSig_0_0(t);
            ;
            LocalPopChoice(s_43);
          }
        else
          {
            t = p_43;
            {
              ATerm t_43 = t;
              int u_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateDef_0_0(t);
                  ;
                  LocalPopChoice(u_43);
                }
              else
                {
                  t = t_43;
                  {
                    ATerm v_43 = t;
                    int x_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TranslateStratMatchGuard_0_0(t);
                        ;
                        LocalPopChoice(x_43);
                      }
                    else
                      {
                        t = v_43;
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
ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_InitCachedTerms_0)))
    _fail(t);
  t = init_cached_terms_0_0(t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  t = downup2_2_0(f_6, g_6, t);
  {
    ATerm y_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(i_6, t);
        ;
        LocalPopChoice(a_44);
      }
    else
      {
        t = y_43;
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  if(match_cons(t, sym__2))
    {
      t_54 = ATgetArgument(t, 0);
      u_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_54, term_b_44);
  t = open_stream_0_0(t);
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_54, u_54);
  t = g_131(t);
  t = fclose_0_0(t);
  t = u_54;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = fetch_1_0(p_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = WriteToFile_1_0(q_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_44 = ATgetArgument(t, 0);
      if(match_cons(c_44, sym_Stream_1))
        {
          y_54 = ATgetArgument(c_44, 0);
        }
      else
        _fail(t);
      z_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(y_54, z_54);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_55);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = WriteToFile_1_0(s_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_44 = ATgetArgument(t, 0);
      if(match_cons(d_44, sym_Stream_1))
        {
          b_55 = ATgetArgument(d_44, 0);
        }
      else
        _fail(t);
      c_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(b_55, c_55);
  d_55 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), d_55);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_55);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  w_54 = t;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_54 != NULL) && (x_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_6, t);
          ;
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          t = term_h_44;
          if(((x_54 != NULL) && (x_54 != t)))
            _fail(t);
          else
            x_54 = t;
        }
      return(t);
    }
    t = _2_0(k_6, _id, t);
    t = w_54;
    {
      ATerm m_6 (ATerm t)
      {
        ATerm s_48 = NULL;
        s_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_54), s_48);
        return(t);
      }
      t = _2_0(_id, m_6, t);
      {
        ATerm i_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_6, o_6, t);
            ;
            LocalPopChoice(j_44);
          }
        else
          {
            t = i_44;
            t = _2_0(_id, r_6, t);
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
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
  f_55 = t;
  t = dtime_0_0(t);
  t = f_55;
  t = g_133(t);
  g_55 = t;
  t = dtime_0_0(t);
  h_55 = t;
  t = g_55;
  if(match_cons(t, sym__2))
    {
      i_55 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_55), (ATerm) ATmakeAppl(sym_Runtime_1, h_55)), j_55);
  return(t);
}
ATerm x_55 (ATerm r_55, ATerm t)
{
  t = SSL_fclose(r_55);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL;
  v_55 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_55 = ATgetArgument(t, 0);
      {
        ATerm k_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_55);
            ;
            LocalPopChoice(l_44);
          }
        else
          {
            t = k_44;
            t = x_55(v_55, t);
          }
      }
    }
  else
    {
      t = x_55(v_55, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_stdin_stream();
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_55);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = SSL_stdout_stream();
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_55);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_56 = NULL;
  t = SSL_stderr_stream();
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_56);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm i_56 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_56;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm m_56 = NULL;
  m_56 = t;
  t = SSL_is_string(m_56);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_44 = ATgetArgument(t, 0);
      ATerm q_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_49 = NULL,i_49 = NULL;
        h_49 = t;
        t = SSL_explode_term(h_49);
        if(match_cons(t, sym__2))
          {
            ATerm t_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_44) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_44 = ATgetArgument(t, 1);
              if(((ATgetType(v_44) == AT_LIST) && !(ATisEmpty(v_44))))
                {
                  i_49 = ATgetFirst((ATermList) v_44);
                  {
                    ATerm w_44 = (ATerm) ATgetNext((ATermList) v_44);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_49;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_49;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_49;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_49;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        {
          ATerm x_44 = t;
          int y_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
              t = _2_0(t_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_56 = ATgetArgument(t, 0);
                  g_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_56, g_56);
              h_56 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_56);
              ;
              LocalPopChoice(y_44);
            }
          else
            {
              t = x_44;
              {
                ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
                t = _2_0(u_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_56 = ATgetArgument(t, 0);
                    k_56 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_56, k_56);
                l_56 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_56);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_56 = NULL;
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_56, term_b_45);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      {
        ATerm j_49 = NULL;
        j_49 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_49), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = j_49;
        _fail(t);
      }
    }
  n_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_56);
  o_56 = t;
  t = n_56;
  t = fclose_0_0(t);
  t = o_56;
  return(t);
}
ATerm fetch_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm v_56 (ATerm t)
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_119, _id, t);
        ;
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        t = Cons_2_0(_id, v_56, t);
      }
    return(t);
  }
  t = v_56(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      {
        ATerm y_56 = NULL,z_56 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_56 = ATgetFirst((ATermList) t);
            z_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_56;
        {
          ATerm v_6 (ATerm t)
          {
            t = z_56;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm f_57 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_57, t);
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_119(t);
      }
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm _2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  l_57 = t;
  if(match_cons(t, sym__2))
    {
      h_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_57);
  g_57 = t;
  t = h_57;
  t = d_86(t);
  j_57 = t;
  t = i_57;
  t = e_86(t);
  k_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_57, k_57), g_57);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm q_57 = NULL;
  q_57 = t;
  t = SSL_explode_string(q_57);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm r_57 = NULL;
  r_57 = t;
  t = SSL_explode_string(r_57);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_57 = NULL;
  t = _2_0(w_6, x_6, t);
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_57 = NULL,u_57 = NULL;
        if(match_cons(t, sym__2))
          {
            t_57 = ATgetArgument(t, 0);
            u_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_57;
        {
          ATerm z_6 (ATerm t)
          {
            t = u_57;
            return(t);
          }
          t = at_end_1_0(z_6, t);
        }
        ;
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        {
          ATerm q_49 = NULL,r_49 = NULL;
          q_49 = t;
          t = SSL_explode_term(q_49);
          if(match_cons(t, sym__2))
            {
              ATerm k_45 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_45) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_49;
          t = concat_0_0(t);
        }
      }
    p_57 = t;
    t = SSL_implode_string(p_57);
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_58 = NULL;
      e_58 = t;
      t = SSL_is_string(e_58);
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_7, t);
            ;
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            {
              ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
              i_58 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_58 = ATgetArgument(t, 0);
                  t = j_58;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_58 = ATgetArgument(t, 0);
                      t = j_58;
                      {
                        ATerm r_45 = t;
                        int s_45 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_58);
                            {
                              ATerm t_45 = t;
                              int u_45 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_50 = NULL;
                                  t = eval_config_0_0(t);
                                  k_50 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), j_58, k_50);
                                  t = k_50;
                                  ;
                                  LocalPopChoice(u_45);
                                }
                              else
                                {
                                  t = t_45;
                                }
                            }
                            ;
                            LocalPopChoice(s_45);
                          }
                        else
                          {
                            t = r_45;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_58), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = j_58;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_58 = NULL,p_58 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_58 = ATgetArgument(t, 0);
                          k_58 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_58;
                      t = eval_config_0_0(t);
                      o_58 = t;
                      t = k_58;
                      t = eval_config_0_0(t);
                      p_58 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
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
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_58 = NULL,w_58 = NULL;
      u_58 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_50 = NULL;
            t = eval_config_0_0(t);
            r_50 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_50);
            t = r_50;
            ;
            LocalPopChoice(z_45);
          }
        else
          {
            t = x_45;
          }
        w_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_58, term_a_46);
        t = geq_0_0(t);
        t = u_58;
        t = r_132(t);
      }
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  if(match_string(t, "-k"))
    {
      t = c_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_59;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  d_59 = t;
  t = SSL_string_to_int(d_59);
  e_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_59);
  t = d_59;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_b_46;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_7, c_7, e_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm g_59 = NULL;
  g_59 = t;
  if(match_string(t, "-S"))
    {
      t = g_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_59;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_c_46;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  h_59 = t;
  t = SSL_string_to_int(h_59);
  i_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_59);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_59);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_g_46;
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_46;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_j_46;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_7, g_7, h_7, t);
      ;
      LocalPopChoice(l_46);
    }
  else
    {
      t = k_46;
      {
        ATerm n_46 = t;
        int o_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_7, k_7, l_7, t);
            ;
            LocalPopChoice(o_46);
          }
        else
          {
            t = n_46;
            t = Option_3_0(m_7, p_7, r_7, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_59 = NULL;
      t = term_t_9;
      t = d_0(t);
      n_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_46, term_r_46, n_59);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_59 = ATgetFirst((ATermList) t);
          m_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_59;
      t = a_0(t);
      t = term_t_9;
      t = c_0(t);
      q_59 = t;
      t = (ATerm) ATinsert(CheckATermList(m_59), q_59);
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm s_59 = NULL;
  s_59 = t;
  if(match_string(t, "-o"))
    {
      t = s_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_59;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm t_59 = NULL;
  t_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_59);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_59);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_s_46;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_7, t_7, u_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
  if(match_cons(t, sym__3))
    {
      w_59 = ATgetArgument(t, 0);
      x_59 = ATgetArgument(t, 1);
      y_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_59, x_59);
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_46 = ATgetArgument(t, 0);
            ATerm w_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_59, x_59);
        ;
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
        t = (ATerm) ATempty;
      }
    z_59 = t;
    t = SSL_table_put(w_59, x_59, (ATerm) ATinsert(CheckATermList(z_59), y_59));
    t = (ATerm) ATmakeAppl(sym__3, w_59, x_59, y_59);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_60 = NULL;
      t = term_t_9;
      t = l_0(t);
      l_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_46, term_r_46, l_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_60 = ATgetFirst((ATermList) t);
          i_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_60 = ATgetFirst((ATermList) t);
          k_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_60;
      t = i_0(t);
      t = j_60;
      t = k_0(t);
      r_60 = t;
      t = (ATerm) ATinsert(CheckATermList(k_60), r_60);
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  if(match_string(t, "-i"))
    {
      t = t_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_60;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm u_60 = NULL;
  u_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_60);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_60);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_x_46;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_7, w_7, a_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  t = whoami_0_0(t);
  v_60 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_60));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL;
        t = eval_config_0_0(t);
        v_50 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_50);
        t = v_50;
        ;
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm c_47 = t;
  int d_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(d_47);
    }
  else
    {
      t = c_47;
      {
        ATerm y_60 = NULL,z_60 = NULL,c_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_60 = ATgetFirst((ATermList) t);
            z_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_60;
        t = foldr_2_0(b_125, c_125, t);
        c_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_60, c_61);
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
ATerm b_8 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_51, b_51);
        ;
        LocalPopChoice(h_47);
      }
    else
      {
        t = f_47;
        t = SSL_addr(a_51, b_51);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_61 = NULL,w_50 = NULL,x_50 = NULL;
  t = times_0_0(t);
  w_50 = t;
  t = SSL_explode_term(w_50);
  if(match_cons(t, sym__2))
    {
      ATerm i_47 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_50;
  t = foldr_2_0(b_8, c_8, t);
  f_61 = t;
  t = SSL_TicksToSeconds(f_61);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
  q_61 = t;
  if(match_cons(t, sym__2))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_61;
        if((r_61 != t))
          {
            _fail(t);
          }
        t = q_61;
        ;
        LocalPopChoice(l_47);
      }
    else
      {
        t = j_47;
        t = q_61;
        {
          ATerm m_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_61, s_61);
              ;
              LocalPopChoice(n_47);
            }
          else
            {
              t = m_47;
              t = SSL_gtr(r_61, s_61);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_61, s_61);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_61 = NULL,x_61 = NULL;
      v_61 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_47 = t;
        int s_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_52 = NULL;
            t = eval_config_0_0(t);
            w_52 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_52);
            t = w_52;
            ;
            LocalPopChoice(s_47);
          }
        else
          {
            t = r_47;
          }
        x_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_61, term_p_19);
        t = geq_0_0(t);
        t = v_61;
        t = q_132(t);
      }
      ;
      LocalPopChoice(q_47);
    }
  else
    {
      t = p_47;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  t = run_time_0_0(t);
  z_61 = t;
  t = term_t_9;
  t = whoami_0_0(t);
  a_62 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_61), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_62));
  t = (ATerm) ATmakeAppl(sym__2, term_t_47, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_47), z_61), term_w_47), a_62));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm y_47 = t;
  int z_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_47);
    }
  else
    {
      t = y_47;
      {
        ATerm a_48 = t;
        int c_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_48);
          }
        else
          {
            t = a_48;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_53 = NULL;
            t = eval_config_0_0(t);
            k_53 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_53);
            t = k_53;
            ;
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
          }
      }
      ;
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      t = fetch_1_0(f_8, t);
    }
  t = e_134(t);
  return(t);
}
ATerm map_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm b_62 (ATerm t)
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        t = Cons_2_0(z_118, b_62, t);
      }
    return(t);
  }
  t = b_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_62 = ATgetFirst((ATermList) t);
      e_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_62 = NULL,j_62 = NULL;
        t = e_62;
        t = g_0(t);
        i_62 = t;
        t = d_62;
        t = e_0(t);
        j_62 = t;
        t = e_62;
        {
          ATerm g_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_62), j_62);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
  n_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  k_62 = t;
  t = l_62;
  t = y_99(t);
  m_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_62), k_62);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm q_62 = NULL;
  q_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_62), term_k_48);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_48 = t;
        int p_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_55 = NULL;
            t = eval_config_0_0(t);
            m_55 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_55);
            t = m_55;
            ;
            LocalPopChoice(p_48);
          }
        else
          {
            t = o_48;
          }
      }
      ;
      LocalPopChoice(m_48);
    }
  else
    {
      t = l_48;
      t = fetch_1_0(h_8, t);
    }
  t = term_q_48;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(n_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  u_62 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_62);
  r_62 = t;
  t = s_62;
  t = z_99(t);
  t_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_62), r_62);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL;
  y_62 = t;
  {
    ATerm t_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_48 = ATgetFirst((ATermList) t);
                ATerm w_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_62;
          }
        ;
        LocalPopChoice(u_48);
      }
    else
      {
        t = t_48;
        t = (ATerm) ATinsert(ATempty, y_62);
      }
    z_62 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_62);
    t = y_62;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_57 = NULL;
        t = eval_config_0_0(t);
        z_57 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_57);
        t = z_57;
        ;
        LocalPopChoice(y_48);
      }
    else
      {
        t = x_48;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_49;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_49;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_8, p_8, r_8, t);
      ;
      LocalPopChoice(g_49);
    }
  else
    {
      t = f_49;
      t = Option_3_0(s_8, t_8, u_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  i_63 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_63 = ATgetFirst((ATermList) t);
      f_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  d_63 = t;
  t = e_63;
  t = s_90(t);
  g_63 = t;
  t = f_63;
  t = t_90(t);
  h_63 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_63), g_63), d_63);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_63);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_136 (ATerm), ATerm t)
{
  ATerm m_63 = NULL;
  m_63 = t;
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_49;
        t = v_136(t);
        ;
        LocalPopChoice(l_49);
      }
    else
      {
        t = k_49;
      }
    t = m_63;
    {
      ATerm z_8 (ATerm t)
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_49 = t;
            int t_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_49);
              }
            else
              {
                t = s_49;
                t = v_136(t);
                t = Cons_2_0(_id, z_8, t);
              }
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
            {
              ATerm p_63 = NULL,q_63 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_63 = ATgetFirst((ATermList) t);
                  q_63 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_63), (ATerm) ATmakeAppl(sym_Undefined_1, p_63));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_8, z_8, t);
    }
  }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm a_64 = NULL;
  a_64 = t;
  if(match_string(t, "--help"))
    {
      t = a_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_64;
        }
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_49;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm e_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_136 (ATerm), ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
  x_63 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_63;
  {
    ATerm a_9 (ATerm t)
    {
      ATerm w_49 = t;
      int x_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_136(t);
          ;
          LocalPopChoice(x_49);
        }
      else
        {
          t = w_49;
          {
            ATerm y_49 = t;
            int z_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_9, c_9, d_9, t);
                ;
                LocalPopChoice(z_49);
              }
            else
              {
                t = y_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_9, t);
    {
      ATerm a_50 = t;
      int b_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_64 = NULL;
          f_64 = t;
          {
            ATerm c_50 = t;
            int d_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_64;
                {
                  ATerm e_50 = t;
                  int f_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm g_50 = t;
                        int h_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_60 = NULL;
                            t = eval_config_0_0(t);
                            n_60 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_60);
                            t = n_60;
                            ;
                            LocalPopChoice(h_50);
                          }
                        else
                          {
                            t = g_50;
                          }
                      }
                      ;
                      LocalPopChoice(f_50);
                    }
                  else
                    {
                      t = e_50;
                      t = fetch_1_0(e_9, t);
                    }
                  t = f_64;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(d_50);
              }
            else
              {
                t = c_50;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm i_50 = t;
                  int j_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_62 = NULL;
                      t = eval_config_0_0(t);
                      x_62 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_62);
                      t = x_62;
                      ;
                      LocalPopChoice(j_50);
                    }
                  else
                    {
                      t = i_50;
                    }
                  t = f_64;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(b_50);
        }
      else
        {
          t = a_50;
          {
            ATerm l_50 = t;
            int m_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm g_9 (ATerm t)
                  {
                    if(((y_63 != NULL) && (y_63 != t)))
                      _fail(t);
                    else
                      y_63 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_9, t);
                  return(t);
                }
                t = fetch_1_0(f_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_t_47, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), term_n_50));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(m_50);
              }
            else
              {
                t = l_50;
              }
          }
        }
      z_63 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_63;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm j_134 (ATerm), ATerm t)
{
  ATerm i_64 = NULL;
  t = parse_options_1_0(g_134, t);
  i_64 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_64);
  t = i_64;
  t = i_134(t);
  {
    ATerm o_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_134, t);
        ;
        LocalPopChoice(p_50);
      }
    else
      {
        t = o_50;
        {
          ATerm q_50 = t;
          int s_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_134(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_50);
            }
          else
            {
              t = q_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = if_verbose2_1_0(o_9, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_50;
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_u_50;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL;
  j_64 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_63 = NULL;
        t = eval_config_0_0(t);
        w_63 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_63);
        t = w_63;
        ;
        LocalPopChoice(z_50);
      }
    else
      {
        t = y_50;
      }
    k_64 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_64));
    t = j_64;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    ATerm f_51 = t;
    int g_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_133(t);
        ;
        LocalPopChoice(g_51);
      }
    else
      {
        t = f_51;
        {
          ATerm j_51 = t;
          int k_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_51);
            }
          else
            {
              t = j_51;
              {
                ATerm n_51 = t;
                int q_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_51);
                  }
                else
                  {
                    t = n_51;
                    {
                      ATerm s_51 = t;
                      int w_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_9, l_9, n_9, t);
                          ;
                          LocalPopChoice(w_51);
                        }
                      else
                        {
                          t = s_51;
                          {
                            ATerm x_51 = t;
                            int z_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_51);
                              }
                            else
                              {
                                t = x_51;
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
  ATerm j_9 (ATerm t)
  {
    ATerm l_64 = NULL,m_64 = NULL,p_64 = NULL;
    l_64 = t;
    {
      ATerm c_52 = t;
      int h_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_64 != NULL) && (m_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_9, t);
          ;
          LocalPopChoice(h_52);
        }
      else
        {
          t = c_52;
          t = term_i_52;
          m_64 = t;
        }
      t = not_null(m_64);
      t = ReadFromFile_0_0(t);
      p_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_64, p_64);
      t = apply_strategy_1_0(p_133, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_9, r_133, i_9, j_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
