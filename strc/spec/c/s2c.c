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
ATerm term_v_39;
ATerm term_q_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_e_38;
ATerm term_w_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_y_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_e_36;
ATerm term_u_35;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_m_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_k_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_z_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_e_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_x_22;
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
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
void init_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Id_1, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_12, (ATerm) ATempty);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Id_1, term_n_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_12, (ATerm) ATempty);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, (ATerm) ATempty);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_13, term_h_13);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Id_1, term_j_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_IntConst_1, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Id_1, term_s_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Id_1, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Id_1, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Id_1, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Id_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Id_1, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Id_1, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Id_1, term_s_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_19, (ATerm) ATempty);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_19, term_h_13);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Id_1, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Id_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_19, (ATerm) ATempty);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_19, term_h_13);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Id_1, term_m_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Id_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_a_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_n_19);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_p_18);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Id_1, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATempty);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_e_21, term_m_17);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Id_1, term_g_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_21, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, term_p_18);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Id_1, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_21, (ATerm) ATempty);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_o_21, term_m_17);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Id_1, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Id_1, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_21, (ATerm) ATempty);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Id_1, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_22, term_h_13);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Id_1, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Id_1, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Id_1, term_p_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Id_1, term_x_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_23, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_23, term_h_13);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Id_1, term_t_23);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_22, term_p_18);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Id_1, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Return_1, term_p_18);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_18, term_h_13);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_13, term_j_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Id_1, term_x_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Id_1, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_12, (ATerm) ATempty);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_b_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Id_1, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_26, (ATerm) ATempty);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_28, (ATerm) ATempty);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Some_1, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_12, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Id_1, term_m_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_28, (ATerm) ATempty);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Id_1, term_w_28);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Id_1, term_d_29);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_CallT_3, term_n_29, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_SDefT_4, term_l_29, (ATerm)ATempty, (ATerm)ATempty, term_p_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Op_2, term_v_29, (ATerm) ATempty);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Defined_2, term_b_30, term_c_18);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_f_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_d_16);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_16);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__2, term_b_33, term_o_9);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_j_33, term_k_33);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_o_9);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_o_9);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_o_9);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_e_38, term_o_9);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_9 (ATerm u_70, ATerm v_70, ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm l_1 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm n_9 (ATerm m_27, ATerm o_27, ATerm n_27, ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm u_2 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm e_3 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm q_9 (ATerm y_26, ATerm b_27, ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm r_9 (ATerm q_31, ATerm p_31, ATerm);
ATerm s_9 (ATerm k_169, ATerm m_31, ATerm o_31, ATerm);
ATerm new_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm x_52 (ATerm y_35, ATerm z_35, ATerm a_36, ATerm b_36, ATerm);
ATerm y_52 (ATerm u_37, ATerm v_37, ATerm z_37, ATerm);
ATerm z_52 (ATerm f_38, ATerm h_38, ATerm j_38, ATerm);
ATerm a_53 (ATerm v_38, ATerm y_38, ATerm z_38, ATerm f_39, ATerm);
ATerm b_53 (ATerm l_39, ATerm m_39, ATerm p_39, ATerm q_39, ATerm);
ATerm c_53 (ATerm j_40, ATerm l_40, ATerm o_40, ATerm q_40, ATerm);
ATerm d_53 (ATerm z_40, ATerm c_41, ATerm e_41, ATerm i_41, ATerm);
ATerm e_53 (ATerm o_41, ATerm t_41, ATerm v_41, ATerm w_41, ATerm x_41, ATerm a_42, ATerm b_42, ATerm c_42, ATerm);
ATerm f_53 (ATerm b_43, ATerm d_43, ATerm h_43, ATerm i_43, ATerm m_43, ATerm o_43, ATerm);
ATerm g_53 (ATerm g_44, ATerm h_44, ATerm i_44, ATerm k_44, ATerm l_44, ATerm m_44, ATerm);
ATerm h_53 (ATerm b_45, ATerm c_45, ATerm d_45, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm u_9 (ATerm z_0 (ATerm), ATerm c_1 (ATerm), ATerm a_1, ATerm d_1, ATerm y_0, ATerm);
ATerm thread_map_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm o_57 (ATerm w_54, ATerm x_54, ATerm y_54, ATerm z_54, ATerm a_55, ATerm);
ATerm p_57 (ATerm a_56, ATerm b_56, ATerm c_56, ATerm d_56, ATerm);
ATerm q_57 (ATerm i_56, ATerm j_56, ATerm k_56, ATerm l_56, ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm z_9 (ATerm w_33, ATerm v_33, ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm c_10 (ATerm r_64, ATerm s_64, ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm d_10 (ATerm s_32, ATerm q_32, ATerm);
ATerm f_5 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm u_113 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm e_10 (ATerm f_32, ATerm e_32, ATerm);
ATerm k_5 (ATerm);
ATerm f_10 (ATerm c_32, ATerm);
ATerm concat_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm c_67 (ATerm u_66, ATerm);
ATerm conc_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm g_10 (ATerm x_31, ATerm y_31, ATerm);
ATerm downup2_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm);
ATerm h_10 (ATerm i_125 (ATerm), ATerm e_70, ATerm c_70, ATerm);
ATerm s_5 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm k_10 (ATerm h_55, ATerm i_55, ATerm);
ATerm l_10 (ATerm v_58, ATerm w_58, ATerm);
ATerm n_10 (ATerm s_116 (ATerm), ATerm h_504, ATerm z_58, ATerm);
ATerm m_10 (ATerm r_58, ATerm s_58, ATerm);
ATerm a_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_118 (ATerm), ATerm);
ATerm y_72 (ATerm s_72, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_10 (ATerm x_58, ATerm);
ATerm p_10 (ATerm j_55, ATerm k_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_74 (ATerm i_73, ATerm);
ATerm k_74 (ATerm m_73, ATerm n_73, ATerm o_73, ATerm);
ATerm l_74 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm);
ATerm q_10 (ATerm);
ATerm g_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm j_10 (ATerm k_50, ATerm l_50, ATerm);
ATerm debug_1_0 (ATerm q_116 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_118 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_10 (ATerm n_70, ATerm o_70, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_10 (ATerm g_64, ATerm h_64, ATerm f_64, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_10 (ATerm v_52, ATerm w_52, ATerm);
ATerm foldr_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm need_help_1_0 (ATerm q_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_104 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm t_10 (ATerm x_65, ATerm y_65, ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_122 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm w_8 (ATerm);
ATerm parse_options_1_0 (ATerm g_122 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm iowrap_3_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,s_0 = NULL,u_0 = NULL,w_0 = NULL;
  a_0 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_p_9;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), c_0), term_t_9);
  w_0 = t;
  t = SSL_printnl(u_0, w_0);
  t = term_a_10;
  s_0 = t;
  t = SSL_exit(s_0);
  t = a_0;
  return(t);
}
ATerm m_9 (ATerm u_70, ATerm v_70, ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
  t = u_70;
  {
    ATerm s_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, v_70);
    t = conc_0_0(t);
    g_1 = t;
    t = term_x_10;
    i_1 = t;
    t = SSL_table_put(i_1, u_70, g_1);
    t = (ATerm) ATmakeAppl(sym__3, term_x_10, u_70, g_1);
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm j_1 = NULL,m_1 = NULL,n_1 = NULL;
  t = term_a_11;
  t = debug_1_0(l_1, t);
  j_1 = t;
  t = (ATerm) ATempty;
  m_1 = t;
  t = term_c_11;
  n_1 = t;
  t = term_f_11;
  t = h_10(s_1, m_1, n_1, t);
  t = j_1;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm v_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  o_1 = t;
  t = term_n_11;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_n_11);
  t = h_10(d_2, o_1, p_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, o_1);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL;
  q_1 = t;
  t = term_v_11;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, q_1);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, q_1));
  t = m_9(r_1, t_1, t);
  t = (ATerm) ATmakeAppl(sym_Include_1, q_1);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_1, e_1, f_1, t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_1, a_2, b_2, t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = ArgOption_3_0(i_2, k_2, m_2, t);
          }
      }
    }
  return(t);
}
ATerm n_9 (ATerm m_27, ATerm o_27, ATerm n_27, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, o_27)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_27), term_b_12, n_27)));
  return(t);
}
ATerm n_2 (ATerm t)
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
  t = n_9(x_1, y_1, z_1, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm w_1 = NULL;
  t = map_1_0(n_2, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, o_2, t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_12, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_1));
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm j_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      {
        ATerm r_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_2), term_h_13)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  ATerm j_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL,e_0 = NULL,v_0 = NULL;
      t = (ATerm) ATempty;
      e_0 = t;
      t = term_n_13;
      v_0 = t;
      t = term_o_13;
      t = c_10(v_0, e_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm p_13 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_13) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          h_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_2;
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = j_13;
      t = (ATerm) ATempty;
    }
  e_2 = t;
  t = map_1_0(p_2, t);
  f_2 = t;
  t = e_2;
  t = InitTermIds_0_0(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, (ATerm) ATinsert(ATempty, g_2));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, c_2);
  return(t);
}
ATerm oncetd_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm q_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = q_13;
        t = SRTS_one(l_2, t);
      }
    return(t);
  }
  t = l_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm u_2 (ATerm), ATerm t)
{
  ATerm w_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,k_1 = NULL,u_1 = NULL,x_0 = NULL;
      a_3 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_3 = ATgetFirst((ATermList) t);
          c_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_3);
      k_1 = t;
      t = c_3;
      t = listbu1_1_0(u_2, t);
      u_1 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), b_3);
      x_0 = t;
      t = SSLsetAnnotations(x_0, k_1);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_2(t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
          }
      }
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = w_13;
      t = u_2(t);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_14 = ATgetFirst((ATermList) t);
      if(match_cons(b_14, sym_Compound_2))
        {
          ATerm c_14 = ATgetArgument(b_14, 0);
          if(((ATgetType(c_14) != AT_LIST) || !(ATisEmpty(c_14))))
            _fail(t);
          o_5 = ATgetArgument(b_14, 1);
        }
      else
        _fail(t);
      p_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_5, p_5);
  t = conc_0_0(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_14 = ATgetFirst((ATermList) t);
      if(match_cons(d_14, sym_Compound_2))
        {
          ATerm e_14 = ATgetArgument(d_14, 0);
          if(((ATgetType(e_14) != AT_LIST) || !(ATisEmpty(e_14))))
            _fail(t);
          i_6 = ATgetArgument(d_14, 1);
        }
      else
        _fail(t);
      j_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, j_6);
  t = conc_0_0(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_14 = ATgetFirst((ATermList) t);
      if(match_cons(f_14, sym_Compound_2))
        {
          ATerm g_14 = ATgetArgument(f_14, 0);
          if(((ATgetType(g_14) != AT_LIST) || !(ATisEmpty(g_14))))
            _fail(t);
          x_6 = ATgetArgument(f_14, 1);
        }
      else
        _fail(t);
      y_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_6, y_6);
  t = conc_0_0(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_14 = ATgetFirst((ATermList) t);
      if(match_cons(h_14, sym_Compound_2))
        {
          ATerm i_14 = ATgetArgument(h_14, 0);
          if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
            _fail(t);
          v_7 = ATgetArgument(h_14, 1);
        }
      else
        _fail(t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_7, w_7);
  t = conc_0_0(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_14 = ATgetFirst((ATermList) t);
      if(match_cons(j_14, sym_Compound_2))
        {
          ATerm k_14 = ATgetArgument(j_14, 0);
          if(((ATgetType(k_14) != AT_LIST) || !(ATisEmpty(k_14))))
            _fail(t);
          b_8 = ATgetArgument(j_14, 1);
        }
      else
        _fail(t);
      c_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_8, c_8);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
      c_4 = ATgetArgument(t, 2);
      t = c_4;
      if(match_cons(t, sym_Compound_2))
        {
          d_4 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
          t = e_4;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = d_4;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = j_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      l_4 = ATgetArgument(t, 0);
                      q_4 = ATgetArgument(t, 1);
                      t = q_4;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = l_4;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, i_4), c_4);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, i_4, j_4);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, i_4, j_4);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, i_4, j_4);
                    }
                }
              else
                {
                  t = j_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      l_4 = ATgetArgument(t, 0);
                      q_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, i_4), c_4);
                }
            }
          else
            {
              t = j_4;
              if(match_cons(t, sym_Compound_2))
                {
                  l_4 = ATgetArgument(t, 0);
                  q_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, i_4), c_4);
            }
        }
      else
        {
          t = j_4;
          if(match_cons(t, sym_Compound_2))
            {
              l_4 = ATgetArgument(t, 0);
              q_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, i_4), c_4);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_4 = ATgetFirst((ATermList) t);
          j_4 = (ATerm) ATgetNext((ATermList) t);
          t = i_4;
          if(match_cons(t, sym_Compound_2))
            {
              f_4 = ATgetArgument(t, 0);
              g_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, g_4, j_4);
          t = conc_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              i_4 = ATgetArgument(t, 0);
              j_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_4;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_4 = ATgetFirst((ATermList) t);
              q_4 = (ATerm) ATgetNext((ATermList) t);
              t = q_4;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = l_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      o_4 = ATgetArgument(t, 0);
                      p_4 = ATgetArgument(t, 1);
                      {
                        ATerm l_14 = t;
                        int m_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_5 = NULL;
                            t = j_4;
                            t = listbu1_1_0(v_2, t);
                            n_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, n_5);
                            ;
                            LocalPopChoice(m_14);
                          }
                        else
                          {
                            t = l_14;
                            {
                              ATerm n_14 = t;
                              int o_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_5 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, i_4, o_4);
                                  t = conc_0_0(t);
                                  t_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, t_5, p_4);
                                  ;
                                  LocalPopChoice(o_14);
                                }
                              else
                                {
                                  t = n_14;
                                  {
                                    ATerm c_6 = NULL,d_6 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, i_4, o_4);
                                    t = conc_0_0(t);
                                    c_6 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
                                    t = conc_0_0(t);
                                    d_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, c_6, d_6);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm h_6 = NULL;
                      t = j_4;
                      t = listbu1_1_0(w_2, t);
                      h_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, h_6);
                    }
                }
              else
                {
                  t = l_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      o_4 = ATgetArgument(t, 0);
                      p_4 = ATgetArgument(t, 1);
                      {
                        ATerm q_14 = t;
                        int t_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_6 = NULL;
                            t = j_4;
                            t = listbu1_1_0(x_2, t);
                            s_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, s_6);
                            ;
                            LocalPopChoice(t_14);
                          }
                        else
                          {
                            t = q_14;
                            {
                              ATerm n_7 = NULL,p_7 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, i_4, o_4);
                              t = conc_0_0(t);
                              n_7 = t;
                              t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
                              t = conc_0_0(t);
                              p_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, n_7, p_7);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_7 = NULL;
                      t = j_4;
                      t = listbu1_1_0(y_2, t);
                      t_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, t_7);
                    }
                }
            }
          else
            {
              ATerm a_8 = NULL;
              t = j_4;
              t = listbu1_1_0(e_3, t);
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, a_8);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97(t);
        t = j_8(t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
      }
    return(t);
  }
  t = j_8(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(c_12);
        i_3 = t;
        t = d_12;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = e_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, d_12, e_12);
        q_2 = t;
        t = SSLsetAnnotations(q_2, i_3);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,s_2 = NULL,r_2 = NULL;
              t = SSLgetAnnotations(c_12);
              s_3 = t;
              t = d_12;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = e_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_3 = ATgetFirst((ATermList) t);
                  x_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_12);
              v_3 = t;
              t = x_3;
              t = Cons_2_0(proper_list_0_0, f_3, t);
              y_3 = t;
              t = (ATerm) ATinsert(CheckATermList(y_3), w_3);
              r_2 = t;
              t = SSLsetAnnotations(r_2, v_3);
              z_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, d_12, z_3);
              s_2 = t;
              t = SSLsetAnnotations(s_2, s_3);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm x_5 = NULL,b_6 = NULL,t_2 = NULL;
                t = SSLgetAnnotations(c_12);
                x_5 = t;
                t = d_12;
                {
                  ATerm a_15 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm l_6 = NULL;
                      l_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = l_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = l_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = a_15;
                    }
                  b_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, b_6, e_12);
                  t_2 = t;
                  t = SSLsetAnnotations(t_2, x_5);
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm q_9 (ATerm y_26, ATerm b_27, ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,p_14 = NULL,r_14 = NULL;
  t = y_26;
  if(match_cons(t, sym_Op_2))
    {
      r_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
      {
        ATerm t_6 = NULL,w_6 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(y_26);
        t_6 = t;
        t = p_14;
        t = map_1_0(Cache_0_0, t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, r_14, w_6);
        z_2 = t;
        t = SSLsetAnnotations(z_2, t_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          r_14 = ATgetArgument(t, 0);
          p_14 = ATgetArgument(t, 1);
          {
            ATerm d_7 = NULL,h_7 = NULL,j_7 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(y_26);
            d_7 = t;
            t = r_14;
            t = Cache_0_0(t);
            h_7 = t;
            t = p_14;
            t = Cache_0_0(t);
            j_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, h_7, j_7);
            d_3 = t;
            t = SSLsetAnnotations(d_3, d_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              r_14 = ATgetArgument(t, 0);
              {
                ATerm u_7 = NULL,k_8 = NULL;
                t = SSLgetAnnotations(y_26);
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, r_14);
                k_8 = t;
                t = SSLsetAnnotations(k_8, u_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  r_14 = ATgetArgument(t, 0);
                  {
                    ATerm h_8 = NULL,l_8 = NULL;
                    t = SSLgetAnnotations(y_26);
                    h_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, r_14);
                    l_8 = t;
                    t = SSLsetAnnotations(l_8, h_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      r_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_8 = NULL,t_8 = NULL;
                        t = SSLgetAnnotations(y_26);
                        o_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, r_14);
                        t_8 = t;
                        t = SSLsetAnnotations(t_8, o_8);
                      }
                    }
                  else
                    {
                      ATerm s_8 = NULL,v_8 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          r_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(y_26);
                      s_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, r_14);
                      v_8 = t;
                      t = SSLsetAnnotations(v_8, s_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  v_12 = t;
  t = term_c_15;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_15, v_12);
  t = j_10(c_13, v_12, t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_15, w_12);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, (ATerm) ATmakeAppl(sym_Defined_2, term_d_15, w_12));
  t = h_10(g_3, y_26, b_13, t);
  t = w_12;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,y_8 = NULL,b_9 = NULL;
        t = (ATerm) ATempty;
        y_8 = t;
        t = term_n_13;
        b_9 = t;
        t = term_o_13;
        t = c_10(b_9, y_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_15) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            s_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_14;
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = (ATerm) ATempty;
      }
    x_12 = t;
    t = (ATerm) ATempty;
    z_12 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_15, (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATmakeAppl(sym__3, v_12, w_12, b_27)));
    a_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_15, (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATmakeAppl(sym__3, v_12, w_12, b_27))));
    t = h_10(h_3, z_12, a_13, t);
    t = (ATerm) ATmakeAppl(sym_Id_1, w_12);
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_9 = NULL,d_11 = NULL;
        t = term_b_15;
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_15, r_15);
        t = c_10(d_11, r_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            v_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, v_9);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm i_11 = NULL,l_11 = NULL;
          t = term_b_15;
          l_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_15, r_15);
          t = c_10(l_11, r_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm l_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              i_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm l_16 = NULL,t_11 = NULL;
        l_16 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm o_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              ;
              LocalPopChoice(p_15);
            }
          else
            {
              t = o_15;
              {
                ATerm q_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = q_15;
                  }
              }
            }
          t_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_16, t_11);
          {
            ATerm t_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm v_15 = ATgetArgument(t, 0);
                    ATerm w_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, l_16, t_11);
                t = q_9(l_16, t_11, t);
                ;
                LocalPopChoice(u_15);
              }
            else
              {
                t = t_15;
                {
                  ATerm j_12 = NULL,l_12 = NULL;
                  l_12 = t;
                  t = SSL_explode_term(l_12);
                  if(match_cons(t, sym__2))
                    {
                      ATerm x_15 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) x_15) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm y_15 = ATgetArgument(t, 1);
                        if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
                          {
                            ATerm z_15 = ATgetFirst((ATermList) y_15);
                            ATerm a_16 = (ATerm) ATgetNext((ATermList) y_15);
                            if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
                              {
                                j_12 = ATgetFirst((ATermList) a_16);
                                {
                                  ATerm c_16 = (ATerm) ATgetNext((ATermList) a_16);
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
                  t = j_12;
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm r_9 (ATerm q_31, ATerm p_31, ATerm t)
{
  ATerm o_16 = NULL;
  t = new_0_0(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_16), term_h_13), (ATerm) ATmakeAppl(sym_AssignInit_1, p_31)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, q_31, (ATerm) ATmakeAppl(sym_Id_1, o_16))));
  return(t);
}
ATerm s_9 (ATerm k_169, ATerm m_31, ATerm o_31, ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL,s_16 = NULL;
  t = SSLgetAnnotations(k_169);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_31);
  s_16 = t;
  t = SSLsetAnnotations(s_16, p_16);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, r_16, o_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(f_13, g_13, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, u_18), w_18)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          w_18 = ATgetArgument(t, 0);
          u_18 = ATgetArgument(t, 1);
          {
            ATerm u_12 = NULL,y_12 = NULL,s_13 = NULL,v_13 = NULL;
            t = u_18;
            t = foldr_3_0(j_3, k_3, l_3, t);
            u_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_18, u_12);
            s_13 = t;
            t = term_h_16;
            v_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATmakeAppl(sym__2, w_18, u_12));
            t = c_10(v_13, s_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm i_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                y_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_16, (ATerm) ATinsert(CheckATermList(u_18), (ATerm) ATmakeAppl(sym_Id_1, y_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              w_18 = ATgetArgument(t, 0);
              t = w_18;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  w_18 = ATgetArgument(t, 0);
                  {
                    ATerm m_16 = t;
                    int n_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(v_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm q_16 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm t_16 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_16) != AT_LIST) || !(ATisEmpty(t_16))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_18)));
                        ;
                        LocalPopChoice(n_16);
                      }
                    else
                      {
                        t = m_16;
                        {
                          ATerm z_16 = t;
                          int a_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(v_18);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm c_17 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm d_17 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(d_17) != AT_LIST) || !(ATisEmpty(d_17))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_18)));
                              ;
                              LocalPopChoice(a_17);
                            }
                          else
                            {
                              t = z_16;
                              {
                                ATerm e_17 = t;
                                int f_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(v_18);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_18)));
                                    ;
                                    LocalPopChoice(f_17);
                                  }
                                else
                                  {
                                    t = e_17;
                                    t = SSLgetAnnotations(v_18);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm g_17 = ATgetFirst((ATermList) t);
                                        if((ATgetSymbol((ATermAppl) g_17) != ATmakeSymbol("bound", 0, ATtrue)))
                                          _fail(t);
                                        {
                                          ATerm h_17 = (ATerm) ATgetNext((ATermList) t);
                                          if(((ATgetType(h_17) != AT_LIST) || !(ATisEmpty(h_17))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Id_1, w_18);
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      w_18 = ATgetArgument(t, 0);
                      {
                        ATerm d_19 = NULL,u_16 = NULL,v_16 = NULL,x_16 = NULL,b_16 = NULL;
                        t = SSL_explode_string(w_18);
                        t = escape_chars_0_0(t);
                        b_16 = t;
                        t = SSL_implode_string(b_16);
                        v_16 = t;
                        t = SSL_explode_string(v_16);
                        x_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_16), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
                        t = conc_0_0(t);
                        u_16 = t;
                        t = SSL_implode_string(u_16);
                        d_19 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_17), term_m_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, d_19)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          w_18 = ATgetArgument(t, 0);
                          {
                            ATerm b_17 = NULL;
                            t = SSL_real_to_string(w_18);
                            b_17 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, b_17))));
                          }
                        }
                      else
                        {
                          ATerm q_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              w_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(w_18);
                          q_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, q_17))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_22;
  if(match_string(t, "Cons"))
    {
      ATerm x_23 = NULL;
      t = a_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_22 = ATgetFirst((ATermList) t);
          s_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_22 = ATgetFirst((ATermList) t);
          w_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_22;
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,x_26 = NULL,z_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                v_24 = ATgetArgument(t, 0);
                c_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_24;
            if(match_cons(t, sym_TypeName_2))
              {
                w_24 = ATgetArgument(t, 0);
                b_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                x_24 = ATgetArgument(t, 0);
                y_24 = ATgetArgument(t, 1);
                a_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_24;
            if(match_cons(t, sym_TypeId_1))
              {
                z_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = a_25;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_25;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = c_25;
            if(match_cons(t, sym_Id_1))
              {
                x_26 = ATgetArgument(t, 0);
                {
                  ATerm f_27 = NULL,f_9 = NULL;
                  t = SSLgetAnnotations(c_25);
                  f_27 = t;
                  t = x_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, x_26);
                  f_9 = t;
                  t = SSLsetAnnotations(f_9, f_27);
                }
              }
            else
              {
                ATerm k_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,i_9 = NULL,h_9 = NULL,g_9 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    x_26 = ATgetArgument(t, 0);
                    z_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_25);
                k_27 = t;
                t = x_26;
                if(match_cons(t, sym_Id_1))
                  {
                    w_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_26);
                v_27 = t;
                t = w_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, w_27);
                g_9 = t;
                t = SSLsetAnnotations(g_9, v_27);
                x_27 = t;
                t = z_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_27 = ATgetFirst((ATermList) t);
                    s_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_26);
                q_27 = t;
                t = s_27;
                t = Cons_2_0(_id, m_3, t);
                t_27 = t;
                t = (ATerm) ATinsert(CheckATermList(t_27), r_27);
                h_9 = t;
                t = SSLsetAnnotations(h_9, q_27);
                u_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, x_27, u_27);
                i_9 = t;
                t = SSLsetAnnotations(i_9, k_27);
              }
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATempty, t_22));
          }
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, r_22), x_23)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = a_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_18;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = bottomup_1_0(o_98, t);
    return(t);
  }
  t = SRTS_all(n_3, t);
  t = o_98(t);
  return(t);
}
ATerm topdown_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = topdown_1_0(n_98, t);
    return(t);
  }
  t = n_98(t);
  t = SRTS_all(o_3, t);
  return(t);
}
ATerm x_52 (ATerm y_35, ATerm z_35, ATerm a_36, ATerm b_36, ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,m_36 = NULL,b_28 = NULL,c_28 = NULL;
  t = y_35;
  {
    ATerm d_18 = t;
    if((PushChoice() == 0))
      {
        ATerm n_36 = NULL;
        n_36 = t;
        if(match_string(t, "Nil"))
          {
            t = n_36;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = n_36;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_18;
      }
    t = (ATerm) ATmakeAppl(sym__2, z_35, term_d_16);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm p_36 = NULL,q_36 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
        if(match_cons(t, sym__2))
          {
            p_36 = ATgetArgument(t, 0);
            q_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(q_36);
        v_36 = t;
        t = p_36;
        if(match_cons(t, sym_Var_1))
          {
            x_36 = ATgetArgument(t, 0);
            {
              ATerm e_18 = t;
              int f_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_37 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_36)), a_36));
                  f_37 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_36)), a_36)));
                  t = s_9(p_36, x_36, f_37, t);
                  ;
                  LocalPopChoice(f_18);
                }
              else
                {
                  t = e_18;
                  {
                    ATerm g_37 = NULL;
                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_36)), a_36));
                    g_37 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_36)), a_36)));
                    t = r_9(p_36, g_37, t);
                  }
                }
            }
          }
        else
          {
            ATerm h_37 = NULL;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_36)), a_36));
            h_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_36)), a_36)));
            t = r_9(p_36, h_37, t);
          }
        s_36 = t;
        t = term_a_10;
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_36, term_a_10);
        t = r_10(q_36, w_36, t);
        t_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, t_36);
        return(t);
      }
      t = thread_map_1_0(p_3, t);
      if(match_cons(t, sym__2))
        {
          i_36 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_35;
      t = foldr_3_0(q_3, r_3, t_3, t);
      j_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_35, j_36);
      b_28 = t;
      t = term_h_16;
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATmakeAppl(sym__2, y_35, j_36));
      t = c_10(c_28, b_28, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm j_18 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) j_18) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          m_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_36)), a_36)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, i_36), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18))));
    }
  }
  return(t);
}
ATerm y_52 (ATerm u_37, ATerm v_37, ATerm z_37, ATerm t)
{
  ATerm c_38 = NULL;
  t = SSL_real_to_string(u_37);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, v_37)), term_t_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_19, v_37))), (ATerm) ATmakeAppl(sym_FloatConst_1, c_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18))));
  return(t);
}
ATerm z_52 (ATerm f_38, ATerm h_38, ATerm j_38, ATerm t)
{
  ATerm u_38 = NULL;
  t = SSL_int_to_string(f_38);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, h_38)), term_f_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_19, h_38))), (ATerm) ATmakeAppl(sym_IntConst_1, u_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18))));
  return(t);
}
ATerm a_53 (ATerm v_38, ATerm y_38, ATerm z_38, ATerm f_39, ATerm t)
{
  t = SSLgetAnnotations(v_38);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, y_38), term_n_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, y_38), z_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, z_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_38), term_b_12, z_38)));
  return(t);
}
ATerm b_53 (ATerm l_39, ATerm m_39, ATerm p_39, ATerm q_39, ATerm t)
{
  t = SSLgetAnnotations(l_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) o_19) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(p_19) != AT_LIST) || !(ATisEmpty(p_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, m_39), term_n_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, m_39), p_39)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, p_39))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_39), term_b_12, p_39)));
  return(t);
}
ATerm c_53 (ATerm j_40, ATerm l_40, ATerm o_40, ATerm q_40, ATerm t)
{
  t = SSLgetAnnotations(j_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) q_19) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(r_19) != AT_LIST) || !(ATisEmpty(r_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, l_40), o_40), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, o_40))))));
  return(t);
}
ATerm d_53 (ATerm z_40, ATerm c_41, ATerm e_41, ATerm i_41, ATerm t)
{
  t = SSLgetAnnotations(z_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_19) != AT_LIST) || !(ATisEmpty(t_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_41), term_b_12, e_41));
  return(t);
}
ATerm e_53 (ATerm o_41, ATerm t_41, ATerm v_41, ATerm w_41, ATerm x_41, ATerm a_42, ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,r_42 = NULL,e_28 = NULL,f_28 = NULL;
  t = t_41;
  {
    ATerm u_19 = t;
    if((PushChoice() == 0))
      {
        ATerm s_42 = NULL;
        s_42 = t;
        if(match_string(t, "Nil"))
          {
            t = s_42;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = s_42;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_19;
      }
    t = (ATerm) ATmakeAppl(sym__2, w_41, term_d_16);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,a_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_19 = ATgetArgument(t, 0);
            if(match_cons(v_19, sym_Var_1))
              {
                t_42 = ATgetArgument(v_19, 0);
              }
            else
              _fail(t);
            u_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(u_42);
        v_42 = t;
        t = term_a_10;
        a_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_42, term_a_10);
        t = r_10(u_42, a_43, t);
        w_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_42), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_42)), (ATerm) ATmakeAppl(sym_Id_1, o_41))))), w_42);
        return(t);
      }
      t = thread_map_1_0(u_3, t);
      if(match_cons(t, sym__2))
        {
          o_42 = ATgetArgument(t, 0);
          {
            ATerm w_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, t_41, v_41);
      e_28 = t;
      t = term_h_16;
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATmakeAppl(sym__2, t_41, v_41));
      t = c_10(f_28, e_28, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm x_19 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          r_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_42, (ATerm) ATinsert(ATempty, x_41));
      t = conc_0_0(t);
      p_42 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, r_42)), (ATerm) ATmakeAppl(sym_Id_1, o_41))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, o_41), a_42, b_42))));
    }
  }
  return(t);
}
ATerm f_53 (ATerm b_43, ATerm d_43, ATerm h_43, ATerm i_43, ATerm m_43, ATerm o_43, ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_real_to_string(d_43);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, f_44)), (ATerm) ATmakeAppl(sym_Id_1, b_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_43), i_43, m_43))));
  return(t);
}
ATerm g_53 (ATerm g_44, ATerm h_44, ATerm i_44, ATerm k_44, ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm z_44 = NULL;
  t = SSL_int_to_string(h_44);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, z_44)), (ATerm) ATmakeAppl(sym_Id_1, g_44))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_44)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, g_44), k_44, l_44))));
  return(t);
}
ATerm h_53 (ATerm b_45, ATerm c_45, ATerm d_45, ATerm t)
{
  t = c_45;
  {
    ATerm c_20 = t;
    if((PushChoice() == 0))
      {
        ATerm j_45 = NULL,m_45 = NULL,n_45 = NULL,w_9 = NULL;
        n_45 = t;
        if(match_cons(t, sym_Var_1))
          {
            m_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_45);
        j_45 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, m_45);
        w_9 = t;
        t = SSLsetAnnotations(w_9, j_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_20;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_45)));
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm q_37 = NULL,t_37 = NULL;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(q_37, t_37, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(match_cons(d_20, sym_SVar_1))
        {
          f_48 = ATgetArgument(d_20, 0);
        }
      else
        _fail(t);
      {
        ATerm e_20 = ATgetArgument(t, 1);
        if(((ATgetType(e_20) != AT_LIST) || !(ATisEmpty(e_20))))
          _fail(t);
      }
      {
        ATerm f_20 = ATgetArgument(t, 2);
        if(((ATgetType(f_20) != AT_LIST) || !(ATisEmpty(f_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, f_48);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = topdown_1_0(h_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(k_4, t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
          }
      }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm v_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(match_cons(m_20, sym_SVar_1))
        {
          v_48 = ATgetArgument(m_20, 0);
        }
      else
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(((ATgetType(n_20) != AT_LIST) || !(ATisEmpty(n_20))))
          _fail(t);
      }
      {
        ATerm o_20 = ATgetArgument(t, 2);
        if(((ATgetType(o_20) != AT_LIST) || !(ATisEmpty(o_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, v_48);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = topdown_1_0(r_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(s_4, t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL;
  s_50 = t;
  t = term_w_20;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, term_w_20);
  t = h_10(u_4, s_50, t_50, t);
  t = s_50;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_50), term_h_13), term_y_20);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  if(match_cons(t, sym__2))
    {
      b_51 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_51;
  if(match_cons(t, sym_Var_1))
    {
      z_50 = ATgetArgument(t, 0);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_51;
            t = s_9(b_51, z_50, c_51, t);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = a_51;
            t = r_9(b_51, c_51, t);
          }
      }
    }
  else
    {
      t = a_51;
      t = r_9(b_51, c_51, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,t_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,d_46 = NULL,g_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,y_46 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  h_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, i_47, (ATerm) ATinsert(ATempty, f_47));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          i_47 = ATgetArgument(t, 0);
          {
            ATerm p_47 = NULL;
            t = h_47;
            t = new_0_0(t);
            p_47 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_47), term_h_13))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, p_47)))), i_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_47), term_b_12, term_p_18))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              i_47 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, i_47);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  i_47 = ATgetArgument(t, 0);
                  f_47 = ATgetArgument(t, 1);
                  c_47 = ATgetArgument(t, 2);
                  {
                    ATerm a_48 = NULL,b_48 = NULL,e_48 = NULL;
                    t = i_47;
                    if(match_cons(t, sym_SVar_1))
                      {
                        g_47 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_47;
                    t = map_1_0(a_4, t);
                    a_48 = t;
                    t = c_47;
                    t = map_1_0(b_4, t);
                    b_48 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_18)), b_48), a_48);
                    t = concat_0_0(t);
                    e_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, g_47), e_48)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      i_47 = ATgetArgument(t, 0);
                      f_47 = ATgetArgument(t, 1);
                      c_47 = ATgetArgument(t, 2);
                      {
                        ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
                        t = f_47;
                        t = map_1_0(m_4, t);
                        s_48 = t;
                        t = c_47;
                        t = map_1_0(n_4, t);
                        t_48 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
                        t = conc_0_0(t);
                        u_48 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, i_47), u_48)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          i_47 = ATgetArgument(t, 0);
                          {
                            ATerm c_49 = NULL;
                            t = h_47;
                            t = new_0_0(t);
                            c_49 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_49), term_h_13), term_b_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_21), term_j_21), i_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, c_49))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              i_47 = ATgetArgument(t, 0);
                              f_47 = ATgetArgument(t, 1);
                              {
                                ATerm l_49 = NULL;
                                t = h_47;
                                t = new_0_0(t);
                                l_49 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_49), term_h_13), term_b_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, l_49))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  i_47 = ATgetArgument(t, 0);
                                  f_47 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, i_47, f_47);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      i_47 = ATgetArgument(t, 0);
                                      f_47 = ATgetArgument(t, 1);
                                      c_47 = ATgetArgument(t, 2);
                                      {
                                        ATerm z_49 = NULL,a_50 = NULL;
                                        t = h_47;
                                        t = new_0_0(t);
                                        z_49 = t;
                                        t = new_0_0(t);
                                        a_50 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_50), term_h_13), term_v_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_49), term_h_13), term_b_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_50))))), i_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, c_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, z_49))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          i_47 = ATgetArgument(t, 0);
                                          f_47 = ATgetArgument(t, 1);
                                          {
                                            ATerm g_50 = NULL,h_50 = NULL;
                                            t = h_47;
                                            t = new_0_0(t);
                                            g_50 = t;
                                            t = new_0_0(t);
                                            h_50 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_50), term_h_13), term_v_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_50), term_h_13), term_b_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_50))))), term_b_22), i_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, g_50))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              i_47 = ATgetArgument(t, 0);
                                              f_47 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_47, f_47);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  i_47 = ATgetArgument(t, 0);
                                                  f_47 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_47), i_47));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      i_47 = ATgetArgument(t, 0);
                                                      f_47 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm q_50 = NULL;
                                                        t = i_47;
                                                        t = map_1_0(t_4, t);
                                                        t = i_47;
                                                        t = map_1_0(v_4, t);
                                                        q_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, q_50)), (ATerm) ATinsert(ATempty, f_47));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_c_22;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  i_47 = ATgetArgument(t, 0);
                                                                  f_47 = ATgetArgument(t, 1);
                                                                  t = i_47;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      g_47 = ATgetArgument(t, 0);
                                                                      w_45 = ATgetArgument(t, 1);
                                                                      t = w_45;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          o_45 = ATgetFirst((ATermList) t);
                                                                          p_45 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = p_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              q_45 = ATgetFirst((ATermList) t);
                                                                              t_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = t_45;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = g_47;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm d_22 = t;
                                                                                      int e_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm y_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_45, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_22, f_47)))))), (ATerm) ATmakeAppl(sym__2, o_45, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_22, f_47)))));
                                                                                          t = map_1_0(w_4, t);
                                                                                          y_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, f_47)), term_o_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, f_47)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, y_50), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18))));
                                                                                          ;
                                                                                          LocalPopChoice(e_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_22;
                                                                                          t = x_52(g_47, w_45, f_47, h_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_52(g_47, w_45, f_47, h_47, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = g_47;
                                                                                  t = x_52(g_47, w_45, f_47, h_47, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_47;
                                                                              t = x_52(g_47, w_45, f_47, h_47, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = g_47;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm u_22 = t;
                                                                                  int v_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, f_47)), term_o_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, f_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18))));
                                                                                      ;
                                                                                      LocalPopChoice(v_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_22;
                                                                                      t = x_52(g_47, w_45, f_47, h_47, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_52(g_47, w_45, f_47, h_47, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_47;
                                                                              t = x_52(g_47, w_45, f_47, h_47, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          g_47 = ATgetArgument(t, 0);
                                                                          t = y_52(g_47, f_47, h_47, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              g_47 = ATgetArgument(t, 0);
                                                                              t = z_52(g_47, f_47, h_47, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm n_51 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL,n_28 = NULL;
                                                                                    t = SSL_explode_string(g_47);
                                                                                    t = escape_chars_0_0(t);
                                                                                    n_28 = t;
                                                                                    t = SSL_implode_string(n_28);
                                                                                    r_28 = t;
                                                                                    t = SSL_explode_string(r_28);
                                                                                    t_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_28), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
                                                                                    t = conc_0_0(t);
                                                                                    q_28 = t;
                                                                                    t = SSL_implode_string(q_28);
                                                                                    n_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_23, f_47))), (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_17), term_m_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, n_51))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, term_p_18))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      g_47 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm g_23 = t;
                                                                                        int h_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = a_53(i_47, g_47, f_47, h_47, t);
                                                                                            ;
                                                                                            LocalPopChoice(h_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = g_23;
                                                                                            {
                                                                                              ATerm i_23 = t;
                                                                                              int j_23 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = b_53(i_47, g_47, f_47, h_47, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(j_23);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = i_23;
                                                                                                  {
                                                                                                    ATerm k_23 = t;
                                                                                                    int l_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = c_53(i_47, g_47, f_47, h_47, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(l_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_23;
                                                                                                        t = d_53(i_47, g_47, f_47, h_47, t);
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                          w_45 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, w_45, f_47)), (ATerm) ATmakeAppl(sym_Match_2, g_47, f_47)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm m_23 = t;
                                                                                          int n_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm o_23 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(n_23);
                                                                                              t = term_c_22;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = m_23;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_c_22;
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
                                                                      i_47 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, i_47, term_p_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          i_47 = ATgetArgument(t, 0);
                                                                          f_47 = ATgetArgument(t, 1);
                                                                          c_47 = ATgetArgument(t, 2);
                                                                          t = i_47;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              g_47 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = f_47;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              e_47 = ATgetFirst((ATermList) t);
                                                                              y_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = e_47;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  p_46 = ATgetArgument(t, 0);
                                                                                  t_46 = ATgetArgument(t, 1);
                                                                                  u_46 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = p_46;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  s_46 = ATgetArgument(t, 0);
                                                                                  o_46 = ATgetArgument(t, 1);
                                                                                  t = t_46;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      x_45 = ATgetFirst((ATermList) t);
                                                                                      z_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = z_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          d_46 = ATgetFirst((ATermList) t);
                                                                                          n_46 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = n_46;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = d_46;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  g_46 = ATgetArgument(t, 0);
                                                                                                  t = x_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      y_45 = ATgetArgument(t, 0);
                                                                                                      t = o_46;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = s_46;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm p_23 = t;
                                                                                                              int q_23 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_47))), term_o_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_47))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_46), term_b_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_22, (ATerm) ATmakeAppl(sym_Id_1, g_47)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_45), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_22, (ATerm) ATmakeAppl(sym_Id_1, g_47)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, g_47), y_46, c_47))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(q_23);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_23;
                                                                                                                  t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = s_46;
                                                                                                          t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = s_46;
                                                                                                      t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = s_46;
                                                                                                  t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_46;
                                                                                              t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_46;
                                                                                          t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = o_46;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = s_46;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm r_23 = t;
                                                                                                  int s_23 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_47))), term_o_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_47)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, u_46), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, g_47), y_46, c_47))));
                                                                                                      ;
                                                                                                      LocalPopChoice(s_23);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_23;
                                                                                                      t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_46;
                                                                                              t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_46;
                                                                                          t = e_53(g_47, s_46, o_46, t_46, u_46, y_46, c_47, h_47, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      s_46 = ATgetArgument(t, 0);
                                                                                      t = f_53(g_47, s_46, u_46, y_46, c_47, h_47, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          s_46 = ATgetArgument(t, 0);
                                                                                          t = g_53(g_47, s_46, u_46, y_46, c_47, h_47, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm i_52 = NULL,x_28 = NULL,y_28 = NULL,a_29 = NULL,u_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              s_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(s_46);
                                                                                          t = escape_chars_0_0(t);
                                                                                          u_28 = t;
                                                                                          t = SSL_implode_string(u_28);
                                                                                          y_28 = t;
                                                                                          t = SSL_explode_string(y_28);
                                                                                          a_29 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_29), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
                                                                                          t = conc_0_0(t);
                                                                                          x_28 = t;
                                                                                          t = SSL_implode_string(x_28);
                                                                                          i_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, i_52))), (ATerm) ATmakeAppl(sym_Id_1, g_47))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, g_47), y_46, c_47))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = c_47;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              i_47 = ATgetArgument(t, 0);
                                                                              f_47 = ATgetArgument(t, 1);
                                                                              c_47 = ATgetArgument(t, 2);
                                                                              d_47 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, i_47), (ATerm) ATmakeAppl(sym_Case_3, f_47, c_47, d_47));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  i_47 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, i_47));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      i_47 = ATgetArgument(t, 0);
                                                                                      f_47 = ATgetArgument(t, 1);
                                                                                      t = i_47;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = f_47;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          e_47 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm v_23 = t;
                                                                                            int w_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_47), term_n_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_47), (ATerm) ATmakeAppl(sym_Id_1, e_47))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_47), term_b_12, (ATerm) ATmakeAppl(sym_Id_1, e_47))));
                                                                                                ;
                                                                                                LocalPopChoice(w_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_23;
                                                                                                t = h_53(g_47, f_47, h_47, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_53(g_47, f_47, h_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          i_47 = ATgetArgument(t, 0);
                                                                                          t = i_47;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              g_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_47), term_b_12, term_p_18));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm u_52 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              i_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = i_47;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          u_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_18, term_b_12, u_52));
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
ATerm u_9 (ATerm z_0 (ATerm), ATerm c_1 (ATerm), ATerm a_1, ATerm d_1, ATerm y_0, ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, y_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, i_53);
  t = c_1(t);
  if(match_cons(t, sym__2))
    {
      l_53 = ATgetArgument(t, 0);
      j_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_53), k_53), j_53);
  return(t);
}
ATerm thread_map_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm x_53 (ATerm t)
  {
    ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
    q_53 = t;
    if(match_cons(t, sym__2))
      {
        r_53 = ATgetArgument(t, 0);
        s_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_53;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_53 = ATgetFirst((ATermList) t);
        p_53 = (ATerm) ATgetNext((ATermList) t);
        t = q_53;
        t = u_9(y_110, x_53, o_53, p_53, s_53, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_53);
      }
    return(t);
  }
  t = x_53(t);
  return(t);
}
ATerm o_57 (ATerm w_54, ATerm x_54, ATerm y_54, ATerm z_54, ATerm a_55, ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,n_55 = NULL,o_55 = NULL,b_29 = NULL,c_29 = NULL;
  t = w_54;
  {
    ATerm y_23 = t;
    if((PushChoice() == 0))
      {
        ATerm p_55 = NULL;
        p_55 = t;
        if(match_string(t, "Nil"))
          {
            t = p_55;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = p_55;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_23;
      }
    t = x_54;
    t = map_1_0(x_4, t);
    t = (ATerm) ATmakeAppl(sym__2, x_54, term_d_16);
    t = thread_map_1_0(y_4, t);
    if(match_cons(t, sym__2))
      {
        f_55 = ATgetArgument(t, 0);
        {
          ATerm z_23 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = x_54;
    t = foldr_3_0(z_4, a_5, b_5, t);
    n_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_54, n_55);
    b_29 = t;
    t = term_h_16;
    c_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATmakeAppl(sym__2, w_54, n_55));
    t = c_10(c_29, b_29, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm a_24 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) a_24) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        o_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_55, (ATerm) ATinsert(ATempty, y_54));
    t = conc_0_0(t);
    g_55 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_55)), term_p_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, g_55), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_54)));
  }
  return(t);
}
ATerm p_57 (ATerm a_56, ATerm b_56, ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm h_56 = NULL;
  t = SSL_real_to_string(a_56);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, h_56)), term_p_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_56)));
  return(t);
}
ATerm q_57 (ATerm i_56, ATerm j_56, ATerm k_56, ATerm l_56, ATerm t)
{
  ATerm p_56 = NULL;
  t = SSL_int_to_string(i_56);
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, p_56)), term_p_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_56)));
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,y_9 = NULL;
  s_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_55);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_55);
  y_9 = t;
  t = SSLsetAnnotations(y_9, q_55);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_24 = ATgetArgument(t, 0);
      if(match_cons(b_24, sym_Var_1))
        {
          t_55 = ATgetArgument(b_24, 0);
        }
      else
        _fail(t);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(u_55);
  v_55 = t;
  t = term_a_10;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_55, term_a_10);
  t = r_10(u_55, x_55, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_55), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_55)), term_p_18)))), w_55);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL;
  if(match_cons(t, sym__2))
    {
      y_55 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(y_55, z_55, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  x_56 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      y_56 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
      c_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_56;
  if(match_cons(t, sym_Match_1))
    {
      z_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_56;
  if(match_cons(t, sym_Op_2))
    {
      a_57 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      t = w_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_56 = ATgetFirst((ATermList) t);
          s_56 = (ATerm) ATgetNext((ATermList) t);
          t = s_56;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_56 = ATgetFirst((ATermList) t);
              v_56 = (ATerm) ATgetNext((ATermList) t);
              t = v_56;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_56;
                  if(match_cons(t, sym_Var_1))
                    {
                      u_56 = ATgetArgument(t, 0);
                      t = q_56;
                      if(match_cons(t, sym_Var_1))
                        {
                          r_56 = ATgetArgument(t, 0);
                          t = a_57;
                          if(match_string(t, "Cons"))
                            {
                              ATerm c_24 = t;
                              int d_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, term_p_18)), term_o_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, term_p_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_57), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, u_56), term_b_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_22, (ATerm) ATinsert(ATempty, term_e_24)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_56), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_22, (ATerm) ATinsert(ATempty, term_e_24)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_57)));
                                  ;
                                  LocalPopChoice(d_24);
                                }
                              else
                                {
                                  t = c_24;
                                  t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                                }
                            }
                          else
                            {
                              t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                            }
                        }
                      else
                        {
                          t = a_57;
                          t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                        }
                    }
                  else
                    {
                      t = a_57;
                      t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                    }
                }
              else
                {
                  t = a_57;
                  t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                }
            }
          else
            {
              t = a_57;
              t = o_57(a_57, w_56, b_57, c_57, x_56, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = a_57;
              if(match_string(t, "Nil"))
                {
                  ATerm f_24 = t;
                  int g_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATempty, term_p_18)), term_o_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, term_p_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_57)));
                      ;
                      LocalPopChoice(g_24);
                    }
                  else
                    {
                      t = f_24;
                      t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                    }
                }
              else
                {
                  t = o_57(a_57, w_56, b_57, c_57, x_56, t);
                }
            }
          else
            {
              t = a_57;
              t = o_57(a_57, w_56, b_57, c_57, x_56, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          a_57 = ATgetArgument(t, 0);
          t = p_57(a_57, b_57, c_57, x_56, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              a_57 = ATgetArgument(t, 0);
              t = q_57(a_57, b_57, c_57, x_56, t);
            }
          else
            {
              ATerm m_57 = NULL,h_29 = NULL,i_29 = NULL,k_29 = NULL,e_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  a_57 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(a_57);
              t = escape_chars_0_0(t);
              e_29 = t;
              t = SSL_implode_string(e_29);
              i_29 = t;
              t = SSL_explode_string(i_29);
              k_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_29), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
              t = conc_0_0(t);
              h_29 = t;
              t = SSL_implode_string(h_29);
              m_57 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_57))), term_p_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_57)));
            }
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_10 = NULL;
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_58 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_24 = ATgetFirst((ATermList) t);
              if(((ATgetType(l_24) != AT_INT) || (ATgetInt((ATermInt) l_24) != 34)))
                _fail(t);
              b_58 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(b_58), term_i_17), term_m_24);
          ;
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
          {
            ATerm d_58 = NULL,e_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_58 = ATgetFirst((ATermList) t);
                e_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_58;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(e_58), term_m_24), term_m_24);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(e_58), term_n_24), term_m_24);
              }
          }
        }
      a_58 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_57 = ATgetFirst((ATermList) t);
          y_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_58);
      w_57 = t;
      t = y_57;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      z_57 = t;
      t = (ATerm) ATinsert(CheckATermList(z_57), x_57);
      b_10 = t;
      t = SSLsetAnnotations(b_10, w_57);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm q_58 = NULL,t_58 = NULL,u_58 = NULL;
        u_58 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_58 = ATgetFirst((ATermList) t);
            t_58 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm o_29 = NULL,r_29 = NULL,i_10 = NULL;
              t = SSLgetAnnotations(u_58);
              o_29 = t;
              t = t_58;
              t = escape_chars_0_0(t);
              r_29 = t;
              t = (ATerm) ATinsert(CheckATermList(r_29), q_58);
              i_10 = t;
              t = SSLsetAnnotations(i_10, o_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = u_58;
          }
      }
    }
  return(t);
}
ATerm z_9 (ATerm w_33, ATerm v_33, ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,f_59 = NULL,g_59 = NULL,g_30 = NULL,h_30 = NULL,j_30 = NULL,d_30 = NULL,e_30 = NULL,z_29 = NULL,a_30 = NULL,c_30 = NULL,w_29 = NULL,x_29 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_24), w_33);
  g_59 = t;
  t = SSL_concat_strings(g_59);
  x_29 = t;
  t = SSL_explode_string(x_29);
  t = escape_chars_0_0(t);
  w_29 = t;
  t = SSL_implode_string(w_29);
  a_30 = t;
  t = SSL_explode_string(a_30);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_30), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
  t = conc_0_0(t);
  z_29 = t;
  t = SSL_implode_string(z_29);
  c_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_24), w_33);
  f_59 = t;
  t = SSL_concat_strings(f_59);
  e_30 = t;
  t = SSL_explode_string(e_30);
  t = escape_chars_0_0(t);
  d_30 = t;
  t = SSL_implode_string(d_30);
  h_30 = t;
  t = SSL_explode_string(h_30);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_30), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
  t = conc_0_0(t);
  g_30 = t;
  t = SSL_implode_string(g_30);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_24), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_18), (ATerm) ATmakeAppl(sym_StringLit_1, d_59)), term_s_24)))), v_33), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_18), (ATerm) ATmakeAppl(sym_StringLit_1, c_59)), term_s_24)))));
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
  j_61 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_61 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
      m_61 = ATgetArgument(t, 2);
      i_61 = ATgetArgument(t, 3);
      {
        ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,p_32 = NULL,r_32 = NULL;
        t = l_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_32 = t;
        t = m_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
        t = conc_0_0(t);
        m_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_61, i_61);
        {
          ATerm u_24 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,y_10 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, k_61, i_61);
              r_33 = t;
              t = SSLgetAnnotations(r_33);
              q_33 = t;
              t = k_61;
              {
                ATerm e_25 = t;
                int f_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_33 = NULL;
                    t = term_u_11;
                    u_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_u_11, k_61);
                    t = c_10(u_33, k_61, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm g_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) g_25) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = k_61;
                    ;
                    LocalPopChoice(f_25);
                  }
                else
                  {
                    t = e_25;
                    {
                      ATerm y_33 = NULL,z_33 = NULL;
                      t = (ATerm) ATempty;
                      y_33 = t;
                      t = term_j_11;
                      z_33 = t;
                      t = term_h_25;
                      t = c_10(z_33, y_33, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm i_25 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) i_25) != ATmakeSymbol("o_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = k_61;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym__2, k_61, i_61);
                y_10 = t;
                t = SSLsetAnnotations(y_10, q_33);
                if(match_cons(t, sym__2))
                  {
                    o_33 = ATgetArgument(t, 0);
                    p_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_9(o_33, p_33, t);
              }
              ;
              LocalPopChoice(d_25);
            }
          else
            {
              t = u_24;
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_t_24), i_61));
            }
          p_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_32, (ATerm) ATinsert(ATempty, term_k_25));
          t = conc_0_0(t);
          r_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_e_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, r_32))), p_32);
        }
      }
    }
  else
    {
      ATerm g_34 = NULL,j_34 = NULL,k_34 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          k_61 = ATgetArgument(t, 0);
          l_61 = ATgetArgument(t, 1);
          m_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_61;
      t = map_1_0(TranslateVarDec_0_0, t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_61, m_61);
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,z_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, k_61, m_61);
            i_35 = t;
            t = SSLgetAnnotations(i_35);
            h_35 = t;
            t = k_61;
            {
              ATerm n_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_35 = NULL;
                  t = term_u_11;
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_u_11, k_61);
                  t = c_10(l_35, k_61, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm p_25 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) p_25) != ATmakeSymbol("q_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = k_61;
                  ;
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = n_25;
                  {
                    ATerm n_35 = NULL,o_35 = NULL;
                    t = (ATerm) ATempty;
                    n_35 = t;
                    t = term_j_11;
                    o_35 = t;
                    t = term_h_25;
                    t = c_10(o_35, n_35, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm q_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("o_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = k_61;
                  }
                }
              t = (ATerm) ATmakeAppl(sym__2, k_61, m_61);
              z_10 = t;
              t = SSLsetAnnotations(z_10, h_35);
              if(match_cons(t, sym__2))
                {
                  f_35 = ATgetArgument(t, 0);
                  g_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_9(f_35, g_35, t);
            }
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_t_24), m_61));
          }
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_34, (ATerm) ATinsert(ATempty, term_k_25));
        t = conc_0_0(t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_e_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, k_34))), j_34);
      }
    }
  return(t);
}
ATerm c_10 (ATerm r_64, ATerm s_64, ATerm t)
{
  ATerm t_61 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_64, s_64);
  t = t_10(r_64, s_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_61 = ATgetFirst((ATermList) t);
      {
        ATerm r_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_61;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  if(match_cons(t, sym__2))
    {
      g_62 = ATgetArgument(t, 0);
      h_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(g_62, h_62, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm d_10 (ATerm s_32, ATerm q_32, ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,b_62 = NULL,t_35 = NULL,w_35 = NULL,q_35 = NULL,r_35 = NULL,e_62 = NULL;
  t = q_32;
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            e_62 = ATgetArgument(t, 0);
            {
              ATerm u_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_25);
        t = e_62;
        t = foldr_3_0(c_5, d_5, e_5, t);
      }
    else
      {
        t = s_25;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm v_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_d_16;
      }
    y_61 = t;
    t = SSL_int_to_string(y_61);
    x_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_32, y_61);
    q_35 = t;
    t = term_h_16;
    r_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATmakeAppl(sym__2, s_32, y_61));
    t = c_10(r_35, q_35, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm w_25 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        b_62 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(s_32);
    w_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_35), term_i_17), (ATerm) ATinsert(ATempty, term_i_17));
    t = conc_0_0(t);
    t_35 = t;
    t = SSL_implode_string(t_35);
    z_61 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_62))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_62), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), (ATerm) ATmakeAppl(sym_IntConst_1, x_61)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, z_61)))))));
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      m_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(m_62, n_62, t);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL;
  t = map_1_0(f_5, t);
  t = concat_0_0(t);
  l_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_62, (ATerm) ATinsert(ATempty, term_c_26));
  t = conc_0_0(t);
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_m_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_62));
  return(t);
}
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_62 = ATgetFirst((ATermList) t);
      s_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_62;
  if(match_int(t, 95))
    {
      ATerm u_62 = NULL;
      t = s_62;
      t = t_0(t);
      u_62 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_62), term_f_26), term_f_26);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm w_62 = NULL;
          t = s_62;
          t = t_0(t);
          w_62 = t;
          t = (ATerm) ATinsert(CheckATermList(w_62), term_f_26);
        }
      else
        {
          ATerm y_62 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = s_62;
          t = t_0(t);
          y_62 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_62), term_f_26), term_g_26), term_f_26);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm u_113 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  c_63 = t;
  t = SSL_explode_string(c_63);
  {
    ATerm t_63 (ATerm t)
    {
      ATerm h_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_113(t_63, t);
          ;
          LocalPopChoice(i_26);
        }
      else
        {
          t = h_26;
          {
            ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
            n_63 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_63 = ATgetFirst((ATermList) t);
                m_63 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm g_36 = NULL,o_36 = NULL,e_11 = NULL;
                  t = SSLgetAnnotations(n_63);
                  g_36 = t;
                  t = m_63;
                  t = t_63(t);
                  o_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_36), l_63);
                  e_11 = t;
                  t = SSLsetAnnotations(e_11, g_36);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_63;
              }
          }
        }
      return(t);
    }
    t = t_63(t);
    b_63 = t;
    t = SSL_implode_string(b_63);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_63;
      t = j_110(t);
    }
  else
    {
      ATerm b_64 = NULL,c_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_63 = ATgetFirst((ATermList) t);
          y_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_63;
      t = l_110(t);
      b_64 = t;
      t = y_63;
      t = foldr_3_0(j_110, k_110, l_110, t);
      c_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
      t = k_110(t);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL;
  if(match_cons(t, sym__2))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(v_64, w_64, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm e_10 (ATerm f_32, ATerm e_32, ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,t_64 = NULL;
  t = e_32;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            t_64 = ATgetArgument(t, 0);
            {
              ATerm l_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_26);
        t = t_64;
        t = foldr_3_0(g_5, h_5, i_5, t);
      }
    else
      {
        t = j_26;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm m_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_d_16;
      }
    i_64 = t;
    t = f_32;
    t = escape_1_0(Cify_1_0, t);
    k_64 = t;
    t = SSL_int_to_string(i_64);
    l_64 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_64), term_o_26), k_64), term_n_26);
    o_64 = t;
    t = SSL_concat_strings(o_64);
    j_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_32, i_64);
    m_64 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_26, j_64);
    n_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_32, i_64), (ATerm) ATmakeAppl(sym_Defined_2, term_p_26, j_64));
    t = h_10(j_5, m_64, n_64, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_64), term_h_13)));
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      b_65 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(b_65, c_65, t);
  return(t);
}
ATerm f_10 (ATerm c_32, ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  t = c_32;
  t = map_1_0(k_5, t);
  x_64 = t;
  t = c_32;
  t = InitConstructors_0_0(t);
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_64, (ATerm) ATinsert(ATempty, y_64));
  t = conc_0_0(t);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, z_64);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  e_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_65;
    }
  else
    {
      ATerm l_5 (ATerm t)
      {
        t = not_null(g_65);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_65 = ATgetFirst((ATermList) t);
          if(((g_65 != NULL) && (g_65 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_65;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm n_65 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          n_65 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_26);
      {
        ATerm p_65 = NULL;
        t = n_65;
        t = map_1_0(TranslateType_0_0, t);
        p_65 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_13, (ATerm) ATmakeAppl(sym_ParamList_1, p_65));
      }
    }
  else
    {
      t = t_26;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm w_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_e_13;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_65;
  {
    ATerm a_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            w_65 = ATgetArgument(t, 0);
            {
              ATerm d_27 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_27);
        {
          ATerm b_66 = NULL;
          t = w_65;
          t = map_1_0(TranslateType_0_0, t);
          b_66 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, b_66))));
        }
      }
    else
      {
        t = a_27;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm e_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_65), term_h_13));
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm q_66 (ATerm t)
  {
    ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
    p_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_66 = ATgetFirst((ATermList) t);
        o_66 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_37 = NULL,n_37 = NULL,m_11 = NULL;
          t = SSLgetAnnotations(p_66);
          k_37 = t;
          t = o_66;
          t = q_66(t);
          n_37 = t;
          t = (ATerm) ATinsert(CheckATermList(n_37), n_66);
          m_11 = t;
          t = SSLsetAnnotations(m_11, k_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_66;
        t = u_104(t);
      }
    return(t);
  }
  t = q_66(t);
  return(t);
}
ATerm c_67 (ATerm u_66, ATerm t)
{
  ATerm v_66 = NULL;
  t = SSL_explode_term(u_66);
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_66;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  z_66 = t;
  if(match_cons(t, sym__2))
    {
      x_66 = ATgetArgument(t, 0);
      y_66 = ATgetArgument(t, 1);
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              t = y_66;
              return(t);
            }
            t = x_66;
            t = at_end_1_0(m_5, t);
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            t = c_67(z_66, t);
          }
      }
    }
  else
    {
      t = c_67(z_66, t);
    }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  ATerm j_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_67 = ATgetArgument(t, 0);
          g_67 = ATgetArgument(t, 1);
          {
            ATerm p_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_27);
      {
        ATerm l_67 = NULL;
        t = g_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        l_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_67, (ATerm) ATinsert(ATempty, term_e_13));
        t = conc_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, l_67)))));
      }
    }
  else
    {
      t = j_27;
      {
        ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            f_67 = ATgetArgument(t, 0);
            g_67 = ATgetArgument(t, 1);
            h_67 = ATgetArgument(t, 2);
            {
              ATerm y_27 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = g_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        p_67 = t;
        t = h_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        q_67 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_13)), q_67), p_67);
        t = concat_0_0(t);
        r_67 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, r_67)))));
      }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  x_67 = t;
  t = term_z_27;
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_27, x_67);
  t = j_10(y_67, x_67, t);
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, w_67);
  return(t);
}
ATerm g_10 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  t = y_31;
  t = map_1_0(SDefToDeclaration_0_0, t);
  s_67 = t;
  t = term_v_11;
  {
    ATerm a_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        t = map_1_0(q_5, t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = a_28;
        t = (ATerm) ATempty;
      }
    t_67 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(y_31), term_q_29)), s_67), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_m_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_s_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_v_28), term_z_28, term_h_13))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_28), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_g_29))), term_s_24)))))))), (ATerm) ATmakeAppl(sym_Signature_1, x_31)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_i_28, (ATerm) ATinsert(ATempty, term_l_28)))), t_67);
    t = concat_0_0(t);
    u_67 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, u_67);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  t = s_98(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = downup2_2_0(s_98, t_98, t);
      return(t);
    }
    t = SRTS_all(r_5, t);
    t = t_98(t);
  }
  return(t);
}
ATerm h_10 (ATerm i_125 (ATerm), ATerm e_70, ATerm c_70, ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  c_68 = t;
  t = i_125(t);
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_67, e_70, c_70);
  t = u_10(z_67, e_70, c_70, t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_68 = NULL;
        t = term_u_29;
        f_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_67, term_u_29);
        t = t_10(z_67, f_68, t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_68 = ATgetFirst((ATermList) t);
        b_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_29;
    d_68 = t;
    t = (ATerm) ATinsert(CheckATermList(b_68), (ATerm) ATinsert(CheckATermList(a_68), e_70));
    e_68 = t;
    t = SSL_table_put(z_67, d_68, e_68);
    t = c_68;
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  t = term_y_29;
  h_68 = t;
  t = term_f_30;
  i_68 = t;
  t = term_i_30;
  t = h_10(s_5, h_68, i_68, t);
  t = g_68;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = repeat_1_0(w_5, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,h_69 = NULL,i_69 = NULL,p_69 = NULL,q_69 = NULL;
      w_68 = t;
      if(match_cons(t, sym_Specification_1))
        {
          h_69 = ATgetArgument(t, 0);
          t = h_69;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_69 = ATgetFirst((ATermList) t);
              q_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_69;
          if(match_cons(t, sym_Signature_1))
            {
              p_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_69;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_68 = ATgetFirst((ATermList) t);
              v_68 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_68;
          if(match_cons(t, sym_Strategies_1))
            {
              u_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_68;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_68;
          t = g_10(p_69, u_68, t);
        }
      else
        {
          if(match_cons(t, sym_Signature_1))
            {
              h_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_69;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_69 = ATgetFirst((ATermList) t);
              q_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_69;
          if(match_cons(t, sym_Constructors_1))
            {
              p_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_69;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_68;
          t = f_10(p_69, t);
        }
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateDef_0_0(t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm o_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateStratMatchGuard_0_0(t);
                  ;
                  LocalPopChoice(p_30);
                }
              else
                {
                  t = o_30;
                  t = TranslateStrat_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_InitCachedTerms_0)))
    _fail(t);
  t = init_cached_terms_0_0(t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  t = downup2_2_0(u_5, v_5, t);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_5, t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
      }
  }
  return(t);
}
ATerm k_10 (ATerm h_55, ATerm i_55, ATerm t)
{
  ATerm w_69 = NULL;
  t = SSL_fputc(h_55, i_55);
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_69);
  return(t);
}
ATerm l_10 (ATerm v_58, ATerm w_58, ATerm t)
{
  ATerm x_69 = NULL;
  t = SSL_write_term_to_stream_text(v_58, w_58);
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_69);
  return(t);
}
ATerm n_10 (ATerm s_116 (ATerm), ATerm h_504, ATerm z_58, ATerm t)
{
  ATerm y_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_504, term_s_30);
  t = q_10(t);
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_69, z_58);
  t = s_116(t);
  t = fclose_0_0(t);
  t = z_58;
  return(t);
}
ATerm m_10 (ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm z_69 = NULL;
  t = SSL_write_term_to_stream_baf(r_58, s_58);
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_69);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      if(match_cons(t_30, sym_Stream_1))
        {
          o_38 = ATgetArgument(t_30, 0);
        }
      else
        _fail(t);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(o_38, p_38, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_39 = NULL,h_39 = NULL,i_39 = NULL,n_39 = NULL,o_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_30 = ATgetArgument(t, 0);
      if(match_cons(u_30, sym_Stream_1))
        {
          n_39 = ATgetArgument(u_30, 0);
        }
      else
        _fail(t);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(n_39, o_39, t);
  e_39 = t;
  t = term_v_30;
  h_39 = t;
  t = e_39;
  if(match_cons(t, sym_Stream_1))
    {
      i_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, e_39);
  t = k_10(h_39, i_39, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,l_70 = NULL,m_70 = NULL,p_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,b_71 = NULL,c_71 = NULL,c_72 = NULL,d_72 = NULL,p_11 = NULL,o_11 = NULL;
  j_70 = t;
  if(match_cons(t, sym__2))
    {
      t_70 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_70);
  s_70 = t;
  t = t_70;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_70 != NULL) && (i_70 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_5, t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = term_y_30;
        i_70 = t;
      }
    c_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_71, b_71);
    o_11 = t;
    t = SSLsetAnnotations(o_11, s_70);
    t = j_70;
    if(match_cons(t, sym__2))
      {
        m_70 = ATgetArgument(t, 0);
        p_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_70);
    l_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_70, (ATerm) ATmakeAppl(sym__2, not_null(i_70), p_70));
    p_11 = t;
    t = SSLsetAnnotations(p_11, l_70);
    r_70 = t;
    if(match_cons(t, sym__2))
      {
        c_72 = ATgetArgument(t, 0);
        d_72 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_30 = t;
      int a_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_37 = NULL,g_38 = NULL,i_38 = NULL,m_38 = NULL,n_38 = NULL,r_11 = NULL;
          t = SSLgetAnnotations(r_70);
          y_37 = t;
          t = c_72;
          t = fetch_1_0(a_6, t);
          g_38 = t;
          t = d_72;
          if(match_cons(t, sym__2))
            {
              m_38 = ATgetArgument(t, 0);
              n_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_10(e_6, m_38, n_38, t);
          i_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_38, i_38);
          r_11 = t;
          t = SSLsetAnnotations(r_11, y_37);
          ;
          LocalPopChoice(a_31);
        }
      else
        {
          t = z_30;
          {
            ATerm w_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,s_11 = NULL;
            t = SSLgetAnnotations(r_70);
            w_38 = t;
            t = d_72;
            if(match_cons(t, sym__2))
              {
                c_39 = ATgetArgument(t, 0);
                d_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_10(f_6, c_39, d_39, t);
            b_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_72, b_39);
            s_11 = t;
            t = SSLsetAnnotations(s_11, w_38);
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
ATerm apply_strategy_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  k_72 = t;
  t = dtime_0_0(t);
  t = k_72;
  t = s_118(t);
  j_72 = t;
  t = dtime_0_0(t);
  g_72 = t;
  t = j_72;
  if(match_cons(t, sym__2))
    {
      h_72 = ATgetArgument(t, 0);
      i_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_72), (ATerm) ATmakeAppl(sym_Runtime_1, g_72)), i_72);
  return(t);
}
ATerm y_72 (ATerm s_72, ATerm t)
{
  t = SSL_fclose(s_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  w_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_72 = ATgetArgument(t, 0);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_72);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = y_72(w_72, t);
          }
      }
    }
  else
    {
      t = y_72(w_72, t);
    }
  return(t);
}
ATerm o_10 (ATerm x_58, ATerm t)
{
  t = SSL_read_term_from_stream(x_58);
  return(t);
}
ATerm p_10 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm z_72 = NULL;
  t = SSL_fopen(j_55, k_55);
  z_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_73 = NULL;
  t = SSL_stdin_stream();
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_73 = NULL;
  t = SSL_stdout_stream();
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_73 = NULL;
  t = SSL_stderr_stream();
  c_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_73);
  return(t);
}
ATerm j_74 (ATerm i_73, ATerm t)
{
  ATerm j_73 = NULL;
  t = SSL_explode_term(i_73);
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_31 = ATgetArgument(t, 1);
        if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
          {
            j_73 = ATgetFirst((ATermList) e_31);
            {
              ATerm f_31 = (ATerm) ATgetNext((ATermList) e_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_74 (ATerm m_73, ATerm n_73, ATerm o_73, ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,u_73 = NULL,g_12 = NULL;
  t = SSLgetAnnotations(o_73);
  r_73 = t;
  t = m_73;
  if(match_cons(t, sym_Path_1))
    {
      u_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_73, n_73);
  g_12 = t;
  t = SSLsetAnnotations(g_12, r_73);
  if(match_cons(t, sym__2))
    {
      p_73 = ATgetArgument(t, 0);
      q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(p_73, q_73, t);
  return(t);
}
ATerm l_74 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,e_74 = NULL,k_12 = NULL;
  t = SSLgetAnnotations(y_73);
  b_74 = t;
  t = SSL_is_string(w_73);
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_74, x_73);
  k_12 = t;
  t = SSLsetAnnotations(k_12, b_74);
  if(match_cons(t, sym__2))
    {
      z_73 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(z_73, a_74, t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  if(match_cons(t, sym__2))
    {
      h_74 = ATgetArgument(t, 0);
      i_74 = ATgetArgument(t, 1);
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_74(g_74, t);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm i_31 = t;
              int j_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_74(h_74, i_74, g_74, t);
                  ;
                  LocalPopChoice(j_31);
                }
              else
                {
                  t = i_31;
                  t = l_74(h_74, i_74, g_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_74(g_74, t);
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  ATerm l_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_74 = NULL;
      p_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_74, term_r_31);
      t = q_10(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = l_31;
      t = debug_1_0(g_6, t);
      _fail(t);
    }
  n_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(o_74, t);
  m_74 = t;
  t = n_74;
  t = fclose_0_0(t);
  t = m_74;
  return(t);
}
ATerm fetch_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm n_75 (ATerm t)
  {
    ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
    k_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_75 = ATgetFirst((ATermList) t);
        m_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_40 = NULL,i_40 = NULL,o_12 = NULL;
          t = SSLgetAnnotations(k_75);
          f_40 = t;
          t = l_75;
          t = o_104(t);
          i_40 = t;
          t = (ATerm) ATinsert(CheckATermList(m_75), i_40);
          o_12 = t;
          t = SSLsetAnnotations(o_12, f_40);
          ;
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          {
            ATerm v_40 = NULL,b_41 = NULL,d_13 = NULL;
            t = SSLgetAnnotations(k_75);
            v_40 = t;
            t = m_75;
            t = n_75(t);
            b_41 = t;
            t = (ATerm) ATinsert(CheckATermList(b_41), l_75);
            d_13 = t;
            t = SSLsetAnnotations(d_13, v_40);
          }
        }
    }
    return(t);
  }
  t = n_75(t);
  return(t);
}
ATerm j_10 (ATerm k_50, ATerm l_50, ATerm t)
{
  t = SSL_strcat(k_50, l_50);
  return(t);
}
ATerm debug_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  ATerm q_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
  q_75 = t;
  t = q_116(t);
  t_75 = t;
  t = term_p_9;
  u_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_75), t_75);
  v_75 = t;
  t = SSL_printnl(u_75, v_75);
  t = q_75;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_76 = NULL;
      c_76 = t;
      t = SSL_is_string(c_76);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm b_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_6, t);
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = b_32;
            {
              ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
              i_76 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_76 = ATgetArgument(t, 0);
                  t = j_76;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_76 = ATgetArgument(t, 0);
                      t = j_76;
                      {
                        ATerm g_32 = t;
                        int h_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_32);
                          }
                        else
                          {
                            t = g_32;
                            t = debug_1_0(m_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_76 = NULL,p_76 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_76 = ATgetArgument(t, 0);
                          k_76 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_76;
                      t = eval_config_0_0(t);
                      o_76 = t;
                      t = k_76;
                      t = eval_config_0_0(t);
                      p_76 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_76, p_76);
                      t = j_10(o_76, p_76, t);
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
  ATerm t_76 = NULL,u_76 = NULL;
  t_76 = t;
  t = term_x_10;
  u_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, t_76);
  t = t_10(u_76, t_76, t);
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_76 = NULL,w_76 = NULL;
        t = eval_config_0_0(t);
        v_76 = t;
        t = term_x_10;
        w_76 = t;
        t = SSL_table_put(w_76, t_76, v_76);
        t = v_76;
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  ATerm a_77 = NULL;
  a_77 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_77 = NULL;
        t = term_t_32;
        t = get_config_0_0(t);
        c_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_77, term_u_32);
        t = geq_0_0(t);
        t = a_77;
        t = d_118(t);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = a_77;
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm f_77 = NULL;
  f_77 = t;
  if(match_string(t, "-k"))
    {
      t = f_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_77;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  t = SSL_string_to_int(g_77);
  h_77 = t;
  t = term_v_32;
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, h_77);
  t = w_10(i_77, h_77, t);
  t = g_77;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_6, o_6, p_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm k_77 = NULL;
  k_77 = t;
  if(match_string(t, "-S"))
    {
      t = k_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_77;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL;
  t = term_t_32;
  l_77 = t;
  t = term_d_16;
  m_77 = t;
  t = term_x_32;
  t = w_10(l_77, m_77, t);
  t = term_y_32;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  n_77 = t;
  t = SSL_string_to_int(n_77);
  o_77 = t;
  t = term_t_32;
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, o_77);
  t = w_10(p_77, o_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_77);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  t = term_b_33;
  q_77 = t;
  t = term_o_9;
  r_77 = t;
  t = term_c_33;
  t = w_10(q_77, r_77, t);
  t = term_d_33;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, r_6, u_6, t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_6, z_6, a_7, t);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = Option_3_0(b_7, c_7, e_7, t);
          }
      }
    }
  return(t);
}
ATerm w_10 (ATerm n_70, ATerm o_70, ATerm t)
{
  ATerm s_77 = NULL;
  t = term_x_10;
  s_77 = t;
  t = SSL_table_put(s_77, n_70, o_70);
  t = (ATerm) ATmakeAppl(sym__3, term_x_10, n_70, o_70);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
      t = term_o_9;
      t = i_0(t);
      x_77 = t;
      t = term_j_33;
      y_77 = t;
      t = term_k_33;
      z_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_33, term_k_33, x_77);
      t = u_10(y_77, z_77, x_77, t);
      _fail(t);
    }
  else
    {
      ATerm c_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_77 = ATgetFirst((ATermList) t);
          w_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_77;
      t = d_0(t);
      t = term_o_9;
      t = g_0(t);
      c_78 = t;
      t = (ATerm) ATinsert(CheckATermList(w_77), c_78);
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm e_78 = NULL;
  e_78 = t;
  if(match_string(t, "-o"))
    {
      t = e_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_78;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL;
  f_78 = t;
  t = term_l_33;
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_33, f_78);
  t = w_10(g_78, f_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_78);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, i_7, t);
  return(t);
}
ATerm u_10 (ATerm g_64, ATerm h_64, ATerm f_64, ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
  i_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_64, h_64);
  {
    ATerm n_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_33 = ATgetArgument(t, 0);
            ATerm x_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_64, h_64);
        t = t_10(g_64, h_64, t);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = n_33;
        t = (ATerm) ATempty;
      }
    j_78 = t;
    t = (ATerm) ATinsert(CheckATermList(j_78), f_64);
    k_78 = t;
    t = SSL_table_put(g_64, h_64, k_78);
    t = i_78;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
      t = term_o_9;
      t = r_0(t);
      v_78 = t;
      t = term_j_33;
      w_78 = t;
      t = term_k_33;
      x_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_33, term_k_33, v_78);
      t = u_10(w_78, x_78, v_78, t);
      _fail(t);
    }
  else
    {
      ATerm b_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_78 = ATgetFirst((ATermList) t);
          s_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_78 = ATgetFirst((ATermList) t);
          u_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_78;
      t = n_0(t);
      t = t_78;
      t = p_0(t);
      b_79 = t;
      t = (ATerm) ATinsert(CheckATermList(u_78), b_79);
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm d_79 = NULL;
  d_79 = t;
  if(match_string(t, "-i"))
    {
      t = d_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_79;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  e_79 = t;
  t = term_a_34;
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_34, e_79);
  t = w_10(f_79, e_79, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_79);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, l_7, m_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_9;
  t = whoami_0_0(t);
  g_79 = t;
  t = term_p_9;
  i_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_34), g_79);
  j_79 = t;
  t = SSL_printnl(i_79, j_79);
  t = term_a_10;
  h_79 = t;
  t = SSL_exit(h_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_10 (ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_52, w_52);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = SSL_addr(v_52, w_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
  l_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_79;
      t = h_110(t);
    }
  else
    {
      ATerm q_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_79 = ATgetFirst((ATermList) t);
          n_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_79;
      t = foldr_2_0(h_110, i_110, t);
      q_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_79, q_79);
      t = i_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm m_42 = NULL,q_42 = NULL;
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(m_42, q_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_79 = NULL,z_41 = NULL,g_42 = NULL;
  t = times_0_0(t);
  g_42 = t;
  t = SSL_explode_term(g_42);
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_41;
  t = foldr_2_0(o_7, q_7, t);
  t_79 = t;
  t = SSL_TicksToSeconds(t_79);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
  e_80 = t;
  if(match_cons(t, sym__2))
    {
      f_80 = ATgetArgument(t, 0);
      g_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_80;
        if((f_80 != t))
          {
            _fail(t);
          }
        t = e_80;
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = i_34;
        t = (ATerm) ATmakeAppl(sym__2, f_80, g_80);
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_80, g_80);
              ;
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              t = SSL_gtr(f_80, g_80);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_80, g_80);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm k_80 = NULL;
  k_80 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_80 = NULL;
        t = term_t_32;
        t = get_config_0_0(t);
        m_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_80, term_a_10);
        t = geq_0_0(t);
        t = k_80;
        t = c_118(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = k_80;
      }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,r_80 = NULL,s_80 = NULL;
  t = run_time_0_0(t);
  o_80 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  p_80 = t;
  t = term_p_9;
  r_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), o_80), term_q_34), p_80);
  s_80 = t;
  t = SSL_printnl(r_80, s_80);
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), o_80), term_q_34), p_80));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_80 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_16;
  t_80 = t;
  t = SSL_exit(t_80);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL;
  c_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_81 = ATgetArgument(t, 0);
          {
            ATerm q_43 = NULL,i_13 = NULL;
            t = SSLgetAnnotations(c_81);
            q_43 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_81);
            i_13 = t;
            t = SSLsetAnnotations(i_13, q_43);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = fetch_1_0(s_7, t);
    }
  t = q_119(t);
  return(t);
}
ATerm map_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm s_81 (ATerm t)
  {
    ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
    p_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_81;
      }
    else
      {
        ATerm c_44 = NULL,j_44 = NULL,o_44 = NULL,k_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_81 = ATgetFirst((ATermList) t);
            r_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_81);
        c_44 = t;
        t = q_81;
        t = e_104(t);
        j_44 = t;
        t = r_81;
        t = s_81(t);
        o_44 = t;
        t = (ATerm) ATinsert(CheckATermList(o_44), j_44);
        k_13 = t;
        t = SSLsetAnnotations(k_13, c_44);
      }
    return(t);
  }
  t = s_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_81 = ATgetFirst((ATermList) t);
      w_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_82 = NULL,b_82 = NULL;
        ATerm x_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_82)), not_null(b_82));
          return(t);
        }
        t = w_81;
        t = l_0(t);
        if(((a_82 != NULL) && (a_82 != t)))
          _fail(t);
        else
          a_82 = t;
        t = v_81;
        t = k_0(t);
        if(((b_82 != NULL) && (b_82 != t)))
          _fail(t);
        else
          b_82 = t;
        t = w_81;
        t = reverse_acc_2_0(k_0, x_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_9;
      t = l_0(t);
    }
  return(t);
}
ATerm t_10 (ATerm x_65, ATerm y_65, ATerm t)
{
  t = SSL_table_get(x_65, y_65);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,m_13 = NULL;
  h_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_82);
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_82);
  m_13 = t;
  t = SSLsetAnnotations(m_13, f_82);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm j_82 = NULL;
  j_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_82), term_v_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL;
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = fetch_1_0(y_7, t);
    }
  t = term_y_34;
  t = echo_0_0(t);
  t = term_j_33;
  d_82 = t;
  t = term_k_33;
  e_82 = t;
  t = term_z_34;
  t = t_10(d_82, e_82, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(d_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  l_82 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_35 = ATgetFirst((ATermList) t);
                ATerm d_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_82;
          }
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = (ATerm) ATinsert(ATempty, l_82);
      }
    m_82 = t;
    t = term_y_30;
    n_82 = t;
    t = SSL_printnl(n_82, m_82);
    t = l_82;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL;
  t = term_e_35;
  r_82 = t;
  t = term_o_9;
  s_82 = t;
  t = term_j_35;
  t = w_10(r_82, s_82, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  t = term_e_35;
  v_82 = t;
  t = term_o_9;
  w_82 = t;
  t = term_j_35;
  t = w_10(v_82, w_82, t);
  t = term_m_35;
  t_82 = t;
  t = term_o_9;
  u_82 = t;
  t = term_p_35;
  t = w_10(t_82, u_82, t);
  t = term_s_35;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, g_8, t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = v_35;
      t = Option_3_0(i_8, m_8, n_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,r_13 = NULL;
  c_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_82 = ATgetFirst((ATermList) t);
      z_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_83);
  x_82 = t;
  t = y_82;
  t = r_75(t);
  a_83 = t;
  t = z_82;
  t = s_75(t);
  b_83 = t;
  t = (ATerm) ATinsert(CheckATermList(b_83), a_83);
  r_13 = t;
  t = SSLsetAnnotations(r_13, x_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,m_83 = NULL,n_83 = NULL,u_13 = NULL;
  h_83 = t;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_36;
        t = h_122(t);
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
      }
    t = h_83;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_83 = ATgetFirst((ATermList) t);
        k_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_83);
    i_83 = t;
    t = term_d_34;
    n_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_34, j_83);
    t = w_10(n_83, j_83, t);
    t = k_83;
    {
      ATerm x_83 (ATerm t)
      {
        ATerm f_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_36 = t;
            int l_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_83 = NULL;
                q_83 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_83;
                ;
                LocalPopChoice(l_36);
              }
            else
              {
                t = k_36;
                t = h_122(t);
                t = Cons_2_0(_id, x_83, t);
              }
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = f_36;
            {
              ATerm t_83 = NULL,u_83 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_83 = ATgetFirst((ATermList) t);
                  u_83 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_83), (ATerm) ATmakeAppl(sym_Undefined_1, t_83));
            }
          }
        return(t);
      }
      t = x_83(t);
      m_83 = t;
      t = (ATerm) ATinsert(CheckATermList(m_83), (ATerm) ATmakeAppl(sym_Program_1, j_83));
      u_13 = t;
      t = SSLsetAnnotations(u_13, i_83);
    }
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm j_84 = NULL;
  j_84 = t;
  if(match_string(t, "--help"))
    {
      t = j_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_84;
        }
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL;
  t = term_u_34;
  k_84 = t;
  t = term_o_9;
  l_84 = t;
  t = term_r_36;
  t = w_10(k_84, l_84, t);
  t = term_u_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  e_84 = t;
  t = term_j_33;
  g_84 = t;
  t = term_k_33;
  h_84 = t;
  t = (ATerm) ATempty;
  i_84 = t;
  t = SSL_table_put(g_84, h_84, i_84);
  t = e_84;
  {
    ATerm p_8 (ATerm t)
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_122(t);
          ;
          LocalPopChoice(a_37);
        }
      else
        {
          t = z_36;
          {
            ATerm b_37 = t;
            int c_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_8, r_8, u_8, t);
                ;
                LocalPopChoice(c_37);
              }
            else
              {
                t = b_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_8, t);
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_84 = NULL;
          s_84 = t;
          {
            ATerm i_37 = t;
            int j_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_45 = NULL;
                t = s_84;
                {
                  ATerm l_37 = t;
                  int m_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_37);
                    }
                  else
                    {
                      t = l_37;
                      t = fetch_1_0(w_8, t);
                    }
                  t = s_84;
                  t = default_system_usage_0_0(t);
                  t = term_d_16;
                  a_45 = t;
                  t = SSL_exit(a_45);
                }
                ;
                LocalPopChoice(j_37);
              }
            else
              {
                t = i_37;
                {
                  ATerm k_45 = NULL;
                  t = term_e_35;
                  t = get_config_0_0(t);
                  t = s_84;
                  t = default_system_about_0_0(t);
                  t = term_d_16;
                  k_45 = t;
                  t = SSL_exit(k_45);
                }
              }
          }
          ;
          LocalPopChoice(e_37);
        }
      else
        {
          t = d_37;
          {
            ATerm o_37 = t;
            int p_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
                ATerm x_8 (ATerm t)
                {
                  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,x_13 = NULL;
                  y_84 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_84 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_84);
                  w_84 = t;
                  t = x_84;
                  if(((c_84 != NULL) && (c_84 != t)))
                    _fail(t);
                  else
                    c_84 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_84);
                  x_13 = t;
                  t = SSLsetAnnotations(x_13, w_84);
                  return(t);
                }
                t = fetch_1_0(x_8, t);
                t = term_p_9;
                u_84 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_84)), term_r_37);
                v_84 = t;
                t = SSL_printnl(u_84, v_84);
                t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_84)), term_r_37));
                t = default_system_usage_0_0(t);
                t = term_a_10;
                t_84 = t;
                t = SSL_exit(t_84);
                ;
                LocalPopChoice(p_37);
              }
            else
              {
                t = o_37;
              }
          }
        }
      d_84 = t;
      t = term_j_33;
      f_84 = t;
      t = SSL_table_destroy(f_84);
      t = d_84;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  t = parse_options_1_0(s_119, t);
  d_85 = t;
  t = term_s_37;
  g_85 = t;
  t = SSL_table_create(g_85);
  t = term_s_37;
  e_85 = t;
  t = term_w_37;
  f_85 = t;
  t = SSL_table_put(e_85, f_85, d_85);
  t = d_85;
  t = u_119(t);
  {
    ATerm x_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_119, t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = x_37;
        {
          ATerm b_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_38);
            }
          else
            {
              t = b_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = if_verbose2_1_0(k_9, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL;
  t = term_e_38;
  h_85 = t;
  t = term_o_9;
  i_85 = t;
  t = term_k_38;
  t = w_10(h_85, i_85, t);
  t = term_l_38;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL;
  j_85 = t;
  t = term_d_34;
  t = get_config_0_0(t);
  k_85 = t;
  t = term_p_9;
  l_85 = t;
  t = (ATerm) ATinsert(ATempty, k_85);
  m_85 = t;
  t = SSL_printnl(l_85, m_85);
  t = j_85;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_119(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        {
          ATerm t_38 = t;
          int x_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(x_38);
            }
          else
            {
              t = t_38;
              {
                ATerm a_39 = t;
                int g_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_39);
                  }
                else
                  {
                    t = a_39;
                    {
                      ATerm j_39 = t;
                      int k_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_9, e_9, j_9, t);
                          ;
                          LocalPopChoice(k_39);
                        }
                      else
                        {
                          t = j_39;
                          {
                            ATerm r_39 = t;
                            int s_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_39);
                              }
                            else
                              {
                                t = r_39;
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
  ATerm c_9 (ATerm t)
  {
    ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
    o_85 = t;
    {
      ATerm t_39 = t;
      int u_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_85 != NULL) && (n_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_9, t);
          ;
          LocalPopChoice(u_39);
        }
      else
        {
          t = t_39;
          t = term_v_39;
          n_85 = t;
        }
      t = not_null(n_85);
      t = ReadFromFile_0_0(t);
      p_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_85, p_85);
      t = apply_strategy_1_0(b_119, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_8, d_119, a_9, c_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
