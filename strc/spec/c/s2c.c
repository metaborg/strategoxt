#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Match_2;
Symbol sym_Conc_2;
Symbol sym_Include_1;
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
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
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
Symbol sym_OpDecl_2;
Symbol sym_Constructors_1;
Symbol sym_Signature_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_FunType_2;
Symbol sym_ParamList_1;
Symbol sym_TypeName_2;
Symbol sym_TypeName_2;
Symbol sym_ParamDecl_2;
Symbol sym_EmptyExp_0;
Symbol sym_AssignEq_0;
Symbol sym_Assign_3;
Symbol sym_LOr_2;
Symbol sym_LAnd_2;
Symbol sym_NotEqual_2;
Symbol sym_Equal_2;
Symbol sym_TypeCast_2;
Symbol sym_Negation_1;
Symbol sym_Address_1;
Symbol sym_FunCall_2;
Symbol sym_DeclSpec_5;
Symbol sym_TypeSpec_3;
Symbol sym_AssignInit_1;
Symbol sym_DeclInit_2;
Symbol sym_Declaration2_2;
Symbol sym_Void_0;
Symbol sym_Int_0;
Symbol sym_Static_0;
Symbol sym_TypeId_1;
Symbol sym_Id_1;
Symbol sym_Return_1;
Symbol sym_Continue_0;
Symbol sym_Goto_1;
Symbol sym_IfElse_3;
Symbol sym_If_2;
Symbol sym_Stat_1;
Symbol sym_Compound_2;
Symbol sym_Case_2;
Symbol sym_Label_2;
Symbol sym_FunDef_3;
Symbol sym_TranslationUnit_1;
Symbol sym_IdDecl_3;
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
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
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
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
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
ATerm term_y_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_v_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_z_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_p_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_c_29;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_b_22;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
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
ATerm term_j_20;
ATerm term_i_20;
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
ATerm term_j_19;
ATerm term_i_19;
ATerm term_f_19;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
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
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_t_10;
ATerm term_d_10;
ATerm term_c_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_10, (ATerm) ATempty);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Id_1, term_d_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Id_1, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_m_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Some_1, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_10, term_q_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Id_1, term_t_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_11, (ATerm) ATempty);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Stat_1, term_y_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Id_1, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Return_1, term_m_11);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Id_1, term_f_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATempty);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_10, term_n_11);
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
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Id_1, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Id_1, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_p_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, term_a_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Id_1, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Id_1, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_17, (ATerm) ATempty);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_17, term_n_11);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_17, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_17, term_n_11);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Id_1, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_q_17);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_m_11);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Id_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_19, (ATerm) ATempty);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_n_19, term_j_15);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATempty);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Id_1, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_19, (ATerm) ATempty);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_v_19, term_j_15);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Id_1, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Id_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_20, (ATerm) ATempty);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_20, term_n_11);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Id_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Id_1, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Id_1, term_s_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Id_1, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_20, (ATerm) ATempty);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_21, term_n_11);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, term_m_11);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_o_22, (ATerm)ATempty, term_d_10, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Id_1, term_g_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Id_1, term_i_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_25, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_h_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Id_1, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_26, term_n_11);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Include_1, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Include_1, term_k_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_o_22, (ATerm)ATempty, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Id_1, term_t_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Op_2, term_b_27, (ATerm) ATempty);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_l_27, term_c_16);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_m_27);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_r_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_i_29);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_b_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_b_14);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_14);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_i_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_i_31);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_l_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_r_31);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_i_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_q_32);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_i_31);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_i_31);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_i_31);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, (ATerm) ATempty);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_e_35);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_i_31);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm g_3 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm b_151 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm b_121 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm q_9 (ATerm p_30, ATerm r_30, ATerm q_30, ATerm t);
static ATerm e_10 (ATerm y_69, ATerm z_69, ATerm t);
static ATerm a_1 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm s_9 (ATerm b_30, ATerm e_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm t_9 (ATerm k_35, ATerm j_35, ATerm t);
static ATerm u_9 (ATerm c_191, ATerm g_35, ATerm i_35, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm g_53 (ATerm c_28, ATerm d_28, ATerm k_28, ATerm l_28, ATerm t);
static ATerm h_53 (ATerm w_29, ATerm x_29, ATerm y_29, ATerm t);
static ATerm j_53 (ATerm i_30, ATerm l_30, ATerm m_30, ATerm t);
static ATerm k_53 (ATerm v_31, ATerm x_31, ATerm d_32, ATerm j_32, ATerm t);
static ATerm n_53 (ATerm w_37, ATerm d_38, ATerm k_38, ATerm x_38, ATerm t);
static ATerm o_53 (ATerm j_39, ATerm k_39, ATerm l_39, ATerm r_39, ATerm t);
static ATerm p_53 (ATerm c_40, ATerm f_40, ATerm j_40, ATerm k_40, ATerm t);
static ATerm q_53 (ATerm w_40, ATerm x_40, ATerm b_41, ATerm c_41, ATerm d_41, ATerm e_41, ATerm f_41, ATerm g_41, ATerm t);
static ATerm r_53 (ATerm r_42, ATerm s_42, ATerm x_42, ATerm a_43, ATerm b_43, ATerm c_43, ATerm t);
static ATerm s_53 (ATerm k_43, ATerm l_43, ATerm q_43, ATerm t_43, ATerm w_43, ATerm x_43, ATerm t);
static ATerm t_53 (ATerm g_44, ATerm h_44, ATerm k_44, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm TranslateStrat_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm a_138 (ATerm), ATerm t);
static ATerm a_10 (ATerm f_1 (ATerm), ATerm k_1 (ATerm), ATerm h_1, ATerm l_1, ATerm c_1, ATerm t);
ATerm thread_map_1_0 (ATerm c_135 (ATerm), ATerm t);
static ATerm c_61 (ATerm e_58, ATerm f_58, ATerm g_58, ATerm h_58, ATerm i_58, ATerm t);
static ATerm d_61 (ATerm e_59, ATerm f_59, ATerm g_59, ATerm h_59, ATerm t);
static ATerm e_61 (ATerm m_59, ATerm n_59, ATerm o_59, ATerm p_59, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_135 (ATerm), ATerm t);
ATerm TranslateType_0_0 (ATerm t);
ATerm TranslateVarDec_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm is_local_function_0_0 (ATerm t);
ATerm SDefToDeclaration_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm f_10 (ATerm o_39, ATerm m_39, ATerm t);
ATerm Cify_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm x_137 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm g_10 (ATerm b_39, ATerm a_39, ATerm t);
static ATerm y_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_10 (ATerm v_39, ATerm y_39, ATerm t);
static ATerm i_10 (ATerm l_151 (ATerm), ATerm l_79, ATerm j_79, ATerm t);
static ATerm j_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm k_10 (ATerm u_56, ATerm v_56, ATerm t);
static ATerm l_10 (ATerm p_41, ATerm q_41, ATerm t);
static ATerm n_10 (ATerm d_127 (ATerm), ATerm j_266, ATerm v_41, ATerm t);
static ATerm m_10 (ATerm l_41, ATerm m_41, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_1_0 (ATerm n_144 (ATerm), ATerm t);
static ATerm f_72 (ATerm z_71, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_10 (ATerm r_41, ATerm t);
static ATerm p_10 (ATerm n_55, ATerm o_55, ATerm t);
static ATerm q_10 (ATerm w_56, ATerm x_56, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_73 (ATerm p_72, ATerm t);
static ATerm r_73 (ATerm t_72, ATerm u_72, ATerm v_72, ATerm t);
static ATerm s_73 (ATerm d_73, ATerm e_73, ATerm f_73, ATerm t);
static ATerm r_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm o_144 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_11 (ATerm f_89, ATerm g_89, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm d_128 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_77 (ATerm c_77, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_10 (ATerm m_89, ATerm n_89, ATerm t);
static ATerm y_10 (ATerm n_69, ATerm o_69, ATerm m_69, ATerm t);
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_10 (ATerm q_59, ATerm r_59, ATerm t);
ATerm foldr_2_0 (ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_142 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm need_help_1_0 (ATerm e_144 (ATerm), ATerm t);
static ATerm b_11 (ATerm f_74, ATerm g_74, ATerm h_74, ATerm t);
ATerm lookup_table_0_1 (ATerm z_70, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_74, ATerm o_74, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_10 (ATerm k_74, ATerm l_74, ATerm t);
static ATerm v_10 (ATerm p_74, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_127 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_127 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_11 (ATerm i_74, ATerm j_74, ATerm t);
static ATerm x_10 (ATerm g_71, ATerm h_71, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_146 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm parse_options_1_0 (ATerm u_146 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm g_3 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,n_0 = NULL,z_0 = NULL,o_0 = NULL;
      r_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          t_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_1);
      n_0 = t;
      t = t_1;
      t = listbu1_1_0(g_3, t);
      z_0 = t;
      t = (ATerm) ATinsert(CheckATermList(z_0), s_1);
      o_0 = t;
      t = SSLsetAnnotations(o_0, n_0);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_3(t);
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
          }
      }
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = g_3(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_8 = ATgetFirst((ATermList) t);
      if(match_cons(n_8, sym_Compound_2))
        {
          ATerm p_8 = ATgetArgument(n_8, 0);
          if(((ATgetType(p_8) != AT_LIST) || !(ATisEmpty(p_8))))
            _fail(t);
          h_4 = ATgetArgument(n_8, 1);
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
      ATerm q_8 = ATgetFirst((ATermList) t);
      if(match_cons(q_8, sym_Compound_2))
        {
          ATerm r_8 = ATgetArgument(q_8, 0);
          if(((ATgetType(r_8) != AT_LIST) || !(ATisEmpty(r_8))))
            _fail(t);
          d_5 = ATgetArgument(q_8, 1);
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
static ATerm e_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_8 = ATgetFirst((ATermList) t);
      if(match_cons(v_8, sym_Compound_2))
        {
          ATerm w_8 = ATgetArgument(v_8, 0);
          if(((ATgetType(w_8) != AT_LIST) || !(ATisEmpty(w_8))))
            _fail(t);
          i_5 = ATgetArgument(v_8, 1);
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
static ATerm r_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_8 = ATgetFirst((ATermList) t);
      if(match_cons(y_8, sym_Compound_2))
        {
          ATerm z_8 = ATgetArgument(y_8, 0);
          if(((ATgetType(z_8) != AT_LIST) || !(ATisEmpty(z_8))))
            _fail(t);
          y_5 = ATgetArgument(y_8, 1);
        }
      else
        _fail(t);
      z_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_5, z_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_9 = ATgetFirst((ATermList) t);
      if(match_cons(a_9, sym_Compound_2))
        {
          ATerm c_9 = ATgetArgument(a_9, 0);
          if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
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
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
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
                      h_3 = ATgetArgument(t, 0);
                      k_3 = ATgetArgument(t, 1);
                      t = k_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = h_3;
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
                      h_3 = ATgetArgument(t, 0);
                      k_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_3;
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
                  h_3 = ATgetArgument(t, 0);
                  k_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_3;
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
              h_3 = ATgetArgument(t, 0);
              k_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_3;
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
              h_3 = ATgetFirst((ATermList) t);
              k_3 = (ATerm) ATgetNext((ATermList) t);
              t = k_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = h_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      i_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                      {
                        ATerm d_9 = t;
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
                            t = d_9;
                            {
                              ATerm h_9 = t;
                              int k_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                                  t = conc_0_0(t);
                                  q_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, q_4, j_3);
                                  LocalPopChoice(k_9);
                                }
                              else
                                {
                                  t = h_9;
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
                  t = h_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      i_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                      {
                        ATerm m_9 = t;
                        int p_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_5 = NULL;
                            t = f_3;
                            t = listbu1_1_0(e_0, t);
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, h_5);
                            LocalPopChoice(p_9);
                          }
                        else
                          {
                            t = m_9;
                            {
                              ATerm r_5 = NULL,s_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                              t = conc_0_0(t);
                              r_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
                              t = conc_0_0(t);
                              s_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, r_5, s_5);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_5 = NULL;
                      t = f_3;
                      t = listbu1_1_0(r_0, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, v_5);
                    }
                }
            }
          else
            {
              ATerm c_6 = NULL;
              t = f_3;
              t = listbu1_1_0(s_0, t);
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, c_6);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t)
  {
    ATerm r_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_120(t);
        t = f_6(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = r_9;
        t = b_120(t);
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm b_151 (ATerm), ATerm t)
{
  static ATerm l_7 (ATerm t)
  {
    t = b_151(t);
    {
      ATerm x_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,a_2 = NULL,d_2 = NULL,e_2 = NULL,x_0 = NULL;
          i_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_7 = ATgetFirst((ATermList) t);
              k_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_7);
          a_2 = t;
          t = j_7;
          t = l_7(t);
          d_2 = t;
          t = k_7;
          t = l_7(t);
          e_2 = t;
          t = (ATerm) ATinsert(CheckATermList(e_2), d_2);
          x_0 = t;
          t = SSLsetAnnotations(x_0, a_2);
          LocalPopChoice(z_9);
        }
      else
        {
          t = x_9;
          t = SRTS_all(l_7, t);
        }
    }
    t = b_151(t);
    return(t);
  }
  t = l_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(b_121, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = b_121(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_f_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_s_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_12, (ATerm) ATinsert(ATempty, term_m_11))))), term_a_12)));
  return(t);
}
static ATerm q_9 (ATerm p_30, ATerm r_30, ATerm q_30, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, r_30)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_30), term_b_12, q_30)));
  return(t);
}
static ATerm e_10 (ATerm y_69, ATerm z_69, ATerm t)
{
  ATerm o_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_69, z_69);
  t = x_10(y_69, z_69, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_7 = ATgetFirst((ATermList) t);
      {
        ATerm p_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_7;
  return(t);
}
static ATerm a_1 (ATerm t)
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
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(i_11);
        m_2 = t;
        t = j_11;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = k_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_11, k_11);
        g_1 = t;
        t = SSLsetAnnotations(g_1, m_2);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_2 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,t_4 = NULL,u_4 = NULL,m_1 = NULL,i_1 = NULL;
              t = SSLgetAnnotations(i_11);
              w_2 = t;
              t = j_11;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = k_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_4 = ATgetFirst((ATermList) t);
                  o_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_11);
              m_4 = t;
              t = o_4;
              t = Cons_2_0(proper_list_0_0, a_1, t);
              t_4 = t;
              t = (ATerm) ATinsert(CheckATermList(t_4), n_4);
              i_1 = t;
              t = SSLsetAnnotations(i_1, m_4);
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_11, u_4);
              m_1 = t;
              t = SSLsetAnnotations(m_1, w_2);
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                ATerm h_6 = NULL,k_6 = NULL,o_1 = NULL;
                t = SSLgetAnnotations(i_11);
                h_6 = t;
                t = j_11;
                {
                  ATerm v_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm m_6 = NULL;
                      m_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = m_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = m_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = v_12;
                    }
                }
                k_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, k_6, k_11);
                o_1 = t;
                t = SSLsetAnnotations(o_1, h_6);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm s_9 (ATerm b_30, ATerm e_30, ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,d_14 = NULL,f_14 = NULL;
  t = b_30;
  if(match_cons(t, sym_Op_2))
    {
      f_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
      {
        ATerm u_6 = NULL,y_6 = NULL,q_6 = NULL;
        t = SSLgetAnnotations(b_30);
        u_6 = t;
        t = d_14;
        t = map_1_0(Cache_0_0, t);
        y_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, f_14, y_6);
        q_6 = t;
        t = SSLsetAnnotations(q_6, u_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          f_14 = ATgetArgument(t, 0);
          d_14 = ATgetArgument(t, 1);
          {
            ATerm q_7 = NULL,w_7 = NULL,x_7 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(b_30);
            q_7 = t;
            t = f_14;
            t = Cache_0_0(t);
            w_7 = t;
            t = d_14;
            t = Cache_0_0(t);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, w_7, x_7);
            v_6 = t;
            t = SSLsetAnnotations(v_6, q_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_14 = ATgetArgument(t, 0);
              {
                ATerm b_8 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(b_30);
                b_8 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_14);
                z_6 = t;
                t = SSLsetAnnotations(z_6, b_8);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  f_14 = ATgetArgument(t, 0);
                  {
                    ATerm f_8 = NULL,b_7 = NULL;
                    t = SSLgetAnnotations(b_30);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, f_14);
                    b_7 = t;
                    t = SSLsetAnnotations(b_7, f_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      f_14 = ATgetArgument(t, 0);
                      {
                        ATerm u_8 = NULL,c_7 = NULL;
                        t = SSLgetAnnotations(b_30);
                        u_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, f_14);
                        c_7 = t;
                        t = SSLsetAnnotations(c_7, u_8);
                      }
                    }
                  else
                    {
                      ATerm b_9 = NULL,e_7 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          f_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_30);
                      b_9 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, f_14);
                      e_7 = t;
                      t = SSLsetAnnotations(e_7, b_9);
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
  t = p_10(o_12, g_12, t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12));
  t = i_10(b_1, b_30, n_12, t);
  t = h_12;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL,f_9 = NULL,i_9 = NULL;
        t = (ATerm) ATempty;
        f_9 = t;
        t = term_x_12;
        i_9 = t;
        t = term_f_13;
        t = e_10(i_9, f_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            h_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_14;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATempty;
      }
  }
  i_12 = t;
  t = (ATerm) ATempty;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, g_12, h_12, e_30)));
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, g_12, h_12, e_30))));
  t = i_10(e_1, j_12, m_12, t);
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
        ATerm b_10 = NULL,w_10 = NULL;
        t = term_w_12;
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
        t = e_10(w_10, y_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            b_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, b_10);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        {
          ATerm r_11 = NULL,u_11 = NULL;
          t = term_w_12;
          u_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
          t = e_10(u_11, y_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm l_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              r_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_11;
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
        ATerm b_16 = NULL,z_11 = NULL;
        b_16 = t;
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
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_16, z_11);
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
              t = (ATerm) ATmakeAppl(sym__2, b_16, z_11);
              t = s_9(b_16, z_11, t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              {
                ATerm l_12 = NULL,s_12 = NULL;
                s_12 = t;
                t = SSL_explode_term(s_12);
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
                              l_12 = ATgetFirst((ATermList) z_13);
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
                t = l_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm k_35, ATerm j_35, ATerm t)
{
  ATerm f_16 = NULL;
  t = new_0_0(t);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_16), term_n_11), (ATerm) ATmakeAppl(sym_AssignInit_1, j_35)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, k_35, (ATerm) ATmakeAppl(sym_Id_1, f_16))));
  return(t);
}
static ATerm u_9 (ATerm c_191, ATerm g_35, ATerm i_35, ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  t = SSLgetAnnotations(c_191);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_35);
  i_16 = t;
  t = SSLsetAnnotations(i_16, g_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, h_16, i_35);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(i_18, j_18, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_15 = ATgetFirst((ATermList) t);
      u_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_g_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_j_14), term_e_14);
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
            ATerm h_18 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
            t = x_17;
            t = foldr_3_0(j_1, n_1, p_1, t);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_17, h_18);
            b_13 = t;
            t = term_n_14;
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, z_17, h_18));
            t = e_10(c_13, b_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm o_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("l_0", 0, ATtrue)))
                  _fail(t);
                a_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(CheckATermList(x_17), (ATerm) ATmakeAppl(sym_Id_1, a_13))));
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
              if(match_cons(t, sym_Var_1))
                {
                  z_17 = ATgetArgument(t, 0);
                  {
                    ATerm r_14 = t;
                    int s_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(y_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm t_14 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) t_14) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(u_14) != AT_LIST) || !(ATisEmpty(u_14))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17)));
                        LocalPopChoice(s_14);
                      }
                    else
                      {
                        t = r_14;
                        {
                          ATerm x_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(y_17);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm a_15 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17)));
                              LocalPopChoice(z_14);
                            }
                          else
                            {
                              t = x_14;
                              {
                                ATerm c_15 = t;
                                int d_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(y_17);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_17)));
                                    LocalPopChoice(d_15);
                                  }
                                else
                                  {
                                    t = c_15;
                                    t = SSLgetAnnotations(y_17);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm e_15 = ATgetFirst((ATermList) t);
                                        if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("bound", 0, ATtrue)))
                                          _fail(t);
                                        {
                                          ATerm f_15 = (ATerm) ATgetNext((ATermList) t);
                                          if(((ATgetType(f_15) != AT_LIST) || !(ATisEmpty(f_15))))
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
                        ATerm s_18 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,l_15 = NULL;
                        t = SSL_explode_string(z_17);
                        t = escape_chars_1_0(q_1, t);
                        l_15 = t;
                        t = SSL_implode_string(l_15);
                        m_16 = t;
                        t = SSL_explode_string(m_16);
                        o_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_16), term_g_14), (ATerm) ATinsert(ATempty, term_g_14));
                        t = conc_0_0(t);
                        l_16 = t;
                        t = SSL_implode_string(l_16);
                        s_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_15), term_j_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_18)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          z_17 = ATgetArgument(t, 0);
                          {
                            ATerm s_16 = NULL;
                            t = SSL_real_to_string(z_17);
                            s_16 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, s_16))));
                          }
                        }
                      else
                        {
                          ATerm f_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              z_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(z_17);
                          f_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, f_17))));
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
  ATerm j_23 = NULL,l_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,u_23 = NULL,v_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_23;
  if(match_string(t, "Cons"))
    {
      ATerm a_23 = NULL;
      t = v_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_23 = ATgetFirst((ATermList) t);
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
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,p_26 = NULL,q_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                n_24 = ATgetArgument(t, 0);
                u_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_24;
            if(match_cons(t, sym_TypeName_2))
              {
                o_24 = ATgetArgument(t, 0);
                t_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                p_24 = ATgetArgument(t, 0);
                q_24 = ATgetArgument(t, 1);
                s_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_24;
            if(match_cons(t, sym_TypeId_1))
              {
                r_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = s_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = u_24;
            if(match_cons(t, sym_Id_1))
              {
                p_26 = ATgetArgument(t, 0);
                {
                  ATerm v_26 = NULL,t_7 = NULL;
                  t = SSLgetAnnotations(u_24);
                  v_26 = t;
                  t = p_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, p_26);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, v_26);
                }
              }
            else
              {
                ATerm a_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,i_8 = NULL,h_8 = NULL,g_8 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    p_26 = ATgetArgument(t, 0);
                    q_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_24);
                a_27 = t;
                t = p_26;
                if(match_cons(t, sym_Id_1))
                  {
                    j_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_26);
                i_27 = t;
                t = j_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, j_27);
                g_8 = t;
                t = SSLsetAnnotations(g_8, i_27);
                k_27 = t;
                t = q_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_27 = ATgetFirst((ATermList) t);
                    f_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_26);
                d_27 = t;
                t = f_27;
                t = Cons_2_0(_id, u_1, t);
                g_27 = t;
                t = (ATerm) ATinsert(CheckATermList(g_27), e_27);
                h_8 = t;
                t = SSLsetAnnotations(h_8, d_27);
                h_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, k_27, h_27);
                i_8 = t;
                t = SSLsetAnnotations(i_8, a_27);
              }
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_15, (ATerm) ATinsert(ATempty, o_23));
          }
      }
      a_23 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, j_23), a_23)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = v_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_16;
    }
  return(t);
}
static ATerm g_53 (ATerm c_28, ATerm d_28, ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm t_28 = NULL,v_28 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  t = c_28;
  {
    ATerm d_16 = t;
    if((PushChoice() == 0))
      {
        ATerm w_28 = NULL;
        w_28 = t;
        if(match_string(t, "Nil"))
          {
            t = w_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = w_28;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_16;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, d_28, term_b_14);
  {
    static ATerm v_1 (ATerm t)
    {
      ATerm x_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
      if(match_cons(t, sym__2))
        {
          x_28 = ATgetArgument(t, 0);
          z_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_28);
      e_29 = t;
      t = x_28;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm e_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_29 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_29)), k_28));
                n_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_29)), k_28)));
                t = u_9(x_28, g_29, n_29, t);
                LocalPopChoice(j_16);
              }
            else
              {
                t = e_16;
                {
                  ATerm p_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_29)), k_28));
                  p_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_29)), k_28)));
                  t = t_9(x_28, p_29, t);
                }
              }
          }
        }
      else
        {
          ATerm q_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_29)), k_28));
          q_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_29)), k_28)));
          t = t_9(x_28, q_29, t);
        }
      a_29 = t;
      t = term_c_14;
      f_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_28, term_c_14);
      t = s_10(z_28, f_29, t);
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, b_29);
      return(t);
    }
    t = thread_map_1_0(v_1, t);
  }
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      {
        ATerm p_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_28;
  t = foldr_3_0(w_1, x_1, y_1, t);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, v_28);
  q_27 = t;
  t = term_n_14;
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, c_28, v_28));
  t = e_10(r_27, q_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, p_27)), k_28)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, t_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
  return(t);
}
static ATerm h_53 (ATerm w_29, ATerm x_29, ATerm y_29, ATerm t)
{
  ATerm h_30 = NULL;
  t = SSL_real_to_string(w_29);
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, x_29)), term_z_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_17, x_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, h_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
  return(t);
}
static ATerm j_53 (ATerm i_30, ATerm l_30, ATerm m_30, ATerm t)
{
  ATerm k_31 = NULL;
  t = SSL_int_to_string(i_30);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, l_30)), term_i_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_17, l_30))), (ATerm) ATmakeAppl(sym_IntConst_1, k_31))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
  return(t);
}
static ATerm k_53 (ATerm v_31, ATerm x_31, ATerm d_32, ATerm j_32, ATerm t)
{
  t = SSLgetAnnotations(v_31);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, x_31), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, x_31), d_32)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, d_32))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_31), term_b_12, d_32)));
  return(t);
}
static ATerm n_53 (ATerm w_37, ATerm d_38, ATerm k_38, ATerm x_38, ATerm t)
{
  t = SSLgetAnnotations(w_37);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, d_38), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, d_38), k_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, k_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_38), term_b_12, k_38)));
  return(t);
}
static ATerm o_53 (ATerm j_39, ATerm k_39, ATerm l_39, ATerm r_39, ATerm t)
{
  t = SSLgetAnnotations(j_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(u_17) != AT_LIST) || !(ATisEmpty(u_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_39), l_39), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, l_39))))));
  return(t);
}
static ATerm p_53 (ATerm c_40, ATerm f_40, ATerm j_40, ATerm k_40, ATerm t)
{
  t = SSLgetAnnotations(c_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) v_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(w_17) != AT_LIST) || !(ATisEmpty(w_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_40), term_b_12, j_40));
  return(t);
}
static ATerm q_53 (ATerm w_40, ATerm x_40, ATerm b_41, ATerm c_41, ATerm d_41, ATerm e_41, ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm a_42 = NULL,c_42 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  t = x_40;
  {
    ATerm a_18 = t;
    if((PushChoice() == 0))
      {
        ATerm i_42 = NULL;
        i_42 = t;
        if(match_string(t, "Nil"))
          {
            t = i_42;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = i_42;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, c_41, term_b_14);
  {
    static ATerm z_1 (ATerm t)
    {
      ATerm j_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,q_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm b_18 = ATgetArgument(t, 0);
          if(match_cons(b_18, sym_Var_1))
            {
              j_42 = ATgetArgument(b_18, 0);
            }
          else
            _fail(t);
          m_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_42);
      n_42 = t;
      t = term_c_14;
      q_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_42, term_c_14);
      t = s_10(m_42, q_42, t);
      o_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_42), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, n_42)), (ATerm) ATmakeAppl(sym_Id_1, w_40))))), o_42);
      return(t);
    }
    t = thread_map_1_0(z_1, t);
  }
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      {
        ATerm c_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_40, b_41);
  v_27 = t;
  t = term_n_14;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, x_40, b_41));
  t = e_10(w_27, v_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_18) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_42, (ATerm) ATinsert(ATempty, d_41));
  t = conc_0_0(t);
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_27)), (ATerm) ATmakeAppl(sym_Id_1, w_40))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, w_40), e_41, f_41))));
  return(t);
}
static ATerm r_53 (ATerm r_42, ATerm s_42, ATerm x_42, ATerm a_43, ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm j_43 = NULL;
  t = SSL_real_to_string(s_42);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, j_43)), (ATerm) ATmakeAppl(sym_Id_1, r_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, r_42), a_43, b_43))));
  return(t);
}
static ATerm s_53 (ATerm k_43, ATerm l_43, ATerm q_43, ATerm t_43, ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_int_to_string(l_43);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, f_44)), (ATerm) ATmakeAppl(sym_Id_1, k_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, k_43), t_43, w_43))));
  return(t);
}
static ATerm t_53 (ATerm g_44, ATerm h_44, ATerm k_44, ATerm t)
{
  t = h_44;
  {
    ATerm l_18 = t;
    if((PushChoice() == 0))
      {
        ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,o_8 = NULL;
        t_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            s_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_44);
        r_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, s_44);
        o_8 = t;
        t = SSLsetAnnotations(o_8, r_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_44)));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(r_29, u_29, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym_SVar_1))
        {
          b_47 = ATgetArgument(m_18, 0);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
          _fail(t);
      }
      {
        ATerm o_18 = ATgetArgument(t, 2);
        if(((ATgetType(o_18) != AT_LIST) || !(ATisEmpty(o_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, b_47);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = topdown_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = r_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
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
      ATerm w_18 = ATgetArgument(t, 0);
      if(match_cons(w_18, sym_SVar_1))
        {
          w_47 = ATgetArgument(w_18, 0);
        }
      else
        _fail(t);
      {
        ATerm x_18 = ATgetArgument(t, 1);
        if(((ATgetType(x_18) != AT_LIST) || !(ATisEmpty(x_18))))
          _fail(t);
      }
      {
        ATerm y_18 = ATgetArgument(t, 2);
        if(((ATgetType(y_18) != AT_LIST) || !(ATisEmpty(y_18))))
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
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(k_2, t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
          }
      }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_49), term_n_11), term_f_19);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,b_50 = NULL,c_50 = NULL;
  z_49 = t;
  if(match_cons(t, sym__2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_50;
  if(match_cons(t, sym_Var_1))
    {
      y_49 = ATgetArgument(t, 0);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_49;
            t = u_9(b_50, y_49, c_50, t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = z_49;
            t = t_9(b_50, c_50, t);
          }
      }
    }
  else
    {
      t = z_49;
      t = t_9(b_50, c_50, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      f_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_28;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(f_28), term_g_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(f_28), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_28), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_28), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm j_29 = NULL,o_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_29 = ATgetFirst((ATermList) t);
      o_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(o_29), term_g_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_29), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_29), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_29), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,h_45 = NULL,i_45 = NULL,l_45 = NULL,m_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  b_46 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_46 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, c_46, (ATerm) ATinsert(ATempty, u_45));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          c_46 = ATgetArgument(t, 0);
          {
            ATerm i_46 = NULL;
            t = b_46;
            t = new_0_0(t);
            i_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_n_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, i_46)))), term_j_19), c_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_46), term_b_12, term_m_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              c_46 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, c_46);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  c_46 = ATgetArgument(t, 0);
                  u_45 = ATgetArgument(t, 1);
                  r_45 = ATgetArgument(t, 2);
                  {
                    ATerm v_46 = NULL,w_46 = NULL,z_46 = NULL;
                    t = c_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        a_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = u_45;
                    t = map_1_0(b_2, t);
                    v_46 = t;
                    t = r_45;
                    t = map_1_0(c_2, t);
                    w_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_11)), w_46), v_46);
                    t = concat_0_0(t);
                    z_46 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, a_46), z_46)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      c_46 = ATgetArgument(t, 0);
                      u_45 = ATgetArgument(t, 1);
                      r_45 = ATgetArgument(t, 2);
                      {
                        ATerm s_47 = NULL,u_47 = NULL,v_47 = NULL;
                        t = u_45;
                        t = map_1_0(h_2, t);
                        s_47 = t;
                        t = r_45;
                        t = map_1_0(i_2, t);
                        u_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_47, u_47);
                        t = conc_0_0(t);
                        v_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, c_46), v_47)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          c_46 = ATgetArgument(t, 0);
                          {
                            ATerm e_48 = NULL;
                            t = b_46;
                            t = new_0_0(t);
                            e_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_48), term_n_11), term_k_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11)))), term_s_19), c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, e_48))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              c_46 = ATgetArgument(t, 0);
                              u_45 = ATgetArgument(t, 1);
                              {
                                ATerm k_48 = NULL;
                                t = b_46;
                                t = new_0_0(t);
                                k_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_48), term_n_11), term_k_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_w_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, u_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, k_48))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  c_46 = ATgetArgument(t, 0);
                                  u_45 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_46, u_45);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      c_46 = ATgetArgument(t, 0);
                                      u_45 = ATgetArgument(t, 1);
                                      r_45 = ATgetArgument(t, 2);
                                      {
                                        ATerm a_49 = NULL,b_49 = NULL;
                                        t = b_46;
                                        t = new_0_0(t);
                                        a_49 = t;
                                        t = new_0_0(t);
                                        b_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_49), term_n_11), term_b_20)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_49), term_n_11), term_k_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_49))))), term_j_19), c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, r_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, (ATerm) ATmakeAppl(sym_Id_1, a_49))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          c_46 = ATgetArgument(t, 0);
                                          u_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_46, term_e_20, u_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              c_46 = ATgetArgument(t, 0);
                                              u_45 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_46, u_45);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  c_46 = ATgetArgument(t, 0);
                                                  u_45 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, u_45), c_46));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      c_46 = ATgetArgument(t, 0);
                                                      u_45 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm o_49 = NULL;
                                                        t = c_46;
                                                        t = map_1_0(l_2, t);
                                                        o_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, o_49)), (ATerm) ATinsert(ATempty, u_45));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_f_20;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  c_46 = ATgetArgument(t, 0);
                                                                  u_45 = ATgetArgument(t, 1);
                                                                  t = c_46;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      a_46 = ATgetArgument(t, 0);
                                                                      y_44 = ATgetArgument(t, 1);
                                                                      t = y_44;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          u_44 = ATgetFirst((ATermList) t);
                                                                          v_44 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = v_44;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_44 = ATgetFirst((ATermList) t);
                                                                              x_44 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = x_44;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = a_46;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm g_20 = t;
                                                                                      int h_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm x_49 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_44, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, u_45)))))), (ATerm) ATmakeAppl(sym__2, u_44, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, u_45)))));
                                                                                          t = map_1_0(n_2, t);
                                                                                          x_49 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, u_45)), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, u_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, x_49), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
                                                                                          LocalPopChoice(h_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_20;
                                                                                          t = g_53(a_46, y_44, u_45, b_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_53(a_46, y_44, u_45, b_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_46;
                                                                                  t = g_53(a_46, y_44, u_45, b_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_46;
                                                                              t = g_53(a_46, y_44, u_45, b_46, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = a_46;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm u_20 = t;
                                                                                  int v_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, u_45)), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, u_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
                                                                                      LocalPopChoice(v_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_20;
                                                                                      t = g_53(a_46, y_44, u_45, b_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = g_53(a_46, y_44, u_45, b_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_46;
                                                                              t = g_53(a_46, y_44, u_45, b_46, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          a_46 = ATgetArgument(t, 0);
                                                                          t = h_53(a_46, u_45, b_46, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              a_46 = ATgetArgument(t, 0);
                                                                              t = j_53(a_46, u_45, b_46, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  a_46 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm q_50 = NULL,n_28 = NULL,o_28 = NULL,s_28 = NULL,y_27 = NULL;
                                                                                    t = SSL_explode_string(a_46);
                                                                                    t = escape_chars_1_0(o_2, t);
                                                                                    y_27 = t;
                                                                                    t = SSL_implode_string(y_27);
                                                                                    o_28 = t;
                                                                                    t = SSL_explode_string(o_28);
                                                                                    s_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), term_g_14), (ATerm) ATinsert(ATempty, term_g_14));
                                                                                    t = conc_0_0(t);
                                                                                    n_28 = t;
                                                                                    t = SSL_implode_string(n_28);
                                                                                    q_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_21, u_45))), (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_15), term_j_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, q_50))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      a_46 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm c_21 = t;
                                                                                        int d_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = k_53(c_46, a_46, u_45, b_46, t);
                                                                                            LocalPopChoice(d_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_21;
                                                                                            {
                                                                                              ATerm e_21 = t;
                                                                                              int f_21 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = n_53(c_46, a_46, u_45, b_46, t);
                                                                                                  LocalPopChoice(f_21);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_21;
                                                                                                  {
                                                                                                    ATerm g_21 = t;
                                                                                                    int h_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = o_53(c_46, a_46, u_45, b_46, t);
                                                                                                        LocalPopChoice(h_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_21;
                                                                                                        t = p_53(c_46, a_46, u_45, b_46, t);
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
                                                                                          a_46 = ATgetArgument(t, 0);
                                                                                          y_44 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, y_44, u_45)), (ATerm) ATmakeAppl(sym_Match_2, a_46, u_45)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm i_21 = t;
                                                                                          int j_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm k_21 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(j_21);
                                                                                              t = term_f_20;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = i_21;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_f_20;
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
                                                                      c_46 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, c_46, term_m_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          c_46 = ATgetArgument(t, 0);
                                                                          u_45 = ATgetArgument(t, 1);
                                                                          r_45 = ATgetArgument(t, 2);
                                                                          t = c_46;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              a_46 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = u_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              t_45 = ATgetFirst((ATermList) t);
                                                                              q_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = t_45;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  i_45 = ATgetArgument(t, 0);
                                                                                  m_45 = ATgetArgument(t, 1);
                                                                                  p_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = i_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  l_45 = ATgetArgument(t, 0);
                                                                                  h_45 = ATgetArgument(t, 1);
                                                                                  t = m_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      z_44 = ATgetFirst((ATermList) t);
                                                                                      b_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = b_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          c_45 = ATgetFirst((ATermList) t);
                                                                                          e_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = e_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = c_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  d_45 = ATgetArgument(t, 0);
                                                                                                  t = z_44;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      a_45 = ATgetArgument(t, 0);
                                                                                                      t = h_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = l_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm l_21 = t;
                                                                                                              int m_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_46))), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_45), term_b_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, (ATerm) ATmakeAppl(sym_Id_1, a_46)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_45), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, (ATerm) ATmakeAppl(sym_Id_1, a_46)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_46), q_45, r_45))));
                                                                                                                  LocalPopChoice(m_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_21;
                                                                                                                  t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = l_45;
                                                                                                          t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_45;
                                                                                                      t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = l_45;
                                                                                                  t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_45;
                                                                                              t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_45;
                                                                                          t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = h_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = l_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm n_21 = t;
                                                                                                  int o_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_46))), term_r_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_46), q_45, r_45))));
                                                                                                      LocalPopChoice(o_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_21;
                                                                                                      t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_45;
                                                                                              t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_45;
                                                                                          t = q_53(a_46, l_45, h_45, m_45, p_45, q_45, r_45, b_46, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      l_45 = ATgetArgument(t, 0);
                                                                                      t = r_53(a_46, l_45, p_45, q_45, r_45, b_46, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          l_45 = ATgetArgument(t, 0);
                                                                                          t = s_53(a_46, l_45, p_45, q_45, r_45, b_46, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm y_51 = NULL,a_30 = NULL,c_30 = NULL,j_30 = NULL,y_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              l_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(l_45);
                                                                                          t = escape_chars_1_0(p_2, t);
                                                                                          y_28 = t;
                                                                                          t = SSL_implode_string(y_28);
                                                                                          c_30 = t;
                                                                                          t = SSL_explode_string(c_30);
                                                                                          j_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_30), term_g_14), (ATerm) ATinsert(ATempty, term_g_14));
                                                                                          t = conc_0_0(t);
                                                                                          a_30 = t;
                                                                                          t = SSL_implode_string(a_30);
                                                                                          y_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, y_51))), (ATerm) ATmakeAppl(sym_Id_1, a_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_46), q_45, r_45))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = r_45;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              c_46 = ATgetArgument(t, 0);
                                                                              u_45 = ATgetArgument(t, 1);
                                                                              r_45 = ATgetArgument(t, 2);
                                                                              s_45 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, c_46), (ATerm) ATmakeAppl(sym_Case_3, u_45, r_45, s_45));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  c_46 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, c_46));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      c_46 = ATgetArgument(t, 0);
                                                                                      u_45 = ATgetArgument(t, 1);
                                                                                      t = c_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          a_46 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = u_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          t_45 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm r_21 = t;
                                                                                            int s_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_46), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_46), (ATerm) ATmakeAppl(sym_Id_1, t_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, t_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_46), term_b_12, (ATerm) ATmakeAppl(sym_Id_1, t_45))));
                                                                                                LocalPopChoice(s_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_21;
                                                                                                t = t_53(a_46, u_45, b_46, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_53(a_46, u_45, b_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          c_46 = ATgetArgument(t, 0);
                                                                                          t = c_46;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              a_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_46), term_b_12, term_m_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm f_53 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              c_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_46;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          f_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_b_12, f_53));
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
ATerm escape_chars_1_0 (ATerm a_138 (ATerm), ATerm t)
{
  static ATerm b_55 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,s_8 = NULL;
        t = a_138(t);
        g_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_54 = ATgetFirst((ATermList) t);
            e_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_54);
        c_54 = t;
        t = e_54;
        t = Cons_2_0(_id, b_55, t);
        f_54 = t;
        t = (ATerm) ATinsert(CheckATermList(f_54), d_54);
        s_8 = t;
        t = SSLsetAnnotations(s_8, c_54);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
          z_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_54 = ATgetFirst((ATermList) t);
              y_54 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm u_30 = NULL,x_30 = NULL,t_8 = NULL;
                t = SSLgetAnnotations(z_54);
                u_30 = t;
                t = y_54;
                t = b_55(t);
                x_30 = t;
                t = (ATerm) ATinsert(CheckATermList(x_30), x_54);
                t_8 = t;
                t = SSLsetAnnotations(t_8, u_30);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_54;
            }
        }
      }
    return(t);
  }
  t = b_55(t);
  return(t);
}
static ATerm a_10 (ATerm f_1 (ATerm), ATerm k_1 (ATerm), ATerm h_1, ATerm l_1, ATerm c_1, ATerm t)
{
  ATerm d_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_1, c_1);
  t = f_1(t);
  if(match_cons(t, sym__2))
    {
      g_55 = ATgetArgument(t, 0);
      d_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_1, d_55);
  t = k_1(t);
  if(match_cons(t, sym__2))
    {
      h_55 = ATgetArgument(t, 0);
      f_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_55), g_55), f_55);
  return(t);
}
ATerm thread_map_1_0 (ATerm c_135 (ATerm), ATerm t)
{
  static ATerm a_56 (ATerm t)
  {
    ATerm m_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
    q_55 = t;
    if(match_cons(t, sym__2))
      {
        r_55 = ATgetArgument(t, 0);
        s_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_55;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_55 = ATgetFirst((ATermList) t);
        p_55 = (ATerm) ATgetNext((ATermList) t);
        t = q_55;
        t = a_10(c_135, a_56, m_55, p_55, s_55, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_55);
      }
    return(t);
  }
  t = a_56(t);
  return(t);
}
static ATerm c_61 (ATerm e_58, ATerm f_58, ATerm g_58, ATerm h_58, ATerm i_58, ATerm t)
{
  ATerm n_58 = NULL,p_58 = NULL,q_58 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  t = e_58;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_58 = NULL;
        r_58 = t;
        if(match_string(t, "Nil"))
          {
            t = r_58;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = r_58;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
  }
  t = f_58;
  t = map_1_0(q_2, t);
  t = (ATerm) ATmakeAppl(sym__2, f_58, term_b_14);
  t = thread_map_1_0(r_2, t);
  if(match_cons(t, sym__2))
    {
      n_58 = ATgetArgument(t, 0);
      {
        ATerm w_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_58;
  t = foldr_3_0(s_2, t_2, u_2, t);
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_58, q_58);
  e_31 = t;
  t = term_n_14;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, e_58, q_58));
  t = e_10(f_31, e_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_58, (ATerm) ATinsert(ATempty, g_58));
  t = conc_0_0(t);
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_31)), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_58), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_58)));
  return(t);
}
static ATerm d_61 (ATerm e_59, ATerm f_59, ATerm g_59, ATerm h_59, ATerm t)
{
  ATerm l_59 = NULL;
  t = SSL_real_to_string(e_59);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, l_59)), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_59)));
  return(t);
}
static ATerm e_61 (ATerm m_59, ATerm n_59, ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm v_59 = NULL;
  t = SSL_int_to_string(m_59);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_59)), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_59)));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,x_8 = NULL;
  u_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_58);
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_58);
  x_8 = t;
  t = SSLsetAnnotations(x_8, s_58);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Var_1))
        {
          v_58 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(w_58);
  z_58 = t;
  t = term_c_14;
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, term_c_14);
  t = s_10(w_58, b_59, t);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, v_58), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, z_58)), term_m_11)))), a_59);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL;
  if(match_cons(t, sym__2))
    {
      c_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(c_59, d_59, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_31 = ATgetFirst((ATermList) t);
      n_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_31;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_31), term_g_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_31), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_31), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_31), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
  d_60 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      e_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
      i_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_60;
  if(match_cons(t, sym_Match_1))
    {
      f_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_60;
  if(match_cons(t, sym_Op_2))
    {
      g_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
      t = c_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_59 = ATgetFirst((ATermList) t);
          y_59 = (ATerm) ATgetNext((ATermList) t);
          t = y_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_59 = ATgetFirst((ATermList) t);
              b_60 = (ATerm) ATgetNext((ATermList) t);
              t = b_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = z_59;
                  if(match_cons(t, sym_Var_1))
                    {
                      a_60 = ATgetArgument(t, 0);
                      t = w_59;
                      if(match_cons(t, sym_Var_1))
                        {
                          x_59 = ATgetArgument(t, 0);
                          t = g_60;
                          if(match_string(t, "Cons"))
                            {
                              ATerm z_21 = t;
                              int a_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_m_11)), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, term_m_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_60), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_60), term_b_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_59), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_60)));
                                  LocalPopChoice(a_22);
                                }
                              else
                                {
                                  t = z_21;
                                  t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                                }
                            }
                          else
                            {
                              t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                            }
                        }
                      else
                        {
                          t = g_60;
                          t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                        }
                    }
                  else
                    {
                      t = g_60;
                      t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                    }
                }
              else
                {
                  t = g_60;
                  t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                }
            }
          else
            {
              t = g_60;
              t = c_61(g_60, c_60, h_60, i_60, d_60, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_60;
              if(match_string(t, "Nil"))
                {
                  ATerm c_22 = t;
                  int d_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_m_11)), term_r_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, term_m_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_60)));
                      LocalPopChoice(d_22);
                    }
                  else
                    {
                      t = c_22;
                      t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                    }
                }
              else
                {
                  t = c_61(g_60, c_60, h_60, i_60, d_60, t);
                }
            }
          else
            {
              t = g_60;
              t = c_61(g_60, c_60, h_60, i_60, d_60, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          g_60 = ATgetArgument(t, 0);
          t = d_61(g_60, h_60, i_60, d_60, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              g_60 = ATgetArgument(t, 0);
              t = e_61(g_60, h_60, i_60, d_60, t);
            }
          else
            {
              ATerm s_60 = NULL,s_31 = NULL,t_31 = NULL,w_31 = NULL,h_31 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  g_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(g_60);
              t = escape_chars_1_0(v_2, t);
              h_31 = t;
              t = SSL_implode_string(h_31);
              t_31 = t;
              t = SSL_explode_string(t_31);
              w_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_31), term_g_14), (ATerm) ATinsert(ATempty, term_g_14));
              t = conc_0_0(t);
              s_31 = t;
              t = SSL_implode_string(s_31);
              s_60 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_60))), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_60)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  static ATerm x_2 (ATerm t)
  {
    t = topdown_1_0(a_121, t);
    return(t);
  }
  t = a_121(t);
  t = SRTS_all(x_2, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = repeat_2_0(l_3, _id, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = repeat_2_0(n_3, _id, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL;
  x_61 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_61 = ATgetArgument(t, 0);
      z_61 = ATgetArgument(t, 1);
      a_62 = ATgetArgument(t, 2);
      b_62 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
        t = y_61;
        t = is_local_function_0_0(t);
        t = z_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        g_62 = t;
        t = a_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        h_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_62, h_62);
        t = conc_0_0(t);
        i_62 = t;
        t = b_62;
        t = topdown_1_0(d_3, t);
        j_62 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_p_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, i_62, (ATerm) ATinsert(ATempty, term_s_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), term_j_19), j_62)));
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm i_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
          t = y_61;
          {
            ATerm q_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_22;
              }
          }
          t = z_61;
          t = map_1_0(TranslateVarDec_0_0, t);
          i_32 = t;
          t = a_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          k_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_32, k_32);
          t = conc_0_0(t);
          l_32 = t;
          t = b_62;
          t = topdown_1_0(m_3, t);
          m_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, l_32, (ATerm) ATinsert(ATempty, term_s_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), term_j_19), m_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_62;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_62 = ATgetFirst((ATermList) t);
          z_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_32 = NULL,z_32 = NULL,a_33 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(x_62);
            w_32 = t;
            t = y_62;
            t = p_135(t);
            z_32 = t;
            t = z_62;
            t = filter_1_0(p_135, t);
            a_33 = t;
            t = (ATerm) ATinsert(CheckATermList(a_33), z_32);
            g_9 = t;
            t = SSLsetAnnotations(g_9, w_32);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            t = z_62;
            t = filter_1_0(p_135, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm f_63 = NULL;
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          f_63 = ATgetArgument(t, 0);
          {
            ATerm v_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_22);
      {
        ATerm h_63 = NULL;
        t = f_63;
        t = map_1_0(TranslateType_0_0, t);
        h_63 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_10, (ATerm) ATmakeAppl(sym_ParamList_1, h_63));
      }
    }
  else
    {
      t = t_22;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm w_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_t_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_63;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            o_63 = ATgetArgument(t, 0);
            {
              ATerm z_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        {
          ATerm r_63 = NULL;
          t = o_63;
          t = map_1_0(TranslateType_0_0, t);
          r_63 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_63), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, r_63)))));
        }
      }
    else
      {
        t = x_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm b_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_63), term_n_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm c_23 = t;
  if((PushChoice() == 0))
    {
      ATerm t_63 = NULL,u_63 = NULL;
      if(match_cons(t, sym__2))
        {
          t_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, t_63, u_63);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(t_63, u_63);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = SSL_gtr(t_63, u_63);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, t_63, u_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_23;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = map_1_0(q_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm b_64 = NULL;
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, b_64);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_64, term_g_23);
  t = leq_0_0(t);
  t = b_64;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,j_9 = NULL;
  v_63 = t;
  t = SSL_explode_string(v_63);
  a_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_63 = ATgetFirst((ATermList) t);
      y_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_64);
  w_63 = t;
  t = x_63;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_23, x_63);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, x_63, term_m_23);
        t = leq_0_0(t);
        t = x_63;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATmakeAppl(sym__2, term_n_23, x_63);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, x_63, term_r_23);
        t = leq_0_0(t);
        t = x_63;
      }
  }
  t = y_63;
  t = Cons_2_0(o_3, p_3, t);
  z_63 = t;
  t = (ATerm) ATinsert(CheckATermList(z_63), x_63);
  j_9 = t;
  t = SSLsetAnnotations(j_9, w_63);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  o_64 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      p_64 = ATgetArgument(t, 0);
      q_64 = ATgetArgument(t, 1);
      r_64 = ATgetArgument(t, 2);
      {
        ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
        t = q_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        w_64 = t;
        t = r_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        x_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_64, x_64);
        t = conc_0_0(t);
        y_64 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, y_64, (ATerm) ATinsert(ATempty, term_s_11)))))));
      }
    }
  else
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              p_64 = ATgetArgument(t, 0);
              q_64 = ATgetArgument(t, 1);
              r_64 = ATgetArgument(t, 2);
              {
                ATerm w_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(t_23);
          {
            ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
            t = q_64;
            t = map_1_0(TranslateVarDec_0_0, t);
            c_65 = t;
            t = r_64;
            t = map_1_0(TranslateVarDec_0_0, t);
            d_65 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_65, d_65);
            t = conc_0_0(t);
            e_65 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, e_65, (ATerm) ATinsert(ATempty, term_s_11)))))));
          }
        }
      else
        {
          t = s_23;
          if(match_cons(t, sym_SDefT_4))
            {
              p_64 = ATgetArgument(t, 0);
              q_64 = ATgetArgument(t, 1);
              r_64 = ATgetArgument(t, 2);
              {
                ATerm x_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
                t = p_64;
                t = is_local_function_0_0(t);
                t = q_64;
                t = map_1_0(TranslateVarDec_0_0, t);
                i_65 = t;
                t = r_64;
                t = map_1_0(TranslateVarDec_0_0, t);
                j_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_65, j_65);
                t = conc_0_0(t);
                k_65 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, k_65, (ATerm) ATinsert(ATempty, term_s_11)))))));
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                {
                  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
                  t = p_64;
                  {
                    ATerm a_24 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = a_24;
                      }
                  }
                  t = q_64;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  m_33 = t;
                  t = r_64;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  n_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
                  t = conc_0_0(t);
                  o_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, o_33, (ATerm) ATinsert(ATempty, term_s_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL;
  if(match_cons(t, sym__2))
    {
      a_66 = ATgetArgument(t, 0);
      b_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(a_66, b_66, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm f_10 (ATerm o_39, ATerm m_39, ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,s_65 = NULL,u_65 = NULL,v_65 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,y_65 = NULL;
  t = m_39;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            y_65 = ATgetArgument(t, 0);
            {
              ATerm d_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_24);
        t = y_65;
        t = foldr_3_0(r_3, s_3, t_3, t);
      }
    else
      {
        t = b_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm e_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_b_14;
      }
  }
  q_65 = t;
  t = SSL_int_to_string(q_65);
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_39, q_65);
  y_33 = t;
  t = term_n_14;
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, o_39, q_65));
  t = e_10(z_33, y_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_24) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(o_39);
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_65), term_g_14), (ATerm) ATinsert(ATempty, term_g_14));
  t = conc_0_0(t);
  v_65 = t;
  t = SSL_implode_string(v_65);
  s_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_33))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_33), term_b_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_24), (ATerm) ATmakeAppl(sym_IntConst_1, p_65)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_65)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_66 = ATgetFirst((ATermList) t);
      g_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_66;
  if(match_int(t, 95))
    {
      ATerm i_66 = NULL;
      t = g_66;
      t = w_0(t);
      i_66 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(i_66), term_k_24), term_k_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm k_66 = NULL;
          t = g_66;
          t = w_0(t);
          k_66 = t;
          t = (ATerm) ATinsert(CheckATermList(k_66), term_k_24);
        }
      else
        {
          ATerm m_66 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = g_66;
          t = w_0(t);
          m_66 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_66), term_k_24), term_l_24), term_k_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm x_137 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  q_66 = t;
  t = SSL_explode_string(q_66);
  {
    static ATerm c_67 (ATerm t)
    {
      ATerm m_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_137(c_67, t);
          LocalPopChoice(v_24);
        }
      else
        {
          t = m_24;
          {
            ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
            b_67 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_66 = ATgetFirst((ATermList) t);
                a_67 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm e_34 = NULL,k_34 = NULL,l_9 = NULL;
                  t = SSLgetAnnotations(b_67);
                  e_34 = t;
                  t = a_67;
                  t = c_67(t);
                  k_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_34), z_66);
                  l_9 = t;
                  t = SSLsetAnnotations(l_9, e_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_67;
              }
          }
        }
      return(t);
    }
    t = c_67(t);
  }
  p_66 = t;
  t = SSL_implode_string(p_66);
  return(t);
}
ATerm foldr_3_0 (ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_67;
      t = n_134(t);
    }
  else
    {
      ATerm k_67 = NULL,l_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_67 = ATgetFirst((ATermList) t);
          h_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_67;
      t = p_134(t);
      k_67 = t;
      t = h_67;
      t = foldr_3_0(n_134, o_134, p_134, t);
      l_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_67, l_67);
      t = o_134(t);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      y_67 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(y_67, z_67, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm g_10 (ATerm b_39, ATerm a_39, ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,w_67 = NULL;
  t = a_39;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            w_67 = ATgetArgument(t, 0);
            {
              ATerm y_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_24);
        t = w_67;
        t = foldr_3_0(u_3, v_3, w_3, t);
      }
    else
      {
        t = w_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm z_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_b_14;
      }
  }
  n_67 = t;
  t = b_39;
  t = escape_1_0(Cify_1_0, t);
  p_67 = t;
  t = SSL_int_to_string(n_67);
  q_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_67), term_b_25), p_67), term_a_25);
  t_67 = t;
  t = SSL_concat_strings(t_67);
  o_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_39, n_67);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, o_67);
  s_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_39, n_67), (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, o_67));
  t = i_10(x_3, r_67, s_67, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_67), term_n_11)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
  d_68 = t;
  t = term_g_25;
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, d_68);
  t = p_10(e_68, d_68, t);
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, c_68);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_h_25;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_68 = NULL,b_68 = NULL;
        t = term_k_25;
        a_68 = t;
        t = term_h_25;
        b_68 = t;
        t = term_l_25;
        t = x_10(a_68, b_68, t);
        t = map_1_0(y_3, t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm u_68 = NULL,a_69 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      u_68 = ATgetArgument(t, 0);
      a_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(u_68, a_69, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      b_69 = ATgetArgument(t, 0);
      c_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(b_69, c_69, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      ATerm n_25 = ATgetArgument(t, 1);
      ATerm o_25 = ATgetArgument(t, 2);
      ATerm p_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm f_69 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      f_69 = ATgetArgument(t, 1);
      {
        ATerm r_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_69), term_n_11)));
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL;
  if(match_cons(t, sym__3))
    {
      h_69 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
      j_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_9(h_69, i_69, j_69, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,a_70 = NULL;
  a_70 = t;
  if(match_cons(t, sym_Conc_2))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, w_69, x_69);
            t = conc_0_0(t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = a_70;
          }
      }
    }
  else
    {
      t = a_70;
    }
  return(t);
}
static ATerm h_10 (ATerm v_39, ATerm y_39, ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  q_68 = t;
  t = GenerateIncludes_0_0(t);
  i_68 = t;
  t = v_39;
  t = map_1_0(z_3, t);
  j_68 = t;
  t = v_39;
  t = map_1_0(a_4, t);
  t = concat_0_0(t);
  k_68 = t;
  t = y_39;
  t = map_1_0(SDefToDeclaration_0_0, t);
  l_68 = t;
  t = y_39;
  t = filter_1_0(b_4, t);
  t = map_1_0(TranslateDef_0_0, t);
  m_68 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_69 = NULL,p_34 = NULL,q_34 = NULL;
        t = (ATerm) ATempty;
        p_34 = t;
        t = term_x_12;
        q_34 = t;
        t = term_f_13;
        t = e_10(q_34, p_34, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            d_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_69;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
  }
  t_68 = t;
  t = map_1_0(c_4, t);
  r_68 = t;
  t = t_68;
  t = map_1_0(d_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, e_4, t);
  s_68 = t;
  t = q_68;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_69 = NULL,q_69 = NULL;
        t = term_k_25;
        p_69 = t;
        t = term_z_25;
        q_69 = t;
        t = term_a_26;
        t = x_10(p_69, q_69, t);
        t = q_68;
        LocalPopChoice(y_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_c_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), term_f_20));
      }
  }
  n_68 = t;
  t = q_68;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_69 = NULL,s_69 = NULL;
        t = term_k_25;
        r_69 = t;
        t = term_z_25;
        s_69 = t;
        t = term_a_26;
        t = x_10(r_69, s_69, t);
        t = q_68;
        LocalPopChoice(h_26);
        t = (ATerm) ATinsert(ATempty, term_j_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATinsert(ATempty, term_l_26);
      }
  }
  o_68 = t;
  t = q_68;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_69 = NULL,u_69 = NULL;
        t = term_k_25;
        t_69 = t;
        t = term_z_25;
        u_69 = t;
        t = term_a_26;
        t = x_10(t_69, u_69, t);
        t = q_68;
        LocalPopChoice(n_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = m_26;
        {
          ATerm v_69 = NULL;
          t = MainDef_0_0(t);
          v_69 = t;
          t = (ATerm) ATinsert(ATempty, v_69);
        }
      }
  }
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, i_68, n_68), j_68), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_68)))), r_68), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_u_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_68)))), o_68), l_68), p_68), m_68));
  t = bottomup_1_0(f_4, t);
  return(t);
}
static ATerm i_10 (ATerm l_151 (ATerm), ATerm l_79, ATerm j_79, ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  i_70 = t;
  t = l_151(t);
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_70, l_79, j_79);
  t = y_10(f_70, l_79, j_79, t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_70 = NULL;
        t = term_y_26;
        n_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_70, term_y_26);
        t = x_10(f_70, n_70, t);
        {
          ATerm z_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_26;
            }
        }
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_70 = ATgetFirst((ATermList) t);
      h_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_70, term_y_26, (ATerm) ATinsert(CheckATermList(h_70), (ATerm) ATinsert(CheckATermList(g_70), l_79)));
  t = lookup_table_0_1(f_70, t);
  m_70 = t;
  t = term_y_26;
  j_70 = t;
  t = (ATerm) ATinsert(CheckATermList(h_70), (ATerm) ATinsert(CheckATermList(g_70), l_79));
  k_70 = t;
  t = m_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(j_70, k_70, l_70, t);
  t = i_70;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  o_70 = t;
  t = term_c_27;
  p_70 = t;
  t = term_m_27;
  q_70 = t;
  t = term_n_27;
  t = i_10(j_4, p_70, q_70, t);
  t = o_70;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
        {
          ATerm s_27 = ATgetFirst((ATermList) o_27);
          if(match_cons(s_27, sym_Signature_1))
            {
              ATerm x_27 = ATgetArgument(s_27, 0);
              if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
                {
                  ATerm z_27 = ATgetFirst((ATermList) x_27);
                  if(match_cons(z_27, sym_Constructors_1))
                    {
                      s_70 = ATgetArgument(z_27, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_28 = (ATerm) ATgetNext((ATermList) x_27);
                    if(((ATgetType(a_28) != AT_LIST) || !(ATisEmpty(a_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm t_27 = (ATerm) ATgetNext((ATermList) o_27);
            if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
              {
                ATerm b_28 = ATgetFirst((ATermList) t_27);
                if(match_cons(b_28, sym_Strategies_1))
                  {
                    t_70 = ATgetArgument(b_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_28 = (ATerm) ATgetNext((ATermList) t_27);
                  if(((ATgetType(g_28) != AT_LIST) || !(ATisEmpty(g_28))))
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
  t = h_10(s_70, t_70, t);
  t = listbottomup_1_0(k_4, t);
  return(t);
}
static ATerm k_10 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm v_70 = NULL;
  t = SSL_fputc(u_56, v_56);
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_70);
  return(t);
}
static ATerm l_10 (ATerm p_41, ATerm q_41, ATerm t)
{
  ATerm w_70 = NULL;
  t = SSL_write_term_to_stream_text(p_41, q_41);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_70);
  return(t);
}
static ATerm n_10 (ATerm d_127 (ATerm), ATerm j_266, ATerm v_41, ATerm t)
{
  ATerm x_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_266, term_h_28);
  t = r_10(t);
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_70, v_41);
  t = d_127(t);
  t = fclose_0_0(t);
  t = v_41;
  return(t);
}
static ATerm m_10 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm y_70 = NULL;
  t = SSL_write_term_to_stream_baf(l_41, m_41);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_70);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym_Stream_1))
        {
          l_71 = ATgetArgument(i_28, 0);
        }
      else
        _fail(t);
      m_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(l_71, m_71, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          q_71 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      r_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(q_71, r_71, t);
  n_71 = t;
  t = term_m_28;
  o_71 = t;
  t = n_71;
  if(match_cons(t, sym_Stream_1))
    {
      p_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, n_71);
  t = k_10(o_71, p_71, t);
  return(t);
}
ATerm output_1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL;
  t = n_144(t);
  e_71 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_71 = NULL,i_71 = NULL;
        t = term_k_25;
        f_71 = t;
        t = term_r_28;
        i_71 = t;
        t = term_u_28;
        t = x_10(f_71, i_71, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = term_c_29;
      }
  }
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, e_71);
  {
    ATerm d_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_71 = NULL,k_71 = NULL;
        t = term_k_25;
        j_71 = t;
        t = term_i_29;
        k_71 = t;
        t = term_k_29;
        t = x_10(j_71, k_71, t);
        t = (ATerm) ATmakeAppl(sym__2, d_71, e_71);
        LocalPopChoice(h_29);
        if(match_cons(t, sym__2))
          {
            ATerm l_29 = ATgetArgument(t, 0);
            ATerm m_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(l_4, d_71, e_71, t);
      }
    else
      {
        t = d_29;
        if(match_cons(t, sym__2))
          {
            ATerm s_29 = ATgetArgument(t, 0);
            ATerm t_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(p_4, d_71, e_71, t);
      }
  }
  return(t);
}
static ATerm f_72 (ATerm z_71, ATerm t)
{
  t = SSL_fclose(z_71);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL;
  d_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_72 = ATgetArgument(t, 0);
      {
        ATerm v_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_72);
            LocalPopChoice(z_29);
          }
        else
          {
            t = v_29;
            t = f_72(d_72, t);
          }
      }
    }
  else
    {
      t = f_72(d_72, t);
    }
  return(t);
}
static ATerm o_10 (ATerm r_41, ATerm t)
{
  t = SSL_read_term_from_stream(r_41);
  return(t);
}
static ATerm p_10 (ATerm n_55, ATerm o_55, ATerm t)
{
  t = SSL_strcat(n_55, o_55);
  return(t);
}
static ATerm q_10 (ATerm w_56, ATerm x_56, ATerm t)
{
  ATerm g_72 = NULL;
  t = SSL_fopen(w_56, x_56);
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_72 = NULL;
  t = SSL_stdin_stream();
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_72 = NULL;
  t = SSL_stdout_stream();
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_72 = NULL;
  t = SSL_stderr_stream();
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_72);
  return(t);
}
static ATerm q_73 (ATerm p_72, ATerm t)
{
  ATerm q_72 = NULL;
  t = SSL_explode_term(p_72);
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
          {
            q_72 = ATgetFirst((ATermList) f_30);
            {
              ATerm g_30 = (ATerm) ATgetNext((ATermList) f_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_73 (ATerm t_72, ATerm u_72, ATerm v_72, ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,b_73 = NULL,n_9 = NULL;
  t = SSLgetAnnotations(v_72);
  y_72 = t;
  t = t_72;
  if(match_cons(t, sym_Path_1))
    {
      b_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_73, u_72);
  n_9 = t;
  t = SSLsetAnnotations(n_9, y_72);
  if(match_cons(t, sym__2))
    {
      w_72 = ATgetArgument(t, 0);
      x_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(w_72, x_72, t);
  return(t);
}
static ATerm s_73 (ATerm d_73, ATerm e_73, ATerm f_73, ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,l_73 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(f_73);
  i_73 = t;
  t = SSL_is_string(d_73);
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_73, e_73);
  o_9 = t;
  t = SSLsetAnnotations(o_9, i_73);
  if(match_cons(t, sym__2))
    {
      g_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(g_73, h_73, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL;
  n_73 = t;
  if(match_cons(t, sym__2))
    {
      o_73 = ATgetArgument(t, 0);
      p_73 = ATgetArgument(t, 1);
      {
        ATerm k_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_73(n_73, t);
            LocalPopChoice(n_30);
          }
        else
          {
            t = k_30;
            {
              ATerm o_30 = t;
              int s_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_73(o_73, p_73, n_73, t);
                  LocalPopChoice(s_30);
                }
              else
                {
                  t = o_30;
                  t = s_73(o_73, p_73, n_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_73(n_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,b_74 = NULL;
  b_74 = t;
  {
    ATerm t_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_74, term_w_30);
        t = r_10(t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = t_30;
        {
          ATerm a_35 = NULL,b_35 = NULL;
          t = term_y_30;
          b_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_30, b_74);
          t = p_10(b_35, b_74, t);
          a_35 = t;
          t = SSL_perror(a_35);
          _fail(t);
        }
      }
  }
  v_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(w_73, t);
  u_73 = t;
  t = v_73;
  t = fclose_0_0(t);
  t = u_73;
  return(t);
}
ATerm input_1_0 (ATerm o_144 (ATerm), ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_74 = NULL,m_74 = NULL;
      t = term_k_25;
      e_74 = t;
      t = term_b_31;
      m_74 = t;
      t = term_c_31;
      t = x_10(e_74, m_74, t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = term_g_31;
    }
  t = ReadFromFile_0_0(t);
  t = o_144(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  q_74 = t;
  t = term_i_31;
  t = whoami_0_0(t);
  r_74 = t;
  t = term_j_31;
  t_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_31), r_74), term_l_31);
  u_74 = t;
  t = SSL_printnl(t_74, u_74);
  t = term_c_14;
  s_74 = t;
  t = SSL_exit(s_74);
  t = q_74;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  if(match_string(t, "-k"))
    {
      t = w_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_74;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  t = SSL_string_to_int(x_74);
  y_74 = t;
  t = term_p_31;
  z_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_31, y_74);
  t = a_11(z_74, y_74, t);
  t = x_74;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, v_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  if(match_string(t, "-S"))
    {
      t = b_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_75;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL;
  t = term_r_31;
  c_75 = t;
  t = term_b_14;
  d_75 = t;
  t = term_u_31;
  t = a_11(c_75, d_75, t);
  t = term_y_31;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  t = SSL_string_to_int(e_75);
  f_75 = t;
  t = term_r_31;
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, f_75);
  t = a_11(g_75, f_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_75);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL;
  t = term_b_32;
  h_75 = t;
  t = term_i_31;
  i_75 = t;
  t = term_c_32;
  t = a_11(h_75, i_75, t);
  t = term_e_32;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, z_4, a_5, t);
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_5, f_5, g_5, t);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            t = Option_3_0(k_5, l_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm a_11 (ATerm f_89, ATerm g_89, ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_k_25;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, f_89, g_89);
  t = lookup_table_0_1(j_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(f_89, g_89, k_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, f_89, g_89);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
      t = term_i_31;
      t = k_0(t);
      q_75 = t;
      t = term_p_32;
      r_75 = t;
      t = term_q_32;
      s_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, q_75);
      t = y_10(r_75, s_75, q_75, t);
      _fail(t);
    }
  else
    {
      ATerm v_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_75 = ATgetFirst((ATermList) t);
          p_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_75;
      t = d_0(t);
      t = term_i_31;
      t = g_0(t);
      v_75 = t;
      t = (ATerm) ATinsert(CheckATermList(p_75), v_75);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_75 = NULL;
  x_75 = t;
  if(match_string(t, "-o"))
    {
      t = x_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_75;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL;
  y_75 = t;
  t = term_r_28;
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, y_75);
  t = a_11(z_75, y_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_75);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm b_76 = NULL;
  b_76 = t;
  if(match_string(t, "-i"))
    {
      t = b_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_76;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL;
  c_76 = t;
  t = term_b_31;
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, c_76);
  t = a_11(d_76, c_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_76);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, t_5, u_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  static ATerm y_76 (ATerm t)
  {
    ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
    x_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_76 = ATgetFirst((ATermList) t);
        w_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_35 = NULL,n_35 = NULL,v_9 = NULL;
          t = SSLgetAnnotations(x_76);
          h_35 = t;
          t = w_76;
          t = y_76(t);
          n_35 = t;
          t = (ATerm) ATinsert(CheckATermList(n_35), v_76);
          v_9 = t;
          t = SSLsetAnnotations(v_9, h_35);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_76;
        t = d_128(t);
      }
    return(t);
  }
  t = y_76(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
  f_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_76;
    }
  else
    {
      static ATerm w_5 (ATerm t)
      {
        t = not_null(h_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_76 = ATgetFirst((ATermList) t);
          if(((h_76 != NULL) && (h_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_76;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm k_77 (ATerm c_77, ATerm t)
{
  ATerm d_77 = NULL;
  t = SSL_explode_term(c_77);
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  h_77 = t;
  if(match_cons(t, sym__2))
    {
      f_77 = ATgetArgument(t, 0);
      g_77 = ATgetArgument(t, 1);
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t)
            {
              t = g_77;
              return(t);
            }
            t = f_77;
            t = at_end_1_0(x_5, t);
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            t = k_77(h_77, t);
          }
      }
    }
  else
    {
      t = k_77(h_77, t);
    }
  return(t);
}
static ATerm j_10 (ATerm m_89, ATerm n_89, ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL;
  t = m_89;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_77 = NULL;
        t = term_k_25;
        q_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, m_89);
        t = x_10(q_77, m_89, t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATempty;
      }
  }
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, n_89);
  t = conc_0_0(t);
  l_77 = t;
  t = term_k_25;
  n_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, m_89, l_77);
  t = lookup_table_0_1(n_77, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(m_89, l_77, o_77, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, m_89, l_77);
  return(t);
}
static ATerm y_10 (ATerm n_69, ATerm o_69, ATerm m_69, ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_69, o_69);
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_33 = ATgetArgument(t, 0);
            ATerm e_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_69, o_69);
        t = x_10(n_69, o_69, t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = (ATerm) ATempty;
      }
  }
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_69, o_69, (ATerm) ATinsert(CheckATermList(t_77), m_69));
  t = lookup_table_0_1(n_69, t);
  w_77 = t;
  t = (ATerm) ATinsert(CheckATermList(t_77), m_69);
  u_77 = t;
  t = w_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(o_69, u_77, v_77, t);
  t = s_77;
  return(t);
}
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,w_78 = NULL,x_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
      t = term_i_31;
      t = u_0(t);
      y_78 = t;
      t = term_p_32;
      z_78 = t;
      t = term_q_32;
      a_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, y_78);
      t = y_10(z_78, a_79, y_78, t);
      _fail(t);
    }
  else
    {
      ATerm e_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_78 = ATgetFirst((ATermList) t);
          o_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_78 = ATgetFirst((ATermList) t);
          x_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_78;
      t = q_0(t);
      t = w_78;
      t = t_0(t);
      e_79 = t;
      t = (ATerm) ATinsert(CheckATermList(x_78), e_79);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  g_79 = t;
  t = term_h_25;
  h_79 = t;
  t = (ATerm) ATinsert(ATempty, g_79);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, g_79));
  t = j_10(h_79, i_79, t);
  t = g_79;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_79 = NULL;
  o_79 = t;
  if(match_string(t, "--library"))
    {
      t = o_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = o_79;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,s_79 = NULL;
  p_79 = t;
  t = term_z_25;
  q_79 = t;
  t = term_i_31;
  s_79 = t;
  t = term_g_33;
  t = a_11(q_79, s_79, t);
  t = p_79;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(a_6, b_6, g_6, t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = Option_3_0(i_6, j_6, l_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_31;
  t = whoami_0_0(t);
  t_79 = t;
  t = term_j_31;
  v_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_33), t_79);
  w_79 = t;
  t = SSL_printnl(v_79, w_79);
  t = term_c_14;
  u_79 = t;
  t = SSL_exit(u_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL;
  t = term_k_25;
  x_79 = t;
  t = term_l_33;
  y_79 = t;
  t = term_p_33;
  t = x_10(x_79, y_79, t);
  return(t);
}
static ATerm s_10 (ATerm q_59, ATerm r_59, ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_59, r_59);
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      t = SSL_addr(q_59, r_59);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  a_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_80;
      t = l_134(t);
    }
  else
    {
      ATerm f_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_80 = ATgetFirst((ATermList) t);
          c_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_80;
      t = foldr_2_0(l_134, m_134, t);
      f_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_80, f_80);
      t = m_134(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(w_35, x_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_80 = NULL,s_35 = NULL,t_35 = NULL;
  t = times_0_0(t);
  t_35 = t;
  t = SSL_explode_term(t_35);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_35;
  t = foldr_2_0(n_6, o_6, t);
  i_80 = t;
  t = SSL_TicksToSeconds(i_80);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  t_80 = t;
  if(match_cons(t, sym__2))
    {
      u_80 = ATgetArgument(t, 0);
      v_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_80;
        if((u_80 != t))
          {
            _fail(t);
          }
        t = t_80;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATmakeAppl(sym__2, u_80, v_80);
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_80, v_80);
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = SSL_gtr(u_80, v_80);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_80, v_80);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_142 (ATerm), ATerm t)
{
  ATerm z_80 = NULL;
  z_80 = t;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
        t = term_k_25;
        c_81 = t;
        t = term_r_31;
        d_81 = t;
        t = term_c_34;
        t = x_10(c_81, d_81, t);
        b_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_81, term_c_14);
        t = geq_0_0(t);
        t = z_80;
        t = q_142(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = z_80;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,i_81 = NULL,j_81 = NULL;
  t = run_time_0_0(t);
  f_81 = t;
  t = term_i_31;
  t = whoami_0_0(t);
  g_81 = t;
  t = term_j_31;
  i_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), f_81), term_d_34), g_81);
  j_81 = t;
  t = SSL_printnl(i_81, j_81);
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_34), f_81), term_d_34), g_81));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_14;
  k_81 = t;
  t = SSL_exit(k_81);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  v_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_81 = ATgetArgument(t, 0);
          {
            ATerm j_36 = NULL,y_9 = NULL;
            t = SSLgetAnnotations(v_81);
            j_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_81);
            y_9 = t;
            t = SSLsetAnnotations(y_9, j_36);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_144 (ATerm), ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_81 = NULL,o_81 = NULL;
      t = term_k_25;
      n_81 = t;
      t = term_i_34;
      o_81 = t;
      t = term_j_34;
      t = x_10(n_81, o_81, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = fetch_1_0(r_6, t);
    }
  t = e_144(t);
  return(t);
}
static ATerm b_11 (ATerm f_74, ATerm g_74, ATerm h_74, ATerm t)
{
  ATerm x_81 = NULL;
  t = SSL_hashtable_put(h_74, f_74, g_74);
  x_81 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_81);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_70, ATerm t)
{
  ATerm g_82 = NULL;
  t = table_hashtable_0_0(t);
  g_82 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_36 = NULL;
        t = g_82;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_11(z_70, p_36, t);
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        {
          ATerm u_36 = NULL;
          t = z_70;
          t = table_create_0_0(t);
          t = g_82;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_11(z_70, u_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_74, ATerm o_74, ATerm t)
{
  ATerm j_82 = NULL;
  t = SSL_hashtable_create(n_74, o_74);
  j_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_82);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,o_82 = NULL,p_82 = NULL;
  k_82 = t;
  t = term_n_34;
  o_82 = t;
  t = term_o_34;
  p_82 = t;
  t = k_82;
  t = new_hashtable_0_2(o_82, p_82, t);
  l_82 = t;
  t = k_82;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(k_82, l_82, m_82, t);
  t = k_82;
  return(t);
}
static ATerm u_10 (ATerm k_74, ATerm l_74, ATerm t)
{
  ATerm q_82 = NULL;
  t = SSL_hashtable_remove(l_74, k_74);
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_82);
  return(t);
}
static ATerm v_10 (ATerm p_74, ATerm t)
{
  ATerm r_82 = NULL;
  t = SSL_hashtable_destroy(p_74);
  r_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_82);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_82 = NULL;
  t = SSL_table_hashtable();
  s_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_82);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  t_82 = t;
  t = table_hashtable_0_0(t);
  u_82 = t;
  t = lookup_table_0_1(t_82, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(w_82, t);
  t = u_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(t_82, v_82, t);
  t = t_82;
  return(t);
}
ATerm map_1_0 (ATerm m_127 (ATerm), ATerm t)
{
  static ATerm l_83 (ATerm t)
  {
    ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
    i_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_83;
      }
    else
      {
        ATerm z_36 = NULL,c_37 = NULL,d_37 = NULL,z_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_83 = ATgetFirst((ATermList) t);
            k_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_83);
        z_36 = t;
        t = j_83;
        t = m_127(t);
        c_37 = t;
        t = k_83;
        t = l_83(t);
        d_37 = t;
        t = (ATerm) ATinsert(CheckATermList(d_37), c_37);
        z_10 = t;
        t = SSLsetAnnotations(z_10, z_36);
      }
    return(t);
  }
  t = l_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_83 = ATgetFirst((ATermList) t);
      p_83 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_83 = NULL,u_83 = NULL;
        static ATerm s_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_83)), not_null(u_83));
          return(t);
        }
        t = p_83;
        t = p_0(t);
        if(((t_83 != NULL) && (t_83 != t)))
          _fail(t);
        else
          t_83 = t;
        t = o_83;
        t = m_0(t);
        if(((u_83 != NULL) && (u_83 != t)))
          _fail(t);
        else
          u_83 = t;
        t = p_83;
        t = reverse_acc_2_0(m_0, s_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_31;
      t = p_0(t);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,e_11 = NULL;
  c_84 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_84);
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_84);
  e_11 = t;
  t = SSLsetAnnotations(e_11, a_84);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm e_84 = NULL;
  e_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_84), term_r_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL;
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_83 = NULL,z_83 = NULL;
      t = term_k_25;
      y_83 = t;
      t = term_l_33;
      z_83 = t;
      t = term_p_33;
      t = x_10(y_83, z_83, t);
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = fetch_1_0(t_6, t);
    }
  t = term_u_34;
  t = echo_0_0(t);
  t = term_p_32;
  w_83 = t;
  t = term_q_32;
  x_83 = t;
  t = term_v_34;
  t = x_10(w_83, x_83, t);
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(x_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_127 (ATerm), ATerm t)
{
  static ATerm b_85 (ATerm t)
  {
    ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL;
    y_84 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_84 = ATgetFirst((ATermList) t);
        a_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_37 = NULL,o_37 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(y_84);
          l_37 = t;
          t = z_84;
          t = w_127(t);
          o_37 = t;
          t = (ATerm) ATinsert(CheckATermList(a_85), o_37);
          g_11 = t;
          t = SSLsetAnnotations(g_11, l_37);
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm x_37 = NULL,a_38 = NULL,h_11 = NULL;
            t = SSLgetAnnotations(y_84);
            x_37 = t;
            t = a_85;
            t = b_85(t);
            a_38 = t;
            t = (ATerm) ATinsert(CheckATermList(a_38), z_84);
            h_11 = t;
            t = SSLsetAnnotations(h_11, x_37);
          }
        }
    }
    return(t);
  }
  t = b_85(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
  f_85 = t;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_85;
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
            t = f_85;
          }
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATinsert(ATempty, f_85);
      }
  }
  g_85 = t;
  t = term_c_29;
  h_85 = t;
  t = SSL_printnl(h_85, g_85);
  t = f_85;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL;
  t = term_k_25;
  l_85 = t;
  t = term_l_33;
  m_85 = t;
  t = term_p_33;
  t = x_10(l_85, m_85, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm i_74, ATerm j_74, ATerm t)
{
  t = SSL_hashtable_get(j_74, i_74);
  return(t);
}
static ATerm x_10 (ATerm g_71, ATerm h_71, ATerm t)
{
  ATerm n_85 = NULL;
  t = lookup_table_0_1(g_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(h_71, n_85, t);
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
  ATerm p_85 = NULL,q_85 = NULL;
  t = term_e_35;
  p_85 = t;
  t = term_i_31;
  q_85 = t;
  t = term_f_35;
  t = a_11(p_85, q_85, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  t = term_e_35;
  t_85 = t;
  t = term_i_31;
  u_85 = t;
  t = term_f_35;
  t = a_11(t_85, u_85, t);
  t = term_m_35;
  r_85 = t;
  t = term_i_31;
  s_85 = t;
  t = term_o_35;
  t = a_11(r_85, s_85, t);
  t = term_p_35;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_7, d_7, f_7, t);
      LocalPopChoice(u_35);
    }
  else
    {
      t = r_35;
      t = Option_3_0(g_7, h_7, m_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,p_11 = NULL;
  a_86 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_85 = ATgetFirst((ATermList) t);
      x_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_86);
  v_85 = t;
  t = w_85;
  t = y_98(t);
  y_85 = t;
  t = x_85;
  t = z_98(t);
  z_85 = t;
  t = (ATerm) ATinsert(CheckATermList(z_85), y_85);
  p_11 = t;
  t = SSLsetAnnotations(p_11, v_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_146 (ATerm), ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,k_86 = NULL,l_86 = NULL,v_11 = NULL;
  f_86 = t;
  {
    ATerm v_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_35;
        t = v_146(t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = v_35;
      }
  }
  t = f_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_86 = ATgetFirst((ATermList) t);
      i_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_86);
  g_86 = t;
  t = term_l_33;
  l_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_33, h_86);
  t = a_11(l_86, h_86, t);
  t = i_86;
  {
    static ATerm v_86 (ATerm t)
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_86 = NULL;
              o_86 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_86;
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
              t = v_146(t);
              t = Cons_2_0(_id, v_86, t);
            }
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          {
            ATerm r_86 = NULL,s_86 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_86 = ATgetFirst((ATermList) t);
                s_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_86), (ATerm) ATmakeAppl(sym_Undefined_1, r_86));
          }
        }
      return(t);
    }
    t = v_86(t);
  }
  k_86 = t;
  t = (ATerm) ATinsert(CheckATermList(k_86), (ATerm) ATmakeAppl(sym_Program_1, h_86));
  v_11 = t;
  t = SSLsetAnnotations(v_11, g_86);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm i_87 = NULL;
  i_87 = t;
  if(match_string(t, "--help"))
    {
      t = i_87;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_87;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_87;
        }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  t = term_i_34;
  j_87 = t;
  t = term_i_31;
  k_87 = t;
  t = term_e_36;
  t = a_11(j_87, k_87, t);
  t = term_f_36;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL;
  c_87 = t;
  t = term_p_32;
  d_87 = t;
  t = term_h_36;
  t = lookup_table_0_1(d_87, t);
  h_87 = t;
  t = term_q_32;
  e_87 = t;
  t = (ATerm) ATempty;
  f_87 = t;
  t = h_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(e_87, f_87, g_87, t);
  t = c_87;
  {
    static ATerm n_7 (ATerm t)
    {
      ATerm i_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_146(t);
          LocalPopChoice(k_36);
        }
      else
        {
          t = i_36;
          {
            ATerm l_36 = t;
            int m_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_7, r_7, s_7, t);
                LocalPopChoice(m_36);
              }
            else
              {
                t = l_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_7, t);
  }
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_87 = NULL;
        v_87 = t;
        {
          ATerm q_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_38 = NULL;
              t = v_87;
              {
                ATerm s_36 = t;
                int t_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_38 = NULL,l_38 = NULL;
                    t = term_k_25;
                    j_38 = t;
                    t = term_i_34;
                    l_38 = t;
                    t = term_j_34;
                    t = x_10(j_38, l_38, t);
                    LocalPopChoice(t_36);
                  }
                else
                  {
                    t = s_36;
                    t = fetch_1_0(u_7, t);
                  }
              }
              t = v_87;
              t = default_system_usage_0_0(t);
              t = term_b_14;
              i_38 = t;
              t = SSL_exit(i_38);
              LocalPopChoice(r_36);
            }
          else
            {
              t = q_36;
              {
                ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                t = term_k_25;
                q_38 = t;
                t = term_e_35;
                r_38 = t;
                t = term_v_36;
                t = x_10(q_38, r_38, t);
                t = v_87;
                t = default_system_about_0_0(t);
                t = term_b_14;
                p_38 = t;
                t = SSL_exit(p_38);
              }
            }
        }
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        {
          ATerm w_36 = t;
          int x_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
              static ATerm v_7 (ATerm t)
              {
                ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL,x_11 = NULL;
                b_88 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_88);
                z_87 = t;
                t = a_88;
                if(((a_87 != NULL) && (a_87 != t)))
                  _fail(t);
                else
                  a_87 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_88);
                x_11 = t;
                t = SSLsetAnnotations(x_11, z_87);
                return(t);
              }
              t = fetch_1_0(v_7, t);
              t = term_j_31;
              x_87 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_87)), term_y_36);
              y_87 = t;
              t = SSL_printnl(x_87, y_87);
              t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_87)), term_y_36));
              t = default_system_usage_0_0(t);
              t = term_c_14;
              w_87 = t;
              t = SSL_exit(w_87);
              LocalPopChoice(x_36);
            }
          else
            {
              t = w_36;
            }
        }
      }
  }
  b_87 = t;
  t = term_p_32;
  t = table_destroy_0_0(t);
  t = b_87;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  t = parse_options_1_0(g_144, t);
  g_88 = t;
  t = term_a_37;
  t = table_create_0_0(t);
  t = term_a_37;
  h_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_37, term_b_37, g_88);
  t = lookup_table_0_1(h_88, t);
  k_88 = t;
  t = term_b_37;
  i_88 = t;
  t = k_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(i_88, g_88, j_88, t);
  t = g_88;
  t = i_144(t);
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_144, t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        {
          ATerm g_37 = t;
          int h_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_144(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_37);
            }
          else
            {
              t = g_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm k_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(m_37);
          }
        else
          {
            t = k_37;
            {
              ATerm n_37 = t;
              int p_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(p_37);
                }
              else
                {
                  t = n_37;
                  {
                    ATerm q_37 = t;
                    int r_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, c_8, d_8, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(t_37);
                            }
                          else
                            {
                              t = s_37;
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
  t = input_1_0(e_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL;
  t = term_i_29;
  m_88 = t;
  t = term_i_31;
  n_88 = t;
  t = term_u_37;
  t = a_11(m_88, n_88, t);
  t = term_v_37;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_7, default_usage_0_0, _id, z_7, t);
  return(t);
}
