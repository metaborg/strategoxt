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
ATerm term_x_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_i_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_j_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_l_36;
ATerm term_h_36;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_c_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_v_31;
ATerm term_l_31;
ATerm term_g_31;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_p_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_s_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_v_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
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
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_g_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
void init_constant_terms (void)
{
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Id_1, term_e_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_12, (ATerm) ATempty);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Id_1, term_m_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_TypeId_1, term_r_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_12, (ATerm) ATempty);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATempty);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_13, term_g_13);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Id_1, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Id_1, term_m_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Id_1, term_x_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_1, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_IntConst_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Id_1, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Id_1, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Id_1, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, term_w_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Id_1, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_18, (ATerm) ATempty);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_18, term_g_13);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Id_1, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_1, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_19, (ATerm) ATempty);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_19, term_g_13);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Id_1, term_h_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Id_1, term_t_19);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_i_19);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_k_18);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Id_1, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Equal_2, term_x_20, term_i_17);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Id_1, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_21, (ATerm) ATempty);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, term_k_18);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Id_1, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_h_21, term_i_17);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Id_1, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Id_1, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_22, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_22, term_g_13);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Id_1, term_e_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Id_1, term_j_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Id_1, term_p_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Id_1, term_t_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_v_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_22, (ATerm) ATempty);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_TypeName_2, term_x_22, term_g_13);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Id_1, term_k_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_22, term_k_18);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Id_1, term_i_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Return_1, term_k_18);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATempty);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_k_18, term_g_13);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_13, term_a_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Id_1, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Id_1, term_q_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_12, (ATerm) ATempty);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_s_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Id_1, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_26, (ATerm) ATempty);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_28);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_28, (ATerm) ATempty);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Some_1, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_12, term_l_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Id_1, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_28, (ATerm) ATempty);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Id_1, term_t_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Id_1, term_c_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_SDefT_4, term_l_29, (ATerm)ATempty, (ATerm)ATempty, term_y_29);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Op_2, term_i_30, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_30, term_x_17);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_l_30, term_p_30);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_f_16);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_16);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_r_9);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_a_35);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_r_9);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_p_37, term_r_9);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__2, term_t_36, term_r_9);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_r_9);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm k_9 (ATerm a_86, ATerm b_86, ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
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
ATerm l_9 (ATerm z_42, ATerm b_43, ATerm a_43, ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm w_114 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm e_3 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_112 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm o_9 (ATerm l_42, ATerm o_42, ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm p_9 (ATerm b_47, ATerm a_47, ATerm);
ATerm q_9 (ATerm s_208, ATerm x_46, ATerm z_46, ATerm);
ATerm new_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm t_113 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm s_113 (ATerm), ATerm);
ATerm q_49 (ATerm f_27, ATerm g_27, ATerm h_27, ATerm j_27, ATerm);
ATerm r_49 (ATerm e_29, ATerm f_29, ATerm g_29, ATerm);
ATerm g_51 (ATerm t_29, ATerm w_29, ATerm x_29, ATerm);
ATerm h_51 (ATerm f_30, ATerm j_30, ATerm k_30, ATerm n_30, ATerm);
ATerm i_51 (ATerm x_30, ATerm y_30, ATerm b_31, ATerm c_31, ATerm);
ATerm j_51 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm s_31, ATerm);
ATerm k_51 (ATerm y_31, ATerm z_31, ATerm c_32, ATerm d_32, ATerm e_32, ATerm h_32, ATerm o_32, ATerm p_32, ATerm);
ATerm l_51 (ATerm t_33, ATerm v_33, ATerm w_33, ATerm x_33, ATerm y_33, ATerm a_34, ATerm);
ATerm m_51 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm r_34, ATerm s_34, ATerm t_34, ATerm);
ATerm n_51 (ATerm e_35, ATerm f_35, ATerm j_35, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm s_9 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm y_0, ATerm b_1, ATerm v_0, ATerm);
ATerm thread_map_1_0 (ATerm c_126 (ATerm), ATerm);
ATerm u_55 (ATerm g_53, ATerm h_53, ATerm i_53, ATerm j_53, ATerm k_53, ATerm);
ATerm v_55 (ATerm g_54, ATerm h_54, ATerm i_54, ATerm j_54, ATerm);
ATerm w_55 (ATerm o_54, ATerm p_54, ATerm q_54, ATerm r_54, ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm x_9 (ATerm h_49, ATerm g_49, ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm a_10 (ATerm x_79, ATerm y_79, ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm b_10 (ATerm d_48, ATerm b_48, ATerm);
ATerm f_5 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm u_128 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm c_10 (ATerm q_47, ATerm p_47, ATerm);
ATerm k_5 (ATerm);
ATerm d_10 (ATerm n_47, ATerm);
ATerm concat_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_119 (ATerm), ATerm);
ATerm p_64 (ATerm h_64, ATerm);
ATerm conc_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm e_10 (ATerm i_47, ATerm j_47, ATerm);
ATerm downup2_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm f_10 (ATerm h_140 (ATerm), ATerm k_85, ATerm i_85, ATerm);
ATerm s_5 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm i_10 (ATerm n_70, ATerm o_70, ATerm);
ATerm j_10 (ATerm b_74, ATerm c_74, ATerm);
ATerm l_10 (ATerm r_131 (ATerm), ATerm e_539, ATerm f_74, ATerm);
ATerm k_10 (ATerm x_73, ATerm y_73, ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_133 (ATerm), ATerm);
ATerm p_69 (ATerm j_69, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_10 (ATerm d_74, ATerm);
ATerm n_10 (ATerm p_70, ATerm q_70, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_71 (ATerm z_69, ATerm);
ATerm h_71 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm);
ATerm i_71 (ATerm t_70, ATerm u_70, ATerm v_70, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm h_10 (ATerm r_65, ATerm s_65, ATerm);
ATerm debug_1_0 (ATerm p_131 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm t_10 (ATerm t_85, ATerm u_85, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_10 (ATerm m_79, ATerm n_79, ATerm l_79, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_10 (ATerm b_68, ATerm c_68, ATerm);
ATerm foldr_2_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_133 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_7 (ATerm);
ATerm need_help_1_0 (ATerm p_134 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm q_10 (ATerm d_81, ATerm e_81, ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_137 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm parse_options_1_0 (ATerm f_137 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm j_9 (ATerm);
ATerm m_9 (ATerm);
ATerm iowrap_3_0 (ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_0 = NULL,s_0 = NULL,x_0 = NULL,d_1 = NULL,e_1 = NULL;
  p_0 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  s_0 = t;
  t = term_u_9;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), s_0), term_v_9);
  e_1 = t;
  t = SSL_printnl(d_1, e_1);
  t = term_g_10;
  x_0 = t;
  t = SSL_exit(x_0);
  t = p_0;
  return(t);
}
ATerm k_9 (ATerm a_86, ATerm b_86, ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
  t = a_86;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, b_86);
    t = conc_0_0(t);
    g_1 = t;
    t = term_w_10;
    i_1 = t;
    t = SSL_table_put(i_1, a_86, g_1);
    t = (ATerm) ATmakeAppl(sym__3, term_w_10, a_86, g_1);
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm j_1 = NULL,m_1 = NULL,n_1 = NULL;
  t = term_z_10;
  t = debug_1_0(l_1, t);
  j_1 = t;
  t = (ATerm) ATempty;
  m_1 = t;
  t = term_c_11;
  n_1 = t;
  t = term_d_11;
  t = f_10(s_1, m_1, n_1, t);
  t = j_1;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_h_11;
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
  t = term_m_11;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_m_11);
  t = f_10(d_2, o_1, p_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, o_1);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_r_11;
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
  t = term_t_11;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, q_1);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATempty, q_1));
  t = k_9(r_1, t_1, t);
  t = (ATerm) ATmakeAppl(sym_Include_1, q_1);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_0, c_1, f_1, t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_1, a_2, b_2, t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            t = ArgOption_3_0(i_2, k_2, m_2, t);
          }
      }
    }
  return(t);
}
ATerm l_9 (ATerm z_42, ATerm b_43, ATerm a_43, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, b_43)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_43), term_a_12, a_43)));
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
  t = l_9(x_1, y_1, z_1, t);
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
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_l_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_12, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_l_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_1));
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm j_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      {
        ATerm q_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_2), term_g_13)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  ATerm i_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL,q_0 = NULL,t_0 = NULL;
      t = (ATerm) ATempty;
      q_0 = t;
      t = term_l_13;
      t_0 = t;
      t = term_m_13;
      t = a_10(t_0, q_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm n_13 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) n_13) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          h_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_2;
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = i_13;
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
ATerm oncetd_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm q_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_114(t);
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
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,k_1 = NULL,u_1 = NULL,u_0 = NULL;
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
      t = listbu1_1_0(t_2, t);
      u_1 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), b_3);
      u_0 = t;
      t = SSLsetAnnotations(u_0, k_1);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_2(t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
          }
      }
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      t = t_2(t);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_14 = ATgetFirst((ATermList) t);
      if(match_cons(a_14, sym_Compound_2))
        {
          ATerm b_14 = ATgetArgument(a_14, 0);
          if(((ATgetType(b_14) != AT_LIST) || !(ATisEmpty(b_14))))
            _fail(t);
          o_5 = ATgetArgument(a_14, 1);
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
  ATerm i_6 = NULL,o_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_14 = ATgetFirst((ATermList) t);
      if(match_cons(c_14, sym_Compound_2))
        {
          ATerm d_14 = ATgetArgument(c_14, 0);
          if(((ATgetType(d_14) != AT_LIST) || !(ATisEmpty(d_14))))
            _fail(t);
          i_6 = ATgetArgument(c_14, 1);
        }
      else
        _fail(t);
      o_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, o_6);
  t = conc_0_0(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm c_7 = NULL,g_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_14 = ATgetFirst((ATermList) t);
      if(match_cons(e_14, sym_Compound_2))
        {
          ATerm f_14 = ATgetArgument(e_14, 0);
          if(((ATgetType(f_14) != AT_LIST) || !(ATisEmpty(f_14))))
            _fail(t);
          c_7 = ATgetArgument(e_14, 1);
        }
      else
        _fail(t);
      g_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_7, g_7);
  t = conc_0_0(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm v_7 = NULL,x_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_14 = ATgetFirst((ATermList) t);
      if(match_cons(g_14, sym_Compound_2))
        {
          ATerm h_14 = ATgetArgument(g_14, 0);
          if(((ATgetType(h_14) != AT_LIST) || !(ATisEmpty(h_14))))
            _fail(t);
          v_7 = ATgetArgument(g_14, 1);
        }
      else
        _fail(t);
      x_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_7, x_7);
  t = conc_0_0(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_14 = ATgetFirst((ATermList) t);
      if(match_cons(i_14, sym_Compound_2))
        {
          ATerm j_14 = ATgetArgument(i_14, 0);
          if(((ATgetType(j_14) != AT_LIST) || !(ATisEmpty(j_14))))
            _fail(t);
          b_8 = ATgetArgument(i_14, 1);
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
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,j_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      j_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
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
                  t = m_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      n_4 = ATgetArgument(t, 0);
                      q_4 = ATgetArgument(t, 1);
                      t = q_4;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = n_4;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, j_4), c_4);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, j_4, m_4);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, j_4, m_4);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, j_4, m_4);
                    }
                }
              else
                {
                  t = m_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      n_4 = ATgetArgument(t, 0);
                      q_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, j_4), c_4);
                }
            }
          else
            {
              t = m_4;
              if(match_cons(t, sym_Compound_2))
                {
                  n_4 = ATgetArgument(t, 0);
                  q_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, j_4), c_4);
            }
        }
      else
        {
          t = m_4;
          if(match_cons(t, sym_Compound_2))
            {
              n_4 = ATgetArgument(t, 0);
              q_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, j_4), c_4);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_4 = ATgetFirst((ATermList) t);
          m_4 = (ATerm) ATgetNext((ATermList) t);
          t = j_4;
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
          t = (ATerm) ATmakeAppl(sym__2, g_4, m_4);
          t = conc_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              j_4 = ATgetArgument(t, 0);
              m_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_4;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_4 = ATgetFirst((ATermList) t);
              q_4 = (ATerm) ATgetNext((ATermList) t);
              t = q_4;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      o_4 = ATgetArgument(t, 0);
                      p_4 = ATgetArgument(t, 1);
                      {
                        ATerm k_14 = t;
                        int l_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_5 = NULL;
                            t = m_4;
                            t = listbu1_1_0(v_2, t);
                            n_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, j_4, n_5);
                            ;
                            LocalPopChoice(l_14);
                          }
                        else
                          {
                            t = k_14;
                            {
                              ATerm m_14 = t;
                              int n_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_5 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, j_4, o_4);
                                  t = conc_0_0(t);
                                  t_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, t_5, p_4);
                                  ;
                                  LocalPopChoice(n_14);
                                }
                              else
                                {
                                  t = m_14;
                                  {
                                    ATerm d_6 = NULL,e_6 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, j_4, o_4);
                                    t = conc_0_0(t);
                                    d_6 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
                                    t = conc_0_0(t);
                                    e_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, d_6, e_6);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm h_6 = NULL;
                      t = m_4;
                      t = listbu1_1_0(w_2, t);
                      h_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, j_4, h_6);
                    }
                }
              else
                {
                  t = n_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      o_4 = ATgetArgument(t, 0);
                      p_4 = ATgetArgument(t, 1);
                      {
                        ATerm p_14 = t;
                        int s_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_6 = NULL;
                            t = m_4;
                            t = listbu1_1_0(x_2, t);
                            w_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, j_4, w_6);
                            ;
                            LocalPopChoice(s_14);
                          }
                        else
                          {
                            t = p_14;
                            {
                              ATerm o_7 = NULL,p_7 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, j_4, o_4);
                              t = conc_0_0(t);
                              o_7 = t;
                              t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
                              t = conc_0_0(t);
                              p_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, o_7, p_7);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_7 = NULL;
                      t = m_4;
                      t = listbu1_1_0(y_2, t);
                      u_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, j_4, u_7);
                    }
                }
            }
          else
            {
              ATerm a_8 = NULL;
              t = m_4;
              t = listbu1_1_0(e_3, t);
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, j_4, a_8);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_112(t);
        t = j_8(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
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
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Op_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(b_12);
        i_3 = t;
        t = c_12;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = d_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, c_12, d_12);
        q_2 = t;
        t = SSLsetAnnotations(q_2, i_3);
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,s_2 = NULL,r_2 = NULL;
              t = SSLgetAnnotations(b_12);
              s_3 = t;
              t = c_12;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = d_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_3 = ATgetFirst((ATermList) t);
                  x_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_12);
              v_3 = t;
              t = x_3;
              t = Cons_2_0(proper_list_0_0, f_3, t);
              y_3 = t;
              t = (ATerm) ATinsert(CheckATermList(y_3), w_3);
              r_2 = t;
              t = SSLsetAnnotations(r_2, v_3);
              z_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, c_12, z_3);
              s_2 = t;
              t = SSLsetAnnotations(s_2, s_3);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              {
                ATerm v_5 = NULL,z_5 = NULL,u_2 = NULL;
                t = SSLgetAnnotations(b_12);
                v_5 = t;
                t = c_12;
                {
                  ATerm z_14 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm j_6 = NULL;
                      j_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = j_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = j_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = z_14;
                    }
                  z_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, z_5, d_12);
                  u_2 = t;
                  t = SSLsetAnnotations(u_2, v_5);
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
  t = term_a_15;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm o_9 (ATerm l_42, ATerm o_42, ATerm t)
{
  ATerm u_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,o_14 = NULL,q_14 = NULL;
  t = l_42;
  if(match_cons(t, sym_Op_2))
    {
      q_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
      {
        ATerm r_6 = NULL,u_6 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(l_42);
        r_6 = t;
        t = o_14;
        t = map_1_0(Cache_0_0, t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, q_14, u_6);
        z_2 = t;
        t = SSLsetAnnotations(z_2, r_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          q_14 = ATgetArgument(t, 0);
          o_14 = ATgetArgument(t, 1);
          {
            ATerm b_7 = NULL,f_7 = NULL,h_7 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(l_42);
            b_7 = t;
            t = q_14;
            t = Cache_0_0(t);
            f_7 = t;
            t = o_14;
            t = Cache_0_0(t);
            h_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, f_7, h_7);
            d_3 = t;
            t = SSLsetAnnotations(d_3, b_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              q_14 = ATgetArgument(t, 0);
              {
                ATerm s_7 = NULL,k_8 = NULL;
                t = SSLgetAnnotations(l_42);
                s_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, q_14);
                k_8 = t;
                t = SSLsetAnnotations(k_8, s_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  q_14 = ATgetArgument(t, 0);
                  {
                    ATerm f_8 = NULL,l_8 = NULL;
                    t = SSLgetAnnotations(l_42);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, q_14);
                    l_8 = t;
                    t = SSLsetAnnotations(l_8, f_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      q_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_8 = NULL,u_8 = NULL;
                        t = SSLgetAnnotations(l_42);
                        o_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, q_14);
                        u_8 = t;
                        t = SSLsetAnnotations(u_8, o_8);
                      }
                    }
                  else
                    {
                      ATerm s_8 = NULL,x_8 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          q_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(l_42);
                      s_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, q_14);
                      x_8 = t;
                      t = SSLsetAnnotations(x_8, s_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  u_12 = t;
  t = term_b_15;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, u_12);
  t = h_10(b_13, u_12, t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, w_12);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_42, (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, w_12));
  t = f_10(g_3, l_42, a_13, t);
  t = w_12;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,w_8 = NULL,z_8 = NULL;
        t = (ATerm) ATempty;
        w_8 = t;
        t = term_l_13;
        z_8 = t;
        t = term_m_13;
        t = a_10(z_8, w_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_15) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            r_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_14;
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = (ATerm) ATempty;
      }
    x_12 = t;
    t = (ATerm) ATempty;
    y_12 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATmakeAppl(sym__3, u_12, w_12, o_42)));
    z_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, (ATerm) ATinsert(CheckATermList(x_12), (ATerm) ATmakeAppl(sym__3, u_12, w_12, o_42))));
    t = f_10(h_3, y_12, z_12, t);
    t = (ATerm) ATmakeAppl(sym_Id_1, w_12);
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL,a_11 = NULL;
        t = term_a_15;
        a_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_15, u_15);
        t = a_10(a_11, u_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_15) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            t_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, t_9);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          ATerm f_11 = NULL,i_11 = NULL;
          t = term_a_15;
          i_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_15, u_15);
          t = a_10(i_11, u_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm k_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
              f_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm k_16 = NULL,q_11 = NULL;
        k_16 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
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
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(q_15);
                  }
                else
                  {
                    t = p_15;
                  }
              }
            }
          q_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_16, q_11);
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm v_15 = ATgetArgument(t, 0);
                    ATerm w_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, k_16, q_11);
                t = o_9(k_16, q_11, t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                {
                  ATerm g_12 = NULL,k_12 = NULL;
                  k_12 = t;
                  t = SSL_explode_term(k_12);
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_15 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm b_16 = ATgetArgument(t, 1);
                        if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
                          {
                            ATerm c_16 = ATgetFirst((ATermList) b_16);
                            ATerm d_16 = (ATerm) ATgetNext((ATermList) b_16);
                            if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
                              {
                                g_12 = ATgetFirst((ATermList) d_16);
                                {
                                  ATerm e_16 = (ATerm) ATgetNext((ATermList) d_16);
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
                  t = g_12;
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm p_9 (ATerm b_47, ATerm a_47, ATerm t)
{
  ATerm o_16 = NULL;
  t = new_0_0(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_16), term_g_13), (ATerm) ATmakeAppl(sym_AssignInit_1, a_47)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, b_47, (ATerm) ATmakeAppl(sym_Id_1, o_16))));
  return(t);
}
ATerm q_9 (ATerm s_208, ATerm x_46, ATerm z_46, ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL;
  t = SSLgetAnnotations(s_208);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_46);
  s_16 = t;
  t = SSLsetAnnotations(s_16, p_16);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, q_16, z_46);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(c_13, d_13, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATinsert(ATempty, o_18), q_18)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          q_18 = ATgetArgument(t, 0);
          o_18 = ATgetArgument(t, 1);
          {
            ATerm t_12 = NULL,v_12 = NULL,p_13 = NULL,s_13 = NULL;
            t = o_18;
            t = foldr_3_0(j_3, k_3, l_3, t);
            t_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_18, t_12);
            p_13 = t;
            t = term_j_16;
            s_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATmakeAppl(sym__2, q_18, t_12));
            t = a_10(s_13, p_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm l_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_16) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                v_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(CheckATermList(o_18), (ATerm) ATmakeAppl(sym_Id_1, v_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              q_18 = ATgetArgument(t, 0);
              t = q_18;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  q_18 = ATgetArgument(t, 0);
                  {
                    ATerm r_16 = t;
                    int t_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(p_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm v_16 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("unbound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm w_16 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(w_16) != AT_LIST) || !(ATisEmpty(w_16))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, q_18)));
                        ;
                        LocalPopChoice(t_16);
                      }
                    else
                      {
                        t = r_16;
                        {
                          ATerm z_16 = t;
                          int b_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(p_18);
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, q_18)));
                              ;
                              LocalPopChoice(b_17);
                            }
                          else
                            {
                              t = z_16;
                              t = SSLgetAnnotations(p_18);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm c_17 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("bound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm d_17 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(d_17) != AT_LIST) || !(ATisEmpty(d_17))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, q_18);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      q_18 = ATgetArgument(t, 0);
                      {
                        ATerm x_18 = NULL,x_15 = NULL,y_15 = NULL,a_16 = NULL,r_15 = NULL;
                        t = SSL_explode_string(q_18);
                        t = escape_chars_0_0(t);
                        r_15 = t;
                        t = SSL_implode_string(r_15);
                        y_15 = t;
                        t = SSL_explode_string(y_15);
                        a_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_16), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
                        t = conc_0_0(t);
                        x_15 = t;
                        t = SSL_implode_string(x_15);
                        x_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_17), term_i_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, x_18)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          q_18 = ATgetArgument(t, 0);
                          {
                            ATerm u_16 = NULL;
                            t = SSL_real_to_string(q_18);
                            u_16 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, u_16))));
                          }
                        }
                      else
                        {
                          ATerm a_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              q_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(q_18);
                          a_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_17))));
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
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  if(match_cons(t, sym_Op_2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_22;
  if(match_string(t, "Cons"))
    {
      ATerm l_23 = NULL;
      t = o_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_22 = ATgetFirst((ATermList) t);
          h_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_22 = ATgetFirst((ATermList) t);
          l_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_22;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,l_26 = NULL,m_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                j_24 = ATgetArgument(t, 0);
                q_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_24;
            if(match_cons(t, sym_TypeName_2))
              {
                k_24 = ATgetArgument(t, 0);
                p_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                l_24 = ATgetArgument(t, 0);
                m_24 = ATgetArgument(t, 1);
                o_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_24;
            if(match_cons(t, sym_TypeId_1))
              {
                n_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = o_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = q_24;
            if(match_cons(t, sym_Id_1))
              {
                l_26 = ATgetArgument(t, 0);
                {
                  ATerm r_26 = NULL,f_9 = NULL;
                  t = SSLgetAnnotations(q_24);
                  r_26 = t;
                  t = l_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, l_26);
                  f_9 = t;
                  t = SSLsetAnnotations(f_9, r_26);
                }
              }
            else
              {
                ATerm w_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,i_27 = NULL,l_27 = NULL,i_9 = NULL,h_9 = NULL,g_9 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    l_26 = ATgetArgument(t, 0);
                    m_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_24);
                w_26 = t;
                t = l_26;
                if(match_cons(t, sym_Id_1))
                  {
                    i_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_26);
                e_27 = t;
                t = i_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, i_27);
                g_9 = t;
                t = SSLsetAnnotations(g_9, e_27);
                l_27 = t;
                t = m_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_27 = ATgetFirst((ATermList) t);
                    b_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_26);
                z_26 = t;
                t = b_27;
                t = Cons_2_0(_id, m_3, t);
                c_27 = t;
                t = (ATerm) ATinsert(CheckATermList(c_27), a_27);
                h_9 = t;
                t = SSLsetAnnotations(h_9, z_26);
                d_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, l_27, d_27);
                i_9 = t;
                t = SSLsetAnnotations(i_9, w_26);
              }
            ;
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_17, (ATerm) ATinsert(ATempty, i_22));
          }
        l_23 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, g_22), l_23)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = o_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_17;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = bottomup_1_0(t_113, t);
    return(t);
  }
  t = SRTS_all(n_3, t);
  t = t_113(t);
  return(t);
}
ATerm topdown_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = topdown_1_0(s_113, t);
    return(t);
  }
  t = s_113(t);
  t = SRTS_all(o_3, t);
  return(t);
}
ATerm q_49 (ATerm f_27, ATerm g_27, ATerm h_27, ATerm j_27, ATerm t)
{
  ATerm o_27 = NULL,q_27 = NULL,r_27 = NULL,d_28 = NULL,e_28 = NULL;
  t = not_null(f_27);
  {
    ATerm y_17 = t;
    if((PushChoice() == 0))
      {
        ATerm t_27 = NULL;
        t_27 = t;
        if(match_string(t, "Nil"))
          {
            t = t_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = t_27;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_17;
      }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), term_f_16);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
        if(match_cons(t, sym__2))
          {
            u_27 = ATgetArgument(t, 0);
            v_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(v_27);
        y_27 = t;
        t = u_27;
        if(match_cons(t, sym_Var_1))
          {
            a_28 = ATgetArgument(t, 0);
            {
              ATerm z_17 = t;
              int a_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_27)), not_null(h_27)));
                  v_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_27)), not_null(h_27))));
                  t = q_9(u_27, a_28, v_28, t);
                  ;
                  LocalPopChoice(a_18);
                }
              else
                {
                  t = z_17;
                  {
                    ATerm y_28 = NULL;
                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_27)), not_null(h_27)));
                    y_28 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_27)), not_null(h_27))));
                    t = p_9(u_27, y_28, t);
                  }
                }
            }
          }
        else
          {
            ATerm z_28 = NULL;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_27)), not_null(h_27)));
            z_28 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_27)), not_null(h_27))));
            t = p_9(u_27, z_28, t);
          }
        w_27 = t;
        t = term_g_10;
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_27, term_g_10);
        t = o_10(v_27, z_27, t);
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
        return(t);
      }
      t = thread_map_1_0(p_3, t);
      if(match_cons(t, sym__2))
        {
          if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_27 = ATgetArgument(t, 0);
          {
            ATerm d_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = not_null(g_27);
      t = foldr_3_0(q_3, r_3, t_3, t);
      if(((q_27 != NULL) && (q_27 != t)))
        _fail(t);
      else
        q_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(q_27));
      if(((d_28 != NULL) && (d_28 != t)))
        _fail(t);
      else
        d_28 = t;
      t = term_j_16;
      if(((e_28 != NULL) && (e_28 != t)))
        _fail(t);
      else
        e_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(q_27)));
      t = a_10(not_null(e_28), not_null(d_28), t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm e_18 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_18) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          if(((r_27 != NULL) && (r_27 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_27))), not_null(h_27))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_27)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18))));
    }
  }
  return(t);
}
ATerm r_49 (ATerm e_29, ATerm f_29, ATerm g_29, ATerm t)
{
  ATerm n_29 = NULL;
  t = SSL_real_to_string(e_29);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, f_29)), term_r_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_y_18, f_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, n_29))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18))));
  return(t);
}
ATerm g_51 (ATerm t_29, ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm d_30 = NULL;
  t = SSL_int_to_string(t_29);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, w_29)), term_a_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_19, w_29))), (ATerm) ATmakeAppl(sym_IntConst_1, d_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18))));
  return(t);
}
ATerm h_51 (ATerm f_30, ATerm j_30, ATerm k_30, ATerm n_30, ATerm t)
{
  t = SSLgetAnnotations(f_30);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, j_30), term_i_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, j_30), k_30)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, k_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_30), term_a_12, k_30)));
  return(t);
}
ATerm i_51 (ATerm x_30, ATerm y_30, ATerm b_31, ATerm c_31, ATerm t)
{
  t = SSLgetAnnotations(x_30);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_19) != AT_LIST) || !(ATisEmpty(k_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, y_30), b_31), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, b_31))))));
  return(t);
}
ATerm j_51 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm s_31, ATerm t)
{
  t = SSLgetAnnotations(p_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(m_19) != AT_LIST) || !(ATisEmpty(m_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_31), term_a_12, r_31));
  return(t);
}
ATerm k_51 (ATerm y_31, ATerm z_31, ATerm c_32, ATerm d_32, ATerm e_32, ATerm h_32, ATerm o_32, ATerm p_32, ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,g_33 = NULL,g_28 = NULL,h_28 = NULL;
  t = not_null(z_31);
  {
    ATerm n_19 = t;
    if((PushChoice() == 0))
      {
        ATerm h_33 = NULL;
        h_33 = t;
        if(match_string(t, "Nil"))
          {
            t = h_33;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = h_33;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_19;
      }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), term_f_16);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm i_33 = NULL,j_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            if(match_cons(o_19, sym_Var_1))
              {
                i_33 = ATgetArgument(o_19, 0);
              }
            else
              _fail(t);
            j_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(j_33);
        q_33 = t;
        t = term_g_10;
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, term_g_10);
        t = o_10(j_33, s_33, t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_33), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, q_33)), (ATerm) ATmakeAppl(sym_Id_1, not_null(y_31)))))), r_33);
        return(t);
      }
      t = thread_map_1_0(u_3, t);
      if(match_cons(t, sym__2))
        {
          if(((d_33 != NULL) && (d_33 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_33 = ATgetArgument(t, 0);
          {
            ATerm p_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_31), not_null(c_32));
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      t = term_j_16;
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATmakeAppl(sym__2, not_null(z_31), not_null(c_32)));
      t = a_10(not_null(h_28), not_null(g_28), t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm q_19 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_19) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          if(((g_33 != NULL) && (g_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), (ATerm) ATinsert(ATempty, not_null(e_32)));
      t = conc_0_0(t);
      if(((e_33 != NULL) && (e_33 != t)))
        _fail(t);
      else
        e_33 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(g_33))), (ATerm) ATmakeAppl(sym_Id_1, not_null(y_31)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(e_33)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_31)), not_null(h_32), not_null(o_32)))));
    }
  }
  return(t);
}
ATerm l_51 (ATerm t_33, ATerm v_33, ATerm w_33, ATerm x_33, ATerm y_33, ATerm a_34, ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_real_to_string(v_33);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, m_34)), (ATerm) ATmakeAppl(sym_Id_1, t_33))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_33)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, t_33), x_33, y_33))));
  return(t);
}
ATerm m_51 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm r_34, ATerm s_34, ATerm t_34, ATerm t)
{
  ATerm d_35 = NULL;
  t = SSL_int_to_string(o_34);
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_35)), (ATerm) ATmakeAppl(sym_Id_1, n_34))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_34)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, n_34), r_34, s_34))));
  return(t);
}
ATerm n_51 (ATerm e_35, ATerm f_35, ATerm j_35, ATerm t)
{
  t = f_35;
  {
    ATerm v_19 = t;
    if((PushChoice() == 0))
      {
        ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,w_9 = NULL;
        a_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_36);
        y_35 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_35);
        w_9 = t;
        t = SSLsetAnnotations(w_9, y_35);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_19;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_35)));
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  if(match_cons(t, sym__2))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(a_29, b_29, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm t_38 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if(match_cons(w_19, sym_SVar_1))
        {
          t_38 = ATgetArgument(w_19, 0);
        }
      else
        _fail(t);
      {
        ATerm x_19 = ATgetArgument(t, 1);
        if(((ATgetType(x_19) != AT_LIST) || !(ATisEmpty(x_19))))
          _fail(t);
      }
      {
        ATerm y_19 = ATgetArgument(t, 2);
        if(((ATgetType(y_19) != AT_LIST) || !(ATisEmpty(y_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, t_38);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = topdown_1_0(h_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(i_4, t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
          }
      }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm l_39 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if(match_cons(f_20, sym_SVar_1))
        {
          l_39 = ATgetArgument(f_20, 0);
        }
      else
        _fail(t);
      {
        ATerm g_20 = ATgetArgument(t, 1);
        if(((ATgetType(g_20) != AT_LIST) || !(ATisEmpty(g_20))))
          _fail(t);
      }
      {
        ATerm h_20 = ATgetArgument(t, 2);
        if(((ATgetType(h_20) != AT_LIST) || !(ATisEmpty(h_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, l_39);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = topdown_1_0(r_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(s_4, t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  t_40 = t;
  t = term_p_20;
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_40, term_p_20);
  t = f_10(u_4, t_40, u_40, t);
  t = t_40;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_40), term_g_13), term_r_20);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  if(match_cons(t, sym__2))
    {
      c_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_41;
  if(match_cons(t, sym_Var_1))
    {
      a_41 = ATgetArgument(t, 0);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_41;
            t = q_9(c_41, a_41, d_41, t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = b_41;
            t = p_9(c_41, d_41, t);
          }
      }
    }
  else
    {
      t = b_41;
      t = p_9(c_41, d_41, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm e_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,v_36 = NULL,x_36 = NULL,c_37 = NULL,d_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,q_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,x_37 = NULL,y_37 = NULL;
  x_37 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, y_37, (ATerm) ATinsert(ATempty, t_37));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          y_37 = ATgetArgument(t, 0);
          {
            ATerm c_38 = NULL;
            t = x_37;
            t = new_0_0(t);
            c_38 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_38), term_g_13))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, c_38)))), y_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_38), term_a_12, term_k_18))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              y_37 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, y_37);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  y_37 = ATgetArgument(t, 0);
                  t_37 = ATgetArgument(t, 1);
                  m_37 = ATgetArgument(t, 2);
                  {
                    ATerm k_38 = NULL,l_38 = NULL,s_38 = NULL;
                    t = y_37;
                    if(match_cons(t, sym_SVar_1))
                      {
                        u_37 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_37;
                    t = map_1_0(a_4, t);
                    k_38 = t;
                    t = m_37;
                    t = map_1_0(b_4, t);
                    l_38 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_18)), l_38), k_38);
                    t = concat_0_0(t);
                    s_38 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, u_37), s_38)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      y_37 = ATgetArgument(t, 0);
                      t_37 = ATgetArgument(t, 1);
                      m_37 = ATgetArgument(t, 2);
                      {
                        ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
                        t = t_37;
                        t = map_1_0(k_4, t);
                        c_39 = t;
                        t = m_37;
                        t = map_1_0(l_4, t);
                        d_39 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
                        t = conc_0_0(t);
                        e_39 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, y_37), e_39)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          y_37 = ATgetArgument(t, 0);
                          {
                            ATerm u_39 = NULL;
                            t = x_37;
                            t = new_0_0(t);
                            u_39 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_39), term_g_13), term_u_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_21), term_c_21), y_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, u_39))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              y_37 = ATgetArgument(t, 0);
                              t_37 = ATgetArgument(t, 1);
                              {
                                ATerm x_39 = NULL;
                                t = x_37;
                                t = new_0_0(t);
                                x_39 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_39), term_g_13), term_u_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, x_39))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  y_37 = ATgetArgument(t, 0);
                                  t_37 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, y_37, t_37);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      y_37 = ATgetArgument(t, 0);
                                      t_37 = ATgetArgument(t, 1);
                                      m_37 = ATgetArgument(t, 2);
                                      {
                                        ATerm g_40 = NULL,h_40 = NULL;
                                        t = x_37;
                                        t = new_0_0(t);
                                        g_40 = t;
                                        t = new_0_0(t);
                                        h_40 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_l_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_40), term_g_13), term_o_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_40), term_g_13), term_u_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_40))))), y_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, g_40))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          y_37 = ATgetArgument(t, 0);
                                          t_37 = ATgetArgument(t, 1);
                                          {
                                            ATerm k_40 = NULL,l_40 = NULL;
                                            t = x_37;
                                            t = new_0_0(t);
                                            k_40 = t;
                                            t = new_0_0(t);
                                            l_40 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_40), term_g_13), term_o_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_40), term_g_13), term_u_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, l_40))))), term_u_21), y_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, k_40))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              y_37 = ATgetArgument(t, 0);
                                              t_37 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, y_37, t_37);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  y_37 = ATgetArgument(t, 0);
                                                  t_37 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_37), y_37));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      y_37 = ATgetArgument(t, 0);
                                                      t_37 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm s_40 = NULL;
                                                        t = y_37;
                                                        t = map_1_0(t_4, t);
                                                        t = y_37;
                                                        t = map_1_0(v_4, t);
                                                        s_40 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, s_40)), (ATerm) ATinsert(ATempty, t_37));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_v_21;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  y_37 = ATgetArgument(t, 0);
                                                                  t_37 = ATgetArgument(t, 1);
                                                                  t = y_37;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      u_37 = ATgetArgument(t, 0);
                                                                      m_36 = ATgetArgument(t, 1);
                                                                      t = m_36;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          e_36 = ATgetFirst((ATermList) t);
                                                                          i_36 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = i_36;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              j_36 = ATgetFirst((ATermList) t);
                                                                              k_36 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = k_36;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = u_37;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm w_21 = t;
                                                                                      int x_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm z_40 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_36, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_22, t_37)))))), (ATerm) ATmakeAppl(sym__2, e_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_22, t_37)))));
                                                                                          t = map_1_0(w_4, t);
                                                                                          z_40 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, t_37)), term_k_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, t_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, z_40), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18))));
                                                                                          ;
                                                                                          LocalPopChoice(x_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_21;
                                                                                          t = q_49(u_37, m_36, t_37, x_37, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_49(u_37, m_36, t_37, x_37, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_37;
                                                                                  t = q_49(u_37, m_36, t_37, x_37, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_37;
                                                                              t = q_49(u_37, m_36, t_37, x_37, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = u_37;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm r_22 = t;
                                                                                  int s_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, t_37)), term_k_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, t_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18))));
                                                                                      ;
                                                                                      LocalPopChoice(s_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_22;
                                                                                      t = q_49(u_37, m_36, t_37, x_37, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_49(u_37, m_36, t_37, x_37, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_37;
                                                                              t = q_49(u_37, m_36, t_37, x_37, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          u_37 = ATgetArgument(t, 0);
                                                                          t = r_49(u_37, t_37, x_37, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              u_37 = ATgetArgument(t, 0);
                                                                              t = g_51(u_37, t_37, x_37, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  u_37 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm d_42 = NULL,w_28 = NULL,x_28 = NULL,d_29 = NULL,r_28 = NULL;
                                                                                    t = SSL_explode_string(u_37);
                                                                                    t = escape_chars_0_0(t);
                                                                                    r_28 = t;
                                                                                    t = SSL_implode_string(r_28);
                                                                                    x_28 = t;
                                                                                    t = SSL_explode_string(x_28);
                                                                                    d_29 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_29), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
                                                                                    t = conc_0_0(t);
                                                                                    w_28 = t;
                                                                                    t = SSL_implode_string(w_28);
                                                                                    d_42 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_y_22, t_37))), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_17), term_i_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, d_42))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, term_k_18))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      u_37 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm z_22 = t;
                                                                                        int a_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_51(y_37, u_37, t_37, x_37, t);
                                                                                            ;
                                                                                            LocalPopChoice(a_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_22;
                                                                                            {
                                                                                              ATerm b_23 = t;
                                                                                              int c_23 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = i_51(y_37, u_37, t_37, x_37, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(c_23);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_23;
                                                                                                  t = j_51(y_37, u_37, t_37, x_37, t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          u_37 = ATgetArgument(t, 0);
                                                                                          m_36 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, m_36, t_37)), (ATerm) ATmakeAppl(sym_Match_2, u_37, t_37)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm d_23 = t;
                                                                                          int e_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm f_23 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(e_23);
                                                                                              t = term_v_21;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_23;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_v_21;
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
                                                                      y_37 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, y_37, term_k_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          y_37 = ATgetArgument(t, 0);
                                                                          t_37 = ATgetArgument(t, 1);
                                                                          m_37 = ATgetArgument(t, 2);
                                                                          t = y_37;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              u_37 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = t_37;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              s_37 = ATgetFirst((ATermList) t);
                                                                              l_37 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = s_37;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  d_37 = ATgetArgument(t, 0);
                                                                                  h_37 = ATgetArgument(t, 1);
                                                                                  k_37 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = d_37;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  g_37 = ATgetArgument(t, 0);
                                                                                  c_37 = ATgetArgument(t, 1);
                                                                                  t = h_37;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      n_36 = ATgetFirst((ATermList) t);
                                                                                      p_36 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = p_36;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          q_36 = ATgetFirst((ATermList) t);
                                                                                          x_36 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = x_36;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = q_36;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  v_36 = ATgetArgument(t, 0);
                                                                                                  t = n_36;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      o_36 = ATgetArgument(t, 0);
                                                                                                      t = c_37;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = g_37;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm g_23 = t;
                                                                                                              int h_23 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_37))), term_k_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_37))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_37), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, v_36), term_a_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_22, (ATerm) ATmakeAppl(sym_Id_1, u_37)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_36), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_22, (ATerm) ATmakeAppl(sym_Id_1, u_37)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, u_37), l_37, m_37))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(h_23);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_23;
                                                                                                                  t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = g_37;
                                                                                                          t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_37;
                                                                                                      t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_37;
                                                                                                  t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_37;
                                                                                              t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_37;
                                                                                          t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = c_37;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = g_37;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm i_23 = t;
                                                                                                  int j_23 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_37))), term_k_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_37)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_37), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, u_37), l_37, m_37))));
                                                                                                      ;
                                                                                                      LocalPopChoice(j_23);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_23;
                                                                                                      t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_37;
                                                                                              t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_37;
                                                                                          t = k_51(u_37, g_37, c_37, h_37, k_37, l_37, m_37, x_37, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      g_37 = ATgetArgument(t, 0);
                                                                                      t = l_51(u_37, g_37, k_37, l_37, m_37, x_37, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          g_37 = ATgetArgument(t, 0);
                                                                                          t = m_51(u_37, g_37, k_37, l_37, m_37, x_37, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm i_46 = NULL,m_29 = NULL,o_29 = NULL,q_29 = NULL,i_29 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              g_37 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(g_37);
                                                                                          t = escape_chars_0_0(t);
                                                                                          i_29 = t;
                                                                                          t = SSL_implode_string(i_29);
                                                                                          o_29 = t;
                                                                                          t = SSL_explode_string(o_29);
                                                                                          q_29 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_29), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
                                                                                          t = conc_0_0(t);
                                                                                          m_29 = t;
                                                                                          t = SSL_implode_string(m_29);
                                                                                          i_46 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, i_46))), (ATerm) ATmakeAppl(sym_Id_1, u_37))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_37)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, u_37), l_37, m_37))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = m_37;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              y_37 = ATgetArgument(t, 0);
                                                                              t_37 = ATgetArgument(t, 1);
                                                                              m_37 = ATgetArgument(t, 2);
                                                                              q_37 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, y_37), (ATerm) ATmakeAppl(sym_Case_3, t_37, m_37, q_37));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  y_37 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, y_37));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      y_37 = ATgetArgument(t, 0);
                                                                                      t_37 = ATgetArgument(t, 1);
                                                                                      t = y_37;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          u_37 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = t_37;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          s_37 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm n_23 = t;
                                                                                            int o_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, u_37), term_i_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, u_37), (ATerm) ATmakeAppl(sym_Id_1, s_37))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, s_37)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, u_37), term_a_12, (ATerm) ATmakeAppl(sym_Id_1, s_37))));
                                                                                                ;
                                                                                                LocalPopChoice(o_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = n_23;
                                                                                                t = n_51(u_37, t_37, x_37, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_51(u_37, t_37, x_37, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          y_37 = ATgetArgument(t, 0);
                                                                                          t = y_37;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              u_37 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, u_37), term_a_12, term_k_18));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm f_49 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              y_37 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = y_37;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          f_49 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_k_18, term_a_12, f_49));
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
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_0, v_0);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      o_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_1, o_51);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      r_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_51), q_51), p_51);
  return(t);
}
ATerm thread_map_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm d_52 (ATerm t)
  {
    ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
    w_51 = t;
    if(match_cons(t, sym__2))
      {
        x_51 = ATgetArgument(t, 0);
        y_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_51;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_51 = ATgetFirst((ATermList) t);
        v_51 = (ATerm) ATgetNext((ATermList) t);
        t = w_51;
        t = s_9(c_126, d_52, u_51, v_51, y_51, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_51);
      }
    return(t);
  }
  t = d_52(t);
  return(t);
}
ATerm u_55 (ATerm g_53, ATerm h_53, ATerm i_53, ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,r_29 = NULL,s_29 = NULL;
  t = g_53;
  {
    ATerm p_23 = t;
    if((PushChoice() == 0))
      {
        ATerm v_53 = NULL;
        v_53 = t;
        if(match_string(t, "Nil"))
          {
            t = v_53;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = v_53;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_23;
      }
    t = h_53;
    t = map_1_0(x_4, t);
    t = (ATerm) ATmakeAppl(sym__2, h_53, term_f_16);
    t = thread_map_1_0(y_4, t);
    if(match_cons(t, sym__2))
      {
        r_53 = ATgetArgument(t, 0);
        {
          ATerm q_23 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = h_53;
    t = foldr_3_0(z_4, a_5, b_5, t);
    t_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_53, t_53);
    r_29 = t;
    t = term_j_16;
    s_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATmakeAppl(sym__2, g_53, t_53));
    t = a_10(s_29, r_29, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm r_23 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        u_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_53, (ATerm) ATinsert(ATempty, i_53));
    t = conc_0_0(t);
    s_53 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_53)), term_k_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_53), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_53)));
  }
  return(t);
}
ATerm v_55 (ATerm g_54, ATerm h_54, ATerm i_54, ATerm j_54, ATerm t)
{
  ATerm n_54 = NULL;
  t = SSL_real_to_string(g_54);
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, n_54)), term_k_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_54)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_54)));
  return(t);
}
ATerm w_55 (ATerm o_54, ATerm p_54, ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm v_54 = NULL;
  t = SSL_int_to_string(o_54);
  v_54 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_54)), term_k_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_54)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_54)));
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_9 = NULL;
  y_53 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_53);
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_53);
  z_9 = t;
  t = SSLsetAnnotations(z_9, w_53);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if(match_cons(s_23, sym_Var_1))
        {
          z_53 = ATgetArgument(s_23, 0);
        }
      else
        _fail(t);
      a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(a_54);
  b_54 = t;
  t = term_g_10;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_54, term_g_10);
  t = o_10(a_54, d_54, t);
  c_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_53), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_54)), term_k_18)))), c_54);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  if(match_cons(t, sym__2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(e_54, f_54, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  d_55 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      e_55 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
      i_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_55;
  if(match_cons(t, sym_Match_1))
    {
      f_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_55;
  if(match_cons(t, sym_Op_2))
    {
      g_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
      t = c_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
          t = y_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_54 = ATgetFirst((ATermList) t);
              b_55 = (ATerm) ATgetNext((ATermList) t);
              t = b_55;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_54;
                  if(match_cons(t, sym_Var_1))
                    {
                      a_55 = ATgetArgument(t, 0);
                      t = w_54;
                      if(match_cons(t, sym_Var_1))
                        {
                          x_54 = ATgetArgument(t, 0);
                          t = g_55;
                          if(match_string(t, "Cons"))
                            {
                              ATerm t_23 = t;
                              int u_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_k_18)), term_k_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, term_k_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_55), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_55), term_a_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, term_v_23)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_54), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_21, (ATerm) ATinsert(ATempty, term_v_23)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_55)));
                                  ;
                                  LocalPopChoice(u_23);
                                }
                              else
                                {
                                  t = t_23;
                                  t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                                }
                            }
                          else
                            {
                              t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                            }
                        }
                      else
                        {
                          t = g_55;
                          t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                        }
                    }
                  else
                    {
                      t = g_55;
                      t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                    }
                }
              else
                {
                  t = g_55;
                  t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                }
            }
          else
            {
              t = g_55;
              t = u_55(g_55, c_55, h_55, i_55, d_55, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_55;
              if(match_string(t, "Nil"))
                {
                  ATerm w_23 = t;
                  int x_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_k_18)), term_k_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, term_k_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_55)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_55)));
                      ;
                      LocalPopChoice(x_23);
                    }
                  else
                    {
                      t = w_23;
                      t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                    }
                }
              else
                {
                  t = u_55(g_55, c_55, h_55, i_55, d_55, t);
                }
            }
          else
            {
              t = g_55;
              t = u_55(g_55, c_55, h_55, i_55, d_55, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          g_55 = ATgetArgument(t, 0);
          t = v_55(g_55, h_55, i_55, d_55, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              g_55 = ATgetArgument(t, 0);
              t = w_55(g_55, h_55, i_55, d_55, t);
            }
          else
            {
              ATerm s_55 = NULL,c_30 = NULL,e_30 = NULL,h_30 = NULL,v_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  g_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(g_55);
              t = escape_chars_0_0(t);
              v_29 = t;
              t = SSL_implode_string(v_29);
              e_30 = t;
              t = SSL_explode_string(e_30);
              h_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_30), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
              t = conc_0_0(t);
              c_30 = t;
              t = SSL_implode_string(c_30);
              s_55 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_55))), term_k_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_55)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_55)));
            }
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,p_10 = NULL;
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_56 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_24 = ATgetFirst((ATermList) t);
              if(((ATgetType(c_24) != AT_INT) || (ATgetInt((ATermInt) c_24) != 34)))
                _fail(t);
              h_56 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(h_56), term_e_17), term_d_24);
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          {
            ATerm j_56 = NULL,k_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_56 = ATgetFirst((ATermList) t);
                k_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_56;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_56), term_d_24), term_d_24);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_56), term_e_24), term_d_24);
              }
          }
        }
      g_56 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_56 = ATgetFirst((ATermList) t);
          e_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_56);
      c_56 = t;
      t = e_56;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      f_56 = t;
      t = (ATerm) ATinsert(CheckATermList(f_56), d_56);
      p_10 = t;
      t = SSLsetAnnotations(p_10, c_56);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
        y_56 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_56 = ATgetFirst((ATermList) t);
            x_56 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm o_30 = NULL,s_30 = NULL,s_10 = NULL;
              t = SSLgetAnnotations(y_56);
              o_30 = t;
              t = x_56;
              t = escape_chars_0_0(t);
              s_30 = t;
              t = (ATerm) ATinsert(CheckATermList(s_30), w_56);
              s_10 = t;
              t = SSLsetAnnotations(s_10, o_30);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_56;
          }
      }
    }
  return(t);
}
ATerm x_9 (ATerm h_49, ATerm g_49, ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,e_57 = NULL,f_57 = NULL,w_31 = NULL,a_32 = NULL,f_32 = NULL,n_31 = NULL,o_31 = NULL,h_31 = NULL,k_31 = NULL,m_31 = NULL,e_31 = NULL,f_31 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_24), h_49);
  f_57 = t;
  t = SSL_concat_strings(f_57);
  f_31 = t;
  t = SSL_explode_string(f_31);
  t = escape_chars_0_0(t);
  e_31 = t;
  t = SSL_implode_string(e_31);
  k_31 = t;
  t = SSL_explode_string(k_31);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_31), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
  t = conc_0_0(t);
  h_31 = t;
  t = SSL_implode_string(h_31);
  b_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_24), h_49);
  e_57 = t;
  t = SSL_concat_strings(e_57);
  o_31 = t;
  t = SSL_explode_string(o_31);
  t = escape_chars_0_0(t);
  n_31 = t;
  t = SSL_implode_string(n_31);
  a_32 = t;
  t = SSL_explode_string(a_32);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_32), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
  t = conc_0_0(t);
  w_31 = t;
  t = SSL_implode_string(w_31);
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_24), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_18), (ATerm) ATmakeAppl(sym_StringLit_1, c_57)), term_r_24)))), g_49), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_18), (ATerm) ATmakeAppl(sym_StringLit_1, b_57)), term_r_24)))));
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  i_59 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_59 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
      l_59 = ATgetArgument(t, 2);
      h_59 = ATgetArgument(t, 3);
      {
        ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,b_36 = NULL,c_36 = NULL;
        t = k_59;
        t = map_1_0(TranslateVarDec_0_0, t);
        r_35 = t;
        t = l_59;
        t = map_1_0(TranslateVarDec_0_0, t);
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_35, s_35);
        t = conc_0_0(t);
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_59, h_59);
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_37 = NULL,v_37 = NULL,w_37 = NULL,f_38 = NULL,x_10 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, j_59, h_59);
              f_38 = t;
              t = SSLgetAnnotations(f_38);
              w_37 = t;
              t = j_59;
              {
                ATerm v_24 = t;
                int w_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_38 = NULL;
                    t = term_r_11;
                    m_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_r_11, j_59);
                    t = a_10(m_38, j_59, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm x_24 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("r_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = j_59;
                    ;
                    LocalPopChoice(w_24);
                  }
                else
                  {
                    t = v_24;
                    {
                      ATerm o_38 = NULL,p_38 = NULL;
                      t = (ATerm) ATempty;
                      o_38 = t;
                      t = term_h_11;
                      p_38 = t;
                      t = term_y_24;
                      t = a_10(p_38, o_38, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm z_24 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) z_24) != ATmakeSymbol("o_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = j_59;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_59, h_59);
                x_10 = t;
                t = SSLsetAnnotations(x_10, w_37);
                if(match_cons(t, sym__2))
                  {
                    r_37 = ATgetArgument(t, 0);
                    v_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_9(r_37, v_37, t);
              }
              ;
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_24), h_59));
            }
          b_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_35, (ATerm) ATinsert(ATempty, term_b_25));
          t = conc_0_0(t);
          c_36 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_59), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, c_36))), b_36);
        }
      }
    }
  else
    {
      ATerm g_39 = NULL,j_39 = NULL,k_39 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          j_59 = ATgetArgument(t, 0);
          k_59 = ATgetArgument(t, 1);
          l_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_59;
      t = map_1_0(TranslateVarDec_0_0, t);
      g_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_59, l_59);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,j_42 = NULL,y_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, j_59, l_59);
            j_42 = t;
            t = SSLgetAnnotations(j_42);
            c_42 = t;
            t = j_59;
            {
              ATerm e_25 = t;
              int f_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_42 = NULL;
                  t = term_r_11;
                  n_42 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_r_11, j_59);
                  t = a_10(n_42, j_59, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm g_25 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) g_25) != ATmakeSymbol("r_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = j_59;
                  ;
                  LocalPopChoice(f_25);
                }
              else
                {
                  t = e_25;
                  {
                    ATerm u_42 = NULL,y_42 = NULL;
                    t = (ATerm) ATempty;
                    u_42 = t;
                    t = term_h_11;
                    y_42 = t;
                    t = term_y_24;
                    t = a_10(y_42, u_42, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm h_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("o_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = j_59;
                  }
                }
              t = (ATerm) ATmakeAppl(sym__2, j_59, l_59);
              y_10 = t;
              t = SSLsetAnnotations(y_10, c_42);
              if(match_cons(t, sym__2))
                {
                  a_42 = ATgetArgument(t, 0);
                  b_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_9(a_42, b_42, t);
            }
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_24), l_59));
          }
        j_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_39, (ATerm) ATinsert(ATempty, term_b_25));
        t = conc_0_0(t);
        k_39 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_59), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, k_39))), j_39);
      }
    }
  return(t);
}
ATerm a_10 (ATerm x_79, ATerm y_79, ATerm t)
{
  ATerm s_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_79, y_79);
  t = q_10(x_79, y_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_59 = ATgetFirst((ATermList) t);
      {
        ATerm i_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_59;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  if(match_cons(t, sym__2))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(f_60, g_60, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm b_10 (ATerm d_48, ATerm b_48, ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,a_60 = NULL,g_43 = NULL,j_43 = NULL,d_43 = NULL,e_43 = NULL,d_60 = NULL;
  t = b_48;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            d_60 = ATgetArgument(t, 0);
            {
              ATerm l_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_25);
        t = d_60;
        t = foldr_3_0(c_5, d_5, e_5, t);
      }
    else
      {
        t = j_25;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm m_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_f_16;
      }
    x_59 = t;
    t = SSL_int_to_string(x_59);
    w_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_48, x_59);
    d_43 = t;
    t = term_j_16;
    e_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATmakeAppl(sym__2, d_48, x_59));
    t = a_10(e_43, d_43, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm n_25 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        a_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(d_48);
    j_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_43), term_e_17), (ATerm) ATinsert(ATempty, term_e_17));
    t = conc_0_0(t);
    g_43 = t;
    t = SSL_implode_string(g_43);
    y_59 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_60))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_60), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_25), (ATerm) ATmakeAppl(sym_IntConst_1, w_59)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, y_59)))))));
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      l_60 = ATgetArgument(t, 0);
      m_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(l_60, m_60, t);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL;
  t = map_1_0(f_5, t);
  t = concat_0_0(t);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_60, (ATerm) ATinsert(ATempty, term_t_25));
  t = conc_0_0(t);
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_l_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_l_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, j_60));
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_60 = ATgetFirst((ATermList) t);
      r_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_60;
  if(match_int(t, 95))
    {
      ATerm t_60 = NULL;
      t = r_60;
      t = n_0(t);
      t_60 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_60), term_w_25), term_w_25);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm w_60 = NULL;
          t = r_60;
          t = n_0(t);
          w_60 = t;
          t = (ATerm) ATinsert(CheckATermList(w_60), term_w_25);
        }
      else
        {
          ATerm y_60 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = r_60;
          t = n_0(t);
          y_60 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_60), term_w_25), term_x_25), term_w_25);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm u_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  if(((c_61 != NULL) && (c_61 != t)))
    _fail(t);
  else
    c_61 = t;
  t = SSL_explode_string(not_null(c_61));
  {
    ATerm o_61 (ATerm t)
    {
      ATerm y_25 = t;
      int z_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_128(o_61, t);
          ;
          LocalPopChoice(z_25);
        }
      else
        {
          t = y_25;
          {
            ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
            n_61 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_61 = ATgetFirst((ATermList) t);
                m_61 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm p_43 = NULL,s_43 = NULL,j_11 = NULL;
                  t = SSLgetAnnotations(n_61);
                  p_43 = t;
                  t = m_61;
                  t = o_61(t);
                  s_43 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_43), l_61);
                  j_11 = t;
                  t = SSLsetAnnotations(j_11, p_43);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_61;
              }
          }
        }
      return(t);
    }
    t = o_61(t);
    if(((b_61 != NULL) && (b_61 != t)))
      _fail(t);
    else
      b_61 = t;
    t = SSL_implode_string(not_null(b_61));
  }
  return(t);
}
ATerm foldr_3_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  r_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_61;
      t = o_125(t);
    }
  else
    {
      ATerm w_61 = NULL,x_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_61 = ATgetFirst((ATermList) t);
          t_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_61;
      t = q_125(t);
      w_61 = t;
      t = t_61;
      t = foldr_3_0(o_125, p_125, q_125, t);
      x_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_61, x_61);
      t = p_125(t);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL;
  if(match_cons(t, sym__2))
    {
      k_62 = ATgetArgument(t, 0);
      l_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(k_62, l_62, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm c_10 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,i_62 = NULL;
  t = p_47;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            i_62 = ATgetArgument(t, 0);
            {
              ATerm c_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_26);
        t = i_62;
        t = foldr_3_0(g_5, h_5, i_5, t);
      }
    else
      {
        t = a_26;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm d_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_f_16;
      }
    z_61 = t;
    t = q_47;
    t = escape_1_0(Cify_1_0, t);
    b_62 = t;
    t = SSL_int_to_string(z_61);
    c_62 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_62), term_f_26), b_62), term_e_26);
    f_62 = t;
    t = SSL_concat_strings(f_62);
    a_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_47, z_61);
    d_62 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_26, a_62);
    e_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_47, z_61), (ATerm) ATmakeAppl(sym_Defined_2, term_g_26, a_62));
    t = f_10(j_5, d_62, e_62, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_62), term_g_13)));
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      q_62 = ATgetArgument(t, 0);
      r_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(q_62, r_62, t);
  return(t);
}
ATerm d_10 (ATerm n_47, ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  t = n_47;
  t = map_1_0(k_5, t);
  m_62 = t;
  t = n_47;
  t = InitConstructors_0_0(t);
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_62, (ATerm) ATinsert(ATempty, n_62));
  t = conc_0_0(t);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, o_62);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL;
  t_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_62;
    }
  else
    {
      ATerm l_5 (ATerm t)
      {
        t = not_null(v_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_62 != NULL) && (u_62 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_62 = ATgetFirst((ATermList) t);
          if(((v_62 != NULL) && (v_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(u_62);
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm c_63 = NULL;
  ATerm k_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          c_63 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_26);
      {
        ATerm e_63 = NULL;
        t = c_63;
        t = map_1_0(TranslateType_0_0, t);
        e_63 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_13, (ATerm) ATmakeAppl(sym_ParamList_1, e_63));
      }
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm p_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_f_13;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_63;
  {
    ATerm q_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            l_63 = ATgetArgument(t, 0);
            {
              ATerm t_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_26);
        {
          ATerm o_63 = NULL;
          t = l_63;
          t = map_1_0(TranslateType_0_0, t);
          o_63 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_63), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, o_63))));
        }
      }
    else
      {
        t = q_26;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm u_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_63), term_g_13));
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  ATerm d_64 (ATerm t)
  {
    ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
    c_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_64 = ATgetFirst((ATermList) t);
        b_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_44 = NULL,f_44 = NULL,l_11 = NULL;
          t = SSLgetAnnotations(c_64);
          c_44 = t;
          t = b_64;
          t = d_64(t);
          f_44 = t;
          t = (ATerm) ATinsert(CheckATermList(f_44), a_64);
          l_11 = t;
          t = SSLsetAnnotations(l_11, c_44);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_64;
        t = z_119(t);
      }
    return(t);
  }
  t = d_64(t);
  return(t);
}
ATerm p_64 (ATerm h_64, ATerm t)
{
  ATerm i_64 = NULL;
  t = SSL_explode_term(h_64);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL;
  if(((m_64 != NULL) && (m_64 != t)))
    _fail(t);
  else
    m_64 = t;
  if(match_cons(t, sym__2))
    {
      k_64 = ATgetArgument(t, 0);
      l_64 = ATgetArgument(t, 1);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              t = not_null(l_64);
              return(t);
            }
            t = not_null(k_64);
            t = at_end_1_0(m_5, t);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            t = p_64(not_null(m_64), t);
          }
      }
    }
  else
    {
      t = p_64(not_null(m_64), t);
    }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  ATerm k_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_64 = ATgetArgument(t, 0);
          t_64 = ATgetArgument(t, 1);
          {
            ATerm n_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_27);
      {
        ATerm y_64 = NULL;
        t = t_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        y_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_64, (ATerm) ATinsert(ATempty, term_f_13));
        t = conc_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, y_64)))));
      }
    }
  else
    {
      t = k_27;
      {
        ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            s_64 = ATgetArgument(t, 0);
            t_64 = ATgetArgument(t, 1);
            u_64 = ATgetArgument(t, 2);
            {
              ATerm p_27 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = t_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        f_65 = t;
        t = u_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        g_65 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_13)), g_65), f_65);
        t = concat_0_0(t);
        h_65 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, h_65)))));
      }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  n_65 = t;
  t = term_s_27;
  o_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, n_65);
  t = h_10(o_65, n_65, t);
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, m_65);
  return(t);
}
ATerm e_10 (ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
  t = j_47;
  t = map_1_0(SDefToDeclaration_0_0, t);
  i_65 = t;
  t = term_t_11;
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        t = map_1_0(q_5, t);
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATempty;
      }
    j_65 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(j_47), term_z_29)), i_65), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_29), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_l_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_s_28), term_u_28, term_g_13))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_28), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_j_29))), term_r_24)))))))), (ATerm) ATmakeAppl(sym_Signature_1, i_47)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_28, (ATerm) ATinsert(ATempty, term_m_28)))), j_65);
    t = concat_0_0(t);
    k_65 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, k_65);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  t = x_113(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = downup2_2_0(x_113, y_113, t);
      return(t);
    }
    t = SRTS_all(r_5, t);
    t = y_113(t);
  }
  return(t);
}
ATerm f_10 (ATerm h_140 (ATerm), ATerm k_85, ATerm i_85, ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  t = h_140(t);
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_65, k_85, i_85);
  t = r_10(p_65, k_85, i_85, t);
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_65 = NULL;
        t = term_g_30;
        x_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_65, term_g_30);
        t = q_10(p_65, x_65, t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_65 = ATgetFirst((ATermList) t);
        t_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_30;
    v_65 = t;
    t = (ATerm) ATinsert(CheckATermList(t_65), (ATerm) ATinsert(CheckATermList(q_65), k_85));
    w_65 = t;
    t = SSL_table_put(p_65, v_65, w_65);
    t = u_65;
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  t = term_l_30;
  a_66 = t;
  t = term_p_30;
  b_66 = t;
  t = term_q_30;
  t = f_10(s_5, a_66, b_66, t);
  t = z_65;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = repeat_1_0(x_5, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm r_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
      p_66 = t;
      if(match_cons(t, sym_Specification_1))
        {
          q_66 = ATgetArgument(t, 0);
          t = q_66;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_66 = ATgetFirst((ATermList) t);
              t_66 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_66;
          if(match_cons(t, sym_Signature_1))
            {
              s_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_66;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_66 = ATgetFirst((ATermList) t);
              o_66 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_66;
          if(match_cons(t, sym_Strategies_1))
            {
              n_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_66;
          t = e_10(s_66, n_66, t);
        }
      else
        {
          if(match_cons(t, sym_Signature_1))
            {
              q_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_66;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_66 = ATgetFirst((ATermList) t);
              t_66 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_66;
          if(match_cons(t, sym_Constructors_1))
            {
              s_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_66;
          t = d_10(s_66, t);
        }
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = r_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateDef_0_0(t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm w_30 = t;
              int z_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateStratMatchGuard_0_0(t);
                  ;
                  LocalPopChoice(z_30);
                }
              else
                {
                  t = w_30;
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
  t = downup2_2_0(u_5, w_5, t);
  {
    ATerm a_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_5, t);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = a_31;
      }
  }
  return(t);
}
ATerm i_10 (ATerm n_70, ATerm o_70, ATerm t)
{
  ATerm z_66 = NULL;
  t = SSL_fputc(n_70, o_70);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_66);
  return(t);
}
ATerm j_10 (ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm a_67 = NULL;
  t = SSL_write_term_to_stream_text(b_74, c_74);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_67);
  return(t);
}
ATerm l_10 (ATerm r_131 (ATerm), ATerm e_539, ATerm f_74, ATerm t)
{
  ATerm b_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_539, term_g_31);
  t = open_stream_0_0(t);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_67, f_74);
  t = r_131(t);
  t = fclose_0_0(t);
  t = f_74;
  return(t);
}
ATerm k_10 (ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm c_67 = NULL;
  t = SSL_write_term_to_stream_baf(x_73, y_73);
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_67);
  return(t);
}
ATerm b_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if(match_cons(i_31, sym_Stream_1))
        {
          t_44 = ATgetArgument(i_31, 0);
        }
      else
        _fail(t);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(t_44, u_44, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      if(match_cons(j_31, sym_Stream_1))
        {
          i_45 = ATgetArgument(j_31, 0);
        }
      else
        _fail(t);
      j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(i_45, j_45, t);
  f_45 = t;
  t = term_l_31;
  g_45 = t;
  t = f_45;
  if(match_cons(t, sym_Stream_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, f_45);
  t = i_10(g_45, h_45, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,s_68 = NULL,t_68 = NULL,p_11 = NULL,o_11 = NULL;
  if(((h_67 != NULL) && (h_67 != t)))
    _fail(t);
  else
    h_67 = t;
  if(match_cons(t, sym__2))
    {
      if(((o_67 != NULL) && (o_67 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_67 = ATgetArgument(t, 0);
      if(((p_67 != NULL) && (p_67 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(h_67));
  if(((n_67 != NULL) && (n_67 != t)))
    _fail(t);
  else
    n_67 = t;
  t = not_null(o_67);
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_67 != NULL) && (g_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(a_6, t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = term_v_31;
        if(((g_67 != NULL) && (g_67 != t)))
          _fail(t);
        else
          g_67 = t;
      }
    if(((q_67 != NULL) && (q_67 != t)))
      _fail(t);
    else
      q_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_67), not_null(p_67));
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = SSLsetAnnotations(not_null(o_11), not_null(n_67));
    t = not_null(h_67);
    if(match_cons(t, sym__2))
      {
        if(((j_67 != NULL) && (j_67 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_67 = ATgetArgument(t, 0);
        if(((k_67 != NULL) && (k_67 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_67 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(h_67));
    if(((i_67 != NULL) && (i_67 != t)))
      _fail(t);
    else
      i_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_67), (ATerm) ATmakeAppl(sym__2, not_null(g_67), not_null(k_67)));
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = SSLsetAnnotations(not_null(p_11), not_null(i_67));
    if(((m_67 != NULL) && (m_67 != t)))
      _fail(t);
    else
      m_67 = t;
    if(match_cons(t, sym__2))
      {
        if(((s_68 != NULL) && (s_68 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_68 = ATgetArgument(t, 0);
        if(((t_68 != NULL) && (t_68 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm x_31 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,s_11 = NULL;
          t = SSLgetAnnotations(not_null(m_67));
          m_44 = t;
          t = not_null(s_68);
          t = fetch_1_0(b_6, t);
          p_44 = t;
          t = not_null(t_68);
          if(match_cons(t, sym__2))
            {
              r_44 = ATgetArgument(t, 0);
              s_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_10(c_6, r_44, s_44, t);
          q_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
          s_11 = t;
          t = SSLsetAnnotations(s_11, m_44);
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = x_31;
          {
            ATerm z_44 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,u_11 = NULL;
            t = SSLgetAnnotations(not_null(m_67));
            z_44 = t;
            t = not_null(t_68);
            if(match_cons(t, sym__2))
              {
                d_45 = ATgetArgument(t, 0);
                e_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_10(f_6, d_45, e_45, t);
            c_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_68), c_45);
            u_11 = t;
            t = SSLsetAnnotations(u_11, z_44);
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
ATerm apply_strategy_1_0 (ATerm r_133 (ATerm), ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
  a_69 = t;
  t = dtime_0_0(t);
  t = a_69;
  t = r_133(t);
  z_68 = t;
  t = dtime_0_0(t);
  w_68 = t;
  t = z_68;
  if(match_cons(t, sym__2))
    {
      x_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_68), (ATerm) ATmakeAppl(sym_Runtime_1, w_68)), y_68);
  return(t);
}
ATerm p_69 (ATerm j_69, ATerm t)
{
  t = SSL_fclose(j_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  n_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_69 = ATgetArgument(t, 0);
      {
        ATerm g_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_69);
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = g_32;
            t = p_69(n_69, t);
          }
      }
    }
  else
    {
      t = p_69(n_69, t);
    }
  return(t);
}
ATerm m_10 (ATerm d_74, ATerm t)
{
  t = SSL_read_term_from_stream(d_74);
  return(t);
}
ATerm n_10 (ATerm p_70, ATerm q_70, ATerm t)
{
  ATerm q_69 = NULL;
  t = SSL_fopen(p_70, q_70);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_69 = NULL;
  t = SSL_stdin_stream();
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_69 = NULL;
  t = SSL_stdout_stream();
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_69 = NULL;
  t = SSL_stderr_stream();
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_69);
  return(t);
}
ATerm g_71 (ATerm z_69, ATerm t)
{
  ATerm a_70 = NULL;
  t = SSL_explode_term(z_69);
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
          {
            a_70 = ATgetFirst((ATermList) k_32);
            {
              ATerm l_32 = (ATerm) ATgetNext((ATermList) k_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_70;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_70;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_70;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_70;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm h_71 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,l_70 = NULL,i_12 = NULL;
  t = SSLgetAnnotations(f_70);
  i_70 = t;
  t = d_70;
  if(match_cons(t, sym_Path_1))
    {
      l_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_70, e_70);
  i_12 = t;
  t = SSLsetAnnotations(i_12, i_70);
  if(match_cons(t, sym__2))
    {
      g_70 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(g_70, h_70, t);
  return(t);
}
ATerm i_71 (ATerm t_70, ATerm u_70, ATerm v_70, ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,b_71 = NULL,j_12 = NULL;
  t = SSLgetAnnotations(v_70);
  y_70 = t;
  t = SSL_is_string(t_70);
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_71, u_70);
  j_12 = t;
  t = SSLsetAnnotations(j_12, y_70);
  if(match_cons(t, sym__2))
    {
      w_70 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(w_70, x_70, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_32 = ATgetArgument(t, 0);
      ATerm n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_71 = t;
  if(match_cons(t, sym__2))
    {
      e_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_71(d_71, t);
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm s_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_71(e_71, f_71, d_71, t);
                  ;
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = s_32;
                  t = i_71(e_71, f_71, d_71, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_71(d_71, t);
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_71 = NULL;
      m_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_71, term_x_32);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = debug_1_0(g_6, t);
      _fail(t);
    }
  k_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_10(l_71, t);
  j_71 = t;
  t = k_71;
  t = fclose_0_0(t);
  t = j_71;
  return(t);
}
ATerm fetch_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm k_72 (ATerm t)
  {
    ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
    h_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_72 = ATgetFirst((ATermList) t);
        j_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_45 = NULL,b_46 = NULL,n_12 = NULL;
          t = SSLgetAnnotations(h_72);
          v_45 = t;
          t = i_72;
          t = t_119(t);
          b_46 = t;
          t = (ATerm) ATinsert(CheckATermList(j_72), b_46);
          n_12 = t;
          t = SSLsetAnnotations(n_12, v_45);
          ;
          LocalPopChoice(z_32);
        }
      else
        {
          t = y_32;
          {
            ATerm l_46 = NULL,o_46 = NULL,e_13 = NULL;
            t = SSLgetAnnotations(h_72);
            l_46 = t;
            t = j_72;
            t = k_72(t);
            o_46 = t;
            t = (ATerm) ATinsert(CheckATermList(o_46), i_72);
            e_13 = t;
            t = SSLsetAnnotations(e_13, l_46);
          }
        }
    }
    return(t);
  }
  t = k_72(t);
  return(t);
}
ATerm h_10 (ATerm r_65, ATerm s_65, ATerm t)
{
  t = SSL_strcat(r_65, s_65);
  return(t);
}
ATerm debug_1_0 (ATerm p_131 (ATerm), ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  n_72 = t;
  t = p_131(t);
  o_72 = t;
  t = term_u_9;
  p_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_72), o_72);
  q_72 = t;
  t = SSL_printnl(p_72, q_72);
  t = n_72;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_72 = NULL;
      x_72 = t;
      t = SSL_is_string(x_72);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = f_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_6, t);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
              d_73 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_73 = ATgetArgument(t, 0);
                  t = e_73;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_73 = ATgetArgument(t, 0);
                      t = e_73;
                      {
                        ATerm n_33 = t;
                        int o_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_33);
                          }
                        else
                          {
                            t = n_33;
                            t = debug_1_0(l_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_73 = NULL,k_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_73 = ATgetArgument(t, 0);
                          f_73 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_73;
                      t = eval_config_0_0(t);
                      j_73 = t;
                      t = f_73;
                      t = eval_config_0_0(t);
                      k_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_73, k_73);
                      t = h_10(j_73, k_73, t);
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
  ATerm o_73 = NULL,p_73 = NULL;
  o_73 = t;
  t = term_w_10;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, o_73);
  t = q_10(p_73, o_73, t);
  {
    ATerm p_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_73 = NULL,r_73 = NULL;
        t = eval_config_0_0(t);
        q_73 = t;
        t = term_w_10;
        r_73 = t;
        t = SSL_table_put(r_73, o_73, q_73);
        t = q_73;
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = p_33;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  {
    ATerm z_33 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_73 = NULL;
        t = term_c_34;
        t = get_config_0_0(t);
        z_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_73, term_d_34);
        t = geq_0_0(t);
        t = v_73;
        t = c_133(t);
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = z_33;
        t = v_73;
      }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm h_74 = NULL;
  h_74 = t;
  if(match_string(t, "-k"))
    {
      t = h_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_74;
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
  i_74 = t;
  t = SSL_string_to_int(i_74);
  j_74 = t;
  t = term_e_34;
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_34, j_74);
  t = t_10(k_74, j_74, t);
  t = i_74;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, n_6, p_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm m_74 = NULL;
  m_74 = t;
  if(match_string(t, "-S"))
    {
      t = m_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_74;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL;
  t = term_c_34;
  n_74 = t;
  t = term_f_16;
  o_74 = t;
  t = term_g_34;
  t = t_10(n_74, o_74, t);
  t = term_h_34;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
  p_74 = t;
  t = SSL_string_to_int(p_74);
  q_74 = t;
  t = term_c_34;
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_34, q_74);
  t = t_10(r_74, q_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_74);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL;
  t = term_k_34;
  s_74 = t;
  t = term_r_9;
  t_74 = t;
  t = term_l_34;
  t = t_10(s_74, t_74, t);
  t = term_q_34;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, s_6, t_6, t);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_6, x_6, y_6, t);
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            t = Option_3_0(z_6, a_7, d_7, t);
          }
      }
    }
  return(t);
}
ATerm t_10 (ATerm t_85, ATerm u_85, ATerm t)
{
  ATerm u_74 = NULL;
  t = term_w_10;
  u_74 = t;
  t = SSL_table_put(u_74, t_85, u_85);
  t = (ATerm) ATmakeAppl(sym__3, term_w_10, t_85, u_85);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
      t = term_r_9;
      t = d_0(t);
      z_74 = t;
      t = term_z_34;
      a_75 = t;
      t = term_a_35;
      b_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_34, term_a_35, z_74);
      t = r_10(a_75, b_75, z_74, t);
      _fail(t);
    }
  else
    {
      ATerm e_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_74 = ATgetFirst((ATermList) t);
          y_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_74;
      t = a_0(t);
      t = term_r_9;
      t = b_0(t);
      e_75 = t;
      t = (ATerm) ATinsert(CheckATermList(y_74), e_75);
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_75 = NULL;
  g_75 = t;
  if(match_string(t, "-o"))
    {
      t = g_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_75;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL;
  h_75 = t;
  t = term_b_35;
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, h_75);
  t = t_10(i_75, h_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_75);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_7, i_7, j_7, t);
  return(t);
}
ATerm r_10 (ATerm m_79, ATerm n_79, ATerm l_79, ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
  k_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_79, n_79);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_35 = ATgetArgument(t, 0);
            ATerm k_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_79, n_79);
        t = q_10(m_79, n_79, t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = (ATerm) ATempty;
      }
    l_75 = t;
    t = (ATerm) ATinsert(CheckATermList(l_75), l_79);
    m_75 = t;
    t = SSL_table_put(m_79, n_79, m_75);
    t = k_75;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL;
      t = term_r_9;
      t = m_0(t);
      x_75 = t;
      t = term_z_34;
      y_75 = t;
      t = term_a_35;
      z_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_34, term_a_35, x_75);
      t = r_10(y_75, z_75, x_75, t);
      _fail(t);
    }
  else
    {
      ATerm d_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_75 = ATgetFirst((ATermList) t);
          u_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_75 = ATgetFirst((ATermList) t);
          w_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_75;
      t = i_0(t);
      t = v_75;
      t = k_0(t);
      d_76 = t;
      t = (ATerm) ATinsert(CheckATermList(w_75), d_76);
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm j_76 = NULL;
  j_76 = t;
  if(match_string(t, "-i"))
    {
      t = j_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_76;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL;
  k_76 = t;
  t = term_l_35;
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_35, k_76);
  t = t_10(l_76, k_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_76);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, l_7, m_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_9;
  t = whoami_0_0(t);
  m_76 = t;
  t = term_u_9;
  o_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_35), m_76);
  p_76 = t;
  t = SSL_printnl(o_76, p_76);
  t = term_g_10;
  n_76 = t;
  t = SSL_exit(n_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_10 (ATerm b_68, ATerm c_68, ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_68, c_68);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = SSL_addr(b_68, c_68);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
  r_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_76;
      t = m_125(t);
    }
  else
    {
      ATerm w_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_76 = ATgetFirst((ATermList) t);
          t_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_76;
      t = foldr_2_0(m_125, n_125, t);
      w_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_76, w_76);
      t = n_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      m_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(l_47, m_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_76 = NULL,f_47 = NULL,g_47 = NULL;
  t = times_0_0(t);
  g_47 = t;
  t = SSL_explode_term(g_47);
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_47;
  t = foldr_2_0(n_7, q_7, t);
  z_76 = t;
  t = SSL_TicksToSeconds(z_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  if(match_cons(t, sym__2))
    {
      l_77 = ATgetArgument(t, 0);
      m_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_77;
        if((l_77 != t))
          {
            _fail(t);
          }
        t = k_77;
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        t = (ATerm) ATmakeAppl(sym__2, l_77, m_77);
        {
          ATerm x_35 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_77, m_77);
              ;
              LocalPopChoice(d_36);
            }
          else
            {
              t = x_35;
              t = SSL_gtr(l_77, m_77);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_77, m_77);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm q_77 = NULL;
  q_77 = t;
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_77 = NULL;
        t = term_c_34;
        t = get_config_0_0(t);
        s_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_77, term_g_10);
        t = geq_0_0(t);
        t = q_77;
        t = b_133(t);
        ;
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        t = q_77;
      }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL;
  t = run_time_0_0(t);
  u_77 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  v_77 = t;
  t = term_u_9;
  x_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_36), u_77), term_h_36), v_77);
  y_77 = t;
  t = SSL_printnl(x_77, y_77);
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_36), u_77), term_h_36), v_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_16;
  z_77 = t;
  t = SSL_exit(z_77);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL;
  i_78 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_78;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_78 = ATgetArgument(t, 0);
          {
            ATerm m_48 = NULL,h_13 = NULL;
            t = SSLgetAnnotations(i_78);
            m_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_78);
            h_13 = t;
            t = SSLsetAnnotations(h_13, m_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_78;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_134 (ATerm), ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      t = fetch_1_0(t_7, t);
    }
  t = p_134(t);
  return(t);
}
ATerm map_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  ATerm d_79 (ATerm t)
  {
    ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
    a_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_79;
      }
    else
      {
        ATerm v_48 = NULL,y_48 = NULL,z_48 = NULL,j_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_79 = ATgetFirst((ATermList) t);
            c_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_79);
        v_48 = t;
        t = b_79;
        t = j_119(t);
        y_48 = t;
        t = c_79;
        t = d_79(t);
        z_48 = t;
        t = (ATerm) ATinsert(CheckATermList(z_48), y_48);
        j_13 = t;
        t = SSLsetAnnotations(j_13, v_48);
      }
    return(t);
  }
  t = d_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_79 = ATgetFirst((ATermList) t);
      h_79 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_79 = NULL,q_79 = NULL;
        ATerm w_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_79)), not_null(q_79));
          return(t);
        }
        t = not_null(h_79);
        t = g_0(t);
        if(((p_79 != NULL) && (p_79 != t)))
          _fail(t);
        else
          p_79 = t;
        t = not_null(g_79);
        t = f_0(t);
        if(((q_79 != NULL) && (q_79 != t)))
          _fail(t);
        else
          q_79 = t;
        t = not_null(h_79);
        t = reverse_acc_2_0(f_0, w_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_9;
      t = g_0(t);
    }
  return(t);
}
ATerm q_10 (ATerm d_81, ATerm e_81, ATerm t)
{
  t = SSL_table_get(d_81, e_81);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,o_13 = NULL;
  w_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_79);
  u_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_79);
  o_13 = t;
  t = SSLsetAnnotations(o_13, u_79);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm a_80 = NULL;
  a_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_80), term_u_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL;
  ATerm w_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = w_36;
      t = fetch_1_0(y_7, t);
    }
  t = term_z_36;
  t = echo_0_0(t);
  t = term_z_34;
  s_79 = t;
  t = term_a_35;
  t_79 = t;
  t = term_a_37;
  t = q_10(s_79, t_79, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(d_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL;
  c_80 = t;
  {
    ATerm b_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_80;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_37 = ATgetFirst((ATermList) t);
                ATerm i_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_80;
          }
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = b_37;
        t = (ATerm) ATinsert(ATempty, c_80);
      }
    d_80 = t;
    t = term_v_31;
    e_80 = t;
    t = SSL_printnl(e_80, d_80);
    t = c_80;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_35;
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
ATerm g_8 (ATerm t)
{
  ATerm i_80 = NULL,j_80 = NULL;
  t = term_j_37;
  i_80 = t;
  t = term_r_9;
  j_80 = t;
  t = term_n_37;
  t = t_10(i_80, j_80, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_o_37;
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
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
  t = term_j_37;
  m_80 = t;
  t = term_r_9;
  n_80 = t;
  t = term_n_37;
  t = t_10(m_80, n_80, t);
  t = term_p_37;
  k_80 = t;
  t = term_r_9;
  l_80 = t;
  t = term_z_37;
  t = t_10(k_80, l_80, t);
  t = term_a_38;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, g_8, h_8, t);
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      t = Option_3_0(i_8, m_8, n_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,r_13 = NULL;
  t_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_80 = ATgetFirst((ATermList) t);
      q_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_80);
  o_80 = t;
  t = p_80;
  t = x_90(t);
  r_80 = t;
  t = q_80;
  t = y_90(t);
  s_80 = t;
  t = (ATerm) ATinsert(CheckATermList(s_80), r_80);
  r_13 = t;
  t = SSLsetAnnotations(r_13, o_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_137 (ATerm), ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,f_81 = NULL,g_81 = NULL,u_13 = NULL;
  if(((y_80 != NULL) && (y_80 != t)))
    _fail(t);
  else
    y_80 = t;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_38;
        t = g_137(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
      }
    t = not_null(y_80);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_81 != NULL) && (a_81 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_81 = ATgetFirst((ATermList) t);
        if(((b_81 != NULL) && (b_81 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_81 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(y_80));
    if(((z_80 != NULL) && (z_80 != t)))
      _fail(t);
    else
      z_80 = t;
    t = term_o_35;
    if(((g_81 != NULL) && (g_81 != t)))
      _fail(t);
    else
      g_81 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_35, not_null(a_81));
    t = t_10(not_null(g_81), not_null(a_81), t);
    t = not_null(b_81);
    {
      ATerm q_81 (ATerm t)
      {
        ATerm j_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_38 = t;
            int r_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_81 = NULL;
                j_81 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_81;
                ;
                LocalPopChoice(r_38);
              }
            else
              {
                t = q_38;
                t = g_137(t);
                t = Cons_2_0(_id, q_81, t);
              }
            ;
            LocalPopChoice(n_38);
          }
        else
          {
            t = j_38;
            {
              ATerm m_81 = NULL,n_81 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_81 = ATgetFirst((ATermList) t);
                  n_81 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_81), (ATerm) ATmakeAppl(sym_Undefined_1, m_81));
            }
          }
        return(t);
      }
      t = q_81(t);
      if(((f_81 != NULL) && (f_81 != t)))
        _fail(t);
      else
        f_81 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(f_81)), (ATerm) ATmakeAppl(sym_Program_1, not_null(a_81)));
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = SSLsetAnnotations(not_null(u_13), not_null(z_80));
    }
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm c_82 = NULL;
  c_82 = t;
  if(match_string(t, "--help"))
    {
      t = c_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_82;
        }
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL;
  t = term_t_36;
  d_82 = t;
  t = term_r_9;
  e_82 = t;
  t = term_u_38;
  t = t_10(d_82, e_82, t);
  t = term_v_38;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_137 (ATerm), ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  if(((x_81 != NULL) && (x_81 != t)))
    _fail(t);
  else
    x_81 = t;
  t = term_z_34;
  if(((z_81 != NULL) && (z_81 != t)))
    _fail(t);
  else
    z_81 = t;
  t = term_a_35;
  if(((a_82 != NULL) && (a_82 != t)))
    _fail(t);
  else
    a_82 = t;
  t = (ATerm) ATempty;
  if(((b_82 != NULL) && (b_82 != t)))
    _fail(t);
  else
    b_82 = t;
  t = SSL_table_put(not_null(z_81), not_null(a_82), not_null(b_82));
  t = not_null(x_81);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm x_38 = t;
      int y_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_137(t);
          ;
          LocalPopChoice(y_38);
        }
      else
        {
          t = x_38;
          {
            ATerm z_38 = t;
            int a_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_8, r_8, t_8, t);
                ;
                LocalPopChoice(a_39);
              }
            else
              {
                t = z_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_8, t);
    {
      ATerm b_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_82 = NULL;
          l_82 = t;
          {
            ATerm h_39 = t;
            int i_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_49 = NULL;
                t = l_82;
                {
                  ATerm m_39 = t;
                  int n_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_39);
                    }
                  else
                    {
                      t = m_39;
                      t = fetch_1_0(v_8, t);
                    }
                  t = l_82;
                  t = default_system_usage_0_0(t);
                  t = term_f_16;
                  k_49 = t;
                  t = SSL_exit(k_49);
                }
                ;
                LocalPopChoice(i_39);
              }
            else
              {
                t = h_39;
                {
                  ATerm o_49 = NULL;
                  t = term_j_37;
                  t = get_config_0_0(t);
                  t = l_82;
                  t = default_system_about_0_0(t);
                  t = term_f_16;
                  o_49 = t;
                  t = SSL_exit(o_49);
                }
              }
          }
          ;
          LocalPopChoice(f_39);
        }
      else
        {
          t = b_39;
          {
            ATerm o_39 = t;
            int p_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
                ATerm y_8 (ATerm t)
                {
                  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,x_13 = NULL;
                  r_82 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_82);
                  p_82 = t;
                  t = q_82;
                  if(((v_81 != NULL) && (v_81 != t)))
                    _fail(t);
                  else
                    v_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_82);
                  x_13 = t;
                  t = SSLsetAnnotations(x_13, p_82);
                  return(t);
                }
                t = fetch_1_0(y_8, t);
                t = term_u_9;
                if(((n_82 != NULL) && (n_82 != t)))
                  _fail(t);
                else
                  n_82 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_81)), term_q_39);
                if(((o_82 != NULL) && (o_82 != t)))
                  _fail(t);
                else
                  o_82 = t;
                t = SSL_printnl(not_null(n_82), not_null(o_82));
                t = (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_81)), term_q_39));
                t = default_system_usage_0_0(t);
                t = term_g_10;
                if(((m_82 != NULL) && (m_82 != t)))
                  _fail(t);
                else
                  m_82 = t;
                t = SSL_exit(not_null(m_82));
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
              }
          }
        }
      if(((w_81 != NULL) && (w_81 != t)))
        _fail(t);
      else
        w_81 = t;
      t = term_z_34;
      if(((y_81 != NULL) && (y_81 != t)))
        _fail(t);
      else
        y_81 = t;
      t = SSL_table_destroy(not_null(y_81));
      t = not_null(w_81);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  t = parse_options_1_0(r_134, t);
  w_82 = t;
  t = term_r_39;
  z_82 = t;
  t = SSL_table_create(z_82);
  t = term_r_39;
  x_82 = t;
  t = term_s_39;
  y_82 = t;
  t = SSL_table_put(x_82, y_82, w_82);
  t = w_82;
  t = t_134(t);
  {
    ATerm t_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_134, t);
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = t_39;
        {
          ATerm w_39 = t;
          int y_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_134(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_39);
            }
          else
            {
              t = w_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = if_verbose2_1_0(m_9, t);
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
  ATerm a_83 = NULL,b_83 = NULL;
  t = term_z_39;
  a_83 = t;
  t = term_r_9;
  b_83 = t;
  t = term_a_40;
  t = t_10(a_83, b_83, t);
  t = term_b_40;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  c_83 = t;
  t = term_o_35;
  t = get_config_0_0(t);
  d_83 = t;
  t = term_u_9;
  e_83 = t;
  t = (ATerm) ATinsert(ATempty, d_83);
  f_83 = t;
  t = SSL_printnl(e_83, f_83);
  t = c_83;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_134(t);
        ;
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        {
          ATerm f_40 = t;
          int i_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(i_40);
            }
          else
            {
              t = f_40;
              {
                ATerm j_40 = t;
                int m_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_40);
                  }
                else
                  {
                    t = j_40;
                    {
                      ATerm n_40 = t;
                      int o_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_9, e_9, j_9, t);
                          ;
                          LocalPopChoice(o_40);
                        }
                      else
                        {
                          t = n_40;
                          {
                            ATerm p_40 = t;
                            int q_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_40);
                              }
                            else
                              {
                                t = p_40;
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
    ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL;
    if(((h_83 != NULL) && (h_83 != t)))
      _fail(t);
    else
      h_83 = t;
    {
      ATerm r_40 = t;
      int w_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_83 != NULL) && (g_83 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_83 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_9, t);
          ;
          LocalPopChoice(w_40);
        }
      else
        {
          t = r_40;
          t = term_x_40;
          if(((g_83 != NULL) && (g_83 != t)))
            _fail(t);
          else
            g_83 = t;
        }
      t = not_null(g_83);
      t = ReadFromFile_0_0(t);
      if(((i_83 != NULL) && (i_83 != t)))
        _fail(t);
      else
        i_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_83), not_null(i_83));
      t = apply_strategy_1_0(a_134, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_9, c_134, b_9, c_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
