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
ATerm term_w_39;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_z_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_g_36;
ATerm term_w_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_j_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_r_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_f_33;
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
ATerm term_z_31;
ATerm term_s_31;
ATerm term_m_31;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_y_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_d_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_w_22;
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
ATerm term_e_22;
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
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
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
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_b_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Id_1, term_e_12);
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
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_12, (ATerm) ATempty);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATempty);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_13, term_g_13);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_i_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_v_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Id_1, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_IntConst_1, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Id_1, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_o_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Id_1, term_r_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, term_a_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_j_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Id_1, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Id_1, term_r_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Id_1, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_18, (ATerm) ATempty);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_19, term_g_13);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_19, (ATerm) ATempty);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_19, term_g_13);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Id_1, term_l_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Id_1, term_z_19);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_m_19);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_o_18);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_d_21, term_l_17);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Id_1, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, term_o_18);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Id_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_n_21, term_l_17);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_21, (ATerm) ATempty);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Id_1, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Id_1, term_v_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_21, (ATerm) ATempty);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Id_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_22, (ATerm) ATempty);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_22, term_g_13);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Id_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Id_1, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Id_1, term_o_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Id_1, term_w_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_23, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_23, term_g_13);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Id_1, term_s_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_22, term_o_18);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Id_1, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Return_1, term_o_18);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_18, term_g_13);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_13, term_i_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Id_1, term_w_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Id_1, term_y_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_12, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Id_1, term_c_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_26, (ATerm) ATempty);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_28, (ATerm) ATempty);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Some_1, term_i_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_12, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Id_1, term_l_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_28, (ATerm) ATempty);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Id_1, term_v_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Id_1, term_c_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_CallT_3, term_m_29, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_SDefT_4, term_k_29, (ATerm)ATempty, (ATerm)ATempty, term_o_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Op_2, term_u_29, (ATerm) ATempty);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Defined_2, term_a_30, term_b_18);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_e_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_c_16);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_16);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_o_9);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_l_33);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_j_35, term_o_9);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_o_9);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_v_34, term_o_9);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_o_9);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_9 (ATerm q_70, ATerm r_70, ATerm);
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
ATerm n_9 (ATerm l_27, ATerm n_27, ATerm m_27, ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm u_2 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm e_3 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_97 (ATerm), ATerm);
ATerm f_3 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm q_9 (ATerm x_26, ATerm a_27, ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm r_9 (ATerm p_31, ATerm o_31, ATerm);
ATerm s_9 (ATerm g_169, ATerm l_31, ATerm n_31, ATerm);
ATerm new_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm w_52 (ATerm x_35, ATerm y_35, ATerm z_35, ATerm a_36, ATerm);
ATerm x_52 (ATerm t_37, ATerm u_37, ATerm y_37, ATerm);
ATerm y_52 (ATerm e_38, ATerm g_38, ATerm i_38, ATerm);
ATerm z_52 (ATerm u_38, ATerm x_38, ATerm y_38, ATerm e_39, ATerm);
ATerm a_53 (ATerm k_39, ATerm l_39, ATerm o_39, ATerm p_39, ATerm);
ATerm b_53 (ATerm i_40, ATerm k_40, ATerm n_40, ATerm p_40, ATerm);
ATerm c_53 (ATerm y_40, ATerm b_41, ATerm d_41, ATerm h_41, ATerm);
ATerm d_53 (ATerm n_41, ATerm s_41, ATerm u_41, ATerm v_41, ATerm w_41, ATerm z_41, ATerm a_42, ATerm b_42, ATerm);
ATerm e_53 (ATerm a_43, ATerm c_43, ATerm g_43, ATerm h_43, ATerm l_43, ATerm n_43, ATerm);
ATerm f_53 (ATerm f_44, ATerm g_44, ATerm h_44, ATerm j_44, ATerm k_44, ATerm l_44, ATerm);
ATerm g_53 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm);
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
ATerm thread_map_1_0 (ATerm t_110 (ATerm), ATerm);
ATerm n_57 (ATerm v_54, ATerm w_54, ATerm x_54, ATerm y_54, ATerm z_54, ATerm);
ATerm o_57 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm c_56, ATerm);
ATerm p_57 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm k_56, ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm z_9 (ATerm v_33, ATerm u_33, ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm c_10 (ATerm n_64, ATerm o_64, ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm d_10 (ATerm r_32, ATerm p_32, ATerm);
ATerm f_5 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm p_113 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm e_10 (ATerm e_32, ATerm d_32, ATerm);
ATerm k_5 (ATerm);
ATerm f_10 (ATerm b_32, ATerm);
ATerm concat_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_104 (ATerm), ATerm);
ATerm b_67 (ATerm t_66, ATerm);
ATerm conc_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm g_10 (ATerm w_31, ATerm x_31, ATerm);
ATerm downup2_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm h_10 (ATerm d_125 (ATerm), ATerm a_70, ATerm y_69, ATerm);
ATerm s_5 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm k_10 (ATerm d_55, ATerm e_55, ATerm);
ATerm l_10 (ATerm r_58, ATerm s_58, ATerm);
ATerm n_10 (ATerm n_116 (ATerm), ATerm b_500, ATerm v_58, ATerm);
ATerm m_10 (ATerm n_58, ATerm o_58, ATerm);
ATerm a_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_118 (ATerm), ATerm);
ATerm x_72 (ATerm r_72, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_10 (ATerm t_58, ATerm);
ATerm p_10 (ATerm f_55, ATerm g_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_74 (ATerm h_73, ATerm);
ATerm j_74 (ATerm l_73, ATerm m_73, ATerm n_73, ATerm);
ATerm k_74 (ATerm v_73, ATerm w_73, ATerm x_73, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm j_10 (ATerm h_50, ATerm i_50, ATerm);
ATerm debug_1_0 (ATerm l_116 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_117 (ATerm), ATerm);
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
ATerm v_10 (ATerm j_70, ATerm k_70, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_10 (ATerm c_64, ATerm d_64, ATerm b_64, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_10 (ATerm r_52, ATerm s_52, ATerm);
ATerm foldr_2_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_117 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm need_help_1_0 (ATerm l_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm s_10 (ATerm t_65, ATerm u_65, ATerm);
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
ATerm Cons_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_122 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm w_8 (ATerm);
ATerm parse_options_1_0 (ATerm b_122 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm iowrap_3_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm);
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
ATerm m_9 (ATerm q_70, ATerm r_70, ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
  t = q_70;
  {
    ATerm r_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, r_70);
    t = conc_0_0(t);
    g_1 = t;
    t = term_w_10;
    i_1 = t;
    t = SSL_table_put(i_1, q_70, g_1);
    t = (ATerm) ATmakeAppl(sym__3, term_w_10, q_70, g_1);
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
  t = term_z_10;
  t = debug_1_0(l_1, t);
  j_1 = t;
  t = (ATerm) ATempty;
  m_1 = t;
  t = term_b_11;
  n_1 = t;
  t = term_e_11;
  t = h_10(s_1, m_1, n_1, t);
  t = j_1;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_i_11;
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
  t = h_10(d_2, o_1, p_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, o_1);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_t_11;
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
  t = term_u_11;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, q_1);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, (ATerm) ATinsert(ATempty, q_1));
  t = m_9(r_1, t_1, t);
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
      t = Option_3_0(b_1, e_1, f_1, t);
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
ATerm n_9 (ATerm l_27, ATerm n_27, ATerm m_27, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, n_27)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_27), term_a_12, m_27)));
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
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_2), term_g_13)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  ATerm i_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL,e_0 = NULL,v_0 = NULL;
      t = (ATerm) ATempty;
      e_0 = t;
      t = term_m_13;
      v_0 = t;
      t = term_n_13;
      t = c_10(v_0, e_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm o_13 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) o_13) != ATmakeSymbol("h_0", 0, ATtrue)))
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
ATerm oncetd_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm p_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_99(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = p_13;
        t = SRTS_one(l_2, t);
      }
    return(t);
  }
  t = l_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm u_2 (ATerm), ATerm t)
{
  ATerm v_13 = t;
  int x_13 = stack_ptr;
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
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_2(t);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
          }
      }
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = v_13;
      t = u_2(t);
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
  ATerm i_6 = NULL,j_6 = NULL;
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
      ATerm e_14 = ATgetFirst((ATermList) t);
      if(match_cons(e_14, sym_Compound_2))
        {
          ATerm f_14 = ATgetArgument(e_14, 0);
          if(((ATgetType(f_14) != AT_LIST) || !(ATisEmpty(f_14))))
            _fail(t);
          x_6 = ATgetArgument(e_14, 1);
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
                        ATerm k_14 = t;
                        int l_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_5 = NULL;
                            t = j_4;
                            t = listbu1_1_0(v_2, t);
                            n_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, n_5);
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
                                  t = (ATerm) ATmakeAppl(sym__2, i_4, o_4);
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
                        ATerm p_14 = t;
                        int s_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_6 = NULL;
                            t = j_4;
                            t = listbu1_1_0(x_2, t);
                            s_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, i_4, s_6);
                            ;
                            LocalPopChoice(s_14);
                          }
                        else
                          {
                            t = p_14;
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
ATerm repeat_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_97(t);
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
                ATerm x_5 = NULL,b_6 = NULL,t_2 = NULL;
                t = SSLgetAnnotations(b_12);
                x_5 = t;
                t = c_12;
                {
                  ATerm z_14 = t;
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
                      t = z_14;
                    }
                  b_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, b_6, d_12);
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
  t = term_a_15;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm q_9 (ATerm x_26, ATerm a_27, ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,o_14 = NULL,q_14 = NULL;
  t = x_26;
  if(match_cons(t, sym_Op_2))
    {
      q_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
      {
        ATerm t_6 = NULL,w_6 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(x_26);
        t_6 = t;
        t = o_14;
        t = map_1_0(Cache_0_0, t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, q_14, w_6);
        z_2 = t;
        t = SSLsetAnnotations(z_2, t_6);
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
            ATerm d_7 = NULL,h_7 = NULL,j_7 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(x_26);
            d_7 = t;
            t = q_14;
            t = Cache_0_0(t);
            h_7 = t;
            t = o_14;
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
              q_14 = ATgetArgument(t, 0);
              {
                ATerm u_7 = NULL,k_8 = NULL;
                t = SSLgetAnnotations(x_26);
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, q_14);
                k_8 = t;
                t = SSLsetAnnotations(k_8, u_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  q_14 = ATgetArgument(t, 0);
                  {
                    ATerm h_8 = NULL,l_8 = NULL;
                    t = SSLgetAnnotations(x_26);
                    h_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, q_14);
                    l_8 = t;
                    t = SSLsetAnnotations(l_8, h_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      q_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_8 = NULL,t_8 = NULL;
                        t = SSLgetAnnotations(x_26);
                        o_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, q_14);
                        t_8 = t;
                        t = SSLsetAnnotations(t_8, o_8);
                      }
                    }
                  else
                    {
                      ATerm s_8 = NULL,v_8 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          q_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(x_26);
                      s_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, q_14);
                      v_8 = t;
                      t = SSLsetAnnotations(v_8, s_8);
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
  t = j_10(b_13, u_12, t);
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, v_12);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_26, (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, v_12));
  t = h_10(g_3, x_26, a_13, t);
  t = v_12;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,y_8 = NULL,b_9 = NULL;
        t = (ATerm) ATempty;
        y_8 = t;
        t = term_m_13;
        b_9 = t;
        t = term_n_13;
        t = c_10(b_9, y_8, t);
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
    w_12 = t;
    t = (ATerm) ATempty;
    y_12 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, (ATerm) ATinsert(CheckATermList(w_12), (ATerm) ATmakeAppl(sym__3, u_12, v_12, a_27)));
    z_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, (ATerm) ATinsert(CheckATermList(w_12), (ATerm) ATmakeAppl(sym__3, u_12, v_12, a_27))));
    t = h_10(h_3, y_12, z_12, t);
    t = (ATerm) ATmakeAppl(sym_Id_1, v_12);
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_9 = NULL,c_11 = NULL;
        t = term_a_15;
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_15, q_15);
        t = c_10(c_11, q_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_15) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            v_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, v_9);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          ATerm h_11 = NULL,k_11 = NULL;
          t = term_a_15;
          k_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_15, q_15);
          t = c_10(k_11, q_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm k_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_15) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              h_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_11;
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
        ATerm k_16 = NULL,s_11 = NULL;
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
                int r_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(r_15);
                  }
                else
                  {
                    t = p_15;
                  }
              }
            }
          s_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_16, s_11);
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm u_15 = ATgetArgument(t, 0);
                    ATerm v_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, k_16, s_11);
                t = q_9(k_16, s_11, t);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                {
                  ATerm i_12 = NULL,k_12 = NULL;
                  k_12 = t;
                  t = SSL_explode_term(k_12);
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_15 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) w_15) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm x_15 = ATgetArgument(t, 1);
                        if(((ATgetType(x_15) == AT_LIST) && !(ATisEmpty(x_15))))
                          {
                            ATerm y_15 = ATgetFirst((ATermList) x_15);
                            ATerm z_15 = (ATerm) ATgetNext((ATermList) x_15);
                            if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
                              {
                                i_12 = ATgetFirst((ATermList) z_15);
                                {
                                  ATerm b_16 = (ATerm) ATgetNext((ATermList) z_15);
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
                  t = i_12;
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm r_9 (ATerm p_31, ATerm o_31, ATerm t)
{
  ATerm n_16 = NULL;
  t = new_0_0(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_16), term_g_13), (ATerm) ATmakeAppl(sym_AssignInit_1, o_31)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, p_31, (ATerm) ATmakeAppl(sym_Id_1, n_16))));
  return(t);
}
ATerm s_9 (ATerm g_169, ATerm l_31, ATerm n_31, ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL,r_16 = NULL;
  t = SSLgetAnnotations(g_169);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_31);
  r_16 = t;
  t = SSLsetAnnotations(r_16, o_16);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, q_16, n_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(e_13, f_13, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      v_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, t_18), v_18)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          v_18 = ATgetArgument(t, 0);
          t_18 = ATgetArgument(t, 1);
          {
            ATerm t_12 = NULL,x_12 = NULL,r_13 = NULL,u_13 = NULL;
            t = t_18;
            t = foldr_3_0(j_3, k_3, l_3, t);
            t_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_18, t_12);
            r_13 = t;
            t = term_g_16;
            u_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATmakeAppl(sym__2, v_18, t_12));
            t = c_10(u_13, r_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm h_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(CheckATermList(t_18), (ATerm) ATmakeAppl(sym_Id_1, x_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              v_18 = ATgetArgument(t, 0);
              t = v_18;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  v_18 = ATgetArgument(t, 0);
                  {
                    ATerm l_16 = t;
                    int m_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(u_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm p_16 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(s_16) != AT_LIST) || !(ATisEmpty(s_16))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, v_18)));
                        ;
                        LocalPopChoice(m_16);
                      }
                    else
                      {
                        t = l_16;
                        {
                          ATerm y_16 = t;
                          int z_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(u_18);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm b_17 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm c_17 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(c_17) != AT_LIST) || !(ATisEmpty(c_17))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, v_18)));
                              ;
                              LocalPopChoice(z_16);
                            }
                          else
                            {
                              t = y_16;
                              {
                                ATerm d_17 = t;
                                int e_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(u_18);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, v_18)));
                                    ;
                                    LocalPopChoice(e_17);
                                  }
                                else
                                  {
                                    t = d_17;
                                    t = SSLgetAnnotations(u_18);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm f_17 = ATgetFirst((ATermList) t);
                                        if((ATgetSymbol((ATermAppl) f_17) != ATmakeSymbol("bound", 0, ATtrue)))
                                          _fail(t);
                                        {
                                          ATerm g_17 = (ATerm) ATgetNext((ATermList) t);
                                          if(((ATgetType(g_17) != AT_LIST) || !(ATisEmpty(g_17))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Id_1, v_18);
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
                      v_18 = ATgetArgument(t, 0);
                      {
                        ATerm c_19 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL,a_16 = NULL;
                        t = SSL_explode_string(v_18);
                        t = escape_chars_0_0(t);
                        a_16 = t;
                        t = SSL_implode_string(a_16);
                        u_16 = t;
                        t = SSL_explode_string(u_16);
                        w_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_16), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
                        t = conc_0_0(t);
                        t_16 = t;
                        t = SSL_implode_string(t_16);
                        c_19 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_17), term_l_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, c_19)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          v_18 = ATgetArgument(t, 0);
                          {
                            ATerm a_17 = NULL;
                            t = SSL_real_to_string(v_18);
                            a_17 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, a_17))));
                          }
                        }
                      else
                        {
                          ATerm p_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              v_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(v_18);
                          p_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, p_17))));
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
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,v_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  if(match_cons(t, sym_Op_2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_22;
  if(match_string(t, "Cons"))
    {
      ATerm w_23 = NULL;
      t = z_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_22 = ATgetFirst((ATermList) t);
          r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_22 = ATgetFirst((ATermList) t);
          v_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_22;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,w_26 = NULL,y_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                u_24 = ATgetArgument(t, 0);
                b_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_24;
            if(match_cons(t, sym_TypeName_2))
              {
                v_24 = ATgetArgument(t, 0);
                a_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                w_24 = ATgetArgument(t, 0);
                x_24 = ATgetArgument(t, 1);
                z_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_24;
            if(match_cons(t, sym_TypeId_1))
              {
                y_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = z_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_25;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = b_25;
            if(match_cons(t, sym_Id_1))
              {
                w_26 = ATgetArgument(t, 0);
                {
                  ATerm e_27 = NULL,f_9 = NULL;
                  t = SSLgetAnnotations(b_25);
                  e_27 = t;
                  t = w_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, w_26);
                  f_9 = t;
                  t = SSLsetAnnotations(f_9, e_27);
                }
              }
            else
              {
                ATerm j_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,i_9 = NULL,h_9 = NULL,g_9 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    w_26 = ATgetArgument(t, 0);
                    y_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_25);
                j_27 = t;
                t = w_26;
                if(match_cons(t, sym_Id_1))
                  {
                    v_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_26);
                u_27 = t;
                t = v_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, v_27);
                g_9 = t;
                t = SSLsetAnnotations(g_9, u_27);
                w_27 = t;
                t = y_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_27 = ATgetFirst((ATermList) t);
                    r_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_26);
                p_27 = t;
                t = r_27;
                t = Cons_2_0(_id, m_3, t);
                s_27 = t;
                t = (ATerm) ATinsert(CheckATermList(s_27), q_27);
                h_9 = t;
                t = SSLsetAnnotations(h_9, p_27);
                t_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, w_27, t_27);
                i_9 = t;
                t = SSLsetAnnotations(i_9, j_27);
              }
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATempty, s_22));
          }
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, q_22), w_23)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = z_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_18;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = bottomup_1_0(j_98, t);
    return(t);
  }
  t = SRTS_all(n_3, t);
  t = j_98(t);
  return(t);
}
ATerm topdown_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = topdown_1_0(i_98, t);
    return(t);
  }
  t = i_98(t);
  t = SRTS_all(o_3, t);
  return(t);
}
ATerm w_52 (ATerm x_35, ATerm y_35, ATerm z_35, ATerm a_36, ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,l_36 = NULL,a_28 = NULL,b_28 = NULL;
  t = x_35;
  {
    ATerm c_18 = t;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL;
        m_36 = t;
        if(match_string(t, "Nil"))
          {
            t = m_36;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = m_36;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_18;
      }
    t = (ATerm) ATmakeAppl(sym__2, y_35, term_c_16);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm o_36 = NULL,p_36 = NULL,r_36 = NULL,s_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
        if(match_cons(t, sym__2))
          {
            o_36 = ATgetArgument(t, 0);
            p_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(p_36);
        u_36 = t;
        t = o_36;
        if(match_cons(t, sym_Var_1))
          {
            w_36 = ATgetArgument(t, 0);
            {
              ATerm d_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_37 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), z_35));
                  e_37 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), z_35)));
                  t = s_9(o_36, w_36, e_37, t);
                  ;
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = d_18;
                  {
                    ATerm f_37 = NULL;
                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), z_35));
                    f_37 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), z_35)));
                    t = r_9(o_36, f_37, t);
                  }
                }
            }
          }
        else
          {
            ATerm g_37 = NULL;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), z_35));
            g_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_36, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_36)), z_35)));
            t = r_9(o_36, g_37, t);
          }
        r_36 = t;
        t = term_a_10;
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_36, term_a_10);
        t = q_10(p_36, v_36, t);
        s_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        return(t);
      }
      t = thread_map_1_0(p_3, t);
      if(match_cons(t, sym__2))
        {
          h_36 = ATgetArgument(t, 0);
          {
            ATerm h_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_35;
      t = foldr_3_0(q_3, r_3, t_3, t);
      i_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_35, i_36);
      a_28 = t;
      t = term_g_16;
      b_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATmakeAppl(sym__2, x_35, i_36));
      t = c_10(b_28, a_28, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm i_18 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          l_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, l_36)), z_35)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, h_36), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18))));
    }
  }
  return(t);
}
ATerm x_52 (ATerm t_37, ATerm u_37, ATerm y_37, ATerm t)
{
  ATerm b_38 = NULL;
  t = SSL_real_to_string(t_37);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, u_37)), term_s_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_19, u_37))), (ATerm) ATmakeAppl(sym_FloatConst_1, b_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18))));
  return(t);
}
ATerm y_52 (ATerm e_38, ATerm g_38, ATerm i_38, ATerm t)
{
  ATerm t_38 = NULL;
  t = SSL_int_to_string(e_38);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, g_38)), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_19, g_38))), (ATerm) ATmakeAppl(sym_IntConst_1, t_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18))));
  return(t);
}
ATerm z_52 (ATerm u_38, ATerm x_38, ATerm y_38, ATerm e_39, ATerm t)
{
  t = SSLgetAnnotations(u_38);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, x_38), term_m_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, x_38), y_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, y_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_38), term_a_12, y_38)));
  return(t);
}
ATerm a_53 (ATerm k_39, ATerm l_39, ATerm o_39, ATerm p_39, ATerm t)
{
  t = SSLgetAnnotations(k_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(o_19) != AT_LIST) || !(ATisEmpty(o_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, l_39), term_m_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, l_39), o_39)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, o_39))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_39), term_a_12, o_39)));
  return(t);
}
ATerm b_53 (ATerm i_40, ATerm k_40, ATerm n_40, ATerm p_40, ATerm t)
{
  t = SSLgetAnnotations(i_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(q_19) != AT_LIST) || !(ATisEmpty(q_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_40), n_40), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, n_40))))));
  return(t);
}
ATerm c_53 (ATerm y_40, ATerm b_41, ATerm d_41, ATerm h_41, ATerm t)
{
  t = SSLgetAnnotations(y_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) r_19) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(s_19) != AT_LIST) || !(ATisEmpty(s_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_41), term_a_12, d_41));
  return(t);
}
ATerm d_53 (ATerm n_41, ATerm s_41, ATerm u_41, ATerm v_41, ATerm w_41, ATerm z_41, ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,q_42 = NULL,d_28 = NULL,e_28 = NULL;
  t = s_41;
  {
    ATerm t_19 = t;
    if((PushChoice() == 0))
      {
        ATerm r_42 = NULL;
        r_42 = t;
        if(match_string(t, "Nil"))
          {
            t = r_42;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = r_42;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_19;
      }
    t = (ATerm) ATmakeAppl(sym__2, v_41, term_c_16);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,z_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            if(match_cons(u_19, sym_Var_1))
              {
                s_42 = ATgetArgument(u_19, 0);
              }
            else
              _fail(t);
            t_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(t_42);
        u_42 = t;
        t = term_a_10;
        z_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_42, term_a_10);
        t = q_10(t_42, z_42, t);
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_42), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_42)), (ATerm) ATmakeAppl(sym_Id_1, n_41))))), v_42);
        return(t);
      }
      t = thread_map_1_0(u_3, t);
      if(match_cons(t, sym__2))
        {
          n_42 = ATgetArgument(t, 0);
          {
            ATerm v_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_41, u_41);
      d_28 = t;
      t = term_g_16;
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATmakeAppl(sym__2, s_41, u_41));
      t = c_10(e_28, d_28, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm w_19 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_19) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          q_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_42, (ATerm) ATinsert(ATempty, w_41));
      t = conc_0_0(t);
      o_42 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, q_42)), (ATerm) ATmakeAppl(sym_Id_1, n_41))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, o_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, n_41), z_41, a_42))));
    }
  }
  return(t);
}
ATerm e_53 (ATerm a_43, ATerm c_43, ATerm g_43, ATerm h_43, ATerm l_43, ATerm n_43, ATerm t)
{
  ATerm e_44 = NULL;
  t = SSL_real_to_string(c_43);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, e_44)), (ATerm) ATmakeAppl(sym_Id_1, a_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_43), h_43, l_43))));
  return(t);
}
ATerm f_53 (ATerm f_44, ATerm g_44, ATerm h_44, ATerm j_44, ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm y_44 = NULL;
  t = SSL_int_to_string(g_44);
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_44)), (ATerm) ATmakeAppl(sym_Id_1, f_44))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_44)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_44), j_44, k_44))));
  return(t);
}
ATerm g_53 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm t)
{
  t = b_45;
  {
    ATerm b_20 = t;
    if((PushChoice() == 0))
      {
        ATerm h_45 = NULL,l_45 = NULL,m_45 = NULL,w_9 = NULL;
        m_45 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_45);
        h_45 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
        w_9 = t;
        t = SSLsetAnnotations(w_9, h_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_20;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_45)));
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_37 = NULL,s_37 = NULL;
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(p_37, s_37, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm e_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(match_cons(c_20, sym_SVar_1))
        {
          e_48 = ATgetArgument(c_20, 0);
        }
      else
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) != AT_LIST) || !(ATisEmpty(d_20))))
          _fail(t);
      }
      {
        ATerm e_20 = ATgetArgument(t, 2);
        if(((ATgetType(e_20) != AT_LIST) || !(ATisEmpty(e_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, e_48);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = topdown_1_0(h_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(k_4, t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
          }
      }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm u_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      if(match_cons(l_20, sym_SVar_1))
        {
          u_48 = ATgetArgument(l_20, 0);
        }
      else
        _fail(t);
      {
        ATerm m_20 = ATgetArgument(t, 1);
        if(((ATgetType(m_20) != AT_LIST) || !(ATisEmpty(m_20))))
          _fail(t);
      }
      {
        ATerm n_20 = ATgetArgument(t, 2);
        if(((ATgetType(n_20) != AT_LIST) || !(ATisEmpty(n_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, u_48);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = topdown_1_0(r_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(s_4, t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  r_50 = t;
  t = term_v_20;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_50, term_v_20);
  t = h_10(u_4, r_50, s_50, t);
  t = r_50;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_50 = NULL;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, t_50), term_g_13), term_x_20);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_51;
  if(match_cons(t, sym_Var_1))
    {
      y_50 = ATgetArgument(t, 0);
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_50;
            t = s_9(a_51, y_50, b_51, t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = z_50;
            t = r_9(a_51, b_51, t);
          }
      }
    }
  else
    {
      t = z_50;
      t = r_9(a_51, b_51, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,s_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,c_46 = NULL,f_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,x_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  g_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, h_47, (ATerm) ATinsert(ATempty, e_47));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          h_47 = ATgetArgument(t, 0);
          {
            ATerm o_47 = NULL;
            t = g_47;
            t = new_0_0(t);
            o_47 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_47), term_g_13))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, o_47)))), h_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_47), term_a_12, term_o_18))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              h_47 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, h_47);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  h_47 = ATgetArgument(t, 0);
                  e_47 = ATgetArgument(t, 1);
                  b_47 = ATgetArgument(t, 2);
                  {
                    ATerm z_47 = NULL,a_48 = NULL,d_48 = NULL;
                    t = h_47;
                    if(match_cons(t, sym_SVar_1))
                      {
                        f_47 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_47;
                    t = map_1_0(a_4, t);
                    z_47 = t;
                    t = b_47;
                    t = map_1_0(b_4, t);
                    a_48 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_18)), a_48), z_47);
                    t = concat_0_0(t);
                    d_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, f_47), d_48)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      h_47 = ATgetArgument(t, 0);
                      e_47 = ATgetArgument(t, 1);
                      b_47 = ATgetArgument(t, 2);
                      {
                        ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
                        t = e_47;
                        t = map_1_0(m_4, t);
                        r_48 = t;
                        t = b_47;
                        t = map_1_0(n_4, t);
                        s_48 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
                        t = conc_0_0(t);
                        t_48 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_47), t_48)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          h_47 = ATgetArgument(t, 0);
                          {
                            ATerm b_49 = NULL;
                            t = g_47;
                            t = new_0_0(t);
                            b_49 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_49), term_g_13), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_21), term_i_21), h_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, b_49))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              h_47 = ATgetArgument(t, 0);
                              e_47 = ATgetArgument(t, 1);
                              {
                                ATerm k_49 = NULL;
                                t = g_47;
                                t = new_0_0(t);
                                k_49 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_49), term_g_13), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, k_49))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  h_47 = ATgetArgument(t, 0);
                                  e_47 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, h_47, e_47);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      h_47 = ATgetArgument(t, 0);
                                      e_47 = ATgetArgument(t, 1);
                                      b_47 = ATgetArgument(t, 2);
                                      {
                                        ATerm y_49 = NULL,z_49 = NULL;
                                        t = g_47;
                                        t = new_0_0(t);
                                        y_49 = t;
                                        t = new_0_0(t);
                                        z_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_r_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_49), term_g_13), term_u_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_49), term_g_13), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_49))))), h_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, y_49))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          h_47 = ATgetArgument(t, 0);
                                          e_47 = ATgetArgument(t, 1);
                                          {
                                            ATerm f_50 = NULL,g_50 = NULL;
                                            t = g_47;
                                            t = new_0_0(t);
                                            f_50 = t;
                                            t = new_0_0(t);
                                            g_50 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_y_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_50), term_g_13), term_u_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_50), term_g_13), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_50))))), term_a_22), h_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, (ATerm) ATmakeAppl(sym_Id_1, f_50))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              h_47 = ATgetArgument(t, 0);
                                              e_47 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_47, e_47);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  h_47 = ATgetArgument(t, 0);
                                                  e_47 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_47), h_47));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      h_47 = ATgetArgument(t, 0);
                                                      e_47 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm q_50 = NULL;
                                                        t = h_47;
                                                        t = map_1_0(t_4, t);
                                                        t = h_47;
                                                        t = map_1_0(v_4, t);
                                                        q_50 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, q_50)), (ATerm) ATinsert(ATempty, e_47));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_b_22;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  h_47 = ATgetArgument(t, 0);
                                                                  e_47 = ATgetArgument(t, 1);
                                                                  t = h_47;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      f_47 = ATgetArgument(t, 0);
                                                                      v_45 = ATgetArgument(t, 1);
                                                                      t = v_45;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          n_45 = ATgetFirst((ATermList) t);
                                                                          o_45 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = o_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              p_45 = ATgetFirst((ATermList) t);
                                                                              s_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = s_45;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = f_47;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm c_22 = t;
                                                                                      int d_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm x_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_45, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_22, e_47)))))), (ATerm) ATmakeAppl(sym__2, n_45, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_22, e_47)))));
                                                                                          t = map_1_0(w_4, t);
                                                                                          x_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, e_47)), term_n_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, e_47)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, x_50), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18))));
                                                                                          ;
                                                                                          LocalPopChoice(d_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_22;
                                                                                          t = w_52(f_47, v_45, e_47, g_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_52(f_47, v_45, e_47, g_47, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_47;
                                                                                  t = w_52(f_47, v_45, e_47, g_47, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_47;
                                                                              t = w_52(f_47, v_45, e_47, g_47, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = f_47;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm t_22 = t;
                                                                                  int u_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, e_47)), term_n_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, e_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18))));
                                                                                      ;
                                                                                      LocalPopChoice(u_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_22;
                                                                                      t = w_52(f_47, v_45, e_47, g_47, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = w_52(f_47, v_45, e_47, g_47, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_47;
                                                                              t = w_52(f_47, v_45, e_47, g_47, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          f_47 = ATgetArgument(t, 0);
                                                                          t = x_52(f_47, e_47, g_47, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              f_47 = ATgetArgument(t, 0);
                                                                              t = y_52(f_47, e_47, g_47, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  f_47 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm m_51 = NULL,p_28 = NULL,q_28 = NULL,s_28 = NULL,m_28 = NULL;
                                                                                    t = SSL_explode_string(f_47);
                                                                                    t = escape_chars_0_0(t);
                                                                                    m_28 = t;
                                                                                    t = SSL_implode_string(m_28);
                                                                                    q_28 = t;
                                                                                    t = SSL_explode_string(q_28);
                                                                                    s_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
                                                                                    t = conc_0_0(t);
                                                                                    p_28 = t;
                                                                                    t = SSL_implode_string(p_28);
                                                                                    m_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_23, e_47))), (ATerm) ATmakeAppl(sym_FunCall_2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_17), term_l_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_51))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, term_o_18))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      f_47 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm f_23 = t;
                                                                                        int g_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = z_52(h_47, f_47, e_47, g_47, t);
                                                                                            ;
                                                                                            LocalPopChoice(g_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_23;
                                                                                            {
                                                                                              ATerm h_23 = t;
                                                                                              int i_23 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = a_53(h_47, f_47, e_47, g_47, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(i_23);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_23;
                                                                                                  {
                                                                                                    ATerm j_23 = t;
                                                                                                    int k_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = b_53(h_47, f_47, e_47, g_47, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(k_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = j_23;
                                                                                                        t = c_53(h_47, f_47, e_47, g_47, t);
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
                                                                                          f_47 = ATgetArgument(t, 0);
                                                                                          v_45 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, v_45, e_47)), (ATerm) ATmakeAppl(sym_Match_2, f_47, e_47)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm l_23 = t;
                                                                                          int m_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm n_23 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(m_23);
                                                                                              t = term_b_22;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_23;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_b_22;
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
                                                                      h_47 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, h_47, term_o_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          h_47 = ATgetArgument(t, 0);
                                                                          e_47 = ATgetArgument(t, 1);
                                                                          b_47 = ATgetArgument(t, 2);
                                                                          t = h_47;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              f_47 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = e_47;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              d_47 = ATgetFirst((ATermList) t);
                                                                              x_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = d_47;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  o_46 = ATgetArgument(t, 0);
                                                                                  s_46 = ATgetArgument(t, 1);
                                                                                  t_46 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = o_46;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  r_46 = ATgetArgument(t, 0);
                                                                                  n_46 = ATgetArgument(t, 1);
                                                                                  t = s_46;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      w_45 = ATgetFirst((ATermList) t);
                                                                                      y_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = y_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          c_46 = ATgetFirst((ATermList) t);
                                                                                          m_46 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = m_46;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = c_46;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  f_46 = ATgetArgument(t, 0);
                                                                                                  t = w_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      x_45 = ATgetArgument(t, 0);
                                                                                                      t = n_46;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = r_46;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm o_23 = t;
                                                                                                              int p_23 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_47))), term_n_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_47))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_a_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_22, (ATerm) ATmakeAppl(sym_Id_1, f_47)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_45), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_22, (ATerm) ATmakeAppl(sym_Id_1, f_47)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_47), x_46, b_47))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(p_23);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = o_23;
                                                                                                                  t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = r_46;
                                                                                                          t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_46;
                                                                                                      t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = r_46;
                                                                                                  t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_46;
                                                                                              t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_46;
                                                                                          t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = n_46;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = r_46;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm q_23 = t;
                                                                                                  int r_23 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_47))), term_n_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_47)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, t_46), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_47), x_46, b_47))));
                                                                                                      ;
                                                                                                      LocalPopChoice(r_23);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_23;
                                                                                                      t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_46;
                                                                                              t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_46;
                                                                                          t = d_53(f_47, r_46, n_46, s_46, t_46, x_46, b_47, g_47, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      r_46 = ATgetArgument(t, 0);
                                                                                      t = e_53(f_47, r_46, t_46, x_46, b_47, g_47, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          r_46 = ATgetArgument(t, 0);
                                                                                          t = f_53(f_47, r_46, t_46, x_46, b_47, g_47, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm h_52 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,t_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              r_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(r_46);
                                                                                          t = escape_chars_0_0(t);
                                                                                          t_28 = t;
                                                                                          t = SSL_implode_string(t_28);
                                                                                          x_28 = t;
                                                                                          t = SSL_explode_string(x_28);
                                                                                          z_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_28), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
                                                                                          t = conc_0_0(t);
                                                                                          w_28 = t;
                                                                                          t = SSL_implode_string(w_28);
                                                                                          h_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, h_52))), (ATerm) ATmakeAppl(sym_Id_1, f_47))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_47), x_46, b_47))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = b_47;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              h_47 = ATgetArgument(t, 0);
                                                                              e_47 = ATgetArgument(t, 1);
                                                                              b_47 = ATgetArgument(t, 2);
                                                                              c_47 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, h_47), (ATerm) ATmakeAppl(sym_Case_3, e_47, b_47, c_47));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  h_47 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, h_47));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      h_47 = ATgetArgument(t, 0);
                                                                                      e_47 = ATgetArgument(t, 1);
                                                                                      t = h_47;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          f_47 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = e_47;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          d_47 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm u_23 = t;
                                                                                            int v_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, f_47), term_m_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, f_47), (ATerm) ATmakeAppl(sym_Id_1, d_47))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_47), term_a_12, (ATerm) ATmakeAppl(sym_Id_1, d_47))));
                                                                                                ;
                                                                                                LocalPopChoice(v_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_23;
                                                                                                t = g_53(f_47, e_47, g_47, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_53(f_47, e_47, g_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          h_47 = ATgetArgument(t, 0);
                                                                                          t = h_47;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              f_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_47), term_a_12, term_o_18));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm v_52 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              h_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_47;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          v_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_o_18, term_a_12, v_52));
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
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, y_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      j_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, h_53);
  t = c_1(t);
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_53), j_53), i_53);
  return(t);
}
ATerm thread_map_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm w_53 (ATerm t)
  {
    ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
    p_53 = t;
    if(match_cons(t, sym__2))
      {
        q_53 = ATgetArgument(t, 0);
        r_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_53;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_53 = ATgetFirst((ATermList) t);
        o_53 = (ATerm) ATgetNext((ATermList) t);
        t = p_53;
        t = u_9(t_110, w_53, n_53, o_53, r_53, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_53);
      }
    return(t);
  }
  t = w_53(t);
  return(t);
}
ATerm n_57 (ATerm v_54, ATerm w_54, ATerm x_54, ATerm y_54, ATerm z_54, ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,a_29 = NULL,b_29 = NULL;
  t = v_54;
  {
    ATerm x_23 = t;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL;
        o_55 = t;
        if(match_string(t, "Nil"))
          {
            t = o_55;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = o_55;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_23;
      }
    t = w_54;
    t = map_1_0(x_4, t);
    t = (ATerm) ATmakeAppl(sym__2, w_54, term_c_16);
    t = thread_map_1_0(y_4, t);
    if(match_cons(t, sym__2))
      {
        k_55 = ATgetArgument(t, 0);
        {
          ATerm y_23 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = w_54;
    t = foldr_3_0(z_4, a_5, b_5, t);
    m_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_54, m_55);
    a_29 = t;
    t = term_g_16;
    b_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATmakeAppl(sym__2, v_54, m_55));
    t = c_10(b_29, a_29, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm z_23 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        n_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_55, (ATerm) ATinsert(ATempty, x_54));
    t = conc_0_0(t);
    l_55 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, n_55)), term_o_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, l_55), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_54)));
  }
  return(t);
}
ATerm o_57 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm c_56, ATerm t)
{
  ATerm g_56 = NULL;
  t = SSL_real_to_string(z_55);
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, g_56)), term_o_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_56)));
  return(t);
}
ATerm p_57 (ATerm h_56, ATerm i_56, ATerm j_56, ATerm k_56, ATerm t)
{
  ATerm o_56 = NULL;
  t = SSL_int_to_string(h_56);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, o_56)), term_o_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_56)));
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,y_9 = NULL;
  r_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_55);
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_55);
  y_9 = t;
  t = SSLsetAnnotations(y_9, p_55);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      if(match_cons(a_24, sym_Var_1))
        {
          s_55 = ATgetArgument(a_24, 0);
        }
      else
        _fail(t);
      t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(t_55);
  u_55 = t;
  t = term_a_10;
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_55, term_a_10);
  t = q_10(t_55, w_55, t);
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_55), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_55)), term_o_18)))), v_55);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  if(match_cons(t, sym__2))
    {
      x_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(x_55, y_55, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  w_56 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      x_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
      b_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_56;
  if(match_cons(t, sym_Match_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_56;
  if(match_cons(t, sym_Op_2))
    {
      z_56 = ATgetArgument(t, 0);
      v_56 = ATgetArgument(t, 1);
      t = v_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_56 = ATgetFirst((ATermList) t);
          r_56 = (ATerm) ATgetNext((ATermList) t);
          t = r_56;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_56 = ATgetFirst((ATermList) t);
              u_56 = (ATerm) ATgetNext((ATermList) t);
              t = u_56;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_56;
                  if(match_cons(t, sym_Var_1))
                    {
                      t_56 = ATgetArgument(t, 0);
                      t = p_56;
                      if(match_cons(t, sym_Var_1))
                        {
                          q_56 = ATgetArgument(t, 0);
                          t = z_56;
                          if(match_string(t, "Cons"))
                            {
                              ATerm b_24 = t;
                              int c_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, term_o_18)), term_n_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, term_o_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_57), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_56), term_a_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_22, (ATerm) ATinsert(ATempty, term_d_24)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_56), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, term_d_24)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_57)));
                                  ;
                                  LocalPopChoice(c_24);
                                }
                              else
                                {
                                  t = b_24;
                                  t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                                }
                            }
                          else
                            {
                              t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                            }
                        }
                      else
                        {
                          t = z_56;
                          t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                        }
                    }
                  else
                    {
                      t = z_56;
                      t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                    }
                }
              else
                {
                  t = z_56;
                  t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                }
            }
          else
            {
              t = z_56;
              t = n_57(z_56, v_56, a_57, b_57, w_56, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = z_56;
              if(match_string(t, "Nil"))
                {
                  ATerm e_24 = t;
                  int f_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_18, (ATerm) ATinsert(ATempty, term_o_18)), term_n_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_p_22, (ATerm) ATinsert(ATempty, term_o_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_57)));
                      ;
                      LocalPopChoice(f_24);
                    }
                  else
                    {
                      t = e_24;
                      t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                    }
                }
              else
                {
                  t = n_57(z_56, v_56, a_57, b_57, w_56, t);
                }
            }
          else
            {
              t = z_56;
              t = n_57(z_56, v_56, a_57, b_57, w_56, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          z_56 = ATgetArgument(t, 0);
          t = o_57(z_56, a_57, b_57, w_56, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              z_56 = ATgetArgument(t, 0);
              t = p_57(z_56, a_57, b_57, w_56, t);
            }
          else
            {
              ATerm l_57 = NULL,g_29 = NULL,h_29 = NULL,j_29 = NULL,d_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  z_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(z_56);
              t = escape_chars_0_0(t);
              d_29 = t;
              t = SSL_implode_string(d_29);
              h_29 = t;
              t = SSL_explode_string(h_29);
              j_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_29), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
              t = conc_0_0(t);
              g_29 = t;
              t = SSL_implode_string(g_29);
              l_57 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, l_57))), term_o_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_57)));
            }
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,b_10 = NULL;
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_58 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_24 = ATgetFirst((ATermList) t);
              if(((ATgetType(k_24) != AT_INT) || (ATgetInt((ATermInt) k_24) != 34)))
                _fail(t);
              a_58 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_58), term_h_17), term_l_24);
          ;
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          {
            ATerm c_58 = NULL,d_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_58 = ATgetFirst((ATermList) t);
                d_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_58;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(d_58), term_l_24), term_l_24);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(d_58), term_m_24), term_l_24);
              }
          }
        }
      z_57 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_57 = ATgetFirst((ATermList) t);
          x_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_57);
      v_57 = t;
      t = x_57;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      y_57 = t;
      t = (ATerm) ATinsert(CheckATermList(y_57), w_57);
      b_10 = t;
      t = SSLsetAnnotations(b_10, v_57);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
        y_58 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_58 = ATgetFirst((ATermList) t);
            x_58 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm n_29 = NULL,q_29 = NULL,i_10 = NULL;
              t = SSLgetAnnotations(y_58);
              n_29 = t;
              t = x_58;
              t = escape_chars_0_0(t);
              q_29 = t;
              t = (ATerm) ATinsert(CheckATermList(q_29), w_58);
              i_10 = t;
              t = SSLsetAnnotations(i_10, n_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_58;
          }
      }
    }
  return(t);
}
ATerm z_9 (ATerm v_33, ATerm u_33, ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,e_59 = NULL,f_59 = NULL,f_30 = NULL,g_30 = NULL,i_30 = NULL,c_30 = NULL,d_30 = NULL,y_29 = NULL,z_29 = NULL,b_30 = NULL,v_29 = NULL,w_29 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_24), v_33);
  f_59 = t;
  t = SSL_concat_strings(f_59);
  w_29 = t;
  t = SSL_explode_string(w_29);
  t = escape_chars_0_0(t);
  v_29 = t;
  t = SSL_implode_string(v_29);
  z_29 = t;
  t = SSL_explode_string(z_29);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_30), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
  t = conc_0_0(t);
  y_29 = t;
  t = SSL_implode_string(y_29);
  b_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_24), v_33);
  e_59 = t;
  t = SSL_concat_strings(e_59);
  d_30 = t;
  t = SSL_explode_string(d_30);
  t = escape_chars_0_0(t);
  c_30 = t;
  t = SSL_implode_string(c_30);
  g_30 = t;
  t = SSL_explode_string(g_30);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_30), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
  t = conc_0_0(t);
  f_30 = t;
  t = SSL_implode_string(f_30);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_24), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), (ATerm) ATmakeAppl(sym_StringLit_1, c_59)), term_r_24)))), u_33), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), (ATerm) ATmakeAppl(sym_StringLit_1, b_59)), term_r_24)))));
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  i_61 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
      l_61 = ATgetArgument(t, 2);
      h_61 = ATgetArgument(t, 3);
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,o_32 = NULL,q_32 = NULL;
        t = k_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        j_32 = t;
        t = l_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
        t = conc_0_0(t);
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_61, h_61);
        {
          ATerm t_24 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,x_10 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, j_61, h_61);
              q_33 = t;
              t = SSLgetAnnotations(q_33);
              p_33 = t;
              t = j_61;
              {
                ATerm d_25 = t;
                int e_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_33 = NULL;
                    t = term_t_11;
                    t_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_t_11, j_61);
                    t = c_10(t_33, j_61, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm f_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = j_61;
                    ;
                    LocalPopChoice(e_25);
                  }
                else
                  {
                    t = d_25;
                    {
                      ATerm x_33 = NULL,y_33 = NULL;
                      t = (ATerm) ATempty;
                      x_33 = t;
                      t = term_i_11;
                      y_33 = t;
                      t = term_g_25;
                      t = c_10(y_33, x_33, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm h_25 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("o_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = j_61;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_61, h_61);
                x_10 = t;
                t = SSLsetAnnotations(x_10, p_33);
                if(match_cons(t, sym__2))
                  {
                    n_33 = ATgetArgument(t, 0);
                    o_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_9(n_33, o_33, t);
              }
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = t_24;
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_24), h_61));
            }
          o_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_32, (ATerm) ATinsert(ATempty, term_j_25));
          t = conc_0_0(t);
          q_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, q_32))), o_32);
        }
      }
    }
  else
    {
      ATerm f_34 = NULL,i_34 = NULL,j_34 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          j_61 = ATgetArgument(t, 0);
          k_61 = ATgetArgument(t, 1);
          l_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_61;
      t = map_1_0(TranslateVarDec_0_0, t);
      f_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_61, l_61);
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,y_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, j_61, l_61);
            h_35 = t;
            t = SSLgetAnnotations(h_35);
            g_35 = t;
            t = j_61;
            {
              ATerm m_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_35 = NULL;
                  t = term_t_11;
                  k_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_t_11, j_61);
                  t = c_10(k_35, j_61, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm o_25 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) o_25) != ATmakeSymbol("q_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = j_61;
                  ;
                  LocalPopChoice(n_25);
                }
              else
                {
                  t = m_25;
                  {
                    ATerm m_35 = NULL,n_35 = NULL;
                    t = (ATerm) ATempty;
                    m_35 = t;
                    t = term_i_11;
                    n_35 = t;
                    t = term_g_25;
                    t = c_10(n_35, m_35, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm p_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) p_25) != ATmakeSymbol("o_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = j_61;
                  }
                }
              t = (ATerm) ATmakeAppl(sym__2, j_61, l_61);
              y_10 = t;
              t = SSLsetAnnotations(y_10, g_35);
              if(match_cons(t, sym__2))
                {
                  e_35 = ATgetArgument(t, 0);
                  f_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_9(e_35, f_35, t);
            }
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_24), l_61));
          }
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, (ATerm) ATinsert(ATempty, term_j_25));
        t = conc_0_0(t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, j_34))), i_34);
      }
    }
  return(t);
}
ATerm c_10 (ATerm n_64, ATerm o_64, ATerm t)
{
  ATerm s_61 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_64, o_64);
  t = s_10(n_64, o_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_61 = ATgetFirst((ATermList) t);
      {
        ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_61;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL;
  if(match_cons(t, sym__2))
    {
      f_62 = ATgetArgument(t, 0);
      g_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(f_62, g_62, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm d_10 (ATerm r_32, ATerm p_32, ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,a_62 = NULL,s_35 = NULL,v_35 = NULL,p_35 = NULL,q_35 = NULL,d_62 = NULL;
  t = p_32;
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            d_62 = ATgetArgument(t, 0);
            {
              ATerm t_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_25);
        t = d_62;
        t = foldr_3_0(c_5, d_5, e_5, t);
      }
    else
      {
        t = r_25;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm u_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_c_16;
      }
    x_61 = t;
    t = SSL_int_to_string(x_61);
    w_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_32, x_61);
    p_35 = t;
    t = term_g_16;
    q_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATmakeAppl(sym__2, r_32, x_61));
    t = c_10(q_35, p_35, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm v_25 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        a_62 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(r_32);
    v_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_35), term_h_17), (ATerm) ATinsert(ATempty, term_h_17));
    t = conc_0_0(t);
    s_35 = t;
    t = SSL_implode_string(s_35);
    y_61 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_62))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_62), term_a_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_25), (ATerm) ATmakeAppl(sym_IntConst_1, w_61)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, y_61)))))));
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      l_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(l_62, m_62, t);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  t = map_1_0(f_5, t);
  t = concat_0_0(t);
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_62, (ATerm) ATinsert(ATempty, term_b_26));
  t = conc_0_0(t);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_l_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_l_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, j_62));
  return(t);
}
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_62 = ATgetFirst((ATermList) t);
      r_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_62;
  if(match_int(t, 95))
    {
      ATerm t_62 = NULL;
      t = r_62;
      t = t_0(t);
      t_62 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_62), term_e_26), term_e_26);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm v_62 = NULL;
          t = r_62;
          t = t_0(t);
          v_62 = t;
          t = (ATerm) ATinsert(CheckATermList(v_62), term_e_26);
        }
      else
        {
          ATerm x_62 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = r_62;
          t = t_0(t);
          x_62 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_62), term_e_26), term_f_26), term_e_26);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm p_113 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  b_63 = t;
  t = SSL_explode_string(b_63);
  {
    ATerm s_63 (ATerm t)
    {
      ATerm g_26 = t;
      int h_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_113(s_63, t);
          ;
          LocalPopChoice(h_26);
        }
      else
        {
          t = g_26;
          {
            ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
            r_63 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_63 = ATgetFirst((ATermList) t);
                q_63 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm f_36 = NULL,n_36 = NULL,d_11 = NULL;
                  t = SSLgetAnnotations(r_63);
                  f_36 = t;
                  t = q_63;
                  t = s_63(t);
                  n_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_36), p_63);
                  d_11 = t;
                  t = SSLsetAnnotations(d_11, f_36);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_63;
              }
          }
        }
      return(t);
    }
    t = s_63(t);
    a_63 = t;
    t = SSL_implode_string(a_63);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
  v_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_63;
      t = e_110(t);
    }
  else
    {
      ATerm e_64 = NULL,f_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_63 = ATgetFirst((ATermList) t);
          x_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_63;
      t = g_110(t);
      e_64 = t;
      t = x_63;
      t = foldr_3_0(e_110, f_110, g_110, t);
      f_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_64, f_64);
      t = f_110(t);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL;
  if(match_cons(t, sym__2))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(u_64, v_64, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm e_10 (ATerm e_32, ATerm d_32, ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,p_64 = NULL,s_64 = NULL;
  t = d_32;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            s_64 = ATgetArgument(t, 0);
            {
              ATerm k_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_26);
        t = s_64;
        t = foldr_3_0(g_5, h_5, i_5, t);
      }
    else
      {
        t = i_26;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm l_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_c_16;
      }
    h_64 = t;
    t = e_32;
    t = escape_1_0(Cify_1_0, t);
    j_64 = t;
    t = SSL_int_to_string(h_64);
    k_64 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_64), term_n_26), j_64), term_m_26);
    p_64 = t;
    t = SSL_concat_strings(p_64);
    i_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_32, h_64);
    l_64 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_26, i_64);
    m_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_32, h_64), (ATerm) ATmakeAppl(sym_Defined_2, term_o_26, i_64));
    t = h_10(j_5, l_64, m_64, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_r_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_64), term_g_13)));
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      a_65 = ATgetArgument(t, 0);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(a_65, b_65, t);
  return(t);
}
ATerm f_10 (ATerm b_32, ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  t = b_32;
  t = map_1_0(k_5, t);
  w_64 = t;
  t = b_32;
  t = InitConstructors_0_0(t);
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_64, (ATerm) ATinsert(ATempty, x_64));
  t = conc_0_0(t);
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, y_64);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_65;
    }
  else
    {
      ATerm l_5 (ATerm t)
      {
        t = not_null(f_65);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_65 = ATgetFirst((ATermList) t);
          if(((f_65 != NULL) && (f_65 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_65;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm m_65 = NULL;
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          m_65 = ATgetArgument(t, 0);
          {
            ATerm u_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_26);
      {
        ATerm o_65 = NULL;
        t = m_65;
        t = map_1_0(TranslateType_0_0, t);
        o_65 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_13, (ATerm) ATmakeAppl(sym_ParamList_1, o_65));
      }
    }
  else
    {
      t = s_26;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm v_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_d_13;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_65 = ATgetArgument(t, 0);
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_65;
  {
    ATerm z_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            x_65 = ATgetArgument(t, 0);
            {
              ATerm c_27 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_27);
        {
          ATerm a_66 = NULL;
          t = x_65;
          t = map_1_0(TranslateType_0_0, t);
          a_66 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, a_66))));
        }
      }
    else
      {
        t = z_26;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm d_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_65), term_g_13));
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm p_66 (ATerm t)
  {
    ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
    o_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_66 = ATgetFirst((ATermList) t);
        n_66 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_37 = NULL,m_37 = NULL,l_11 = NULL;
          t = SSLgetAnnotations(o_66);
          j_37 = t;
          t = n_66;
          t = p_66(t);
          m_37 = t;
          t = (ATerm) ATinsert(CheckATermList(m_37), m_66);
          l_11 = t;
          t = SSLsetAnnotations(l_11, j_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_66;
        t = p_104(t);
      }
    return(t);
  }
  t = p_66(t);
  return(t);
}
ATerm b_67 (ATerm t_66, ATerm t)
{
  ATerm u_66 = NULL;
  t = SSL_explode_term(t_66);
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_66;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  y_66 = t;
  if(match_cons(t, sym__2))
    {
      w_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              t = x_66;
              return(t);
            }
            t = w_66;
            t = at_end_1_0(m_5, t);
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            t = b_67(y_66, t);
          }
      }
    }
  else
    {
      t = b_67(y_66, t);
    }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  ATerm i_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_67 = ATgetArgument(t, 0);
          f_67 = ATgetArgument(t, 1);
          {
            ATerm o_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_27);
      {
        ATerm k_67 = NULL;
        t = f_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_67, (ATerm) ATinsert(ATempty, term_d_13));
        t = conc_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, k_67)))));
      }
    }
  else
    {
      t = i_27;
      {
        ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            e_67 = ATgetArgument(t, 0);
            f_67 = ATgetArgument(t, 1);
            g_67 = ATgetArgument(t, 2);
            {
              ATerm x_27 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = f_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        o_67 = t;
        t = g_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        p_67 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_13)), p_67), o_67);
        t = concat_0_0(t);
        q_67 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, q_67)))));
      }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL;
  w_67 = t;
  t = term_y_27;
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_27, w_67);
  t = j_10(x_67, w_67, t);
  v_67 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, v_67);
  return(t);
}
ATerm g_10 (ATerm w_31, ATerm x_31, ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
  t = x_31;
  t = map_1_0(SDefToDeclaration_0_0, t);
  r_67 = t;
  t = term_u_11;
  {
    ATerm z_27 = t;
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
        t = z_27;
        t = (ATerm) ATempty;
      }
    s_67 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(x_31), term_p_29)), r_67), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_l_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_n_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_r_28, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_u_28), term_y_28, term_g_13))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_28), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_f_29))), term_r_24)))))))), (ATerm) ATmakeAppl(sym_Signature_1, w_31)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_28, (ATerm) ATinsert(ATempty, term_k_28)))), s_67);
    t = concat_0_0(t);
    t_67 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, t_67);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  t = n_98(t);
  {
    ATerm r_5 (ATerm t)
    {
      t = downup2_2_0(n_98, o_98, t);
      return(t);
    }
    t = SRTS_all(r_5, t);
    t = o_98(t);
  }
  return(t);
}
ATerm h_10 (ATerm d_125 (ATerm), ATerm a_70, ATerm y_69, ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  b_68 = t;
  t = d_125(t);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_67, a_70, y_69);
  t = t_10(y_67, a_70, y_69, t);
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_68 = NULL;
        t = term_t_29;
        e_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_67, term_t_29);
        t = s_10(y_67, e_68, t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_67 = ATgetFirst((ATermList) t);
        a_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_29;
    c_68 = t;
    t = (ATerm) ATinsert(CheckATermList(a_68), (ATerm) ATinsert(CheckATermList(z_67), a_70));
    d_68 = t;
    t = SSL_table_put(y_67, c_68, d_68);
    t = b_68;
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
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  f_68 = t;
  t = term_x_29;
  g_68 = t;
  t = term_e_30;
  h_68 = t;
  t = term_h_30;
  t = h_10(s_5, g_68, h_68, t);
  t = f_68;
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
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_68 = NULL,d_69 = NULL,e_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
      l_69 = t;
      if(match_cons(t, sym_Specification_1))
        {
          m_69 = ATgetArgument(t, 0);
          t = m_69;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_69 = ATgetFirst((ATermList) t);
              p_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_69;
          if(match_cons(t, sym_Signature_1))
            {
              o_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_69;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_68 = ATgetFirst((ATermList) t);
              e_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_68;
          if(match_cons(t, sym_Strategies_1))
            {
              d_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_69;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_69;
          t = g_10(o_69, d_69, t);
        }
      else
        {
          if(match_cons(t, sym_Signature_1))
            {
              m_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_69;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_69 = ATgetFirst((ATermList) t);
              p_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_69;
          if(match_cons(t, sym_Constructors_1))
            {
              o_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_69;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_69;
          t = f_10(o_69, t);
        }
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateDef_0_0(t);
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm n_30 = t;
              int o_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateStratMatchGuard_0_0(t);
                  ;
                  LocalPopChoice(o_30);
                }
              else
                {
                  t = n_30;
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
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_5, t);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
      }
  }
  return(t);
}
ATerm k_10 (ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm v_69 = NULL;
  t = SSL_fputc(d_55, e_55);
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_69);
  return(t);
}
ATerm l_10 (ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm w_69 = NULL;
  t = SSL_write_term_to_stream_text(r_58, s_58);
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_69);
  return(t);
}
ATerm n_10 (ATerm n_116 (ATerm), ATerm b_500, ATerm v_58, ATerm t)
{
  ATerm x_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_500, term_r_30);
  t = open_stream_0_0(t);
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_69, v_58);
  t = n_116(t);
  t = fclose_0_0(t);
  t = v_58;
  return(t);
}
ATerm m_10 (ATerm n_58, ATerm o_58, ATerm t)
{
  ATerm d_70 = NULL;
  t = SSL_write_term_to_stream_baf(n_58, o_58);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_70);
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
  ATerm n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if(match_cons(s_30, sym_Stream_1))
        {
          n_38 = ATgetArgument(s_30, 0);
        }
      else
        _fail(t);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(n_38, o_38, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm d_39 = NULL,g_39 = NULL,h_39 = NULL,m_39 = NULL,n_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      if(match_cons(t_30, sym_Stream_1))
        {
          m_39 = ATgetArgument(t_30, 0);
        }
      else
        _fail(t);
      n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(m_39, n_39, t);
  d_39 = t;
  t = term_u_30;
  g_39 = t;
  t = d_39;
  if(match_cons(t, sym_Stream_1))
    {
      h_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, d_39);
  t = k_10(g_39, h_39, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,b_72 = NULL,c_72 = NULL,o_11 = NULL,n_11 = NULL;
  l_70 = t;
  if(match_cons(t, sym__2))
    {
      z_70 = ATgetArgument(t, 0);
      a_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_70);
  y_70 = t;
  t = z_70;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
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
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = term_x_30;
        i_70 = t;
      }
    b_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_71, a_71);
    n_11 = t;
    t = SSLsetAnnotations(n_11, y_70);
    t = l_70;
    if(match_cons(t, sym__2))
      {
        n_70 = ATgetArgument(t, 0);
        o_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_70);
    m_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_70, (ATerm) ATmakeAppl(sym__2, not_null(i_70), o_70));
    o_11 = t;
    t = SSLsetAnnotations(o_11, m_70);
    x_70 = t;
    if(match_cons(t, sym__2))
      {
        b_72 = ATgetArgument(t, 0);
        c_72 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_37 = NULL,f_38 = NULL,h_38 = NULL,l_38 = NULL,m_38 = NULL,q_11 = NULL;
          t = SSLgetAnnotations(x_70);
          x_37 = t;
          t = b_72;
          t = fetch_1_0(a_6, t);
          f_38 = t;
          t = c_72;
          if(match_cons(t, sym__2))
            {
              l_38 = ATgetArgument(t, 0);
              m_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_10(e_6, l_38, m_38, t);
          h_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_38, h_38);
          q_11 = t;
          t = SSLsetAnnotations(q_11, x_37);
          ;
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          {
            ATerm v_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,r_11 = NULL;
            t = SSLgetAnnotations(x_70);
            v_38 = t;
            t = c_72;
            if(match_cons(t, sym__2))
              {
                b_39 = ATgetArgument(t, 0);
                c_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_10(f_6, b_39, c_39, t);
            a_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_72, a_39);
            r_11 = t;
            t = SSLsetAnnotations(r_11, v_38);
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
ATerm apply_strategy_1_0 (ATerm n_118 (ATerm), ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  j_72 = t;
  t = dtime_0_0(t);
  t = j_72;
  t = n_118(t);
  i_72 = t;
  t = dtime_0_0(t);
  f_72 = t;
  t = i_72;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_72), (ATerm) ATmakeAppl(sym_Runtime_1, f_72)), h_72);
  return(t);
}
ATerm x_72 (ATerm r_72, ATerm t)
{
  t = SSL_fclose(r_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL;
  v_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_72 = ATgetArgument(t, 0);
      {
        ATerm a_31 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_72);
            ;
            LocalPopChoice(b_31);
          }
        else
          {
            t = a_31;
            t = x_72(v_72, t);
          }
      }
    }
  else
    {
      t = x_72(v_72, t);
    }
  return(t);
}
ATerm o_10 (ATerm t_58, ATerm t)
{
  t = SSL_read_term_from_stream(t_58);
  return(t);
}
ATerm p_10 (ATerm f_55, ATerm g_55, ATerm t)
{
  ATerm y_72 = NULL;
  t = SSL_fopen(f_55, g_55);
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_72 = NULL;
  t = SSL_stdin_stream();
  z_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_73 = NULL;
  t = SSL_stdout_stream();
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_73 = NULL;
  t = SSL_stderr_stream();
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_73);
  return(t);
}
ATerm i_74 (ATerm h_73, ATerm t)
{
  ATerm i_73 = NULL;
  t = SSL_explode_term(h_73);
  if(match_cons(t, sym__2))
    {
      ATerm c_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_31 = ATgetArgument(t, 1);
        if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
          {
            i_73 = ATgetFirst((ATermList) d_31);
            {
              ATerm e_31 = (ATerm) ATgetNext((ATermList) d_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_74 (ATerm l_73, ATerm m_73, ATerm n_73, ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,t_73 = NULL,f_12 = NULL;
  t = SSLgetAnnotations(n_73);
  q_73 = t;
  t = l_73;
  if(match_cons(t, sym_Path_1))
    {
      t_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_73, m_73);
  f_12 = t;
  t = SSLsetAnnotations(f_12, q_73);
  if(match_cons(t, sym__2))
    {
      o_73 = ATgetArgument(t, 0);
      p_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(o_73, p_73, t);
  return(t);
}
ATerm k_74 (ATerm v_73, ATerm w_73, ATerm x_73, ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,d_74 = NULL,j_12 = NULL;
  t = SSLgetAnnotations(x_73);
  a_74 = t;
  t = SSL_is_string(v_73);
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_74, w_73);
  j_12 = t;
  t = SSLsetAnnotations(j_12, a_74);
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(y_73, z_73, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      ATerm g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_74 = t;
  if(match_cons(t, sym__2))
    {
      g_74 = ATgetArgument(t, 0);
      h_74 = ATgetArgument(t, 1);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_74(f_74, t);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm j_31 = t;
              int k_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_74(g_74, h_74, f_74, t);
                  ;
                  LocalPopChoice(k_31);
                }
              else
                {
                  t = j_31;
                  t = k_74(g_74, h_74, f_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_74(f_74, t);
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_74 = NULL;
      o_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_74, term_s_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      t = debug_1_0(g_6, t);
      _fail(t);
    }
  m_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(n_74, t);
  l_74 = t;
  t = m_74;
  t = fclose_0_0(t);
  t = l_74;
  return(t);
}
ATerm fetch_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm m_75 (ATerm t)
  {
    ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
    j_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_75 = ATgetFirst((ATermList) t);
        l_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_40 = NULL,h_40 = NULL,n_12 = NULL;
          t = SSLgetAnnotations(j_75);
          e_40 = t;
          t = k_75;
          t = j_104(t);
          h_40 = t;
          t = (ATerm) ATinsert(CheckATermList(l_75), h_40);
          n_12 = t;
          t = SSLsetAnnotations(n_12, e_40);
          ;
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          {
            ATerm u_40 = NULL,a_41 = NULL,c_13 = NULL;
            t = SSLgetAnnotations(j_75);
            u_40 = t;
            t = l_75;
            t = m_75(t);
            a_41 = t;
            t = (ATerm) ATinsert(CheckATermList(a_41), k_75);
            c_13 = t;
            t = SSLsetAnnotations(c_13, u_40);
          }
        }
    }
    return(t);
  }
  t = m_75(t);
  return(t);
}
ATerm j_10 (ATerm h_50, ATerm i_50, ATerm t)
{
  t = SSL_strcat(h_50, i_50);
  return(t);
}
ATerm debug_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  r_75 = t;
  t = l_116(t);
  s_75 = t;
  t = term_p_9;
  t_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_75), s_75);
  u_75 = t;
  t = SSL_printnl(t_75, u_75);
  t = r_75;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm v_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = v_31;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_76 = NULL;
      b_76 = t;
      t = SSL_is_string(b_76);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = a_32;
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_6, t);
            ;
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            {
              ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL;
              h_76 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_76 = ATgetArgument(t, 0);
                  t = i_76;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_76 = ATgetArgument(t, 0);
                      t = i_76;
                      {
                        ATerm h_32 = t;
                        int i_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_32);
                          }
                        else
                          {
                            t = h_32;
                            t = debug_1_0(m_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_76 = NULL,o_76 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_76 = ATgetArgument(t, 0);
                          j_76 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_76;
                      t = eval_config_0_0(t);
                      n_76 = t;
                      t = j_76;
                      t = eval_config_0_0(t);
                      o_76 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_76, o_76);
                      t = j_10(n_76, o_76, t);
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
  ATerm s_76 = NULL,t_76 = NULL;
  s_76 = t;
  t = term_w_10;
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, s_76);
  t = s_10(t_76, s_76, t);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_76 = NULL,v_76 = NULL;
        t = eval_config_0_0(t);
        u_76 = t;
        t = term_w_10;
        v_76 = t;
        t = SSL_table_put(v_76, s_76, u_76);
        t = u_76;
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_77 = NULL;
        t = term_u_32;
        t = get_config_0_0(t);
        b_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_77, term_v_32);
        t = geq_0_0(t);
        t = z_76;
        t = y_117(t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = z_76;
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm e_77 = NULL;
  e_77 = t;
  if(match_string(t, "-k"))
    {
      t = e_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_77;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  t = SSL_string_to_int(f_77);
  g_77 = t;
  t = term_w_32;
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_32, g_77);
  t = v_10(h_77, g_77, t);
  t = f_77;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_6, o_6, p_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm j_77 = NULL;
  j_77 = t;
  if(match_string(t, "-S"))
    {
      t = j_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_77;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL;
  t = term_u_32;
  k_77 = t;
  t = term_c_16;
  l_77 = t;
  t = term_y_32;
  t = v_10(k_77, l_77, t);
  t = term_z_32;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_a_33;
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
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
  m_77 = t;
  t = SSL_string_to_int(m_77);
  n_77 = t;
  t = term_u_32;
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, n_77);
  t = v_10(o_77, n_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_77);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_b_33;
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
  ATerm p_77 = NULL,q_77 = NULL;
  t = term_c_33;
  p_77 = t;
  t = term_o_9;
  q_77 = t;
  t = term_d_33;
  t = v_10(p_77, q_77, t);
  t = term_e_33;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, r_6, u_6, t);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_6, z_6, a_7, t);
            ;
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            t = Option_3_0(b_7, c_7, e_7, t);
          }
      }
    }
  return(t);
}
ATerm v_10 (ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm r_77 = NULL;
  t = term_w_10;
  r_77 = t;
  t = SSL_table_put(r_77, j_70, k_70);
  t = (ATerm) ATmakeAppl(sym__3, term_w_10, j_70, k_70);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
      t = term_o_9;
      t = i_0(t);
      w_77 = t;
      t = term_k_33;
      x_77 = t;
      t = term_l_33;
      y_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_33, term_l_33, w_77);
      t = t_10(x_77, y_77, w_77, t);
      _fail(t);
    }
  else
    {
      ATerm b_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_77 = ATgetFirst((ATermList) t);
          v_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_77;
      t = d_0(t);
      t = term_o_9;
      t = g_0(t);
      b_78 = t;
      t = (ATerm) ATinsert(CheckATermList(v_77), b_78);
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm d_78 = NULL;
  d_78 = t;
  if(match_string(t, "-o"))
    {
      t = d_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_78;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  e_78 = t;
  t = term_m_33;
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_33, e_78);
  t = v_10(f_78, e_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_78);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, g_7, i_7, t);
  return(t);
}
ATerm t_10 (ATerm c_64, ATerm d_64, ATerm b_64, ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
  {
    ATerm s_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_33 = ATgetArgument(t, 0);
            ATerm a_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
        t = s_10(c_64, d_64, t);
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATempty;
      }
    i_78 = t;
    t = (ATerm) ATinsert(CheckATermList(i_78), b_64);
    j_78 = t;
    t = SSL_table_put(c_64, d_64, j_78);
    t = h_78;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
      t = term_o_9;
      t = r_0(t);
      u_78 = t;
      t = term_k_33;
      v_78 = t;
      t = term_l_33;
      w_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_33, term_l_33, u_78);
      t = t_10(v_78, w_78, u_78, t);
      _fail(t);
    }
  else
    {
      ATerm a_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_78 = ATgetFirst((ATermList) t);
          r_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_78 = ATgetFirst((ATermList) t);
          t_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_78;
      t = n_0(t);
      t = s_78;
      t = p_0(t);
      a_79 = t;
      t = (ATerm) ATinsert(CheckATermList(t_78), a_79);
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm c_79 = NULL;
  c_79 = t;
  if(match_string(t, "-i"))
    {
      t = c_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_79;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  d_79 = t;
  t = term_b_34;
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_34, d_79);
  t = v_10(e_79, d_79, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_79);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, l_7, m_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_9;
  t = whoami_0_0(t);
  f_79 = t;
  t = term_p_9;
  h_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_34), f_79);
  i_79 = t;
  t = SSL_printnl(h_79, i_79);
  t = term_a_10;
  g_79 = t;
  t = SSL_exit(g_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_10 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_52, s_52);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = SSL_addr(r_52, s_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_79;
      t = c_110(t);
    }
  else
    {
      ATerm p_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_79 = ATgetFirst((ATermList) t);
          m_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_79;
      t = foldr_2_0(c_110, d_110, t);
      p_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_79, p_79);
      t = d_110(t);
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
  t = term_c_16;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm l_42 = NULL,p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      l_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(l_42, p_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_79 = NULL,y_41 = NULL,f_42 = NULL;
  t = times_0_0(t);
  f_42 = t;
  t = SSL_explode_term(f_42);
  if(match_cons(t, sym__2))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_41;
  t = foldr_2_0(o_7, q_7, t);
  s_79 = t;
  t = SSL_TicksToSeconds(s_79);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
  d_80 = t;
  if(match_cons(t, sym__2))
    {
      e_80 = ATgetArgument(t, 0);
      f_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_80;
        if((e_80 != t))
          {
            _fail(t);
          }
        t = d_80;
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = (ATerm) ATmakeAppl(sym__2, e_80, f_80);
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_80, f_80);
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = SSL_gtr(e_80, f_80);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_80, f_80);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  ATerm j_80 = NULL;
  j_80 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_80 = NULL;
        t = term_u_32;
        t = get_config_0_0(t);
        l_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_80, term_a_10);
        t = geq_0_0(t);
        t = j_80;
        t = x_117(t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = j_80;
      }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,q_80 = NULL,r_80 = NULL;
  t = run_time_0_0(t);
  n_80 = t;
  t = term_o_9;
  t = whoami_0_0(t);
  o_80 = t;
  t = term_p_9;
  q_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_34), n_80), term_r_34), o_80);
  r_80 = t;
  t = SSL_printnl(q_80, r_80);
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_34), n_80), term_r_34), o_80));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_80 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_16;
  s_80 = t;
  t = SSL_exit(s_80);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL;
  b_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_81 = ATgetArgument(t, 0);
          {
            ATerm p_43 = NULL,h_13 = NULL;
            t = SSLgetAnnotations(b_81);
            p_43 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_81);
            h_13 = t;
            t = SSLsetAnnotations(h_13, p_43);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      t = fetch_1_0(s_7, t);
    }
  t = l_119(t);
  return(t);
}
ATerm map_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm r_81 (ATerm t)
  {
    ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
    o_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_81;
      }
    else
      {
        ATerm b_44 = NULL,i_44 = NULL,n_44 = NULL,j_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_81 = ATgetFirst((ATermList) t);
            q_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_81);
        b_44 = t;
        t = p_81;
        t = z_103(t);
        i_44 = t;
        t = q_81;
        t = r_81(t);
        n_44 = t;
        t = (ATerm) ATinsert(CheckATermList(n_44), i_44);
        j_13 = t;
        t = SSLsetAnnotations(j_13, b_44);
      }
    return(t);
  }
  t = r_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_81 = ATgetFirst((ATermList) t);
      v_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_81 = NULL,a_82 = NULL;
        ATerm x_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_81)), not_null(a_82));
          return(t);
        }
        t = v_81;
        t = l_0(t);
        if(((z_81 != NULL) && (z_81 != t)))
          _fail(t);
        else
          z_81 = t;
        t = u_81;
        t = k_0(t);
        if(((a_82 != NULL) && (a_82 != t)))
          _fail(t);
        else
          a_82 = t;
        t = v_81;
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
ATerm s_10 (ATerm t_65, ATerm u_65, ATerm t)
{
  t = SSL_table_get(t_65, u_65);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,l_13 = NULL;
  g_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_82);
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_82);
  l_13 = t;
  t = SSLsetAnnotations(l_13, e_82);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm i_82 = NULL;
  i_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_82), term_w_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = fetch_1_0(y_7, t);
    }
  t = term_z_34;
  t = echo_0_0(t);
  t = term_k_33;
  c_82 = t;
  t = term_l_33;
  d_82 = t;
  t = term_a_35;
  t = s_10(c_82, d_82, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(d_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_35 = ATgetFirst((ATermList) t);
                ATerm i_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_82;
          }
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATinsert(ATempty, k_82);
      }
    l_82 = t;
    t = term_x_30;
    m_82 = t;
    t = SSL_printnl(m_82, l_82);
    t = k_82;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_34;
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
  ATerm q_82 = NULL,r_82 = NULL;
  t = term_j_35;
  q_82 = t;
  t = term_o_9;
  r_82 = t;
  t = term_l_35;
  t = v_10(q_82, r_82, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_o_35;
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
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  t = term_j_35;
  u_82 = t;
  t = term_o_9;
  v_82 = t;
  t = term_l_35;
  t = v_10(u_82, v_82, t);
  t = term_r_35;
  s_82 = t;
  t = term_o_9;
  t_82 = t;
  t = term_t_35;
  t = v_10(s_82, t_82, t);
  t = term_u_35;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, g_8, t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      t = Option_3_0(i_8, m_8, n_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,q_13 = NULL;
  b_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_82 = ATgetFirst((ATermList) t);
      y_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_83);
  w_82 = t;
  t = x_82;
  t = n_75(t);
  z_82 = t;
  t = y_82;
  t = o_75(t);
  a_83 = t;
  t = (ATerm) ATinsert(CheckATermList(a_83), z_82);
  q_13 = t;
  t = SSLsetAnnotations(q_13, w_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,l_83 = NULL,m_83 = NULL,t_13 = NULL;
  g_83 = t;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_36;
        t = c_122(t);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
      }
    t = g_83;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_83 = ATgetFirst((ATermList) t);
        j_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_83);
    h_83 = t;
    t = term_e_34;
    m_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_34, i_83);
    t = v_10(m_83, i_83, t);
    t = j_83;
    {
      ATerm w_83 (ATerm t)
      {
        ATerm j_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_36 = t;
            int t_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_83 = NULL;
                p_83 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_83;
                ;
                LocalPopChoice(t_36);
              }
            else
              {
                t = q_36;
                t = c_122(t);
                t = Cons_2_0(_id, w_83, t);
              }
            ;
            LocalPopChoice(k_36);
          }
        else
          {
            t = j_36;
            {
              ATerm s_83 = NULL,t_83 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_83 = ATgetFirst((ATermList) t);
                  t_83 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_83), (ATerm) ATmakeAppl(sym_Undefined_1, s_83));
            }
          }
        return(t);
      }
      t = w_83(t);
      l_83 = t;
      t = (ATerm) ATinsert(CheckATermList(l_83), (ATerm) ATmakeAppl(sym_Program_1, i_83));
      t_13 = t;
      t = SSLsetAnnotations(t_13, h_83);
    }
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  if(match_string(t, "--help"))
    {
      t = i_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_84;
        }
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL;
  t = term_v_34;
  j_84 = t;
  t = term_o_9;
  k_84 = t;
  t = term_x_36;
  t = v_10(j_84, k_84, t);
  t = term_y_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL;
  d_84 = t;
  t = term_k_33;
  f_84 = t;
  t = term_l_33;
  g_84 = t;
  t = (ATerm) ATempty;
  h_84 = t;
  t = SSL_table_put(f_84, g_84, h_84);
  t = d_84;
  {
    ATerm p_8 (ATerm t)
    {
      ATerm a_37 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_122(t);
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = a_37;
          {
            ATerm c_37 = t;
            int d_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_8, r_8, u_8, t);
                ;
                LocalPopChoice(d_37);
              }
            else
              {
                t = c_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_8, t);
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_84 = NULL;
          r_84 = t;
          {
            ATerm k_37 = t;
            int l_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_44 = NULL;
                t = r_84;
                {
                  ATerm n_37 = t;
                  int o_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_37);
                    }
                  else
                    {
                      t = n_37;
                      t = fetch_1_0(w_8, t);
                    }
                  t = r_84;
                  t = default_system_usage_0_0(t);
                  t = term_c_16;
                  z_44 = t;
                  t = SSL_exit(z_44);
                }
                ;
                LocalPopChoice(l_37);
              }
            else
              {
                t = k_37;
                {
                  ATerm j_45 = NULL;
                  t = term_j_35;
                  t = get_config_0_0(t);
                  t = r_84;
                  t = default_system_about_0_0(t);
                  t = term_c_16;
                  j_45 = t;
                  t = SSL_exit(j_45);
                }
              }
          }
          ;
          LocalPopChoice(i_37);
        }
      else
        {
          t = h_37;
          {
            ATerm q_37 = t;
            int r_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
                ATerm x_8 (ATerm t)
                {
                  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,w_13 = NULL;
                  x_84 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_84 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_84);
                  v_84 = t;
                  t = w_84;
                  if(((b_84 != NULL) && (b_84 != t)))
                    _fail(t);
                  else
                    b_84 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_84);
                  w_13 = t;
                  t = SSLsetAnnotations(w_13, v_84);
                  return(t);
                }
                t = fetch_1_0(x_8, t);
                t = term_p_9;
                t_84 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_84)), term_v_37);
                u_84 = t;
                t = SSL_printnl(t_84, u_84);
                t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_84)), term_v_37));
                t = default_system_usage_0_0(t);
                t = term_a_10;
                s_84 = t;
                t = SSL_exit(s_84);
                ;
                LocalPopChoice(r_37);
              }
            else
              {
                t = q_37;
              }
          }
        }
      c_84 = t;
      t = term_k_33;
      e_84 = t;
      t = SSL_table_destroy(e_84);
      t = c_84;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL;
  t = parse_options_1_0(n_119, t);
  c_85 = t;
  t = term_w_37;
  f_85 = t;
  t = SSL_table_create(f_85);
  t = term_w_37;
  d_85 = t;
  t = term_z_37;
  e_85 = t;
  t = SSL_table_put(d_85, e_85, c_85);
  t = c_85;
  t = p_119(t);
  {
    ATerm a_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_119, t);
        ;
        LocalPopChoice(c_38);
      }
    else
      {
        t = a_38;
        {
          ATerm d_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_38);
            }
          else
            {
              t = d_38;
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
  ATerm g_85 = NULL,h_85 = NULL;
  t = term_k_38;
  g_85 = t;
  t = term_o_9;
  h_85 = t;
  t = term_p_38;
  t = v_10(g_85, h_85, t);
  t = term_q_38;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL;
  i_85 = t;
  t = term_e_34;
  t = get_config_0_0(t);
  j_85 = t;
  t = term_p_9;
  k_85 = t;
  t = (ATerm) ATinsert(ATempty, j_85);
  l_85 = t;
  t = SSL_printnl(k_85, l_85);
  t = i_85;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm s_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_118(t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = s_38;
        {
          ATerm z_38 = t;
          int f_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_39);
            }
          else
            {
              t = z_38;
              {
                ATerm i_39 = t;
                int j_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_39);
                  }
                else
                  {
                    t = i_39;
                    {
                      ATerm q_39 = t;
                      int r_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_9, e_9, j_9, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_39);
                              }
                            else
                              {
                                t = s_39;
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
    ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
    n_85 = t;
    {
      ATerm u_39 = t;
      int v_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_85 != NULL) && (m_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_9, t);
          ;
          LocalPopChoice(v_39);
        }
      else
        {
          t = u_39;
          t = term_w_39;
          m_85 = t;
        }
      t = not_null(m_85);
      t = ReadFromFile_0_0(t);
      o_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_85, o_85);
      t = apply_strategy_1_0(w_118, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_8, y_118, a_9, c_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
