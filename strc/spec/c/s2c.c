#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Match_2;
Symbol sym_Conc_2;
Symbol sym_Include_1;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_DeclSpec_5;
Symbol sym_TypeSpec_3;
Symbol sym_DeclInit_2;
Symbol sym_AssignInit_1;
Symbol sym_Declaration2_2;
Symbol sym_Int_0;
Symbol sym_Void_0;
Symbol sym_Static_0;
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
static void init_module_constructors (void)
{
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
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
  sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
  ATprotectSymbol(sym_Static_0);
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
}
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_b_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_e_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_p_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_e_30;
ATerm term_x_29;
ATerm term_a_29;
ATerm term_o_28;
ATerm term_h_28;
ATerm term_b_28;
ATerm term_q_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_s_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_c_21;
ATerm term_b_21;
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
ATerm term_v_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_p_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_10, (ATerm) ATempty);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Id_1, term_v_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Id_1, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_11, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Some_1, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_10, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Id_1, term_k_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_11, (ATerm) ATempty);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_o_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Id_1, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Return_1, term_d_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Id_1, term_d_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, (ATerm) ATempty);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_10, term_e_11);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Id_1, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Id_1, term_d_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Id_1, term_l_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Id_1, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Id_1, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Id_1, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, term_t_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Id_1, term_y_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Id_1, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_16, (ATerm) ATempty);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_16, term_e_11);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Id_1, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Id_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_16, (ATerm) ATempty);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_16, term_e_11);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_l_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_z_16);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Stat_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_11);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATempty);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_z_18, term_a_15);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_1, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_19, (ATerm) ATempty);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_1, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_h_19, term_a_15);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_19, (ATerm) ATempty);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Id_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Id_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Id_1, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_y_19, term_e_11);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Id_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Id_1, term_e_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_20, (ATerm) ATempty);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_20, term_e_11);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_b_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, term_d_11);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_f_22, (ATerm)ATempty, term_s_10, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Id_1, term_x_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Id_1, term_z_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_24, (ATerm) ATempty);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_25, (ATerm) ATempty);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Id_1, term_r_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_25, term_e_11);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Include_1, term_w_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Include_1, term_y_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_f_22, (ATerm)ATempty, term_p_25, (ATerm) ATempty);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Id_1, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Id_1, term_f_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Op_2, term_m_26, (ATerm) ATempty);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Defined_2, term_p_26, term_u_15);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_t_26);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_s_13);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_13);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_n_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_n_30);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_q_31);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_o_34, term_n_30);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_r_34, term_n_30);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_n_30);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_n_30);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm s_132 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm d_9 (ATerm u_28, ATerm w_28, ATerm v_28, ATerm t);
static ATerm q_9 (ATerm m_67, ATerm n_67, ATerm t);
static ATerm y_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_9 (ATerm g_28, ATerm j_28, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm g_9 (ATerm p_33, ATerm o_33, ATerm t);
static ATerm h_9 (ATerm v_172, ATerm l_33, ATerm n_33, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm e_51 (ATerm o_26, ATerm q_26, ATerm r_26, ATerm s_26, ATerm t);
static ATerm f_51 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
static ATerm g_51 (ATerm i_30, ATerm o_30, ATerm l_32, ATerm t);
static ATerm h_51 (ATerm i_36, ATerm p_36, ATerm d_37, ATerm j_37, ATerm t);
static ATerm i_51 (ATerm f_38, ATerm g_38, ATerm i_38, ATerm j_38, ATerm t);
static ATerm j_51 (ATerm n_38, ATerm r_38, ATerm s_38, ATerm u_38, ATerm t);
static ATerm k_51 (ATerm f_39, ATerm g_39, ATerm h_39, ATerm i_39, ATerm t);
static ATerm l_51 (ATerm s_39, ATerm a_40, ATerm d_40, ATerm l_40, ATerm m_40, ATerm n_40, ATerm w_40, ATerm x_40, ATerm t);
static ATerm m_51 (ATerm c_42, ATerm d_42, ATerm e_42, ATerm f_42, ATerm j_42, ATerm k_42, ATerm t);
static ATerm p_51 (ATerm b_43, ATerm c_43, ATerm e_43, ATerm f_43, ATerm i_43, ATerm k_43, ATerm t);
static ATerm q_51 (ATerm t_43, ATerm u_43, ATerm w_43, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm TranslateStrat_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm m_9 (ATerm x_0 (ATerm), ATerm c_1 (ATerm), ATerm z_0, ATerm d_1, ATerm v_0, ATerm t);
ATerm thread_map_1_0 (ATerm d_117 (ATerm), ATerm t);
static ATerm k_57 (ATerm w_54, ATerm x_54, ATerm y_54, ATerm z_54, ATerm a_55, ATerm t);
static ATerm l_57 (ATerm u_55, ATerm v_55, ATerm w_55, ATerm x_55, ATerm t);
static ATerm m_57 (ATerm c_56, ATerm d_56, ATerm e_56, ATerm f_56, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_103 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm q_117 (ATerm), ATerm t);
ATerm TranslateType_0_0 (ATerm t);
ATerm TranslateVarDec_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm is_local_function_0_0 (ATerm t);
ATerm SDefToDeclaration_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_9 (ATerm t_37, ATerm r_37, ATerm t);
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm x_119 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_9 (ATerm g_37, ATerm f_37, ATerm t);
static ATerm q_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm t_9 (ATerm a_38, ATerm d_38, ATerm t);
static ATerm u_9 (ATerm c_133 (ATerm), ATerm e_73, ATerm c_73, ATerm t);
static ATerm y_3 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm w_9 (ATerm l_54, ATerm m_54, ATerm t);
static ATerm x_9 (ATerm u_39, ATerm v_39, ATerm t);
static ATerm z_9 (ATerm a_110 (ATerm), ATerm p_247, ATerm y_39, ATerm t);
static ATerm y_9 (ATerm q_39, ATerm r_39, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_1_0 (ATerm m_126 (ATerm), ATerm t);
static ATerm s_67 (ATerm k_67, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_10 (ATerm w_39, ATerm t);
static ATerm b_10 (ATerm n_54, ATerm o_54, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_69 (ATerm c_68, ATerm t);
static ATerm g_69 (ATerm g_68, ATerm h_68, ATerm i_68, ATerm t);
static ATerm h_69 (ATerm q_68, ATerm r_68, ATerm u_68, ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_126 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_10 (ATerm n_73, ATerm o_73, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_72 (ATerm h_72, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_9 (ATerm u_73, ATerm v_73, ATerm t);
static ATerm i_10 (ATerm b_67, ATerm c_67, ATerm a_67, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_10 (ATerm g_57, ATerm h_57, ATerm t);
ATerm foldr_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_124 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm need_help_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm g_10 (ATerm f_53, ATerm g_53, ATerm t);
ATerm debug_1_0 (ATerm y_109 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_110 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm h_10 (ATerm s_68, ATerm t_68, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_128 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm parse_options_1_0 (ATerm t_128 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 = NULL,o_1 = NULL,p_1 = NULL,q_0 = NULL,w_0 = NULL,s_0 = NULL;
      m_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_1 = ATgetFirst((ATermList) t);
          p_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_1);
      q_0 = t;
      t = p_1;
      t = listbu1_1_0(w_2, t);
      w_0 = t;
      t = (ATerm) ATinsert(CheckATermList(w_0), o_1);
      s_0 = t;
      t = SSLsetAnnotations(s_0, q_0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_2(t);
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
          }
      }
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      t = w_2(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_8 = ATgetFirst((ATermList) t);
      if(match_cons(h_8, sym_Compound_2))
        {
          ATerm j_8 = ATgetArgument(h_8, 0);
          if(((ATgetType(j_8) != AT_LIST) || !(ATisEmpty(j_8))))
            _fail(t);
          d_4 = ATgetArgument(h_8, 1);
        }
      else
        _fail(t);
      e_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
  t = conc_0_0(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_8 = ATgetFirst((ATermList) t);
      if(match_cons(n_8, sym_Compound_2))
        {
          ATerm o_8 = ATgetArgument(n_8, 0);
          if(((ATgetType(o_8) != AT_LIST) || !(ATisEmpty(o_8))))
            _fail(t);
          z_4 = ATgetArgument(n_8, 1);
        }
      else
        _fail(t);
      a_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_4, a_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm e_5 = NULL,h_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_8 = ATgetFirst((ATermList) t);
      if(match_cons(p_8, sym_Compound_2))
        {
          ATerm q_8 = ATgetArgument(p_8, 0);
          if(((ATgetType(q_8) != AT_LIST) || !(ATisEmpty(q_8))))
            _fail(t);
          e_5 = ATgetArgument(p_8, 1);
        }
      else
        _fail(t);
      h_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_5, h_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_8 = ATgetFirst((ATermList) t);
      if(match_cons(s_8, sym_Compound_2))
        {
          ATerm t_8 = ATgetArgument(s_8, 0);
          if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
            _fail(t);
          u_5 = ATgetArgument(s_8, 1);
        }
      else
        _fail(t);
      v_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_5, v_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm e_6 = NULL,h_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_8 = ATgetFirst((ATermList) t);
      if(match_cons(v_8, sym_Compound_2))
        {
          ATerm x_8 = ATgetArgument(v_8, 0);
          if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
            _fail(t);
          e_6 = ATgetArgument(v_8, 1);
        }
      else
        _fail(t);
      h_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_6, h_6);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      t_2 = ATgetArgument(t, 2);
      t = t_2;
      if(match_cons(t, sym_Compound_2))
        {
          u_2 = ATgetArgument(t, 0);
          v_2 = ATgetArgument(t, 1);
          t = v_2;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_2;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = b_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      c_3 = ATgetArgument(t, 0);
                      f_3 = ATgetArgument(t, 1);
                      t = f_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = c_3;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, a_3), t_2);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, a_3, b_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, a_3, b_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, a_3, b_3);
                    }
                }
              else
                {
                  t = b_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      c_3 = ATgetArgument(t, 0);
                      f_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, a_3), t_2);
                }
            }
          else
            {
              t = b_3;
              if(match_cons(t, sym_Compound_2))
                {
                  c_3 = ATgetArgument(t, 0);
                  f_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, a_3), t_2);
            }
        }
      else
        {
          t = b_3;
          if(match_cons(t, sym_Compound_2))
            {
              c_3 = ATgetArgument(t, 0);
              f_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, a_3), t_2);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_3 = ATgetFirst((ATermList) t);
          b_3 = (ATerm) ATgetNext((ATermList) t);
          t = a_3;
          if(match_cons(t, sym_Stat_1))
            {
              x_2 = ATgetArgument(t, 0);
              t = x_2;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = b_3;
            }
          else
            {
              if(match_cons(t, sym_Compound_2))
                {
                  x_2 = ATgetArgument(t, 0);
                  y_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_2;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, y_2, b_3);
              t = conc_0_0(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              a_3 = ATgetArgument(t, 0);
              b_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_3 = ATgetFirst((ATermList) t);
              f_3 = (ATerm) ATgetNext((ATermList) t);
              t = f_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = c_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      d_3 = ATgetArgument(t, 0);
                      e_3 = ATgetArgument(t, 1);
                      {
                        ATerm y_8 = t;
                        int z_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_4 = NULL;
                            t = b_3;
                            t = listbu1_1_0(a_0, t);
                            c_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, a_3, c_4);
                            LocalPopChoice(z_8);
                          }
                        else
                          {
                            t = y_8;
                            {
                              ATerm b_9 = t;
                              int c_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, a_3, d_3);
                                  t = conc_0_0(t);
                                  l_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, l_4, e_3);
                                  LocalPopChoice(c_9);
                                }
                              else
                                {
                                  t = b_9;
                                  {
                                    ATerm u_4 = NULL,v_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, a_3, d_3);
                                    t = conc_0_0(t);
                                    u_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, e_3, f_3);
                                    t = conc_0_0(t);
                                    v_4 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, u_4, v_4);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_4 = NULL;
                      t = b_3;
                      t = listbu1_1_0(m_0, t);
                      y_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, a_3, y_4);
                    }
                }
              else
                {
                  t = c_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      d_3 = ATgetArgument(t, 0);
                      e_3 = ATgetArgument(t, 1);
                      {
                        ATerm k_9 = t;
                        int n_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_5 = NULL;
                            t = b_3;
                            t = listbu1_1_0(o_0, t);
                            d_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, a_3, d_5);
                            LocalPopChoice(n_9);
                          }
                        else
                          {
                            t = k_9;
                            {
                              ATerm n_5 = NULL,q_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, a_3, d_3);
                              t = conc_0_0(t);
                              n_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, e_3, f_3);
                              t = conc_0_0(t);
                              q_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, n_5, q_5);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_5 = NULL;
                      t = b_3;
                      t = listbu1_1_0(r_0, t);
                      t_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, a_3, t_5);
                    }
                }
            }
          else
            {
              ATerm c_6 = NULL;
              t = b_3;
              t = listbu1_1_0(t_0, t);
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, a_3, c_6);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_102(t);
        t = i_6(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = y_102(t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm s_132 (ATerm), ATerm t)
{
  static ATerm i_7 (ATerm t)
  {
    t = s_132(t);
    {
      ATerm l_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,a_1 = NULL;
          d_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_7 = ATgetFirst((ATermList) t);
              g_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_7);
          w_1 = t;
          t = f_7;
          t = i_7(t);
          z_1 = t;
          t = g_7;
          t = i_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          a_1 = t;
          t = SSLsetAnnotations(a_1, w_1);
          LocalPopChoice(n_10);
        }
      else
        {
          t = l_10;
          t = SRTS_all(i_7, t);
        }
    }
    t = s_132(t);
    return(t);
  }
  t = i_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    t = bottomup_1_0(y_103, t);
    return(t);
  }
  t = SRTS_all(u_0, t);
  t = y_103(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_i_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_12, (ATerm) ATinsert(ATempty, term_d_11))))), term_q_11)));
  return(t);
}
static ATerm d_9 (ATerm u_28, ATerm w_28, ATerm v_28, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, w_28)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_28), term_v_11, v_28)));
  return(t);
}
static ATerm q_9 (ATerm m_67, ATerm n_67, ATerm t)
{
  ATerm k_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_67, n_67);
  t = h_10(m_67, n_67, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_7 = ATgetFirst((ATermList) t);
      {
        ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm t_10 = NULL,w_10 = NULL,x_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Op_2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(t_10);
        i_2 = t;
        t = w_10;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = x_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, w_10, x_10);
        g_1 = t;
        t = SSLsetAnnotations(g_1, i_2);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,g_4 = NULL,h_4 = NULL,m_4 = NULL,n_4 = NULL,q_4 = NULL,i_1 = NULL,h_1 = NULL;
              t = SSLgetAnnotations(t_10);
              s_2 = t;
              t = w_10;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = x_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_4 = ATgetFirst((ATermList) t);
                  m_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_10);
              g_4 = t;
              t = m_4;
              t = Cons_2_0(proper_list_0_0, y_0, t);
              n_4 = t;
              t = (ATerm) ATinsert(CheckATermList(n_4), h_4);
              h_1 = t;
              t = SSLsetAnnotations(h_1, g_4);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_10, q_4);
              i_1 = t;
              t = SSLsetAnnotations(i_1, s_2);
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              {
                ATerm z_5 = NULL,d_6 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(t_10);
                z_5 = t;
                t = w_10;
                {
                  ATerm k_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm g_6 = NULL;
                      g_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = g_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = g_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = k_12;
                    }
                }
                d_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, d_6, x_10);
                j_1 = t;
                t = SSLsetAnnotations(j_1, z_5);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_l_12;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_m_12;
  return(t);
}
static ATerm f_9 (ATerm g_28, ATerm j_28, ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,k_13 = NULL,m_13 = NULL;
  t = g_28;
  if(match_cons(t, sym_Op_2))
    {
      m_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
      {
        ATerm o_6 = NULL,r_6 = NULL,t_6 = NULL;
        t = SSLgetAnnotations(g_28);
        o_6 = t;
        t = k_13;
        t = map_1_0(Cache_0_0, t);
        r_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, m_13, r_6);
        t_6 = t;
        t = SSLsetAnnotations(t_6, o_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          m_13 = ATgetArgument(t, 0);
          k_13 = ATgetArgument(t, 1);
          {
            ATerm o_7 = NULL,s_7 = NULL,t_7 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(g_28);
            o_7 = t;
            t = m_13;
            t = Cache_0_0(t);
            s_7 = t;
            t = k_13;
            t = Cache_0_0(t);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, s_7, t_7);
            v_6 = t;
            t = SSLsetAnnotations(v_6, o_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              m_13 = ATgetArgument(t, 0);
              {
                ATerm x_7 = NULL,w_6 = NULL;
                t = SSLgetAnnotations(g_28);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, m_13);
                w_6 = t;
                t = SSLsetAnnotations(w_6, x_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  m_13 = ATgetArgument(t, 0);
                  {
                    ATerm l_8 = NULL,x_6 = NULL;
                    t = SSLgetAnnotations(g_28);
                    l_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, m_13);
                    x_6 = t;
                    t = SSLsetAnnotations(x_6, l_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      m_13 = ATgetArgument(t, 0);
                      {
                        ATerm u_8 = NULL,z_6 = NULL;
                        t = SSLgetAnnotations(g_28);
                        u_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, m_13);
                        z_6 = t;
                        t = SSLsetAnnotations(z_6, u_8);
                      }
                    }
                  else
                    {
                      ATerm a_9 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          m_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_28);
                      a_9 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, m_13);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, a_9);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  r_11 = t;
  t = term_n_12;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, r_11);
  t = g_10(z_11, r_11, t);
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_12, s_11);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, (ATerm) ATmakeAppl(sym_Defined_2, term_o_12, s_11));
  t = u_9(b_1, g_28, y_11, t);
  t = s_11;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,e_9 = NULL,i_9 = NULL;
        t = (ATerm) ATempty;
        e_9 = t;
        t = term_m_12;
        i_9 = t;
        t = term_s_12;
        t = q_9(i_9, e_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_13;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATempty;
      }
  }
  t_11 = t;
  t = (ATerm) ATempty;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_12, (ATerm) ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym__3, r_11, s_11, j_28)));
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_12, (ATerm) ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym__3, r_11, s_11, j_28))));
  t = u_9(e_1, w_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, s_11);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL,f_11 = NULL;
        t = term_l_12;
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, q_14);
        t = q_9(f_11, q_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_12) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, c_11);
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        {
          ATerm j_11 = NULL,m_11 = NULL;
          t = term_l_12;
          m_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_12, q_14);
          t = q_9(m_11, q_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm z_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              j_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm g_15 = NULL,u_11 = NULL;
        g_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm e_13 = t;
                int f_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(f_13);
                  }
                else
                  {
                    t = e_13;
                  }
              }
            }
        }
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_15, u_11);
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm i_13 = ATgetArgument(t, 0);
                  ATerm j_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, g_15, u_11);
              t = f_9(g_15, u_11, t);
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              {
                ATerm p_12 = NULL,u_12 = NULL;
                u_12 = t;
                t = SSL_explode_term(u_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm o_13 = ATgetArgument(t, 1);
                      if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
                        {
                          ATerm p_13 = ATgetFirst((ATermList) o_13);
                          ATerm q_13 = (ATerm) ATgetNext((ATermList) o_13);
                          if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
                            {
                              p_12 = ATgetFirst((ATermList) q_13);
                              {
                                ATerm r_13 = (ATerm) ATgetNext((ATermList) q_13);
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
                t = p_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm p_33, ATerm o_33, ATerm t)
{
  ATerm k_15 = NULL;
  t = new_0_0(t);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_15), term_e_11), (ATerm) ATmakeAppl(sym_AssignInit_1, o_33)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, p_33, (ATerm) ATmakeAppl(sym_Id_1, k_15))));
  return(t);
}
static ATerm h_9 (ATerm v_172, ATerm l_33, ATerm n_33, ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,o_15 = NULL;
  t = SSLgetAnnotations(v_172);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_33);
  o_15 = t;
  t = SSLsetAnnotations(o_15, l_15);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, m_15, n_33);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(b_14, c_14, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, u_17), w_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          w_17 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
          {
            ATerm z_13 = NULL,a_14 = NULL,i_14 = NULL,j_14 = NULL;
            t = u_17;
            t = foldr_3_0(f_1, k_1, l_1, t);
            z_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_17, z_13);
            i_14 = t;
            t = term_x_13;
            j_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, w_17, z_13));
            t = q_9(j_14, i_14, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm y_13 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_13) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                a_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_14, (ATerm) ATinsert(CheckATermList(u_17), (ATerm) ATmakeAppl(sym_Id_1, a_14))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              w_17 = ATgetArgument(t, 0);
              t = w_17;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  w_17 = ATgetArgument(t, 0);
                  {
                    ATerm f_14 = t;
                    int g_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(v_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm h_14 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) h_14) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm k_14 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(k_14) != AT_LIST) || !(ATisEmpty(k_14))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)));
                        LocalPopChoice(g_14);
                      }
                    else
                      {
                        t = f_14;
                        {
                          ATerm n_14 = t;
                          int o_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(v_17);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm p_14 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) p_14) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm r_14 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(r_14) != AT_LIST) || !(ATisEmpty(r_14))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)));
                              LocalPopChoice(o_14);
                            }
                          else
                            {
                              t = n_14;
                              {
                                ATerm s_14 = t;
                                int t_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(v_17);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)));
                                    LocalPopChoice(t_14);
                                  }
                                else
                                  {
                                    t = s_14;
                                    t = SSLgetAnnotations(v_17);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm u_14 = ATgetFirst((ATermList) t);
                                        if((ATgetSymbol((ATermAppl) u_14) != ATmakeSymbol("bound", 0, ATtrue)))
                                          _fail(t);
                                        {
                                          ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
                                          if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Id_1, w_17);
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
                      w_17 = ATgetArgument(t, 0);
                      {
                        ATerm c_18 = NULL,m_17 = NULL,n_17 = NULL,s_17 = NULL,c_17 = NULL;
                        t = SSL_explode_string(w_17);
                        t = escape_chars_0_0(t);
                        c_17 = t;
                        t = SSL_implode_string(c_17);
                        n_17 = t;
                        t = SSL_explode_string(n_17);
                        s_17 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_17), term_w_14), (ATerm) ATinsert(ATempty, term_w_14));
                        t = conc_0_0(t);
                        m_17 = t;
                        t = SSL_implode_string(m_17);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), term_a_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, c_18)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          w_17 = ATgetArgument(t, 0);
                          {
                            ATerm n_18 = NULL;
                            t = SSL_real_to_string(w_17);
                            n_18 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, n_18))));
                          }
                        }
                      else
                        {
                          ATerm t_18 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              w_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(w_17);
                          t_18 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, t_18))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,y_22 = NULL,z_22 = NULL;
  v_22 = t;
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
      ATerm k_23 = NULL;
      t = z_22;
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
          u_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_22;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,k_26 = NULL,l_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                i_24 = ATgetArgument(t, 0);
                p_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_24;
            if(match_cons(t, sym_TypeName_2))
              {
                j_24 = ATgetArgument(t, 0);
                o_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                k_24 = ATgetArgument(t, 0);
                l_24 = ATgetArgument(t, 1);
                n_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_24;
            if(match_cons(t, sym_TypeId_1))
              {
                m_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = n_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = p_24;
            if(match_cons(t, sym_Id_1))
              {
                k_26 = ATgetArgument(t, 0);
                {
                  ATerm a_27 = NULL,r_7 = NULL;
                  t = SSLgetAnnotations(p_24);
                  a_27 = t;
                  t = k_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, k_26);
                  r_7 = t;
                  t = SSLsetAnnotations(r_7, a_27);
                }
              }
            else
              {
                ATerm j_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL,b_8 = NULL,a_8 = NULL,z_7 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    k_26 = ATgetArgument(t, 0);
                    l_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_24);
                j_27 = t;
                t = k_26;
                if(match_cons(t, sym_Id_1))
                  {
                    y_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_26);
                x_27 = t;
                t = y_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, y_27);
                z_7 = t;
                t = SSLsetAnnotations(z_7, x_27);
                a_28 = t;
                t = l_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_27 = ATgetFirst((ATermList) t);
                    u_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_26);
                r_27 = t;
                t = u_27;
                t = Cons_2_0(_id, n_1, t);
                v_27 = t;
                t = (ATerm) ATinsert(CheckATermList(v_27), s_27);
                a_8 = t;
                t = SSLsetAnnotations(a_8, r_27);
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, a_28, w_27);
                b_8 = t;
                t = SSLsetAnnotations(b_8, j_27);
              }
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_15, (ATerm) ATinsert(ATempty, t_22));
          }
      }
      k_23 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_15, (ATerm) ATinsert(ATinsert(ATempty, r_22), k_23)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = z_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_15;
    }
  return(t);
}
static ATerm e_51 (ATerm o_26, ATerm q_26, ATerm r_26, ATerm s_26, ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,i_28 = NULL,l_28 = NULL;
  t = o_26;
  {
    ATerm v_15 = t;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        b_27 = t;
        if(match_string(t, "Nil"))
          {
            t = b_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = b_27;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_15;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, q_26, term_s_13);
  {
    static ATerm q_1 (ATerm t)
    {
      ATerm c_27 = NULL,d_27 = NULL,g_27 = NULL,l_27 = NULL,m_27 = NULL,o_27 = NULL,p_27 = NULL;
      if(match_cons(t, sym__2))
        {
          c_27 = ATgetArgument(t, 0);
          d_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_27);
      m_27 = t;
      t = c_27;
      if(match_cons(t, sym_Var_1))
        {
          p_27 = ATgetArgument(t, 0);
          {
            ATerm w_15 = t;
            int x_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_28 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_27)), r_26));
                c_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_27)), r_26)));
                t = h_9(c_27, p_27, c_28, t);
                LocalPopChoice(x_15);
              }
            else
              {
                t = w_15;
                {
                  ATerm d_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_27)), r_26));
                  d_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_27)), r_26)));
                  t = g_9(c_27, d_28, t);
                }
              }
          }
        }
      else
        {
          ATerm k_28 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_27)), r_26));
          k_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, m_27)), r_26)));
          t = g_9(c_27, k_28, t);
        }
      g_27 = t;
      t = term_t_13;
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, term_t_13);
      t = d_10(d_27, o_27, t);
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_27, l_27);
      return(t);
    }
    t = thread_map_1_0(q_1, t);
  }
  if(match_cons(t, sym__2))
    {
      x_26 = ATgetArgument(t, 0);
      {
        ATerm a_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_26;
  t = foldr_3_0(r_1, s_1, t_1, t);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, y_26);
  i_28 = t;
  t = term_x_13;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, o_26, y_26));
  t = q_9(l_28, i_28, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_26)), r_26)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, x_26), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm f_51 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm c_30 = NULL;
  t = SSL_real_to_string(q_28);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, r_28)), term_j_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_p_16, r_28))), (ATerm) ATmakeAppl(sym_FloatConst_1, c_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm g_51 (ATerm i_30, ATerm o_30, ATerm l_32, ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_int_to_string(i_30);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, o_30)), term_r_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_16, o_30))), (ATerm) ATmakeAppl(sym_IntConst_1, b_36))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm h_51 (ATerm i_36, ATerm p_36, ATerm d_37, ATerm j_37, ATerm t)
{
  t = SSLgetAnnotations(i_36);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_36), term_z_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_36), d_37)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, d_37))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_36), term_v_11, d_37)));
  return(t);
}
static ATerm i_51 (ATerm f_38, ATerm g_38, ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSLgetAnnotations(f_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) a_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_17) != AT_LIST) || !(ATisEmpty(b_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_38), term_z_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_38), i_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, i_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_38), term_v_11, i_38)));
  return(t);
}
static ATerm j_51 (ATerm n_38, ATerm r_38, ATerm s_38, ATerm u_38, ATerm t)
{
  t = SSLgetAnnotations(n_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, r_38), s_38), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, s_38))))));
  return(t);
}
static ATerm k_51 (ATerm f_39, ATerm g_39, ATerm h_39, ATerm i_39, ATerm t)
{
  t = SSLgetAnnotations(f_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) f_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(g_17) != AT_LIST) || !(ATisEmpty(g_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_39), term_v_11, h_39));
  return(t);
}
static ATerm l_51 (ATerm s_39, ATerm a_40, ATerm d_40, ATerm l_40, ATerm m_40, ATerm n_40, ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,o_41 = NULL,p_28 = NULL,t_28 = NULL;
  t = a_40;
  {
    ATerm h_17 = t;
    if((PushChoice() == 0))
      {
        ATerm p_41 = NULL;
        p_41 = t;
        if(match_string(t, "Nil"))
          {
            t = p_41;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = p_41;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, l_40, term_s_13);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,z_41 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm i_17 = ATgetArgument(t, 0);
          if(match_cons(i_17, sym_Var_1))
            {
              q_41 = ATgetArgument(i_17, 0);
            }
          else
            _fail(t);
          r_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(r_41);
      s_41 = t;
      t = term_t_13;
      z_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_41, term_t_13);
      t = d_10(r_41, z_41, t);
      t_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_41), term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_41)), (ATerm) ATmakeAppl(sym_Id_1, s_39))))), t_41);
      return(t);
    }
    t = thread_map_1_0(u_1, t);
  }
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      {
        ATerm j_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_40, d_40);
  p_28 = t;
  t = term_x_13;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, a_40, d_40));
  t = q_9(t_28, p_28, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_41, (ATerm) ATinsert(ATempty, m_40));
  t = conc_0_0(t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_41)), (ATerm) ATmakeAppl(sym_Id_1, s_39))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, l_41), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_39), n_40, w_40))));
  return(t);
}
static ATerm m_51 (ATerm c_42, ATerm d_42, ATerm e_42, ATerm f_42, ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_real_to_string(d_42);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, a_43)), (ATerm) ATmakeAppl(sym_Id_1, c_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, c_42), f_42, j_42))));
  return(t);
}
static ATerm p_51 (ATerm b_43, ATerm c_43, ATerm e_43, ATerm f_43, ATerm i_43, ATerm k_43, ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_int_to_string(c_43);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_43)), (ATerm) ATmakeAppl(sym_Id_1, b_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_43), f_43, i_43))));
  return(t);
}
static ATerm q_51 (ATerm t_43, ATerm u_43, ATerm w_43, ATerm t)
{
  t = u_43;
  {
    ATerm r_17 = t;
    if((PushChoice() == 0))
      {
        ATerm b_44 = NULL,c_44 = NULL,h_44 = NULL,i_8 = NULL;
        h_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            c_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_44);
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, c_44);
        i_8 = t;
        t = SSLsetAnnotations(i_8, b_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_43)));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      m_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(m_28, n_28, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_SVar_1))
        {
          a_46 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      {
        ATerm x_17 = ATgetArgument(t, 1);
        if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
          _fail(t);
      }
      {
        ATerm y_17 = ATgetArgument(t, 2);
        if(((ATgetType(y_17) != AT_LIST) || !(ATisEmpty(y_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, a_46);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = topdown_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(b_2, t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = b_18;
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if(match_cons(g_18, sym_SVar_1))
        {
          m_46 = ATgetArgument(g_18, 0);
        }
      else
        _fail(t);
      {
        ATerm h_18 = ATgetArgument(t, 1);
        if(((ATgetType(h_18) != AT_LIST) || !(ATisEmpty(h_18))))
          _fail(t);
      }
      {
        ATerm i_18 = ATgetArgument(t, 2);
        if(((ATgetType(i_18) != AT_LIST) || !(ATisEmpty(i_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, m_46);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = topdown_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(f_2, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_48), term_e_11), term_q_18);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,o_48 = NULL,p_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym__2))
    {
      o_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_48;
  if(match_cons(t, sym_Var_1))
    {
      k_48 = ATgetArgument(t, 0);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_48;
            t = h_9(o_48, k_48, p_48, t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = l_48;
            t = g_9(o_48, p_48, t);
          }
      }
    }
  else
    {
      t = l_48;
      t = g_9(o_48, p_48, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, m_45, (ATerm) ATinsert(ATempty, j_45));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          m_45 = ATgetArgument(t, 0);
          {
            ATerm s_45 = NULL;
            t = l_45;
            t = new_0_0(t);
            s_45 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_45), term_e_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_Id_1, s_45)))), term_v_18), m_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_45), term_v_11, term_d_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              m_45 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, m_45);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  m_45 = ATgetArgument(t, 0);
                  j_45 = ATgetArgument(t, 1);
                  g_45 = ATgetArgument(t, 2);
                  {
                    ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
                    t = m_45;
                    if(match_cons(t, sym_SVar_1))
                      {
                        k_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = j_45;
                    t = map_1_0(v_1, t);
                    x_45 = t;
                    t = g_45;
                    t = map_1_0(x_1, t);
                    y_45 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_11)), y_45), x_45);
                    t = concat_0_0(t);
                    z_45 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, k_45), z_45)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      m_45 = ATgetArgument(t, 0);
                      j_45 = ATgetArgument(t, 1);
                      g_45 = ATgetArgument(t, 2);
                      {
                        ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
                        t = j_45;
                        t = map_1_0(c_2, t);
                        j_46 = t;
                        t = g_45;
                        t = map_1_0(d_2, t);
                        k_46 = t;
                        t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
                        t = conc_0_0(t);
                        l_46 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, m_45), l_46)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          m_45 = ATgetArgument(t, 0);
                          {
                            ATerm y_46 = NULL;
                            t = l_45;
                            t = new_0_0(t);
                            y_46 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_46), term_e_11), term_w_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_a_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11)))), term_e_19), m_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_Id_1, y_46))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              m_45 = ATgetArgument(t, 0);
                              j_45 = ATgetArgument(t, 1);
                              {
                                ATerm c_47 = NULL;
                                t = l_45;
                                t = new_0_0(t);
                                c_47 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_47), term_e_11), term_w_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_Id_1, c_47))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  m_45 = ATgetArgument(t, 0);
                                  j_45 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, m_45, j_45);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      m_45 = ATgetArgument(t, 0);
                                      j_45 = ATgetArgument(t, 1);
                                      g_45 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_47 = NULL,m_47 = NULL;
                                        t = l_45;
                                        t = new_0_0(t);
                                        k_47 = t;
                                        t = new_0_0(t);
                                        m_47 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_47), term_e_11), term_n_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_47), term_e_11), term_w_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_a_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_47))))), term_v_18), m_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, (ATerm) ATmakeAppl(sym_Id_1, k_47))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          m_45 = ATgetArgument(t, 0);
                                          j_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_45, term_q_19, j_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              m_45 = ATgetArgument(t, 0);
                                              j_45 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_45, j_45);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  m_45 = ATgetArgument(t, 0);
                                                  j_45 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_45), m_45));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      m_45 = ATgetArgument(t, 0);
                                                      j_45 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm c_48 = NULL;
                                                        t = m_45;
                                                        t = map_1_0(g_2, t);
                                                        c_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, c_48)), (ATerm) ATinsert(ATempty, j_45));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  m_45 = ATgetArgument(t, 0);
                                                                  j_45 = ATgetArgument(t, 1);
                                                                  t = m_45;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      k_45 = ATgetArgument(t, 0);
                                                                      o_44 = ATgetArgument(t, 1);
                                                                      t = o_44;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          i_44 = ATgetFirst((ATermList) t);
                                                                          j_44 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = j_44;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              k_44 = ATgetFirst((ATermList) t);
                                                                              l_44 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = l_44;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = k_45;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm s_19 = t;
                                                                                      int t_19 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_44, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, j_45)))))), (ATerm) ATmakeAppl(sym__2, i_44, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, j_45)))));
                                                                                          t = map_1_0(h_2, t);
                                                                                          i_48 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, j_45)), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, j_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, i_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                          LocalPopChoice(t_19);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_19;
                                                                                          t = e_51(k_45, o_44, j_45, l_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_51(k_45, o_44, j_45, l_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = k_45;
                                                                                  t = e_51(k_45, o_44, j_45, l_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_45;
                                                                              t = e_51(k_45, o_44, j_45, l_45, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = k_45;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm g_20 = t;
                                                                                  int h_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, j_45)), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, j_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                      LocalPopChoice(h_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_20;
                                                                                      t = e_51(k_45, o_44, j_45, l_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = e_51(k_45, o_44, j_45, l_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_45;
                                                                              t = e_51(k_45, o_44, j_45, l_45, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          k_45 = ATgetArgument(t, 0);
                                                                          t = f_51(k_45, j_45, l_45, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              k_45 = ATgetArgument(t, 0);
                                                                              t = g_51(k_45, j_45, l_45, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  k_45 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm b_49 = NULL,b_29 = NULL,c_29 = NULL,e_29 = NULL,y_28 = NULL;
                                                                                    t = SSL_explode_string(k_45);
                                                                                    t = escape_chars_0_0(t);
                                                                                    y_28 = t;
                                                                                    t = SSL_implode_string(y_28);
                                                                                    c_29 = t;
                                                                                    t = SSL_explode_string(c_29);
                                                                                    e_29 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_29), term_w_14), (ATerm) ATinsert(ATempty, term_w_14));
                                                                                    t = conc_0_0(t);
                                                                                    b_29 = t;
                                                                                    t = SSL_implode_string(b_29);
                                                                                    b_49 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, j_45))), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), term_a_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, b_49))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      k_45 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm o_20 = t;
                                                                                        int p_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_51(m_45, k_45, j_45, l_45, t);
                                                                                            LocalPopChoice(p_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = o_20;
                                                                                            {
                                                                                              ATerm q_20 = t;
                                                                                              int r_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = i_51(m_45, k_45, j_45, l_45, t);
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
                                                                                                        t = j_51(m_45, k_45, j_45, l_45, t);
                                                                                                        LocalPopChoice(t_20);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = s_20;
                                                                                                        t = k_51(m_45, k_45, j_45, l_45, t);
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
                                                                                          k_45 = ATgetArgument(t, 0);
                                                                                          o_44 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, o_44, j_45)), (ATerm) ATmakeAppl(sym_Match_2, k_45, j_45)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm u_20 = t;
                                                                                          int v_20 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm w_20 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(v_20);
                                                                                              t = term_r_19;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = u_20;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_r_19;
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
                                                                      m_45 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, m_45, term_d_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          m_45 = ATgetArgument(t, 0);
                                                                          j_45 = ATgetArgument(t, 1);
                                                                          g_45 = ATgetArgument(t, 2);
                                                                          t = m_45;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              k_45 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = j_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_45 = ATgetFirst((ATermList) t);
                                                                              f_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = i_45;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  y_44 = ATgetArgument(t, 0);
                                                                                  c_45 = ATgetArgument(t, 1);
                                                                                  d_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = y_44;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  b_45 = ATgetArgument(t, 0);
                                                                                  x_44 = ATgetArgument(t, 1);
                                                                                  t = c_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      p_44 = ATgetFirst((ATermList) t);
                                                                                      r_44 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = r_44;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          s_44 = ATgetFirst((ATermList) t);
                                                                                          w_44 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = w_44;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = s_44;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  t_44 = ATgetArgument(t, 0);
                                                                                                  t = p_44;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      q_44 = ATgetArgument(t, 0);
                                                                                                      t = x_44;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = b_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm x_20 = t;
                                                                                                              int y_20 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_45))), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_44), term_v_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, (ATerm) ATmakeAppl(sym_Id_1, k_45)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_44), term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, (ATerm) ATmakeAppl(sym_Id_1, k_45)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, k_45), f_45, g_45))));
                                                                                                                  LocalPopChoice(y_20);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_20;
                                                                                                                  t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = b_45;
                                                                                                          t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_45;
                                                                                                      t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_45;
                                                                                                  t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_45;
                                                                                              t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_45;
                                                                                          t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = x_44;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = b_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm z_20 = t;
                                                                                                  int a_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_45))), term_d_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, d_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, k_45), f_45, g_45))));
                                                                                                      LocalPopChoice(a_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_20;
                                                                                                      t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_45;
                                                                                              t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_45;
                                                                                          t = l_51(k_45, b_45, x_44, c_45, d_45, f_45, g_45, l_45, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      b_45 = ATgetArgument(t, 0);
                                                                                      t = m_51(k_45, b_45, d_45, f_45, g_45, l_45, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          b_45 = ATgetArgument(t, 0);
                                                                                          t = p_51(k_45, b_45, d_45, f_45, g_45, l_45, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm o_50 = NULL,i_29 = NULL,j_29 = NULL,l_29 = NULL,f_29 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              b_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(b_45);
                                                                                          t = escape_chars_0_0(t);
                                                                                          f_29 = t;
                                                                                          t = SSL_implode_string(f_29);
                                                                                          j_29 = t;
                                                                                          t = SSL_explode_string(j_29);
                                                                                          l_29 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_29), term_w_14), (ATerm) ATinsert(ATempty, term_w_14));
                                                                                          t = conc_0_0(t);
                                                                                          i_29 = t;
                                                                                          t = SSL_implode_string(i_29);
                                                                                          o_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, o_50))), (ATerm) ATmakeAppl(sym_Id_1, k_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, k_45), f_45, g_45))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = g_45;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              m_45 = ATgetArgument(t, 0);
                                                                              j_45 = ATgetArgument(t, 1);
                                                                              g_45 = ATgetArgument(t, 2);
                                                                              h_45 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, m_45), (ATerm) ATmakeAppl(sym_Case_3, j_45, g_45, h_45));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  m_45 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, m_45));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      m_45 = ATgetArgument(t, 0);
                                                                                      j_45 = ATgetArgument(t, 1);
                                                                                      t = m_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          k_45 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = j_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          i_45 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm d_21 = t;
                                                                                            int e_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_45), term_z_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_45), (ATerm) ATmakeAppl(sym_Id_1, i_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_45), term_v_11, (ATerm) ATmakeAppl(sym_Id_1, i_45))));
                                                                                                LocalPopChoice(e_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_21;
                                                                                                t = q_51(k_45, j_45, l_45, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_51(k_45, j_45, l_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          m_45 = ATgetArgument(t, 0);
                                                                                          t = m_45;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              k_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_45), term_v_11, term_d_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm d_51 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              m_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_45;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          d_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_v_11, d_51));
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
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,k_8 = NULL;
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_52 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(j_21) != AT_INT) || (ATgetInt((ATermInt) j_21) != 34)))
                _fail(t);
              d_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(d_52), term_w_14), term_k_21);
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
          {
            ATerm f_52 = NULL,g_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_52 = ATgetFirst((ATermList) t);
                g_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_52;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(g_52), term_k_21), term_k_21);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(g_52), term_l_21), term_k_21);
              }
          }
        }
      c_52 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_51 = ATgetFirst((ATermList) t);
          a_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_52);
      y_51 = t;
      t = a_52;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      b_52 = t;
      t = (ATerm) ATinsert(CheckATermList(b_52), z_51);
      k_8 = t;
      t = SSLsetAnnotations(k_8, y_51);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
        x_52 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_52 = ATgetFirst((ATermList) t);
            w_52 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm q_29 = NULL,t_29 = NULL,m_8 = NULL;
              t = SSLgetAnnotations(x_52);
              q_29 = t;
              t = w_52;
              t = escape_chars_0_0(t);
              t_29 = t;
              t = (ATerm) ATinsert(CheckATermList(t_29), v_52);
              m_8 = t;
              t = SSLsetAnnotations(m_8, q_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_52;
          }
      }
    }
  return(t);
}
static ATerm m_9 (ATerm x_0 (ATerm), ATerm c_1 (ATerm), ATerm z_0, ATerm d_1, ATerm v_0, ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_0, v_0);
  t = x_0(t);
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      a_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, a_53);
  t = c_1(t);
  if(match_cons(t, sym__2))
    {
      d_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_53), c_53), b_53);
  return(t);
}
ATerm thread_map_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  static ATerm r_53 (ATerm t)
  {
    ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
    k_53 = t;
    if(match_cons(t, sym__2))
      {
        l_53 = ATgetArgument(t, 0);
        m_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = l_53;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_53 = ATgetFirst((ATermList) t);
        j_53 = (ATerm) ATgetNext((ATermList) t);
        t = k_53;
        t = m_9(d_117, r_53, i_53, j_53, m_53, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_53);
      }
    return(t);
  }
  t = r_53(t);
  return(t);
}
static ATerm k_57 (ATerm w_54, ATerm x_54, ATerm y_54, ATerm z_54, ATerm a_55, ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,y_29 = NULL,z_29 = NULL;
  t = w_54;
  {
    ATerm m_21 = t;
    if((PushChoice() == 0))
      {
        ATerm j_55 = NULL;
        j_55 = t;
        if(match_string(t, "Nil"))
          {
            t = j_55;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = j_55;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_21;
      }
  }
  t = x_54;
  t = map_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym__2, x_54, term_s_13);
  t = thread_map_1_0(k_2, t);
  if(match_cons(t, sym__2))
    {
      f_55 = ATgetArgument(t, 0);
      {
        ATerm n_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_54;
  t = foldr_3_0(l_2, m_2, n_2, t);
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_54, h_55);
  y_29 = t;
  t = term_x_13;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, w_54, h_55));
  t = q_9(z_29, y_29, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_21) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      i_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_55, (ATerm) ATinsert(ATempty, y_54));
  t = conc_0_0(t);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_55)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, g_55), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_54)));
  return(t);
}
static ATerm l_57 (ATerm u_55, ATerm v_55, ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_real_to_string(u_55);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, b_56)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_55)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_55)));
  return(t);
}
static ATerm m_57 (ATerm c_56, ATerm d_56, ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm j_56 = NULL;
  t = SSL_int_to_string(c_56);
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, j_56)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_56)));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,r_8 = NULL;
  m_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_55);
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_55);
  r_8 = t;
  t = SSLsetAnnotations(r_8, k_55);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if(match_cons(p_21, sym_Var_1))
        {
          n_55 = ATgetArgument(p_21, 0);
        }
      else
        _fail(t);
      o_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(o_55);
  p_55 = t;
  t = term_t_13;
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_55, term_t_13);
  t = d_10(o_55, r_55, t);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_55), term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, p_55)), term_d_11)))), q_55);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  if(match_cons(t, sym__2))
    {
      s_55 = ATgetArgument(t, 0);
      t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(s_55, t_55, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      s_56 = ATgetArgument(t, 0);
      v_56 = ATgetArgument(t, 1);
      w_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_56;
  if(match_cons(t, sym_Match_1))
    {
      t_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_56;
  if(match_cons(t, sym_Op_2))
    {
      u_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
      t = q_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_56 = ATgetFirst((ATermList) t);
          m_56 = (ATerm) ATgetNext((ATermList) t);
          t = m_56;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_56 = ATgetFirst((ATermList) t);
              p_56 = (ATerm) ATgetNext((ATermList) t);
              t = p_56;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = n_56;
                  if(match_cons(t, sym_Var_1))
                    {
                      o_56 = ATgetArgument(t, 0);
                      t = k_56;
                      if(match_cons(t, sym_Var_1))
                        {
                          l_56 = ATgetArgument(t, 0);
                          t = u_56;
                          if(match_string(t, "Cons"))
                            {
                              ATerm q_21 = t;
                              int r_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_d_11)), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, term_d_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_56), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_56), term_v_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, term_s_21)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_56), term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, term_s_21)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_56)));
                                  LocalPopChoice(r_21);
                                }
                              else
                                {
                                  t = q_21;
                                  t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                                }
                            }
                          else
                            {
                              t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                            }
                        }
                      else
                        {
                          t = u_56;
                          t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                        }
                    }
                  else
                    {
                      t = u_56;
                      t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                    }
                }
              else
                {
                  t = u_56;
                  t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                }
            }
          else
            {
              t = u_56;
              t = k_57(u_56, q_56, v_56, w_56, r_56, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = u_56;
              if(match_string(t, "Nil"))
                {
                  ATerm t_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_d_11)), term_d_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, term_d_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_56)));
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = t_21;
                      t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                    }
                }
              else
                {
                  t = k_57(u_56, q_56, v_56, w_56, r_56, t);
                }
            }
          else
            {
              t = u_56;
              t = k_57(u_56, q_56, v_56, w_56, r_56, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          u_56 = ATgetArgument(t, 0);
          t = l_57(u_56, v_56, w_56, r_56, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_56 = ATgetArgument(t, 0);
              t = m_57(u_56, v_56, w_56, r_56, t);
            }
          else
            {
              ATerm i_57 = NULL,g_30 = NULL,h_30 = NULL,k_30 = NULL,d_30 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  u_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(u_56);
              t = escape_chars_0_0(t);
              d_30 = t;
              t = SSL_implode_string(d_30);
              h_30 = t;
              t = SSL_explode_string(h_30);
              k_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_30), term_w_14), (ATerm) ATinsert(ATempty, term_w_14));
              t = conc_0_0(t);
              g_30 = t;
              t = SSL_implode_string(g_30);
              i_57 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, i_57))), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_56)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    t = topdown_1_0(x_103, t);
    return(t);
  }
  t = x_103(t);
  t = SRTS_all(o_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = repeat_2_0(q_2, _id, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = repeat_2_0(z_2, _id, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
      i_58 = ATgetArgument(t, 2);
      j_58 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL;
        t = g_58;
        t = is_local_function_0_0(t);
        t = h_58;
        t = map_1_0(TranslateVarDec_0_0, t);
        p_58 = t;
        t = i_58;
        t = map_1_0(TranslateVarDec_0_0, t);
        q_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
        t = conc_0_0(t);
        r_58 = t;
        t = j_58;
        t = topdown_1_0(p_2, t);
        s_58 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_g_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_58), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, r_58, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), term_v_18), s_58)));
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
          t = g_58;
          {
            ATerm h_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_22;
              }
          }
          t = h_58;
          t = map_1_0(TranslateVarDec_0_0, t);
          v_30 = t;
          t = i_58;
          t = map_1_0(TranslateVarDec_0_0, t);
          w_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_30, w_30);
          t = conc_0_0(t);
          x_30 = t;
          t = j_58;
          t = topdown_1_0(r_2, t);
          y_30 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_u_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_58), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, x_30, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), term_v_18), y_30)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
  g_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_59;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_59 = ATgetFirst((ATermList) t);
          i_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_31 = NULL,l_31 = NULL,m_31 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(g_59);
            i_31 = t;
            t = h_59;
            t = q_117(t);
            l_31 = t;
            t = i_59;
            t = filter_1_0(q_117, t);
            m_31 = t;
            t = (ATerm) ATinsert(CheckATermList(m_31), l_31);
            w_8 = t;
            t = SSLsetAnnotations(w_8, i_31);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = i_59;
            t = filter_1_0(q_117, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm o_59 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          o_59 = ATgetArgument(t, 0);
          {
            ATerm m_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_22);
      {
        ATerm q_59 = NULL;
        t = o_59;
        t = map_1_0(TranslateType_0_0, t);
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_10, (ATerm) ATmakeAppl(sym_ParamList_1, q_59));
      }
    }
  else
    {
      t = k_22;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm n_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_u_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_59;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            x_59 = ATgetArgument(t, 0);
            {
              ATerm q_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_22);
        {
          ATerm a_60 = NULL;
          t = x_59;
          t = map_1_0(TranslateType_0_0, t);
          a_60 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_59), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, a_60)))));
        }
      }
    else
      {
        t = o_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm w_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_u_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_59), term_e_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm x_22 = t;
  if((PushChoice() == 0))
    {
      ATerm c_60 = NULL,d_60 = NULL;
      if(match_cons(t, sym__2))
        {
          c_60 = ATgetArgument(t, 0);
          d_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_60, d_60);
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = SSL_gtr(c_60, d_60);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_22;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = map_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm k_60 = NULL;
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_23, k_60);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, k_60, term_d_23);
  t = leq_0_0(t);
  t = k_60;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,j_9 = NULL;
  e_60 = t;
  t = SSL_explode_string(e_60);
  j_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_60 = ATgetFirst((ATermList) t);
      h_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_60);
  f_60 = t;
  t = g_60;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_23, g_60);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, g_60, term_h_23);
        t = leq_0_0(t);
        t = g_60;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATmakeAppl(sym__2, term_i_23, g_60);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, g_60, term_j_23);
        t = leq_0_0(t);
        t = g_60;
      }
  }
  t = h_60;
  t = Cons_2_0(g_3, h_3, t);
  i_60 = t;
  t = (ATerm) ATinsert(CheckATermList(i_60), g_60);
  j_9 = t;
  t = SSLsetAnnotations(j_9, f_60);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  x_60 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      y_60 = ATgetArgument(t, 0);
      z_60 = ATgetArgument(t, 1);
      a_61 = ATgetArgument(t, 2);
      {
        ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
        t = z_60;
        t = map_1_0(TranslateVarDec_0_0, t);
        f_61 = t;
        t = a_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        g_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
        t = conc_0_0(t);
        h_61 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, h_61, (ATerm) ATinsert(ATempty, term_i_11)))))));
      }
    }
  else
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              y_60 = ATgetArgument(t, 0);
              z_60 = ATgetArgument(t, 1);
              a_61 = ATgetArgument(t, 2);
              {
                ATerm n_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(m_23);
          {
            ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
            t = z_60;
            t = map_1_0(TranslateVarDec_0_0, t);
            l_61 = t;
            t = a_61;
            t = map_1_0(TranslateVarDec_0_0, t);
            m_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_61, m_61);
            t = conc_0_0(t);
            n_61 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, n_61, (ATerm) ATinsert(ATempty, term_i_11)))))));
          }
        }
      else
        {
          t = l_23;
          if(match_cons(t, sym_SDefT_4))
            {
              y_60 = ATgetArgument(t, 0);
              z_60 = ATgetArgument(t, 1);
              a_61 = ATgetArgument(t, 2);
              {
                ATerm o_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm p_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
                t = y_60;
                t = is_local_function_0_0(t);
                t = z_60;
                t = map_1_0(TranslateVarDec_0_0, t);
                r_61 = t;
                t = a_61;
                t = map_1_0(TranslateVarDec_0_0, t);
                s_61 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_61, s_61);
                t = conc_0_0(t);
                t_61 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, t_61, (ATerm) ATinsert(ATempty, term_i_11)))))));
                LocalPopChoice(q_23);
              }
            else
              {
                t = p_23;
                {
                  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
                  t = y_60;
                  {
                    ATerm r_23 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = r_23;
                      }
                  }
                  t = z_60;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  y_31 = t;
                  t = a_61;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  z_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
                  t = conc_0_0(t);
                  a_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, a_32, (ATerm) ATinsert(ATempty, term_i_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  if(match_cons(t, sym__2))
    {
      h_62 = ATgetArgument(t, 0);
      i_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(h_62, i_62, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm r_9 (ATerm t_37, ATerm r_37, ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,f_32 = NULL,g_32 = NULL,f_62 = NULL;
  t = r_37;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            f_62 = ATgetArgument(t, 0);
            {
              ATerm u_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_23);
        t = f_62;
        t = foldr_3_0(j_3, k_3, l_3, t);
      }
    else
      {
        t = s_23;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm v_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_s_13;
      }
  }
  x_61 = t;
  t = SSL_int_to_string(x_61);
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_37, x_61);
  f_32 = t;
  t = term_x_13;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, t_37, x_61));
  t = q_9(g_32, f_32, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_23) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      c_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(t_37);
  a_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_62), term_w_14), (ATerm) ATinsert(ATempty, term_w_14));
  t = conc_0_0(t);
  b_62 = t;
  t = SSL_implode_string(b_62);
  y_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_62))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_62), term_v_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), (ATerm) ATmakeAppl(sym_IntConst_1, w_61)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, y_61)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_62 = ATgetFirst((ATermList) t);
      n_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_62;
  if(match_int(t, 95))
    {
      ATerm p_62 = NULL;
      t = n_62;
      t = p_0(t);
      p_62 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(p_62), term_b_24), term_b_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm r_62 = NULL;
          t = n_62;
          t = p_0(t);
          r_62 = t;
          t = (ATerm) ATinsert(CheckATermList(r_62), term_b_24);
        }
      else
        {
          ATerm t_62 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = n_62;
          t = p_0(t);
          t_62 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_62), term_b_24), term_c_24), term_b_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm x_119 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL;
  x_62 = t;
  t = SSL_explode_string(x_62);
  {
    static ATerm j_63 (ATerm t)
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_119(j_63, t);
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          {
            ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL;
            i_63 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_63 = ATgetFirst((ATermList) t);
                h_63 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm o_32 = NULL,r_32 = NULL,l_9 = NULL;
                  t = SSLgetAnnotations(i_63);
                  o_32 = t;
                  t = h_63;
                  t = j_63(t);
                  r_32 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_32), g_63);
                  l_9 = t;
                  t = SSLsetAnnotations(l_9, o_32);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_63;
              }
          }
        }
      return(t);
    }
    t = j_63(t);
  }
  w_62 = t;
  t = SSL_implode_string(w_62);
  return(t);
}
ATerm foldr_3_0 (ATerm o_116 (ATerm), ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_63;
      t = o_116(t);
    }
  else
    {
      ATerm r_63 = NULL,s_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_63 = ATgetFirst((ATermList) t);
          o_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_63;
      t = q_116(t);
      r_63 = t;
      t = o_63;
      t = foldr_3_0(o_116, p_116, q_116, t);
      s_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_63, s_63);
      t = p_116(t);
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL;
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(f_64, g_64, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm s_9 (ATerm g_37, ATerm f_37, ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,d_64 = NULL;
  t = f_37;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            d_64 = ATgetArgument(t, 0);
            {
              ATerm h_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_24);
        t = d_64;
        t = foldr_3_0(m_3, n_3, o_3, t);
      }
    else
      {
        t = f_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm q_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_s_13;
      }
  }
  u_63 = t;
  t = g_37;
  t = escape_1_0(Cify_1_0, t);
  w_63 = t;
  t = SSL_int_to_string(u_63);
  x_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_63), term_s_24), w_63), term_r_24);
  a_64 = t;
  t = SSL_concat_strings(a_64);
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, u_63);
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_24, v_63);
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_37, u_63), (ATerm) ATmakeAppl(sym_Defined_2, term_t_24, v_63));
  t = u_9(p_3, y_63, z_63, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_63), term_e_11)));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
  i_64 = t;
  t = term_x_24;
  j_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, i_64);
  t = g_10(j_64, i_64, t);
  h_64 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, h_64);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_y_24;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        t = map_1_0(q_3, t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_64 = ATgetArgument(t, 0);
      a_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(z_64, a_65, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      b_65 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(b_65, c_65, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      ATerm c_25 = ATgetArgument(t, 1);
      ATerm d_25 = ATgetArgument(t, 2);
      ATerm e_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm f_65 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
      {
        ATerm g_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_65), term_e_11)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  if(match_cons(t, sym__3))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      j_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_9(h_65, i_65, j_65, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  o_65 = t;
  if(match_cons(t, sym_Conc_2))
    {
      m_65 = ATgetArgument(t, 0);
      n_65 = ATgetArgument(t, 1);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, m_65, n_65);
            t = conc_0_0(t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = o_65;
          }
      }
    }
  else
    {
      t = o_65;
    }
  return(t);
}
static ATerm t_9 (ATerm a_38, ATerm d_38, ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  v_64 = t;
  t = GenerateIncludes_0_0(t);
  n_64 = t;
  t = a_38;
  t = map_1_0(r_3, t);
  o_64 = t;
  t = a_38;
  t = map_1_0(s_3, t);
  t = concat_0_0(t);
  p_64 = t;
  t = d_38;
  t = map_1_0(SDefToDeclaration_0_0, t);
  q_64 = t;
  t = d_38;
  t = filter_1_0(t_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  r_64 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_65 = NULL,w_32 = NULL,x_32 = NULL;
        t = (ATerm) ATempty;
        w_32 = t;
        t = term_m_12;
        x_32 = t;
        t = term_s_12;
        t = q_9(x_32, w_32, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            d_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_65;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
  }
  y_64 = t;
  t = map_1_0(u_3, t);
  w_64 = t;
  t = y_64;
  t = map_1_0(v_3, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, w_3, t);
  x_64 = t;
  t = v_64;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_25;
        t = get_config_0_0(t);
        t = v_64;
        LocalPopChoice(n_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = m_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_25, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_t_25)))), term_r_19));
      }
  }
  s_64 = t;
  t = v_64;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_25;
        t = get_config_0_0(t);
        t = v_64;
        LocalPopChoice(v_25);
        t = (ATerm) ATinsert(ATempty, term_x_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATinsert(ATempty, term_z_25);
      }
  }
  t_64 = t;
  t = v_64;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_25;
        t = get_config_0_0(t);
        t = v_64;
        LocalPopChoice(b_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = a_26;
        {
          ATerm l_65 = NULL;
          t = MainDef_0_0(t);
          l_65 = t;
          t = (ATerm) ATinsert(ATempty, l_65);
        }
      }
  }
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, n_64, s_64), o_64), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_c_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_t_25)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_64)))), w_64), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_c_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_g_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_t_25)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, x_64)))), t_64), q_64), u_64), r_64));
  t = bottomup_1_0(x_3, t);
  return(t);
}
static ATerm u_9 (ATerm c_133 (ATerm), ATerm e_73, ATerm c_73, ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  w_65 = t;
  t = c_133(t);
  t_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_65, e_73, c_73);
  t = i_10(t_65, e_73, c_73, t);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_65 = NULL;
        t = term_j_26;
        z_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_65, term_j_26);
        t = h_10(t_65, z_65, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_65 = ATgetFirst((ATermList) t);
      v_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_26;
  x_65 = t;
  t = (ATerm) ATinsert(CheckATermList(v_65), (ATerm) ATinsert(CheckATermList(u_65), e_73));
  y_65 = t;
  t = SSL_table_put(t_65, x_65, y_65);
  t = w_65;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  t = term_n_26;
  b_66 = t;
  t = term_t_26;
  c_66 = t;
  t = term_u_26;
  t = u_9(y_3, b_66, c_66, t);
  t = a_66;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
        {
          ATerm w_26 = ATgetFirst((ATermList) v_26);
          if(match_cons(w_26, sym_Signature_1))
            {
              ATerm f_27 = ATgetArgument(w_26, 0);
              if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
                {
                  ATerm h_27 = ATgetFirst((ATermList) f_27);
                  if(match_cons(h_27, sym_Constructors_1))
                    {
                      e_66 = ATgetArgument(h_27, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_27 = (ATerm) ATgetNext((ATermList) f_27);
                    if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm e_27 = (ATerm) ATgetNext((ATermList) v_26);
            if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
              {
                ATerm k_27 = ATgetFirst((ATermList) e_27);
                if(match_cons(k_27, sym_Strategies_1))
                  {
                    f_66 = ATgetArgument(k_27, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm n_27 = (ATerm) ATgetNext((ATermList) e_27);
                  if(((ATgetType(n_27) != AT_LIST) || !(ATisEmpty(n_27))))
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
  t = t_9(e_66, f_66, t);
  t = listbottomup_1_0(z_3, t);
  return(t);
}
static ATerm w_9 (ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm h_66 = NULL;
  t = SSL_fputc(l_54, m_54);
  h_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_66);
  return(t);
}
static ATerm x_9 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm i_66 = NULL;
  t = SSL_write_term_to_stream_text(u_39, v_39);
  i_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_66);
  return(t);
}
static ATerm z_9 (ATerm a_110 (ATerm), ATerm p_247, ATerm y_39, ATerm t)
{
  ATerm o_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_247, term_q_27);
  t = c_10(t);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_66, y_39);
  t = a_110(t);
  t = fclose_0_0(t);
  t = y_39;
  return(t);
}
static ATerm y_9 (ATerm q_39, ATerm r_39, ATerm t)
{
  ATerm p_66 = NULL;
  t = SSL_write_term_to_stream_baf(q_39, r_39);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_66);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(match_cons(t_27, sym_Stream_1))
        {
          s_66 = ATgetArgument(t_27, 0);
        }
      else
        _fail(t);
      t_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(s_66, t_66, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,z_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      if(match_cons(z_27, sym_Stream_1))
        {
          x_66 = ATgetArgument(z_27, 0);
        }
      else
        _fail(t);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(x_66, z_66, t);
  u_66 = t;
  t = term_b_28;
  v_66 = t;
  t = u_66;
  if(match_cons(t, sym_Stream_1))
    {
      w_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_28, u_66);
  t = w_9(v_66, w_66, t);
  return(t);
}
ATerm output_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL;
  t = m_126(t);
  r_66 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_28;
        t = get_config_0_0(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = term_o_28;
      }
  }
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_66, r_66);
  {
    ATerm x_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_29;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, q_66, r_66);
        LocalPopChoice(z_28);
        if(match_cons(t, sym__2))
          {
            ATerm d_29 = ATgetArgument(t, 0);
            ATerm g_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_9(a_4, q_66, r_66, t);
      }
    else
      {
        t = x_28;
        if(match_cons(t, sym__2))
          {
            ATerm h_29 = ATgetArgument(t, 0);
            ATerm k_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_9(b_4, q_66, r_66, t);
      }
  }
  return(t);
}
static ATerm s_67 (ATerm k_67, ATerm t)
{
  t = SSL_fclose(k_67);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  q_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_67 = ATgetArgument(t, 0);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_67);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = s_67(q_67, t);
          }
      }
    }
  else
    {
      t = s_67(q_67, t);
    }
  return(t);
}
static ATerm a_10 (ATerm w_39, ATerm t)
{
  t = SSL_read_term_from_stream(w_39);
  return(t);
}
static ATerm b_10 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm t_67 = NULL;
  t = SSL_fopen(n_54, o_54);
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_67);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_67 = NULL;
  t = SSL_stdin_stream();
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_67);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_67 = NULL;
  t = SSL_stdout_stream();
  v_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_67);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_67 = NULL;
  t = SSL_stderr_stream();
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_67);
  return(t);
}
static ATerm f_69 (ATerm c_68, ATerm t)
{
  ATerm d_68 = NULL;
  t = SSL_explode_term(c_68);
  if(match_cons(t, sym__2))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_29 = ATgetArgument(t, 1);
        if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
          {
            d_68 = ATgetFirst((ATermList) p_29);
            {
              ATerm r_29 = (ATerm) ATgetNext((ATermList) p_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_68;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_68;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_68;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_68;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_69 (ATerm g_68, ATerm h_68, ATerm i_68, ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,o_68 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(i_68);
  l_68 = t;
  t = g_68;
  if(match_cons(t, sym_Path_1))
    {
      o_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_68, h_68);
  o_9 = t;
  t = SSLsetAnnotations(o_9, l_68);
  if(match_cons(t, sym__2))
    {
      j_68 = ATgetArgument(t, 0);
      k_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(j_68, k_68, t);
  return(t);
}
static ATerm h_69 (ATerm q_68, ATerm r_68, ATerm u_68, ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL,a_69 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(u_68);
  x_68 = t;
  t = SSL_is_string(q_68);
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_69, r_68);
  p_9 = t;
  t = SSLsetAnnotations(p_9, x_68);
  if(match_cons(t, sym__2))
    {
      v_68 = ATgetArgument(t, 0);
      w_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(v_68, w_68, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
  c_69 = t;
  if(match_cons(t, sym__2))
    {
      d_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
      {
        ATerm s_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_69(c_69, t);
            LocalPopChoice(u_29);
          }
        else
          {
            t = s_29;
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_69(d_69, e_69, c_69, t);
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  t = h_69(d_69, e_69, c_69, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_69(c_69, t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_69 = NULL;
      l_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_69, term_e_30);
      t = c_10(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      t = debug_1_0(f_4, t);
      _fail(t);
    }
  j_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(k_69, t);
  i_69 = t;
  t = j_69;
  t = fclose_0_0(t);
  t = i_69;
  return(t);
}
ATerm input_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_30;
      t = get_config_0_0(t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = f_30;
      t = term_m_30;
    }
  t = ReadFromFile_0_0(t);
  t = n_126(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
  n_69 = t;
  t = term_n_30;
  t = whoami_0_0(t);
  o_69 = t;
  t = term_p_30;
  q_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), o_69), term_q_30);
  r_69 = t;
  t = SSL_printnl(q_69, r_69);
  t = term_t_13;
  p_69 = t;
  t = SSL_exit(p_69);
  t = n_69;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm t_69 = NULL;
  t_69 = t;
  if(match_string(t, "-k"))
    {
      t = t_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_69;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t = SSL_string_to_int(u_69);
  v_69 = t;
  t = term_s_30;
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_30, v_69);
  t = k_10(w_69, v_69, t);
  t = u_69;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, k_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_69 = NULL;
  y_69 = t;
  if(match_string(t, "-S"))
    {
      t = y_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_69;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  t = term_u_30;
  z_69 = t;
  t = term_s_13;
  a_70 = t;
  t = term_z_30;
  t = k_10(z_69, a_70, t);
  t = term_a_31;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_b_31;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
  b_70 = t;
  t = SSL_string_to_int(b_70);
  c_70 = t;
  t = term_u_30;
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, c_70);
  t = k_10(d_70, c_70, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_70);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_c_31;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL;
  t = term_d_31;
  e_70 = t;
  t = term_n_30;
  f_70 = t;
  t = term_e_31;
  t = k_10(e_70, f_70, t);
  t = term_f_31;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, r_4, t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = h_31;
      {
        ATerm k_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, w_4, t);
            LocalPopChoice(n_31);
          }
        else
          {
            t = k_31;
            t = Option_3_0(x_4, b_5, c_5, t);
          }
      }
    }
  return(t);
}
static ATerm k_10 (ATerm n_73, ATerm o_73, ATerm t)
{
  ATerm g_70 = NULL;
  t = term_o_31;
  g_70 = t;
  t = SSL_table_put(g_70, n_73, o_73);
  t = (ATerm) ATmakeAppl(sym__3, term_o_31, n_73, o_73);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
      t = term_n_30;
      t = e_0(t);
      l_70 = t;
      t = term_p_31;
      m_70 = t;
      t = term_q_31;
      n_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_31, term_q_31, l_70);
      t = i_10(m_70, n_70, l_70, t);
      _fail(t);
    }
  else
    {
      ATerm q_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_70 = ATgetFirst((ATermList) t);
          k_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_70;
      t = c_0(t);
      t = term_n_30;
      t = d_0(t);
      q_70 = t;
      t = (ATerm) ATinsert(CheckATermList(k_70), q_70);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm s_70 = NULL;
  s_70 = t;
  if(match_string(t, "-o"))
    {
      t = s_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_70;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL;
  t_70 = t;
  t = term_h_28;
  u_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, t_70);
  t = k_10(u_70, t_70, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_70);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, i_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm w_70 = NULL;
  w_70 = t;
  if(match_string(t, "-i"))
    {
      t = w_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_70;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  t = term_l_30;
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_30, x_70);
  t = k_10(y_70, x_70, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_70);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  static ATerm t_71 (ATerm t)
  {
    ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL;
    s_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_71 = ATgetFirst((ATermList) t);
        r_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_33 = NULL,m_33 = NULL,j_10 = NULL;
          t = SSLgetAnnotations(s_71);
          i_33 = t;
          t = r_71;
          t = t_71(t);
          m_33 = t;
          t = (ATerm) ATinsert(CheckATermList(m_33), q_71);
          j_10 = t;
          t = SSLsetAnnotations(j_10, i_33);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_71;
        t = z_110(t);
      }
    return(t);
  }
  t = t_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  a_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_71;
    }
  else
    {
      static ATerm m_5 (ATerm t)
      {
        t = not_null(c_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_71 = ATgetFirst((ATermList) t);
          if(((c_71 != NULL) && (c_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_71;
      t = at_end_1_0(m_5, t);
    }
  return(t);
}
static ATerm w_72 (ATerm h_72, ATerm t)
{
  ATerm p_72 = NULL;
  t = SSL_explode_term(h_72);
  if(match_cons(t, sym__2))
    {
      ATerm t_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t_72 = t;
  if(match_cons(t, sym__2))
    {
      r_72 = ATgetArgument(t, 0);
      s_72 = ATgetArgument(t, 1);
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_5 (ATerm t)
            {
              t = s_72;
              return(t);
            }
            t = r_72;
            t = at_end_1_0(o_5, t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            t = w_72(t_72, t);
          }
      }
    }
  else
    {
      t = w_72(t_72, t);
    }
  return(t);
}
static ATerm v_9 (ATerm u_73, ATerm v_73, ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL;
  t = u_73;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATempty;
      }
  }
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_72, v_73);
  t = conc_0_0(t);
  x_72 = t;
  t = term_o_31;
  z_72 = t;
  t = SSL_table_put(z_72, u_73, x_72);
  t = (ATerm) ATmakeAppl(sym__3, term_o_31, u_73, x_72);
  return(t);
}
static ATerm i_10 (ATerm b_67, ATerm c_67, ATerm a_67, ATerm t)
{
  ATerm b_73 = NULL,h_73 = NULL,i_73 = NULL;
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_32 = ATgetArgument(t, 0);
            ATerm e_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
        t = h_10(b_67, c_67, t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = (ATerm) ATempty;
      }
  }
  h_73 = t;
  t = (ATerm) ATinsert(CheckATermList(h_73), a_67);
  i_73 = t;
  t = SSL_table_put(b_67, c_67, i_73);
  t = b_73;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,b_74 = NULL,c_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
      t = term_n_30;
      t = n_0(t);
      d_74 = t;
      t = term_p_31;
      e_74 = t;
      t = term_q_31;
      f_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_31, term_q_31, d_74);
      t = i_10(e_74, f_74, d_74, t);
      _fail(t);
    }
  else
    {
      ATerm j_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_73 = ATgetFirst((ATermList) t);
          t_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_73;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_74 = ATgetFirst((ATermList) t);
          c_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_73;
      t = k_0(t);
      t = b_74;
      t = l_0(t);
      j_74 = t;
      t = (ATerm) ATinsert(CheckATermList(c_74), j_74);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  l_74 = t;
  t = term_y_24;
  m_74 = t;
  t = (ATerm) ATinsert(ATempty, l_74);
  n_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, (ATerm) ATinsert(ATempty, l_74));
  t = v_9(m_74, n_74, t);
  t = l_74;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm o_74 = NULL;
  o_74 = t;
  if(match_string(t, "--library"))
    {
      t = o_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = o_74;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
  p_74 = t;
  t = term_o_25;
  q_74 = t;
  t = term_n_30;
  r_74 = t;
  t = term_i_32;
  t = k_10(q_74, r_74, t);
  t = p_74;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm k_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_5, r_5, s_5, t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = k_32;
      t = Option_3_0(w_5, x_5, y_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_30;
  t = whoami_0_0(t);
  s_74 = t;
  t = term_p_30;
  u_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_32), s_74);
  v_74 = t;
  t = SSL_printnl(u_74, v_74);
  t = term_t_13;
  t_74 = t;
  t = SSL_exit(t_74);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm d_10 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm q_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_57, h_57);
      LocalPopChoice(s_32);
    }
  else
    {
      t = q_32;
      t = SSL_addr(g_57, h_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_74;
      t = m_116(t);
    }
  else
    {
      ATerm c_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_74 = ATgetFirst((ATermList) t);
          z_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_74;
      t = foldr_2_0(m_116, n_116, t);
      c_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_74, c_75);
      t = n_116(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(y_33, z_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_75 = NULL,u_33 = NULL,v_33 = NULL;
  t = times_0_0(t);
  v_33 = t;
  t = SSL_explode_term(v_33);
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_33;
  t = foldr_2_0(a_6, b_6, t);
  f_75 = t;
  t = SSL_TicksToSeconds(f_75);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
  q_75 = t;
  if(match_cons(t, sym__2))
    {
      r_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_75;
        if((r_75 != t))
          {
            _fail(t);
          }
        t = q_75;
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        t = (ATerm) ATmakeAppl(sym__2, r_75, s_75);
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_75, s_75);
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              t = SSL_gtr(r_75, s_75);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_75, s_75);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm w_75 = NULL;
  w_75 = t;
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_75 = NULL;
        t = term_u_30;
        t = get_config_0_0(t);
        y_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_75, term_t_13);
        t = geq_0_0(t);
        t = w_75;
        t = p_124(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = w_75;
      }
  }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,d_76 = NULL,e_76 = NULL;
  t = run_time_0_0(t);
  a_76 = t;
  t = term_n_30;
  t = whoami_0_0(t);
  b_76 = t;
  t = term_p_30;
  d_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_33), a_76), term_c_33), b_76);
  e_76 = t;
  t = SSL_printnl(d_76, e_76);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_33), a_76), term_c_33), b_76));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_13;
  f_76 = t;
  t = SSL_exit(f_76);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL;
  o_76 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_76;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_76 = ATgetArgument(t, 0);
          {
            ATerm l_34 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(o_76);
            l_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_76);
            m_10 = t;
            t = SSLsetAnnotations(m_10, l_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_76;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_33;
      t = get_config_0_0(t);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      t = fetch_1_0(j_6, t);
    }
  t = d_126(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_76 = ATgetFirst((ATermList) t);
      s_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_76 = NULL,x_76 = NULL;
        static ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_76)), not_null(x_76));
          return(t);
        }
        t = s_76;
        t = i_0(t);
        if(((w_76 != NULL) && (w_76 != t)))
          _fail(t);
        else
          w_76 = t;
        t = r_76;
        t = g_0(t);
        if(((x_76 != NULL) && (x_76 != t)))
          _fail(t);
        else
          x_76 = t;
        t = s_76;
        t = reverse_acc_2_0(g_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_30;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,o_10 = NULL;
  d_77 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_77);
  b_77 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_77);
  o_10 = t;
  t = SSLsetAnnotations(o_10, b_77);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm f_77 = NULL;
  f_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_77), term_h_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_32;
      t = get_config_0_0(t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = fetch_1_0(l_6, t);
    }
  t = term_q_33;
  t = echo_0_0(t);
  t = term_p_31;
  z_76 = t;
  t = term_q_31;
  a_77 = t;
  t = term_r_33;
  t = h_10(z_76, a_77, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(n_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  static ATerm c_78 (ATerm t)
  {
    ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
    z_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_78 = ATgetFirst((ATermList) t);
        b_78 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_34 = NULL,w_34 = NULL,q_10 = NULL;
          t = SSLgetAnnotations(z_77);
          t_34 = t;
          t = a_78;
          t = t_110(t);
          w_34 = t;
          t = (ATerm) ATinsert(CheckATermList(b_78), w_34);
          q_10 = t;
          t = SSLsetAnnotations(q_10, t_34);
          LocalPopChoice(t_33);
        }
      else
        {
          t = s_33;
          {
            ATerm e_35 = NULL,h_35 = NULL,r_10 = NULL;
            t = SSLgetAnnotations(z_77);
            e_35 = t;
            t = b_78;
            t = c_78(t);
            h_35 = t;
            t = (ATerm) ATinsert(CheckATermList(h_35), a_78);
            r_10 = t;
            t = SSLsetAnnotations(r_10, e_35);
          }
        }
    }
    return(t);
  }
  t = c_78(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_78;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_34 = ATgetFirst((ATermList) t);
                ATerm b_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_78;
          }
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATinsert(ATempty, g_78);
      }
  }
  h_78 = t;
  t = term_o_28;
  i_78 = t;
  t = SSL_printnl(i_78, h_78);
  t = g_78;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm g_10 (ATerm f_53, ATerm g_53, ATerm t)
{
  t = SSL_strcat(f_53, g_53);
  return(t);
}
ATerm debug_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  m_78 = t;
  t = y_109(t);
  n_78 = t;
  t = term_p_30;
  o_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_78), n_78);
  p_78 = t;
  t = SSL_printnl(o_78, p_78);
  t = m_78;
  return(t);
}
ATerm map_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  static ATerm e_79 (ATerm t)
  {
    ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
    b_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_79;
      }
    else
      {
        ATerm p_35 = NULL,s_35 = NULL,t_35 = NULL,y_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_79 = ATgetFirst((ATermList) t);
            d_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_79);
        p_35 = t;
        t = c_79;
        t = j_110(t);
        s_35 = t;
        t = d_79;
        t = e_79(t);
        t_35 = t;
        t = (ATerm) ATinsert(CheckATermList(t_35), s_35);
        y_10 = t;
        t = SSLsetAnnotations(y_10, p_35);
      }
    return(t);
  }
  t = e_79(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_79 = NULL;
      m_79 = t;
      t = SSL_is_string(m_79);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_6, t);
            LocalPopChoice(i_34);
          }
        else
          {
            t = h_34;
            {
              ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
              s_79 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_79 = ATgetArgument(t, 0);
                  t = t_79;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_79 = ATgetArgument(t, 0);
                      t = t_79;
                      {
                        ATerm j_34 = t;
                        int k_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_34);
                          }
                        else
                          {
                            t = j_34;
                            t = debug_1_0(q_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_79 = NULL,z_79 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_79 = ATgetArgument(t, 0);
                          u_79 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_79;
                      t = eval_config_0_0(t);
                      y_79 = t;
                      t = u_79;
                      t = eval_config_0_0(t);
                      z_79 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_79, z_79);
                      t = g_10(y_79, z_79, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_10 (ATerm s_68, ATerm t_68, ATerm t)
{
  t = SSL_table_get(s_68, t_68);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL;
  d_80 = t;
  t = term_o_31;
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, d_80);
  t = h_10(e_80, d_80, t);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_80 = NULL,g_80 = NULL;
        t = eval_config_0_0(t);
        f_80 = t;
        t = term_o_31;
        g_80 = t;
        t = SSL_table_put(g_80, d_80, f_80);
        t = f_80;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL;
  t = term_o_34;
  j_80 = t;
  t = term_n_30;
  k_80 = t;
  t = term_p_34;
  t = k_10(j_80, k_80, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  t = term_o_34;
  n_80 = t;
  t = term_n_30;
  o_80 = t;
  t = term_p_34;
  t = k_10(n_80, o_80, t);
  t = term_r_34;
  l_80 = t;
  t = term_n_30;
  m_80 = t;
  t = term_s_34;
  t = k_10(l_80, m_80, t);
  t = term_u_34;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_6, u_6, y_6, t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = Option_3_0(b_7, c_7, e_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,a_11 = NULL;
  u_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_80 = ATgetFirst((ATermList) t);
      r_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_80);
  p_80 = t;
  t = q_80;
  t = q_82(t);
  s_80 = t;
  t = r_80;
  t = r_82(t);
  t_80 = t;
  t = (ATerm) ATinsert(CheckATermList(t_80), s_80);
  a_11 = t;
  t = SSLsetAnnotations(a_11, p_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_128 (ATerm), ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,e_81 = NULL,f_81 = NULL,n_11 = NULL;
  z_80 = t;
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_35;
        t = u_128(t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
      }
  }
  t = z_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_81 = ATgetFirst((ATermList) t);
      c_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_80);
  a_81 = t;
  t = term_p_32;
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_32, b_81);
  t = k_10(f_81, b_81, t);
  t = c_81;
  {
    static ATerm p_81 (ATerm t)
    {
      ATerm c_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_81 = NULL;
              i_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_81;
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              t = u_128(t);
              t = Cons_2_0(_id, p_81, t);
            }
          LocalPopChoice(d_35);
        }
      else
        {
          t = c_35;
          {
            ATerm l_81 = NULL,m_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_81 = ATgetFirst((ATermList) t);
                m_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_81), (ATerm) ATmakeAppl(sym_Undefined_1, l_81));
          }
        }
      return(t);
    }
    t = p_81(t);
  }
  e_81 = t;
  t = (ATerm) ATinsert(CheckATermList(e_81), (ATerm) ATmakeAppl(sym_Program_1, b_81));
  n_11 = t;
  t = SSLsetAnnotations(n_11, a_81);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm b_82 = NULL;
  b_82 = t;
  if(match_string(t, "--help"))
    {
      t = b_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_82;
        }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  t = term_g_33;
  c_82 = t;
  t = term_n_30;
  d_82 = t;
  t = term_i_35;
  t = k_10(c_82, d_82, t);
  t = term_j_35;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_128 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL;
  w_81 = t;
  t = term_p_31;
  y_81 = t;
  t = term_q_31;
  z_81 = t;
  t = (ATerm) ATempty;
  a_82 = t;
  t = SSL_table_put(y_81, z_81, a_82);
  t = w_81;
  {
    static ATerm h_7 (ATerm t)
    {
      ATerm l_35 = t;
      int m_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_128(t);
          LocalPopChoice(m_35);
        }
      else
        {
          t = l_35;
          {
            ATerm n_35 = t;
            int o_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_7, l_7, m_7, t);
                LocalPopChoice(o_35);
              }
            else
              {
                t = n_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_7, t);
  }
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_82 = NULL;
        k_82 = t;
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_36 = NULL;
              t = k_82;
              {
                ATerm w_35 = t;
                int x_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(x_35);
                  }
                else
                  {
                    t = w_35;
                    t = fetch_1_0(n_7, t);
                  }
              }
              t = k_82;
              t = default_system_usage_0_0(t);
              t = term_s_13;
              k_36 = t;
              t = SSL_exit(k_36);
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
              {
                ATerm o_36 = NULL;
                t = term_o_34;
                t = get_config_0_0(t);
                t = k_82;
                t = default_system_about_0_0(t);
                t = term_s_13;
                o_36 = t;
                t = SSL_exit(o_36);
              }
            }
        }
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
              static ATerm p_7 (ATerm t)
              {
                ATerm o_82 = NULL,p_82 = NULL,s_82 = NULL,p_11 = NULL;
                s_82 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_82);
                o_82 = t;
                t = p_82;
                if(((u_81 != NULL) && (u_81 != t)))
                  _fail(t);
                else
                  u_81 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_82);
                p_11 = t;
                t = SSLsetAnnotations(p_11, o_82);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_p_30;
              m_82 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_a_36);
              n_82 = t;
              t = SSL_printnl(m_82, n_82);
              t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_a_36));
              t = default_system_usage_0_0(t);
              t = term_t_13;
              l_82 = t;
              t = SSL_exit(l_82);
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
            }
        }
      }
  }
  v_81 = t;
  t = term_p_31;
  x_81 = t;
  t = SSL_table_destroy(x_81);
  t = v_81;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
  t = parse_options_1_0(f_126, t);
  x_82 = t;
  t = term_c_36;
  a_83 = t;
  t = SSL_table_create(a_83);
  t = term_c_36;
  y_82 = t;
  t = term_d_36;
  z_82 = t;
  t = SSL_table_put(y_82, z_82, x_82);
  t = x_82;
  t = h_126(t);
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_126, t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
        {
          ATerm g_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_126(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_36);
            }
          else
            {
              t = g_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm j_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(l_36);
    }
  else
    {
      t = j_36;
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            {
              ATerm q_36 = t;
              int r_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(r_36);
                }
              else
                {
                  t = q_36;
                  {
                    ATerm s_36 = t;
                    int t_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, y_7, t);
                        LocalPopChoice(t_36);
                      }
                    else
                      {
                        t = s_36;
                        {
                          ATerm u_36 = t;
                          int v_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(v_36);
                            }
                          else
                            {
                              t = u_36;
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
static ATerm u_7 (ATerm t)
{
  t = input_1_0(c_8, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL;
  t = term_a_29;
  c_83 = t;
  t = term_n_30;
  d_83 = t;
  t = term_w_36;
  t = k_10(c_83, d_83, t);
  t = term_x_36;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_y_36;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_7, default_usage_0_0, _id, u_7, t);
  return(t);
}
