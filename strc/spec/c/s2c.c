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
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
ATerm term_h_40;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_f_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_s_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_r_32;
ATerm term_j_32;
ATerm term_z_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_o_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
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
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_w_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
void init_constant_terms (void)
{
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Id_1, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_12, (ATerm) ATempty);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Id_1, term_b_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_13, (ATerm) ATempty);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATempty);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_13, term_v_13);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Id_1, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Id_1, term_i_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Id_1, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_IntConst_1, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Id_1, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Id_1, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_c_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Id_1, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Id_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, term_l_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_q_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Id_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Id_1, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Id_1, term_y_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_1, term_b_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Id_1, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_19, (ATerm) ATempty);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_19, term_v_13);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Id_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_1, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_19, (ATerm) ATempty);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_19, term_v_13);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_x_19);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_z_18);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Id_1, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_21, (ATerm) ATempty);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_o_21, term_x_17);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Id_1, term_q_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_s_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, term_z_18);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Id_1, term_w_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_21, (ATerm) ATempty);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_y_21, term_x_17);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_22, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Id_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Id_1, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Id_1, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_22, (ATerm) ATempty);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_22, term_v_13);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_1, term_v_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Id_1, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Id_1, term_a_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Id_1, term_k_23);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_23, (ATerm) ATempty);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_23, term_v_13);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Id_1, term_e_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_22, term_z_18);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Id_1, term_j_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Return_1, term_z_18);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_q_11, (ATerm) ATempty);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_18, term_v_13);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_13, term_t_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Id_1, term_h_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Id_1, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_13, (ATerm) ATempty);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_l_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Id_1, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_27, (ATerm) ATempty);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_TypeId_1, term_t_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_29, (ATerm) ATempty);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Some_1, term_d_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_13, term_f_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_k_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_SDefT_4, term_i_30, (ATerm)ATempty, (ATerm)ATempty, term_l_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Op_2, term_q_30, (ATerm) ATempty);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Defined_2, term_s_30, term_m_18);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_t_30);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_p_16);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_16);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_u_33, term_x_9);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_g_34);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_x_9);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_h_36, term_x_9);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_x_9);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_x_9);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm q_9 (ATerm p_71, ATerm q_71, ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s2c_options_0_0 (ATerm);
ATerm r_9 (ATerm t_27, ATerm v_27, ATerm u_27, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm InitTermIds_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm init_cached_terms_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm listbu1_1_0 (ATerm v_2 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm i_3 (ATerm);
ATerm Csimplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm proper_list_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm u_9 (ATerm f_27, ATerm i_27, ATerm);
ATerm Cache_0_0 (ATerm);
ATerm construct_term_caching_0_0 (ATerm);
ATerm v_9 (ATerm x_31, ATerm w_31, ATerm);
ATerm w_9 (ATerm j_170, ATerm t_31, ATerm v_31, ATerm);
ATerm new_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm ConstructTerm_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm ConstructList_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm c_54 (ATerm o_33, ATerm o_34, ATerm a_35, ATerm q_36, ATerm);
ATerm d_54 (ATerm l_38, ATerm o_38, ATerm r_38, ATerm);
ATerm e_54 (ATerm d_39, ATerm e_39, ATerm f_39, ATerm);
ATerm f_54 (ATerm o_39, ATerm p_39, ATerm q_39, ATerm r_39, ATerm);
ATerm g_54 (ATerm f_40, ATerm g_40, ATerm m_40, ATerm n_40, ATerm);
ATerm h_54 (ATerm t_40, ATerm w_40, ATerm x_40, ATerm e_41, ATerm);
ATerm i_54 (ATerm s_41, ATerm v_41, ATerm x_41, ATerm b_42, ATerm);
ATerm j_54 (ATerm j_42, ATerm l_42, ATerm p_42, ATerm q_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm a_43, ATerm);
ATerm k_54 (ATerm z_43, ATerm a_44, ATerm b_44, ATerm c_44, ATerm d_44, ATerm h_44, ATerm);
ATerm l_54 (ATerm a_45, ATerm c_45, ATerm d_45, ATerm e_45, ATerm f_45, ATerm m_45, ATerm);
ATerm m_54 (ATerm u_45, ATerm w_45, ATerm x_45, ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm TranslateStrat_0_0 (ATerm);
ATerm y_9 (ATerm x_0 (ATerm), ATerm b_1 (ATerm), ATerm z_0, ATerm d_1, ATerm v_0, ATerm);
ATerm thread_map_1_0 (ATerm e_112 (ATerm), ATerm);
ATerm t_58 (ATerm b_56, ATerm i_56, ATerm j_56, ATerm k_56, ATerm l_56, ATerm);
ATerm u_58 (ATerm f_57, ATerm g_57, ATerm h_57, ATerm i_57, ATerm);
ATerm v_58 (ATerm n_57, ATerm o_57, ATerm p_57, ATerm q_57, ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm TranslateStratMatchGuard_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm d_10 (ATerm r_34, ATerm q_34, ATerm);
ATerm TranslateDef_0_0 (ATerm);
ATerm g_10 (ATerm m_65, ATerm n_65, ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm h_10 (ATerm a_33, ATerm y_32, ATerm);
ATerm j_5 (ATerm);
ATerm InitConstructors_0_0 (ATerm);
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm a_115 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm i_10 (ATerm n_32, ATerm m_32, ATerm);
ATerm p_5 (ATerm);
ATerm j_10 (ATerm k_32, ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm i_68 (ATerm a_68, ATerm);
ATerm conc_0_0 (ATerm);
ATerm TranslateType_0_0 (ATerm);
ATerm TranslateVarDec_0_0 (ATerm);
ATerm SDefToDeclaration_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm k_10 (ATerm e_32, ATerm g_32, ATerm);
ATerm downup2_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm);
ATerm l_10 (ATerm o_126 (ATerm), ATerm z_70, ATerm x_70, ATerm);
ATerm z_5 (ATerm);
ATerm init_term_caching_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm compile_0_0 (ATerm);
ATerm o_10 (ATerm c_56, ATerm d_56, ATerm);
ATerm p_10 (ATerm q_59, ATerm r_59, ATerm);
ATerm r_10 (ATerm y_117 (ATerm), ATerm a_510, ATerm u_59, ATerm);
ATerm q_10 (ATerm m_59, ATerm n_59, ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_119 (ATerm), ATerm);
ATerm i_75 (ATerm c_75, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_10 (ATerm s_59, ATerm);
ATerm t_10 (ATerm e_56, ATerm f_56, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_76 (ATerm s_75, ATerm);
ATerm w_76 (ATerm w_75, ATerm x_75, ATerm y_75, ATerm);
ATerm x_76 (ATerm g_76, ATerm h_76, ATerm i_76, ATerm);
ATerm u_10 (ATerm);
ATerm o_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm n_10 (ATerm f_51, ATerm g_51, ATerm);
ATerm debug_1_0 (ATerm w_117 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_119 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm l_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_11 (ATerm i_71, ATerm j_71, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_10 (ATerm b_65, ATerm c_65, ATerm a_65, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_10 (ATerm q_53, ATerm r_53, ATerm);
ATerm foldr_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_119 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm need_help_1_0 (ATerm w_120 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm x_10 (ATerm s_66, ATerm t_66, ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm j_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_123 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm parse_options_1_0 (ATerm m_123 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm s_9 (ATerm);
ATerm iowrap_3_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,s_0 = NULL,w_0 = NULL,y_0 = NULL,c_1 = NULL;
  a_0 = t;
  t = term_x_9;
  t = whoami_0_0(t);
  s_0 = t;
  t = term_z_9;
  y_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_10), s_0), term_b_10);
  c_1 = t;
  t = SSL_printnl(y_0, c_1);
  t = term_w_10;
  w_0 = t;
  t = SSL_exit(w_0);
  t = a_0;
  return(t);
}
ATerm q_9 (ATerm p_71, ATerm q_71, ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
  t = p_71;
  {
    ATerm z_10 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_1, q_71);
    t = conc_0_0(t);
    g_1 = t;
    t = term_f_11;
    i_1 = t;
    t = SSL_table_put(i_1, p_71, g_1);
    t = (ATerm) ATmakeAppl(sym__3, term_f_11, p_71, g_1);
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = term_g_11;
  t = debug_1_0(k_1, t);
  m_1 = t;
  t = (ATerm) ATempty;
  n_1 = t;
  t = term_j_11;
  o_1 = t;
  t = term_k_11;
  t = l_10(l_1, n_1, o_1, t);
  t = m_1;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  p_1 = t;
  t = term_t_11;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, term_t_11);
  t = l_10(z_1, p_1, q_1, t);
  t = (ATerm) ATmakeAppl(sym_Trace_1, p_1);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL;
  r_1 = t;
  t = term_x_11;
  t_1 = t;
  t = (ATerm) ATinsert(ATempty, r_1);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, r_1));
  t = q_9(t_1, u_1, t);
  t = (ATerm) ATmakeAppl(sym_Include_1, r_1);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm v_1 = NULL;
  v_1 = t;
  if(match_string(t, "--library"))
    {
      t = v_1;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = v_1;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_z_11;
  _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_1, e_1, f_1, t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = c_12;
      {
        ATerm j_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = j_12;
            {
              ATerm o_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(a_2, d_2, g_2, t);
                  ;
                  LocalPopChoice(r_12);
                }
              else
                {
                  t = o_12;
                  t = Option_3_0(m_2, o_2, q_2, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_9 (ATerm t_27, ATerm v_27, ATerm u_27, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, v_27)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, v_27), term_s_12, u_27)));
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__3))
    {
      c_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
      f_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_9(c_2, e_2, f_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm InitTermIds_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  t = map_1_0(r_2, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, s_2, t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_j_13, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, b_2));
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm n_2 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
      {
        ATerm l_13 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_2), term_v_13)));
  return(t);
}
ATerm init_cached_terms_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL,r_0 = NULL,t_0 = NULL;
      t = (ATerm) ATempty;
      r_0 = t;
      t = term_a_14;
      t_0 = t;
      t = term_b_14;
      t = g_10(t_0, r_0, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm d_14 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) d_14) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          l_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_2;
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = (ATerm) ATempty;
    }
  i_2 = t;
  t = map_1_0(t_2, t);
  j_2 = t;
  t = i_2;
  t = InitTermIds_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, (ATerm) ATinsert(ATempty, k_2));
  t = conc_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, h_2);
  return(t);
}
ATerm oncetd_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_100(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = SRTS_one(p_2, t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm v_2 (ATerm), ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,j_1 = NULL,s_1 = NULL,u_0 = NULL;
      e_3 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_3 = ATgetFirst((ATermList) t);
          g_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_3);
      j_1 = t;
      t = g_3;
      t = listbu1_1_0(v_2, t);
      s_1 = t;
      t = (ATerm) ATinsert(CheckATermList(s_1), f_3);
      u_0 = t;
      t = SSLsetAnnotations(u_0, j_1);
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_2(t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
          }
      }
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      t = v_2(t);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_14 = ATgetFirst((ATermList) t);
      if(match_cons(l_14, sym_Compound_2))
        {
          ATerm m_14 = ATgetArgument(l_14, 0);
          if(((ATgetType(m_14) != AT_LIST) || !(ATisEmpty(m_14))))
            _fail(t);
          s_5 = ATgetArgument(l_14, 1);
        }
      else
        _fail(t);
      t_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
  t = conc_0_0(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm n_6 = NULL,q_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_14 = ATgetFirst((ATermList) t);
      if(match_cons(n_14, sym_Compound_2))
        {
          ATerm o_14 = ATgetArgument(n_14, 0);
          if(((ATgetType(o_14) != AT_LIST) || !(ATisEmpty(o_14))))
            _fail(t);
          n_6 = ATgetArgument(n_14, 1);
        }
      else
        _fail(t);
      q_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_6, q_6);
  t = conc_0_0(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm c_7 = NULL,i_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_14 = ATgetFirst((ATermList) t);
      if(match_cons(p_14, sym_Compound_2))
        {
          ATerm q_14 = ATgetArgument(p_14, 0);
          if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
            _fail(t);
          c_7 = ATgetArgument(p_14, 1);
        }
      else
        _fail(t);
      i_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_7, i_7);
  t = conc_0_0(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_14 = ATgetFirst((ATermList) t);
      if(match_cons(r_14, sym_Compound_2))
        {
          ATerm s_14 = ATgetArgument(r_14, 0);
          if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
            _fail(t);
          a_8 = ATgetArgument(r_14, 1);
        }
      else
        _fail(t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_8, b_8);
  t = conc_0_0(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_14 = ATgetFirst((ATermList) t);
      if(match_cons(t_14, sym_Compound_2))
        {
          ATerm u_14 = ATgetArgument(t_14, 0);
          if(((ATgetType(u_14) != AT_LIST) || !(ATisEmpty(u_14))))
            _fail(t);
          g_8 = ATgetArgument(t_14, 1);
        }
      else
        _fail(t);
      h_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_8, h_8);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
      g_4 = ATgetArgument(t, 2);
      t = g_4;
      if(match_cons(t, sym_Compound_2))
        {
          h_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
          t = i_4;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = h_4;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      r_4 = ATgetArgument(t, 0);
                      u_4 = ATgetArgument(t, 1);
                      t = u_4;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = r_4;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, p_4), g_4);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, p_4, q_4);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, p_4, q_4);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, p_4, q_4);
                    }
                }
              else
                {
                  t = q_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      r_4 = ATgetArgument(t, 0);
                      u_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_4;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, p_4), g_4);
                }
            }
          else
            {
              t = q_4;
              if(match_cons(t, sym_Compound_2))
                {
                  r_4 = ATgetArgument(t, 0);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_4;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, p_4), g_4);
            }
        }
      else
        {
          t = q_4;
          if(match_cons(t, sym_Compound_2))
            {
              r_4 = ATgetArgument(t, 0);
              u_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, p_4), g_4);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_4 = ATgetFirst((ATermList) t);
          q_4 = (ATerm) ATgetNext((ATermList) t);
          t = p_4;
          if(match_cons(t, sym_Compound_2))
            {
              j_4 = ATgetArgument(t, 0);
              l_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_4, q_4);
          t = conc_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              p_4 = ATgetArgument(t, 0);
              q_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_4;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_4 = ATgetFirst((ATermList) t);
              u_4 = (ATerm) ATgetNext((ATermList) t);
              t = u_4;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = r_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      s_4 = ATgetArgument(t, 0);
                      t_4 = ATgetArgument(t, 1);
                      {
                        ATerm w_14 = t;
                        int z_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_5 = NULL;
                            t = q_4;
                            t = listbu1_1_0(z_2, t);
                            r_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, p_4, r_5);
                            ;
                            LocalPopChoice(z_14);
                          }
                        else
                          {
                            t = w_14;
                            {
                              ATerm a_15 = t;
                              int b_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_5 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, p_4, s_4);
                                  t = conc_0_0(t);
                                  x_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, x_5, t_4);
                                  ;
                                  LocalPopChoice(b_15);
                                }
                              else
                                {
                                  t = a_15;
                                  {
                                    ATerm g_6 = NULL,h_6 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, p_4, s_4);
                                    t = conc_0_0(t);
                                    g_6 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
                                    t = conc_0_0(t);
                                    h_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, g_6, h_6);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm m_6 = NULL;
                      t = q_4;
                      t = listbu1_1_0(a_3, t);
                      m_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, p_4, m_6);
                    }
                }
              else
                {
                  t = r_4;
                  if(match_cons(t, sym_Compound_2))
                    {
                      s_4 = ATgetArgument(t, 0);
                      t_4 = ATgetArgument(t, 1);
                      {
                        ATerm c_15 = t;
                        int d_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_7 = NULL;
                            t = q_4;
                            t = listbu1_1_0(b_3, t);
                            b_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, p_4, b_7);
                            ;
                            LocalPopChoice(d_15);
                          }
                        else
                          {
                            t = c_15;
                            {
                              ATerm u_7 = NULL,v_7 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, p_4, s_4);
                              t = conc_0_0(t);
                              u_7 = t;
                              t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
                              t = conc_0_0(t);
                              v_7 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, u_7, v_7);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm z_7 = NULL;
                      t = q_4;
                      t = listbu1_1_0(c_3, t);
                      z_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, p_4, z_7);
                    }
                }
            }
          else
            {
              ATerm f_8 = NULL;
              t = q_4;
              t = listbu1_1_0(i_3, t);
              f_8 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, p_4, f_8);
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_98(t);
        t = p_8(t);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
      }
    return(t);
  }
  t = p_8(t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_Op_2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,u_2 = NULL;
        t = SSLgetAnnotations(k_12);
        l_3 = t;
        t = l_12;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = m_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, l_12, m_12);
        u_2 = t;
        t = SSLsetAnnotations(u_2, l_3);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,x_2 = NULL,w_2 = NULL;
              t = SSLgetAnnotations(k_12);
              v_3 = t;
              t = l_12;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = m_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_3 = ATgetFirst((ATermList) t);
                  a_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_12);
              y_3 = t;
              t = a_4;
              t = Cons_2_0(proper_list_0_0, j_3, t);
              b_4 = t;
              t = (ATerm) ATinsert(CheckATermList(b_4), z_3);
              w_2 = t;
              t = SSLsetAnnotations(w_2, y_3);
              c_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, l_12, c_4);
              x_2 = t;
              t = SSLsetAnnotations(x_2, v_3);
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              {
                ATerm o_5 = NULL,e_6 = NULL,y_2 = NULL;
                t = SSLgetAnnotations(k_12);
                o_5 = t;
                t = l_12;
                {
                  ATerm k_15 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm i_6 = NULL;
                      i_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = i_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = i_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = k_15;
                    }
                  e_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, e_6, m_12);
                  y_2 = t;
                  t = SSLsetAnnotations(y_2, o_5);
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm u_9 (ATerm f_27, ATerm i_27, ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,v_14 = NULL,x_14 = NULL;
  t = f_27;
  if(match_cons(t, sym_Op_2))
    {
      x_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
      {
        ATerm u_6 = NULL,y_6 = NULL,d_3 = NULL;
        t = SSLgetAnnotations(f_27);
        u_6 = t;
        t = v_14;
        t = map_1_0(Cache_0_0, t);
        y_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, x_14, y_6);
        d_3 = t;
        t = SSLsetAnnotations(d_3, u_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          x_14 = ATgetArgument(t, 0);
          v_14 = ATgetArgument(t, 1);
          {
            ATerm f_7 = NULL,j_7 = NULL,k_7 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(f_27);
            f_7 = t;
            t = x_14;
            t = Cache_0_0(t);
            j_7 = t;
            t = v_14;
            t = Cache_0_0(t);
            k_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, j_7, k_7);
            h_3 = t;
            t = SSLsetAnnotations(h_3, f_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              x_14 = ATgetArgument(t, 0);
              {
                ATerm p_7 = NULL,q_8 = NULL;
                t = SSLgetAnnotations(f_27);
                p_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, x_14);
                q_8 = t;
                t = SSLsetAnnotations(q_8, p_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  x_14 = ATgetArgument(t, 0);
                  {
                    ATerm i_8 = NULL,r_8 = NULL;
                    t = SSLgetAnnotations(f_27);
                    i_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, x_14);
                    r_8 = t;
                    t = SSLsetAnnotations(r_8, i_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      x_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_8 = NULL,a_9 = NULL;
                        t = SSLgetAnnotations(f_27);
                        o_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, x_14);
                        a_9 = t;
                        t = SSLsetAnnotations(a_9, o_8);
                      }
                    }
                  else
                    {
                      ATerm v_8 = NULL,b_9 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          x_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_27);
                      v_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, x_14);
                      b_9 = t;
                      t = SSLsetAnnotations(b_9, v_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  c_13 = t;
  t = term_m_15;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, c_13);
  t = n_10(i_13, c_13, t);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_15, d_13);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, (ATerm) ATmakeAppl(sym_Defined_2, term_n_15, d_13));
  t = l_10(k_3, f_27, h_13, t);
  t = d_13;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_14 = NULL,y_8 = NULL,z_8 = NULL;
        t = (ATerm) ATempty;
        y_8 = t;
        t = term_a_14;
        z_8 = t;
        t = term_b_14;
        t = g_10(z_8, y_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_15) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_14;
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATempty;
      }
    e_13 = t;
    t = (ATerm) ATempty;
    f_13 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_15, (ATerm) ATinsert(CheckATermList(e_13), (ATerm) ATmakeAppl(sym__3, c_13, d_13, i_27)));
    g_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_15, (ATerm) ATinsert(CheckATermList(e_13), (ATerm) ATmakeAppl(sym__3, c_13, d_13, i_27))));
    t = l_10(m_3, f_13, g_13, t);
    t = (ATerm) ATmakeAppl(sym_Id_1, d_13);
  }
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL,b_11 = NULL;
        t = term_l_15;
        b_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_15, x_15);
        t = g_10(b_11, x_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_15) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            p_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, p_9);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        {
          ATerm i_11 = NULL,n_11 = NULL;
          t = term_l_15;
          n_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, x_15);
          t = g_10(n_11, x_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("b_0", 0, ATtrue)))
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
  ATerm w_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = w_15;
      {
        ATerm r_16 = NULL,s_11 = NULL;
        r_16 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              ;
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              {
                ATerm b_16 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    ;
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = b_16;
                  }
              }
            }
          s_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_16, s_11);
          {
            ATerm d_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm g_16 = ATgetArgument(t, 0);
                    ATerm i_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, r_16, s_11);
                t = u_9(r_16, s_11, t);
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = d_16;
                {
                  ATerm e_12 = NULL,f_12 = NULL;
                  f_12 = t;
                  t = SSL_explode_term(f_12);
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_16 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) j_16) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm k_16 = ATgetArgument(t, 1);
                        if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
                          {
                            ATerm m_16 = ATgetFirst((ATermList) k_16);
                            ATerm n_16 = (ATerm) ATgetNext((ATermList) k_16);
                            if(((ATgetType(n_16) == AT_LIST) && !(ATisEmpty(n_16))))
                              {
                                e_12 = ATgetFirst((ATermList) n_16);
                                {
                                  ATerm o_16 = (ATerm) ATgetNext((ATermList) n_16);
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
                  t = e_12;
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm v_9 (ATerm x_31, ATerm w_31, ATerm t)
{
  ATerm u_16 = NULL;
  t = new_0_0(t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_16), term_v_13), (ATerm) ATmakeAppl(sym_AssignInit_1, w_31)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, x_31, (ATerm) ATmakeAppl(sym_Id_1, u_16))));
  return(t);
}
ATerm w_9 (ATerm j_170, ATerm t_31, ATerm v_31, ATerm t)
{
  ATerm v_16 = NULL,x_16 = NULL,y_16 = NULL;
  t = SSLgetAnnotations(j_170);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_31);
  y_16 = t;
  t = SSLsetAnnotations(y_16, v_16);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, x_16, v_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(z_12, a_13, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm a_19 = NULL,d_19 = NULL,e_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Anno_2))
    {
      e_19 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, a_19), e_19)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          e_19 = ATgetArgument(t, 0);
          a_19 = ATgetArgument(t, 1);
          {
            ATerm x_12 = NULL,y_12 = NULL,r_13 = NULL,s_13 = NULL;
            t = a_19;
            t = foldr_3_0(n_3, o_3, p_3, t);
            x_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_19, x_12);
            r_13 = t;
            t = term_w_16;
            s_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATmakeAppl(sym__2, e_19, x_12));
            t = g_10(s_13, r_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm z_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_16) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                y_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(CheckATermList(a_19), (ATerm) ATmakeAppl(sym_Id_1, y_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              e_19 = ATgetArgument(t, 0);
              t = e_19;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  e_19 = ATgetArgument(t, 0);
                  {
                    ATerm d_17 = t;
                    int f_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(d_19);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_17 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) g_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm h_17 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(h_17) != AT_LIST) || !(ATisEmpty(h_17))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_19)));
                        ;
                        LocalPopChoice(f_17);
                      }
                    else
                      {
                        t = d_17;
                        {
                          ATerm k_17 = t;
                          int l_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(d_19);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm m_17 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(n_17) != AT_LIST) || !(ATisEmpty(n_17))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_19)));
                              ;
                              LocalPopChoice(l_17);
                            }
                          else
                            {
                              t = k_17;
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(d_19);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_19)));
                                    ;
                                    LocalPopChoice(p_17);
                                  }
                                else
                                  {
                                    t = o_17;
                                    t = SSLgetAnnotations(d_19);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm q_17 = ATgetFirst((ATermList) t);
                                        if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("bound", 0, ATtrue)))
                                          _fail(t);
                                        {
                                          ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
                                          if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Id_1, e_19);
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
                      e_19 = ATgetArgument(t, 0);
                      {
                        ATerm l_19 = NULL,h_16 = NULL,l_16 = NULL,a_17 = NULL,e_16 = NULL;
                        t = SSL_explode_string(e_19);
                        t = escape_chars_0_0(t);
                        e_16 = t;
                        t = SSL_implode_string(e_16);
                        l_16 = t;
                        t = SSL_explode_string(l_16);
                        a_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_17), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
                        t = conc_0_0(t);
                        h_16 = t;
                        t = SSL_implode_string(h_16);
                        l_19 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_17), term_x_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, l_19)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          e_19 = ATgetArgument(t, 0);
                          {
                            ATerm e_17 = NULL;
                            t = SSL_real_to_string(e_19);
                            e_17 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, e_17))));
                          }
                        }
                      else
                        {
                          ATerm r_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              e_19 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(e_19);
                          r_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, r_17))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm x_22 = NULL,b_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_23;
  if(match_string(t, "Cons"))
    {
      ATerm y_23 = NULL;
      t = h_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          b_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_23;
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,y_26 = NULL,z_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                w_24 = ATgetArgument(t, 0);
                d_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_24;
            if(match_cons(t, sym_TypeName_2))
              {
                x_24 = ATgetArgument(t, 0);
                c_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                y_24 = ATgetArgument(t, 0);
                z_24 = ATgetArgument(t, 1);
                b_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_24;
            if(match_cons(t, sym_TypeId_1))
              {
                a_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_25;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = b_25;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_25;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = d_25;
            if(match_cons(t, sym_Id_1))
              {
                y_26 = ATgetArgument(t, 0);
                {
                  ATerm e_27 = NULL,i_9 = NULL;
                  t = SSLgetAnnotations(d_25);
                  e_27 = t;
                  t = y_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, y_26);
                  i_9 = t;
                  t = SSLsetAnnotations(i_9, e_27);
                }
              }
            else
              {
                ATerm l_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,l_9 = NULL,k_9 = NULL,j_9 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    y_26 = ATgetArgument(t, 0);
                    z_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_25);
                l_27 = t;
                t = y_26;
                if(match_cons(t, sym_Id_1))
                  {
                    x_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_26);
                w_27 = t;
                t = x_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, x_27);
                j_9 = t;
                t = SSLsetAnnotations(j_9, w_27);
                y_27 = t;
                t = z_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_27 = ATgetFirst((ATermList) t);
                    q_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_26);
                o_27 = t;
                t = q_27;
                t = Cons_2_0(_id, q_3, t);
                r_27 = t;
                t = (ATerm) ATinsert(CheckATermList(r_27), p_27);
                k_9 = t;
                t = SSLsetAnnotations(k_9, o_27);
                s_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, y_27, s_27);
                l_9 = t;
                t = SSLsetAnnotations(l_9, l_27);
              }
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATempty, d_23));
          }
        y_23 = t;
        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_18, (ATerm) ATinsert(ATinsert(ATempty, x_22), y_23)));
      }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = h_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_18;
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = bottomup_1_0(u_99, t);
    return(t);
  }
  t = SRTS_all(r_3, t);
  t = u_99(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    t = topdown_1_0(t_99, t);
    return(t);
  }
  t = t_99(t);
  t = SRTS_all(s_3, t);
  return(t);
}
ATerm c_54 (ATerm o_33, ATerm o_34, ATerm a_35, ATerm q_36, ATerm t)
{
  ATerm y_36 = NULL,c_37 = NULL,d_37 = NULL,c_28 = NULL,d_28 = NULL;
  t = o_33;
  {
    ATerm n_18 = t;
    if((PushChoice() == 0))
      {
        ATerm e_37 = NULL;
        e_37 = t;
        if(match_string(t, "Nil"))
          {
            t = e_37;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = e_37;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_18;
      }
    t = (ATerm) ATmakeAppl(sym__2, o_34, term_p_16);
    {
      ATerm t_3 (ATerm t)
      {
        ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
        if(match_cons(t, sym__2))
          {
            h_37 = ATgetArgument(t, 0);
            i_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(i_37);
        n_37 = t;
        t = h_37;
        if(match_cons(t, sym_Var_1))
          {
            p_37 = ATgetArgument(t, 0);
            {
              ATerm o_18 = t;
              int p_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_37)), a_35));
                  a_38 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_37, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_37)), a_35)));
                  t = w_9(h_37, p_37, a_38, t);
                  ;
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = o_18;
                  {
                    ATerm b_38 = NULL;
                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_37)), a_35));
                    b_38 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_37, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_37)), a_35)));
                    t = v_9(h_37, b_38, t);
                  }
                }
            }
          }
        else
          {
            ATerm d_38 = NULL;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_37)), a_35));
            d_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_37, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_37)), a_35)));
            t = v_9(h_37, d_38, t);
          }
        j_37 = t;
        t = term_w_10;
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_37, term_w_10);
        t = v_10(i_37, o_37, t);
        m_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_37, m_37);
        return(t);
      }
      t = thread_map_1_0(t_3, t);
      if(match_cons(t, sym__2))
        {
          y_36 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_34;
      t = foldr_3_0(u_3, w_3, x_3, t);
      c_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_33, c_37);
      c_28 = t;
      t = term_w_16;
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATmakeAppl(sym__2, o_33, c_37));
      t = g_10(d_28, c_28, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm t_18 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          d_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_37)), a_35)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, y_36), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18))));
    }
  }
  return(t);
}
ATerm d_54 (ATerm l_38, ATerm o_38, ATerm r_38, ATerm t)
{
  ATerm a_39 = NULL;
  t = SSL_real_to_string(l_38);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, o_38)), term_g_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_19, o_38))), (ATerm) ATmakeAppl(sym_FloatConst_1, a_39))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18))));
  return(t);
}
ATerm e_54 (ATerm d_39, ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm n_39 = NULL;
  t = SSL_int_to_string(d_39);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, e_39)), term_p_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_19, e_39))), (ATerm) ATmakeAppl(sym_IntConst_1, n_39))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18))));
  return(t);
}
ATerm f_54 (ATerm o_39, ATerm p_39, ATerm q_39, ATerm r_39, ATerm t)
{
  t = SSLgetAnnotations(o_39);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_39), term_x_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_39), q_39)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, q_39))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_39), term_s_12, q_39)));
  return(t);
}
ATerm g_54 (ATerm f_40, ATerm g_40, ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSLgetAnnotations(f_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_19 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_19) != AT_LIST) || !(ATisEmpty(z_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_40), term_x_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_40), m_40)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, m_40))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_40), term_s_12, m_40)));
  return(t);
}
ATerm h_54 (ATerm t_40, ATerm w_40, ATerm x_40, ATerm e_41, ATerm t)
{
  t = SSLgetAnnotations(t_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_20 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) a_20) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_20 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_20) != AT_LIST) || !(ATisEmpty(b_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, w_40), x_40), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, x_40))))));
  return(t);
}
ATerm i_54 (ATerm s_41, ATerm v_41, ATerm x_41, ATerm b_42, ATerm t)
{
  t = SSLgetAnnotations(s_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_20 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_20 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(d_20) != AT_LIST) || !(ATisEmpty(d_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, v_41), term_s_12, x_41));
  return(t);
}
ATerm j_54 (ATerm j_42, ATerm l_42, ATerm p_42, ATerm q_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm a_43, ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,p_43 = NULL,f_28 = NULL,g_28 = NULL;
  t = l_42;
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_43 = NULL;
        q_43 = t;
        if(match_string(t, "Nil"))
          {
            t = q_43;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = q_43;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, q_42, term_p_16);
    {
      ATerm d_4 (ATerm t)
      {
        ATerm r_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,y_43 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            if(match_cons(f_20, sym_Var_1))
              {
                r_43 = ATgetArgument(f_20, 0);
              }
            else
              _fail(t);
            u_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_int_to_string(u_43);
        v_43 = t;
        t = term_w_10;
        y_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_43, term_w_10);
        t = v_10(u_43, y_43, t);
        w_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_43), term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_43)), (ATerm) ATmakeAppl(sym_Id_1, j_42))))), w_43);
        return(t);
      }
      t = thread_map_1_0(d_4, t);
      if(match_cons(t, sym__2))
        {
          l_43 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_42, p_42);
      f_28 = t;
      t = term_w_16;
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATmakeAppl(sym__2, l_42, p_42));
      t = g_10(g_28, f_28, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm h_20 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_20) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          p_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, l_43, (ATerm) ATinsert(ATempty, t_42));
      t = conc_0_0(t);
      m_43 = t;
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, p_43)), (ATerm) ATmakeAppl(sym_Id_1, j_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, m_43), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, j_42), u_42, v_42))));
    }
  }
  return(t);
}
ATerm k_54 (ATerm z_43, ATerm a_44, ATerm b_44, ATerm c_44, ATerm d_44, ATerm h_44, ATerm t)
{
  ATerm z_44 = NULL;
  t = SSL_real_to_string(a_44);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, z_44)), (ATerm) ATmakeAppl(sym_Id_1, z_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_44)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, z_43), c_44, d_44))));
  return(t);
}
ATerm l_54 (ATerm a_45, ATerm c_45, ATerm d_45, ATerm e_45, ATerm f_45, ATerm m_45, ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_int_to_string(c_45);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, t_45)), (ATerm) ATmakeAppl(sym_Id_1, a_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_45), e_45, f_45))));
  return(t);
}
ATerm m_54 (ATerm u_45, ATerm w_45, ATerm x_45, ATerm t)
{
  t = w_45;
  {
    ATerm m_20 = t;
    if((PushChoice() == 0))
      {
        ATerm d_46 = NULL,e_46 = NULL,j_46 = NULL,a_10 = NULL;
        j_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_46);
        d_46 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_46);
        a_10 = t;
        t = SSLsetAnnotations(a_10, d_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_20;
      }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_45)));
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm e_38 = NULL,k_38 = NULL;
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(e_38, k_38, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm y_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym_SVar_1))
        {
          y_48 = ATgetArgument(n_20, 0);
        }
      else
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(((ATgetType(o_20) != AT_LIST) || !(ATisEmpty(o_20))))
          _fail(t);
      }
      {
        ATerm p_20 = ATgetArgument(t, 2);
        if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, y_48);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = topdown_1_0(k_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(m_4, t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
          }
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm y_49 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(match_cons(w_20, sym_SVar_1))
        {
          y_49 = ATgetArgument(w_20, 0);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) != AT_LIST) || !(ATisEmpty(x_20))))
          _fail(t);
      }
      {
        ATerm y_20 = ATgetArgument(t, 2);
        if(((ATgetType(y_20) != AT_LIST) || !(ATisEmpty(y_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, y_49);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = topdown_1_0(v_4, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(w_4, t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
          }
      }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  t = term_g_21;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_51, term_g_21);
  t = l_10(y_4, x_51, y_51, t);
  t = x_51;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_51), term_v_13), term_i_21);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_52;
  if(match_cons(t, sym_Var_1))
    {
      e_52 = ATgetArgument(t, 0);
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_52;
            t = w_9(g_52, e_52, h_52, t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = f_52;
            t = v_9(g_52, h_52, t);
          }
      }
    }
  else
    {
      t = f_52;
      t = v_9(g_52, h_52, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm l_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,a_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,k_47 = NULL,n_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,f_48 = NULL,j_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_48 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, j_48, (ATerm) ATinsert(ATempty, a_48));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          j_48 = ATgetArgument(t, 0);
          {
            ATerm n_48 = NULL;
            t = f_48;
            t = new_0_0(t);
            n_48 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_48), term_v_13))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_Id_1, n_48)))), j_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_48), term_s_12, term_z_18))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              j_48 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, j_48);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  j_48 = ATgetArgument(t, 0);
                  a_48 = ATgetArgument(t, 1);
                  v_47 = ATgetArgument(t, 2);
                  {
                    ATerm u_48 = NULL,w_48 = NULL,x_48 = NULL;
                    t = j_48;
                    if(match_cons(t, sym_SVar_1))
                      {
                        b_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_48;
                    t = map_1_0(e_4, t);
                    u_48 = t;
                    t = v_47;
                    t = map_1_0(f_4, t);
                    w_48 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_18)), w_48), u_48);
                    t = concat_0_0(t);
                    x_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, b_48), x_48)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      j_48 = ATgetArgument(t, 0);
                      a_48 = ATgetArgument(t, 1);
                      v_47 = ATgetArgument(t, 2);
                      {
                        ATerm r_49 = NULL,t_49 = NULL,u_49 = NULL;
                        t = a_48;
                        t = map_1_0(n_4, t);
                        r_49 = t;
                        t = v_47;
                        t = map_1_0(o_4, t);
                        t_49 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_49, t_49);
                        t = conc_0_0(t);
                        u_49 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, j_48), u_49)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          j_48 = ATgetArgument(t, 0);
                          {
                            ATerm g_50 = NULL;
                            t = f_48;
                            t = new_0_0(t);
                            g_50 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_50), term_v_13), term_l_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_21), term_t_21), j_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_Id_1, g_50))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              j_48 = ATgetArgument(t, 0);
                              a_48 = ATgetArgument(t, 1);
                              {
                                ATerm k_50 = NULL;
                                t = f_48;
                                t = new_0_0(t);
                                k_50 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_50), term_v_13), term_l_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_z_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_Id_1, k_50))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  j_48 = ATgetArgument(t, 0);
                                  a_48 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, j_48, a_48);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      j_48 = ATgetArgument(t, 0);
                                      a_48 = ATgetArgument(t, 1);
                                      v_47 = ATgetArgument(t, 2);
                                      {
                                        ATerm e_51 = NULL,h_51 = NULL;
                                        t = f_48;
                                        t = new_0_0(t);
                                        e_51 = t;
                                        t = new_0_0(t);
                                        h_51 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_c_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_51), term_v_13), term_f_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_51), term_v_13), term_l_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_51))))), j_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_Id_1, e_51))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          j_48 = ATgetArgument(t, 0);
                                          a_48 = ATgetArgument(t, 1);
                                          {
                                            ATerm k_51 = NULL,o_51 = NULL;
                                            t = f_48;
                                            t = new_0_0(t);
                                            k_51 = t;
                                            t = new_0_0(t);
                                            o_51 = t;
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_51), term_v_13), term_f_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_51), term_v_13), term_l_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_51))))), term_l_22), j_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, (ATerm) ATmakeAppl(sym_Id_1, k_51))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              j_48 = ATgetArgument(t, 0);
                                              a_48 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_48, a_48);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  j_48 = ATgetArgument(t, 0);
                                                  a_48 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_48), j_48));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      j_48 = ATgetArgument(t, 0);
                                                      a_48 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm w_51 = NULL;
                                                        t = j_48;
                                                        t = map_1_0(x_4, t);
                                                        t = j_48;
                                                        t = map_1_0(z_4, t);
                                                        w_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, w_51)), (ATerm) ATinsert(ATempty, a_48));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_m_22;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  j_48 = ATgetArgument(t, 0);
                                                                  a_48 = ATgetArgument(t, 1);
                                                                  t = j_48;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      b_48 = ATgetArgument(t, 0);
                                                                      t_46 = ATgetArgument(t, 1);
                                                                      t = t_46;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          l_46 = ATgetFirst((ATermList) t);
                                                                          n_46 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = n_46;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              o_46 = ATgetFirst((ATermList) t);
                                                                              p_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = p_46;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = b_48;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm n_22 = t;
                                                                                      int o_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm d_52 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_46, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_22, a_48)))))), (ATerm) ATmakeAppl(sym__2, l_46, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_22, a_48)))));
                                                                                          t = map_1_0(a_5, t);
                                                                                          d_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, a_48)), term_z_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_23, (ATerm) ATinsert(ATempty, a_48)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, d_52), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18))));
                                                                                          ;
                                                                                          LocalPopChoice(o_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_22;
                                                                                          t = c_54(b_48, t_46, a_48, f_48, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_54(b_48, t_46, a_48, f_48, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_48;
                                                                                  t = c_54(b_48, t_46, a_48, f_48, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_48;
                                                                              t = c_54(b_48, t_46, a_48, f_48, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = b_48;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm i_23 = t;
                                                                                  int j_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, a_48)), term_z_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_23, (ATerm) ATinsert(ATempty, a_48)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18))));
                                                                                      ;
                                                                                      LocalPopChoice(j_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_23;
                                                                                      t = c_54(b_48, t_46, a_48, f_48, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_54(b_48, t_46, a_48, f_48, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_48;
                                                                              t = c_54(b_48, t_46, a_48, f_48, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          b_48 = ATgetArgument(t, 0);
                                                                          t = d_54(b_48, a_48, f_48, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              b_48 = ATgetArgument(t, 0);
                                                                              t = e_54(b_48, a_48, f_48, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  b_48 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm s_52 = NULL,l_28 = NULL,m_28 = NULL,o_28 = NULL,i_28 = NULL;
                                                                                    t = SSL_explode_string(b_48);
                                                                                    t = escape_chars_0_0(t);
                                                                                    i_28 = t;
                                                                                    t = SSL_implode_string(i_28);
                                                                                    m_28 = t;
                                                                                    t = SSL_explode_string(m_28);
                                                                                    o_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_28), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
                                                                                    t = conc_0_0(t);
                                                                                    l_28 = t;
                                                                                    t = SSL_implode_string(l_28);
                                                                                    s_52 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_23, a_48))), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_17), term_x_17), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_52))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, term_z_18))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      b_48 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm q_23 = t;
                                                                                        int r_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = f_54(j_48, b_48, a_48, f_48, t);
                                                                                            ;
                                                                                            LocalPopChoice(r_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = q_23;
                                                                                            {
                                                                                              ATerm s_23 = t;
                                                                                              int t_23 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = g_54(j_48, b_48, a_48, f_48, t);
                                                                                                  ;
                                                                                                  LocalPopChoice(t_23);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = s_23;
                                                                                                  {
                                                                                                    ATerm u_23 = t;
                                                                                                    int v_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = h_54(j_48, b_48, a_48, f_48, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(v_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = u_23;
                                                                                                        t = i_54(j_48, b_48, a_48, f_48, t);
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
                                                                                          b_48 = ATgetArgument(t, 0);
                                                                                          t_46 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, t_46, a_48)), (ATerm) ATmakeAppl(sym_Match_2, b_48, a_48)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm w_23 = t;
                                                                                          int x_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm z_23 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(x_23);
                                                                                              t = term_m_22;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_23;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_m_22;
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
                                                                      j_48 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, j_48, term_z_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          j_48 = ATgetArgument(t, 0);
                                                                          a_48 = ATgetArgument(t, 1);
                                                                          v_47 = ATgetArgument(t, 2);
                                                                          t = j_48;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              b_48 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = a_48;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              z_47 = ATgetFirst((ATermList) t);
                                                                              u_47 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = z_47;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  f_47 = ATgetArgument(t, 0);
                                                                                  k_47 = ATgetArgument(t, 1);
                                                                                  n_47 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = f_47;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  g_47 = ATgetArgument(t, 0);
                                                                                  e_47 = ATgetArgument(t, 1);
                                                                                  t = k_47;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      u_46 = ATgetFirst((ATermList) t);
                                                                                      w_46 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = w_46;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          x_46 = ATgetFirst((ATermList) t);
                                                                                          d_47 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = d_47;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = x_46;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  a_47 = ATgetArgument(t, 0);
                                                                                                  t = u_46;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      v_46 = ATgetArgument(t, 0);
                                                                                                      t = e_47;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = g_47;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm a_24 = t;
                                                                                                              int b_24 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_48))), term_z_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_48))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_47), term_s_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_22, (ATerm) ATmakeAppl(sym_Id_1, b_48)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, v_46), term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_22, (ATerm) ATmakeAppl(sym_Id_1, b_48)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_48), u_47, v_47))));
                                                                                                                  ;
                                                                                                                  LocalPopChoice(b_24);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_24;
                                                                                                                  t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = g_47;
                                                                                                          t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_47;
                                                                                                      t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_47;
                                                                                                  t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_47;
                                                                                              t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_47;
                                                                                          t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = e_47;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = g_47;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm c_24 = t;
                                                                                                  int d_24 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_48))), term_z_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_48)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_47), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_48), u_47, v_47))));
                                                                                                      ;
                                                                                                      LocalPopChoice(d_24);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_24;
                                                                                                      t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_47;
                                                                                              t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_47;
                                                                                          t = j_54(b_48, g_47, e_47, k_47, n_47, u_47, v_47, f_48, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      g_47 = ATgetArgument(t, 0);
                                                                                      t = k_54(b_48, g_47, n_47, u_47, v_47, f_48, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          g_47 = ATgetArgument(t, 0);
                                                                                          t = l_54(b_48, g_47, n_47, u_47, v_47, f_48, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm n_53 = NULL,s_28 = NULL,t_28 = NULL,v_28 = NULL,p_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              g_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(g_47);
                                                                                          t = escape_chars_0_0(t);
                                                                                          p_28 = t;
                                                                                          t = SSL_implode_string(p_28);
                                                                                          t_28 = t;
                                                                                          t = SSL_explode_string(t_28);
                                                                                          v_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_28), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
                                                                                          t = conc_0_0(t);
                                                                                          s_28 = t;
                                                                                          t = SSL_implode_string(s_28);
                                                                                          n_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, n_53))), (ATerm) ATmakeAppl(sym_Id_1, b_48))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_48), u_47, v_47))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = v_47;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              j_48 = ATgetArgument(t, 0);
                                                                              a_48 = ATgetArgument(t, 1);
                                                                              v_47 = ATgetArgument(t, 2);
                                                                              w_47 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, j_48), (ATerm) ATmakeAppl(sym_Case_3, a_48, v_47, w_47));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  j_48 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, j_48));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      j_48 = ATgetArgument(t, 0);
                                                                                      a_48 = ATgetArgument(t, 1);
                                                                                      t = j_48;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          b_48 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = a_48;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          z_47 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm g_24 = t;
                                                                                            int h_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, b_48), term_x_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, b_48), (ATerm) ATmakeAppl(sym_Id_1, z_47))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_48), term_s_12, (ATerm) ATmakeAppl(sym_Id_1, z_47))));
                                                                                                ;
                                                                                                LocalPopChoice(h_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_24;
                                                                                                t = m_54(b_48, a_48, f_48, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_54(b_48, a_48, f_48, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          j_48 = ATgetArgument(t, 0);
                                                                                          t = j_48;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              b_48 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_48), term_s_12, term_z_18));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm b_54 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              j_48 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = j_48;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          b_54 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_18, term_s_12, b_54));
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
ATerm y_9 (ATerm x_0 (ATerm), ATerm b_1 (ATerm), ATerm z_0, ATerm d_1, ATerm v_0, ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_0, v_0);
  t = x_0(t);
  if(match_cons(t, sym__2))
    {
      p_54 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, n_54);
  t = b_1(t);
  if(match_cons(t, sym__2))
    {
      q_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_54), p_54), o_54);
  return(t);
}
ATerm thread_map_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm d_55 (ATerm t)
  {
    ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,x_54 = NULL,y_54 = NULL;
    v_54 = t;
    if(match_cons(t, sym__2))
      {
        x_54 = ATgetArgument(t, 0);
        y_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_54;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_54 = ATgetFirst((ATermList) t);
        u_54 = (ATerm) ATgetNext((ATermList) t);
        t = v_54;
        t = y_9(e_112, d_55, t_54, u_54, y_54, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_54);
      }
    return(t);
  }
  t = d_55(t);
  return(t);
}
ATerm t_58 (ATerm b_56, ATerm i_56, ATerm j_56, ATerm k_56, ATerm l_56, ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,w_28 = NULL,x_28 = NULL;
  t = b_56;
  {
    ATerm i_24 = t;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL;
        u_56 = t;
        if(match_string(t, "Nil"))
          {
            t = u_56;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = u_56;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_24;
      }
    t = i_56;
    t = map_1_0(b_5, t);
    t = (ATerm) ATmakeAppl(sym__2, i_56, term_p_16);
    t = thread_map_1_0(c_5, t);
    if(match_cons(t, sym__2))
      {
        q_56 = ATgetArgument(t, 0);
        {
          ATerm j_24 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = i_56;
    t = foldr_3_0(d_5, e_5, f_5, t);
    s_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_56, s_56);
    w_28 = t;
    t = term_w_16;
    x_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATmakeAppl(sym__2, b_56, s_56));
    t = g_10(x_28, w_28, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm k_24 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) k_24) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        t_56 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_56, (ATerm) ATinsert(ATempty, j_56));
    t = conc_0_0(t);
    r_56 = t;
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_56)), term_z_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_56), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_56)));
  }
  return(t);
}
ATerm u_58 (ATerm f_57, ATerm g_57, ATerm h_57, ATerm i_57, ATerm t)
{
  ATerm m_57 = NULL;
  t = SSL_real_to_string(f_57);
  m_57 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, m_57)), term_z_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_57)));
  return(t);
}
ATerm v_58 (ATerm n_57, ATerm o_57, ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm u_57 = NULL;
  t = SSL_int_to_string(n_57);
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_57)), term_z_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_57)));
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,c_10 = NULL;
  x_56 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_56);
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_56);
  c_10 = t;
  t = SSLsetAnnotations(c_10, v_56);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if(match_cons(l_24, sym_Var_1))
        {
          y_56 = ATgetArgument(l_24, 0);
        }
      else
        _fail(t);
      z_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(z_56);
  a_57 = t;
  t = term_w_10;
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, term_w_10);
  t = v_10(z_56, c_57, t);
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_56), term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_57)), term_z_18)))), b_57);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL;
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(d_57, e_57, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  c_58 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      d_58 = ATgetArgument(t, 0);
      g_58 = ATgetArgument(t, 1);
      h_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_58;
  if(match_cons(t, sym_Match_1))
    {
      e_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_58;
  if(match_cons(t, sym_Op_2))
    {
      f_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
      t = b_58;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_57 = ATgetFirst((ATermList) t);
          x_57 = (ATerm) ATgetNext((ATermList) t);
          t = x_57;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_57 = ATgetFirst((ATermList) t);
              a_58 = (ATerm) ATgetNext((ATermList) t);
              t = a_58;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = y_57;
                  if(match_cons(t, sym_Var_1))
                    {
                      z_57 = ATgetArgument(t, 0);
                      t = v_57;
                      if(match_cons(t, sym_Var_1))
                        {
                          w_57 = ATgetArgument(t, 0);
                          t = f_58;
                          if(match_string(t, "Cons"))
                            {
                              ATerm m_24 = t;
                              int n_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, term_z_18)), term_z_22), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_23, (ATerm) ATinsert(ATempty, term_z_18)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_58), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_57), term_s_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_22, (ATerm) ATinsert(ATempty, term_o_24)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_57), term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_22, (ATerm) ATinsert(ATempty, term_o_24)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_58)));
                                  ;
                                  LocalPopChoice(n_24);
                                }
                              else
                                {
                                  t = m_24;
                                  t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                                }
                            }
                          else
                            {
                              t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                            }
                        }
                      else
                        {
                          t = f_58;
                          t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                        }
                    }
                  else
                    {
                      t = f_58;
                      t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                    }
                }
              else
                {
                  t = f_58;
                  t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                }
            }
          else
            {
              t = f_58;
              t = t_58(f_58, b_58, g_58, h_58, c_58, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = f_58;
              if(match_string(t, "Nil"))
                {
                  ATerm p_24 = t;
                  int q_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATinsert(ATempty, term_z_18)), term_z_22), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_23, (ATerm) ATinsert(ATempty, term_z_18))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_58)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_58)));
                      ;
                      LocalPopChoice(q_24);
                    }
                  else
                    {
                      t = p_24;
                      t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                    }
                }
              else
                {
                  t = t_58(f_58, b_58, g_58, h_58, c_58, t);
                }
            }
          else
            {
              t = f_58;
              t = t_58(f_58, b_58, g_58, h_58, c_58, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          f_58 = ATgetArgument(t, 0);
          t = u_58(f_58, g_58, h_58, c_58, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_58 = ATgetArgument(t, 0);
              t = v_58(f_58, g_58, h_58, c_58, t);
            }
          else
            {
              ATerm r_58 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,z_28 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  f_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(f_58);
              t = escape_chars_0_0(t);
              z_28 = t;
              t = SSL_implode_string(z_28);
              d_29 = t;
              t = SSL_explode_string(d_29);
              f_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_29), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
              t = conc_0_0(t);
              c_29 = t;
              t = SSL_implode_string(c_29);
              r_58 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_24, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, r_58))), term_z_18)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_58)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_58)));
            }
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,f_10 = NULL;
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_59 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_24 = ATgetFirst((ATermList) t);
              if(((ATgetType(v_24) != AT_INT) || (ATgetInt((ATermInt) v_24) != 34)))
                _fail(t);
              i_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(i_59), term_t_17), term_e_25);
          ;
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm k_59 = NULL,l_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_59 = ATgetFirst((ATermList) t);
                l_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_59;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(l_59), term_e_25), term_e_25);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(l_59), term_f_25), term_e_25);
              }
          }
        }
      h_59 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_59 = ATgetFirst((ATermList) t);
          f_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_59);
      d_59 = t;
      t = f_59;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      g_59 = t;
      t = (ATerm) ATinsert(CheckATermList(g_59), e_59);
      f_10 = t;
      t = SSLsetAnnotations(f_10, d_59);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
        g_60 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_60 = ATgetFirst((ATermList) t);
            f_60 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm j_29 = NULL,m_29 = NULL,m_10 = NULL;
              t = SSLgetAnnotations(g_60);
              j_29 = t;
              t = f_60;
              t = escape_chars_0_0(t);
              m_29 = t;
              t = (ATerm) ATinsert(CheckATermList(m_29), e_60);
              m_10 = t;
              t = SSLsetAnnotations(m_10, j_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_60;
          }
      }
    }
  return(t);
}
ATerm d_10 (ATerm r_34, ATerm q_34, ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,m_60 = NULL,n_60 = NULL,b_30 = NULL,c_30 = NULL,e_30 = NULL,y_29 = NULL,z_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL,r_29 = NULL,s_29 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_25), r_34);
  n_60 = t;
  t = SSL_concat_strings(n_60);
  s_29 = t;
  t = SSL_explode_string(s_29);
  t = escape_chars_0_0(t);
  r_29 = t;
  t = SSL_implode_string(r_29);
  v_29 = t;
  t = SSL_explode_string(v_29);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_29), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
  t = conc_0_0(t);
  u_29 = t;
  t = SSL_implode_string(u_29);
  j_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_25), r_34);
  m_60 = t;
  t = SSL_concat_strings(m_60);
  z_29 = t;
  t = SSL_explode_string(z_29);
  t = escape_chars_0_0(t);
  y_29 = t;
  t = SSL_implode_string(y_29);
  c_30 = t;
  t = SSL_explode_string(c_30);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_30), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
  t = conc_0_0(t);
  b_30 = t;
  t = SSL_implode_string(b_30);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_25), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_18), (ATerm) ATmakeAppl(sym_StringLit_1, k_60)), term_k_25)))), q_34), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_18), (ATerm) ATmakeAppl(sym_StringLit_1, j_60)), term_k_25)))));
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  q_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_62 = ATgetArgument(t, 0);
      s_62 = ATgetArgument(t, 1);
      t_62 = ATgetArgument(t, 2);
      p_62 = ATgetArgument(t, 3);
      {
        ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,h_32 = NULL,i_32 = NULL;
        t = s_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        a_32 = t;
        t = t_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        b_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
        t = conc_0_0(t);
        c_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_62, p_62);
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,d_11 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, r_62, p_62);
              m_33 = t;
              t = SSLgetAnnotations(m_33);
              l_33 = t;
              t = r_62;
              {
                ATerm o_25 = t;
                int p_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_33 = NULL;
                    t = term_w_11;
                    q_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, r_62);
                    t = g_10(q_33, r_62, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm q_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = r_62;
                    ;
                    LocalPopChoice(p_25);
                  }
                else
                  {
                    t = o_25;
                    {
                      ATerm s_33 = NULL,t_33 = NULL;
                      t = (ATerm) ATempty;
                      s_33 = t;
                      t = term_q_11;
                      t_33 = t;
                      t = term_r_25;
                      t = g_10(t_33, s_33, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm s_25 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) s_25) != ATmakeSymbol("o_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = r_62;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym__2, r_62, p_62);
                d_11 = t;
                t = SSLsetAnnotations(d_11, l_33);
                if(match_cons(t, sym__2))
                  {
                    j_33 = ATgetArgument(t, 0);
                    k_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_10(j_33, k_33, t);
              }
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), p_62));
            }
          h_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_32, (ATerm) ATinsert(ATempty, term_u_25));
          t = conc_0_0(t);
          i_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, i_32))), h_32);
        }
      }
    }
  else
    {
      ATerm a_34 = NULL,d_34 = NULL,e_34 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          r_62 = ATgetArgument(t, 0);
          s_62 = ATgetArgument(t, 1);
          t_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_62;
      t = map_1_0(TranslateVarDec_0_0, t);
      a_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_62, t_62);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,e_11 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_62, t_62);
            g_35 = t;
            t = SSLgetAnnotations(g_35);
            f_35 = t;
            t = r_62;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_35 = NULL;
                  t = term_w_11;
                  j_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_w_11, r_62);
                  t = g_10(j_35, r_62, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm z_25 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) z_25) != ATmakeSymbol("q_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = r_62;
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm l_35 = NULL,m_35 = NULL;
                    t = (ATerm) ATempty;
                    l_35 = t;
                    t = term_q_11;
                    m_35 = t;
                    t = term_r_25;
                    t = g_10(m_35, l_35, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm a_26 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) a_26) != ATmakeSymbol("o_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = r_62;
                  }
                }
              t = (ATerm) ATmakeAppl(sym__2, r_62, t_62);
              e_11 = t;
              t = SSLsetAnnotations(e_11, f_35);
              if(match_cons(t, sym__2))
                {
                  d_35 = ATgetArgument(t, 0);
                  e_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_10(d_35, e_35, t);
            }
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_l_25), t_62));
          }
        d_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_34, (ATerm) ATinsert(ATempty, term_u_25));
        t = conc_0_0(t);
        e_34 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_13, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, e_34))), d_34);
      }
    }
  return(t);
}
ATerm g_10 (ATerm m_65, ATerm n_65, ATerm t)
{
  ATerm y_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_65, n_65);
  t = x_10(m_65, n_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_62 = ATgetFirst((ATermList) t);
      {
        ATerm b_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_62;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL;
  if(match_cons(t, sym__2))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(n_63, o_63, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm h_10 (ATerm a_33, ATerm y_32, ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,o_35 = NULL,p_35 = NULL,l_63 = NULL;
  t = y_32;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            l_63 = ATgetArgument(t, 0);
            {
              ATerm e_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_26);
        t = l_63;
        t = foldr_3_0(g_5, h_5, i_5, t);
      }
    else
      {
        t = c_26;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm f_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_p_16;
      }
    d_63 = t;
    t = SSL_int_to_string(d_63);
    c_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_33, d_63);
    o_35 = t;
    t = term_w_16;
    p_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATmakeAppl(sym__2, a_33, d_63));
    t = g_10(p_35, o_35, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm g_26 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) g_26) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        i_63 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_explode_string(a_33);
    g_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_63), term_t_17), (ATerm) ATinsert(ATempty, term_t_17));
    t = conc_0_0(t);
    h_63 = t;
    t = SSL_implode_string(h_63);
    e_63 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_63))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_63), term_s_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_26), (ATerm) ATmakeAppl(sym_IntConst_1, c_63)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, e_63)))))));
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      s_63 = ATgetArgument(t, 0);
      t_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(s_63, t_63, t);
  return(t);
}
ATerm InitConstructors_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  t = map_1_0(j_5, t);
  t = concat_0_0(t);
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_63, (ATerm) ATinsert(ATempty, term_m_26));
  t = conc_0_0(t);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_12, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_o_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_12)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_63));
  return(t);
}
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_63 = ATgetFirst((ATermList) t);
      y_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_63;
  if(match_int(t, 95))
    {
      ATerm a_64 = NULL;
      t = y_63;
      t = p_0(t);
      a_64 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_64), term_p_26), term_p_26);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm c_64 = NULL;
          t = y_63;
          t = p_0(t);
          c_64 = t;
          t = (ATerm) ATinsert(CheckATermList(c_64), term_p_26);
        }
      else
        {
          ATerm e_64 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = y_63;
          t = p_0(t);
          e_64 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_64), term_p_26), term_q_26), term_p_26);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm a_115 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL;
  i_64 = t;
  t = SSL_explode_string(i_64);
  {
    ATerm d_65 (ATerm t)
    {
      ATerm r_26 = t;
      int s_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_115(d_65, t);
          ;
          LocalPopChoice(s_26);
        }
      else
        {
          t = r_26;
          {
            ATerm w_64 = NULL,x_64 = NULL,z_64 = NULL;
            z_64 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_64 = ATgetFirst((ATermList) t);
                x_64 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm u_35 = NULL,x_35 = NULL,l_11 = NULL;
                  t = SSLgetAnnotations(z_64);
                  u_35 = t;
                  t = x_64;
                  t = d_65(t);
                  x_35 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_35), w_64);
                  l_11 = t;
                  t = SSLsetAnnotations(l_11, u_35);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_64;
              }
          }
        }
      return(t);
    }
    t = d_65(t);
    h_64 = t;
    t = SSL_implode_string(h_64);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_65;
      t = p_111(t);
    }
  else
    {
      ATerm l_65 = NULL,o_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_65 = ATgetFirst((ATermList) t);
          i_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_65;
      t = r_111(t);
      l_65 = t;
      t = i_65;
      t = foldr_3_0(p_111, q_111, r_111, t);
      o_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_65, o_65);
      t = q_111(t);
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  if(match_cons(t, sym__2))
    {
      b_66 = ATgetArgument(t, 0);
      c_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(b_66, c_66, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm i_10 (ATerm n_32, ATerm m_32, ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,z_65 = NULL;
  t = m_32;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            z_65 = ATgetArgument(t, 0);
            {
              ATerm v_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_26);
        t = z_65;
        t = foldr_3_0(k_5, l_5, m_5, t);
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
        t = term_p_16;
      }
    q_65 = t;
    t = n_32;
    t = escape_1_0(Cify_1_0, t);
    s_65 = t;
    t = SSL_int_to_string(q_65);
    t_65 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_65), term_a_27), s_65), term_x_26);
    w_65 = t;
    t = SSL_concat_strings(w_65);
    r_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_32, q_65);
    u_65 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_27, r_65);
    v_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_32, q_65), (ATerm) ATmakeAppl(sym_Defined_2, term_b_27, r_65));
    t = l_10(n_5, u_65, v_65, t);
    t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_65), term_v_13)));
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(h_66, i_66, t);
  return(t);
}
ATerm j_10 (ATerm k_32, ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL;
  t = k_32;
  t = map_1_0(p_5, t);
  d_66 = t;
  {
    ATerm h_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_11;
        t = get_config_0_0(t);
        t = d_66;
        LocalPopChoice(j_27);
        t = (ATerm) ATempty;
      }
    else
      {
        t = h_27;
        {
          ATerm j_66 = NULL;
          t = k_32;
          t = InitConstructors_0_0(t);
          j_66 = t;
          t = (ATerm) ATinsert(ATempty, j_66);
        }
      }
    e_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_66, e_66);
    t = conc_0_0(t);
    f_66 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, f_66);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  l_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_66;
    }
  else
    {
      ATerm q_5 (ATerm t)
      {
        t = not_null(n_66);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_66 = ATgetFirst((ATermList) t);
          if(((n_66 != NULL) && (n_66 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_66;
      t = at_end_1_0(q_5, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  e_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_67;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_67 = ATgetFirst((ATermList) t);
          g_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_36 = NULL,i_36 = NULL,j_36 = NULL,p_11 = NULL;
            t = SSLgetAnnotations(e_67);
            f_36 = t;
            t = f_67;
            t = r_112(t);
            i_36 = t;
            t = g_67;
            t = filter_1_0(r_112, t);
            j_36 = t;
            t = (ATerm) ATinsert(CheckATermList(j_36), i_36);
            p_11 = t;
            t = SSLsetAnnotations(p_11, f_36);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = k_27;
            t = g_67;
            t = filter_1_0(r_112, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm w_67 (ATerm t)
  {
    ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
    v_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_67 = ATgetFirst((ATermList) t);
        u_67 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_36 = NULL,z_36 = NULL,v_11 = NULL;
          t = SSLgetAnnotations(v_67);
          u_36 = t;
          t = u_67;
          t = w_67(t);
          z_36 = t;
          t = (ATerm) ATinsert(CheckATermList(z_36), t_67);
          v_11 = t;
          t = SSLsetAnnotations(v_11, u_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_67;
        t = a_106(t);
      }
    return(t);
  }
  t = w_67(t);
  return(t);
}
ATerm i_68 (ATerm a_68, ATerm t)
{
  ATerm b_68 = NULL;
  t = SSL_explode_term(a_68);
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_68;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
  f_68 = t;
  if(match_cons(t, sym__2))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 (ATerm t)
            {
              t = e_68;
              return(t);
            }
            t = d_68;
            t = at_end_1_0(u_5, t);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = i_68(f_68, t);
          }
      }
    }
  else
    {
      t = i_68(f_68, t);
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm m_68 = NULL;
  ATerm b_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          m_68 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      {
        ATerm o_68 = NULL;
        t = m_68;
        t = map_1_0(TranslateType_0_0, t);
        o_68 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_13, (ATerm) ATmakeAppl(sym_ParamList_1, o_68));
      }
    }
  else
    {
      t = b_28;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm j_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_t_13;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_68;
  {
    ATerm k_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            v_68 = ATgetArgument(t, 0);
            {
              ATerm q_28 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_28);
        {
          ATerm y_68 = NULL;
          t = v_68;
          t = map_1_0(TranslateType_0_0, t);
          y_68 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, t_68), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, y_68))));
        }
      }
    else
      {
        t = k_28;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm r_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_13, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, t_68), term_v_13));
      }
  }
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      d_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
      f_69 = ATgetArgument(t, 2);
      {
        ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
        t = e_69;
        t = map_1_0(TranslateVarDec_0_0, t);
        j_69 = t;
        t = f_69;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_69 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_13)), k_69), j_69);
        t = concat_0_0(t);
        l_69 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_69), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, l_69)))));
      }
    }
  else
    {
      ATerm u_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              d_69 = ATgetArgument(t, 0);
              e_69 = ATgetArgument(t, 1);
              f_69 = ATgetArgument(t, 2);
              {
                ATerm a_29 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(y_28);
          {
            ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
            t = e_69;
            t = map_1_0(TranslateVarDec_0_0, t);
            p_69 = t;
            t = f_69;
            t = map_1_0(TranslateVarDec_0_0, t);
            q_69 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_13)), q_69), p_69);
            t = concat_0_0(t);
            r_69 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_69), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, r_69)))));
          }
        }
      else
        {
          t = u_28;
          {
            ATerm b_29 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    d_69 = ATgetArgument(t, 0);
                    e_69 = ATgetArgument(t, 1);
                    f_69 = ATgetArgument(t, 2);
                    {
                      ATerm g_29 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_29);
                {
                  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
                  t = e_69;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  l_70 = t;
                  t = f_69;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  m_70 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_13)), m_70), l_70);
                  t = concat_0_0(t);
                  n_70 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_69), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, n_70)))));
                }
              }
            else
              {
                t = b_29;
                {
                  ATerm q_70 = NULL;
                  if(match_cons(t, sym_SDef_3))
                    {
                      d_69 = ATgetArgument(t, 0);
                      e_69 = ATgetArgument(t, 1);
                      {
                        ATerm h_29 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = e_69;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  q_70 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_70, (ATerm) ATinsert(ATempty, term_t_13));
                  t = conc_0_0(t);
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_69), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, q_70)))));
                }
              }
          }
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      ATerm k_29 = ATgetArgument(t, 1);
      ATerm l_29 = ATgetArgument(t, 2);
      ATerm n_29 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm w_70 = NULL,c_71 = NULL,d_71 = NULL;
  c_71 = t;
  t = term_o_29;
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_29, c_71);
  t = n_10(d_71, c_71, t);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, w_70);
  return(t);
}
ATerm k_10 (ATerm e_32, ATerm g_32, ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  t = g_32;
  t = map_1_0(SDefToDeclaration_0_0, t);
  r_70 = t;
  t = g_32;
  t = filter_1_0(v_5, t);
  s_70 = t;
  t = term_x_11;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        t = map_1_0(w_5, t);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATempty;
      }
    t_70 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(CheckATermList(s_70), term_m_30)), r_70), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), (ATerm) ATmakeAppl(sym_Signature_1, e_32)), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_30, (ATerm) ATinsert(ATempty, term_g_30)))), t_70);
    t = concat_0_0(t);
    u_70 = t;
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, u_70);
  }
  return(t);
}
ATerm downup2_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm t)
{
  t = y_99(t);
  {
    ATerm y_5 (ATerm t)
    {
      t = downup2_2_0(y_99, z_99, t);
      return(t);
    }
    t = SRTS_all(y_5, t);
    t = z_99(t);
  }
  return(t);
}
ATerm l_10 (ATerm o_126 (ATerm), ATerm z_70, ATerm x_70, ATerm t)
{
  ATerm e_71 = NULL,g_71 = NULL,h_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
  k_71 = t;
  t = o_126(t);
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_71, z_70, x_70);
  t = y_10(e_71, z_70, x_70, t);
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_71 = NULL;
        t = term_p_30;
        n_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_71, term_p_30);
        t = x_10(e_71, n_71, t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_71 = ATgetFirst((ATermList) t);
        h_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_30;
    l_71 = t;
    t = (ATerm) ATinsert(CheckATermList(h_71), (ATerm) ATinsert(CheckATermList(g_71), z_70));
    m_71 = t;
    t = SSL_table_put(e_71, l_71, m_71);
    t = k_71;
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm o_71 = NULL,w_71 = NULL,x_71 = NULL;
  o_71 = t;
  t = term_r_30;
  w_71 = t;
  t = term_t_30;
  x_71 = t;
  t = term_u_30;
  t = l_10(z_5, w_71, x_71, t);
  t = o_71;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = repeat_1_0(c_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = repeat_1_0(Csimplify_0_0, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
      l_72 = t;
      if(match_cons(t, sym_Specification_1))
        {
          m_72 = ATgetArgument(t, 0);
          t = m_72;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_72 = ATgetFirst((ATermList) t);
              p_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_72;
          if(match_cons(t, sym_Signature_1))
            {
              o_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_72;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_72 = ATgetFirst((ATermList) t);
              k_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_72;
          if(match_cons(t, sym_Strategies_1))
            {
              j_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_72;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_72;
          t = k_10(o_72, j_72, t);
        }
      else
        {
          if(match_cons(t, sym_Signature_1))
            {
              m_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_72;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_72 = ATgetFirst((ATermList) t);
              p_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_72;
          if(match_cons(t, sym_Constructors_1))
            {
              o_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_72;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_72;
          t = j_10(o_72, t);
        }
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateDef_0_0(t);
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
                  t = TranslateStratMatchGuard_0_0(t);
                  ;
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  t = TranslateStrat_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  if(!(match_cons(t, sym_InitCachedTerms_0)))
    _fail(t);
  t = init_cached_terms_0_0(t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  t = init_term_caching_0_0(t);
  t = downup2_2_0(a_6, b_6, t);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(d_6, t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
      }
  }
  return(t);
}
ATerm o_10 (ATerm c_56, ATerm d_56, ATerm t)
{
  ATerm v_72 = NULL;
  t = SSL_fputc(c_56, d_56);
  v_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_72);
  return(t);
}
ATerm p_10 (ATerm q_59, ATerm r_59, ATerm t)
{
  ATerm w_72 = NULL;
  t = SSL_write_term_to_stream_text(q_59, r_59);
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_72);
  return(t);
}
ATerm r_10 (ATerm y_117 (ATerm), ATerm a_510, ATerm u_59, ATerm t)
{
  ATerm x_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_510, term_d_31);
  t = u_10(t);
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_72, u_59);
  t = y_117(t);
  t = fclose_0_0(t);
  t = u_59;
  return(t);
}
ATerm q_10 (ATerm m_59, ATerm n_59, ATerm t)
{
  ATerm y_72 = NULL;
  t = SSL_write_term_to_stream_baf(m_59, n_59);
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_72);
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if(match_cons(e_31, sym_Stream_1))
        {
          f_38 = ATgetArgument(e_31, 0);
        }
      else
        _fail(t);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(f_38, g_38, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,b_39 = NULL,c_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      if(match_cons(f_31, sym_Stream_1))
        {
          b_39 = ATgetArgument(f_31, 0);
        }
      else
        _fail(t);
      c_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(b_39, c_39, t);
  x_38 = t;
  t = term_g_31;
  y_38 = t;
  t = x_38;
  if(match_cons(t, sym_Stream_1))
    {
      z_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, x_38);
  t = o_10(y_38, z_38, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,m_74 = NULL,n_74 = NULL,d_12 = NULL,b_12 = NULL;
  d_73 = t;
  if(match_cons(t, sym__2))
    {
      k_73 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_73);
  j_73 = t;
  t = k_73;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((c_73 != NULL) && (c_73 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                c_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_6, t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = term_j_31;
        c_73 = t;
      }
    m_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_73, l_73);
    b_12 = t;
    t = SSLsetAnnotations(b_12, j_73);
    t = d_73;
    if(match_cons(t, sym__2))
      {
        f_73 = ATgetArgument(t, 0);
        g_73 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_73);
    e_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_73, (ATerm) ATmakeAppl(sym__2, not_null(c_73), g_73));
    d_12 = t;
    t = SSLsetAnnotations(d_12, e_73);
    i_73 = t;
    if(match_cons(t, sym__2))
      {
        m_74 = ATgetArgument(t, 0);
        n_74 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_37 = NULL,w_37 = NULL,y_37 = NULL,z_37 = NULL,c_38 = NULL,g_12 = NULL;
          t = SSLgetAnnotations(i_73);
          r_37 = t;
          t = m_74;
          t = fetch_1_0(j_6, t);
          w_37 = t;
          t = n_74;
          if(match_cons(t, sym__2))
            {
              z_37 = ATgetArgument(t, 0);
              c_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_10(k_6, z_37, c_38, t);
          y_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_37, y_37);
          g_12 = t;
          t = SSLsetAnnotations(g_12, r_37);
          ;
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          {
            ATerm n_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,h_12 = NULL;
            t = SSLgetAnnotations(i_73);
            n_38 = t;
            t = n_74;
            if(match_cons(t, sym__2))
              {
                v_38 = ATgetArgument(t, 0);
                w_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_10(l_6, v_38, w_38, t);
            u_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_74, u_38);
            h_12 = t;
            t = SSLsetAnnotations(h_12, n_38);
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
ATerm apply_strategy_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  u_74 = t;
  t = dtime_0_0(t);
  t = u_74;
  t = y_119(t);
  t_74 = t;
  t = dtime_0_0(t);
  q_74 = t;
  t = t_74;
  if(match_cons(t, sym__2))
    {
      r_74 = ATgetArgument(t, 0);
      s_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_74), (ATerm) ATmakeAppl(sym_Runtime_1, q_74)), s_74);
  return(t);
}
ATerm i_75 (ATerm c_75, ATerm t)
{
  t = SSL_fclose(c_75);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL;
  g_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_75 = ATgetArgument(t, 0);
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_75);
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            t = i_75(g_75, t);
          }
      }
    }
  else
    {
      t = i_75(g_75, t);
    }
  return(t);
}
ATerm s_10 (ATerm s_59, ATerm t)
{
  t = SSL_read_term_from_stream(s_59);
  return(t);
}
ATerm t_10 (ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm j_75 = NULL;
  t = SSL_fopen(e_56, f_56);
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_75);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_75 = NULL;
  t = SSL_stdin_stream();
  k_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_75);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_75 = NULL;
  t = SSL_stdout_stream();
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_75);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_75 = NULL;
  t = SSL_stderr_stream();
  m_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_75);
  return(t);
}
ATerm v_76 (ATerm s_75, ATerm t)
{
  ATerm t_75 = NULL;
  t = SSL_explode_term(s_75);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_31 = ATgetArgument(t, 1);
        if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
          {
            t_75 = ATgetFirst((ATermList) p_31);
            {
              ATerm q_31 = (ATerm) ATgetNext((ATermList) p_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_75;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_75;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_75;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_75;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_76 (ATerm w_75, ATerm x_75, ATerm y_75, ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,e_76 = NULL,p_12 = NULL;
  t = SSLgetAnnotations(y_75);
  b_76 = t;
  t = w_75;
  if(match_cons(t, sym_Path_1))
    {
      e_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_76, x_75);
  p_12 = t;
  t = SSLsetAnnotations(p_12, b_76);
  if(match_cons(t, sym__2))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(z_75, a_76, t);
  return(t);
}
ATerm x_76 (ATerm g_76, ATerm h_76, ATerm i_76, ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,q_76 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(i_76);
  l_76 = t;
  t = SSL_is_string(g_76);
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_76, h_76);
  q_12 = t;
  t = SSLsetAnnotations(q_12, l_76);
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(j_76, k_76, t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  s_76 = t;
  if(match_cons(t, sym__2))
    {
      t_76 = ATgetArgument(t, 0);
      u_76 = ATgetArgument(t, 1);
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_76(s_76, t);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm u_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_76(t_76, u_76, s_76, t);
                  ;
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = u_31;
                  t = x_76(t_76, u_76, s_76, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_76(s_76, t);
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  ATerm d_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_77 = NULL;
      b_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_77, term_j_32);
      t = u_10(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = d_32;
      t = debug_1_0(o_6, t);
      _fail(t);
    }
  z_76 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(a_77, t);
  y_76 = t;
  t = z_76;
  t = fclose_0_0(t);
  t = y_76;
  return(t);
}
ATerm fetch_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm z_77 (ATerm t)
  {
    ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
    w_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_77 = ATgetFirst((ATermList) t);
        y_77 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_39 = NULL,e_40 = NULL,m_13 = NULL;
          t = SSLgetAnnotations(w_77);
          z_39 = t;
          t = x_77;
          t = u_105(t);
          e_40 = t;
          t = (ATerm) ATinsert(CheckATermList(y_77), e_40);
          m_13 = t;
          t = SSLsetAnnotations(m_13, z_39);
          ;
          LocalPopChoice(o_32);
        }
      else
        {
          t = l_32;
          {
            ATerm u_40 = NULL,z_40 = NULL,n_13 = NULL;
            t = SSLgetAnnotations(w_77);
            u_40 = t;
            t = y_77;
            t = z_77(t);
            z_40 = t;
            t = (ATerm) ATinsert(CheckATermList(z_40), x_77);
            n_13 = t;
            t = SSLsetAnnotations(n_13, u_40);
          }
        }
    }
    return(t);
  }
  t = z_77(t);
  return(t);
}
ATerm n_10 (ATerm f_51, ATerm g_51, ATerm t)
{
  t = SSL_strcat(f_51, g_51);
  return(t);
}
ATerm debug_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  c_78 = t;
  t = w_117(t);
  d_78 = t;
  t = term_z_9;
  e_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_78), d_78);
  f_78 = t;
  t = SSL_printnl(e_78, f_78);
  t = c_78;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_78 = NULL;
      m_78 = t;
      t = SSL_is_string(m_78);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_6, t);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
              ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
              s_78 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_78 = ATgetArgument(t, 0);
                  t = t_78;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_78 = ATgetArgument(t, 0);
                      t = t_78;
                      {
                        ATerm w_32 = t;
                        int x_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_32);
                          }
                        else
                          {
                            t = w_32;
                            t = debug_1_0(r_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_78 = NULL,z_78 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_78 = ATgetArgument(t, 0);
                          u_78 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_78;
                      t = eval_config_0_0(t);
                      y_78 = t;
                      t = u_78;
                      t = eval_config_0_0(t);
                      z_78 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_78, z_78);
                      t = n_10(y_78, z_78, t);
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
  ATerm d_79 = NULL,e_79 = NULL;
  d_79 = t;
  t = term_f_11;
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, d_79);
  t = x_10(e_79, d_79, t);
  {
    ATerm z_32 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_79 = NULL,g_79 = NULL;
        t = eval_config_0_0(t);
        f_79 = t;
        t = term_f_11;
        g_79 = t;
        t = SSL_table_put(g_79, d_79, f_79);
        t = f_79;
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = z_32;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  ATerm k_79 = NULL;
  k_79 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_79 = NULL;
        t = term_e_33;
        t = get_config_0_0(t);
        m_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_79, term_f_33);
        t = geq_0_0(t);
        t = k_79;
        t = j_119(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = k_79;
      }
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm p_79 = NULL;
  p_79 = t;
  if(match_string(t, "-k"))
    {
      t = p_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_79;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
  q_79 = t;
  t = SSL_string_to_int(q_79);
  r_79 = t;
  t = term_g_33;
  s_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, r_79);
  t = a_11(s_79, r_79, t);
  t = q_79;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_6, t_6, v_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm u_79 = NULL;
  u_79 = t;
  if(match_string(t, "-S"))
    {
      t = u_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_79;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL;
  t = term_e_33;
  v_79 = t;
  t = term_p_16;
  w_79 = t;
  t = term_i_33;
  t = a_11(v_79, w_79, t);
  t = term_n_33;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  t = SSL_string_to_int(x_79);
  y_79 = t;
  t = term_e_33;
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, y_79);
  t = a_11(z_79, y_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_79);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL;
  t = term_u_33;
  a_80 = t;
  t = term_x_9;
  b_80 = t;
  t = term_v_33;
  t = a_11(a_80, b_80, t);
  t = term_w_33;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, x_6, z_6, t);
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_7, d_7, e_7, t);
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            t = Option_3_0(g_7, h_7, l_7, t);
          }
      }
    }
  return(t);
}
ATerm a_11 (ATerm i_71, ATerm j_71, ATerm t)
{
  ATerm c_80 = NULL;
  t = term_f_11;
  c_80 = t;
  t = SSL_table_put(c_80, i_71, j_71);
  t = (ATerm) ATmakeAppl(sym__3, term_f_11, i_71, j_71);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
      t = term_x_9;
      t = e_0(t);
      h_80 = t;
      t = term_f_34;
      i_80 = t;
      t = term_g_34;
      j_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_34, term_g_34, h_80);
      t = y_10(i_80, j_80, h_80, t);
      _fail(t);
    }
  else
    {
      ATerm m_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_80 = ATgetFirst((ATermList) t);
          g_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_80;
      t = c_0(t);
      t = term_x_9;
      t = d_0(t);
      m_80 = t;
      t = (ATerm) ATinsert(CheckATermList(g_80), m_80);
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm o_80 = NULL;
  o_80 = t;
  if(match_string(t, "-o"))
    {
      t = o_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_80;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL;
  p_80 = t;
  t = term_h_34;
  q_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_34, p_80);
  t = a_11(q_80, p_80, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_80);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_7, n_7, o_7, t);
  return(t);
}
ATerm y_10 (ATerm b_65, ATerm c_65, ATerm a_65, ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_65, c_65);
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_34 = ATgetArgument(t, 0);
            ATerm m_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_65, c_65);
        t = x_10(b_65, c_65, t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = (ATerm) ATempty;
      }
    t_80 = t;
    t = (ATerm) ATinsert(CheckATermList(t_80), a_65);
    u_80 = t;
    t = SSL_table_put(b_65, c_65, u_80);
    t = s_80;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
      t = term_x_9;
      t = n_0(t);
      f_81 = t;
      t = term_f_34;
      g_81 = t;
      t = term_g_34;
      h_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_34, term_g_34, f_81);
      t = y_10(g_81, h_81, f_81, t);
      _fail(t);
    }
  else
    {
      ATerm l_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_81 = ATgetFirst((ATermList) t);
          c_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_81 = ATgetFirst((ATermList) t);
          e_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_81;
      t = k_0(t);
      t = d_81;
      t = l_0(t);
      l_81 = t;
      t = (ATerm) ATinsert(CheckATermList(e_81), l_81);
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm n_81 = NULL;
  n_81 = t;
  if(match_string(t, "-i"))
    {
      t = n_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_81;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  o_81 = t;
  t = term_n_34;
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_34, o_81);
  t = a_11(p_81, o_81, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_81);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_7, r_7, s_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_9;
  t = whoami_0_0(t);
  q_81 = t;
  t = term_z_9;
  s_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_34), q_81);
  t_81 = t;
  t = SSL_printnl(s_81, t_81);
  t = term_w_10;
  r_81 = t;
  t = SSL_exit(r_81);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_10 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_53, r_53);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = SSL_addr(q_53, r_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_111 (ATerm), ATerm o_111 (ATerm), ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_81;
      t = n_111(t);
    }
  else
    {
      ATerm a_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_81 = ATgetFirst((ATermList) t);
          x_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_81;
      t = foldr_2_0(n_111, o_111, t);
      a_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_81, a_82);
      t = o_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm w_41 = NULL,y_41 = NULL;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10(w_41, y_41, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_82 = NULL,p_41 = NULL,r_41 = NULL;
  t = times_0_0(t);
  r_41 = t;
  t = SSL_explode_term(r_41);
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_41;
  t = foldr_2_0(t_7, w_7, t);
  d_82 = t;
  t = SSL_TicksToSeconds(d_82);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
  o_82 = t;
  if(match_cons(t, sym__2))
    {
      p_82 = ATgetArgument(t, 0);
      q_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_82;
        if((p_82 != t))
          {
            _fail(t);
          }
        t = o_82;
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = (ATerm) ATmakeAppl(sym__2, p_82, q_82);
        {
          ATerm z_34 = t;
          int b_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_82, q_82);
              ;
              LocalPopChoice(b_35);
            }
          else
            {
              t = z_34;
              t = SSL_gtr(p_82, q_82);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_82, q_82);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  ATerm u_82 = NULL;
  u_82 = t;
  {
    ATerm c_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_82 = NULL;
        t = term_e_33;
        t = get_config_0_0(t);
        w_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_82, term_w_10);
        t = geq_0_0(t);
        t = u_82;
        t = i_119(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = c_35;
        t = u_82;
      }
  }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,b_83 = NULL,c_83 = NULL;
  t = run_time_0_0(t);
  y_82 = t;
  t = term_x_9;
  t = whoami_0_0(t);
  z_82 = t;
  t = term_z_9;
  b_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_35), y_82), term_i_35), z_82);
  c_83 = t;
  t = SSL_printnl(b_83, c_83);
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_35), y_82), term_i_35), z_82));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  d_83 = t;
  t = SSL_exit(d_83);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL;
  m_83 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_83;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_83 = ATgetArgument(t, 0);
          {
            ATerm s_42 = NULL,q_13 = NULL;
            t = SSLgetAnnotations(m_83);
            s_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_83);
            q_13 = t;
            t = SSLsetAnnotations(q_13, s_42);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_83;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm n_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = n_35;
      t = fetch_1_0(y_7, t);
    }
  t = w_120(t);
  return(t);
}
ATerm map_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm c_84 (ATerm t)
  {
    ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
    z_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_83;
      }
    else
      {
        ATerm n_43 = NULL,t_43 = NULL,x_43 = NULL,u_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_84 = ATgetFirst((ATermList) t);
            b_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_83);
        n_43 = t;
        t = a_84;
        t = k_105(t);
        t_43 = t;
        t = b_84;
        t = c_84(t);
        x_43 = t;
        t = (ATerm) ATinsert(CheckATermList(x_43), t_43);
        u_13 = t;
        t = SSLsetAnnotations(u_13, n_43);
      }
    return(t);
  }
  t = c_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_84 = ATgetFirst((ATermList) t);
      g_84 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_84 = NULL,l_84 = NULL;
        ATerm c_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_84)), not_null(l_84));
          return(t);
        }
        t = g_84;
        t = i_0(t);
        if(((k_84 != NULL) && (k_84 != t)))
          _fail(t);
        else
          k_84 = t;
        t = f_84;
        t = g_0(t);
        if(((l_84 != NULL) && (l_84 != t)))
          _fail(t);
        else
          l_84 = t;
        t = g_84;
        t = reverse_acc_2_0(g_0, c_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_9;
      t = i_0(t);
    }
  return(t);
}
ATerm x_10 (ATerm s_66, ATerm t_66, ATerm t)
{
  t = SSL_table_get(s_66, t_66);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,w_13 = NULL;
  r_84 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_84);
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_84);
  w_13 = t;
  t = SSLsetAnnotations(w_13, p_84);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm t_84 = NULL;
  t_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_84), term_s_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL;
  ATerm t_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = t_35;
      t = fetch_1_0(d_8, t);
    }
  t = term_w_35;
  t = echo_0_0(t);
  t = term_f_34;
  n_84 = t;
  t = term_g_34;
  o_84 = t;
  t = term_y_35;
  t = x_10(n_84, o_84, t);
  t = reverse_acc_2_0(_id, e_8, t);
  t = map_1_0(j_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
  v_84 = t;
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_84;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_36 = ATgetFirst((ATermList) t);
                ATerm c_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_84;
          }
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = (ATerm) ATinsert(ATempty, v_84);
      }
    w_84 = t;
    t = term_j_31;
    x_84 = t;
    t = SSL_printnl(x_84, w_84);
    t = v_84;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL;
  t = term_d_36;
  b_85 = t;
  t = term_x_9;
  c_85 = t;
  t = term_e_36;
  t = a_11(b_85, c_85, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  t = term_d_36;
  f_85 = t;
  t = term_x_9;
  g_85 = t;
  t = term_e_36;
  t = a_11(f_85, g_85, t);
  t = term_h_36;
  d_85 = t;
  t = term_x_9;
  e_85 = t;
  t = term_k_36;
  t = a_11(d_85, e_85, t);
  t = term_l_36;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_8, l_8, m_8, t);
      ;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      t = Option_3_0(n_8, s_8, t_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,z_13 = NULL;
  m_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_85 = ATgetFirst((ATermList) t);
      j_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_85);
  h_85 = t;
  t = i_85;
  t = m_76(t);
  k_85 = t;
  t = j_85;
  t = n_76(t);
  l_85 = t;
  t = (ATerm) ATinsert(CheckATermList(l_85), k_85);
  z_13 = t;
  t = SSLsetAnnotations(z_13, h_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_123 (ATerm), ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,w_85 = NULL,x_85 = NULL,c_14 = NULL;
  r_85 = t;
  {
    ATerm p_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_36;
        t = n_123(t);
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = p_36;
      }
    t = r_85;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_85 = ATgetFirst((ATermList) t);
        u_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_85);
    s_85 = t;
    t = term_t_34;
    x_85 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_34, t_85);
    t = a_11(x_85, t_85, t);
    t = u_85;
    {
      ATerm h_86 (ATerm t)
      {
        ATerm t_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_36 = t;
            int x_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_86 = NULL;
                a_86 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_86;
                ;
                LocalPopChoice(x_36);
              }
            else
              {
                t = w_36;
                t = n_123(t);
                t = Cons_2_0(_id, h_86, t);
              }
            ;
            LocalPopChoice(v_36);
          }
        else
          {
            t = t_36;
            {
              ATerm d_86 = NULL,e_86 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_86 = ATgetFirst((ATermList) t);
                  e_86 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_86), (ATerm) ATmakeAppl(sym_Undefined_1, d_86));
            }
          }
        return(t);
      }
      t = h_86(t);
      w_85 = t;
      t = (ATerm) ATinsert(CheckATermList(w_85), (ATerm) ATmakeAppl(sym_Program_1, t_85));
      c_14 = t;
      t = SSLsetAnnotations(c_14, s_85);
    }
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm t_86 = NULL;
  t_86 = t;
  if(match_string(t, "--help"))
    {
      t = t_86;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_86;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_86;
        }
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL;
  t = term_r_35;
  u_86 = t;
  t = term_x_9;
  v_86 = t;
  t = term_a_37;
  t = a_11(u_86, v_86, t);
  t = term_b_37;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm d_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL;
  o_86 = t;
  t = term_f_34;
  q_86 = t;
  t = term_g_34;
  r_86 = t;
  t = (ATerm) ATempty;
  s_86 = t;
  t = SSL_table_put(q_86, r_86, s_86);
  t = o_86;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm g_37 = t;
      int k_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_123(t);
          ;
          LocalPopChoice(k_37);
        }
      else
        {
          t = g_37;
          {
            ATerm l_37 = t;
            int q_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_8, x_8, c_9, t);
                ;
                LocalPopChoice(q_37);
              }
            else
              {
                t = l_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_8, t);
    {
      ATerm s_37 = t;
      int t_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_87 = NULL;
          c_87 = t;
          {
            ATerm u_37 = t;
            int v_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_44 = NULL;
                t = c_87;
                {
                  ATerm x_37 = t;
                  int h_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_35;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_38);
                    }
                  else
                    {
                      t = x_37;
                      t = fetch_1_0(d_9, t);
                    }
                  t = c_87;
                  t = default_system_usage_0_0(t);
                  t = term_p_16;
                  n_44 = t;
                  t = SSL_exit(n_44);
                }
                ;
                LocalPopChoice(v_37);
              }
            else
              {
                t = u_37;
                {
                  ATerm r_44 = NULL;
                  t = term_d_36;
                  t = get_config_0_0(t);
                  t = c_87;
                  t = default_system_about_0_0(t);
                  t = term_p_16;
                  r_44 = t;
                  t = SSL_exit(r_44);
                }
              }
          }
          ;
          LocalPopChoice(t_37);
        }
      else
        {
          t = s_37;
          {
            ATerm i_38 = t;
            int j_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
                ATerm e_9 (ATerm t)
                {
                  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,g_14 = NULL;
                  i_87 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_87 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_87);
                  g_87 = t;
                  t = h_87;
                  if(((m_86 != NULL) && (m_86 != t)))
                    _fail(t);
                  else
                    m_86 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_87);
                  g_14 = t;
                  t = SSLsetAnnotations(g_14, g_87);
                  return(t);
                }
                t = fetch_1_0(e_9, t);
                t = term_z_9;
                e_87 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_86)), term_m_38);
                f_87 = t;
                t = SSL_printnl(e_87, f_87);
                t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_86)), term_m_38));
                t = default_system_usage_0_0(t);
                t = term_w_10;
                d_87 = t;
                t = SSL_exit(d_87);
                ;
                LocalPopChoice(j_38);
              }
            else
              {
                t = i_38;
              }
          }
        }
      n_86 = t;
      t = term_f_34;
      p_86 = t;
      t = SSL_table_destroy(p_86);
      t = n_86;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  t = parse_options_1_0(y_120, t);
  n_87 = t;
  t = term_p_38;
  q_87 = t;
  t = SSL_table_create(q_87);
  t = term_p_38;
  o_87 = t;
  t = term_q_38;
  p_87 = t;
  t = SSL_table_put(o_87, p_87, n_87);
  t = n_87;
  t = a_121(t);
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_120, t);
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        {
          ATerm g_39 = t;
          int h_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_121(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_39);
            }
          else
            {
              t = g_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = if_verbose2_1_0(s_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  t = term_i_39;
  r_87 = t;
  t = term_x_9;
  s_87 = t;
  t = term_j_39;
  t = a_11(r_87, s_87, t);
  t = term_k_39;
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  t_87 = t;
  t = term_t_34;
  t = get_config_0_0(t);
  u_87 = t;
  t = term_z_9;
  v_87 = t;
  t = (ATerm) ATinsert(ATempty, u_87);
  w_87 = t;
  t = SSL_printnl(v_87, w_87);
  t = t_87;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    ATerm m_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_120(t);
        ;
        LocalPopChoice(s_39);
      }
    else
      {
        t = m_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              {
                ATerm v_39 = t;
                int w_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_39);
                  }
                else
                  {
                    t = v_39;
                    {
                      ATerm x_39 = t;
                      int y_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_9, n_9, o_9, t);
                          ;
                          LocalPopChoice(y_39);
                        }
                      else
                        {
                          t = x_39;
                          {
                            ATerm a_40 = t;
                            int b_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_40);
                              }
                            else
                              {
                                t = a_40;
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
  ATerm h_9 (ATerm t)
  {
    ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
    y_87 = t;
    {
      ATerm c_40 = t;
      int d_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_87 != NULL) && (x_87 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_9, t);
          ;
          LocalPopChoice(d_40);
        }
      else
        {
          t = c_40;
          t = term_h_40;
          x_87 = t;
        }
      t = not_null(x_87);
      t = ReadFromFile_0_0(t);
      z_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_87, z_87);
      t = apply_strategy_1_0(h_120, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_9, j_120, g_9, h_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(compile_0_0, s2c_options_0_0, default_usage_0_0, t);
  return(t);
}
