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
Symbol sym_Declaration2_2;
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
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
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
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_e_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_x_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_z_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_m_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_d_31;
ATerm term_a_31;
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
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
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
ATerm term_g_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
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
ATerm term_g_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_10, (ATerm) ATempty);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Id_1, term_f_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Id_1, term_b_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_11, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Some_1, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_10, term_p_11);
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
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Id_1, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Return_1, term_g_11);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Id_1, term_f_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATempty);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
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
  term_k_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_10, term_m_11);
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
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
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
  term_j_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_17, term_m_11);
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
  term_r_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_17, term_m_11);
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
  term_p_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_20, term_m_11);
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
  term_d_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_c_21, term_m_11);
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
  term_r_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_q_22, (ATerm)ATempty, term_b_10, (ATerm) ATempty);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(122);
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
  term_h_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_e_26, term_m_11);
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
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_d_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_b_14);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_14);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_k_31);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_k_31);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_p_33);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_t_31);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_l_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_q_32);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_k_31);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_k_31);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_k_31);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, (ATerm) ATempty);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_g_35);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_k_31);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm h_3 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm x_156 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_126 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm s_9 (ATerm r_30, ATerm t_30, ATerm s_30, ATerm t);
static ATerm g_10 (ATerm i_63, ATerm j_63, ATerm t);
static ATerm x_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm u_9 (ATerm d_30, ATerm g_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm v_9 (ATerm p_35, ATerm o_35, ATerm t);
static ATerm w_9 (ATerm n_197, ATerm l_35, ATerm n_35, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm u_53 (ATerm a_28, ATerm e_28, ATerm j_28, ATerm k_28, ATerm t);
static ATerm v_53 (ATerm u_29, ATerm w_29, ATerm x_29, ATerm t);
static ATerm y_53 (ATerm h_30, ATerm k_30, ATerm p_30, ATerm t);
static ATerm z_53 (ATerm y_31, ATerm a_32, ATerm g_32, ATerm m_32, ATerm t);
static ATerm a_54 (ATerm c_38, ATerm j_38, ATerm q_38, ATerm e_39, ATerm t);
static ATerm b_54 (ATerm o_39, ATerm p_39, ATerm x_39, ATerm g_40, ATerm t);
static ATerm c_54 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm q_40, ATerm t);
static ATerm d_54 (ATerm a_41, ATerm f_41, ATerm h_41, ATerm i_41, ATerm m_41, ATerm n_41, ATerm o_41, ATerm p_41, ATerm t);
static ATerm e_54 (ATerm z_42, ATerm b_43, ATerm c_43, ATerm d_43, ATerm h_43, ATerm i_43, ATerm t);
static ATerm g_54 (ATerm t_43, ATerm u_43, ATerm v_43, ATerm w_43, ATerm b_44, ATerm e_44, ATerm t);
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
ATerm escape_chars_1_0 (ATerm l_143 (ATerm), ATerm t);
static ATerm c_10 (ATerm f_1 (ATerm), ATerm l_1 (ATerm), ATerm h_1, ATerm m_1, ATerm e_1, ATerm t);
ATerm thread_map_1_0 (ATerm n_140 (ATerm), ATerm t);
static ATerm o_61 (ATerm q_58, ATerm r_58, ATerm s_58, ATerm t_58, ATerm v_58, ATerm t);
static ATerm p_61 (ATerm r_59, ATerm s_59, ATerm t_59, ATerm u_59, ATerm t);
static ATerm q_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm c_60, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_126 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm translate_body_0_0 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_141 (ATerm), ATerm t);
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
static ATerm h_10 (ATerm u_39, ATerm s_39, ATerm t);
ATerm Cify_1_0 (ATerm a_1 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm i_143 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm a_140 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm i_10 (ATerm h_39, ATerm g_39, ATerm t);
static ATerm x_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm j_10 (ATerm b_40, ATerm e_40, ATerm t);
static ATerm k_10 (ATerm h_157 (ATerm), ATerm k_83, ATerm i_83, ATerm t);
static ATerm f_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm m_10 (ATerm q_57, ATerm r_57, ATerm t);
static ATerm n_10 (ATerm v_41, ATerm w_41, ATerm t);
static ATerm p_10 (ATerm o_132 (ATerm), ATerm a_274, ATerm b_42, ATerm t);
static ATerm o_10 (ATerm r_41, ATerm s_41, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_1_0 (ATerm q_150 (ATerm), ATerm t);
static ATerm i_73 (ATerm c_73, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_10 (ATerm x_41, ATerm t);
static ATerm r_10 (ATerm u_55, ATerm v_55, ATerm t);
static ATerm s_10 (ATerm s_57, ATerm t_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_74 (ATerm s_73, ATerm t);
static ATerm u_74 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t);
static ATerm v_74 (ATerm g_74, ATerm h_74, ATerm i_74, ATerm t);
static ATerm t_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_150 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_11 (ATerm n_94, ATerm o_94, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm o_133 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_78 (ATerm v_77, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_10 (ATerm u_94, ATerm v_94, ATerm t);
static ATerm a_11 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm t);
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm w_0 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_10 (ATerm g_61, ATerm h_61, ATerm t);
ATerm foldr_2_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_148 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm need_help_1_0 (ATerm h_150 (ATerm), ATerm t);
static ATerm d_11 (ATerm p_67, ATerm q_67, ATerm r_67, ATerm t);
ATerm lookup_table_0_1 (ATerm j_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_67, ATerm y_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_10 (ATerm u_67, ATerm v_67, ATerm t);
static ATerm x_10 (ATerm z_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_132 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_133 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_11 (ATerm s_67, ATerm t_67, ATerm t);
static ATerm z_10 (ATerm q_64, ATerm r_64, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_152 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_152 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_150 (ATerm), ATerm k_150 (ATerm), ATerm l_150 (ATerm), ATerm m_150 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
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
  int i_8 = stack_ptr;
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
      LocalPopChoice(i_8);
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
      ATerm l_8 = ATgetFirst((ATermList) t);
      if(match_cons(l_8, sym_Compound_2))
        {
          ATerm o_8 = ATgetArgument(l_8, 0);
          if(((ATgetType(o_8) != AT_LIST) || !(ATisEmpty(o_8))))
            _fail(t);
          h_4 = ATgetArgument(l_8, 1);
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
      ATerm r_8 = ATgetFirst((ATermList) t);
      if(match_cons(r_8, sym_Compound_2))
        {
          ATerm s_8 = ATgetArgument(r_8, 0);
          if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
            _fail(t);
          d_5 = ATgetArgument(r_8, 1);
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
      ATerm w_8 = ATgetFirst((ATermList) t);
      if(match_cons(w_8, sym_Compound_2))
        {
          ATerm x_8 = ATgetArgument(w_8, 0);
          if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
            _fail(t);
          w_5 = ATgetArgument(w_8, 1);
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
      ATerm z_8 = ATgetFirst((ATermList) t);
      if(match_cons(z_8, sym_Compound_2))
        {
          ATerm b_9 = ATgetArgument(z_8, 0);
          if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
            _fail(t);
          d_6 = ATgetArgument(z_8, 1);
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
                        int d_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_4 = NULL;
                            t = f_3;
                            t = listbu1_1_0(a_0, t);
                            g_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, g_4);
                            LocalPopChoice(d_9);
                          }
                        else
                          {
                            t = c_9;
                            {
                              ATerm f_9 = t;
                              int h_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                                  t = conc_0_0(t);
                                  m_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, m_4, j_3);
                                  LocalPopChoice(h_9);
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
ATerm repeat_2_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm o_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_125(t);
        t = f_6(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = o_9;
        t = m_125(t);
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm x_156 (ATerm), ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    t = x_156(t);
    {
      ATerm t_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 = NULL,i_7 = NULL,k_7 = NULL,b_2 = NULL,e_2 = NULL,f_2 = NULL,r_0 = NULL;
          h_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_7 = ATgetFirst((ATermList) t);
              k_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_7);
          b_2 = t;
          t = i_7;
          t = l_7(t);
          e_2 = t;
          t = k_7;
          t = l_7(t);
          f_2 = t;
          t = (ATerm) ATinsert(CheckATermList(f_2), e_2);
          r_0 = t;
          t = SSLsetAnnotations(r_0, b_2);
          LocalPopChoice(y_9);
        }
      else
        {
          t = t_9;
          t = SRTS_all(l_7, t);
        }
    }
    t = x_156(t);
    return(t);
  }
  t = l_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(m_126, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = m_126(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_r_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_12, (ATerm) ATinsert(ATempty, term_g_11))))), term_y_11)));
  return(t);
}
static ATerm s_9 (ATerm r_30, ATerm t_30, ATerm s_30, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, t_30)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_30), term_z_11, s_30)));
  return(t);
}
static ATerm g_10 (ATerm i_63, ATerm j_63, ATerm t)
{
  ATerm n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
  t = z_10(i_63, j_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_7 = ATgetFirst((ATermList) t);
      {
        ATerm m_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_7;
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
    ATerm n_12 = t;
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
        t = n_12;
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
                ATerm i_6 = NULL,l_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(i_11);
                i_6 = t;
                t = j_11;
                {
                  ATerm t_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm p_6 = NULL;
                      p_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = p_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = p_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = t_12;
                    }
                }
                l_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, l_6, k_11);
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
static ATerm u_9 (ATerm d_30, ATerm g_30, ATerm t)
{
  ATerm b_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,o_12 = NULL,c_14 = NULL,f_14 = NULL;
  t = d_30;
  if(match_cons(t, sym_Op_2))
    {
      f_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm y_6 = NULL,c_7 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(d_30);
        y_6 = t;
        t = c_14;
        t = map_1_0(Cache_0_0, t);
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, f_14, c_7);
        m_6 = t;
        t = SSLsetAnnotations(m_6, y_6);
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
            ATerm u_7 = NULL,x_7 = NULL,y_7 = NULL,o_6 = NULL;
            t = SSLgetAnnotations(d_30);
            u_7 = t;
            t = f_14;
            t = Cache_0_0(t);
            x_7 = t;
            t = c_14;
            t = Cache_0_0(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, x_7, y_7);
            o_6 = t;
            t = SSLsetAnnotations(o_6, u_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_14 = ATgetArgument(t, 0);
              {
                ATerm d_8 = NULL,r_6 = NULL;
                t = SSLgetAnnotations(d_30);
                d_8 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_14);
                r_6 = t;
                t = SSLsetAnnotations(r_6, d_8);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  f_14 = ATgetArgument(t, 0);
                  {
                    ATerm n_8 = NULL,s_6 = NULL;
                    t = SSLgetAnnotations(d_30);
                    n_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, f_14);
                    s_6 = t;
                    t = SSLsetAnnotations(s_6, n_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      f_14 = ATgetArgument(t, 0);
                      {
                        ATerm a_9 = NULL,x_6 = NULL;
                        t = SSLgetAnnotations(d_30);
                        a_9 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, f_14);
                        x_6 = t;
                        t = SSLsetAnnotations(x_6, a_9);
                      }
                    }
                  else
                    {
                      ATerm e_9 = NULL,b_7 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          f_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(d_30);
                      e_9 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, f_14);
                      b_7 = t;
                      t = SSLsetAnnotations(b_7, e_9);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  b_12 = t;
  t = term_y_12;
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, b_12);
  t = r_10(o_12, b_12, t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12);
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12));
  t = k_10(c_1, d_30, l_12, t);
  t = h_12;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_14 = NULL,k_9 = NULL,l_9 = NULL;
        t = (ATerm) ATempty;
        k_9 = t;
        t = term_x_12;
        l_9 = t;
        t = term_c_13;
        t = g_10(l_9, k_9, t);
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
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, b_12, h_12, g_30)));
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, b_12, h_12, g_30))));
  t = k_10(j_1, j_12, k_12, t);
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
        ATerm e_10 = NULL,n_11 = NULL;
        t = term_w_12;
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
        t = g_10(n_11, y_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            e_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, e_10);
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
          t = g_10(v_11, y_14, t);
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
              t = u_9(a_16, a_12, t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              {
                ATerm u_12 = NULL,v_12 = NULL;
                v_12 = t;
                t = SSL_explode_term(v_12);
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
                              u_12 = ATgetFirst((ATermList) z_13);
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
                t = u_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm p_35, ATerm o_35, ATerm t)
{
  ATerm e_16 = NULL;
  t = new_0_0(t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_16), term_m_11), (ATerm) ATmakeAppl(sym_AssignInit_1, o_35)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, p_35, (ATerm) ATmakeAppl(sym_Id_1, e_16))));
  return(t);
}
static ATerm w_9 (ATerm n_197, ATerm l_35, ATerm n_35, ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL,i_16 = NULL;
  t = SSLgetAnnotations(n_197);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_35);
  i_16 = t;
  t = SSLsetAnnotations(i_16, f_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, h_16, n_35);
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
  t = u_10(i_18, j_18, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_15 = NULL,z_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_15 = ATgetFirst((ATermList) t);
      z_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_15), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_15), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_15), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_15), term_j_14), term_e_14);
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
            ATerm h_18 = NULL,d_13 = NULL,e_13 = NULL,h_13 = NULL;
            t = x_17;
            t = foldr_3_0(n_1, o_1, p_1, t);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_17, h_18);
            e_13 = t;
            t = term_n_14;
            h_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, z_17, h_18));
            t = g_10(h_13, e_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm o_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("o_0", 0, ATtrue)))
                  _fail(t);
                d_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(CheckATermList(x_17), (ATerm) ATmakeAppl(sym_Id_1, d_13))));
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
                                              ATerm n_15 = (ATerm) ATgetNext((ATermList) t);
                                              if(((ATgetType(n_15) != AT_LIST) || !(ATisEmpty(n_15))))
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
                            ATerm p_18 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL,o_15 = NULL;
                            t = SSL_explode_string(z_17);
                            t = escape_chars_1_0(q_1, t);
                            o_15 = t;
                            t = SSL_implode_string(o_15);
                            n_16 = t;
                            t = SSL_explode_string(n_16);
                            p_16 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_16), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                            t = conc_0_0(t);
                            m_16 = t;
                            t = SSL_implode_string(m_16);
                            p_18 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_s_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, p_18)))))));
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
                              ATerm e_18 = NULL;
                              if(match_cons(t, sym_Int_1))
                                {
                                  z_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSL_int_to_string(z_17);
                              e_18 = t;
                              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_18))));
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
  ATerm h_23 = NULL,k_23 = NULL,m_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,v_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      r_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  if(match_string(t, "Cons"))
    {
      ATerm e_23 = NULL;
      t = v_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          k_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_23 = ATgetFirst((ATermList) t);
          p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_23;
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
                  ATerm x_26 = NULL,r_7 = NULL;
                  t = SSLgetAnnotations(w_24);
                  x_26 = t;
                  t = r_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, r_26);
                  r_7 = t;
                  t = SSLsetAnnotations(r_7, x_26);
                }
              }
            else
              {
                ATerm c_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,h_8 = NULL,c_8 = NULL,t_7 = NULL;
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
                c_8 = t;
                t = SSLsetAnnotations(c_8, f_27);
                j_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, m_27, j_27);
                h_8 = t;
                t = SSLsetAnnotations(h_8, c_27);
              }
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, m_23));
          }
      }
      e_23 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_16, (ATerm) ATinsert(ATinsert(ATempty, h_23), e_23)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = v_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_16;
    }
  return(t);
}
static ATerm u_53 (ATerm a_28, ATerm e_28, ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm u_28 = NULL,w_28 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = a_28;
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
  t = (ATerm) ATmakeAppl(sym__2, e_28, term_b_14);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm y_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,g_29 = NULL;
      if(match_cons(t, sym__2))
        {
          y_28 = ATgetArgument(t, 0);
          a_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_29);
      d_29 = t;
      t = y_28;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_29 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28));
                n_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28)));
                t = w_9(y_28, g_29, n_29, t);
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                {
                  ATerm p_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28));
                  p_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28)));
                  t = v_9(y_28, p_29, t);
                }
              }
          }
        }
      else
        {
          ATerm r_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28));
          r_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_29)), j_28)));
          t = v_9(y_28, r_29, t);
        }
      b_29 = t;
      t = term_d_14;
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, term_d_14);
      t = u_10(a_29, e_29, t);
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
  t = e_28;
  t = foldr_3_0(w_1, x_1, y_1, t);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, w_28);
  s_27 = t;
  t = term_n_14;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, a_28, w_28));
  t = g_10(t_27, s_27, t);
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
static ATerm v_53 (ATerm u_29, ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm a_30 = NULL;
  t = SSL_real_to_string(u_29);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, w_29)), term_d_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_17, w_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, a_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
  return(t);
}
static ATerm y_53 (ATerm h_30, ATerm k_30, ATerm p_30, ATerm t)
{
  ATerm n_31 = NULL;
  t = SSL_int_to_string(h_30);
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, k_30)), term_l_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_17, k_30))), (ATerm) ATmakeAppl(sym_IntConst_1, n_31))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
  return(t);
}
static ATerm z_53 (ATerm y_31, ATerm a_32, ATerm g_32, ATerm m_32, ATerm t)
{
  t = SSLgetAnnotations(y_31);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_32), term_u_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_32), g_32)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, g_32))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_32), term_z_11, g_32)));
  return(t);
}
static ATerm a_54 (ATerm c_38, ATerm j_38, ATerm q_38, ATerm e_39, ATerm t)
{
  t = SSLgetAnnotations(c_38);
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
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, j_38), term_u_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, j_38), q_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, q_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_38), term_z_11, q_38)));
  return(t);
}
static ATerm b_54 (ATerm o_39, ATerm p_39, ATerm x_39, ATerm g_40, ATerm t)
{
  t = SSLgetAnnotations(o_39);
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
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_39), x_39), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, x_39))))));
  return(t);
}
static ATerm c_54 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm q_40, ATerm t)
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
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_40), term_z_11, n_40));
  return(t);
}
static ATerm d_54 (ATerm a_41, ATerm f_41, ATerm h_41, ATerm i_41, ATerm m_41, ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm h_42 = NULL,q_42 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t = f_41;
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
  t = (ATerm) ATmakeAppl(sym__2, i_41, term_b_14);
  {
    static ATerm z_1 (ATerm t);
    static ATerm z_1 (ATerm t)
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,x_42 = NULL,y_42 = NULL;
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
      u_42 = t;
      t = term_d_14;
      y_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_42, term_d_14);
      t = u_10(t_42, y_42, t);
      x_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_42), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_42)), (ATerm) ATmakeAppl(sym_Id_1, a_41))))), x_42);
      return(t);
    }
    t = thread_map_1_0(z_1, t);
  }
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      {
        ATerm d_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_41, h_41);
  x_27 = t;
  t = term_n_14;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, f_41, h_41));
  t = g_10(y_27, x_27, t);
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
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_27)), (ATerm) ATmakeAppl(sym_Id_1, a_41))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_41), n_41, o_41))));
  return(t);
}
static ATerm e_54 (ATerm z_42, ATerm b_43, ATerm c_43, ATerm d_43, ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm r_43 = NULL;
  t = SSL_real_to_string(b_43);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, r_43)), (ATerm) ATmakeAppl(sym_Id_1, z_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, z_42), d_43, h_43))));
  return(t);
}
static ATerm g_54 (ATerm t_43, ATerm u_43, ATerm v_43, ATerm w_43, ATerm b_44, ATerm e_44, ATerm t)
{
  ATerm o_44 = NULL;
  t = SSL_int_to_string(u_43);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, o_44)), (ATerm) ATmakeAppl(sym_Id_1, t_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, t_43), w_43, b_44))));
  return(t);
}
static ATerm h_54 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t)
{
  t = q_44;
  {
    ATerm n_18 = t;
    if((PushChoice() == 0))
      {
        ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,m_8 = NULL;
        c_45 = t;
        if(match_cons(t, sym_Var_1))
          {
            b_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_45);
        a_45 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, b_45);
        m_8 = t;
        t = SSLsetAnnotations(m_8, a_45);
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
  t = u_10(s_29, t_29, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm m_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(match_cons(o_18, sym_SVar_1))
        {
          m_47 = ATgetArgument(o_18, 0);
        }
      else
        _fail(t);
      {
        ATerm q_18 = ATgetArgument(t, 1);
        if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
          _fail(t);
      }
      {
        ATerm r_18 = ATgetArgument(t, 2);
        if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, m_47);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = topdown_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
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
  ATerm h_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(match_cons(y_18, sym_SVar_1))
        {
          h_48 = ATgetArgument(y_18, 0);
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
  t = (ATerm) ATmakeAppl(sym_Id_1, h_48);
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
  ATerm a_50 = NULL;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_50), term_m_11), term_h_19);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,m_50 = NULL,n_50 = NULL;
  k_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_50;
  if(match_cons(t, sym_Var_1))
    {
      j_50 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_50;
            t = w_9(m_50, j_50, n_50, t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = k_50;
            t = v_9(m_50, n_50, t);
          }
      }
    }
  else
    {
      t = k_50;
      t = v_9(m_50, n_50, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_28 = ATgetFirst((ATermList) t);
      h_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_28;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(h_28), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(h_28), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(h_28), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(h_28), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm q_29 = NULL,v_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_29 = ATgetFirst((ATermList) t);
      v_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(v_29), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(v_29), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(v_29), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(v_29), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,s_45 = NULL,t_45 = NULL,w_45 = NULL,x_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,l_46 = NULL;
  f_46 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_46 = ATgetArgument(t, 0);
      d_46 = ATgetArgument(t, 1);
      {
        ATerm q_46 = NULL,r_46 = NULL;
        t = l_46;
        t = map_1_0(SDefToDeclaration_0_0, t);
        q_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_46, l_46);
        t = conc_0_0(t);
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym_Compound_2, r_46, (ATerm) ATinsert(ATempty, d_46));
      }
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          l_46 = ATgetArgument(t, 0);
          {
            ATerm t_46 = NULL;
            t = f_46;
            t = new_0_0(t);
            t_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, t_46), term_m_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, t_46)))), term_l_19), l_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_46), term_z_11, term_g_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              l_46 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, l_46);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  l_46 = ATgetArgument(t, 0);
                  d_46 = ATgetArgument(t, 1);
                  a_46 = ATgetArgument(t, 2);
                  {
                    ATerm g_47 = NULL,h_47 = NULL,k_47 = NULL;
                    t = l_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        e_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = d_46;
                    t = map_1_0(a_2, t);
                    g_47 = t;
                    t = a_46;
                    t = map_1_0(c_2, t);
                    h_47 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_11)), h_47), g_47);
                    t = concat_0_0(t);
                    k_47 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, e_46), k_47)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      l_46 = ATgetArgument(t, 0);
                      d_46 = ATgetArgument(t, 1);
                      a_46 = ATgetArgument(t, 2);
                      {
                        ATerm d_48 = NULL,f_48 = NULL,g_48 = NULL;
                        t = d_46;
                        t = map_1_0(h_2, t);
                        d_48 = t;
                        t = a_46;
                        t = map_1_0(i_2, t);
                        f_48 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_48, f_48);
                        t = conc_0_0(t);
                        g_48 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, l_46), g_48)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          l_46 = ATgetArgument(t, 0);
                          {
                            ATerm p_48 = NULL;
                            t = f_46;
                            t = new_0_0(t);
                            p_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_48), term_m_11), term_m_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11)))), term_u_19), l_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, p_48))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              l_46 = ATgetArgument(t, 0);
                              d_46 = ATgetArgument(t, 1);
                              {
                                ATerm v_48 = NULL;
                                t = f_46;
                                t = new_0_0(t);
                                v_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_48), term_m_11), term_m_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, d_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, v_48))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  l_46 = ATgetArgument(t, 0);
                                  d_46 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, l_46, d_46);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      l_46 = ATgetArgument(t, 0);
                                      d_46 = ATgetArgument(t, 1);
                                      a_46 = ATgetArgument(t, 2);
                                      {
                                        ATerm l_49 = NULL,m_49 = NULL;
                                        t = f_46;
                                        t = new_0_0(t);
                                        l_49 = t;
                                        t = new_0_0(t);
                                        m_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_49), term_m_11), term_d_20)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_49), term_m_11), term_m_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_49))))), term_l_19), l_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, l_49))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          l_46 = ATgetArgument(t, 0);
                                          d_46 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_46, term_g_20, d_46);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              l_46 = ATgetArgument(t, 0);
                                              d_46 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_46, d_46);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  l_46 = ATgetArgument(t, 0);
                                                  d_46 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, d_46), l_46));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      l_46 = ATgetArgument(t, 0);
                                                      d_46 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm z_49 = NULL;
                                                        t = l_46;
                                                        t = map_1_0(l_2, t);
                                                        z_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, z_49)), (ATerm) ATinsert(ATempty, d_46));
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
                                                                  l_46 = ATgetArgument(t, 0);
                                                                  d_46 = ATgetArgument(t, 1);
                                                                  t = l_46;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      e_46 = ATgetArgument(t, 0);
                                                                      h_45 = ATgetArgument(t, 1);
                                                                      t = h_45;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          d_45 = ATgetFirst((ATermList) t);
                                                                          e_45 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = e_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_45 = ATgetFirst((ATermList) t);
                                                                              g_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = g_45;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = e_46;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm i_20 = t;
                                                                                      int j_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_45, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, d_46)))))), (ATerm) ATmakeAppl(sym__2, d_45, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, d_46)))));
                                                                                          t = map_1_0(m_2, t);
                                                                                          i_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, d_46)), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, d_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, i_50), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
                                                                                          LocalPopChoice(j_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_20;
                                                                                          t = u_53(e_46, h_45, d_46, f_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_53(e_46, h_45, d_46, f_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = e_46;
                                                                                  t = u_53(e_46, h_45, d_46, f_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_46;
                                                                              t = u_53(e_46, h_45, d_46, f_46, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = e_46;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm w_20 = t;
                                                                                  int x_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, d_46)), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, d_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
                                                                                      LocalPopChoice(x_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_20;
                                                                                      t = u_53(e_46, h_45, d_46, f_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_53(e_46, h_45, d_46, f_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_46;
                                                                              t = u_53(e_46, h_45, d_46, f_46, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          e_46 = ATgetArgument(t, 0);
                                                                          t = v_53(e_46, d_46, f_46, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              e_46 = ATgetArgument(t, 0);
                                                                              t = y_53(e_46, d_46, f_46, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  e_46 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm b_51 = NULL,r_28 = NULL,s_28 = NULL,z_28 = NULL,b_28 = NULL;
                                                                                    t = SSL_explode_string(e_46);
                                                                                    t = escape_chars_1_0(o_2, t);
                                                                                    b_28 = t;
                                                                                    t = SSL_implode_string(b_28);
                                                                                    s_28 = t;
                                                                                    t = SSL_explode_string(s_28);
                                                                                    z_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_28), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                                                                                    t = conc_0_0(t);
                                                                                    r_28 = t;
                                                                                    t = SSL_implode_string(r_28);
                                                                                    b_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_d_21, d_46))), (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_s_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, b_51))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_g_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SeqVar_1))
                                                                                    {
                                                                                      e_46 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_46), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_46)), (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, (ATerm) ATmakeAppl(sym_Id_1, e_46)))))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, e_46), term_u_14), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_46), term_z_11, term_o_16)))))));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          e_46 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm g_21 = t;
                                                                                            int h_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = z_53(l_46, e_46, d_46, f_46, t);
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
                                                                                                      t = a_54(l_46, e_46, d_46, f_46, t);
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
                                                                                                            t = b_54(l_46, e_46, d_46, f_46, t);
                                                                                                            LocalPopChoice(l_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_21;
                                                                                                            t = c_54(l_46, e_46, d_46, f_46, t);
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
                                                                                              e_46 = ATgetArgument(t, 0);
                                                                                              h_45 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, h_45, d_46)), (ATerm) ATmakeAppl(sym_Match_2, e_46, d_46)));
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
                                                                      l_46 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, l_46, term_g_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          l_46 = ATgetArgument(t, 0);
                                                                          d_46 = ATgetArgument(t, 1);
                                                                          a_46 = ATgetArgument(t, 2);
                                                                          t = l_46;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              e_46 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = d_46;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              c_46 = ATgetFirst((ATermList) t);
                                                                              x_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = c_46;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  p_45 = ATgetArgument(t, 0);
                                                                                  t_45 = ATgetArgument(t, 1);
                                                                                  w_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = p_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  s_45 = ATgetArgument(t, 0);
                                                                                  o_45 = ATgetArgument(t, 1);
                                                                                  t = t_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_45 = ATgetFirst((ATermList) t);
                                                                                      k_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = k_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          l_45 = ATgetFirst((ATermList) t);
                                                                                          n_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = n_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = l_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  m_45 = ATgetArgument(t, 0);
                                                                                                  t = i_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      j_45 = ATgetArgument(t, 0);
                                                                                                      t = o_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = s_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm p_21 = t;
                                                                                                              int q_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_46))), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_45), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, (ATerm) ATmakeAppl(sym_Id_1, e_46)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_45), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_20, (ATerm) ATmakeAppl(sym_Id_1, e_46)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_46), x_45, a_46))));
                                                                                                                  LocalPopChoice(q_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_21;
                                                                                                                  t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = s_45;
                                                                                                          t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = s_45;
                                                                                                      t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = s_45;
                                                                                                  t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_45;
                                                                                              t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_45;
                                                                                          t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = o_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = s_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm r_21 = t;
                                                                                                  int s_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_46))), term_t_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_46), x_45, a_46))));
                                                                                                      LocalPopChoice(s_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_21;
                                                                                                      t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_45;
                                                                                              t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_45;
                                                                                          t = d_54(e_46, s_45, o_45, t_45, w_45, x_45, a_46, f_46, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      s_45 = ATgetArgument(t, 0);
                                                                                      t = e_54(e_46, s_45, w_45, x_45, a_46, f_46, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          s_45 = ATgetArgument(t, 0);
                                                                                          t = g_54(e_46, s_45, w_45, x_45, a_46, f_46, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm m_52 = NULL,i_30 = NULL,j_30 = NULL,m_30 = NULL,f_29 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              s_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(s_45);
                                                                                          t = escape_chars_1_0(p_2, t);
                                                                                          f_29 = t;
                                                                                          t = SSL_implode_string(f_29);
                                                                                          j_30 = t;
                                                                                          t = SSL_explode_string(j_30);
                                                                                          m_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_30), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                                                                                          t = conc_0_0(t);
                                                                                          i_30 = t;
                                                                                          t = SSL_implode_string(i_30);
                                                                                          m_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_52))), (ATerm) ATmakeAppl(sym_Id_1, e_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_46), x_45, a_46))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = a_46;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              l_46 = ATgetArgument(t, 0);
                                                                              d_46 = ATgetArgument(t, 1);
                                                                              a_46 = ATgetArgument(t, 2);
                                                                              b_46 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, l_46), (ATerm) ATmakeAppl(sym_Case_3, d_46, a_46, b_46));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  l_46 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, l_46));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      l_46 = ATgetArgument(t, 0);
                                                                                      d_46 = ATgetArgument(t, 1);
                                                                                      t = l_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          e_46 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = d_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          c_46 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm v_21 = t;
                                                                                            int w_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, e_46), term_u_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, e_46), (ATerm) ATmakeAppl(sym_Id_1, c_46))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_46), term_z_11, (ATerm) ATmakeAppl(sym_Id_1, c_46))));
                                                                                                LocalPopChoice(w_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_21;
                                                                                                t = h_54(e_46, d_46, f_46, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_54(e_46, d_46, f_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          l_46 = ATgetArgument(t, 0);
                                                                                          t = l_46;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              e_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_46), term_z_11, term_g_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm s_53 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              l_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_46;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          s_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_g_11, term_z_11, s_53));
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
ATerm escape_chars_1_0 (ATerm l_143 (ATerm), ATerm t)
{
  static ATerm n_55 (ATerm t);
  static ATerm n_55 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,p_8 = NULL;
        t = l_143(t);
        t_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_54 = ATgetFirst((ATermList) t);
            r_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_54);
        p_54 = t;
        t = r_54;
        t = Cons_2_0(_id, n_55, t);
        s_54 = t;
        t = (ATerm) ATinsert(CheckATermList(s_54), q_54);
        p_8 = t;
        t = SSLsetAnnotations(p_8, p_54);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
          m_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_55 = ATgetFirst((ATermList) t);
              l_55 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm v_30 = NULL,y_30 = NULL,q_8 = NULL;
                t = SSLgetAnnotations(m_55);
                v_30 = t;
                t = l_55;
                t = n_55(t);
                y_30 = t;
                t = (ATerm) ATinsert(CheckATermList(y_30), k_55);
                q_8 = t;
                t = SSLsetAnnotations(q_8, v_30);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_55;
            }
        }
      }
    return(t);
  }
  t = n_55(t);
  return(t);
}
static ATerm c_10 (ATerm f_1 (ATerm), ATerm l_1 (ATerm), ATerm h_1, ATerm m_1, ATerm e_1, ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,w_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_1, e_1);
  t = f_1(t);
  if(match_cons(t, sym__2))
    {
      t_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_1, r_55);
  t = l_1(t);
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_55), t_55), s_55);
  return(t);
}
ATerm thread_map_1_0 (ATerm n_140 (ATerm), ATerm t)
{
  static ATerm n_56 (ATerm t);
  static ATerm n_56 (ATerm t)
  {
    ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,g_56 = NULL,i_56 = NULL;
    d_56 = t;
    if(match_cons(t, sym__2))
      {
        g_56 = ATgetArgument(t, 0);
        i_56 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_56 = ATgetFirst((ATermList) t);
        c_56 = (ATerm) ATgetNext((ATermList) t);
        t = d_56;
        t = c_10(n_140, n_56, b_56, c_56, i_56, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_56);
      }
    return(t);
  }
  t = n_56(t);
  return(t);
}
static ATerm o_61 (ATerm q_58, ATerm r_58, ATerm s_58, ATerm t_58, ATerm v_58, ATerm t)
{
  ATerm a_59 = NULL,c_59 = NULL,d_59 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  t = q_58;
  {
    ATerm z_21 = t;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        e_59 = t;
        if(match_string(t, "Nil"))
          {
            t = e_59;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = e_59;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_21;
      }
  }
  t = r_58;
  t = map_1_0(q_2, t);
  t = (ATerm) ATmakeAppl(sym__2, r_58, term_b_14);
  t = thread_map_1_0(r_2, t);
  if(match_cons(t, sym__2))
    {
      a_59 = ATgetArgument(t, 0);
      {
        ATerm a_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_58;
  t = foldr_3_0(s_2, t_2, u_2, t);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_58, d_59);
  f_31 = t;
  t = term_n_14;
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, q_58, d_59));
  t = g_10(g_31, f_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_22) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_59, (ATerm) ATinsert(ATempty, s_58));
  t = conc_0_0(t);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_31)), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_59), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_58)));
  return(t);
}
static ATerm p_61 (ATerm r_59, ATerm s_59, ATerm t_59, ATerm u_59, ATerm t)
{
  ATerm y_59 = NULL;
  t = SSL_real_to_string(r_59);
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, y_59)), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_59)));
  return(t);
}
static ATerm q_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm g_60 = NULL;
  t = SSL_int_to_string(z_59);
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, g_60)), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_60)));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,v_8 = NULL;
  h_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_59);
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_59);
  v_8 = t;
  t = SSLsetAnnotations(v_8, f_59);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(match_cons(c_22, sym_Var_1))
        {
          k_59 = ATgetArgument(c_22, 0);
        }
      else
        _fail(t);
      l_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(l_59);
  m_59 = t;
  t = term_d_14;
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_59, term_d_14);
  t = u_10(l_59, o_59, t);
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_59), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_59)), term_g_11)))), n_59);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL;
  if(match_cons(t, sym__2))
    {
      p_59 = ATgetArgument(t, 0);
      q_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(p_59, q_59, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_31 = ATgetFirst((ATermList) t);
      p_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_31;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(p_31), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_31), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(p_31), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(p_31), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  o_60 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      p_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
      t_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_60;
  if(match_cons(t, sym_Match_1))
    {
      q_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_60;
  if(match_cons(t, sym_Op_2))
    {
      r_60 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
      t = n_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_60 = ATgetFirst((ATermList) t);
          j_60 = (ATerm) ATgetNext((ATermList) t);
          t = j_60;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_60 = ATgetFirst((ATermList) t);
              m_60 = (ATerm) ATgetNext((ATermList) t);
              t = m_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_60;
                  if(match_cons(t, sym_Var_1))
                    {
                      l_60 = ATgetArgument(t, 0);
                      t = h_60;
                      if(match_cons(t, sym_Var_1))
                        {
                          i_60 = ATgetArgument(t, 0);
                          t = r_60;
                          if(match_string(t, "Cons"))
                            {
                              ATerm d_22 = t;
                              int e_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, term_g_11)), term_t_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, term_g_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_60), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_60), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, term_f_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_60), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATinsert(ATempty, term_f_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_60)));
                                  LocalPopChoice(e_22);
                                }
                              else
                                {
                                  t = d_22;
                                  t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                                }
                            }
                          else
                            {
                              t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                            }
                        }
                      else
                        {
                          t = r_60;
                          t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                        }
                    }
                  else
                    {
                      t = r_60;
                      t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                    }
                }
              else
                {
                  t = r_60;
                  t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                }
            }
          else
            {
              t = r_60;
              t = o_61(r_60, n_60, s_60, t_60, o_60, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = r_60;
              if(match_string(t, "Nil"))
                {
                  ATerm g_22 = t;
                  int h_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, term_g_11)), term_t_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, term_g_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_60)));
                      LocalPopChoice(h_22);
                    }
                  else
                    {
                      t = g_22;
                      t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                    }
                }
              else
                {
                  t = o_61(r_60, n_60, s_60, t_60, o_60, t);
                }
            }
          else
            {
              t = r_60;
              t = o_61(r_60, n_60, s_60, t_60, o_60, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          r_60 = ATgetArgument(t, 0);
          t = p_61(r_60, s_60, t_60, o_60, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              r_60 = ATgetArgument(t, 0);
              t = q_61(r_60, s_60, t_60, o_60, t);
            }
          else
            {
              ATerm d_61 = NULL,u_31 = NULL,v_31 = NULL,x_31 = NULL,i_31 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  r_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(r_60);
              t = escape_chars_1_0(v_2, t);
              i_31 = t;
              t = SSL_implode_string(i_31);
              v_31 = t;
              t = SSL_explode_string(v_31);
              x_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_31), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
              t = conc_0_0(t);
              u_31 = t;
              t = SSL_implode_string(u_31);
              d_61 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, d_61))), term_g_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_60)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_126 (ATerm), ATerm t)
{
  static ATerm w_2 (ATerm t);
  static ATerm w_2 (ATerm t)
  {
    t = topdown_1_0(l_126, t);
    return(t);
  }
  t = l_126(t);
  t = SRTS_all(w_2, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  c_62 = t;
  if(match_cons(t, sym_SeqVar_1))
    {
      b_62 = ATgetArgument(t, 0);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_32 = NULL,e_32 = NULL,y_8 = NULL;
            t = SSLgetAnnotations(c_62);
            c_32 = t;
            t = b_62;
            if(match_cons(t, sym_Var_1))
              {
                e_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SeqVar_1, e_32);
            y_8 = t;
            t = SSLsetAnnotations(y_8, c_32);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = c_62;
          }
      }
    }
  else
    {
      t = c_62;
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
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL;
  a_63 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_63 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
      d_63 = ATgetArgument(t, 2);
      e_63 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
        t = b_63;
        t = is_local_function_0_0(t);
        t = c_63;
        t = map_1_0(TranslateVarDec_0_0, t);
        l_63 = t;
        t = d_63;
        t = map_1_0(TranslateVarDec_0_0, t);
        m_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
        t = conc_0_0(t);
        n_63 = t;
        t = e_63;
        t = translate_body_0_0(t);
        o_63 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_r_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_63), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, n_63, (ATerm) ATinsert(ATempty, term_r_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), term_l_19), o_63)));
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
          t = b_63;
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
          t = c_63;
          t = map_1_0(TranslateVarDec_0_0, t);
          t_32 = t;
          t = d_63;
          t = map_1_0(TranslateVarDec_0_0, t);
          u_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
          t = conc_0_0(t);
          v_32 = t;
          t = e_63;
          t = translate_body_0_0(t);
          w_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_d_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_63), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, v_32, (ATerm) ATinsert(ATempty, term_r_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), term_l_19), w_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_141 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_64;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_64 = ATgetFirst((ATermList) t);
          d_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_33 = NULL,i_33 = NULL,j_33 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(b_64);
            f_33 = t;
            t = c_64;
            t = a_141(t);
            i_33 = t;
            t = d_64;
            t = filter_1_0(a_141, t);
            j_33 = t;
            t = (ATerm) ATinsert(CheckATermList(j_33), i_33);
            g_9 = t;
            t = SSLsetAnnotations(g_9, f_33);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = d_64;
            t = filter_1_0(a_141, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm n_64 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          n_64 = ATgetArgument(t, 0);
          {
            ATerm x_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_22);
      {
        ATerm p_64 = NULL;
        t = n_64;
        t = map_1_0(TranslateType_0_0, t);
        p_64 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_10, (ATerm) ATmakeAppl(sym_ParamList_1, p_64));
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
      t = term_d_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_64;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            y_64 = ATgetArgument(t, 0);
            {
              ATerm b_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_23);
        {
          ATerm b_65 = NULL;
          t = y_64;
          t = map_1_0(TranslateType_0_0, t);
          b_65 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, b_65)))));
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
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_d_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_64), term_m_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm d_23 = t;
  if((PushChoice() == 0))
    {
      ATerm d_65 = NULL,e_65 = NULL;
      if(match_cons(t, sym__2))
        {
          d_65 = ATgetArgument(t, 0);
          e_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, d_65, e_65);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(d_65, e_65);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = SSL_gtr(d_65, e_65);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, d_65, e_65);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_23;
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
  ATerm l_65 = NULL;
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_23, l_65);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, l_65, term_j_23);
  t = leq_0_0(t);
  t = l_65;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,j_9 = NULL;
  f_65 = t;
  t = SSL_explode_string(f_65);
  k_65 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_65 = ATgetFirst((ATermList) t);
      i_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_65);
  g_65 = t;
  t = h_65;
  {
    ATerm l_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_23, h_65);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, h_65, term_s_23);
        t = leq_0_0(t);
        t = h_65;
        LocalPopChoice(n_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATmakeAppl(sym__2, term_t_23, h_65);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, h_65, term_u_23);
        t = leq_0_0(t);
        t = h_65;
      }
  }
  t = i_65;
  t = Cons_2_0(n_3, o_3, t);
  j_65 = t;
  t = (ATerm) ATinsert(CheckATermList(j_65), h_65);
  j_9 = t;
  t = SSLsetAnnotations(j_9, g_65);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  y_65 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      z_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
      b_66 = ATgetArgument(t, 2);
      {
        ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
        t = a_66;
        t = map_1_0(TranslateVarDec_0_0, t);
        g_66 = t;
        t = b_66;
        t = map_1_0(TranslateVarDec_0_0, t);
        h_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_66, h_66);
        t = conc_0_0(t);
        i_66 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, i_66, (ATerm) ATinsert(ATempty, term_r_11)))))));
      }
    }
  else
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              z_65 = ATgetArgument(t, 0);
              a_66 = ATgetArgument(t, 1);
              b_66 = ATgetArgument(t, 2);
              {
                ATerm y_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(x_23);
          {
            ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
            t = a_66;
            t = map_1_0(TranslateVarDec_0_0, t);
            m_66 = t;
            t = b_66;
            t = map_1_0(TranslateVarDec_0_0, t);
            n_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_66, n_66);
            t = conc_0_0(t);
            o_66 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, o_66, (ATerm) ATinsert(ATempty, term_r_11)))))));
          }
        }
      else
        {
          t = w_23;
          if(match_cons(t, sym_SDefT_4))
            {
              z_65 = ATgetArgument(t, 0);
              a_66 = ATgetArgument(t, 1);
              b_66 = ATgetArgument(t, 2);
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
                ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
                t = z_65;
                t = is_local_function_0_0(t);
                t = a_66;
                t = map_1_0(TranslateVarDec_0_0, t);
                s_66 = t;
                t = b_66;
                t = map_1_0(TranslateVarDec_0_0, t);
                t_66 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_66, t_66);
                t = conc_0_0(t);
                u_66 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_r_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, u_66, (ATerm) ATinsert(ATempty, term_r_11)))))));
                LocalPopChoice(b_24);
              }
            else
              {
                t = a_24;
                {
                  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
                  t = z_65;
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
                  t = a_66;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  v_33 = t;
                  t = b_66;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  w_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
                  t = conc_0_0(t);
                  x_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, x_33, (ATerm) ATinsert(ATempty, term_r_11)))))));
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
  ATerm k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      k_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(k_67, l_67, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm h_10 (ATerm u_39, ATerm s_39, ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,c_67 = NULL,e_67 = NULL,f_67 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,i_67 = NULL;
  t = s_39;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            i_67 = ATgetArgument(t, 0);
            {
              ATerm f_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_24);
        t = i_67;
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
  a_67 = t;
  t = SSL_int_to_string(a_67);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, a_67);
  h_34 = t;
  t = term_n_14;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, u_39, a_67));
  t = g_10(i_34, h_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_24) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(u_39);
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_67), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
  t = conc_0_0(t);
  f_67 = t;
  t = SSL_implode_string(f_67);
  c_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_34), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), (ATerm) ATmakeAppl(sym_IntConst_1, z_66)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, c_67)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm a_1 (ATerm), ATerm t)
{
  ATerm w_67 = NULL,a_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_67 = ATgetFirst((ATermList) t);
      a_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_67;
  if(match_int(t, 95))
    {
      ATerm c_68 = NULL;
      t = a_68;
      t = a_1(t);
      c_68 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(c_68), term_m_24), term_m_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm e_68 = NULL;
          t = a_68;
          t = a_1(t);
          e_68 = t;
          t = (ATerm) ATinsert(CheckATermList(e_68), term_m_24);
        }
      else
        {
          ATerm g_68 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = a_68;
          t = a_1(t);
          g_68 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_68), term_m_24), term_n_24), term_m_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm i_143 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL;
  k_68 = t;
  t = SSL_explode_string(k_68);
  {
    static ATerm w_68 (ATerm t);
    static ATerm w_68 (ATerm t)
    {
      ATerm o_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_143(w_68, t);
          LocalPopChoice(x_24);
        }
      else
        {
          t = o_24;
          {
            ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
            v_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_68 = ATgetFirst((ATermList) t);
                u_68 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm q_34 = NULL,t_34 = NULL,n_9 = NULL;
                  t = SSLgetAnnotations(v_68);
                  q_34 = t;
                  t = u_68;
                  t = w_68(t);
                  t_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_34), t_68);
                  n_9 = t;
                  t = SSLsetAnnotations(n_9, q_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_68;
              }
          }
        }
      return(t);
    }
    t = w_68(t);
  }
  j_68 = t;
  t = SSL_implode_string(j_68);
  return(t);
}
ATerm foldr_3_0 (ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm a_140 (ATerm), ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
  z_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_68;
      t = y_139(t);
    }
  else
    {
      ATerm e_69 = NULL,f_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_69 = ATgetFirst((ATermList) t);
          b_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_69;
      t = a_140(t);
      e_69 = t;
      t = b_69;
      t = foldr_3_0(y_139, z_139, a_140, t);
      f_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
      t = z_139(t);
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
  ATerm s_69 = NULL,t_69 = NULL;
  if(match_cons(t, sym__2))
    {
      s_69 = ATgetArgument(t, 0);
      t_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(s_69, t_69, t);
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
static ATerm i_10 (ATerm h_39, ATerm g_39, ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,q_69 = NULL;
  t = g_39;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            q_69 = ATgetArgument(t, 0);
            {
              ATerm a_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_24);
        t = q_69;
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
  h_69 = t;
  t = h_39;
  t = escape_1_0(Cify_1_0, t);
  j_69 = t;
  t = SSL_int_to_string(h_69);
  k_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_69), term_d_25), j_69), term_c_25);
  n_69 = t;
  t = SSL_concat_strings(n_69);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_39, h_69);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_25, i_69);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_39, h_69), (ATerm) ATmakeAppl(sym_Defined_2, term_e_25, i_69));
  t = k_10(w_3, l_69, m_69, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_69), term_m_11)));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  x_69 = t;
  t = term_i_25;
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, x_69);
  t = r_10(y_69, x_69, t);
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, w_69);
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
        ATerm u_69 = NULL,v_69 = NULL;
        t = term_m_25;
        u_69 = t;
        t = term_j_25;
        v_69 = t;
        t = term_n_25;
        t = z_10(u_69, v_69, t);
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
  ATerm o_70 = NULL,p_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      o_70 = ATgetArgument(t, 0);
      p_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(o_70, p_70, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(q_70, r_70, t);
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
  ATerm u_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      u_70 = ATgetArgument(t, 1);
      {
        ATerm t_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_70), term_m_11)));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
  if(match_cons(t, sym__3))
    {
      w_70 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
      y_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_9(w_70, x_70, y_70, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  j_71 = t;
  if(match_cons(t, sym_Conc_2))
    {
      h_71 = ATgetArgument(t, 0);
      i_71 = ATgetArgument(t, 1);
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, h_71, i_71);
            t = conc_0_0(t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = j_71;
          }
      }
    }
  else
    {
      t = j_71;
    }
  return(t);
}
static ATerm j_10 (ATerm b_40, ATerm e_40, ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  k_70 = t;
  t = GenerateIncludes_0_0(t);
  c_70 = t;
  t = b_40;
  t = map_1_0(y_3, t);
  d_70 = t;
  t = b_40;
  t = map_1_0(z_3, t);
  t = concat_0_0(t);
  e_70 = t;
  t = e_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  f_70 = t;
  t = e_40;
  t = filter_1_0(a_4, t);
  t = map_1_0(TranslateDef_0_0, t);
  g_70 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_70 = NULL,y_34 = NULL,z_34 = NULL;
        t = (ATerm) ATempty;
        y_34 = t;
        t = term_x_12;
        z_34 = t;
        t = term_c_13;
        t = g_10(z_34, y_34, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            s_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_70;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
  }
  n_70 = t;
  t = map_1_0(b_4, t);
  l_70 = t;
  t = n_70;
  t = map_1_0(c_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, d_4, t);
  m_70 = t;
  t = k_70;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_71 = NULL,b_71 = NULL;
        t = term_m_25;
        a_71 = t;
        t = term_b_26;
        b_71 = t;
        t = term_c_26;
        t = z_10(a_71, b_71, t);
        t = k_70;
        LocalPopChoice(a_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = z_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_e_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_h_26)))), term_h_20));
      }
  }
  h_70 = t;
  t = k_70;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_71 = NULL,d_71 = NULL;
        t = term_m_25;
        c_71 = t;
        t = term_b_26;
        d_71 = t;
        t = term_c_26;
        t = z_10(c_71, d_71, t);
        t = k_70;
        LocalPopChoice(j_26);
        t = (ATerm) ATinsert(ATempty, term_l_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATinsert(ATempty, term_n_26);
      }
  }
  i_70 = t;
  t = k_70;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_71 = NULL,f_71 = NULL;
        t = term_m_25;
        e_71 = t;
        t = term_b_26;
        f_71 = t;
        t = term_c_26;
        t = z_10(e_71, f_71, t);
        t = k_70;
        LocalPopChoice(p_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = o_26;
        {
          ATerm g_71 = NULL;
          t = MainDef_0_0(t);
          g_71 = t;
          t = (ATerm) ATinsert(ATempty, g_71);
        }
      }
  }
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, c_70, h_70), d_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_u_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_h_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, e_70)))), l_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_h_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, m_70)))), i_70), f_70), j_70), g_70));
  t = bottomup_1_0(e_4, t);
  return(t);
}
static ATerm k_10 (ATerm h_157 (ATerm), ATerm k_83, ATerm i_83, ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  r_71 = t;
  t = h_157(t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_71, k_83, i_83);
  t = a_11(o_71, k_83, i_83, t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL;
        t = term_a_27;
        w_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_71, term_a_27);
        t = z_10(o_71, w_71, t);
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
      p_71 = ATgetFirst((ATermList) t);
      q_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_71, term_a_27, (ATerm) ATinsert(CheckATermList(q_71), (ATerm) ATinsert(CheckATermList(p_71), k_83)));
  t = lookup_table_0_1(o_71, t);
  v_71 = t;
  t = term_a_27;
  s_71 = t;
  t = (ATerm) ATinsert(CheckATermList(q_71), (ATerm) ATinsert(CheckATermList(p_71), k_83));
  t_71 = t;
  t = v_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(s_71, t_71, u_71, t);
  t = r_71;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  t = term_e_27;
  y_71 = t;
  t = term_o_27;
  z_71 = t;
  t = term_p_27;
  t = k_10(f_4, y_71, z_71, t);
  t = x_71;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL;
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
                  ATerm c_28 = ATgetFirst((ATermList) z_27);
                  if(match_cons(c_28, sym_Constructors_1))
                    {
                      b_72 = ATgetArgument(c_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_28 = (ATerm) ATgetNext((ATermList) z_27);
                    if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
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
                ATerm f_28 = ATgetFirst((ATermList) v_27);
                if(match_cons(f_28, sym_Strategies_1))
                  {
                    c_72 = ATgetArgument(f_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm i_28 = (ATerm) ATgetNext((ATermList) v_27);
                  if(((ATgetType(i_28) != AT_LIST) || !(ATisEmpty(i_28))))
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
  t = j_10(b_72, c_72, t);
  t = listbottomup_1_0(j_4, t);
  return(t);
}
static ATerm m_10 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm e_72 = NULL;
  t = SSL_fputc(q_57, r_57);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_72);
  return(t);
}
static ATerm n_10 (ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm f_72 = NULL;
  t = SSL_write_term_to_stream_text(v_41, w_41);
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_72);
  return(t);
}
static ATerm p_10 (ATerm o_132 (ATerm), ATerm a_274, ATerm b_42, ATerm t)
{
  ATerm g_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_274, term_l_28);
  t = t_10(t);
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_72, b_42);
  t = o_132(t);
  t = fclose_0_0(t);
  t = b_42;
  return(t);
}
static ATerm o_10 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm h_72 = NULL;
  t = SSL_write_term_to_stream_baf(r_41, s_41);
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_72);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if(match_cons(m_28, sym_Stream_1))
        {
          o_72 = ATgetArgument(m_28, 0);
        }
      else
        _fail(t);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(o_72, p_72, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Stream_1))
        {
          t_72 = ATgetArgument(n_28, 0);
        }
      else
        _fail(t);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(t_72, u_72, t);
  q_72 = t;
  t = term_o_28;
  r_72 = t;
  t = q_72;
  if(match_cons(t, sym_Stream_1))
    {
      s_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, q_72);
  t = m_10(r_72, s_72, t);
  return(t);
}
ATerm output_1_0 (ATerm q_150 (ATerm), ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL;
  t = q_150(t);
  j_72 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_72 = NULL,l_72 = NULL;
        t = term_m_25;
        k_72 = t;
        t = term_t_28;
        l_72 = t;
        t = term_v_28;
        t = z_10(k_72, l_72, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = term_h_29;
      }
  }
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_72, j_72);
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_72 = NULL,n_72 = NULL;
        t = term_m_25;
        m_72 = t;
        t = term_k_29;
        n_72 = t;
        t = term_l_29;
        t = z_10(m_72, n_72, t);
        t = (ATerm) ATmakeAppl(sym__2, i_72, j_72);
        LocalPopChoice(j_29);
        if(match_cons(t, sym__2))
          {
            ATerm m_29 = ATgetArgument(t, 0);
            ATerm o_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_10(k_4, i_72, j_72, t);
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
        t = p_10(l_4, i_72, j_72, t);
      }
  }
  return(t);
}
static ATerm i_73 (ATerm c_73, ATerm t)
{
  t = SSL_fclose(c_73);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  g_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_73 = ATgetArgument(t, 0);
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_73);
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            t = i_73(g_73, t);
          }
      }
    }
  else
    {
      t = i_73(g_73, t);
    }
  return(t);
}
static ATerm q_10 (ATerm x_41, ATerm t)
{
  t = SSL_read_term_from_stream(x_41);
  return(t);
}
static ATerm r_10 (ATerm u_55, ATerm v_55, ATerm t)
{
  t = SSL_strcat(u_55, v_55);
  return(t);
}
static ATerm s_10 (ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm j_73 = NULL;
  t = SSL_fopen(s_57, t_57);
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_73 = NULL;
  t = SSL_stdin_stream();
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_73 = NULL;
  t = SSL_stdout_stream();
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_stderr_stream();
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_73);
  return(t);
}
static ATerm t_74 (ATerm s_73, ATerm t)
{
  ATerm t_73 = NULL;
  t = SSL_explode_term(s_73);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
          {
            t_73 = ATgetFirst((ATermList) f_30);
            {
              ATerm l_30 = (ATerm) ATgetNext((ATermList) f_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_74 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,e_74 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(y_73);
  b_74 = t;
  t = w_73;
  if(match_cons(t, sym_Path_1))
    {
      e_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_74, x_73);
  p_9 = t;
  t = SSLsetAnnotations(p_9, b_74);
  if(match_cons(t, sym__2))
    {
      z_73 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(z_73, a_74, t);
  return(t);
}
static ATerm v_74 (ATerm g_74, ATerm h_74, ATerm i_74, ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,o_74 = NULL,q_9 = NULL;
  t = SSLgetAnnotations(i_74);
  l_74 = t;
  t = SSL_is_string(g_74);
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_74, h_74);
  q_9 = t;
  t = SSLsetAnnotations(q_9, l_74);
  if(match_cons(t, sym__2))
    {
      j_74 = ATgetArgument(t, 0);
      k_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(j_74, k_74, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  q_74 = t;
  if(match_cons(t, sym__2))
    {
      r_74 = ATgetArgument(t, 0);
      s_74 = ATgetArgument(t, 1);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_74(q_74, t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm q_30 = t;
              int u_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_74(r_74, s_74, q_74, t);
                  LocalPopChoice(u_30);
                }
              else
                {
                  t = q_30;
                  t = v_74(r_74, s_74, q_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_74(q_74, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,e_75 = NULL;
  e_75 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_75, term_z_30);
        t = t_10(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm j_35 = NULL,k_35 = NULL;
          t = term_a_31;
          k_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, e_75);
          t = r_10(k_35, e_75, t);
          j_35 = t;
          t = SSL_perror(j_35);
          _fail(t);
        }
      }
  }
  y_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_10(z_74, t);
  x_74 = t;
  t = y_74;
  t = fclose_0_0(t);
  t = x_74;
  return(t);
}
ATerm input_1_0 (ATerm r_150 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_75 = NULL,i_75 = NULL;
      t = term_m_25;
      h_75 = t;
      t = term_d_31;
      i_75 = t;
      t = term_h_31;
      t = z_10(h_75, i_75, t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = term_j_31;
    }
  t = ReadFromFile_0_0(t);
  t = r_150(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
  j_75 = t;
  t = term_k_31;
  t = whoami_0_0(t);
  k_75 = t;
  t = term_l_31;
  m_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_31), k_75), term_m_31);
  n_75 = t;
  t = SSL_printnl(m_75, n_75);
  t = term_d_14;
  l_75 = t;
  t = SSL_exit(l_75);
  t = j_75;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm p_75 = NULL;
  p_75 = t;
  if(match_string(t, "-k"))
    {
      t = p_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_75;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
  q_75 = t;
  t = SSL_string_to_int(q_75);
  r_75 = t;
  t = term_r_31;
  s_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, r_75);
  t = c_11(s_75, r_75, t);
  t = q_75;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, r_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm u_75 = NULL;
  u_75 = t;
  if(match_string(t, "-S"))
    {
      t = u_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_75;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL;
  t = term_t_31;
  v_75 = t;
  t = term_b_14;
  w_75 = t;
  t = term_w_31;
  t = c_11(v_75, w_75, t);
  t = term_z_31;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_b_32;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL;
  x_75 = t;
  t = SSL_string_to_int(x_75);
  y_75 = t;
  t = term_t_31;
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, y_75);
  t = c_11(z_75, y_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_75);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_d_32;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL;
  t = term_f_32;
  a_76 = t;
  t = term_k_31;
  b_76 = t;
  t = term_h_32;
  t = c_11(a_76, b_76, t);
  t = term_i_32;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_4, t_4, u_4, t);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, f_5, t);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            t = Option_3_0(g_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm c_11 (ATerm n_94, ATerm o_94, ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL;
  t = term_m_25;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, n_94, o_94);
  t = lookup_table_0_1(c_76, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(n_94, o_94, d_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, n_94, o_94);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
      t = term_k_31;
      t = h_0(t);
      j_76 = t;
      t = term_p_32;
      k_76 = t;
      t = term_q_32;
      l_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, j_76);
      t = a_11(k_76, l_76, j_76, t);
      _fail(t);
    }
  else
    {
      ATerm o_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_76 = ATgetFirst((ATermList) t);
          i_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_76;
      t = d_0(t);
      t = term_k_31;
      t = f_0(t);
      o_76 = t;
      t = (ATerm) ATinsert(CheckATermList(i_76), o_76);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm q_76 = NULL;
  q_76 = t;
  if(match_string(t, "-o"))
    {
      t = q_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_76;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  r_76 = t;
  t = term_t_28;
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, r_76);
  t = c_11(s_76, r_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_76);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm u_76 = NULL;
  u_76 = t;
  if(match_string(t, "-i"))
    {
      t = u_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_76;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL;
  v_76 = t;
  t = term_d_31;
  w_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_31, v_76);
  t = c_11(w_76, v_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_76);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, s_5, t_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_133 (ATerm), ATerm t)
{
  static ATerm r_77 (ATerm t);
  static ATerm r_77 (ATerm t)
  {
    ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
    q_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_77 = ATgetFirst((ATermList) t);
        p_77 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_35 = NULL,w_35 = NULL,x_9 = NULL;
          t = SSLgetAnnotations(q_77);
          t_35 = t;
          t = p_77;
          t = r_77(t);
          w_35 = t;
          t = (ATerm) ATinsert(CheckATermList(w_35), o_77);
          x_9 = t;
          t = SSLsetAnnotations(x_9, t_35);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_77;
        t = o_133(t);
      }
    return(t);
  }
  t = r_77(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  y_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_76;
    }
  else
    {
      static ATerm u_5 (ATerm t);
      static ATerm u_5 (ATerm t)
      {
        t = not_null(a_77);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_76 = ATgetFirst((ATermList) t);
          if(((a_77 != NULL) && (a_77 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_76;
      t = at_end_1_0(u_5, t);
    }
  return(t);
}
static ATerm i_78 (ATerm v_77, ATerm t)
{
  ATerm w_77 = NULL;
  t = SSL_explode_term(v_77);
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  f_78 = t;
  if(match_cons(t, sym__2))
    {
      d_78 = ATgetArgument(t, 0);
      e_78 = ATgetArgument(t, 1);
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_5 (ATerm t);
            static ATerm y_5 (ATerm t)
            {
              t = e_78;
              return(t);
            }
            t = d_78;
            t = at_end_1_0(y_5, t);
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            t = i_78(f_78, t);
          }
      }
    }
  else
    {
      t = i_78(f_78, t);
    }
  return(t);
}
static ATerm l_10 (ATerm u_94, ATerm v_94, ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
  t = u_94;
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_78 = NULL;
        t = term_m_25;
        p_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_25, u_94);
        t = z_10(p_78, u_94, t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATempty;
      }
  }
  k_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_78, v_94);
  t = conc_0_0(t);
  j_78 = t;
  t = term_m_25;
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, u_94, j_78);
  t = lookup_table_0_1(l_78, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(u_94, j_78, m_78, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, u_94, j_78);
  return(t);
}
static ATerm a_11 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            ATerm g_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
        t = z_10(x_62, y_62, t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATempty;
      }
  }
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_62, y_62, (ATerm) ATinsert(CheckATermList(s_78), w_62));
  t = lookup_table_0_1(x_62, t);
  v_78 = t;
  t = (ATerm) ATinsert(CheckATermList(s_78), w_62);
  t_78 = t;
  t = v_78;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(y_62, t_78, u_78, t);
  t = r_78;
  return(t);
}
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
      t = term_k_31;
      t = w_0(t);
      g_79 = t;
      t = term_p_32;
      h_79 = t;
      t = term_q_32;
      i_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, g_79);
      t = a_11(h_79, i_79, g_79, t);
      _fail(t);
    }
  else
    {
      ATerm m_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_79 = ATgetFirst((ATermList) t);
          d_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_79 = ATgetFirst((ATermList) t);
          f_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_79;
      t = q_0(t);
      t = e_79;
      t = t_0(t);
      m_79 = t;
      t = (ATerm) ATinsert(CheckATermList(f_79), m_79);
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  t = term_j_25;
  p_79 = t;
  t = (ATerm) ATinsert(ATempty, o_79);
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATempty, o_79));
  t = l_10(p_79, q_79, t);
  t = o_79;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm r_79 = NULL;
  r_79 = t;
  if(match_string(t, "--library"))
    {
      t = r_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = r_79;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  s_79 = t;
  t = term_b_26;
  t_79 = t;
  t = term_k_31;
  u_79 = t;
  t = term_k_33;
  t = c_11(t_79, u_79, t);
  t = s_79;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(z_5, a_6, b_6, t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      t = Option_3_0(g_6, h_6, j_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_31;
  t = whoami_0_0(t);
  v_79 = t;
  t = term_l_31;
  x_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_33), v_79);
  y_79 = t;
  t = SSL_printnl(x_79, y_79);
  t = term_d_14;
  w_79 = t;
  t = SSL_exit(w_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL;
  t = term_m_25;
  z_79 = t;
  t = term_p_33;
  a_80 = t;
  t = term_q_33;
  t = z_10(z_79, a_80, t);
  return(t);
}
static ATerm u_10 (ATerm g_61, ATerm h_61, ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_61, h_61);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      t = SSL_addr(g_61, h_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL;
  c_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_80;
      t = w_139(t);
    }
  else
    {
      ATerm h_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_80 = ATgetFirst((ATermList) t);
          e_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_80;
      t = foldr_2_0(w_139, x_139, t);
      h_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_80, h_80);
      t = x_139(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  if(match_cons(t, sym__2))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(f_36, g_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_80 = NULL,b_36 = NULL,c_36 = NULL;
  t = times_0_0(t);
  c_36 = t;
  t = SSL_explode_term(c_36);
  if(match_cons(t, sym__2))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_36;
  t = foldr_2_0(k_6, n_6, t);
  k_80 = t;
  t = SSL_TicksToSeconds(k_80);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
  v_80 = t;
  if(match_cons(t, sym__2))
    {
      w_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_80;
        if((w_80 != t))
          {
            _fail(t);
          }
        t = v_80;
        LocalPopChoice(y_33);
      }
    else
      {
        t = u_33;
        t = (ATerm) ATmakeAppl(sym__2, w_80, x_80);
        {
          ATerm z_33 = t;
          int a_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_80, x_80);
              LocalPopChoice(a_34);
            }
          else
            {
              t = z_33;
              t = SSL_gtr(w_80, x_80);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_80, x_80);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_148 (ATerm), ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
        t = term_m_25;
        e_81 = t;
        t = term_t_31;
        f_81 = t;
        t = term_d_34;
        t = z_10(e_81, f_81, t);
        d_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_81, term_d_14);
        t = geq_0_0(t);
        t = b_81;
        t = t_148(t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = b_81;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,k_81 = NULL,l_81 = NULL;
  t = run_time_0_0(t);
  h_81 = t;
  t = term_k_31;
  t = whoami_0_0(t);
  i_81 = t;
  t = term_l_31;
  k_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), h_81), term_e_34), i_81);
  l_81 = t;
  t = SSL_printnl(k_81, l_81);
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), h_81), term_e_34), i_81));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_14;
  m_81 = t;
  t = SSL_exit(m_81);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  x_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_81 = ATgetArgument(t, 0);
          {
            ATerm s_36 = NULL,z_9 = NULL;
            t = SSLgetAnnotations(x_81);
            s_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_81);
            z_9 = t;
            t = SSLsetAnnotations(z_9, s_36);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_150 (ATerm), ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_81 = NULL,q_81 = NULL;
      t = term_m_25;
      p_81 = t;
      t = term_l_34;
      q_81 = t;
      t = term_m_34;
      t = z_10(p_81, q_81, t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      t = fetch_1_0(t_6, t);
    }
  t = h_150(t);
  return(t);
}
static ATerm d_11 (ATerm p_67, ATerm q_67, ATerm r_67, ATerm t)
{
  ATerm z_81 = NULL;
  t = SSL_hashtable_put(r_67, p_67, q_67);
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_81);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_64, ATerm t)
{
  ATerm z_82 = NULL;
  t = table_hashtable_0_0(t);
  z_82 = t;
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL;
        t = z_82;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_11(j_64, y_36, t);
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        {
          ATerm d_37 = NULL;
          t = j_64;
          t = table_create_0_0(t);
          t = z_82;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_11(j_64, d_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_67, ATerm y_67, ATerm t)
{
  ATerm c_83 = NULL;
  t = SSL_hashtable_create(x_67, y_67);
  c_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_83);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,h_83 = NULL,n_83 = NULL;
  d_83 = t;
  t = term_p_34;
  h_83 = t;
  t = term_r_34;
  n_83 = t;
  t = d_83;
  t = new_hashtable_0_2(h_83, n_83, t);
  e_83 = t;
  t = d_83;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(d_83, e_83, f_83, t);
  t = d_83;
  return(t);
}
static ATerm w_10 (ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm o_83 = NULL;
  t = SSL_hashtable_remove(v_67, u_67);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_83);
  return(t);
}
static ATerm x_10 (ATerm z_67, ATerm t)
{
  ATerm p_83 = NULL;
  t = SSL_hashtable_destroy(z_67);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_83);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_83 = NULL;
  t = SSL_table_hashtable();
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_83);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  s_83 = t;
  t = table_hashtable_0_0(t);
  t_83 = t;
  t = lookup_table_0_1(s_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(v_83, t);
  t = t_83;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_10(s_83, u_83, t);
  t = s_83;
  return(t);
}
ATerm map_1_0 (ATerm x_132 (ATerm), ATerm t)
{
  static ATerm k_84 (ATerm t);
  static ATerm k_84 (ATerm t)
  {
    ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
    h_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_84;
      }
    else
      {
        ATerm i_37 = NULL,l_37 = NULL,m_37 = NULL,v_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_84 = ATgetFirst((ATermList) t);
            j_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_84);
        i_37 = t;
        t = i_84;
        t = x_132(t);
        l_37 = t;
        t = j_84;
        t = k_84(t);
        m_37 = t;
        t = (ATerm) ATinsert(CheckATermList(m_37), l_37);
        v_10 = t;
        t = SSLsetAnnotations(v_10, i_37);
      }
    return(t);
  }
  t = k_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_84 = ATgetFirst((ATermList) t);
      o_84 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_84 = NULL,t_84 = NULL;
        static ATerm u_6 (ATerm t);
        static ATerm u_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_84)), not_null(t_84));
          return(t);
        }
        t = o_84;
        t = p_0(t);
        if(((s_84 != NULL) && (s_84 != t)))
          _fail(t);
        else
          s_84 = t;
        t = n_84;
        t = m_0(t);
        if(((t_84 != NULL) && (t_84 != t)))
          _fail(t);
        else
          t_84 = t;
        t = o_84;
        t = reverse_acc_2_0(m_0, u_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_31;
      t = p_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,f_11 = NULL;
  b_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_85);
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_85);
  f_11 = t;
  t = SSLsetAnnotations(f_11, z_84);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm d_85 = NULL;
  d_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_85), term_s_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL;
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_84 = NULL,y_84 = NULL;
      t = term_m_25;
      x_84 = t;
      t = term_p_33;
      y_84 = t;
      t = term_q_33;
      t = z_10(x_84, y_84, t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = fetch_1_0(v_6, t);
    }
  t = term_w_34;
  t = echo_0_0(t);
  t = term_p_32;
  v_84 = t;
  t = term_q_32;
  w_84 = t;
  t = term_x_34;
  t = z_10(v_84, w_84, t);
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(z_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_133 (ATerm), ATerm t)
{
  static ATerm a_86 (ATerm t);
  static ATerm a_86 (ATerm t)
  {
    ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
    x_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_85 = ATgetFirst((ATermList) t);
        z_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_37 = NULL,x_37 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(x_85);
          u_37 = t;
          t = y_85;
          t = h_133(t);
          x_37 = t;
          t = (ATerm) ATinsert(CheckATermList(z_85), x_37);
          h_11 = t;
          t = SSLsetAnnotations(h_11, u_37);
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm g_38 = NULL,k_38 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(x_85);
            g_38 = t;
            t = z_85;
            t = a_86(t);
            k_38 = t;
            t = (ATerm) ATinsert(CheckATermList(k_38), y_85);
            l_11 = t;
            t = SSLsetAnnotations(l_11, g_38);
          }
        }
    }
    return(t);
  }
  t = a_86(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
  e_86 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_86;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_35 = ATgetFirst((ATermList) t);
                ATerm f_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_86;
          }
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = (ATerm) ATinsert(ATempty, e_86);
      }
  }
  f_86 = t;
  t = term_h_29;
  g_86 = t;
  t = SSL_printnl(g_86, f_86);
  t = e_86;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_m_25;
  k_86 = t;
  t = term_p_33;
  l_86 = t;
  t = term_q_33;
  t = z_10(k_86, l_86, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_11 (ATerm s_67, ATerm t_67, ATerm t)
{
  t = SSL_hashtable_get(t_67, s_67);
  return(t);
}
static ATerm z_10 (ATerm q_64, ATerm r_64, ATerm t)
{
  ATerm m_86 = NULL;
  t = lookup_table_0_1(q_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(r_64, m_86, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL;
  t = term_g_35;
  o_86 = t;
  t = term_k_31;
  p_86 = t;
  t = term_h_35;
  t = c_11(o_86, p_86, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL;
  t = term_g_35;
  s_86 = t;
  t = term_k_31;
  t_86 = t;
  t = term_h_35;
  t = c_11(s_86, t_86, t);
  t = term_m_35;
  q_86 = t;
  t = term_k_31;
  r_86 = t;
  t = term_q_35;
  t = c_11(q_86, r_86, t);
  t = term_r_35;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_7, d_7, e_7, t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = Option_3_0(f_7, g_7, j_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,q_11 = NULL;
  z_86 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_86 = ATgetFirst((ATermList) t);
      w_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_86);
  u_86 = t;
  t = v_86;
  t = f_104(t);
  x_86 = t;
  t = w_86;
  t = g_104(t);
  y_86 = t;
  t = (ATerm) ATinsert(CheckATermList(y_86), x_86);
  q_11 = t;
  t = SSLsetAnnotations(q_11, u_86);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_152 (ATerm), ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,j_87 = NULL,k_87 = NULL,x_11 = NULL;
  e_87 = t;
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_35;
        t = t_152(t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
      }
  }
  t = e_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_87 = ATgetFirst((ATermList) t);
      h_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_87);
  f_87 = t;
  t = term_p_33;
  k_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, g_87);
  t = c_11(k_87, g_87, t);
  t = h_87;
  {
    static ATerm u_87 (ATerm t);
    static ATerm u_87 (ATerm t)
    {
      ATerm a_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_87 = NULL;
              n_87 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_87;
              LocalPopChoice(h_36);
            }
          else
            {
              t = e_36;
              t = t_152(t);
              t = Cons_2_0(_id, u_87, t);
            }
          LocalPopChoice(d_36);
        }
      else
        {
          t = a_36;
          {
            ATerm q_87 = NULL,r_87 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_87 = ATgetFirst((ATermList) t);
                r_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_87), (ATerm) ATmakeAppl(sym_Undefined_1, q_87));
          }
        }
      return(t);
    }
    t = u_87(t);
  }
  j_87 = t;
  t = (ATerm) ATinsert(CheckATermList(j_87), (ATerm) ATmakeAppl(sym_Program_1, g_87));
  x_11 = t;
  t = SSLsetAnnotations(x_11, f_87);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm h_88 = NULL;
  h_88 = t;
  if(match_string(t, "--help"))
    {
      t = h_88;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_88;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_88;
        }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL;
  t = term_l_34;
  i_88 = t;
  t = term_k_31;
  j_88 = t;
  t = term_i_36;
  t = c_11(i_88, j_88, t);
  t = term_j_36;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_152 (ATerm), ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  b_88 = t;
  t = term_p_32;
  c_88 = t;
  t = term_l_36;
  t = lookup_table_0_1(c_88, t);
  g_88 = t;
  t = term_q_32;
  d_88 = t;
  t = (ATerm) ATempty;
  e_88 = t;
  t = g_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(d_88, e_88, f_88, t);
  t = b_88;
  {
    static ATerm m_7 (ATerm t);
    static ATerm m_7 (ATerm t)
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_152(t);
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          {
            ATerm o_36 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_7, p_7, q_7, t);
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_7, t);
  }
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_88 = NULL;
        u_88 = t;
        {
          ATerm t_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_38 = NULL;
              t = u_88;
              {
                ATerm v_36 = t;
                int w_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_38 = NULL,u_38 = NULL;
                    t = term_m_25;
                    t_38 = t;
                    t = term_l_34;
                    u_38 = t;
                    t = term_m_34;
                    t = z_10(t_38, u_38, t);
                    LocalPopChoice(w_36);
                  }
                else
                  {
                    t = v_36;
                    t = fetch_1_0(s_7, t);
                  }
              }
              t = u_88;
              t = default_system_usage_0_0(t);
              t = term_b_14;
              s_38 = t;
              t = SSL_exit(s_38);
              LocalPopChoice(u_36);
            }
          else
            {
              t = t_36;
              {
                ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
                t = term_m_25;
                z_38 = t;
                t = term_g_35;
                a_39 = t;
                t = term_x_36;
                t = z_10(z_38, a_39, t);
                t = u_88;
                t = default_system_about_0_0(t);
                t = term_b_14;
                y_38 = t;
                t = SSL_exit(y_38);
              }
            }
        }
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
              static ATerm v_7 (ATerm t);
              static ATerm v_7 (ATerm t)
              {
                ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,p_12 = NULL;
                a_89 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_89);
                y_88 = t;
                t = z_88;
                if(((z_87 != NULL) && (z_87 != t)))
                  _fail(t);
                else
                  z_87 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_88);
                p_12 = t;
                t = SSLsetAnnotations(p_12, y_88);
                return(t);
              }
              t = fetch_1_0(v_7, t);
              t = term_l_31;
              w_88 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_87)), term_b_37);
              x_88 = t;
              t = SSL_printnl(w_88, x_88);
              t = (ATerm) ATmakeAppl(sym__2, term_l_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_87)), term_b_37));
              t = default_system_usage_0_0(t);
              t = term_d_14;
              v_88 = t;
              t = SSL_exit(v_88);
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
            }
        }
      }
  }
  a_88 = t;
  t = term_p_32;
  t = table_destroy_0_0(t);
  t = a_88;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_150 (ATerm), ATerm k_150 (ATerm), ATerm l_150 (ATerm), ATerm m_150 (ATerm), ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
  t = parse_options_1_0(j_150, t);
  f_89 = t;
  t = term_c_37;
  t = table_create_0_0(t);
  t = term_c_37;
  g_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_37, term_e_37, f_89);
  t = lookup_table_0_1(g_89, t);
  j_89 = t;
  t = term_e_37;
  h_89 = t;
  t = j_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(h_89, f_89, i_89, t);
  t = f_89;
  t = l_150(t);
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_150, t);
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        {
          ATerm h_37 = t;
          int j_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_150(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_37);
            }
          else
            {
              t = h_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm k_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(n_37);
    }
  else
    {
      t = k_37;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            {
              ATerm q_37 = t;
              int r_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(r_37);
                }
              else
                {
                  t = q_37;
                  {
                    ATerm s_37 = t;
                    int t_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, b_8, e_8, t);
                        LocalPopChoice(t_37);
                      }
                    else
                      {
                        t = s_37;
                        {
                          ATerm v_37 = t;
                          int w_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(w_37);
                            }
                          else
                            {
                              t = v_37;
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
static ATerm b_8 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL;
  t = term_k_29;
  l_89 = t;
  t = term_k_31;
  m_89 = t;
  t = term_y_37;
  t = c_11(l_89, m_89, t);
  t = term_z_37;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_7, default_usage_0_0, _id, z_7, t);
  return(t);
}
