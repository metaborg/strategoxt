#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Match_2;
Symbol sym_Include_1;
Symbol sym_Signature_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_SeqVar_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_GuardedLChoice_3;
Symbol sym_LGChoice_2;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
Symbol sym_OpDecl_2;
Symbol sym_Constructors_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Conc_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
Symbol sym_Hashtable_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_FunType_2;
Symbol sym_ParamList_1;
Symbol sym_TypeName_2;
Symbol sym_TypeName_2;
Symbol sym_ParamDecl_2;
Symbol sym_DeclSpec_5;
Symbol sym_TypeSpec_3;
Symbol sym_AssignInit_1;
Symbol sym_DeclInit_2;
Symbol sym_Void_0;
Symbol sym_Int_0;
Symbol sym_Static_0;
Symbol sym_Return_1;
Symbol sym_Continue_0;
Symbol sym_Goto_1;
Symbol sym_IfElse_3;
Symbol sym_If_2;
Symbol sym_Stat_1;
Symbol sym_Compound_2;
Symbol sym_Case_2;
Symbol sym_Label_2;
Symbol sym_EmptyExp_0;
Symbol sym_AssignEq_0;
Symbol sym_Assign_3;
Symbol sym_IfExp_3;
Symbol sym_LOr_2;
Symbol sym_LAnd_2;
Symbol sym_NotEqual_2;
Symbol sym_Equal_2;
Symbol sym_TypeCast_2;
Symbol sym_Negation_1;
Symbol sym_Address_1;
Symbol sym_FunCall_2;
Symbol sym_Declaration2_2;
Symbol sym_FunDef_3;
Symbol sym_TranslationUnit_1;
Symbol sym_IdDecl_3;
Symbol sym_TypeId_1;
Symbol sym_Id_1;
Symbol sym_StringLit_1;
Symbol sym_FloatConst_1;
Symbol sym_IntConst_1;
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
static void init_module_constructors (void)
{
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_SeqVar_1 = ATmakeSymbol("SeqVar", 1, ATfalse);
  ATprotectSymbol(sym_SeqVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
  ATprotectSymbol(sym_AssignInit_1);
  sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
  ATprotectSymbol(sym_DeclInit_2);
  sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
  ATprotectSymbol(sym_Void_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
  ATprotectSymbol(sym_Static_0);
  sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
  ATprotectSymbol(sym_Return_1);
  sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
  ATprotectSymbol(sym_Continue_0);
  sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
  ATprotectSymbol(sym_Goto_1);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
  sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
  ATprotectSymbol(sym_AssignEq_0);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
  ATprotectSymbol(sym_Negation_1);
  sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
  ATprotectSymbol(sym_Address_1);
  sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
  ATprotectSymbol(sym_FunCall_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
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
}
ATerm term_f_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_m_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_e_36;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_q_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
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
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_f_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
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
ATerm term_l_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
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
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_10, (ATerm) ATempty);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Id_1, term_u_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Id_1, term_e_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Some_1, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_10, term_p_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Id_1, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_11, (ATerm) ATempty);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_w_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Id_1, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Return_1, term_g_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Id_1, term_e_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATempty);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_10, term_n_11);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Id_1, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_pop_seqvar", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Id_1, term_x_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Id_1, term_e_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_f_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, term_s_14);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Id_1, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Id_1, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Id_1, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_17, term_n_11);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Id_1, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Id_1, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_17, (ATerm) ATempty);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_17, term_n_11);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_18);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_u_14);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_g_11);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Id_1, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_p_19, term_s_15);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_v_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATempty);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_x_19, term_s_15);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_19, (ATerm) ATempty);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_1, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Id_1, term_e_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_20, (ATerm) ATempty);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_20, term_n_11);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Id_1, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Id_1, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Id_1, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Id_1, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_21);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_21, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_21, term_n_11);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATappend", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Id_1, term_e_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Id_1, term_t_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, term_g_11);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_q_22, (ATerm)ATempty, term_c_10, (ATerm) ATempty);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Id_1, term_i_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Id_1, term_k_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_25, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_j_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_b_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_26, (ATerm) ATempty);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Id_1, term_f_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_26, term_n_11);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Include_1, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Include_1, term_m_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_q_22, (ATerm)ATempty, term_d_26, (ATerm) ATempty);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Id_1, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Id_1, term_v_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Op_2, term_d_27, (ATerm) ATempty);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_n_27, term_o_16);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_o_27);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_t_28);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_k_29);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_e_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_l_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_k_32);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_b_14);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_14);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_w_31);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_w_31);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_t_32);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_w_31);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_w_31);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_w_31);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym__3, term_j_32, term_k_32, (ATerm) ATempty);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_k_36);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_k_35);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_w_31);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm h_3 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm w_159 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_127 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm r_9 (ATerm v_30, ATerm x_30, ATerm w_30, ATerm t);
static ATerm f_10 (ATerm m_63, ATerm n_63, ATerm t);
static ATerm x_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm t_9 (ATerm h_30, ATerm k_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm u_9 (ATerm t_35, ATerm s_35, ATerm t);
static ATerm v_9 (ATerm u_200, ATerm p_35, ATerm r_35, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm u_53 (ATerm d_28, ATerm i_28, ATerm j_28, ATerm k_28, ATerm t);
static ATerm v_53 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t);
static ATerm x_53 (ATerm l_30, ATerm o_30, ATerm r_30, ATerm t);
static ATerm y_53 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm c_32, ATerm t);
static ATerm z_53 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm g_38, ATerm t);
static ATerm a_54 (ATerm j_39, ATerm o_39, ATerm p_39, ATerm u_39, ATerm t);
static ATerm b_54 (ATerm l_40, ATerm m_40, ATerm p_40, ATerm t_40, ATerm t);
static ATerm e_54 (ATerm e_41, ATerm g_41, ATerm h_41, ATerm l_41, ATerm m_41, ATerm n_41, ATerm o_41, ATerm p_41, ATerm t);
static ATerm f_54 (ATerm a_43, ATerm b_43, ATerm c_43, ATerm j_43, ATerm k_43, ATerm l_43, ATerm t);
static ATerm g_54 (ATerm t_43, ATerm u_43, ATerm v_43, ATerm a_44, ATerm d_44, ATerm g_44, ATerm t);
static ATerm h_54 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm TranslateStrat_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm j_144 (ATerm), ATerm t);
static ATerm b_10 (ATerm f_1 (ATerm), ATerm l_1 (ATerm), ATerm h_1, ATerm m_1, ATerm e_1, ATerm t);
ATerm thread_map_1_0 (ATerm k_141 (ATerm), ATerm t);
static ATerm m_61 (ATerm o_58, ATerm p_58, ATerm q_58, ATerm r_58, ATerm s_58, ATerm t);
static ATerm n_61 (ATerm p_59, ATerm q_59, ATerm r_59, ATerm s_59, ATerm t);
static ATerm o_61 (ATerm x_59, ATerm y_59, ATerm z_59, ATerm a_60, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_127 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm translate_body_0_0 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm x_141 (ATerm), ATerm t);
ATerm TranslateType_0_0 (ATerm t);
ATerm TranslateVarDec_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm is_local_function_0_0 (ATerm t);
ATerm SDefToDeclaration_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm g_10 (ATerm y_39, ATerm w_39, ATerm t);
ATerm Cify_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm g_144 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm x_140 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm h_10 (ATerm l_39, ATerm k_39, ATerm t);
static ATerm x_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_10 (ATerm f_40, ATerm i_40, ATerm t);
static ATerm j_10 (ATerm g_160 (ATerm), ATerm v_84, ATerm t_84, ATerm t);
static ATerm f_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm l_10 (ATerm s_57, ATerm t_57, ATerm t);
static ATerm m_10 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm o_10 (ATerm m_133 (ATerm), ATerm h_277, ATerm f_42, ATerm t);
static ATerm n_10 (ATerm v_41, ATerm w_41, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_1_0 (ATerm i_152 (ATerm), ATerm t);
static ATerm g_73 (ATerm a_73, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_10 (ATerm b_42, ATerm t);
static ATerm q_10 (ATerm y_55, ATerm z_55, ATerm t);
static ATerm r_10 (ATerm u_57, ATerm v_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_74 (ATerm q_73, ATerm t);
static ATerm s_74 (ATerm u_73, ATerm v_73, ATerm w_73, ATerm t);
static ATerm t_74 (ATerm e_74, ATerm f_74, ATerm g_74, ATerm t);
static ATerm s_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_152 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_133 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm t_0 (ATerm), ATerm w_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm v_154 (ATerm), ATerm w_154 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_11 (ATerm h_95, ATerm i_95, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm l_134 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_80 (ATerm y_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_10 (ATerm o_95, ATerm p_95, ATerm t);
static ATerm z_10 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_10 (ATerm k_61, ATerm l_61, ATerm t);
ATerm foldr_2_0 (ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_150 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_11 (ATerm m_67, ATerm n_67, ATerm o_67, ATerm t);
ATerm lookup_table_0_1 (ATerm n_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_67, ATerm v_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_10 (ATerm r_67, ATerm s_67, ATerm t);
static ATerm w_10 (ATerm w_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_134 (ATerm), ATerm t);
static ATerm d_11 (ATerm p_67, ATerm q_67, ATerm t);
static ATerm y_10 (ATerm u_64, ATerm v_64, ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_154 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_3_0 (ATerm n_154 (ATerm), ATerm o_154 (ATerm), ATerm p_154 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_152 (ATerm), ATerm d_152 (ATerm), ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm h_3 (ATerm), ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,s_0 = NULL,b_1 = NULL,g_0 = NULL;
      r_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          t_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_1);
      s_0 = t;
      t = t_1;
      t = listbu1_1_0(h_3, t);
      b_1 = t;
      t = (ATerm) ATinsert(CheckATermList(b_1), s_1);
      g_0 = t;
      t = SSLsetAnnotations(g_0, s_0);
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_3(t);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
          }
      }
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      t = h_3(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_8 = ATgetFirst((ATermList) t);
      if(match_cons(m_8, sym_Compound_2))
        {
          ATerm n_8 = ATgetArgument(m_8, 0);
          if(((ATgetType(n_8) != AT_LIST) || !(ATisEmpty(n_8))))
            _fail(t);
          h_4 = ATgetArgument(m_8, 1);
        }
      else
        _fail(t);
      i_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
  t = conc_0_0(t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_8 = ATgetFirst((ATermList) t);
      if(match_cons(p_8, sym_Compound_2))
        {
          ATerm s_8 = ATgetArgument(p_8, 0);
          if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
            _fail(t);
          d_5 = ATgetArgument(p_8, 1);
        }
      else
        _fail(t);
      e_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_8 = ATgetFirst((ATermList) t);
      if(match_cons(t_8, sym_Compound_2))
        {
          ATerm u_8 = ATgetArgument(t_8, 0);
          if(((ATgetType(u_8) != AT_LIST) || !(ATisEmpty(u_8))))
            _fail(t);
          i_5 = ATgetArgument(t_8, 1);
        }
      else
        _fail(t);
      j_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_5, j_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_8 = ATgetFirst((ATermList) t);
      if(match_cons(v_8, sym_Compound_2))
        {
          ATerm x_8 = ATgetArgument(v_8, 0);
          if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
            _fail(t);
          w_5 = ATgetArgument(v_8, 1);
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
static ATerm u_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_9 = ATgetFirst((ATermList) t);
      if(match_cons(a_9, sym_Compound_2))
        {
          ATerm b_9 = ATgetArgument(a_9, 0);
          if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
            _fail(t);
          d_6 = ATgetArgument(a_9, 1);
        }
      else
        _fail(t);
      e_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_6, e_6);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
      y_2 = ATgetArgument(t, 2);
      t = y_2;
      if(match_cons(t, sym_Compound_2))
        {
          z_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          t = a_3;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = z_2;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = f_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      g_3 = ATgetArgument(t, 0);
                      k_3 = ATgetArgument(t, 1);
                      t = k_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = g_3;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, e_3), y_2);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, e_3, f_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, e_3, f_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, e_3, f_3);
                    }
                }
              else
                {
                  t = f_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      g_3 = ATgetArgument(t, 0);
                      k_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, e_3), y_2);
                }
            }
          else
            {
              t = f_3;
              if(match_cons(t, sym_Compound_2))
                {
                  g_3 = ATgetArgument(t, 0);
                  k_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, e_3), y_2);
            }
        }
      else
        {
          t = f_3;
          if(match_cons(t, sym_Compound_2))
            {
              g_3 = ATgetArgument(t, 0);
              k_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, e_3), y_2);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_3 = ATgetFirst((ATermList) t);
          f_3 = (ATerm) ATgetNext((ATermList) t);
          t = e_3;
          if(match_cons(t, sym_Stat_1))
            {
              b_3 = ATgetArgument(t, 0);
              t = b_3;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = f_3;
            }
          else
            {
              if(match_cons(t, sym_Compound_2))
                {
                  b_3 = ATgetArgument(t, 0);
                  c_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, c_3, f_3);
              t = conc_0_0(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              e_3 = ATgetArgument(t, 0);
              f_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_3 = ATgetFirst((ATermList) t);
              k_3 = (ATerm) ATgetNext((ATermList) t);
              t = k_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      i_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                      {
                        ATerm c_9 = t;
                        int e_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_4 = NULL;
                            t = f_3;
                            t = listbu1_1_0(a_0, t);
                            g_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, g_4);
                            LocalPopChoice(e_9);
                          }
                        else
                          {
                            t = c_9;
                            {
                              ATerm f_9 = t;
                              int g_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                                  t = conc_0_0(t);
                                  m_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, m_4, j_3);
                                  LocalPopChoice(g_9);
                                }
                              else
                                {
                                  t = f_9;
                                  {
                                    ATerm x_4 = NULL,y_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                                    t = conc_0_0(t);
                                    x_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
                                    t = conc_0_0(t);
                                    y_4 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, x_4, y_4);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_5 = NULL;
                      t = f_3;
                      t = listbu1_1_0(c_0, t);
                      c_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, c_5);
                    }
                }
              else
                {
                  t = g_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      i_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                      {
                        ATerm i_9 = t;
                        int m_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_5 = NULL;
                            t = f_3;
                            t = listbu1_1_0(i_0, t);
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, h_5);
                            LocalPopChoice(m_9);
                          }
                        else
                          {
                            t = i_9;
                            {
                              ATerm o_5 = NULL,r_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                              t = conc_0_0(t);
                              o_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
                              t = conc_0_0(t);
                              r_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, o_5, r_5);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_5 = NULL;
                      t = f_3;
                      t = listbu1_1_0(n_0, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, v_5);
                    }
                }
            }
          else
            {
              ATerm c_6 = NULL;
              t = f_3;
              t = listbu1_1_0(u_0, t);
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, c_6);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm o_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_126(t);
        t = f_6(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = o_9;
        t = k_126(t);
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm w_159 (ATerm), ATerm t)
{
  static ATerm i_7 (ATerm t);
  static ATerm i_7 (ATerm t)
  {
    t = w_159(t);
    {
      ATerm w_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_6 = NULL,c_7 = NULL,d_7 = NULL,b_2 = NULL,e_2 = NULL,f_2 = NULL,r_0 = NULL;
          z_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_7 = ATgetFirst((ATermList) t);
              d_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_6);
          b_2 = t;
          t = c_7;
          t = i_7(t);
          e_2 = t;
          t = d_7;
          t = i_7(t);
          f_2 = t;
          t = (ATerm) ATinsert(CheckATermList(f_2), e_2);
          r_0 = t;
          t = SSLsetAnnotations(r_0, b_2);
          LocalPopChoice(y_9);
        }
      else
        {
          t = w_9;
          t = SRTS_all(i_7, t);
        }
    }
    t = w_159(t);
    return(t);
  }
  t = i_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_127 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(k_127, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = k_127(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_e_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_x_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_r_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_12, (ATerm) ATinsert(ATempty, term_g_11))))), term_y_11)));
  return(t);
}
static ATerm r_9 (ATerm v_30, ATerm x_30, ATerm w_30, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, x_30)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_30), term_z_11, w_30)));
  return(t);
}
static ATerm f_10 (ATerm m_63, ATerm n_63, ATerm t)
{
  ATerm o_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_63, n_63);
  t = y_10(m_63, n_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_7 = ATgetFirst((ATermList) t);
      {
        ATerm l_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_7;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL,z_0 = NULL;
        t = SSLgetAnnotations(i_11);
        n_2 = t;
        t = j_11;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = k_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_11, k_11);
        z_0 = t;
        t = SSLsetAnnotations(z_0, n_2);
        LocalPopChoice(q_12);
      }
    else
      {
        t = m_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_2 = NULL,p_4 = NULL,q_4 = NULL,v_4 = NULL,w_4 = NULL,b_5 = NULL,i_1 = NULL,g_1 = NULL;
              t = SSLgetAnnotations(i_11);
              x_2 = t;
              t = j_11;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = k_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_4 = ATgetFirst((ATermList) t);
                  v_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_11);
              p_4 = t;
              t = v_4;
              t = Cons_2_0(proper_list_0_0, x_0, t);
              w_4 = t;
              t = (ATerm) ATinsert(CheckATermList(w_4), q_4);
              g_1 = t;
              t = SSLsetAnnotations(g_1, p_4);
              b_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_11, b_5);
              i_1 = t;
              t = SSLsetAnnotations(i_1, x_2);
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              {
                ATerm i_6 = NULL,s_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(i_11);
                i_6 = t;
                t = j_11;
                {
                  ATerm v_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm v_6 = NULL;
                      v_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = v_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = v_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = v_12;
                    }
                }
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, s_6, k_11);
                k_1 = t;
                t = SSLsetAnnotations(k_1, i_6);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm t_9 (ATerm h_30, ATerm k_30, ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,o_12 = NULL,c_14 = NULL,f_14 = NULL;
  t = h_30;
  if(match_cons(t, sym_Op_2))
    {
      f_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm f_7 = NULL,j_7 = NULL,k_6 = NULL;
        t = SSLgetAnnotations(h_30);
        f_7 = t;
        t = c_14;
        t = map_1_0(Cache_0_0, t);
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, f_14, j_7);
        k_6 = t;
        t = SSLsetAnnotations(k_6, f_7);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          f_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          {
            ATerm u_7 = NULL,x_7 = NULL,y_7 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(h_30);
            u_7 = t;
            t = f_14;
            t = Cache_0_0(t);
            x_7 = t;
            t = c_14;
            t = Cache_0_0(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, x_7, y_7);
            l_6 = t;
            t = SSLsetAnnotations(l_6, u_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_14 = ATgetArgument(t, 0);
              {
                ATerm i_8 = NULL,n_6 = NULL;
                t = SSLgetAnnotations(h_30);
                i_8 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_14);
                n_6 = t;
                t = SSLsetAnnotations(n_6, i_8);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  f_14 = ATgetArgument(t, 0);
                  {
                    ATerm o_8 = NULL,o_6 = NULL;
                    t = SSLgetAnnotations(h_30);
                    o_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, f_14);
                    o_6 = t;
                    t = SSLsetAnnotations(o_6, o_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      f_14 = ATgetArgument(t, 0);
                      {
                        ATerm z_8 = NULL,p_6 = NULL;
                        t = SSLgetAnnotations(h_30);
                        z_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, f_14);
                        p_6 = t;
                        t = SSLsetAnnotations(p_6, z_8);
                      }
                    }
                  else
                    {
                      ATerm d_9 = NULL,q_6 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          f_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(h_30);
                      d_9 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, f_14);
                      q_6 = t;
                      t = SSLsetAnnotations(q_6, d_9);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  g_12 = t;
  t = term_y_12;
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, g_12);
  t = q_10(o_12, g_12, t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_30, (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12));
  t = j_10(c_1, h_30, n_12, t);
  t = h_12;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_14 = NULL,j_9 = NULL,k_9 = NULL;
        t = (ATerm) ATempty;
        j_9 = t;
        t = term_x_12;
        k_9 = t;
        t = term_e_13;
        t = f_10(k_9, j_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_13) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_14;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATempty;
      }
  }
  i_12 = t;
  t = (ATerm) ATempty;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, g_12, h_12, k_30)));
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, g_12, h_12, k_30))));
  t = j_10(j_1, j_12, k_12, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, h_12);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL,m_11 = NULL;
        t = term_w_12;
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
        t = f_10(m_11, y_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            d_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, d_10);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        {
          ATerm s_11 = NULL,v_11 = NULL;
          t = term_w_12;
          v_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
          t = f_10(v_11, y_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm l_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              s_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm a_16 = NULL,a_12 = NULL;
        a_16 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                  }
              }
            }
        }
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_16, a_12);
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm u_13 = ATgetArgument(t, 0);
                  ATerm v_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_16, a_12);
              t = t_9(a_16, a_12, t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              {
                ATerm t_12 = NULL,u_12 = NULL;
                u_12 = t;
                t = SSL_explode_term(u_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_13 = ATgetArgument(t, 1);
                      if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
                        {
                          ATerm y_13 = ATgetFirst((ATermList) x_13);
                          ATerm z_13 = (ATerm) ATgetNext((ATermList) x_13);
                          if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
                            {
                              t_12 = ATgetFirst((ATermList) z_13);
                              {
                                ATerm a_14 = (ATerm) ATgetNext((ATermList) z_13);
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
                t = t_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm u_9 (ATerm t_35, ATerm s_35, ATerm t)
{
  ATerm e_16 = NULL;
  t = new_0_0(t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_16), term_n_11), (ATerm) ATmakeAppl(sym_AssignInit_1, s_35)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, t_35, (ATerm) ATmakeAppl(sym_Id_1, e_16))));
  return(t);
}
static ATerm v_9 (ATerm u_200, ATerm p_35, ATerm r_35, ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  t = SSLgetAnnotations(u_200);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_35);
  i_16 = t;
  t = SSLsetAnnotations(i_16, g_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, h_16, r_35);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(i_18, j_18, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm v_15 = NULL,y_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_15 = ATgetFirst((ATermList) t);
      y_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(y_15), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(y_15), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_15), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_15), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      z_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATinsert(ATempty, x_17), z_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          z_17 = ATgetArgument(t, 0);
          x_17 = ATgetArgument(t, 1);
          {
            ATerm h_18 = NULL,c_13 = NULL,d_13 = NULL,g_13 = NULL;
            t = x_17;
            t = foldr_3_0(n_1, o_1, p_1, t);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_17, h_18);
            d_13 = t;
            t = term_n_14;
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, z_17, h_18));
            t = f_10(g_13, d_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm o_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("o_0", 0, ATtrue)))
                  _fail(t);
                c_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(CheckATermList(x_17), (ATerm) ATmakeAppl(sym_Id_1, c_13))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              z_17 = ATgetArgument(t, 0);
              t = z_17;
            }
          else
            {
              if(match_cons(t, sym_SeqVar_1))
                {
                  z_17 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_IfExp_3, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, z_17), term_s_14), (ATerm) ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, z_17), term_u_14)), (ATerm)ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17))), (ATerm) ATmakeAppl(sym_FunCall_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, z_17)))));
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_17 = ATgetArgument(t, 0);
                      {
                        ATerm a_15 = t;
                        int b_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSLgetAnnotations(y_17);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm c_15 = ATgetFirst((ATermList) t);
                                if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                                  _fail(t);
                                {
                                  ATerm d_15 = (ATerm) ATgetNext((ATermList) t);
                                  if(((ATgetType(d_15) != AT_LIST) || !(ATisEmpty(d_15))))
                                    _fail(t);
                                }
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17)));
                            LocalPopChoice(b_15);
                          }
                        else
                          {
                            t = a_15;
                            {
                              ATerm g_15 = t;
                              int h_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SSLgetAnnotations(y_17);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm i_15 = ATgetFirst((ATermList) t);
                                      if((ATgetSymbol((ATermAppl) i_15) != ATmakeSymbol("unbound", 0, ATtrue)))
                                        _fail(t);
                                      {
                                        ATerm j_15 = (ATerm) ATgetNext((ATermList) t);
                                        if(((ATgetType(j_15) != AT_LIST) || !(ATisEmpty(j_15))))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17)));
                                  LocalPopChoice(h_15);
                                }
                              else
                                {
                                  t = g_15;
                                  {
                                    ATerm k_15 = t;
                                    int l_15 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSLgetAnnotations(y_17);
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17)));
                                        LocalPopChoice(l_15);
                                      }
                                    else
                                      {
                                        t = k_15;
                                        t = SSLgetAnnotations(y_17);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm m_15 = ATgetFirst((ATermList) t);
                                            if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("bound", 0, ATtrue)))
                                              _fail(t);
                                            {
                                              ATerm o_15 = (ATerm) ATgetNext((ATermList) t);
                                              if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
                                                _fail(t);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Id_1, z_17);
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
                          z_17 = ATgetArgument(t, 0);
                          {
                            ATerm t_18 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL,n_15 = NULL;
                            t = SSL_explode_string(z_17);
                            t = escape_chars_1_0(q_1, t);
                            n_15 = t;
                            t = SSL_implode_string(n_15);
                            n_16 = t;
                            t = SSL_explode_string(n_16);
                            p_16 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_16), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                            t = conc_0_0(t);
                            m_16 = t;
                            t = SSL_implode_string(m_16);
                            t_18 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_s_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, t_18)))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Real_1))
                            {
                              z_17 = ATgetArgument(t, 0);
                              {
                                ATerm t_16 = NULL;
                                t = SSL_real_to_string(z_17);
                                t_16 = t;
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, t_16))));
                              }
                            }
                          else
                            {
                              ATerm d_18 = NULL;
                              if(match_cons(t, sym_Int_1))
                                {
                                  z_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSL_int_to_string(z_17);
                              d_18 = t;
                              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_18))));
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,u_23 = NULL,x_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_23;
  if(match_string(t, "Cons"))
    {
      ATerm d_23 = NULL;
      t = x_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_23 = ATgetFirst((ATermList) t);
          l_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_23 = ATgetFirst((ATermList) t);
          p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_23;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,r_26 = NULL,s_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                p_24 = ATgetArgument(t, 0);
                w_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_24;
            if(match_cons(t, sym_TypeName_2))
              {
                q_24 = ATgetArgument(t, 0);
                v_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                r_24 = ATgetArgument(t, 0);
                s_24 = ATgetArgument(t, 1);
                u_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = r_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_24;
            if(match_cons(t, sym_TypeId_1))
              {
                t_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = u_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = w_24;
            if(match_cons(t, sym_Id_1))
              {
                r_26 = ATgetArgument(t, 0);
                {
                  ATerm x_26 = NULL,s_7 = NULL;
                  t = SSLgetAnnotations(w_24);
                  x_26 = t;
                  t = r_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, r_26);
                  s_7 = t;
                  t = SSLsetAnnotations(s_7, x_26);
                }
              }
            else
              {
                ATerm c_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,c_8 = NULL,b_8 = NULL,t_7 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    r_26 = ATgetArgument(t, 0);
                    s_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_24);
                c_27 = t;
                t = r_26;
                if(match_cons(t, sym_Id_1))
                  {
                    l_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_26);
                k_27 = t;
                t = l_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, l_27);
                t_7 = t;
                t = SSLsetAnnotations(t_7, k_27);
                m_27 = t;
                t = s_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_27 = ATgetFirst((ATermList) t);
                    h_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_26);
                f_27 = t;
                t = h_27;
                t = Cons_2_0(_id, u_1, t);
                i_27 = t;
                t = (ATerm) ATinsert(CheckATermList(i_27), g_27);
                b_8 = t;
                t = SSLsetAnnotations(b_8, f_27);
                j_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, m_27, j_27);
                c_8 = t;
                t = SSLsetAnnotations(c_8, c_27);
              }
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, o_23));
          }
      }
      d_23 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_16, (ATerm) ATinsert(ATinsert(ATempty, k_23), d_23)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = x_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_16;
    }
  return(t);
}
static ATerm u_53 (ATerm d_28, ATerm i_28, ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm u_28 = NULL,w_28 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = d_28;
  {
    ATerm q_16 = t;
    if((PushChoice() == 0))
      {
        ATerm x_28 = NULL;
        x_28 = t;
        if(match_string(t, "Nil"))
          {
            t = x_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = x_28;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_16;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, i_28, term_b_14);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL;
      if(match_cons(t, sym__2))
        {
          z_28 = ATgetArgument(t, 0);
          a_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_29);
      d_29 = t;
      t = z_28;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_29 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28));
                o_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28)));
                t = v_9(z_28, g_29, o_29, t);
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                {
                  ATerm q_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28));
                  q_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28)));
                  t = u_9(z_28, q_29, t);
                }
              }
          }
        }
      else
        {
          ATerm r_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28));
          r_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28)));
          t = u_9(z_28, r_29, t);
        }
      b_29 = t;
      t = term_d_14;
      f_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, term_d_14);
      t = t_10(a_29, f_29, t);
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
      return(t);
    }
    t = thread_map_1_0(v_1, t);
  }
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      {
        ATerm w_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_28;
  t = foldr_3_0(w_1, x_1, y_1, t);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, w_28);
  s_27 = t;
  t = term_n_14;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, d_28, w_28));
  t = f_10(t_27, s_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, r_27)), j_28)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, u_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
  return(t);
}
static ATerm v_53 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm e_30 = NULL;
  t = SSL_real_to_string(v_29);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, w_29)), term_d_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_17, w_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, e_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
  return(t);
}
static ATerm x_53 (ATerm l_30, ATerm o_30, ATerm r_30, ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_int_to_string(l_30);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, o_30)), term_l_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_17, o_30))), (ATerm) ATmakeAppl(sym_IntConst_1, u_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
  return(t);
}
static ATerm y_53 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm c_32, ATerm t)
{
  t = SSLgetAnnotations(p_31);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, q_31), term_u_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, q_31), r_31)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, r_31))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_31), term_z_11, r_31)));
  return(t);
}
static ATerm z_53 (ATerm n_34, ATerm o_34, ATerm p_34, ATerm g_38, ATerm t)
{
  t = SSLgetAnnotations(n_34);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, o_34), term_u_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, o_34), p_34)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, p_34))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_34), term_z_11, p_34)));
  return(t);
}
static ATerm a_54 (ATerm j_39, ATerm o_39, ATerm p_39, ATerm u_39, ATerm t)
{
  t = SSLgetAnnotations(j_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, o_39), p_39), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, p_39))))));
  return(t);
}
static ATerm b_54 (ATerm l_40, ATerm m_40, ATerm p_40, ATerm t_40, ATerm t)
{
  t = SSLgetAnnotations(l_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_18) != AT_LIST) || !(ATisEmpty(a_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_40), term_z_11, p_40));
  return(t);
}
static ATerm e_54 (ATerm e_41, ATerm g_41, ATerm h_41, ATerm l_41, ATerm m_41, ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm h_42 = NULL,q_42 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t = g_41;
  {
    ATerm b_18 = t;
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
        t = b_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, l_41, term_b_14);
  {
    static ATerm z_1 (ATerm t);
    static ATerm z_1 (ATerm t)
    {
      ATerm s_42 = NULL,t_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm c_18 = ATgetArgument(t, 0);
          if(match_cons(c_18, sym_Var_1))
            {
              s_42 = ATgetArgument(c_18, 0);
            }
          else
            _fail(t);
          t_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_42);
      w_42 = t;
      t = term_d_14;
      y_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_42, term_d_14);
      t = t_10(t_42, y_42, t);
      x_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_42), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, w_42)), (ATerm) ATmakeAppl(sym_Id_1, e_41))))), x_42);
      return(t);
    }
    t = thread_map_1_0(z_1, t);
  }
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      {
        ATerm e_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_41, h_41);
  x_27 = t;
  t = term_n_14;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, g_41, h_41));
  t = f_10(y_27, x_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_42, (ATerm) ATinsert(ATempty, m_41));
  t = conc_0_0(t);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_27)), (ATerm) ATmakeAppl(sym_Id_1, e_41))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_41), n_41, o_41))));
  return(t);
}
static ATerm f_54 (ATerm a_43, ATerm b_43, ATerm c_43, ATerm j_43, ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_real_to_string(b_43);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, s_43)), (ATerm) ATmakeAppl(sym_Id_1, a_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_43), j_43, k_43))));
  return(t);
}
static ATerm g_54 (ATerm t_43, ATerm u_43, ATerm v_43, ATerm a_44, ATerm d_44, ATerm g_44, ATerm t)
{
  ATerm o_44 = NULL;
  t = SSL_int_to_string(u_43);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, o_44)), (ATerm) ATmakeAppl(sym_Id_1, t_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, t_43), a_44, d_44))));
  return(t);
}
static ATerm h_54 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t)
{
  t = q_44;
  {
    ATerm n_18 = t;
    if((PushChoice() == 0))
      {
        ATerm a_45 = NULL,d_45 = NULL,e_45 = NULL,l_8 = NULL;
        e_45 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_45);
        a_45 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_45);
        l_8 = t;
        t = SSLsetAnnotations(l_8, a_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_44)));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  if(match_cons(t, sym__2))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(s_29, t_29, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(match_cons(o_18, sym_SVar_1))
        {
          c_47 = ATgetArgument(o_18, 0);
        }
      else
        _fail(t);
      {
        ATerm p_18 = ATgetArgument(t, 1);
        if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
          _fail(t);
      }
      {
        ATerm q_18 = ATgetArgument(t, 2);
        if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, c_47);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = topdown_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
          }
      }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm w_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(match_cons(y_18, sym_SVar_1))
        {
          w_47 = ATgetArgument(y_18, 0);
        }
      else
        _fail(t);
      {
        ATerm z_18 = ATgetArgument(t, 1);
        if(((ATgetType(z_18) != AT_LIST) || !(ATisEmpty(z_18))))
          _fail(t);
      }
      {
        ATerm a_19 = ATgetArgument(t, 2);
        if(((ATgetType(a_19) != AT_LIST) || !(ATisEmpty(a_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, w_47);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = topdown_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(k_2, t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
          }
      }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_49), term_n_11), term_h_19);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_50;
  if(match_cons(t, sym_Var_1))
    {
      i_50 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_50;
            t = v_9(k_50, i_50, l_50, t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = j_50;
            t = u_9(k_50, l_50, t);
          }
      }
    }
  else
    {
      t = j_50;
      t = u_9(k_50, l_50, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_28;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(g_28), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_28), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_28), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_28), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm p_29 = NULL,u_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_29 = ATgetFirst((ATermList) t);
      u_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_29), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_29), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_29), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_29), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,v_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  j_46 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
      {
        ATerm n_46 = NULL,o_46 = NULL;
        t = k_46;
        t = map_1_0(SDefToDeclaration_0_0, t);
        n_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_46, k_46);
        t = conc_0_0(t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym_Compound_2, o_46, (ATerm) ATinsert(ATempty, h_46));
      }
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          k_46 = ATgetArgument(t, 0);
          {
            ATerm q_46 = NULL;
            t = j_46;
            t = new_0_0(t);
            q_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_46), term_n_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, q_46)))), term_l_19), k_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_46), term_z_11, term_g_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              k_46 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, k_46);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  k_46 = ATgetArgument(t, 0);
                  h_46 = ATgetArgument(t, 1);
                  e_46 = ATgetArgument(t, 2);
                  {
                    ATerm v_46 = NULL,y_46 = NULL,z_46 = NULL;
                    t = k_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        i_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = h_46;
                    t = map_1_0(a_2, t);
                    v_46 = t;
                    t = e_46;
                    t = map_1_0(c_2, t);
                    y_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_11)), y_46), v_46);
                    t = concat_0_0(t);
                    z_46 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, i_46), z_46)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      k_46 = ATgetArgument(t, 0);
                      h_46 = ATgetArgument(t, 1);
                      e_46 = ATgetArgument(t, 2);
                      {
                        ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
                        t = h_46;
                        t = map_1_0(h_2, t);
                        r_47 = t;
                        t = e_46;
                        t = map_1_0(i_2, t);
                        s_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
                        t = conc_0_0(t);
                        t_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, k_46), t_47)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          k_46 = ATgetArgument(t, 0);
                          {
                            ATerm f_48 = NULL;
                            t = j_46;
                            t = new_0_0(t);
                            f_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_48), term_n_11), term_m_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11)))), term_u_19), k_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, f_48))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              k_46 = ATgetArgument(t, 0);
                              h_46 = ATgetArgument(t, 1);
                              {
                                ATerm n_48 = NULL;
                                t = j_46;
                                t = new_0_0(t);
                                n_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_48), term_n_11), term_m_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, n_48))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  k_46 = ATgetArgument(t, 0);
                                  h_46 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, k_46, h_46);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      k_46 = ATgetArgument(t, 0);
                                      h_46 = ATgetArgument(t, 1);
                                      e_46 = ATgetArgument(t, 2);
                                      {
                                        ATerm g_49 = NULL,h_49 = NULL;
                                        t = j_46;
                                        t = new_0_0(t);
                                        g_49 = t;
                                        t = new_0_0(t);
                                        h_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_49), term_n_11), term_d_20)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_49), term_n_11), term_m_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_49))))), term_l_19), k_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, g_49))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          k_46 = ATgetArgument(t, 0);
                                          h_46 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_46, term_g_20, h_46);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              k_46 = ATgetArgument(t, 0);
                                              h_46 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, k_46, h_46);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  k_46 = ATgetArgument(t, 0);
                                                  h_46 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_46), k_46));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      k_46 = ATgetArgument(t, 0);
                                                      h_46 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm u_49 = NULL;
                                                        t = k_46;
                                                        t = map_1_0(l_2, t);
                                                        u_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, u_49)), (ATerm) ATinsert(ATempty, h_46));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_h_20;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  k_46 = ATgetArgument(t, 0);
                                                                  h_46 = ATgetArgument(t, 1);
                                                                  t = k_46;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      i_46 = ATgetArgument(t, 0);
                                                                      k_45 = ATgetArgument(t, 1);
                                                                      t = k_45;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          g_45 = ATgetFirst((ATermList) t);
                                                                          h_45 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = h_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_45 = ATgetFirst((ATermList) t);
                                                                              j_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = j_45;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = i_46;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm i_20 = t;
                                                                                      int j_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm c_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_45, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, h_46)))))), (ATerm) ATmakeAppl(sym__2, g_45, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, h_46)))));
                                                                                          t = map_1_0(m_2, t);
                                                                                          c_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, h_46)), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, h_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_50), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
                                                                                          LocalPopChoice(j_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_20;
                                                                                          t = u_53(i_46, k_45, h_46, j_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_53(i_46, k_45, h_46, j_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = i_46;
                                                                                  t = u_53(i_46, k_45, h_46, j_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_46;
                                                                              t = u_53(i_46, k_45, h_46, j_46, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = i_46;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm w_20 = t;
                                                                                  int x_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, h_46)), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, h_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
                                                                                      LocalPopChoice(x_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_20;
                                                                                      t = u_53(i_46, k_45, h_46, j_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_53(i_46, k_45, h_46, j_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_46;
                                                                              t = u_53(i_46, k_45, h_46, j_46, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          i_46 = ATgetArgument(t, 0);
                                                                          t = v_53(i_46, h_46, j_46, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              i_46 = ATgetArgument(t, 0);
                                                                              t = x_53(i_46, h_46, j_46, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  i_46 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm z_50 = NULL,q_28 = NULL,r_28 = NULL,y_28 = NULL,a_28 = NULL;
                                                                                    t = SSL_explode_string(i_46);
                                                                                    t = escape_chars_1_0(o_2, t);
                                                                                    a_28 = t;
                                                                                    t = SSL_implode_string(a_28);
                                                                                    r_28 = t;
                                                                                    t = SSL_explode_string(r_28);
                                                                                    y_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_28), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                                                                                    t = conc_0_0(t);
                                                                                    q_28 = t;
                                                                                    t = SSL_implode_string(q_28);
                                                                                    z_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_21, h_46))), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_s_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, z_50))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SeqVar_1))
                                                                                    {
                                                                                      i_46 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_46)), (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, (ATerm) ATmakeAppl(sym_Id_1, i_46)))))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_u_14), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_z_11, term_o_16)))))));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          i_46 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm g_21 = t;
                                                                                            int h_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = y_53(k_46, i_46, h_46, j_46, t);
                                                                                                LocalPopChoice(h_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_21;
                                                                                                {
                                                                                                  ATerm i_21 = t;
                                                                                                  int j_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = z_53(k_46, i_46, h_46, j_46, t);
                                                                                                      LocalPopChoice(j_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_21;
                                                                                                      {
                                                                                                        ATerm k_21 = t;
                                                                                                        int l_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = a_54(k_46, i_46, h_46, j_46, t);
                                                                                                            LocalPopChoice(l_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_21;
                                                                                                            t = b_54(k_46, i_46, h_46, j_46, t);
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
                                                                                              i_46 = ATgetArgument(t, 0);
                                                                                              k_45 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, k_45, h_46)), (ATerm) ATmakeAppl(sym_Match_2, i_46, h_46)));
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              ATerm m_21 = t;
                                                                                              int n_21 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_BuildDefault_1))
                                                                                                    {
                                                                                                      ATerm o_21 = ATgetArgument(t, 0);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(n_21);
                                                                                                  t = term_h_20;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = m_21;
                                                                                                  if(!(match_cons(t, sym_Wld_0)))
                                                                                                    _fail(t);
                                                                                                  t = term_h_20;
                                                                                                }
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
                                                                      k_46 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, k_46, term_g_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          k_46 = ATgetArgument(t, 0);
                                                                          h_46 = ATgetArgument(t, 1);
                                                                          e_46 = ATgetArgument(t, 2);
                                                                          t = k_46;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              i_46 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = h_46;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              g_46 = ATgetFirst((ATermList) t);
                                                                              d_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = g_46;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  x_45 = ATgetArgument(t, 0);
                                                                                  z_45 = ATgetArgument(t, 1);
                                                                                  c_46 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = x_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  y_45 = ATgetArgument(t, 0);
                                                                                  v_45 = ATgetArgument(t, 1);
                                                                                  t = z_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      l_45 = ATgetFirst((ATermList) t);
                                                                                      n_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = n_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          q_45 = ATgetFirst((ATermList) t);
                                                                                          s_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = s_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = q_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  r_45 = ATgetArgument(t, 0);
                                                                                                  t = l_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      m_45 = ATgetArgument(t, 0);
                                                                                                      t = v_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = y_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm p_21 = t;
                                                                                                              int q_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_46))), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_45), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, (ATerm) ATmakeAppl(sym_Id_1, i_46)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_45), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, (ATerm) ATmakeAppl(sym_Id_1, i_46)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, i_46), d_46, e_46))));
                                                                                                                  LocalPopChoice(q_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_21;
                                                                                                                  t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = y_45;
                                                                                                          t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_45;
                                                                                                      t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = y_45;
                                                                                                  t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_45;
                                                                                              t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_45;
                                                                                          t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = v_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = y_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm r_21 = t;
                                                                                                  int s_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_46))), term_t_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_46), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, i_46), d_46, e_46))));
                                                                                                      LocalPopChoice(s_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_21;
                                                                                                      t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_45;
                                                                                              t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_45;
                                                                                          t = e_54(i_46, y_45, v_45, z_45, c_46, d_46, e_46, j_46, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      y_45 = ATgetArgument(t, 0);
                                                                                      t = f_54(i_46, y_45, c_46, d_46, e_46, j_46, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          y_45 = ATgetArgument(t, 0);
                                                                                          t = g_54(i_46, y_45, c_46, d_46, e_46, j_46, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm m_52 = NULL,f_30 = NULL,g_30 = NULL,j_30 = NULL,e_29 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              y_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(y_45);
                                                                                          t = escape_chars_1_0(p_2, t);
                                                                                          e_29 = t;
                                                                                          t = SSL_implode_string(e_29);
                                                                                          g_30 = t;
                                                                                          t = SSL_explode_string(g_30);
                                                                                          j_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_30), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                                                                                          t = conc_0_0(t);
                                                                                          f_30 = t;
                                                                                          t = SSL_implode_string(f_30);
                                                                                          m_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_52))), (ATerm) ATmakeAppl(sym_Id_1, i_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, i_46), d_46, e_46))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = e_46;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              k_46 = ATgetArgument(t, 0);
                                                                              h_46 = ATgetArgument(t, 1);
                                                                              e_46 = ATgetArgument(t, 2);
                                                                              f_46 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, k_46), (ATerm) ATmakeAppl(sym_Case_3, h_46, e_46, f_46));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  k_46 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, k_46));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      k_46 = ATgetArgument(t, 0);
                                                                                      h_46 = ATgetArgument(t, 1);
                                                                                      t = k_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          i_46 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = h_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          g_46 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm v_21 = t;
                                                                                            int w_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_u_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, i_46), (ATerm) ATmakeAppl(sym_Id_1, g_46))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_z_11, (ATerm) ATmakeAppl(sym_Id_1, g_46))));
                                                                                                LocalPopChoice(w_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_21;
                                                                                                t = h_54(i_46, h_46, j_46, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_54(i_46, h_46, j_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          k_46 = ATgetArgument(t, 0);
                                                                                          t = k_46;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              i_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_z_11, term_g_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm t_53 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              k_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = k_46;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          t_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, t_53));
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
ATerm escape_chars_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  static ATerm r_55 (ATerm t);
  static ATerm r_55 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,q_8 = NULL;
        t = j_144(t);
        v_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_54 = ATgetFirst((ATermList) t);
            t_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_54);
        p_54 = t;
        t = t_54;
        t = Cons_2_0(_id, r_55, t);
        u_54 = t;
        t = (ATerm) ATinsert(CheckATermList(u_54), s_54);
        q_8 = t;
        t = SSLsetAnnotations(q_8, p_54);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
          o_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_55 = ATgetFirst((ATermList) t);
              n_55 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm q_30 = NULL,a_31 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(o_55);
                q_30 = t;
                t = n_55;
                t = r_55(t);
                a_31 = t;
                t = (ATerm) ATinsert(CheckATermList(a_31), m_55);
                r_8 = t;
                t = SSLsetAnnotations(r_8, q_30);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_55;
            }
        }
      }
    return(t);
  }
  t = r_55(t);
  return(t);
}
static ATerm b_10 (ATerm f_1 (ATerm), ATerm l_1 (ATerm), ATerm h_1, ATerm m_1, ATerm e_1, ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_1, e_1);
  t = f_1(t);
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_1, u_55);
  t = l_1(t);
  if(match_cons(t, sym__2))
    {
      x_55 = ATgetArgument(t, 0);
      v_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_55), w_55), v_55);
  return(t);
}
ATerm thread_map_1_0 (ATerm k_141 (ATerm), ATerm t)
{
  static ATerm u_56 (ATerm t);
  static ATerm u_56 (ATerm t)
  {
    ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,g_56 = NULL,h_56 = NULL;
    e_56 = t;
    if(match_cons(t, sym__2))
      {
        g_56 = ATgetArgument(t, 0);
        h_56 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_56 = ATgetFirst((ATermList) t);
        d_56 = (ATerm) ATgetNext((ATermList) t);
        t = e_56;
        t = b_10(k_141, u_56, c_56, d_56, h_56, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_56);
      }
    return(t);
  }
  t = u_56(t);
  return(t);
}
static ATerm m_61 (ATerm o_58, ATerm p_58, ATerm q_58, ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm y_58 = NULL,a_59 = NULL,b_59 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  t = o_58;
  {
    ATerm z_21 = t;
    if((PushChoice() == 0))
      {
        ATerm c_59 = NULL;
        c_59 = t;
        if(match_string(t, "Nil"))
          {
            t = c_59;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = c_59;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_21;
      }
  }
  t = p_58;
  t = map_1_0(q_2, t);
  t = (ATerm) ATmakeAppl(sym__2, p_58, term_b_14);
  t = thread_map_1_0(r_2, t);
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      {
        ATerm a_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_58;
  t = foldr_3_0(s_2, t_2, u_2, t);
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_58, b_59);
  h_31 = t;
  t = term_n_14;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, o_58, b_59));
  t = f_10(i_31, h_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_22) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_58, (ATerm) ATinsert(ATempty, q_58));
  t = conc_0_0(t);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_31)), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, a_59), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_58)));
  return(t);
}
static ATerm n_61 (ATerm p_59, ATerm q_59, ATerm r_59, ATerm s_59, ATerm t)
{
  ATerm w_59 = NULL;
  t = SSL_real_to_string(p_59);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, w_59)), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_59)));
  return(t);
}
static ATerm o_61 (ATerm x_59, ATerm y_59, ATerm z_59, ATerm a_60, ATerm t)
{
  ATerm e_60 = NULL;
  t = SSL_int_to_string(x_59);
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_60)), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_59)));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,w_8 = NULL;
  f_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_59);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_59);
  w_8 = t;
  t = SSLsetAnnotations(w_8, d_59);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,l_59 = NULL,m_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(match_cons(c_22, sym_Var_1))
        {
          g_59 = ATgetArgument(c_22, 0);
        }
      else
        _fail(t);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(h_59);
  i_59 = t;
  t = term_d_14;
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_59, term_d_14);
  t = t_10(h_59, m_59, t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_59), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, i_59)), term_g_11)))), l_59);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL;
  if(match_cons(t, sym__2))
    {
      n_59 = ATgetArgument(t, 0);
      o_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(n_59, o_59, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm o_31 = NULL,s_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_31 = ATgetFirst((ATermList) t);
      s_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_31;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(s_31), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(s_31), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(s_31), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(s_31), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
  m_60 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      n_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
      r_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_60;
  if(match_cons(t, sym_Match_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_60;
  if(match_cons(t, sym_Op_2))
    {
      p_60 = ATgetArgument(t, 0);
      l_60 = ATgetArgument(t, 1);
      t = l_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_60 = ATgetFirst((ATermList) t);
          h_60 = (ATerm) ATgetNext((ATermList) t);
          t = h_60;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_60 = ATgetFirst((ATermList) t);
              k_60 = (ATerm) ATgetNext((ATermList) t);
              t = k_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = i_60;
                  if(match_cons(t, sym_Var_1))
                    {
                      j_60 = ATgetArgument(t, 0);
                      t = f_60;
                      if(match_cons(t, sym_Var_1))
                        {
                          g_60 = ATgetArgument(t, 0);
                          t = p_60;
                          if(match_string(t, "Cons"))
                            {
                              ATerm d_22 = t;
                              int e_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, term_g_11)), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, term_g_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_60), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_60), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, term_f_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_60), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, term_f_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_60)));
                                  LocalPopChoice(e_22);
                                }
                              else
                                {
                                  t = d_22;
                                  t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                                }
                            }
                          else
                            {
                              t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                            }
                        }
                      else
                        {
                          t = p_60;
                          t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                        }
                    }
                  else
                    {
                      t = p_60;
                      t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                    }
                }
              else
                {
                  t = p_60;
                  t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                }
            }
          else
            {
              t = p_60;
              t = m_61(p_60, l_60, q_60, r_60, m_60, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = p_60;
              if(match_string(t, "Nil"))
                {
                  ATerm g_22 = t;
                  int h_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, term_g_11)), term_t_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, term_g_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_60)));
                      LocalPopChoice(h_22);
                    }
                  else
                    {
                      t = g_22;
                      t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                    }
                }
              else
                {
                  t = m_61(p_60, l_60, q_60, r_60, m_60, t);
                }
            }
          else
            {
              t = p_60;
              t = m_61(p_60, l_60, q_60, r_60, m_60, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          p_60 = ATgetArgument(t, 0);
          t = n_61(p_60, q_60, r_60, m_60, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_60 = ATgetArgument(t, 0);
              t = o_61(p_60, q_60, r_60, m_60, t);
            }
          else
            {
              ATerm b_61 = NULL,x_31 = NULL,y_31 = NULL,a_32 = NULL,k_31 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  p_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(p_60);
              t = escape_chars_1_0(v_2, t);
              k_31 = t;
              t = SSL_implode_string(k_31);
              y_31 = t;
              t = SSL_explode_string(y_31);
              a_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_32), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
              t = conc_0_0(t);
              x_31 = t;
              t = SSL_implode_string(x_31);
              b_61 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, b_61))), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_60)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  static ATerm w_2 (ATerm t);
  static ATerm w_2 (ATerm t)
  {
    t = topdown_1_0(j_127, t);
    return(t);
  }
  t = j_127(t);
  t = SRTS_all(w_2, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  a_62 = t;
  if(match_cons(t, sym_SeqVar_1))
    {
      z_61 = ATgetArgument(t, 0);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_32 = NULL,h_32 = NULL,y_8 = NULL;
            t = SSLgetAnnotations(a_62);
            f_32 = t;
            t = z_61;
            if(match_cons(t, sym_Var_1))
              {
                h_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SeqVar_1, h_32);
            y_8 = t;
            t = SSLsetAnnotations(y_8, f_32);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = a_62;
          }
      }
    }
  else
    {
      t = a_62;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = repeat_2_0(m_3, _id, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm translate_body_0_0 (ATerm t)
{
  t = topdown_1_0(d_3, t);
  t = topdown_1_0(l_3, t);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  v_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
      y_62 = ATgetArgument(t, 2);
      z_62 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
        t = w_62;
        t = is_local_function_0_0(t);
        t = x_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        h_63 = t;
        t = y_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        i_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_63, i_63);
        t = conc_0_0(t);
        j_63 = t;
        t = z_62;
        t = translate_body_0_0(t);
        k_63 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_r_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, j_63, (ATerm) ATinsert(ATempty, term_r_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), term_l_19), k_63)));
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
          t = w_62;
          {
            ATerm s_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_22;
              }
          }
          t = x_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          w_32 = t;
          t = y_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          x_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
          t = conc_0_0(t);
          y_32 = t;
          t = z_62;
          t = translate_body_0_0(t);
          z_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_e_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, y_32, (ATerm) ATinsert(ATempty, term_r_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_12), term_l_19), z_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_141 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
  z_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_63;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_64 = ATgetFirst((ATermList) t);
          b_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_33 = NULL,l_33 = NULL,m_33 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(z_63);
            i_33 = t;
            t = a_64;
            t = x_141(t);
            l_33 = t;
            t = b_64;
            t = filter_1_0(x_141, t);
            m_33 = t;
            t = (ATerm) ATinsert(CheckATermList(m_33), l_33);
            h_9 = t;
            t = SSLsetAnnotations(h_9, i_33);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = b_64;
            t = filter_1_0(x_141, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm h_64 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          h_64 = ATgetArgument(t, 0);
          {
            ATerm x_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_22);
      {
        ATerm j_64 = NULL;
        t = h_64;
        t = map_1_0(TranslateType_0_0, t);
        j_64 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_10, (ATerm) ATmakeAppl(sym_ParamList_1, j_64));
      }
    }
  else
    {
      t = v_22;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm y_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_e_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,w_64 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_64;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            w_64 = ATgetArgument(t, 0);
            {
              ATerm b_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_23);
        {
          ATerm z_64 = NULL;
          t = w_64;
          t = map_1_0(TranslateType_0_0, t);
          z_64 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, z_64)))));
        }
      }
    else
      {
        t = z_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm c_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), term_n_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm e_23 = t;
  if((PushChoice() == 0))
    {
      ATerm b_65 = NULL,c_65 = NULL;
      if(match_cons(t, sym__2))
        {
          b_65 = ATgetArgument(t, 0);
          c_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, b_65, c_65);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(b_65, c_65);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = SSL_gtr(b_65, c_65);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, b_65, c_65);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_23;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = map_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm j_65 = NULL;
  j_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, j_65);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_65, term_i_23);
  t = leq_0_0(t);
  t = j_65;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,l_9 = NULL;
  d_65 = t;
  t = SSL_explode_string(d_65);
  i_65 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_65 = ATgetFirst((ATermList) t);
      g_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_65);
  e_65 = t;
  t = f_65;
  {
    ATerm j_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_23, f_65);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, f_65, term_r_23);
        t = leq_0_0(t);
        t = f_65;
        LocalPopChoice(m_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATmakeAppl(sym__2, term_s_23, f_65);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, f_65, term_t_23);
        t = leq_0_0(t);
        t = f_65;
      }
  }
  t = g_65;
  t = Cons_2_0(n_3, o_3, t);
  h_65 = t;
  t = (ATerm) ATinsert(CheckATermList(h_65), f_65);
  l_9 = t;
  t = SSLsetAnnotations(l_9, e_65);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  w_65 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      x_65 = ATgetArgument(t, 0);
      y_65 = ATgetArgument(t, 1);
      z_65 = ATgetArgument(t, 2);
      {
        ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
        t = y_65;
        t = map_1_0(TranslateVarDec_0_0, t);
        e_66 = t;
        t = z_65;
        t = map_1_0(TranslateVarDec_0_0, t);
        f_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_66, f_66);
        t = conc_0_0(t);
        g_66 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, g_66, (ATerm) ATinsert(ATempty, term_r_11)))))));
      }
    }
  else
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              x_65 = ATgetArgument(t, 0);
              y_65 = ATgetArgument(t, 1);
              z_65 = ATgetArgument(t, 2);
              {
                ATerm y_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(w_23);
          {
            ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
            t = y_65;
            t = map_1_0(TranslateVarDec_0_0, t);
            k_66 = t;
            t = z_65;
            t = map_1_0(TranslateVarDec_0_0, t);
            l_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_66, l_66);
            t = conc_0_0(t);
            m_66 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, m_66, (ATerm) ATinsert(ATempty, term_r_11)))))));
          }
        }
      else
        {
          t = v_23;
          if(match_cons(t, sym_SDefT_4))
            {
              x_65 = ATgetArgument(t, 0);
              y_65 = ATgetArgument(t, 1);
              z_65 = ATgetArgument(t, 2);
              {
                ATerm z_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm a_24 = t;
            int b_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
                t = x_65;
                t = is_local_function_0_0(t);
                t = y_65;
                t = map_1_0(TranslateVarDec_0_0, t);
                q_66 = t;
                t = z_65;
                t = map_1_0(TranslateVarDec_0_0, t);
                r_66 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_66, r_66);
                t = conc_0_0(t);
                s_66 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_r_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, s_66, (ATerm) ATinsert(ATempty, term_r_11)))))));
                LocalPopChoice(b_24);
              }
            else
              {
                t = a_24;
                {
                  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
                  t = x_65;
                  {
                    ATerm c_24 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = c_24;
                      }
                  }
                  t = y_65;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  y_33 = t;
                  t = z_65;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  z_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
                  t = conc_0_0(t);
                  a_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, a_34, (ATerm) ATinsert(ATempty, term_r_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  if(match_cons(t, sym__2))
    {
      i_67 = ATgetArgument(t, 0);
      j_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(i_67, j_67, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm g_10 (ATerm y_39, ATerm w_39, ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,a_67 = NULL,c_67 = NULL,d_67 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,g_67 = NULL;
  t = w_39;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            g_67 = ATgetArgument(t, 0);
            {
              ATerm f_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_24);
        t = g_67;
        t = foldr_3_0(q_3, r_3, s_3, t);
      }
    else
      {
        t = d_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm g_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_b_14;
      }
  }
  y_66 = t;
  t = SSL_int_to_string(y_66);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_39, y_66);
  k_34 = t;
  t = term_n_14;
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, y_39, y_66));
  t = f_10(l_34, k_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_24) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(y_39);
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_67), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
  t = conc_0_0(t);
  d_67 = t;
  t = SSL_implode_string(d_67);
  a_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_34), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), (ATerm) ATmakeAppl(sym_IntConst_1, x_66)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, a_67)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_67 = ATgetFirst((ATermList) t);
      y_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_67;
  if(match_int(t, 95))
    {
      ATerm a_68 = NULL;
      t = y_67;
      t = a_1(t);
      a_68 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_68), term_m_24), term_m_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm c_68 = NULL;
          t = y_67;
          t = a_1(t);
          c_68 = t;
          t = (ATerm) ATinsert(CheckATermList(c_68), term_m_24);
        }
      else
        {
          ATerm e_68 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = y_67;
          t = a_1(t);
          e_68 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_68), term_m_24), term_n_24), term_m_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm g_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL;
  i_68 = t;
  t = SSL_explode_string(i_68);
  {
    static ATerm u_68 (ATerm t);
    static ATerm u_68 (ATerm t)
    {
      ATerm o_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_144(u_68, t);
          LocalPopChoice(x_24);
        }
      else
        {
          t = o_24;
          {
            ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
            t_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_68 = ATgetFirst((ATermList) t);
                s_68 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm t_34 = NULL,w_34 = NULL,n_9 = NULL;
                  t = SSLgetAnnotations(t_68);
                  t_34 = t;
                  t = s_68;
                  t = u_68(t);
                  w_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_34), r_68);
                  n_9 = t;
                  t = SSLsetAnnotations(n_9, t_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_68;
              }
          }
        }
      return(t);
    }
    t = u_68(t);
  }
  h_68 = t;
  t = SSL_implode_string(h_68);
  return(t);
}
ATerm foldr_3_0 (ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm x_140 (ATerm), ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  x_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_68;
      t = v_140(t);
    }
  else
    {
      ATerm c_69 = NULL,d_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_68 = ATgetFirst((ATermList) t);
          z_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_68;
      t = x_140(t);
      c_69 = t;
      t = z_68;
      t = foldr_3_0(v_140, w_140, x_140, t);
      d_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_69, d_69);
      t = w_140(t);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  if(match_cons(t, sym__2))
    {
      q_69 = ATgetArgument(t, 0);
      r_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(q_69, r_69, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm h_10 (ATerm l_39, ATerm k_39, ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,o_69 = NULL;
  t = k_39;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            o_69 = ATgetArgument(t, 0);
            {
              ATerm a_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_24);
        t = o_69;
        t = foldr_3_0(t_3, u_3, v_3, t);
      }
    else
      {
        t = y_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm b_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_b_14;
      }
  }
  f_69 = t;
  t = l_39;
  t = escape_1_0(Cify_1_0, t);
  h_69 = t;
  t = SSL_int_to_string(f_69);
  i_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_69), term_d_25), h_69), term_c_25);
  l_69 = t;
  t = SSL_concat_strings(l_69);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_39, f_69);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_25, g_69);
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_39, f_69), (ATerm) ATmakeAppl(sym_Defined_2, term_e_25, g_69));
  t = j_10(w_3, j_69, k_69, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_69), term_n_11)));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  v_69 = t;
  t = term_i_25;
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, v_69);
  t = q_10(w_69, v_69, t);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, u_69);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_j_25;
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_69 = NULL,t_69 = NULL;
        t = term_m_25;
        s_69 = t;
        t = term_j_25;
        t_69 = t;
        t = term_n_25;
        t = y_10(s_69, t_69, t);
        t = map_1_0(x_3, t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      m_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(m_70, n_70, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      o_70 = ATgetArgument(t, 0);
      p_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(o_70, p_70, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm o_25 = ATgetArgument(t, 0);
      ATerm p_25 = ATgetArgument(t, 1);
      ATerm q_25 = ATgetArgument(t, 2);
      ATerm r_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm s_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      s_70 = ATgetArgument(t, 1);
      {
        ATerm t_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_70), term_n_11)));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  if(match_cons(t, sym__3))
    {
      u_70 = ATgetArgument(t, 0);
      v_70 = ATgetArgument(t, 1);
      w_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_9(u_70, v_70, w_70, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  h_71 = t;
  if(match_cons(t, sym_Conc_2))
    {
      f_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, f_71, g_71);
            t = conc_0_0(t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = h_71;
          }
      }
    }
  else
    {
      t = h_71;
    }
  return(t);
}
static ATerm i_10 (ATerm f_40, ATerm i_40, ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  i_70 = t;
  t = GenerateIncludes_0_0(t);
  a_70 = t;
  t = f_40;
  t = map_1_0(y_3, t);
  b_70 = t;
  t = f_40;
  t = map_1_0(z_3, t);
  t = concat_0_0(t);
  c_70 = t;
  t = i_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  d_70 = t;
  t = i_40;
  t = filter_1_0(a_4, t);
  t = map_1_0(TranslateDef_0_0, t);
  e_70 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_70 = NULL,b_35 = NULL,c_35 = NULL;
        t = (ATerm) ATempty;
        b_35 = t;
        t = term_x_12;
        c_35 = t;
        t = term_e_13;
        t = f_10(c_35, b_35, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            q_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_70;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
  }
  l_70 = t;
  t = map_1_0(b_4, t);
  j_70 = t;
  t = l_70;
  t = map_1_0(c_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, d_4, t);
  k_70 = t;
  t = i_70;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_70 = NULL,z_70 = NULL;
        t = term_m_25;
        y_70 = t;
        t = term_b_26;
        z_70 = t;
        t = term_c_26;
        t = y_10(y_70, z_70, t);
        t = i_70;
        LocalPopChoice(a_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = z_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_e_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_h_26)))), term_h_20));
      }
  }
  f_70 = t;
  t = i_70;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_71 = NULL,b_71 = NULL;
        t = term_m_25;
        a_71 = t;
        t = term_b_26;
        b_71 = t;
        t = term_c_26;
        t = y_10(a_71, b_71, t);
        t = i_70;
        LocalPopChoice(j_26);
        t = (ATerm) ATinsert(ATempty, term_l_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATinsert(ATempty, term_n_26);
      }
  }
  g_70 = t;
  t = i_70;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_71 = NULL,d_71 = NULL;
        t = term_m_25;
        c_71 = t;
        t = term_b_26;
        d_71 = t;
        t = term_c_26;
        t = y_10(c_71, d_71, t);
        t = i_70;
        LocalPopChoice(p_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = o_26;
        {
          ATerm e_71 = NULL;
          t = MainDef_0_0(t);
          e_71 = t;
          t = (ATerm) ATinsert(ATempty, e_71);
        }
      }
  }
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, a_70, f_70), b_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_u_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_h_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_70)))), j_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_h_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_70)))), g_70), d_70), h_70), e_70));
  t = bottomup_1_0(e_4, t);
  return(t);
}
static ATerm j_10 (ATerm g_160 (ATerm), ATerm v_84, ATerm t_84, ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL;
  p_71 = t;
  t = g_160(t);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_71, v_84, t_84);
  t = z_10(m_71, v_84, t_84, t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_71 = NULL;
        t = term_a_27;
        u_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_71, term_a_27);
        t = y_10(m_71, u_71, t);
        {
          ATerm b_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_27;
            }
        }
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_71 = ATgetFirst((ATermList) t);
      o_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_71, term_a_27, (ATerm) ATinsert(CheckATermList(o_71), (ATerm) ATinsert(CheckATermList(n_71), v_84)));
  t = lookup_table_0_1(m_71, t);
  t_71 = t;
  t = term_a_27;
  q_71 = t;
  t = (ATerm) ATinsert(CheckATermList(o_71), (ATerm) ATinsert(CheckATermList(n_71), v_84));
  r_71 = t;
  t = t_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(q_71, r_71, s_71, t);
  t = p_71;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  t = term_e_27;
  w_71 = t;
  t = term_o_27;
  x_71 = t;
  t = term_p_27;
  t = j_10(f_4, w_71, x_71, t);
  t = v_71;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
        {
          ATerm u_27 = ATgetFirst((ATermList) q_27);
          if(match_cons(u_27, sym_Signature_1))
            {
              ATerm z_27 = ATgetArgument(u_27, 0);
              if(((ATgetType(z_27) == AT_LIST) && !(ATisEmpty(z_27))))
                {
                  ATerm b_28 = ATgetFirst((ATermList) z_27);
                  if(match_cons(b_28, sym_Constructors_1))
                    {
                      z_71 = ATgetArgument(b_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_28 = (ATerm) ATgetNext((ATermList) z_27);
                    if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm v_27 = (ATerm) ATgetNext((ATermList) q_27);
            if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
              {
                ATerm e_28 = ATgetFirst((ATermList) v_27);
                if(match_cons(e_28, sym_Strategies_1))
                  {
                    a_72 = ATgetArgument(e_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_28 = (ATerm) ATgetNext((ATermList) v_27);
                  if(((ATgetType(h_28) != AT_LIST) || !(ATisEmpty(h_28))))
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
  t = i_10(z_71, a_72, t);
  t = listbottomup_1_0(j_4, t);
  return(t);
}
static ATerm l_10 (ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm c_72 = NULL;
  t = SSL_fputc(s_57, t_57);
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_72);
  return(t);
}
static ATerm m_10 (ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm d_72 = NULL;
  t = SSL_write_term_to_stream_text(z_41, a_42);
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_72);
  return(t);
}
static ATerm o_10 (ATerm m_133 (ATerm), ATerm h_277, ATerm f_42, ATerm t)
{
  ATerm e_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_277, term_l_28);
  t = s_10(t);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_72, f_42);
  t = m_133(t);
  t = fclose_0_0(t);
  t = f_42;
  return(t);
}
static ATerm n_10 (ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm f_72 = NULL;
  t = SSL_write_term_to_stream_baf(v_41, w_41);
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_72);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if(match_cons(m_28, sym_Stream_1))
        {
          m_72 = ATgetArgument(m_28, 0);
        }
      else
        _fail(t);
      n_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(m_72, n_72, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Stream_1))
        {
          r_72 = ATgetArgument(n_28, 0);
        }
      else
        _fail(t);
      s_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(r_72, s_72, t);
  o_72 = t;
  t = term_o_28;
  p_72 = t;
  t = o_72;
  if(match_cons(t, sym_Stream_1))
    {
      q_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, o_72);
  t = l_10(p_72, q_72, t);
  return(t);
}
ATerm output_1_0 (ATerm i_152 (ATerm), ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  t = i_152(t);
  h_72 = t;
  {
    ATerm p_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_72 = NULL,j_72 = NULL;
        t = term_m_25;
        i_72 = t;
        t = term_t_28;
        j_72 = t;
        t = term_v_28;
        t = y_10(i_72, j_72, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = p_28;
        t = term_h_29;
      }
  }
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_72, h_72);
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_72 = NULL,l_72 = NULL;
        t = term_m_25;
        k_72 = t;
        t = term_k_29;
        l_72 = t;
        t = term_l_29;
        t = y_10(k_72, l_72, t);
        t = (ATerm) ATmakeAppl(sym__2, g_72, h_72);
        LocalPopChoice(j_29);
        if(match_cons(t, sym__2))
          {
            ATerm m_29 = ATgetArgument(t, 0);
            ATerm n_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_10(k_4, g_72, h_72, t);
      }
    else
      {
        t = i_29;
        if(match_cons(t, sym__2))
          {
            ATerm y_29 = ATgetArgument(t, 0);
            ATerm z_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_10(l_4, g_72, h_72, t);
      }
  }
  return(t);
}
static ATerm g_73 (ATerm a_73, ATerm t)
{
  t = SSL_fclose(a_73);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL;
  e_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_73 = ATgetArgument(t, 0);
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_73);
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            t = g_73(e_73, t);
          }
      }
    }
  else
    {
      t = g_73(e_73, t);
    }
  return(t);
}
static ATerm p_10 (ATerm b_42, ATerm t)
{
  t = SSL_read_term_from_stream(b_42);
  return(t);
}
static ATerm q_10 (ATerm y_55, ATerm z_55, ATerm t)
{
  t = SSL_strcat(y_55, z_55);
  return(t);
}
static ATerm r_10 (ATerm u_57, ATerm v_57, ATerm t)
{
  ATerm h_73 = NULL;
  t = SSL_fopen(u_57, v_57);
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_73 = NULL;
  t = SSL_stdin_stream();
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_73 = NULL;
  t = SSL_stdout_stream();
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_73 = NULL;
  t = SSL_stderr_stream();
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
static ATerm r_74 (ATerm q_73, ATerm t)
{
  ATerm r_73 = NULL;
  t = SSL_explode_term(q_73);
  if(match_cons(t, sym__2))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_30 = ATgetArgument(t, 1);
        if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
          {
            r_73 = ATgetFirst((ATermList) d_30);
            {
              ATerm i_30 = (ATerm) ATgetNext((ATermList) d_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_74 (ATerm u_73, ATerm v_73, ATerm w_73, ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,c_74 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(w_73);
  z_73 = t;
  t = u_73;
  if(match_cons(t, sym_Path_1))
    {
      c_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_74, v_73);
  p_9 = t;
  t = SSLsetAnnotations(p_9, z_73);
  if(match_cons(t, sym__2))
    {
      x_73 = ATgetArgument(t, 0);
      y_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(x_73, y_73, t);
  return(t);
}
static ATerm t_74 (ATerm e_74, ATerm f_74, ATerm g_74, ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,m_74 = NULL,q_9 = NULL;
  t = SSLgetAnnotations(g_74);
  j_74 = t;
  t = SSL_is_string(e_74);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_74, f_74);
  q_9 = t;
  t = SSLsetAnnotations(q_9, j_74);
  if(match_cons(t, sym__2))
    {
      h_74 = ATgetArgument(t, 0);
      i_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(h_74, i_74, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  if(match_cons(t, sym__2))
    {
      p_74 = ATgetArgument(t, 0);
      q_74 = ATgetArgument(t, 1);
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_74(o_74, t);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm p_30 = t;
              int s_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_74(p_74, q_74, o_74, t);
                  LocalPopChoice(s_30);
                }
              else
                {
                  t = p_30;
                  t = t_74(p_74, q_74, o_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_74(o_74, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,c_75 = NULL;
  c_75 = t;
  {
    ATerm t_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_75, term_z_30);
        t = s_10(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = t_30;
        {
          ATerm m_35 = NULL,n_35 = NULL;
          t = term_b_31;
          n_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_31, c_75);
          t = q_10(n_35, c_75, t);
          m_35 = t;
          t = SSL_perror(m_35);
          _fail(t);
        }
      }
  }
  w_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_10(x_74, t);
  v_74 = t;
  t = w_74;
  t = fclose_0_0(t);
  t = v_74;
  return(t);
}
ATerm input_1_0 (ATerm j_152 (ATerm), ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_75 = NULL,g_75 = NULL;
      t = term_m_25;
      f_75 = t;
      t = term_e_31;
      g_75 = t;
      t = term_f_31;
      t = y_10(f_75, g_75, t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = term_j_31;
    }
  t = ReadFromFile_0_0(t);
  t = j_152(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL;
  t = term_m_25;
  h_75 = t;
  t = term_l_31;
  i_75 = t;
  t = term_m_31;
  t = y_10(h_75, i_75, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
  k_75 = t;
  {
    ATerm n_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_31 = ATgetFirst((ATermList) t);
                ATerm v_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_75;
          }
        LocalPopChoice(t_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATinsert(ATempty, k_75);
      }
  }
  l_75 = t;
  t = term_h_29;
  m_75 = t;
  t = SSL_printnl(m_75, l_75);
  t = k_75;
  return(t);
}
ATerm map_1_0 (ATerm u_133 (ATerm), ATerm t)
{
  static ATerm e_76 (ATerm t);
  static ATerm e_76 (ATerm t)
  {
    ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
    b_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_76;
      }
    else
      {
        ATerm w_35 = NULL,z_35 = NULL,a_36 = NULL,x_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_76 = ATgetFirst((ATermList) t);
            d_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_76);
        w_35 = t;
        t = c_76;
        t = u_133(t);
        z_35 = t;
        t = d_76;
        t = e_76(t);
        a_36 = t;
        t = (ATerm) ATinsert(CheckATermList(a_36), z_35);
        x_9 = t;
        t = SSLsetAnnotations(x_9, w_35);
      }
    return(t);
  }
  t = e_76(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm t_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_76 = ATgetFirst((ATermList) t);
      i_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_76 = NULL,n_76 = NULL;
        static ATerm n_4 (ATerm t);
        static ATerm n_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_76)), not_null(n_76));
          return(t);
        }
        t = i_76;
        t = w_0(t);
        if(((m_76 != NULL) && (m_76 != t)))
          _fail(t);
        else
          m_76 = t;
        t = h_76;
        t = t_0(t);
        if(((n_76 != NULL) && (n_76 != t)))
          _fail(t);
        else
          n_76 = t;
        t = i_76;
        t = reverse_acc_2_0(t_0, n_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_31;
      t = w_0(t);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,z_9 = NULL;
  x_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_76);
  v_76 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_76);
  z_9 = t;
  t = SSLsetAnnotations(z_9, v_76);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm b_77 = NULL;
  b_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_77), term_z_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm v_154 (ATerm), ATerm w_154 (ATerm), ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  ATerm b_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_76 = NULL,u_76 = NULL;
      t = term_m_25;
      t_76 = t;
      t = term_l_31;
      u_76 = t;
      t = term_m_31;
      t = y_10(t_76, u_76, t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = b_32;
      t = fetch_1_0(o_4, t);
    }
  {
    ATerm e_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_154(t);
        t = echo_0_0(t);
        LocalPopChoice(g_32);
      }
    else
      {
        t = e_32;
      }
  }
  t = term_i_32;
  t = echo_0_0(t);
  t = term_j_32;
  r_76 = t;
  t = term_k_32;
  s_76 = t;
  t = term_l_32;
  t = y_10(r_76, s_76, t);
  t = reverse_acc_2_0(_id, r_4, t);
  t = map_1_0(s_4, t);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_77 = NULL;
        t = w_154(t);
        c_77 = t;
        t = (ATerm) ATinsert(CheckATermList(c_77), term_o_32);
        t = echo_0_0(t);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,a_11 = NULL;
  k_77 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_77);
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_77);
  a_11 = t;
  t = SSLsetAnnotations(a_11, i_77);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_77 = NULL;
  f_77 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_77 = NULL,h_77 = NULL;
        t = term_m_25;
        g_77 = t;
        t = term_l_31;
        h_77 = t;
        t = term_m_31;
        t = y_10(g_77, h_77, t);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = fetch_1_0(t_4, t);
      }
  }
  t = f_77;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  if(match_string(t, "-k"))
    {
      t = m_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_77;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  n_77 = t;
  t = SSL_string_to_int(n_77);
  o_77 = t;
  t = term_r_32;
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_32, o_77);
  t = b_11(p_77, o_77, t);
  t = n_77;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, z_4, a_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_77 = NULL;
  r_77 = t;
  if(match_string(t, "-S"))
    {
      t = r_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_77;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL;
  t = term_t_32;
  s_77 = t;
  t = term_b_14;
  t_77 = t;
  t = term_u_32;
  t = b_11(s_77, t_77, t);
  t = term_v_32;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm u_77 = NULL,a_78 = NULL,b_78 = NULL;
  u_77 = t;
  t = SSL_string_to_int(u_77);
  a_78 = t;
  t = term_t_32;
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, a_78);
  t = b_11(b_78, a_78, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_77);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_b_33;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL;
  t = term_c_33;
  c_78 = t;
  t = term_w_31;
  d_78 = t;
  t = term_d_33;
  t = b_11(c_78, d_78, t);
  t = term_e_33;
  return(t);
}
static ATerm s_5 (ATerm t)
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
      t = Option_3_0(f_5, g_5, k_5, t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_5, m_5, n_5, t);
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            t = Option_3_0(p_5, q_5, s_5, t);
          }
      }
    }
  return(t);
}
static ATerm b_11 (ATerm h_95, ATerm i_95, ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  t = term_m_25;
  e_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, h_95, i_95);
  t = lookup_table_0_1(e_78, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(h_95, i_95, f_78, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, h_95, i_95);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm j_78 = NULL,l_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
      t = term_w_31;
      t = h_0(t);
      m_78 = t;
      t = term_j_32;
      n_78 = t;
      t = term_k_32;
      o_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_32, term_k_32, m_78);
      t = z_10(n_78, o_78, m_78, t);
      _fail(t);
    }
  else
    {
      ATerm r_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_78 = ATgetFirst((ATermList) t);
          l_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_78;
      t = d_0(t);
      t = term_w_31;
      t = f_0(t);
      r_78 = t;
      t = (ATerm) ATinsert(CheckATermList(l_78), r_78);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm t_78 = NULL;
  t_78 = t;
  if(match_string(t, "-o"))
    {
      t = t_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_78;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL;
  u_78 = t;
  t = term_t_28;
  v_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, u_78);
  t = b_11(v_78, u_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_78);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, u_5, y_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm x_78 = NULL;
  x_78 = t;
  if(match_string(t, "-i"))
    {
      t = x_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_78;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  y_78 = t;
  t = term_e_31;
  z_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, y_78);
  t = b_11(z_78, y_78, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_78);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_134 (ATerm), ATerm t)
{
  static ATerm u_79 (ATerm t);
  static ATerm u_79 (ATerm t)
  {
    ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
    t_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_79 = ATgetFirst((ATermList) t);
        s_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_36 = NULL,l_36 = NULL,f_11 = NULL;
          t = SSLgetAnnotations(t_79);
          i_36 = t;
          t = s_79;
          t = u_79(t);
          l_36 = t;
          t = (ATerm) ATinsert(CheckATermList(l_36), r_79);
          f_11 = t;
          t = SSLsetAnnotations(f_11, i_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_79;
        t = l_134(t);
      }
    return(t);
  }
  t = u_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  b_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_79;
    }
  else
    {
      static ATerm g_6 (ATerm t);
      static ATerm g_6 (ATerm t)
      {
        t = not_null(d_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_79 = ATgetFirst((ATermList) t);
          if(((d_79 != NULL) && (d_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_79;
      t = at_end_1_0(g_6, t);
    }
  return(t);
}
static ATerm g_80 (ATerm y_79, ATerm t)
{
  ATerm z_79 = NULL;
  t = SSL_explode_term(y_79);
  if(match_cons(t, sym__2))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  d_80 = t;
  if(match_cons(t, sym__2))
    {
      b_80 = ATgetArgument(t, 0);
      c_80 = ATgetArgument(t, 1);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_6 (ATerm t);
            static ATerm h_6 (ATerm t)
            {
              t = c_80;
              return(t);
            }
            t = b_80;
            t = at_end_1_0(h_6, t);
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = g_80(d_80, t);
          }
      }
    }
  else
    {
      t = g_80(d_80, t);
    }
  return(t);
}
static ATerm k_10 (ATerm o_95, ATerm p_95, ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
  t = o_95;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_80 = NULL;
        t = term_m_25;
        m_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_25, o_95);
        t = y_10(m_80, o_95, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATempty;
      }
  }
  i_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_80, p_95);
  t = conc_0_0(t);
  h_80 = t;
  t = term_m_25;
  j_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, o_95, h_80);
  t = lookup_table_0_1(j_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(o_95, h_80, k_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, o_95, h_80);
  return(t);
}
static ATerm z_10 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL;
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_33 = ATgetArgument(t, 0);
            ATerm x_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        t = y_10(b_63, c_63, t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = (ATerm) ATempty;
      }
  }
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_63, c_63, (ATerm) ATinsert(CheckATermList(p_80), a_63));
  t = lookup_table_0_1(b_63, t);
  s_80 = t;
  t = (ATerm) ATinsert(CheckATermList(p_80), a_63);
  q_80 = t;
  t = s_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(c_63, q_80, r_80, t);
  t = o_80;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
      t = term_w_31;
      t = q_0(t);
      d_81 = t;
      t = term_j_32;
      e_81 = t;
      t = term_k_32;
      f_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_32, term_k_32, d_81);
      t = z_10(e_81, f_81, d_81, t);
      _fail(t);
    }
  else
    {
      ATerm j_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_80 = ATgetFirst((ATermList) t);
          a_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_81 = ATgetFirst((ATermList) t);
          c_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_80;
      t = m_0(t);
      t = b_81;
      t = p_0(t);
      j_81 = t;
      t = (ATerm) ATinsert(CheckATermList(c_81), j_81);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
  l_81 = t;
  t = term_j_25;
  m_81 = t;
  t = (ATerm) ATinsert(ATempty, l_81);
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATempty, l_81));
  t = k_10(m_81, n_81, t);
  t = l_81;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm o_81 = NULL;
  o_81 = t;
  if(match_string(t, "--library"))
    {
      t = o_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = o_81;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
  p_81 = t;
  t = term_b_26;
  q_81 = t;
  t = term_w_31;
  r_81 = t;
  t = term_c_34;
  t = b_11(q_81, r_81, t);
  t = p_81;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(j_6, m_6, r_6, t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = Option_3_0(t_6, u_6, w_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_31;
  t = whoami_0_0(t);
  s_81 = t;
  t = term_g_34;
  u_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_34), s_81);
  v_81 = t;
  t = SSL_printnl(u_81, v_81);
  t = term_d_14;
  t_81 = t;
  t = SSL_exit(t_81);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  t = term_m_25;
  w_81 = t;
  t = term_l_31;
  x_81 = t;
  t = term_m_31;
  t = y_10(w_81, x_81, t);
  return(t);
}
static ATerm t_10 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm i_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_61, l_61);
      LocalPopChoice(m_34);
    }
  else
    {
      t = i_34;
      t = SSL_addr(k_61, l_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL;
  z_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_81;
      t = t_140(t);
    }
  else
    {
      ATerm e_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_82 = ATgetFirst((ATermList) t);
          b_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_82;
      t = foldr_2_0(t_140, u_140, t);
      e_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_82, e_82);
      t = u_140(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(u_36, v_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_82 = NULL,q_36 = NULL,r_36 = NULL;
  t = times_0_0(t);
  r_36 = t;
  t = SSL_explode_term(r_36);
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      q_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_36;
  t = foldr_2_0(x_6, y_6, t);
  h_82 = t;
  t = SSL_TicksToSeconds(h_82);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
  s_82 = t;
  if(match_cons(t, sym__2))
    {
      t_82 = ATgetArgument(t, 0);
      u_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_82;
        if((t_82 != t))
          {
            _fail(t);
          }
        t = s_82;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = (ATerm) ATmakeAppl(sym__2, t_82, u_82);
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_82, u_82);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              t = SSL_gtr(t_82, u_82);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_82, u_82);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_150 (ATerm), ATerm t)
{
  ATerm y_82 = NULL;
  y_82 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
        t = term_m_25;
        b_83 = t;
        t = term_t_32;
        c_83 = t;
        t = term_z_34;
        t = y_10(b_83, c_83, t);
        a_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_83, term_d_14);
        t = geq_0_0(t);
        t = y_82;
        t = g_150(t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = y_82;
      }
  }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,h_83 = NULL,i_83 = NULL;
  t = run_time_0_0(t);
  e_83 = t;
  t = term_w_31;
  t = whoami_0_0(t);
  f_83 = t;
  t = term_g_34;
  h_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), e_83), term_a_35), f_83);
  i_83 = t;
  t = SSL_printnl(h_83, i_83);
  t = (ATerm) ATmakeAppl(sym__2, term_g_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), e_83), term_a_35), f_83));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_14;
  j_83 = t;
  t = SSL_exit(j_83);
  return(t);
}
static ATerm c_11 (ATerm m_67, ATerm n_67, ATerm o_67, ATerm t)
{
  ATerm k_83 = NULL;
  t = SSL_hashtable_put(o_67, m_67, n_67);
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_83);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_64, ATerm t)
{
  ATerm k_84 = NULL;
  t = table_hashtable_0_0(t);
  k_84 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_37 = NULL;
        t = k_84;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_11(n_64, g_37, t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        {
          ATerm l_37 = NULL;
          t = n_64;
          t = table_create_0_0(t);
          t = k_84;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_11(n_64, l_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm n_84 = NULL;
  t = SSL_hashtable_create(u_67, v_67);
  n_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_84);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,s_84 = NULL,y_84 = NULL;
  o_84 = t;
  t = term_g_35;
  s_84 = t;
  t = term_h_35;
  y_84 = t;
  t = o_84;
  t = new_hashtable_0_2(s_84, y_84, t);
  p_84 = t;
  t = o_84;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(o_84, p_84, q_84, t);
  t = o_84;
  return(t);
}
static ATerm v_10 (ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm z_84 = NULL;
  t = SSL_hashtable_remove(s_67, r_67);
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_84);
  return(t);
}
static ATerm w_10 (ATerm w_67, ATerm t)
{
  ATerm a_85 = NULL;
  t = SSL_hashtable_destroy(w_67);
  a_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_85);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_85 = NULL;
  t = SSL_table_hashtable();
  c_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_85);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  d_85 = t;
  t = table_hashtable_0_0(t);
  e_85 = t;
  t = lookup_table_0_1(d_85, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_10(g_85, t);
  t = e_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(d_85, f_85, t);
  t = d_85;
  return(t);
}
ATerm fetch_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  static ATerm d_86 (ATerm t);
  static ATerm d_86 (ATerm t)
  {
    ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
    a_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_86 = ATgetFirst((ATermList) t);
        c_86 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_37 = NULL,t_37 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(a_86);
          q_37 = t;
          t = b_86;
          t = e_134(t);
          t_37 = t;
          t = (ATerm) ATinsert(CheckATermList(c_86), t_37);
          h_11 = t;
          t = SSLsetAnnotations(h_11, q_37);
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          {
            ATerm b_38 = NULL,e_38 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(a_86);
            b_38 = t;
            t = c_86;
            t = d_86(t);
            e_38 = t;
            t = (ATerm) ATinsert(CheckATermList(e_38), b_86);
            l_11 = t;
            t = SSLsetAnnotations(l_11, b_38);
          }
        }
    }
    return(t);
  }
  t = d_86(t);
  return(t);
}
static ATerm d_11 (ATerm p_67, ATerm q_67, ATerm t)
{
  t = SSL_hashtable_get(q_67, p_67);
  return(t);
}
static ATerm y_10 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm g_86 = NULL;
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(v_64, g_86, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  t = term_k_35;
  i_86 = t;
  t = term_w_31;
  j_86 = t;
  t = term_l_35;
  t = b_11(i_86, j_86, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  t = term_k_35;
  m_86 = t;
  t = term_w_31;
  n_86 = t;
  t = term_l_35;
  t = b_11(m_86, n_86, t);
  t = term_q_35;
  k_86 = t;
  t = term_w_31;
  l_86 = t;
  t = term_u_35;
  t = b_11(k_86, l_86, t);
  t = term_v_35;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_35 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_7, e_7, g_7, t);
      LocalPopChoice(b_36);
    }
  else
    {
      t = y_35;
      t = Option_3_0(h_7, k_7, l_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,q_11 = NULL;
  t_86 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_86 = ATgetFirst((ATermList) t);
      q_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_86);
  o_86 = t;
  t = p_86;
  t = c_105(t);
  r_86 = t;
  t = q_86;
  t = d_105(t);
  s_86 = t;
  t = (ATerm) ATinsert(CheckATermList(s_86), r_86);
  q_11 = t;
  t = SSLsetAnnotations(q_11, o_86);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_154 (ATerm), ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,d_87 = NULL,e_87 = NULL,x_11 = NULL;
  y_86 = t;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_36;
        t = q_154(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
      }
  }
  t = y_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_87 = ATgetFirst((ATermList) t);
      b_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_86);
  z_86 = t;
  t = term_l_31;
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, a_87);
  t = b_11(e_87, a_87, t);
  t = b_87;
  {
    static ATerm o_87 (ATerm t);
    static ATerm o_87 (ATerm t)
    {
      ATerm f_36 = t;
      int g_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_87 = NULL;
              h_87 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_87;
              LocalPopChoice(j_36);
            }
          else
            {
              t = h_36;
              t = q_154(t);
              t = Cons_2_0(_id, o_87, t);
            }
          LocalPopChoice(g_36);
        }
      else
        {
          t = f_36;
          {
            ATerm k_87 = NULL,l_87 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_87 = ATgetFirst((ATermList) t);
                l_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_87), (ATerm) ATmakeAppl(sym_Undefined_1, k_87));
          }
        }
      return(t);
    }
    t = o_87(t);
  }
  d_87 = t;
  t = (ATerm) ATinsert(CheckATermList(d_87), (ATerm) ATmakeAppl(sym_Program_1, a_87));
  x_11 = t;
  t = SSLsetAnnotations(x_11, z_86);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_88 = NULL;
  b_88 = t;
  if(match_string(t, "--help"))
    {
      t = b_88;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_88;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_88;
        }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL;
  t = term_k_36;
  c_88 = t;
  t = term_w_31;
  d_88 = t;
  t = term_m_36;
  t = b_11(c_88, d_88, t);
  t = term_n_36;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_o_36;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm n_154 (ATerm), ATerm o_154 (ATerm), ATerm p_154 (ATerm), ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  v_87 = t;
  t = term_j_32;
  w_87 = t;
  t = term_p_36;
  t = lookup_table_0_1(w_87, t);
  a_88 = t;
  t = term_k_32;
  x_87 = t;
  t = (ATerm) ATempty;
  y_87 = t;
  t = a_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(x_87, y_87, z_87, t);
  t = v_87;
  {
    static ATerm m_7 (ATerm t);
    static ATerm m_7 (ATerm t)
    {
      ATerm s_36 = t;
      int t_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_154(t);
          LocalPopChoice(t_36);
        }
      else
        {
          t = s_36;
          {
            ATerm w_36 = t;
            int x_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_7, p_7, q_7, t);
                LocalPopChoice(x_36);
              }
            else
              {
                t = w_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_7, t);
  }
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_88 = NULL;
        o_88 = t;
        {
          ATerm a_37 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_38 = NULL;
              t = o_88;
              {
                ATerm c_37 = t;
                int d_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_38 = NULL,p_38 = NULL;
                    t = term_m_25;
                    o_38 = t;
                    t = term_k_36;
                    p_38 = t;
                    t = term_e_37;
                    t = y_10(o_38, p_38, t);
                    LocalPopChoice(d_37);
                  }
                else
                  {
                    t = c_37;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = o_88;
              t = o_154(t);
              t = term_b_14;
              m_38 = t;
              t = SSL_exit(m_38);
              LocalPopChoice(b_37);
            }
          else
            {
              t = a_37;
              {
                ATerm t_38 = NULL,v_38 = NULL,w_38 = NULL;
                t = term_m_25;
                v_38 = t;
                t = term_k_35;
                w_38 = t;
                t = term_f_37;
                t = y_10(v_38, w_38, t);
                t = o_88;
                t = p_154(t);
                t = term_b_14;
                t_38 = t;
                t = SSL_exit(t_38);
              }
            }
        }
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
              static ATerm v_7 (ATerm t);
              static ATerm v_7 (ATerm t)
              {
                ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL,p_12 = NULL;
                u_88 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_88);
                s_88 = t;
                t = t_88;
                if(((t_87 != NULL) && (t_87 != t)))
                  _fail(t);
                else
                  t_87 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_88);
                p_12 = t;
                t = SSLsetAnnotations(p_12, s_88);
                return(t);
              }
              t = fetch_1_0(v_7, t);
              t = term_g_34;
              q_88 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_87)), term_j_37);
              r_88 = t;
              t = SSL_printnl(q_88, r_88);
              t = (ATerm) ATmakeAppl(sym__2, term_g_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_87)), term_j_37));
              t = o_154(t);
              t = term_d_14;
              p_88 = t;
              t = SSL_exit(p_88);
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
            }
        }
      }
  }
  u_87 = t;
  t = term_j_32;
  t = table_destroy_0_0(t);
  t = u_87;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_152 (ATerm), ATerm d_152 (ATerm), ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL;
  t = parse_options_3_0(c_152, d_152, e_152, t);
  z_88 = t;
  t = term_k_37;
  t = table_create_0_0(t);
  t = term_k_37;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, term_m_37, z_88);
  t = lookup_table_0_1(a_89, t);
  d_89 = t;
  t = term_m_37;
  b_89 = t;
  t = d_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(b_89, z_88, c_89, t);
  t = z_88;
  t = f_152(t);
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_152(t);
        t = report_success_0_0(t);
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm p_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(r_37);
    }
  else
    {
      t = p_37;
      {
        ATerm s_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_37);
          }
        else
          {
            t = s_37;
            {
              ATerm v_37 = t;
              int w_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_37);
                }
              else
                {
                  t = v_37;
                  {
                    ATerm x_37 = t;
                    int y_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, d_8, e_8, t);
                        LocalPopChoice(y_37);
                      }
                    else
                      {
                        t = x_37;
                        {
                          ATerm z_37 = t;
                          int a_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_38);
                            }
                          else
                            {
                              t = z_37;
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
static ATerm z_7 (ATerm t)
{
  t = input_1_0(f_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL;
  t = term_k_29;
  f_89 = t;
  t = term_w_31;
  g_89 = t;
  t = term_c_38;
  t = b_11(f_89, g_89, t);
  t = term_d_38;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(w_7, default_system_usage_0_0, default_system_about_0_0, _id, z_7, t);
  return(t);
}
