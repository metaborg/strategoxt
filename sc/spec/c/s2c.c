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
ATerm term_s_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_a_38;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_u_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_i_36;
ATerm term_v_35;
ATerm term_p_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
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
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_c_12;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
void init_constant_terms (void)
{
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_d_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Id_1, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Id_1, term_z_10);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_11, (ATerm) ATempty);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_11, term_l_11);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Id_1, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Id_1, term_v_13);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Id_1, term_j_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Id_1, term_x_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Id_1, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Id_1, term_o_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Id_1, term_b_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Id_1, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Id_1, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Id_1, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_16, (ATerm) ATempty);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_16, term_l_11);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Id_1, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_17, term_l_11);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Id_1, term_k_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Id_1, term_x_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_g_16);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATempty);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_18, term_s_14);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATempty);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Stat_1, term_n_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, term_g_16);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Stat_1, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Id_1, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATempty);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_a_19, term_s_14);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_19, (ATerm) ATempty);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Id_1, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_19, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_l_17);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_19, (ATerm) ATempty);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_19, term_l_11);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_1, term_b_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Id_1, term_h_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Id_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_20, term_l_11);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Id_1, term_g_21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, term_g_16);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Id_1, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Return_1, term_g_16);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_16, term_l_11);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_k_11, term_c_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Id_1, term_c_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Id_1, term_g_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_11, (ATerm) ATempty);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Id_1, term_k_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_28, (ATerm) ATempty);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_30, (ATerm) ATempty);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Some_1, term_l_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_11, term_m_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("__UnboundVarError", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Id_1, term_o_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Char_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_30, (ATerm) ATempty);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_PointerOf_1, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("var", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Id_1, term_t_30);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("fprintf", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Id_1, term_v_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\"** compiler error: variable '%s' should be bound\\nnotify stratego-bugs@cs.uu.nl\\n\"", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_CallT_3, term_b_31, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_SDefT_4, term_z_30, (ATerm)ATempty, (ATerm)ATempty, term_h_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Op_2, term_y_31, (ATerm) ATempty);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Defined_2, term_a_32, term_j_15);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_g_32);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_15);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__3, term_u_9, term_p_39, term_u_26);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0_0 (ATerm);
ATerm Option_2_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm InitTermId_0_0 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm u_107 (ATerm), ATerm);
ATerm LiftCompound_0_0 (ATerm);
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm CachedTerms_0_0 (ATerm);
ATerm BuildDefault_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm Real_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm Str_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm Int_1_0 (ATerm i_85 (ATerm), ATerm);
ATerm Anno_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm Op_2_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm);
ATerm CacheConstant_0_0 (ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm MatchArg2_0_0 (ATerm);
ATerm MatchArg1_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm Id_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm FunCall_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm construct_term_0_0 (ATerm);
ATerm topdown_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm Cons_T_2_0 (ATerm w_0 (ATerm), ATerm a_1 (ATerm), ATerm);
ATerm thread_map_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm Var_1_0 (ATerm g_85 (ATerm), ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm TracedBody_0_0 (ATerm);
ATerm TraceAllFuns_0_0 (ATerm);
ATerm TraceFun_0_0 (ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm u_121 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm ConstructorName_0_0 (ATerm);
ATerm InitConstructor_0_0 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm q_121 (ATerm (ATerm), ATerm), ATerm);
ATerm cify_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm Arity_0_0 (ATerm);
ATerm DeclareConstructor_0_0 (ATerm);
ATerm TranslateSig_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm TranslateSpec_0_0 (ATerm);
ATerm downup2_2_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm);
ATerm assert_1_0 (ATerm a_133 (ATerm), ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_112 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_125 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_124 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_126 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_123 (ATerm), ATerm);
ATerm _2_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_125 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm i_127 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm w_128 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm b_130 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_129 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_129 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm t_126 (ATerm), ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm);
ATerm s2c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        t = (ATerm) ATempty;
      }
    g_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_2, f_2);
    t = conc_0_0(t);
    h_2 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_2, h_2);
    t = (ATerm) ATmakeAppl(sym__3, term_u_9, e_2, h_2);
  }
  return(t);
}
ATerm Option_2_0 (ATerm b_129 (ATerm), ATerm c_129 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = term_v_9;
    return(t);
  }
  t = Option_3_0(b_129, c_129, o_0, t);
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all   trace all strategies", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm t_0 (ATerm t)
      {
        ATerm j_2 = NULL;
        t = term_y_9;
        {
          ATerm v_0 (ATerm t)
          {
            t = term_z_9;
            return(t);
          }
          t = debug_1_0(v_0, t);
          j_2 = t;
          t = term_f_10;
          {
            ATerm x_0 (ATerm t)
            {
              t = term_g_10;
              return(t);
            }
            t = assert_1_0(x_0, t);
            t = j_2;
          }
        }
        return(t);
      }
      t = Option_2_0(r_0, t_0, t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm j_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_1 (ATerm t)
            {
              ATerm k_2 = NULL;
              k_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_2, term_o_10);
              {
                ATerm d_1 (ATerm t)
                {
                  t = term_p_10;
                  return(t);
                }
                t = assert_1_0(d_1, t);
                t = (ATerm) ATmakeAppl(sym_Trace_1, k_2);
              }
              return(t);
            }
            ATerm c_1 (ATerm t)
            {
              t = term_q_10;
              return(t);
            }
            t = ArgOption_3_0(z_0, b_1, c_1, t);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = j_10;
            {
              ATerm e_1 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm f_1 (ATerm t)
              {
                ATerm l_2 = NULL;
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_10, (ATerm) ATinsert(ATempty, l_2));
                t = post_extend_config_0_0(t);
                t = (ATerm) ATmakeAppl(sym_Include_1, l_2);
                return(t);
              }
              ATerm h_1 (ATerm t)
              {
                t = term_s_10;
                return(t);
              }
              t = ArgOption_3_0(e_1, f_1, h_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
      m_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, n_2)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_2), term_u_10, m_2)));
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  t = map_1_0(InitTermId_0_0, t);
  t = concat_0_0(t);
  t = reverse_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_y_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_y_10)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_2));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL;
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = (ATerm) ATempty;
    }
  r_2 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm q_0 = NULL;
      if(match_cons(t, sym__3))
        {
          ATerm e_11 = ATgetArgument(t, 0);
          q_0 = ATgetArgument(t, 1);
          {
            ATerm f_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_0), term_l_11)));
      return(t);
    }
    t = map_1_0(i_1, t);
    s_2 = t;
    t = r_2;
    t = InitTermIds_0_0(t);
    u_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_2, (ATerm) ATinsert(ATempty, u_2));
    t = conc_0_0(t);
    v_2 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, v_2);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_107(t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = SRTS_one(w_2, t);
      }
    return(t);
  }
  t = w_2(t);
  return(t);
}
ATerm LiftCompound_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_11 = ATgetFirst((ATermList) t);
      if(match_cons(p_11, sym_Compound_2))
        {
          ATerm q_11 = ATgetArgument(p_11, 0);
          if(((ATgetType(q_11) != AT_LIST) || !(ATisEmpty(q_11))))
            _fail(t);
          x_2 = ATgetArgument(p_11, 1);
        }
      else
        _fail(t);
      y_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
  t = conc_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm t_2 (ATerm), ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        t = listbu1_1_0(t_2, t);
        return(t);
      }
      t = Cons_2_0(_id, j_1, t);
      t = try_1_0(t_2, t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      t = t_2(t);
    }
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
      t = x_3;
      if(match_cons(t, sym_Compound_2))
        {
          y_3 = ATgetArgument(t, 0);
          z_3 = ATgetArgument(t, 1);
          t = z_3;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = y_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      f_4 = ATgetArgument(t, 0);
                      i_4 = ATgetArgument(t, 1);
                      t = i_4;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_4;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              ATerm t_11 = t;
                              int u_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_4), x_3);
                                  ;
                                  LocalPopChoice(u_11);
                                }
                              else
                                {
                                  t = t_11;
                                  t = (ATerm) ATmakeAppl(sym_If_2, d_4, e_4);
                                }
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, d_4, e_4);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, d_4, e_4);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, d_4, e_4);
                    }
                }
              else
                {
                  t = e_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      f_4 = ATgetArgument(t, 0);
                      i_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_4), x_3);
                }
            }
          else
            {
              t = e_4;
              if(match_cons(t, sym_Compound_2))
                {
                  f_4 = ATgetArgument(t, 0);
                  i_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_4), x_3);
            }
        }
      else
        {
          t = e_4;
          if(match_cons(t, sym_Compound_2))
            {
              f_4 = ATgetArgument(t, 0);
              i_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_4), x_3);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_4 = ATgetFirst((ATermList) t);
          e_4 = (ATerm) ATgetNext((ATermList) t);
          t = d_4;
          if(match_cons(t, sym_Compound_2))
            {
              a_4 = ATgetArgument(t, 0);
              b_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, b_4, e_4);
          t = conc_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              d_4 = ATgetArgument(t, 0);
              e_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_4;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_4 = ATgetFirst((ATermList) t);
              i_4 = (ATerm) ATgetNext((ATermList) t);
              t = i_4;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = f_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      g_4 = ATgetArgument(t, 0);
                      h_4 = ATgetArgument(t, 1);
                      {
                        ATerm v_11 = t;
                        int w_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_5 = NULL;
                            t = e_4;
                            t = listbu1_1_0(LiftCompound_0_0, t);
                            e_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, d_4, e_5);
                            ;
                            LocalPopChoice(w_11);
                          }
                        else
                          {
                            t = v_11;
                            {
                              ATerm x_11 = t;
                              int y_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_5 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
                                  t = conc_0_0(t);
                                  i_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, i_5, h_4);
                                  ;
                                  LocalPopChoice(y_11);
                                }
                              else
                                {
                                  t = x_11;
                                  {
                                    ATerm o_5 = NULL,q_5 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
                                    t = conc_0_0(t);
                                    o_5 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
                                    t = conc_0_0(t);
                                    q_5 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, q_5);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_5 = NULL;
                      t = e_4;
                      t = listbu1_1_0(LiftCompound_0_0, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, d_4, v_5);
                    }
                }
              else
                {
                  t = f_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      g_4 = ATgetArgument(t, 0);
                      h_4 = ATgetArgument(t, 1);
                      {
                        ATerm z_11 = t;
                        int b_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_6 = NULL;
                            t = e_4;
                            t = listbu1_1_0(LiftCompound_0_0, t);
                            a_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, d_4, a_6);
                            ;
                            LocalPopChoice(b_12);
                          }
                        else
                          {
                            t = z_11;
                            {
                              ATerm r_6 = NULL,v_6 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, d_4, g_4);
                              t = conc_0_0(t);
                              r_6 = t;
                              t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
                              t = conc_0_0(t);
                              v_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, r_6, v_6);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_7 = NULL;
                      t = e_4;
                      t = listbu1_1_0(LiftCompound_0_0, t);
                      b_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, d_4, b_7);
                    }
                }
            }
          else
            {
              ATerm f_7 = NULL;
              t = e_4;
              t = listbu1_1_0(LiftCompound_0_0, t);
              f_7 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, d_4, f_7);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = s_105(t);
      t = g_7(t);
      return(t);
    }
    t = try_1_0(l_1, t);
    return(t);
  }
  t = g_7(t);
  return(t);
}
ATerm CachedTerms_0_0 (ATerm t)
{
  ATerm j_7 = NULL;
  t = (ATerm) ATempty;
  {
    ATerm m_1 (ATerm t)
    {
      t = term_c_12;
      return(t);
    }
    t = rewrite_1_0(m_1, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm d_12 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("h_0", 0, ATtrue)))
          _fail(t);
        j_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_7;
  }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      m_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  l_7 = t;
  t = m_7;
  t = d_86(t);
  n_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, n_7), l_7);
  return(t);
}
ATerm Real_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  y_7 = t;
  if(match_cons(t, sym_Real_1))
    {
      w_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_7);
  v_7 = t;
  t = w_7;
  t = j_85(t);
  x_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, x_7), v_7);
  return(t);
}
ATerm Str_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      f_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_8);
  e_8 = t;
  t = f_8;
  t = k_85(t);
  g_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, g_8), e_8);
  return(t);
}
ATerm Int_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,u_8 = NULL,z_8 = NULL,a_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_Int_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_9);
  n_8 = t;
  t = u_8;
  t = i_85(t);
  z_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, z_8), n_8);
  return(t);
}
ATerm Anno_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL,l_9 = NULL,m_9 = NULL,o_9 = NULL,q_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_Anno_2))
    {
      i_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  g_9 = t;
  t = i_9;
  t = s_85(t);
  m_9 = t;
  t = l_9;
  t = t_85(t);
  o_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, m_9, o_9), g_9);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Op_2_0(n_1, o_1, t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                ATerm s_1 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  return(t);
                }
                t = Cons_2_0(proper_list_0_0, s_1, t);
                return(t);
              }
              t = Cons_2_0(_id, r_1, t);
              return(t);
            }
            t = Op_2_0(p_1, q_1, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm t_1 (ATerm t)
              {
                ATerm i_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_10 = NULL;
                    a_10 = t;
                    if(match_string(t, "Nil"))
                      {
                        t = a_10;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                          _fail(t);
                        t = a_10;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_12;
                  }
                return(t);
              }
              t = Op_2_0(t_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,e_10 = NULL,h_10 = NULL,i_10 = NULL,k_10 = NULL,m_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_10);
  c_10 = t;
  t = e_10;
  t = m_85(t);
  i_10 = t;
  t = h_10;
  t = n_85(t);
  k_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, i_10, k_10), c_10);
  return(t);
}
ATerm CacheConstant_0_0 (ATerm t)
{
  ATerm a_11 = NULL,h_11 = NULL,i_11 = NULL,m_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          t = map_1_0(Cache_0_0, t);
          return(t);
        }
        t = Op_2_0(_id, u_1, t);
        t = proper_list_0_0(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Anno_2_0(Cache_0_0, Cache_0_0, t);
              ;
              LocalPopChoice(m_12);
            }
          else
            {
              t = l_12;
              {
                ATerm n_12 = t;
                int o_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1_0(_id, t);
                    ;
                    LocalPopChoice(o_12);
                  }
                else
                  {
                    t = n_12;
                    {
                      ATerm p_12 = t;
                      int q_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1_0(_id, t);
                          ;
                          LocalPopChoice(q_12);
                        }
                      else
                        {
                          t = p_12;
                          {
                            ATerm r_12 = t;
                            int u_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1_0(_id, t);
                                ;
                                LocalPopChoice(u_12);
                              }
                            else
                              {
                                t = r_12;
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
    i_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_12, i_11);
    t = conc_strings_0_0(t);
    m_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_11, (ATerm) ATmakeAppl(sym_Defined_2, term_w_12, m_11));
    {
      ATerm v_1 (ATerm t)
      {
        t = term_x_12;
        return(t);
      }
      t = assert_1_0(v_1, t);
      t = m_11;
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CachedTerms_0_0(t);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = (ATerm) ATempty;
          }
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, (ATerm) ATinsert(CheckATermList(a_12), (ATerm) ATmakeAppl(sym__3, i_11, m_11, h_11))));
        {
          ATerm w_1 (ATerm t)
          {
            t = term_c_12;
            return(t);
          }
          t = assert_1_0(w_1, t);
          t = (ATerm) ATmakeAppl(sym_Id_1, m_11);
        }
      }
    }
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = s_12;
        {
          ATerm x_1 (ATerm t)
          {
            t = term_x_12;
            return(t);
          }
          t = rewrite_1_0(x_1, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm d_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              u_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Id_1, u_0);
        }
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          ATerm y_0 = NULL;
          t = s_12;
          {
            ATerm y_1 (ATerm t)
            {
              t = term_x_12;
              return(t);
            }
            t = rewrite_1_0(y_1, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm e_13 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                  _fail(t);
                y_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_0;
          }
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
        ATerm o_13 = NULL,g_1 = NULL;
        o_13 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = ConstructList_0_0(t);
                ;
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                t = ConstructTerm_0_0(t);
              }
            return(t);
          }
          t = try_1_0(z_1, t);
          g_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_13, g_1);
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = CacheConstant_0_0(t);
                ;
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                {
                  ATerm k_1 = NULL;
                  t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_13, g_1));
                  if(match_cons(t, sym__2))
                    {
                      ATerm l_13 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm m_13 = ATgetArgument(t, 1);
                        if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
                          {
                            ATerm n_13 = ATgetFirst((ATermList) m_13);
                            ATerm p_13 = (ATerm) ATgetNext((ATermList) m_13);
                            if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
                              {
                                k_1 = ATgetFirst((ATermList) p_13);
                                {
                                  ATerm q_13 = (ATerm) ATgetNext((ATermList) p_13);
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
                  t = k_1;
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
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_14), term_l_11), (ATerm) ATmakeAppl(sym_AssignInit_1, a_14)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, z_13, (ATerm) ATmakeAppl(sym_Id_1, b_14))));
  return(t);
}
ATerm MatchArg1_0_0 (ATerm t)
{
  ATerm c_14 = NULL,e_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      c_14 = r_13;
      if(match_cons(r_13, sym_Var_1))
        {
          e_14 = ATgetArgument(r_13, 0);
        }
      else
        _fail(t);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  h_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, e_14), h_14);
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, i_14, f_14);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_13, (ATerm) ATinsert(ATinsert(ATempty, u_15), w_15)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          w_15 = ATgetArgument(t, 0);
          u_15 = ATgetArgument(t, 1);
          {
            ATerm d_16 = NULL,f_16 = NULL;
            t = u_15;
            t = length_0_0(t);
            d_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_15, d_16);
            t = ConstructorName_0_0(t);
            f_16 = t;
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_13, (ATerm) ATinsert(CheckATermList(u_15), (ATerm) ATmakeAppl(sym_Id_1, f_16))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              w_15 = ATgetArgument(t, 0);
              t = w_15;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  w_15 = ATgetArgument(t, 0);
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(v_15);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_14 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) d_14) != ATmakeSymbol("unbound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm g_14 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(g_14) != AT_LIST) || !(ATisEmpty(g_14))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_15)));
                        ;
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm l_14 = t;
                          int m_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(v_15);
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_15)));
                              ;
                              LocalPopChoice(m_14);
                            }
                          else
                            {
                              t = l_14;
                              t = SSLgetAnnotations(v_15);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm n_14 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("bound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm o_14 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(o_14) != AT_LIST) || !(ATisEmpty(o_14))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Id_1, w_15);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      w_15 = ATgetArgument(t, 0);
                      {
                        ATerm k_16 = NULL;
                        t = w_15;
                        t = escape_0_0(t);
                        t = double_quote_0_0(t);
                        k_16 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), term_s_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, k_16)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          w_15 = ATgetArgument(t, 0);
                          {
                            ATerm a_2 = NULL;
                            t = SSL_real_to_string(w_15);
                            a_2 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, a_2))));
                          }
                        }
                      else
                        {
                          ATerm i_2 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              w_15 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(w_15);
                          i_2 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, i_2))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Id_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  q_16 = t;
  t = r_16;
  t = m_95(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, s_16), q_16);
  return(t);
}
ATerm FunCall_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_FunCall_2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  x_16 = t;
  t = y_16;
  t = o_98(t);
  a_17 = t;
  t = z_16;
  t = p_98(t);
  b_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, a_17, b_17), x_16);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_18;
  if(match_string(t, "Cons"))
    {
      ATerm g_3 = NULL;
      t = v_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_18 = ATgetFirst((ATermList) t);
          q_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_18;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                k_3 = ATgetArgument(t, 0);
                r_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_3;
            if(match_cons(t, sym_TypeName_2))
              {
                l_3 = ATgetArgument(t, 0);
                q_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_3;
            if(match_cons(t, sym_TypeSpec_3))
              {
                m_3 = ATgetArgument(t, 0);
                n_3 = ATgetArgument(t, 1);
                p_3 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_3;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_3;
            if(match_cons(t, sym_TypeId_1))
              {
                o_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_3;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = p_3;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_3;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = r_3;
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_2 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  t = Id_1_0(b_2, t);
                  ;
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm o_2 (ATerm t)
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                          _fail(t);
                        return(t);
                      }
                      t = Id_1_0(o_2, t);
                      return(t);
                    }
                    ATerm d_2 (ATerm t)
                    {
                      ATerm q_2 (ATerm t)
                      {
                        ATerm z_2 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = Cons_2_0(_id, z_2, t);
                        return(t);
                      }
                      t = Cons_2_0(_id, q_2, t);
                      return(t);
                    }
                    t = FunCall_2_0(c_2, d_2, t);
                  }
                }
            }
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_15, (ATerm) ATinsert(ATempty, r_18));
          }
        g_3 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_15, (ATerm) ATinsert(ATinsert(ATempty, p_18), g_3)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = v_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_15;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = bottomup_1_0(r_106, t);
    return(t);
  }
  t = SRTS_all(a_3, t);
  t = r_106(t);
  return(t);
}
ATerm construct_term_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0_0(t);
          ;
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          t = ConstructTerm_0_0(t);
        }
      return(t);
    }
    t = try_1_0(c_3, t);
    return(t);
  }
  t = bottomup_1_0(b_3, t);
  return(t);
}
ATerm topdown_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  t = q_106(t);
  {
    ATerm d_3 (ATerm t)
    {
      t = topdown_1_0(q_106, t);
      return(t);
    }
    t = SRTS_all(d_3, t);
  }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm b_29 (ATerm b_21, ATerm c_21, ATerm d_21, ATerm e_21, ATerm t)
  {
    ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
    t = b_21;
    {
      ATerm m_15 = t;
      if((PushChoice() == 0))
        {
          ATerm l_21 = NULL;
          l_21 = t;
          if(match_string(t, "Nil"))
            {
              t = l_21;
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = l_21;
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_15;
        }
      t = (ATerm) ATmakeAppl(sym__2, c_21, term_n_15);
      {
        ATerm e_3 (ATerm t)
        {
          ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
          if(match_cons(t, sym__2))
            {
              m_21 = ATgetArgument(t, 0);
              n_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_int_to_string(n_21);
          o_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, o_21)), d_21)));
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatchArg1_0_0(t);
                ;
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                t = MatchArg2_0_0(t);
              }
            p_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_21, term_s_15);
            {
              ATerm t_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(n_21, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = t_15;
                  t = SSL_addr(n_21, (ATerm) ATmakeInt(1));
                }
              q_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
            }
          }
          return(t);
        }
        t = thread_map_1_0(e_3, t);
        if(match_cons(t, sym__2))
          {
            i_21 = ATgetArgument(t, 0);
            {
              ATerm y_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = c_21;
        t = length_0_0(t);
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_21, j_21);
        t = ConstructorName_0_0(t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_21)), d_21)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, i_21), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16))));
      }
    }
    return(t);
  }
  ATerm c_29 (ATerm r_21, ATerm s_21, ATerm t_21, ATerm t)
  {
    ATerm w_21 = NULL;
    t = SSL_real_to_string(r_21);
    w_21 = t;
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, s_21)), term_l_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_16, s_21))), (ATerm) ATmakeAppl(sym_FloatConst_1, w_21))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16))));
    return(t);
  }
  ATerm d_29 (ATerm x_21, ATerm y_21, ATerm z_21, ATerm t)
  {
    ATerm c_22 = NULL;
    t = SSL_int_to_string(x_21);
    c_22 = t;
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, y_21)), term_d_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_17, y_21))), (ATerm) ATmakeAppl(sym_IntConst_1, c_22))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16))));
    return(t);
  }
  ATerm e_29 (ATerm d_22, ATerm e_22, ATerm f_22, ATerm g_22, ATerm t)
  {
    t = SSLgetAnnotations(d_22);
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, e_22), term_l_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, e_22), f_22)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, f_22))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_22), term_u_10, f_22)));
    return(t);
  }
  ATerm f_29 (ATerm k_22, ATerm l_22, ATerm m_22, ATerm n_22, ATerm t)
  {
    t = SSLgetAnnotations(k_22);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm m_17 = ATgetFirst((ATermList) t);
        if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("bound", 0, ATtrue)))
          _fail(t);
        {
          ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(n_17) != AT_LIST) || !(ATisEmpty(n_17))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, l_22), m_22), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, m_22))))));
    return(t);
  }
  ATerm g_29 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm u_22, ATerm t)
  {
    t = SSLgetAnnotations(r_22);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm o_17 = ATgetFirst((ATermList) t);
        if((ATgetSymbol((ATermAppl) o_17) != ATmakeSymbol("unbound", 0, ATtrue)))
          _fail(t);
        {
          ATerm p_17 = (ATerm) ATgetNext((ATermList) t);
          if(((ATgetType(p_17) != AT_LIST) || !(ATisEmpty(p_17))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_22), term_u_10, t_22));
    return(t);
  }
  ATerm h_29 (ATerm y_22, ATerm z_22, ATerm a_23, ATerm b_23, ATerm c_23, ATerm d_23, ATerm e_23, ATerm f_23, ATerm t)
  {
    ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
    t = z_22;
    {
      ATerm q_17 = t;
      if((PushChoice() == 0))
        {
          ATerm q_23 = NULL;
          q_23 = t;
          if(match_string(t, "Nil"))
            {
              t = q_23;
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = q_23;
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_17;
        }
      t = (ATerm) ATmakeAppl(sym__2, b_23, term_n_15);
      {
        ATerm f_3 (ATerm t)
        {
          ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm r_17 = ATgetArgument(t, 0);
              if(match_cons(r_17, sym_Var_1))
                {
                  r_23 = ATgetArgument(r_17, 0);
                }
              else
                _fail(t);
              s_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSL_int_to_string(s_23);
          t_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_23, term_s_15);
          {
            ATerm s_17 = t;
            int t_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(s_23, (ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_17);
              }
            else
              {
                t = s_17;
                t = SSL_addr(s_23, (ATerm) ATmakeInt(1));
              }
            u_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_23), term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, t_23)), (ATerm) ATmakeAppl(sym_Id_1, y_22))))), u_23);
          }
          return(t);
        }
        t = thread_map_1_0(f_3, t);
        if(match_cons(t, sym__2))
          {
            n_23 = ATgetArgument(t, 0);
            {
              ATerm u_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_22, a_23);
        t = ConstructorName_0_0(t);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, (ATerm) ATinsert(ATempty, c_23));
        t = conc_0_0(t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_23)), (ATerm) ATmakeAppl(sym_Id_1, y_22))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_23), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, y_22), d_23, e_23))));
      }
    }
    return(t);
  }
  ATerm i_29 (ATerm v_23, ATerm w_23, ATerm x_23, ATerm y_23, ATerm z_23, ATerm a_24, ATerm t)
  {
    ATerm g_24 = NULL;
    t = SSL_real_to_string(w_23);
    g_24 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, g_24)), (ATerm) ATmakeAppl(sym_Id_1, v_23))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_23)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, v_23), y_23, z_23))));
    return(t);
  }
  ATerm j_29 (ATerm h_24, ATerm i_24, ATerm j_24, ATerm k_24, ATerm l_24, ATerm m_24, ATerm t)
  {
    ATerm s_24 = NULL;
    t = SSL_int_to_string(i_24);
    s_24 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_24)), (ATerm) ATmakeAppl(sym_Id_1, h_24))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_24)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, h_24), k_24, l_24))));
    return(t);
  }
  ATerm k_29 (ATerm t_24, ATerm u_24, ATerm v_24, ATerm t)
  {
    t = u_24;
    {
      ATerm z_17 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_17;
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_24), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_24)));
    }
    return(t);
  }
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, v_25, (ATerm) ATinsert(ATempty, s_25));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          v_25 = ATgetArgument(t, 0);
          {
            ATerm z_25 = NULL;
            t = u_25;
            t = new_0_0(t);
            z_25 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_25), term_l_11))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_Id_1, z_25)))), v_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_25), term_u_10, term_g_16))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              v_25 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, v_25);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  v_25 = ATgetArgument(t, 0);
                  s_25 = ATgetArgument(t, 1);
                  p_25 = ATgetArgument(t, 2);
                  {
                    ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
                    t = v_25;
                    if(match_cons(t, sym_SVar_1))
                      {
                        t_25 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_25;
                    {
                      ATerm h_3 (ATerm t)
                      {
                        ATerm h_26 = NULL;
                        if(match_cons(t, sym_CallT_3))
                          {
                            ATerm a_18 = ATgetArgument(t, 0);
                            if(match_cons(a_18, sym_SVar_1))
                              {
                                h_26 = ATgetArgument(a_18, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm b_18 = ATgetArgument(t, 1);
                              if(((ATgetType(b_18) != AT_LIST) || !(ATisEmpty(b_18))))
                                _fail(t);
                            }
                            {
                              ATerm c_18 = ATgetArgument(t, 2);
                              if(((ATgetType(c_18) != AT_LIST) || !(ATisEmpty(c_18))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Id_1, h_26);
                        return(t);
                      }
                      t = map_1_0(h_3, t);
                      e_26 = t;
                      t = p_25;
                      {
                        ATerm i_3 (ATerm t)
                        {
                          ATerm j_3 (ATerm t)
                          {
                            t = try_1_0(construct_term_0_0, t);
                            return(t);
                          }
                          t = topdown_1_0(j_3, t);
                          return(t);
                        }
                        t = map_1_0(i_3, t);
                        f_26 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_16)), f_26), e_26);
                        t = concat_0_0(t);
                        g_26 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, t_25), g_26)));
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      v_25 = ATgetArgument(t, 0);
                      s_25 = ATgetArgument(t, 1);
                      p_25 = ATgetArgument(t, 2);
                      {
                        ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
                        t = s_25;
                        {
                          ATerm s_3 (ATerm t)
                          {
                            ATerm o_26 = NULL;
                            if(match_cons(t, sym_CallT_3))
                              {
                                ATerm d_18 = ATgetArgument(t, 0);
                                if(match_cons(d_18, sym_SVar_1))
                                  {
                                    o_26 = ATgetArgument(d_18, 0);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm e_18 = ATgetArgument(t, 1);
                                  if(((ATgetType(e_18) != AT_LIST) || !(ATisEmpty(e_18))))
                                    _fail(t);
                                }
                                {
                                  ATerm f_18 = ATgetArgument(t, 2);
                                  if(((ATgetType(f_18) != AT_LIST) || !(ATisEmpty(f_18))))
                                    _fail(t);
                                }
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_Id_1, o_26);
                            return(t);
                          }
                          t = map_1_0(s_3, t);
                          l_26 = t;
                          t = p_25;
                          {
                            ATerm t_3 (ATerm t)
                            {
                              ATerm u_3 (ATerm t)
                              {
                                t = try_1_0(construct_term_0_0, t);
                                return(t);
                              }
                              t = topdown_1_0(u_3, t);
                              return(t);
                            }
                            t = map_1_0(t_3, t);
                            m_26 = t;
                            t = (ATerm) ATmakeAppl(sym__2, l_26, m_26);
                            t = conc_0_0(t);
                            n_26 = t;
                            t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, v_25), n_26)));
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          v_25 = ATgetArgument(t, 0);
                          {
                            ATerm q_26 = NULL;
                            t = u_25;
                            t = new_0_0(t);
                            q_26 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_26), term_l_11), term_g_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_18, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_18), term_o_18), v_25)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_Id_1, q_26))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              v_25 = ATgetArgument(t, 0);
                              s_25 = ATgetArgument(t, 1);
                              {
                                ATerm t_26 = NULL;
                                t = u_25;
                                t = new_0_0(t);
                                t_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, t_26), term_l_11), term_g_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_b_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_25)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_Id_1, t_26))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  v_25 = ATgetArgument(t, 0);
                                  s_25 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, v_25, s_25);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      v_25 = ATgetArgument(t, 0);
                                      s_25 = ATgetArgument(t, 1);
                                      p_25 = ATgetArgument(t, 2);
                                      {
                                        ATerm z_26 = NULL,a_27 = NULL;
                                        t = u_25;
                                        t = new_0_0(t);
                                        z_26 = t;
                                        t = new_0_0(t);
                                        a_27 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_27), term_l_11), term_h_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_26), term_l_11), term_g_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_18, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_27))))), v_25)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_Id_1, z_26))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          v_25 = ATgetArgument(t, 0);
                                          s_25 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_27 = NULL,e_27 = NULL;
                                            t = u_25;
                                            t = new_0_0(t);
                                            d_27 = t;
                                            t = new_0_0(t);
                                            e_27 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_27), term_l_11), term_h_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_27), term_l_11), term_g_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_18, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_27))))), term_n_19), v_25)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, (ATerm) ATmakeAppl(sym_Id_1, d_27))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              v_25 = ATgetArgument(t, 0);
                                              s_25 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_25, s_25);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  v_25 = ATgetArgument(t, 0);
                                                  s_25 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_25), v_25));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      v_25 = ATgetArgument(t, 0);
                                                      s_25 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm l_27 = NULL;
                                                        t = v_25;
                                                        {
                                                          ATerm v_3 (ATerm t)
                                                          {
                                                            ATerm m_27 = NULL;
                                                            m_27 = t;
                                                            t = (ATerm) ATmakeAppl(sym__2, m_27, term_p_19);
                                                            {
                                                              ATerm w_3 (ATerm t)
                                                              {
                                                                t = term_q_19;
                                                                return(t);
                                                              }
                                                              t = assert_1_0(w_3, t);
                                                              t = m_27;
                                                            }
                                                            return(t);
                                                          }
                                                          t = map_1_0(v_3, t);
                                                          t = v_25;
                                                          {
                                                            ATerm c_4 (ATerm t)
                                                            {
                                                              ATerm n_27 = NULL;
                                                              n_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_27), term_l_11), term_r_19);
                                                              return(t);
                                                            }
                                                            t = map_1_0(c_4, t);
                                                            l_27 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, l_27)), (ATerm) ATinsert(ATempty, s_25));
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_s_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  v_25 = ATgetArgument(t, 0);
                                                                  s_25 = ATgetArgument(t, 1);
                                                                  t = v_25;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      t_25 = ATgetArgument(t, 0);
                                                                      c_25 = ATgetArgument(t, 1);
                                                                      t = c_25;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          y_24 = ATgetFirst((ATermList) t);
                                                                          z_24 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = z_24;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              a_25 = ATgetFirst((ATermList) t);
                                                                              b_25 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = b_25;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = t_25;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm t_19 = t;
                                                                                      int u_19 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm r_27 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, s_25)))))), (ATerm) ATmakeAppl(sym__2, y_24, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, s_25)))));
                                                                                          {
                                                                                            ATerm j_4 (ATerm t)
                                                                                            {
                                                                                              ATerm d_20 = t;
                                                                                              int e_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(e_20);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_20;
                                                                                                  t = MatchArg2_0_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1_0(j_4, t);
                                                                                            r_27 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, s_25)), term_g_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, s_25)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_27), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16))));
                                                                                          }
                                                                                          ;
                                                                                          LocalPopChoice(u_19);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_19;
                                                                                          t = b_29(t_25, c_25, s_25, u_25, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_29(t_25, c_25, s_25, u_25, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = t_25;
                                                                                  t = b_29(t_25, c_25, s_25, u_25, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_25;
                                                                              t = b_29(t_25, c_25, s_25, u_25, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = t_25;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm j_20 = t;
                                                                                  int k_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, s_25)), term_g_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, s_25)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16))));
                                                                                      ;
                                                                                      LocalPopChoice(k_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_20;
                                                                                      t = b_29(t_25, c_25, s_25, u_25, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_29(t_25, c_25, s_25, u_25, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_25;
                                                                              t = b_29(t_25, c_25, s_25, u_25, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          t_25 = ATgetArgument(t, 0);
                                                                          t = c_29(t_25, s_25, u_25, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              t_25 = ATgetArgument(t, 0);
                                                                              t = d_29(t_25, s_25, u_25, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  t_25 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm v_27 = NULL;
                                                                                    t = t_25;
                                                                                    t = escape_0_0(t);
                                                                                    t = double_quote_0_0(t);
                                                                                    v_27 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, s_25))), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_14), term_s_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, v_27))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_g_16))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      t_25 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm r_20 = t;
                                                                                        int s_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = e_29(v_25, t_25, s_25, u_25, t);
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
                                                                                                  t = f_29(v_25, t_25, s_25, u_25, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(u_20);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_20;
                                                                                                  t = g_29(v_25, t_25, s_25, u_25, t);
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_As_2))
                                                                                        {
                                                                                          t_25 = ATgetArgument(t, 0);
                                                                                          c_25 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, c_25, s_25)), (ATerm) ATmakeAppl(sym_Match_2, t_25, s_25)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm v_20 = t;
                                                                                          int w_20 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm x_20 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(w_20);
                                                                                              t = term_s_19;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_20;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_s_19;
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
                                                                      v_25 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, v_25, term_g_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          v_25 = ATgetArgument(t, 0);
                                                                          s_25 = ATgetArgument(t, 1);
                                                                          p_25 = ATgetArgument(t, 2);
                                                                          t = v_25;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              t_25 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = s_25;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              r_25 = ATgetFirst((ATermList) t);
                                                                              o_25 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = r_25;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  k_25 = ATgetArgument(t, 0);
                                                                                  m_25 = ATgetArgument(t, 1);
                                                                                  n_25 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = k_25;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  l_25 = ATgetArgument(t, 0);
                                                                                  j_25 = ATgetArgument(t, 1);
                                                                                  t = m_25;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      d_25 = ATgetFirst((ATermList) t);
                                                                                      f_25 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = f_25;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          g_25 = ATgetFirst((ATermList) t);
                                                                                          i_25 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = i_25;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = g_25;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  h_25 = ATgetArgument(t, 0);
                                                                                                  t = d_25;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      e_25 = ATgetArgument(t, 0);
                                                                                                      t = j_25;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = l_25;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm y_20 = t;
                                                                                                              int z_20 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_25))), term_g_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_25))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_25), term_u_10, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, (ATerm) ATmakeAppl(sym_Id_1, t_25)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_25), term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, (ATerm) ATmakeAppl(sym_Id_1, t_25)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, t_25), o_25, p_25))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(z_20);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_20;
                                                                                                                  t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = l_25;
                                                                                                          t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_25;
                                                                                                      t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = l_25;
                                                                                                  t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_25;
                                                                                              t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_25;
                                                                                          t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = j_25;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = l_25;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm a_21 = t;
                                                                                                  int f_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_25))), term_g_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_25)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_25), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, t_25), o_25, p_25))));
                                                                                                      ;
                                                                                                      LocalPopChoice(f_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_21;
                                                                                                      t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_25;
                                                                                              t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_25;
                                                                                          t = h_29(t_25, l_25, j_25, m_25, n_25, o_25, p_25, u_25, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      l_25 = ATgetArgument(t, 0);
                                                                                      t = i_29(t_25, l_25, n_25, o_25, p_25, u_25, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          l_25 = ATgetArgument(t, 0);
                                                                                          t = j_29(t_25, l_25, n_25, o_25, p_25, u_25, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm p_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              l_25 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_25;
                                                                                          t = escape_0_0(t);
                                                                                          t = double_quote_0_0(t);
                                                                                          p_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, p_28))), (ATerm) ATmakeAppl(sym_Id_1, t_25))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_25)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, t_25), o_25, p_25))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = p_25;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              v_25 = ATgetArgument(t, 0);
                                                                              s_25 = ATgetArgument(t, 1);
                                                                              p_25 = ATgetArgument(t, 2);
                                                                              q_25 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, v_25), (ATerm) ATmakeAppl(sym_Case_3, s_25, p_25, q_25));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  v_25 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, v_25));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      v_25 = ATgetArgument(t, 0);
                                                                                      s_25 = ATgetArgument(t, 1);
                                                                                      t = v_25;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          t_25 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = s_25;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          r_25 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm u_21 = t;
                                                                                            int v_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, t_25), term_l_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, t_25), (ATerm) ATmakeAppl(sym_Id_1, r_25))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, r_25)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_25), term_u_10, (ATerm) ATmakeAppl(sym_Id_1, r_25))));
                                                                                                ;
                                                                                                LocalPopChoice(v_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_21;
                                                                                                t = k_29(t_25, s_25, u_25, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_29(t_25, s_25, u_25, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          v_25 = ATgetArgument(t, 0);
                                                                                          t = v_25;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              t_25 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_25), term_u_10, term_g_16));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm a_29 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              v_25 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = v_25;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          a_29 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_16, term_u_10, a_29));
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
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
        {
          l_29 = ATgetFirst((ATermList) a_22);
          m_29 = (ATerm) ATgetNext((ATermList) a_22);
        }
      else
        _fail(t);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_29, n_29);
  t = w_0(t);
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_29, p_29);
  t = a_1(t);
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_29), o_29), q_29);
  return(t);
}
ATerm thread_map_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm x_29 (ATerm t)
  {
    ATerm b_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2_0(y_118, x_29, t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = b_22;
        {
          ATerm u_29 = NULL,v_29 = NULL;
          u_29 = t;
          if(match_cons(t, sym__2))
            {
              v_29 = ATgetArgument(t, 0);
              {
                ATerm i_22 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = v_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_29;
        }
      }
    return(t);
  }
  t = x_29(t);
  return(t);
}
ATerm Var_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  y_29 = t;
  t = z_29;
  t = g_85(t);
  a_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, a_30), y_29);
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm h_33 (ATerm c_31, ATerm d_31, ATerm e_31, ATerm f_31, ATerm g_31, ATerm t)
  {
    ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
    t = c_31;
    {
      ATerm j_22 = t;
      if((PushChoice() == 0))
        {
          ATerm p_31 = NULL;
          p_31 = t;
          if(match_string(t, "Nil"))
            {
              t = p_31;
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = p_31;
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_22;
        }
      t = d_31;
      {
        ATerm k_4 (ATerm t)
        {
          t = Var_1_0(_id, t);
          return(t);
        }
        t = map_1_0(k_4, t);
        t = (ATerm) ATmakeAppl(sym__2, d_31, term_n_15);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm o_22 = ATgetArgument(t, 0);
                if(match_cons(o_22, sym_Var_1))
                  {
                    q_31 = ATgetArgument(o_22, 0);
                  }
                else
                  _fail(t);
                r_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_int_to_string(r_31);
            s_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_31, term_s_15);
            {
              ATerm p_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(r_31, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(q_22);
                }
              else
                {
                  t = p_22;
                  t = SSL_addr(r_31, (ATerm) ATmakeInt(1));
                }
              t_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_31), term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_31)), term_g_16)))), t_31);
            }
            return(t);
          }
          t = thread_map_1_0(l_4, t);
          if(match_cons(t, sym__2))
            {
              l_31 = ATgetArgument(t, 0);
              {
                ATerm v_22 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = d_31;
          t = length_0_0(t);
          m_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_31, m_31);
          t = ConstructorName_0_0(t);
          n_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_31, (ATerm) ATinsert(ATempty, e_31));
          t = conc_0_0(t);
          o_31 = t;
          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, n_31)), term_g_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, o_31), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_31)));
        }
      }
    }
    return(t);
  }
  ATerm i_33 (ATerm u_31, ATerm v_31, ATerm w_31, ATerm x_31, ATerm t)
  {
    ATerm b_32 = NULL;
    t = SSL_real_to_string(u_31);
    b_32 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, b_32)), term_g_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_31)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_31)));
    return(t);
  }
  ATerm j_33 (ATerm c_32, ATerm d_32, ATerm e_32, ATerm f_32, ATerm t)
  {
    ATerm j_32 = NULL;
    t = SSL_int_to_string(c_32);
    j_32 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, j_32)), term_g_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_32)));
    return(t);
  }
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      s_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
      w_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_32;
  if(match_cons(t, sym_Match_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_32;
  if(match_cons(t, sym_Op_2))
    {
      u_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
      t = q_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_32 = ATgetFirst((ATermList) t);
          m_32 = (ATerm) ATgetNext((ATermList) t);
          t = m_32;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_32 = ATgetFirst((ATermList) t);
              p_32 = (ATerm) ATgetNext((ATermList) t);
              t = p_32;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_32;
                  if(match_cons(t, sym_Var_1))
                    {
                      o_32 = ATgetArgument(t, 0);
                      t = k_32;
                      if(match_cons(t, sym_Var_1))
                        {
                          l_32 = ATgetArgument(t, 0);
                          t = u_32;
                          if(match_string(t, "Cons"))
                            {
                              ATerm w_22 = t;
                              int x_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, term_g_16)), term_g_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, term_g_16)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_32), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_32), term_u_10, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, term_g_23)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_32), term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, term_g_23)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_32)));
                                  ;
                                  LocalPopChoice(x_22);
                                }
                              else
                                {
                                  t = w_22;
                                  t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                                }
                            }
                          else
                            {
                              t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                            }
                        }
                      else
                        {
                          t = u_32;
                          t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                        }
                    }
                  else
                    {
                      t = u_32;
                      t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                    }
                }
              else
                {
                  t = u_32;
                  t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                }
            }
          else
            {
              t = u_32;
              t = h_33(u_32, q_32, v_32, w_32, r_32, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_32;
              if(match_string(t, "Nil"))
                {
                  ATerm h_23 = t;
                  int i_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_16, (ATerm) ATinsert(ATempty, term_g_16)), term_g_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_i_20, (ATerm) ATinsert(ATempty, term_g_16))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_32)));
                      ;
                      LocalPopChoice(i_23);
                    }
                  else
                    {
                      t = h_23;
                      t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                    }
                }
              else
                {
                  t = h_33(u_32, q_32, v_32, w_32, r_32, t);
                }
            }
          else
            {
              t = u_32;
              t = h_33(u_32, q_32, v_32, w_32, r_32, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          u_32 = ATgetArgument(t, 0);
          t = i_33(u_32, v_32, w_32, r_32, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_32 = ATgetArgument(t, 0);
              t = j_33(u_32, v_32, w_32, r_32, t);
            }
          else
            {
              ATerm g_33 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  u_32 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = u_32;
              t = escape_0_0(t);
              t = double_quote_0_0(t);
              g_33 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, g_33))), term_g_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_32)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_32)));
            }
        }
    }
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_33 = ATgetFirst((ATermList) t);
      o_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_33;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(o_33), term_k_23), term_j_23);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_33), term_j_23), term_j_23);
        }
      else
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_33), term_l_23), term_j_23);
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm m_4 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, m_4, t);
      }
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = m_23;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
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
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_24), t_33);
  t = concat_strings_0_0(t);
  t = escape_0_0(t);
  t = double_quote_0_0(t);
  v_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_24), t_33);
  t = concat_strings_0_0(t);
  t = escape_0_0(t);
  t = double_quote_0_0(t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_24), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_16), (ATerm) ATmakeAppl(sym_StringLit_1, w_33)), term_p_24)))), u_33), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_16), (ATerm) ATmakeAppl(sym_StringLit_1, v_33)), term_p_24)))));
  return(t);
}
ATerm TraceAllFuns_0_0 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  t = (ATerm) ATempty;
  {
    ATerm n_4 (ATerm t)
    {
      t = term_g_10;
      return(t);
    }
    t = rewrite_1_0(n_4, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm r_24 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) r_24) != ATmakeSymbol("p_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = x_33;
  }
  return(t);
}
ATerm TraceFun_0_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  y_33 = t;
  z_33 = t;
  t = y_33;
  {
    ATerm o_4 (ATerm t)
    {
      t = term_p_10;
      return(t);
    }
    t = rewrite_1_0(o_4, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm w_24 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_24) != ATmakeSymbol("s_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = z_33;
  }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  k_35 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      j_35 = ATgetArgument(t, 3);
      {
        ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL;
        t = m_35;
        t = map_1_0(TranslateVarDec_0_0, t);
        b_6 = t;
        t = n_35;
        t = map_1_0(TranslateVarDec_0_0, t);
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_6, c_6);
        t = conc_0_0(t);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_35, j_35);
        {
          ATerm x_24 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_4 (ATerm t)
              {
                ATerm x_25 = t;
                int y_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TraceFun_0_0(t);
                    ;
                    LocalPopChoice(y_25);
                  }
                else
                  {
                    t = x_25;
                    t = TraceAllFuns_0_0(t);
                  }
                return(t);
              }
              t = _2_0(p_4, _id, t);
              t = TracedBody_0_0(t);
              ;
              LocalPopChoice(w_25);
            }
          else
            {
              t = x_24;
              if(match_cons(t, sym__2))
                {
                  ATerm a_26 = ATgetArgument(t, 0);
                  ATerm b_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_q_24), j_35));
            }
          g_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_6, (ATerm) ATinsert(ATempty, term_d_26));
          t = conc_0_0(t);
          h_6 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_k_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_35), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, h_6))), g_6);
        }
      }
    }
  else
    {
      ATerm w_6 = NULL,x_6 = NULL,a_7 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          l_35 = ATgetArgument(t, 0);
          m_35 = ATgetArgument(t, 1);
          n_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_35;
      t = map_1_0(TranslateVarDec_0_0, t);
      w_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_35, n_35);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 (ATerm t)
            {
              ATerm k_26 = t;
              int p_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TraceFun_0_0(t);
                  ;
                  LocalPopChoice(p_26);
                }
              else
                {
                  t = k_26;
                  t = TraceAllFuns_0_0(t);
                }
              return(t);
            }
            t = _2_0(q_4, _id, t);
            t = TracedBody_0_0(t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            if(match_cons(t, sym__2))
              {
                ATerm r_26 = ATgetArgument(t, 0);
                ATerm s_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_q_24), n_35));
          }
        x_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_6, (ATerm) ATinsert(ATempty, term_d_26));
        t = conc_0_0(t);
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_k_11, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_35), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, a_7))), x_6);
      }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  if(match_cons(t, sym__2))
    {
      r_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_35), r_35), (ATerm) ATinsert(ATempty, r_35));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, s_35);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm u_121 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  t = SSL_explode_string(t_35);
  t = u_121(t);
  u_35 = t;
  t = SSL_implode_string(u_35);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm rewrite_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,l_8 = NULL;
  y_35 = t;
  t = term_u_26;
  t = c_133(t);
  z_35 = t;
  t = SSL_table_get(z_35, y_35);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_8 = ATgetFirst((ATermList) t);
      {
        ATerm v_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_8;
  return(t);
}
ATerm ConstructorName_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      ATerm x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_36;
  {
    ATerm r_4 (ATerm t)
    {
      t = term_y_26;
      return(t);
    }
    t = rewrite_1_0(r_4, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm b_27 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) b_27) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        b_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_36;
  }
  return(t);
}
ATerm InitConstructor_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      c_36 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_36;
  t = Arity_0_0(t);
  e_36 = t;
  t = SSL_int_to_string(e_36);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, e_36);
  t = ConstructorName_0_0(t);
  g_36 = t;
  t = c_36;
  t = double_quote_0_0(t);
  h_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_36))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_36), term_u_10, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_27), (ATerm) ATmakeAppl(sym_IntConst_1, f_36)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, h_36)))))));
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  t = map_1_0(InitConstructor_0_0, t);
  t = concat_0_0(t);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, (ATerm) ATinsert(ATempty, term_j_27));
  t = conc_0_0(t);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_y_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_y_10)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_36));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  ATerm s_4 (ATerm t)
  {
    ATerm m_36 = NULL;
    m_36 = t;
    t = SSL_explode_string(m_36);
    return(t);
  }
  t = map_1_0(s_4, t);
  t = concat_0_0(t);
  l_36 = t;
  t = SSL_implode_string(l_36);
  return(t);
}
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_36 = ATgetFirst((ATermList) t);
      r_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_36;
  if(match_int(t, 95))
    {
      ATerm t_36 = NULL;
      t = r_36;
      t = n_0(t);
      t_36 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_36), term_p_27), term_p_27);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm v_36 = NULL;
          t = r_36;
          t = n_0(t);
          v_36 = t;
          t = (ATerm) ATinsert(CheckATermList(v_36), term_p_27);
        }
      else
        {
          ATerm x_36 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = r_36;
          t = n_0(t);
          x_36 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_36), term_p_27), term_q_27), term_p_27);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm q_121 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  y_36 = t;
  t = SSL_explode_string(y_36);
  {
    ATerm a_37 (ATerm t)
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_121(a_37, t);
          ;
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
          {
            ATerm u_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, a_37, t);
                ;
                LocalPopChoice(w_27);
              }
            else
              {
                t = u_27;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = a_37(t);
    z_36 = t;
    t = SSL_implode_string(z_36);
  }
  return(t);
}
ATerm cify_0_0 (ATerm t)
{
  t = escape_1_0(Cify_1_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_118(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm d_37 = NULL,e_37 = NULL,h_37 = NULL,i_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_37 = ATgetFirst((ATermList) t);
            e_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_37;
        t = m_118(t);
        h_37 = t;
        t = e_37;
        t = foldr_3_0(k_118, l_118, m_118, t);
        i_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_37, i_37);
        t = l_118(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    t = term_n_15;
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm j_37 = NULL,k_37 = NULL;
    if(match_cons(t, sym__2))
      {
        j_37 = ATgetArgument(t, 0);
        k_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_27 = t;
      int a_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(j_37, k_37);
          ;
          LocalPopChoice(a_28);
        }
      else
        {
          t = z_27;
          t = SSL_addr(j_37, k_37);
        }
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = foldr_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm Arity_0_0 (ATerm t)
{
  ATerm o_37 = NULL;
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          o_37 = ATgetArgument(t, 0);
          {
            ATerm d_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_28);
      t = o_37;
      t = length_0_0(t);
    }
  else
    {
      t = b_28;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_n_15;
    }
  return(t);
}
ATerm DeclareConstructor_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_37;
  t = Arity_0_0(t);
  s_37 = t;
  t = q_37;
  t = cify_0_0(t);
  t_37 = t;
  t = SSL_int_to_string(s_37);
  u_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_37), term_g_28), t_37), term_f_28);
  t = concat_strings_0_0(t);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_37, s_37), (ATerm) ATmakeAppl(sym_Defined_2, term_h_28, v_37));
  {
    ATerm w_4 (ATerm t)
    {
      t = term_y_26;
      return(t);
    }
    t = assert_1_0(w_4, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_37), term_l_11)));
  }
  return(t);
}
ATerm TranslateSig_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
        {
          ATerm m_28 = ATgetFirst((ATermList) l_28);
          if(match_cons(m_28, sym_Constructors_1))
            {
              w_37 = ATgetArgument(m_28, 0);
            }
          else
            _fail(t);
          {
            ATerm n_28 = (ATerm) ATgetNext((ATermList) l_28);
            if(((ATgetType(n_28) != AT_LIST) || !(ATisEmpty(n_28))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = w_37;
  t = map_1_0(DeclareConstructor_0_0, t);
  x_37 = t;
  t = w_37;
  t = InitConstructors_0_0(t);
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_37, (ATerm) ATinsert(ATempty, y_37));
  t = conc_0_0(t);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, z_37);
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm s_38 = NULL;
  ATerm o_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          s_38 = ATgetArgument(t, 0);
          {
            ATerm r_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_28);
      {
        ATerm u_38 = NULL;
        t = s_38;
        t = map_1_0(TranslateType_0_0, t);
        u_38 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_k_11, (ATerm) ATmakeAppl(sym_ParamList_1, u_38));
      }
    }
  else
    {
      t = o_28;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm s_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_k_11;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm f_39 = NULL,h_39 = NULL,k_39 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_39;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            k_39 = ATgetArgument(t, 0);
            {
              ATerm v_28 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_28);
        {
          ATerm b_40 = NULL;
          t = k_39;
          t = map_1_0(TranslateType_0_0, t);
          b_40 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_k_11, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_39), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, b_40))));
        }
      }
    else
      {
        t = t_28;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm w_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_k_11, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_39), term_l_11));
      }
  }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_42 = ATgetArgument(t, 0);
          n_42 = ATgetArgument(t, 1);
          {
            ATerm z_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_28);
      {
        ATerm j_44 = NULL;
        t = n_42;
        t = map_1_0(TranslateVarDec_0_0, t);
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_44, (ATerm) ATinsert(ATempty, term_k_11));
        t = conc_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_42), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, j_44)))));
      }
    }
  else
    {
      t = x_28;
      {
        ATerm c_45 = NULL,t_45 = NULL,u_45 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            m_42 = ATgetArgument(t, 0);
            n_42 = ATgetArgument(t, 1);
            o_42 = ATgetArgument(t, 2);
            {
              ATerm s_29 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        t = n_42;
        t = map_1_0(TranslateVarDec_0_0, t);
        c_45 = t;
        t = o_42;
        t = map_1_0(TranslateVarDec_0_0, t);
        t_45 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_11)), t_45), c_45);
        t = concat_0_0(t);
        u_45 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_42), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, u_45)))));
      }
    }
  return(t);
}
ATerm TranslateSpec_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,x_47 = NULL,z_47 = NULL,a_48 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
        {
          ATerm w_29 = ATgetFirst((ATermList) t_29);
          if(match_cons(w_29, sym_Signature_1))
            {
              f_46 = ATgetArgument(w_29, 0);
            }
          else
            _fail(t);
          {
            ATerm c_30 = (ATerm) ATgetNext((ATermList) t_29);
            if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
              {
                ATerm d_30 = ATgetFirst((ATermList) c_30);
                if(match_cons(d_30, sym_Strategies_1))
                  {
                    g_46 = ATgetArgument(d_30, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm e_30 = (ATerm) ATgetNext((ATermList) c_30);
                  if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
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
  t = g_46;
  t = map_1_0(SDefToDeclaration_0_0, t);
  x_47 = t;
  t = term_r_10;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        {
          ATerm x_4 (ATerm t)
          {
            ATerm b_48 = NULL,c_48 = NULL;
            b_48 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_h_30, b_48);
            t = conc_strings_0_0(t);
            c_48 = t;
            t = (ATerm) ATmakeAppl(sym_Include_1, c_48);
            return(t);
          }
          t = map_1_0(x_4, t);
        }
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATempty;
      }
    z_47 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(g_46), term_i_31)), x_47), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_y_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_30, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ParamDecl_2, term_r_30, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATinsert(ATempty, term_s_30), term_u_30, term_l_11))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_30), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, term_x_30))), term_p_24)))))))), (ATerm) ATmakeAppl(sym_Signature_1, f_46)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_30, (ATerm) ATinsert(ATempty, term_n_30)))), z_47);
    t = concat_0_0(t);
    a_48 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, a_48);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  t = v_106(t);
  {
    ATerm y_4 (ATerm t)
    {
      t = downup2_2_0(v_106, w_106, t);
      return(t);
    }
    t = SRTS_all(y_4, t);
    t = w_106(t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      e_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_133(t);
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_48, d_48, e_48);
  t = table_push_0_0(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_48, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_48 = ATgetFirst((ATermList) t);
        h_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_48, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_48), (ATerm) ATinsert(CheckATermList(g_48), d_48)));
    t = (ATerm) ATmakeAppl(sym__2, d_48, e_48);
  }
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm i_48 = NULL;
  i_48 = t;
  t = term_h_32;
  {
    ATerm z_4 (ATerm t)
    {
      t = term_x_12;
      return(t);
    }
    t = assert_1_0(z_4, t);
    t = i_48;
  }
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm c_5 (ATerm t)
      {
        ATerm i_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateSpec_0_0(t);
            ;
            LocalPopChoice(x_32);
          }
        else
          {
            t = i_32;
            {
              ATerm y_32 = t;
              int z_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TranslateSig_0_0(t);
                  ;
                  LocalPopChoice(z_32);
                }
              else
                {
                  t = y_32;
                  {
                    ATerm a_33 = t;
                    int b_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TranslateDef_0_0(t);
                        ;
                        LocalPopChoice(b_33);
                      }
                    else
                      {
                        t = a_33;
                        {
                          ATerm c_33 = t;
                          int d_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TranslateStratMatchGuard_0_0(t);
                              ;
                              LocalPopChoice(d_33);
                            }
                          else
                            {
                              t = c_33;
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
      t = repeat_1_0(c_5, t);
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      t = repeat_1_0(Csimplify_0_0, t);
      return(t);
    }
    t = downup2_2_0(a_5, b_5, t);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm f_5 (ATerm t)
        {
          if(!(match_cons(t, sym_InitCachedTerms_0)))
            _fail(t);
          t = init_cached_terms_0_0(t);
          return(t);
        }
        t = oncetd_1_0(f_5, t);
        return(t);
      }
      t = try_1_0(d_5, t);
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  j_48 = t;
  t = term_u_26;
  t = whoami_0_0(t);
  k_48 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_48), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = j_48;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm n_48 = NULL,o_48 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_48 = ATgetFirst((ATermList) t);
            o_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_48;
        {
          ATerm g_5 (ATerm t)
          {
            t = o_48;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_5, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  s_48 = t;
  t = SSL_explode_term(s_48);
  if(match_cons(t, sym__2))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_48;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm u_48 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_48, t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_112(t);
      }
    return(t);
  }
  t = u_48(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      w_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_48;
  {
    ATerm h_5 (ATerm t)
    {
      t = v_48;
      return(t);
    }
    t = at_end_1_0(h_5, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_48 = NULL;
  ATerm j_5 (ATerm t)
  {
    ATerm y_48 = NULL;
    y_48 = t;
    t = SSL_explode_string(y_48);
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm z_48 = NULL;
    z_48 = t;
    t = SSL_explode_string(z_48);
    return(t);
  }
  t = _2_0(j_5, k_5, t);
  t = conc_0_0(t);
  x_48 = t;
  t = SSL_implode_string(x_48);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_49 = NULL;
      f_49 = t;
      t = SSL_is_string(f_49);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(l_5, t);
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm j_49 = NULL,p_49 = NULL,q_49 = NULL;
              j_49 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_49 = ATgetArgument(t, 0);
                  t = p_49;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_49 = ATgetArgument(t, 0);
                      t = p_49;
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_34);
                          }
                        else
                          {
                            t = c_34;
                            {
                              ATerm m_5 (ATerm t)
                              {
                                t = term_e_34;
                                return(t);
                              }
                              t = debug_1_0(m_5, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_49 = NULL,v_49 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_49 = ATgetArgument(t, 0);
                          q_49 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_49;
                      t = eval_config_0_0(t);
                      u_49 = t;
                      t = q_49;
                      t = eval_config_0_0(t);
                      v_49 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_49, v_49);
                      t = conc_strings_0_0(t);
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
  ATerm y_49 = NULL;
  y_49 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_49);
  {
    ATerm n_5 (ATerm t)
    {
      ATerm z_49 = NULL;
      t = eval_config_0_0(t);
      z_49 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_49, z_49);
      t = z_49;
      return(t);
    }
    t = try_1_0(n_5, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm a_50 = NULL,b_50 = NULL;
    a_50 = t;
    t = term_f_34;
    t = get_config_0_0(t);
    b_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_50, term_g_34);
    t = geq_0_0(t);
    t = a_50;
    t = o_125(t);
    return(t);
  }
  t = try_1_0(p_5, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm c_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_34 = ATgetArgument(t, 0);
        if(match_cons(h_34, sym_Stream_1))
          {
            c_50 = ATgetArgument(h_34, 0);
          }
        else
          _fail(t);
        f_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(c_50, f_50);
    g_50 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), g_50);
    h_50 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_50);
    return(t);
  }
  t = WriteToFile_1_0(r_5, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_124 (ATerm), ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_50, term_i_34);
  t = open_stream_0_0(t);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_50, j_50);
  t = k_124(t);
  t = fclose_0_0(t);
  t = j_50;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_34 = ATgetArgument(t, 0);
        if(match_cons(j_34, sym_Stream_1))
          {
            l_50 = ATgetArgument(j_34, 0);
          }
        else
          _fail(t);
        m_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(l_50, m_50);
    n_50 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
    return(t);
  }
  t = WriteToFile_1_0(s_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  o_50 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                p_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(u_5, t);
          ;
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
          t = term_m_34;
          p_50 = t;
        }
      return(t);
    }
    t = _2_0(t_5, _id, t);
    t = o_50;
    {
      ATerm w_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          t = not_null(p_50);
          return(t);
        }
        t = split_2_0(x_5, _id, t);
        return(t);
      }
      t = _2_0(_id, w_5, t);
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              ATerm z_5 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(z_5, t);
              return(t);
            }
            t = _2_0(y_5, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm k_126 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  q_50 = t;
  t = dtime_0_0(t);
  t = q_50;
  t = k_126(t);
  r_50 = t;
  t = dtime_0_0(t);
  s_50 = t;
  t = r_50;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_50), (ATerm) ATmakeAppl(sym_Runtime_1, s_50)), u_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_51 (ATerm c_51, ATerm t)
  {
    t = SSL_fclose(c_51);
    return(t);
  }
  ATerm f_51 = NULL,g_51 = NULL;
  g_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_51 = ATgetArgument(t, 0);
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_51);
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            t = i_51(g_51, t);
          }
      }
    }
  else
    {
      t = i_51(g_51, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  j_51 = t;
  t = w_123(t);
  k_51 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_51), k_51));
  t = j_51;
  return(t);
}
ATerm _2_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  q_51 = t;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_51);
  l_51 = t;
  t = m_51;
  t = r_82(t);
  o_51 = t;
  t = n_51;
  t = s_82(t);
  p_51 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_51, p_51), l_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_stdin_stream();
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  t = SSL_stdout_stream();
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_51 = NULL;
  t = SSL_stderr_stream();
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_51);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_51;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_51;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_51;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      ATerm s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL,h_9 = NULL;
        f_9 = t;
        t = SSL_explode_term(f_9);
        if(match_cons(t, sym__2))
          {
            ATerm v_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_34 = ATgetArgument(t, 1);
              if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
                {
                  h_9 = ATgetFirst((ATermList) w_34);
                  {
                    ATerm x_34 = (ATerm) ATgetNext((ATermList) w_34);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_9;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
              ATerm d_6 (ATerm t)
              {
                ATerm e_52 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_52;
                return(t);
              }
              t = _2_0(d_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_52 = ATgetArgument(t, 0);
                  c_52 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_52, c_52);
              d_52 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_52);
              ;
              LocalPopChoice(z_34);
            }
          else
            {
              t = y_34;
              {
                ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
                ATerm f_6 (ATerm t)
                {
                  ATerm i_52 = NULL;
                  i_52 = t;
                  t = SSL_is_string(i_52);
                  return(t);
                }
                t = _2_0(f_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_52 = ATgetArgument(t, 0);
                    g_52 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_52, g_52);
                h_52 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_52);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_52 = NULL;
      m_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_52, term_c_35);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
        ATerm i_6 (ATerm t)
        {
          t = term_d_35;
          return(t);
        }
        t = debug_1_0(i_6, t);
        _fail(t);
      }
    }
  j_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_52);
  k_52 = t;
  t = j_52;
  t = fclose_0_0(t);
  t = k_52;
  return(t);
}
ATerm split_2_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
  o_52 = t;
  t = x_119(t);
  p_52 = t;
  t = o_52;
  t = y_119(t);
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  r_52 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              s_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(j_6, t);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = term_g_35;
        s_52 = t;
      }
    t = r_52;
    {
      ATerm k_6 (ATerm t)
      {
        t = not_null(s_52);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, k_6, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm u_52 = NULL;
    u_52 = t;
    if(match_string(t, "-k"))
      {
        t = u_52;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = u_52;
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    ATerm v_52 = NULL,w_52 = NULL;
    v_52 = t;
    t = SSL_string_to_int(v_52);
    w_52 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_52);
    t = v_52;
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_h_35;
    return(t);
  }
  t = ArgOption_3_0(l_6, m_6, n_6, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 (ATerm t)
      {
        ATerm y_52 = NULL;
        y_52 = t;
        if(match_string(t, "-S"))
          {
            t = y_52;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = y_52;
          }
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_35;
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        t = term_v_35;
        return(t);
      }
      t = Option_3_0(o_6, p_6, q_6, t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = i_35;
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm z_52 = NULL,a_53 = NULL;
              z_52 = t;
              t = SSL_string_to_int(z_52);
              a_53 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_53);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, z_52);
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_i_36;
              return(t);
            }
            t = ArgOption_3_0(s_6, t_6, u_6, t);
            ;
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm y_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm z_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_36;
                return(t);
              }
              ATerm c_7 (ATerm t)
              {
                t = term_o_36;
                return(t);
              }
              t = Option_3_0(y_6, z_6, c_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm p_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(s_36);
    }
  else
    {
      t = p_36;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm c_53 = NULL;
    c_53 = t;
    if(match_string(t, "-o"))
      {
        t = c_53;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = c_53;
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm d_53 = NULL;
    d_53 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_53);
    t = (ATerm) ATmakeAppl(sym_Output_1, d_53);
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = term_u_36;
    return(t);
  }
  t = ArgOption_3_0(d_7, e_7, h_7, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_36 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = w_36;
      {
        ATerm i_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_37;
          return(t);
        }
        ATerm p_7 (ATerm t)
        {
          t = term_f_37;
          return(t);
        }
        t = Option_3_0(i_7, k_7, p_7, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  g_53 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = g_53;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm o_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_53 = ATgetFirst((ATermList) t);
          i_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_53 = ATgetFirst((ATermList) t);
          k_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_53;
      t = i_0(t);
      t = j_53;
      t = k_0(t);
      o_53 = t;
      t = (ATerm) ATinsert(CheckATermList(k_53), o_53);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm q_53 = NULL;
    q_53 = t;
    if(match_string(t, "-i"))
      {
        t = q_53;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = q_53;
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    ATerm r_53 = NULL;
    r_53 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_53);
    t = (ATerm) ATmakeAppl(sym_Input_1, r_53);
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_g_37;
    return(t);
  }
  t = ArgOption_3_0(q_7, r_7, s_7, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
        ATerm n_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = n_37;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_26;
  t = whoami_0_0(t);
  s_53 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_53));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_118(t);
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      {
        ATerm v_53 = NULL,w_53 = NULL,z_53 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_53 = ATgetFirst((ATermList) t);
            w_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_53;
        t = foldr_2_0(i_118, j_118, t);
        z_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_53, z_53);
        t = j_118(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  a_54 = t;
  t = SSL_explode_term(a_54);
  if(match_cons(t, sym__2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_54;
  t = foldr_2_0(b_122, c_122, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_54 = NULL;
  t = times_0_0(t);
  {
    ATerm t_7 (ATerm t)
    {
      t = term_n_15;
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      ATerm d_54 = NULL,e_54 = NULL;
      if(match_cons(t, sym__2))
        {
          d_54 = ATgetArgument(t, 0);
          e_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_54, e_54);
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = SSL_addr(d_54, e_54);
          }
      }
      return(t);
    }
    t = crush_2_0(t_7, u_7, t);
    c_54 = t;
    t = SSL_TicksToSeconds(c_54);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  if(match_cons(t, sym__2))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_54;
        if((o_54 != t))
          {
            _fail(t);
          }
        t = n_54;
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = n_54;
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_54, p_54);
              ;
              LocalPopChoice(j_38);
            }
          else
            {
              t = i_38;
              t = SSL_gtr(o_54, p_54);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm s_54 = NULL,t_54 = NULL;
    s_54 = t;
    t = term_f_34;
    t = get_config_0_0(t);
    t_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_54, term_s_15);
    t = geq_0_0(t);
    t = s_54;
    t = n_125(t);
    return(t);
  }
  t = try_1_0(z_7, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm v_54 = NULL,w_54 = NULL;
    t = run_time_0_0(t);
    v_54 = t;
    t = term_u_26;
    t = whoami_0_0(t);
    w_54 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), v_54), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), w_54));
    t = (ATerm) ATmakeAppl(sym__2, term_k_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_38), v_54), term_l_38), w_54));
    return(t);
  }
  t = if_verbose1_1_0(a_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm i_127 (ATerm), ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      {
        ATerm b_8 (ATerm t)
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              {
                ATerm t_38 = t;
                int v_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_38);
                  }
                else
                  {
                    t = t_38;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(b_8, t);
      }
    }
  t = i_127(t);
  return(t);
}
ATerm map_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm y_54 (ATerm t)
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = Cons_2_0(h_112, y_54, t);
      }
    return(t);
  }
  t = y_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_55 = ATgetFirst((ATermList) t);
      b_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_55 = NULL,g_55 = NULL;
        t = b_55;
        t = g_0(t);
        f_55 = t;
        t = a_55;
        t = e_0(t);
        g_55 = t;
        t = b_55;
        {
          ATerm c_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_55), g_55);
            return(t);
          }
          t = reverse_acc_2_0(e_0, c_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_26;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, d_8, t);
  return(t);
}
ATerm Program_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  k_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_55);
  h_55 = t;
  t = i_55;
  t = g_93(t);
  j_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_55), h_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm i_8 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_8, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_a_39;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm o_55 = NULL;
      o_55 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_55), term_b_39);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_8, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_55);
  p_55 = t;
  t = q_55;
  t = h_93(t);
  v_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, v_55), p_55);
  return(t);
}
ATerm fetch_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm a_56 (ATerm t)
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_112, _id, t);
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        t = Cons_2_0(_id, a_56, t);
      }
    return(t);
  }
  t = a_56(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  t = fetch_1_0(w_128, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  c_56 = t;
  {
    ATerm e_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_39 = ATgetFirst((ATermList) t);
                ATerm j_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_56;
          }
        ;
        LocalPopChoice(g_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATinsert(ATempty, c_56);
      }
    d_56 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_56);
    t = c_56;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_104(t);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = l_39;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_39;
        return(t);
      }
      ATerm o_8 (ATerm t)
      {
        t = term_r_39;
        return(t);
      }
      t = Option_3_0(k_8, m_8, o_8, t);
      ;
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
        ATerm p_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_39;
          return(t);
        }
        ATerm r_8 (ATerm t)
        {
          t = term_t_39;
          return(t);
        }
        t = Option_3_0(p_8, q_8, r_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
  if(match_cons(t, sym__3))
    {
      j_56 = ATgetArgument(t, 0);
      k_56 = ATgetArgument(t, 1);
      l_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_56, k_56);
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_39 = ATgetArgument(t, 0);
            ATerm x_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_56, k_56);
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
    m_56 = t;
    t = SSL_table_put(j_56, k_56, (ATerm) ATinsert(CheckATermList(m_56), l_56));
    t = (ATerm) ATmakeAppl(sym__3, j_56, k_56, l_56);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm r_56 = NULL;
  t = term_u_26;
  t = b_130(t);
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_39, term_z_39, r_56);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_56;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_56 = ATgetFirst((ATermList) t);
          v_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_56;
      t = a_0(t);
      t = term_u_26;
      t = c_0(t);
      y_56 = t;
      t = (ATerm) ATinsert(CheckATermList(v_56), y_56);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm a_57 = NULL;
    a_57 = t;
    if(match_string(t, "--help"))
      {
        t = a_57;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_57;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_57;
          }
      }
    return(t);
  }
  ATerm t_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_a_40;
    return(t);
  }
  ATerm v_8 (ATerm t)
  {
    t = term_c_40;
    return(t);
  }
  t = Option_3_0(s_8, t_8, v_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  g_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_57 = ATgetFirst((ATermList) t);
      d_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  b_57 = t;
  t = c_57;
  t = a_84(t);
  e_57 = t;
  t = d_57;
  t = b_84(t);
  f_57 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_57), e_57), b_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm p_57 = NULL;
  p_57 = t;
  {
    ATerm w_8 (ATerm t)
    {
      t = term_d_40;
      t = z_129(t);
      return(t);
    }
    t = try_1_0(w_8, t);
    t = p_57;
    {
      ATerm x_8 (ATerm t)
      {
        ATerm q_57 = NULL;
        q_57 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_57);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_57);
        return(t);
      }
      ATerm y_8 (ATerm t)
      {
        ATerm e_40 = t;
        int f_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_40 = t;
            int h_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_40);
              }
            else
              {
                t = g_40;
                t = z_129(t);
                t = Cons_2_0(_id, y_8, t);
              }
            ;
            LocalPopChoice(f_40);
          }
        else
          {
            t = e_40;
            {
              ATerm s_57 = NULL,t_57 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_57 = ATgetFirst((ATermList) t);
                  t_57 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_57), (ATerm) ATmakeAppl(sym_Undefined_1, s_57));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_8, y_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL;
  z_57 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_57;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_129(t);
          ;
          LocalPopChoice(j_40);
        }
      else
        {
          t = i_40;
          {
            ATerm k_40 = t;
            int l_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_40);
              }
            else
              {
                t = k_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
    {
      ATerm c_9 (ATerm t)
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_58 = NULL;
            g_58 = t;
            {
              ATerm o_40 = t;
              int p_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_58;
                  {
                    ATerm q_40 = t;
                    int r_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_38;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_40);
                      }
                    else
                      {
                        t = q_40;
                        {
                          ATerm d_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(d_9, t);
                        }
                      }
                    t = g_58;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(p_40);
                }
              else
                {
                  t = o_40;
                  t = term_p_39;
                  t = get_config_0_0(t);
                  t = g_58;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            {
              ATerm e_9 (ATerm t)
              {
                ATerm j_9 (ATerm t)
                {
                  a_58 = t;
                  return(t);
                }
                t = Undefined_1_0(j_9, t);
                return(t);
              }
              t = option_defined_1_0(e_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), term_s_40));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(c_9, t);
      b_58 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm t)
{
  ATerm t_12 = NULL;
  t = parse_options_1_0(k_127, t);
  t_12 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), t_12);
  t = t_12;
  t = m_127(t);
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_127, t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        {
          ATerm v_40 = t;
          int w_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_127(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_40);
            }
          else
            {
              t = v_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm t)
{
  ATerm k_9 (ATerm t)
  {
    ATerm x_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_127(t);
        ;
        LocalPopChoice(y_40);
      }
    else
      {
        t = x_40;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(z_126, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(k_9, b_127, c_127, n_9, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm t_126 (ATerm), ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    ATerm r_9 (ATerm t)
    {
      ATerm j_58 = NULL,k_58 = NULL;
      j_58 = t;
      t = term_a_38;
      t = get_config_0_0(t);
      k_58 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_58));
      t = j_58;
      return(t);
    }
    t = if_verbose2_1_0(r_9, t);
    return(t);
  }
  t = iowrap_4_0(t_126, u_126, v_126, p_9, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t)
{
  t = iowrap_3_0(r_126, s_126, default_usage_0_0, t);
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
