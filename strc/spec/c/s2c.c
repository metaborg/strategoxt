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
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_h_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_j_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_h_30;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_t_28;
ATerm term_v_27;
ATerm term_p_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_v_25;
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
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
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
ATerm term_r_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_p_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_10, (ATerm) ATempty);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Id_1, term_y_10);
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
  term_i_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_10, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Id_1, term_k_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_11, (ATerm) ATempty);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_q_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
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
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, (ATerm) ATempty);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_10, term_e_11);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Id_1, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Id_1, term_c_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Id_1, term_i_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Id_1, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Id_1, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Id_1, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Id_1, term_c_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Id_1, term_h_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, term_q_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_a_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Id_1, term_d_16);
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
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_o_16, term_e_11);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Id_1, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_16, (ATerm) ATempty);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_y_16, term_e_11);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Id_1, term_a_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Id_1, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_b_17);
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
  term_a_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_z_18, term_x_14);
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
  term_i_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_h_19, term_x_14);
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
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Id_1, term_f_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Id_1, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(112);
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
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_25, term_e_11);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Include_1, term_y_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Include_1, term_b_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_f_22, (ATerm)ATempty, term_p_25, (ATerm) ATempty);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Id_1, term_u_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Op_2, term_c_27, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_27, term_r_15);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_p_27);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_v_13);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_13);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_v_30);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_v_30);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_w_31);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_v_30);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_x_34, term_v_30);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_v_30);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_v_30);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm z_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm w_132 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm h_9 (ATerm u_28, ATerm w_28, ATerm v_28, ATerm t);
static ATerm u_9 (ATerm q_67, ATerm r_67, ATerm t);
static ATerm x_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm j_9 (ATerm g_28, ATerm j_28, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm k_9 (ATerm p_33, ATerm o_33, ATerm t);
static ATerm l_9 (ATerm z_172, ATerm l_33, ATerm n_33, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm z_50 (ATerm h_26, ATerm i_26, ATerm j_26, ATerm m_26, ATerm t);
static ATerm a_51 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
static ATerm b_51 (ATerm c_30, ATerm i_30, ATerm o_30, ATerm t);
static ATerm c_51 (ATerm b_36, ATerm i_36, ATerm p_36, ATerm d_37, ATerm t);
static ATerm d_51 (ATerm q_37, ATerm w_37, ATerm f_38, ATerm g_38, ATerm t);
static ATerm e_51 (ATerm n_38, ATerm o_38, ATerm p_38, ATerm q_38, ATerm t);
static ATerm f_51 (ATerm f_39, ATerm g_39, ATerm n_39, ATerm o_39, ATerm t);
static ATerm g_51 (ATerm e_40, ATerm f_40, ATerm l_40, ATerm m_40, ATerm n_40, ATerm o_40, ATerm r_40, ATerm t_40, ATerm t);
static ATerm h_51 (ATerm i_42, ATerm j_42, ATerm l_42, ATerm m_42, ATerm p_42, ATerm r_42, ATerm t);
static ATerm i_51 (ATerm a_43, ATerm b_43, ATerm d_43, ATerm e_43, ATerm h_43, ATerm i_43, ATerm t);
static ATerm j_51 (ATerm v_43, ATerm w_43, ATerm x_43, ATerm t);
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
static ATerm q_9 (ATerm c_1 (ATerm), ATerm h_1 (ATerm), ATerm d_1, ATerm i_1, ATerm b_1, ATerm t);
ATerm thread_map_1_0 (ATerm h_117 (ATerm), ATerm t);
static ATerm b_57 (ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm m_54, ATerm t);
static ATerm c_57 (ATerm n_55, ATerm o_55, ATerm p_55, ATerm q_55, ATerm t);
static ATerm d_57 (ATerm v_55, ATerm w_55, ATerm x_55, ATerm y_55, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_104 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_117 (ATerm), ATerm t);
ATerm TranslateType_0_0 (ATerm t);
ATerm TranslateVarDec_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm is_local_function_0_0 (ATerm t);
ATerm SDefToDeclaration_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm v_9 (ATerm t_37, ATerm r_37, ATerm t);
ATerm Cify_1_0 (ATerm v_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm b_120 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm w_9 (ATerm g_37, ATerm f_37, ATerm t);
static ATerm q_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm x_9 (ATerm a_38, ATerm d_38, ATerm t);
static ATerm y_9 (ATerm g_133 (ATerm), ATerm i_73, ATerm g_73, ATerm t);
static ATerm y_3 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm a_10 (ATerm n_54, ATerm o_54, ATerm t);
static ATerm b_10 (ATerm u_39, ATerm v_39, ATerm t);
static ATerm d_10 (ATerm e_110 (ATerm), ATerm t_247, ATerm y_39, ATerm t);
static ATerm c_10 (ATerm q_39, ATerm r_39, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_1_0 (ATerm q_126 (ATerm), ATerm t);
static ATerm l_67 (ATerm b_67, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_10 (ATerm w_39, ATerm t);
static ATerm f_10 (ATerm p_54, ATerm q_54, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_69 (ATerm x_67, ATerm t);
static ATerm b_69 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t);
static ATerm c_69 (ATerm l_68, ATerm m_68, ATerm n_68, ATerm t);
static ATerm g_10 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_126 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_10 (ATerm r_73, ATerm s_73, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_72 (ATerm s_71, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_9 (ATerm y_73, ATerm z_73, ATerm t);
static ATerm m_10 (ATerm f_67, ATerm g_67, ATerm e_67, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_10 (ATerm i_57, ATerm j_57, ATerm t);
ATerm foldr_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_124 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm need_help_1_0 (ATerm h_126 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_10 (ATerm h_53, ATerm i_53, ATerm t);
ATerm debug_1_0 (ATerm c_110 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_110 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm l_10 (ATerm w_68, ATerm x_68, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_128 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm parse_options_1_0 (ATerm x_128 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm z_2 (ATerm), ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,l_0 = NULL,w_0 = NULL,m_0 = NULL;
      n_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_1 = ATgetFirst((ATermList) t);
          p_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_1);
      l_0 = t;
      t = p_1;
      t = listbu1_1_0(z_2, t);
      w_0 = t;
      t = (ATerm) ATinsert(CheckATermList(w_0), o_1);
      m_0 = t;
      t = SSLsetAnnotations(m_0, l_0);
      {
        ATerm f_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_2(t);
            LocalPopChoice(h_8);
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
      t = z_2(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_8 = ATgetFirst((ATermList) t);
      if(match_cons(i_8, sym_Compound_2))
        {
          ATerm k_8 = ATgetArgument(i_8, 0);
          if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
            _fail(t);
          d_4 = ATgetArgument(i_8, 1);
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
static ATerm b_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_8 = ATgetFirst((ATermList) t);
      if(match_cons(m_8, sym_Compound_2))
        {
          ATerm n_8 = ATgetArgument(m_8, 0);
          if(((ATgetType(n_8) != AT_LIST) || !(ATisEmpty(n_8))))
            _fail(t);
          z_4 = ATgetArgument(m_8, 1);
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
static ATerm f_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_8 = ATgetFirst((ATermList) t);
      if(match_cons(q_8, sym_Compound_2))
        {
          ATerm s_8 = ATgetArgument(q_8, 0);
          if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
            _fail(t);
          e_5 = ATgetArgument(q_8, 1);
        }
      else
        _fail(t);
      f_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_5, f_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_8 = ATgetFirst((ATermList) t);
      if(match_cons(t_8, sym_Compound_2))
        {
          ATerm u_8 = ATgetArgument(t_8, 0);
          if(((ATgetType(u_8) != AT_LIST) || !(ATisEmpty(u_8))))
            _fail(t);
          u_5 = ATgetArgument(t_8, 1);
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
static ATerm q_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_8 = ATgetFirst((ATermList) t);
      if(match_cons(w_8, sym_Compound_2))
        {
          ATerm x_8 = ATgetArgument(w_8, 0);
          if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
            _fail(t);
          z_5 = ATgetArgument(w_8, 1);
        }
      else
        _fail(t);
      a_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_5, a_6);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
      u_2 = ATgetArgument(t, 2);
      t = u_2;
      if(match_cons(t, sym_Compound_2))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          t = w_2;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = v_2;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = c_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      d_3 = ATgetArgument(t, 0);
                      g_3 = ATgetArgument(t, 1);
                      t = g_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = d_3;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, b_3), u_2);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, b_3, c_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, b_3, c_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, b_3, c_3);
                    }
                }
              else
                {
                  t = c_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      d_3 = ATgetArgument(t, 0);
                      g_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, b_3), u_2);
                }
            }
          else
            {
              t = c_3;
              if(match_cons(t, sym_Compound_2))
                {
                  d_3 = ATgetArgument(t, 0);
                  g_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, b_3), u_2);
            }
        }
      else
        {
          t = c_3;
          if(match_cons(t, sym_Compound_2))
            {
              d_3 = ATgetArgument(t, 0);
              g_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, b_3), u_2);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_3 = ATgetFirst((ATermList) t);
          c_3 = (ATerm) ATgetNext((ATermList) t);
          t = b_3;
          if(match_cons(t, sym_Stat_1))
            {
              x_2 = ATgetArgument(t, 0);
              t = x_2;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = c_3;
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
              t = (ATerm) ATmakeAppl(sym__2, y_2, c_3);
              t = conc_0_0(t);
            }
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
          t = c_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_3 = ATgetFirst((ATermList) t);
              g_3 = (ATerm) ATgetNext((ATermList) t);
              t = g_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = d_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      e_3 = ATgetArgument(t, 0);
                      f_3 = ATgetArgument(t, 1);
                      {
                        ATerm z_8 = t;
                        int b_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_4 = NULL;
                            t = c_3;
                            t = listbu1_1_0(a_0, t);
                            c_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, c_4);
                            LocalPopChoice(b_9);
                          }
                        else
                          {
                            t = z_8;
                            {
                              ATerm c_9 = t;
                              int d_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                                  t = conc_0_0(t);
                                  m_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, m_4, f_3);
                                  LocalPopChoice(d_9);
                                }
                              else
                                {
                                  t = c_9;
                                  {
                                    ATerm t_4 = NULL,u_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                                    t = conc_0_0(t);
                                    t_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
                                    t = conc_0_0(t);
                                    u_4 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, t_4, u_4);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_4 = NULL;
                      t = c_3;
                      t = listbu1_1_0(b_0, t);
                      y_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, y_4);
                    }
                }
              else
                {
                  t = d_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      e_3 = ATgetArgument(t, 0);
                      f_3 = ATgetArgument(t, 1);
                      {
                        ATerm f_9 = t;
                        int g_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_5 = NULL;
                            t = c_3;
                            t = listbu1_1_0(f_0, t);
                            d_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, d_5);
                            LocalPopChoice(g_9);
                          }
                        else
                          {
                            t = f_9;
                            {
                              ATerm n_5 = NULL,o_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                              t = conc_0_0(t);
                              n_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
                              t = conc_0_0(t);
                              o_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, n_5, o_5);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_5 = NULL;
                      t = c_3;
                      t = listbu1_1_0(o_0, t);
                      r_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, r_5);
                    }
                }
            }
          else
            {
              ATerm y_5 = NULL;
              t = c_3;
              t = listbu1_1_0(q_0, t);
              y_5 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, y_5);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm p_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_103(t);
        t = b_6(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = p_9;
        t = c_103(t);
      }
    return(t);
  }
  t = b_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm w_132 (ATerm), ATerm t)
{
  static ATerm g_7 (ATerm t)
  {
    t = w_132(t);
    {
      ATerm t_9 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,u_0 = NULL;
          d_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_7 = ATgetFirst((ATermList) t);
              f_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_7);
          w_1 = t;
          t = e_7;
          t = g_7(t);
          z_1 = t;
          t = f_7;
          t = g_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          u_0 = t;
          t = SSLsetAnnotations(u_0, w_1);
          LocalPopChoice(j_10);
        }
      else
        {
          t = t_9;
          t = SRTS_all(g_7, t);
        }
    }
    t = w_132(t);
    return(t);
  }
  t = g_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  static ATerm s_0 (ATerm t)
  {
    t = bottomup_1_0(c_104, t);
    return(t);
  }
  t = SRTS_all(s_0, t);
  t = c_104(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_i_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_12, (ATerm) ATinsert(ATempty, term_d_11))))), term_s_11)));
  return(t);
}
static ATerm h_9 (ATerm u_28, ATerm w_28, ATerm v_28, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, w_28)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_28), term_z_11, v_28)));
  return(t);
}
static ATerm u_9 (ATerm q_67, ATerm r_67, ATerm t)
{
  ATerm j_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_67, r_67);
  t = l_10(q_67, r_67, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_7 = ATgetFirst((ATermList) t);
      {
        ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_7;
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
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(t_10);
        i_2 = t;
        t = u_10;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = v_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, u_10, v_10);
        a_1 = t;
        t = SSLsetAnnotations(a_1, i_2);
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
              ATerm s_2 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,p_4 = NULL,q_4 = NULL,g_1 = NULL,e_1 = NULL;
              t = SSLgetAnnotations(t_10);
              s_2 = t;
              t = u_10;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = v_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_4 = ATgetFirst((ATermList) t);
                  k_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_10);
              i_4 = t;
              t = k_4;
              t = Cons_2_0(proper_list_0_0, x_0, t);
              p_4 = t;
              t = (ATerm) ATinsert(CheckATermList(p_4), j_4);
              e_1 = t;
              t = SSLsetAnnotations(e_1, i_4);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, u_10, q_4);
              g_1 = t;
              t = SSLsetAnnotations(g_1, s_2);
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              {
                ATerm d_6 = NULL,g_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(t_10);
                d_6 = t;
                t = u_10;
                {
                  ATerm k_12 = t;
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
                      t = k_12;
                    }
                }
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_6, v_10);
                k_1 = t;
                t = SSLsetAnnotations(k_1, d_6);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_l_12;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_m_12;
  return(t);
}
static ATerm j_9 (ATerm g_28, ATerm j_28, ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,j_13 = NULL,l_13 = NULL;
  t = g_28;
  if(match_cons(t, sym_Op_2))
    {
      l_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
      {
        ATerm q_6 = NULL,v_6 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(g_28);
        q_6 = t;
        t = j_13;
        t = map_1_0(Cache_0_0, t);
        v_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, l_13, v_6);
        m_6 = t;
        t = SSLsetAnnotations(m_6, q_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          l_13 = ATgetArgument(t, 0);
          j_13 = ATgetArgument(t, 1);
          {
            ATerm p_7 = NULL,s_7 = NULL,t_7 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(g_28);
            p_7 = t;
            t = l_13;
            t = Cache_0_0(t);
            s_7 = t;
            t = j_13;
            t = Cache_0_0(t);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, s_7, t_7);
            r_6 = t;
            t = SSLsetAnnotations(r_6, p_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              l_13 = ATgetArgument(t, 0);
              {
                ATerm x_7 = NULL,u_6 = NULL;
                t = SSLgetAnnotations(g_28);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, l_13);
                u_6 = t;
                t = SSLsetAnnotations(u_6, x_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  l_13 = ATgetArgument(t, 0);
                  {
                    ATerm p_8 = NULL,w_6 = NULL;
                    t = SSLgetAnnotations(g_28);
                    p_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, l_13);
                    w_6 = t;
                    t = SSLsetAnnotations(w_6, p_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      l_13 = ATgetArgument(t, 0);
                      {
                        ATerm y_8 = NULL,x_6 = NULL;
                        t = SSLgetAnnotations(g_28);
                        y_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, l_13);
                        x_6 = t;
                        t = SSLsetAnnotations(x_6, y_8);
                      }
                    }
                  else
                    {
                      ATerm e_9 = NULL,z_6 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          l_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_28);
                      e_9 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, l_13);
                      z_6 = t;
                      t = SSLsetAnnotations(z_6, e_9);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  m_11 = t;
  t = term_n_12;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, m_11);
  t = k_10(x_11, m_11, t);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_12, n_11);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, (ATerm) ATmakeAppl(sym_Defined_2, term_o_12, n_11));
  t = y_9(y_0, g_28, w_11, t);
  t = n_11;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL,i_9 = NULL,m_9 = NULL;
        t = (ATerm) ATempty;
        i_9 = t;
        t = term_m_12;
        m_9 = t;
        t = term_r_12;
        t = u_9(m_9, i_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_12) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            m_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_13;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATempty;
      }
  }
  t_11 = t;
  t = (ATerm) ATempty;
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_12, (ATerm) ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym__3, m_11, n_11, j_28)));
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_12, (ATerm) ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym__3, m_11, n_11, j_28))));
  t = y_9(z_0, u_11, v_11, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, n_11);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL,f_11 = NULL;
        t = term_l_12;
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, p_14);
        t = u_9(f_11, p_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_12) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, c_11);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm j_11 = NULL,o_11 = NULL;
          t = term_l_12;
          o_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_12, p_14);
          t = u_9(o_11, p_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm y_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_12) != ATmakeSymbol("c_0", 0, ATtrue)))
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
        ATerm f_15 = NULL,y_11 = NULL;
        f_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              {
                ATerm f_13 = t;
                int g_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(g_13);
                  }
                else
                  {
                    t = f_13;
                  }
              }
            }
        }
        y_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_15, y_11);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm k_13 = ATgetArgument(t, 0);
                  ATerm n_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_15, y_11);
              t = j_9(f_15, y_11, t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              {
                ATerm u_12 = NULL,z_12 = NULL;
                z_12 = t;
                t = SSL_explode_term(z_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_13 = ATgetArgument(t, 1);
                      if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
                        {
                          ATerm s_13 = ATgetFirst((ATermList) r_13);
                          ATerm t_13 = (ATerm) ATgetNext((ATermList) r_13);
                          if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
                            {
                              u_12 = ATgetFirst((ATermList) t_13);
                              {
                                ATerm u_13 = (ATerm) ATgetNext((ATermList) t_13);
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
static ATerm k_9 (ATerm p_33, ATerm o_33, ATerm t)
{
  ATerm i_15 = NULL;
  t = new_0_0(t);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_15), term_e_11), (ATerm) ATmakeAppl(sym_AssignInit_1, o_33)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, p_33, (ATerm) ATmakeAppl(sym_Id_1, i_15))));
  return(t);
}
static ATerm l_9 (ATerm z_172, ATerm l_33, ATerm n_33, ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  t = SSLgetAnnotations(z_172);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_33);
  l_15 = t;
  t = SSLsetAnnotations(l_15, j_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, k_15, n_33);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(q_17, r_17, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,j_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      j_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, g_17), j_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          j_17 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
          {
            ATerm p_17 = NULL,c_13 = NULL,o_13 = NULL,p_13 = NULL;
            t = g_17;
            t = foldr_3_0(f_1, j_1, l_1, t);
            p_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_17, p_17);
            o_13 = t;
            t = term_a_14;
            p_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym__2, j_17, p_17));
            t = u_9(p_13, o_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm b_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_14) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                c_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_14, (ATerm) ATinsert(CheckATermList(g_17), (ATerm) ATmakeAppl(sym_Id_1, c_13))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              j_17 = ATgetArgument(t, 0);
              t = j_17;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  j_17 = ATgetArgument(t, 0);
                  {
                    ATerm e_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(h_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_14 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) g_14) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(h_14) != AT_LIST) || !(ATisEmpty(h_14))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_17)));
                        LocalPopChoice(f_14);
                      }
                    else
                      {
                        t = e_14;
                        {
                          ATerm k_14 = t;
                          int l_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(h_17);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm m_14 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) m_14) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm n_14 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(n_14) != AT_LIST) || !(ATisEmpty(n_14))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_17)));
                              LocalPopChoice(l_14);
                            }
                          else
                            {
                              t = k_14;
                              {
                                ATerm o_14 = t;
                                int q_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(h_17);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_17)));
                                    LocalPopChoice(q_14);
                                  }
                                else
                                  {
                                    t = o_14;
                                    t = SSLgetAnnotations(h_17);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm r_14 = ATgetFirst((ATermList) t);
                                        if((ATgetSymbol((ATermAppl) r_14) != ATmakeSymbol("bound", 0, ATtrue)))
                                          _fail(t);
                                        {
                                          ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
                                          if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Id_1, j_17);
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
                      j_17 = ATgetArgument(t, 0);
                      {
                        ATerm w_17 = NULL,c_16 = NULL,f_16 = NULL,p_16 = NULL,t_15 = NULL;
                        t = SSL_explode_string(j_17);
                        t = escape_chars_0_0(t);
                        t_15 = t;
                        t = SSL_implode_string(t_15);
                        f_16 = t;
                        t = SSL_explode_string(f_16);
                        p_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_16), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
                        t = conc_0_0(t);
                        c_16 = t;
                        t = SSL_implode_string(c_16);
                        w_17 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), term_x_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, w_17)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          j_17 = ATgetArgument(t, 0);
                          {
                            ATerm t_16 = NULL;
                            t = SSL_real_to_string(j_17);
                            t_16 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, t_16))));
                          }
                        }
                      else
                        {
                          ATerm u_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              j_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(j_17);
                          u_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_17))));
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm ConstructList_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_22;
  if(match_string(t, "Cons"))
    {
      ATerm h_22 = NULL;
      t = r_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_22 = ATgetFirst((ATermList) t);
          l_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          n_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_22;
      {
        ATerm e_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,t_25 = NULL,u_25 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                r_23 = ATgetArgument(t, 0);
                y_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_23;
            if(match_cons(t, sym_TypeName_2))
              {
                s_23 = ATgetArgument(t, 0);
                x_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_23;
            if(match_cons(t, sym_TypeSpec_3))
              {
                t_23 = ATgetArgument(t, 0);
                u_23 = ATgetArgument(t, 1);
                w_23 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_23;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = u_23;
            if(match_cons(t, sym_TypeId_1))
              {
                v_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_23;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = w_23;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_23;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = y_23;
            if(match_cons(t, sym_Id_1))
              {
                t_25 = ATgetArgument(t, 0);
                {
                  ATerm z_25 = NULL,o_7 = NULL;
                  t = SSLgetAnnotations(y_23);
                  z_25 = t;
                  t = t_25;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, t_25);
                  o_7 = t;
                  t = SSLsetAnnotations(o_7, z_25);
                }
              }
            else
              {
                ATerm e_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,t_26 = NULL,x_26 = NULL,a_8 = NULL,z_7 = NULL,y_7 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    t_25 = ATgetArgument(t, 0);
                    u_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_23);
                e_26 = t;
                t = t_25;
                if(match_cons(t, sym_Id_1))
                  {
                    t_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_25);
                q_26 = t;
                t = t_26;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, t_26);
                y_7 = t;
                t = SSLsetAnnotations(y_7, q_26);
                x_26 = t;
                t = u_25;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_26 = ATgetFirst((ATermList) t);
                    n_26 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_25);
                k_26 = t;
                t = n_26;
                t = Cons_2_0(_id, m_1, t);
                o_26 = t;
                t = (ATerm) ATinsert(CheckATermList(o_26), l_26);
                z_7 = t;
                t = SSLsetAnnotations(z_7, k_26);
                p_26 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, x_26, p_26);
                a_8 = t;
                t = SSLsetAnnotations(a_8, e_26);
              }
            LocalPopChoice(g_15);
          }
        else
          {
            t = e_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATempty, m_22));
          }
      }
      h_22 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, k_22), h_22)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = r_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_15;
    }
  return(t);
}
static ATerm z_50 (ATerm h_26, ATerm i_26, ATerm j_26, ATerm m_26, ATerm t)
{
  ATerm v_26 = NULL,z_26 = NULL,d_27 = NULL,e_27 = NULL,g_27 = NULL;
  t = h_26;
  {
    ATerm s_15 = t;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL;
        f_27 = t;
        if(match_string(t, "Nil"))
          {
            t = f_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = f_27;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_15;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, i_26, term_v_13);
  {
    static ATerm q_1 (ATerm t)
    {
      ATerm k_27 = NULL,m_27 = NULL,n_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
      if(match_cons(t, sym__2))
        {
          k_27 = ATgetArgument(t, 0);
          m_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_27);
      s_27 = t;
      t = k_27;
      if(match_cons(t, sym_Var_1))
        {
          u_27 = ATgetArgument(t, 0);
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_28 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), j_26));
                c_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), j_26)));
                t = l_9(k_27, u_27, c_28, t);
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
                {
                  ATerm d_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), j_26));
                  d_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), j_26)));
                  t = k_9(k_27, d_28, t);
                }
              }
          }
        }
      else
        {
          ATerm k_28 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), j_26));
          k_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_27)), j_26)));
          t = k_9(k_27, k_28, t);
        }
      n_27 = t;
      t = term_w_13;
      t_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_27, term_w_13);
      t = h_10(m_27, t_27, t);
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_27, r_27);
      return(t);
    }
    t = thread_map_1_0(q_1, t);
  }
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      {
        ATerm y_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_26;
  t = foldr_3_0(r_1, s_1, t_1, t);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, z_26);
  e_27 = t;
  t = term_a_14;
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym__2, h_26, z_26));
  t = u_9(g_27, e_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_27)), j_26)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_26), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm a_51 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm a_30 = NULL;
  t = SSL_real_to_string(q_28);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, r_28)), term_j_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_l_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_16, r_28))), (ATerm) ATmakeAppl(sym_FloatConst_1, a_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm b_51 (ATerm c_30, ATerm i_30, ATerm o_30, ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_int_to_string(c_30);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, i_30)), term_s_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_16, i_30))), (ATerm) ATmakeAppl(sym_IntConst_1, n_32))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm c_51 (ATerm b_36, ATerm i_36, ATerm p_36, ATerm d_37, ATerm t)
{
  t = SSLgetAnnotations(b_36);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, i_36), term_b_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, i_36), p_36)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, p_36))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_36), term_z_11, p_36)));
  return(t);
}
static ATerm d_51 (ATerm q_37, ATerm w_37, ATerm f_38, ATerm g_38, ATerm t)
{
  t = SSLgetAnnotations(q_37);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(d_17) != AT_LIST) || !(ATisEmpty(d_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, w_37), term_b_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, w_37), f_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, f_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_37), term_z_11, f_38)));
  return(t);
}
static ATerm e_51 (ATerm n_38, ATerm o_38, ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSLgetAnnotations(n_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(f_17) != AT_LIST) || !(ATisEmpty(f_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, o_38), p_38), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, p_38))))));
  return(t);
}
static ATerm f_51 (ATerm f_39, ATerm g_39, ATerm n_39, ATerm o_39, ATerm t)
{
  t = SSLgetAnnotations(f_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) i_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(k_17) != AT_LIST) || !(ATisEmpty(k_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_39), term_z_11, n_39));
  return(t);
}
static ATerm g_51 (ATerm e_40, ATerm f_40, ATerm l_40, ATerm m_40, ATerm n_40, ATerm o_40, ATerm r_40, ATerm t_40, ATerm t)
{
  ATerm m_41 = NULL,r_41 = NULL,j_27 = NULL,l_27 = NULL,o_27 = NULL;
  t = f_40;
  {
    ATerm l_17 = t;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL;
        s_41 = t;
        if(match_string(t, "Nil"))
          {
            t = s_41;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = s_41;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, m_40, term_v_13);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm w_41 = NULL,y_41 = NULL,b_42 = NULL,d_42 = NULL,h_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm m_17 = ATgetArgument(t, 0);
          if(match_cons(m_17, sym_Var_1))
            {
              w_41 = ATgetArgument(m_17, 0);
            }
          else
            _fail(t);
          y_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_41);
      b_42 = t;
      t = term_w_13;
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_41, term_w_13);
      t = h_10(y_41, h_42, t);
      d_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_41), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_42)), (ATerm) ATmakeAppl(sym_Id_1, e_40))))), d_42);
      return(t);
    }
    t = thread_map_1_0(u_1, t);
  }
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      {
        ATerm n_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_40, l_40);
  l_27 = t;
  t = term_a_14;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym__2, f_40, l_40));
  t = u_9(o_27, l_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_17) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_41, (ATerm) ATinsert(ATempty, n_40));
  t = conc_0_0(t);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_27)), (ATerm) ATmakeAppl(sym_Id_1, e_40))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_41), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, e_40), o_40, r_40))));
  return(t);
}
static ATerm h_51 (ATerm i_42, ATerm j_42, ATerm l_42, ATerm m_42, ATerm p_42, ATerm r_42, ATerm t)
{
  ATerm z_42 = NULL;
  t = SSL_real_to_string(j_42);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, z_42)), (ATerm) ATmakeAppl(sym_Id_1, i_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, i_42), m_42, p_42))));
  return(t);
}
static ATerm i_51 (ATerm a_43, ATerm b_43, ATerm d_43, ATerm e_43, ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_int_to_string(b_43);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, s_43)), (ATerm) ATmakeAppl(sym_Id_1, a_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_43), e_43, h_43))));
  return(t);
}
static ATerm j_51 (ATerm v_43, ATerm w_43, ATerm x_43, ATerm t)
{
  t = w_43;
  {
    ATerm y_17 = t;
    if((PushChoice() == 0))
      {
        ATerm a_44 = NULL,d_44 = NULL,e_44 = NULL,g_8 = NULL;
        e_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_44);
        a_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_44);
        g_8 = t;
        t = SSLsetAnnotations(g_8, a_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_43)));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_v_13;
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
  t = h_10(m_28, n_28, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_45 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      if(match_cons(z_17, sym_SVar_1))
        {
          u_45 = ATgetArgument(z_17, 0);
        }
      else
        _fail(t);
      {
        ATerm a_18 = ATgetArgument(t, 1);
        if(((ATgetType(a_18) != AT_LIST) || !(ATisEmpty(a_18))))
          _fail(t);
      }
      {
        ATerm b_18 = ATgetArgument(t, 2);
        if(((ATgetType(b_18) != AT_LIST) || !(ATisEmpty(b_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, u_45);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = topdown_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(b_2, t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm j_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(match_cons(i_18, sym_SVar_1))
        {
          j_46 = ATgetArgument(i_18, 0);
        }
      else
        _fail(t);
      {
        ATerm j_18 = ATgetArgument(t, 1);
        if(((ATgetType(j_18) != AT_LIST) || !(ATisEmpty(j_18))))
          _fail(t);
      }
      {
        ATerm k_18 = ATgetArgument(t, 2);
        if(((ATgetType(k_18) != AT_LIST) || !(ATisEmpty(k_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, j_46);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = topdown_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(f_2, t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_48), term_e_11), term_r_18);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,j_48 = NULL;
  g_48 = t;
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_48;
  if(match_cons(t, sym_Var_1))
    {
      f_48 = ATgetArgument(t, 0);
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_48;
            t = l_9(h_48, f_48, j_48, t);
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = g_48;
            t = k_9(h_48, j_48, t);
          }
      }
    }
  else
    {
      t = g_48;
      t = k_9(h_48, j_48, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm f_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  g_45 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, h_45, (ATerm) ATinsert(ATempty, e_45));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm l_45 = NULL;
            t = g_45;
            t = new_0_0(t);
            l_45 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_45), term_e_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, l_45)))), term_v_18), h_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_45), term_z_11, term_d_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              h_45 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, h_45);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  h_45 = ATgetArgument(t, 0);
                  e_45 = ATgetArgument(t, 1);
                  b_45 = ATgetArgument(t, 2);
                  {
                    ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
                    t = h_45;
                    if(match_cons(t, sym_SVar_1))
                      {
                        f_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_45;
                    t = map_1_0(v_1, t);
                    r_45 = t;
                    t = b_45;
                    t = map_1_0(x_1, t);
                    s_45 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_11)), s_45), r_45);
                    t = concat_0_0(t);
                    t_45 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, f_45), t_45)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      h_45 = ATgetArgument(t, 0);
                      e_45 = ATgetArgument(t, 1);
                      b_45 = ATgetArgument(t, 2);
                      {
                        ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
                        t = e_45;
                        t = map_1_0(c_2, t);
                        f_46 = t;
                        t = b_45;
                        t = map_1_0(d_2, t);
                        g_46 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
                        t = conc_0_0(t);
                        h_46 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_45), h_46)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          h_45 = ATgetArgument(t, 0);
                          {
                            ATerm v_46 = NULL;
                            t = g_45;
                            t = new_0_0(t);
                            v_46 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_46), term_e_11), term_w_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_a_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11)))), term_e_19), h_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, v_46))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              h_45 = ATgetArgument(t, 0);
                              e_45 = ATgetArgument(t, 1);
                              {
                                ATerm e_47 = NULL;
                                t = g_45;
                                t = new_0_0(t);
                                e_47 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_47), term_e_11), term_w_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_i_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, e_47))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  h_45 = ATgetArgument(t, 0);
                                  e_45 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, h_45, e_45);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      h_45 = ATgetArgument(t, 0);
                                      e_45 = ATgetArgument(t, 1);
                                      b_45 = ATgetArgument(t, 2);
                                      {
                                        ATerm m_47 = NULL,n_47 = NULL;
                                        t = g_45;
                                        t = new_0_0(t);
                                        m_47 = t;
                                        t = new_0_0(t);
                                        n_47 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_47), term_e_11), term_n_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_47), term_e_11), term_w_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_a_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, n_47))))), term_v_18), h_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, (ATerm) ATmakeAppl(sym_Id_1, m_47))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          h_45 = ATgetArgument(t, 0);
                                          e_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_45, term_q_19, e_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              h_45 = ATgetArgument(t, 0);
                                              e_45 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_45, e_45);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  h_45 = ATgetArgument(t, 0);
                                                  e_45 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_45), h_45));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      h_45 = ATgetArgument(t, 0);
                                                      e_45 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm z_47 = NULL;
                                                        t = h_45;
                                                        t = map_1_0(g_2, t);
                                                        z_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, z_47)), (ATerm) ATinsert(ATempty, e_45));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11)));
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
                                                                  h_45 = ATgetArgument(t, 0);
                                                                  e_45 = ATgetArgument(t, 1);
                                                                  t = h_45;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      f_45 = ATgetArgument(t, 0);
                                                                      m_44 = ATgetArgument(t, 1);
                                                                      t = m_44;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          f_44 = ATgetFirst((ATermList) t);
                                                                          i_44 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = i_44;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              j_44 = ATgetFirst((ATermList) t);
                                                                              k_44 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = k_44;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = f_45;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm s_19 = t;
                                                                                      int t_19 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm e_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_44, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, e_45)))))), (ATerm) ATmakeAppl(sym__2, f_44, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, e_45)))));
                                                                                          t = map_1_0(h_2, t);
                                                                                          e_48 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, e_45)), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, e_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, e_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                          LocalPopChoice(t_19);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_19;
                                                                                          t = z_50(f_45, m_44, e_45, g_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_50(f_45, m_44, e_45, g_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_45;
                                                                                  t = z_50(f_45, m_44, e_45, g_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_45;
                                                                              t = z_50(f_45, m_44, e_45, g_45, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = f_45;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm g_20 = t;
                                                                                  int h_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, e_45)), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, e_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                      LocalPopChoice(h_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_20;
                                                                                      t = z_50(f_45, m_44, e_45, g_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_50(f_45, m_44, e_45, g_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_45;
                                                                              t = z_50(f_45, m_44, e_45, g_45, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          f_45 = ATgetArgument(t, 0);
                                                                          t = a_51(f_45, e_45, g_45, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              f_45 = ATgetArgument(t, 0);
                                                                              t = b_51(f_45, e_45, g_45, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  f_45 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm d_49 = NULL,z_27 = NULL,e_28 = NULL,h_28 = NULL,q_27 = NULL;
                                                                                    t = SSL_explode_string(f_45);
                                                                                    t = escape_chars_0_0(t);
                                                                                    q_27 = t;
                                                                                    t = SSL_implode_string(q_27);
                                                                                    e_28 = t;
                                                                                    t = SSL_explode_string(e_28);
                                                                                    h_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_28), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
                                                                                    t = conc_0_0(t);
                                                                                    z_27 = t;
                                                                                    t = SSL_implode_string(z_27);
                                                                                    d_49 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, e_45))), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), term_x_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, d_49))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      f_45 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm o_20 = t;
                                                                                        int p_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = c_51(h_45, f_45, e_45, g_45, t);
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
                                                                                                  t = d_51(h_45, f_45, e_45, g_45, t);
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
                                                                                                        t = e_51(h_45, f_45, e_45, g_45, t);
                                                                                                        LocalPopChoice(t_20);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = s_20;
                                                                                                        t = f_51(h_45, f_45, e_45, g_45, t);
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
                                                                                          f_45 = ATgetArgument(t, 0);
                                                                                          m_44 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, m_44, e_45)), (ATerm) ATmakeAppl(sym_Match_2, f_45, e_45)));
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
                                                                      h_45 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, h_45, term_d_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          h_45 = ATgetArgument(t, 0);
                                                                          e_45 = ATgetArgument(t, 1);
                                                                          b_45 = ATgetArgument(t, 2);
                                                                          t = h_45;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              f_45 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = e_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              d_45 = ATgetFirst((ATermList) t);
                                                                              a_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = d_45;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  u_44 = ATgetArgument(t, 0);
                                                                                  w_44 = ATgetArgument(t, 1);
                                                                                  z_44 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = u_44;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  v_44 = ATgetArgument(t, 0);
                                                                                  t_44 = ATgetArgument(t, 1);
                                                                                  t = w_44;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      n_44 = ATgetFirst((ATermList) t);
                                                                                      p_44 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = p_44;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          q_44 = ATgetFirst((ATermList) t);
                                                                                          s_44 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = s_44;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = q_44;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  r_44 = ATgetArgument(t, 0);
                                                                                                  t = n_44;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      o_44 = ATgetArgument(t, 0);
                                                                                                      t = t_44;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = v_44;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm x_20 = t;
                                                                                                              int y_20 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_45))), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_44), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_44), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, (ATerm) ATmakeAppl(sym_Id_1, f_45)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_44), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_19, (ATerm) ATmakeAppl(sym_Id_1, f_45)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_45), a_45, b_45))));
                                                                                                                  LocalPopChoice(y_20);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_20;
                                                                                                                  t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = v_44;
                                                                                                          t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_44;
                                                                                                      t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_44;
                                                                                                  t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_44;
                                                                                              t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_44;
                                                                                          t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = t_44;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = v_44;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm z_20 = t;
                                                                                                  int a_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_45))), term_d_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, z_44), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_45), a_45, b_45))));
                                                                                                      LocalPopChoice(a_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_20;
                                                                                                      t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_44;
                                                                                              t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_44;
                                                                                          t = g_51(f_45, v_44, t_44, w_44, z_44, a_45, b_45, g_45, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      v_44 = ATgetArgument(t, 0);
                                                                                      t = h_51(f_45, v_44, z_44, a_45, b_45, g_45, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          v_44 = ATgetArgument(t, 0);
                                                                                          t = i_51(f_45, v_44, z_44, a_45, b_45, g_45, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm k_50 = NULL,p_28 = NULL,x_28 = NULL,z_28 = NULL,i_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              v_44 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(v_44);
                                                                                          t = escape_chars_0_0(t);
                                                                                          i_28 = t;
                                                                                          t = SSL_implode_string(i_28);
                                                                                          x_28 = t;
                                                                                          t = SSL_explode_string(x_28);
                                                                                          z_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_28), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
                                                                                          t = conc_0_0(t);
                                                                                          p_28 = t;
                                                                                          t = SSL_implode_string(p_28);
                                                                                          k_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, k_50))), (ATerm) ATmakeAppl(sym_Id_1, f_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_44)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_45), a_45, b_45))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = b_45;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              h_45 = ATgetArgument(t, 0);
                                                                              e_45 = ATgetArgument(t, 1);
                                                                              b_45 = ATgetArgument(t, 2);
                                                                              c_45 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, h_45), (ATerm) ATmakeAppl(sym_Case_3, e_45, b_45, c_45));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  h_45 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, h_45));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      h_45 = ATgetArgument(t, 0);
                                                                                      e_45 = ATgetArgument(t, 1);
                                                                                      t = h_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          f_45 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = e_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          d_45 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm d_21 = t;
                                                                                            int e_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, f_45), term_b_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, f_45), (ATerm) ATmakeAppl(sym_Id_1, d_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_45), term_z_11, (ATerm) ATmakeAppl(sym_Id_1, d_45))));
                                                                                                LocalPopChoice(e_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_21;
                                                                                                t = j_51(f_45, e_45, g_45, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_51(f_45, e_45, g_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          h_45 = ATgetArgument(t, 0);
                                                                                          t = h_45;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              f_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_45), term_z_11, term_d_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm y_50 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              h_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_45;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          y_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_z_11, y_50));
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
      ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,j_8 = NULL;
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_51 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(j_21) != AT_INT) || (ATgetInt((ATermInt) j_21) != 34)))
                _fail(t);
              w_51 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_51), term_t_14), term_k_21);
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
          {
            ATerm y_51 = NULL,z_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_51 = ATgetFirst((ATermList) t);
                z_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_51;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_51), term_k_21), term_k_21);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_51), term_l_21), term_k_21);
              }
          }
        }
      v_51 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_51 = ATgetFirst((ATermList) t);
          t_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_51);
      r_51 = t;
      t = t_51;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      u_51 = t;
      t = (ATerm) ATinsert(CheckATermList(u_51), s_51);
      j_8 = t;
      t = SSLsetAnnotations(j_8, r_51);
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm l_52 = NULL,m_52 = NULL,q_52 = NULL;
        q_52 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_52 = ATgetFirst((ATermList) t);
            m_52 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm d_29 = NULL,g_29 = NULL,l_8 = NULL;
              t = SSLgetAnnotations(q_52);
              d_29 = t;
              t = m_52;
              t = escape_chars_0_0(t);
              g_29 = t;
              t = (ATerm) ATinsert(CheckATermList(g_29), l_52);
              l_8 = t;
              t = SSLsetAnnotations(l_8, d_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_52;
          }
      }
    }
  return(t);
}
static ATerm q_9 (ATerm c_1 (ATerm), ATerm h_1 (ATerm), ATerm d_1, ATerm i_1, ATerm b_1, ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_1, b_1);
  t = c_1(t);
  if(match_cons(t, sym__2))
    {
      v_52 = ATgetArgument(t, 0);
      t_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_1, t_52);
  t = h_1(t);
  if(match_cons(t, sym__2))
    {
      w_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_52), v_52), u_52);
  return(t);
}
ATerm thread_map_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm k_53 (ATerm t)
  {
    ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
    b_53 = t;
    if(match_cons(t, sym__2))
      {
        c_53 = ATgetArgument(t, 0);
        d_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = c_53;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_52 = ATgetFirst((ATermList) t);
        a_53 = (ATerm) ATgetNext((ATermList) t);
        t = b_53;
        t = q_9(h_117, k_53, z_52, a_53, d_53, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_53);
      }
    return(t);
  }
  t = k_53(t);
  return(t);
}
static ATerm b_57 (ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm y_54 = NULL,a_55 = NULL,b_55 = NULL,m_29 = NULL,n_29 = NULL,p_29 = NULL;
  t = i_54;
  {
    ATerm m_21 = t;
    if((PushChoice() == 0))
      {
        ATerm c_55 = NULL;
        c_55 = t;
        if(match_string(t, "Nil"))
          {
            t = c_55;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = c_55;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_21;
      }
  }
  t = j_54;
  t = map_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym__2, j_54, term_v_13);
  t = thread_map_1_0(k_2, t);
  if(match_cons(t, sym__2))
    {
      y_54 = ATgetArgument(t, 0);
      {
        ATerm n_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_54;
  t = foldr_3_0(l_2, m_2, n_2, t);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, b_55);
  n_29 = t;
  t = term_a_14;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym__2, i_54, b_55));
  t = u_9(p_29, n_29, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_21) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_54, (ATerm) ATinsert(ATempty, k_54));
  t = conc_0_0(t);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_29)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, a_55), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_54)));
  return(t);
}
static ATerm c_57 (ATerm n_55, ATerm o_55, ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm u_55 = NULL;
  t = SSL_real_to_string(n_55);
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, u_55)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_55)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_55)));
  return(t);
}
static ATerm d_57 (ATerm v_55, ATerm w_55, ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm c_56 = NULL;
  t = SSL_int_to_string(v_55);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_56)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_55)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_55)));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,o_8 = NULL;
  f_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_55);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_55);
  o_8 = t;
  t = SSLsetAnnotations(o_8, d_55);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if(match_cons(p_21, sym_Var_1))
        {
          g_55 = ATgetArgument(p_21, 0);
        }
      else
        _fail(t);
      h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(h_55);
  i_55 = t;
  t = term_w_13;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_55, term_w_13);
  t = h_10(h_55, k_55, t);
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_55), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, i_55)), term_d_11)))), j_55);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  if(match_cons(t, sym__2))
    {
      l_55 = ATgetArgument(t, 0);
      m_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(l_55, m_55, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  k_56 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      l_56 = ATgetArgument(t, 0);
      o_56 = ATgetArgument(t, 1);
      p_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_56;
  if(match_cons(t, sym_Match_1))
    {
      m_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_56;
  if(match_cons(t, sym_Op_2))
    {
      n_56 = ATgetArgument(t, 0);
      j_56 = ATgetArgument(t, 1);
      t = j_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_56 = ATgetFirst((ATermList) t);
          f_56 = (ATerm) ATgetNext((ATermList) t);
          t = f_56;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_56 = ATgetFirst((ATermList) t);
              i_56 = (ATerm) ATgetNext((ATermList) t);
              t = i_56;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_56;
                  if(match_cons(t, sym_Var_1))
                    {
                      h_56 = ATgetArgument(t, 0);
                      t = d_56;
                      if(match_cons(t, sym_Var_1))
                        {
                          e_56 = ATgetArgument(t, 0);
                          t = n_56;
                          if(match_string(t, "Cons"))
                            {
                              ATerm q_21 = t;
                              int r_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_d_11)), term_d_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, term_d_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_56), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_56), term_z_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, term_s_21)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_56), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATempty, term_s_21)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_56)));
                                  LocalPopChoice(r_21);
                                }
                              else
                                {
                                  t = q_21;
                                  t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                                }
                            }
                          else
                            {
                              t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                            }
                        }
                      else
                        {
                          t = n_56;
                          t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                        }
                    }
                  else
                    {
                      t = n_56;
                      t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                    }
                }
              else
                {
                  t = n_56;
                  t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                }
            }
          else
            {
              t = n_56;
              t = b_57(n_56, j_56, o_56, p_56, k_56, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = n_56;
              if(match_string(t, "Nil"))
                {
                  ATerm t_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_d_11)), term_d_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_20, (ATerm) ATinsert(ATempty, term_d_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_56)));
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = t_21;
                      t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                    }
                }
              else
                {
                  t = b_57(n_56, j_56, o_56, p_56, k_56, t);
                }
            }
          else
            {
              t = n_56;
              t = b_57(n_56, j_56, o_56, p_56, k_56, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          n_56 = ATgetArgument(t, 0);
          t = c_57(n_56, o_56, p_56, k_56, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              n_56 = ATgetArgument(t, 0);
              t = d_57(n_56, o_56, p_56, k_56, t);
            }
          else
            {
              ATerm z_56 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL,r_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  n_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(n_56);
              t = escape_chars_0_0(t);
              r_29 = t;
              t = SSL_implode_string(r_29);
              v_29 = t;
              t = SSL_explode_string(v_29);
              x_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_29), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
              t = conc_0_0(t);
              u_29 = t;
              t = SSL_implode_string(u_29);
              z_56 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, z_56))), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_56)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    t = topdown_1_0(b_104, t);
    return(t);
  }
  t = b_104(t);
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
  t = repeat_2_0(t_2, _id, t);
  return(t);
}
static ATerm t_2 (ATerm t)
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
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  y_57 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_57 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
      b_58 = ATgetArgument(t, 2);
      c_58 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
        t = z_57;
        t = is_local_function_0_0(t);
        t = a_58;
        t = map_1_0(TranslateVarDec_0_0, t);
        h_58 = t;
        t = b_58;
        t = map_1_0(TranslateVarDec_0_0, t);
        i_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
        t = conc_0_0(t);
        j_58 = t;
        t = c_58;
        t = topdown_1_0(p_2, t);
        k_58 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_g_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_57), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, j_58, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), term_v_18), k_58)));
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
          t = z_57;
          {
            ATerm i_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_22;
              }
          }
          t = a_58;
          t = map_1_0(TranslateVarDec_0_0, t);
          k_30 = t;
          t = b_58;
          t = map_1_0(TranslateVarDec_0_0, t);
          l_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_30, l_30);
          t = conc_0_0(t);
          m_30 = t;
          t = c_58;
          t = topdown_1_0(r_2, t);
          n_30 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_57), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, m_30, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), term_v_18), n_30)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_58;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_59 = ATgetFirst((ATermList) t);
          b_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_30 = NULL,b_31 = NULL,c_31 = NULL,r_8 = NULL;
            t = SSLgetAnnotations(z_58);
            y_30 = t;
            t = a_59;
            t = u_117(t);
            b_31 = t;
            t = b_59;
            t = filter_1_0(u_117, t);
            c_31 = t;
            t = (ATerm) ATinsert(CheckATermList(c_31), b_31);
            r_8 = t;
            t = SSLsetAnnotations(r_8, y_30);
            LocalPopChoice(o_22);
          }
        else
          {
            t = j_22;
            t = b_59;
            t = filter_1_0(u_117, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm h_59 = NULL;
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          h_59 = ATgetArgument(t, 0);
          {
            ATerm u_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_22);
      {
        ATerm j_59 = NULL;
        t = h_59;
        t = map_1_0(TranslateType_0_0, t);
        j_59 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_ParamList_1, j_59));
      }
    }
  else
    {
      t = s_22;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm v_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_w_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_59;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            q_59 = ATgetArgument(t, 0);
            {
              ATerm y_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_22);
        {
          ATerm t_59 = NULL;
          t = q_59;
          t = map_1_0(TranslateType_0_0, t);
          t_59 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_59), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, t_59)))));
        }
      }
    else
      {
        t = w_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm z_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_59), term_e_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      ATerm v_59 = NULL,w_59 = NULL;
      if(match_cons(t, sym__2))
        {
          v_59 = ATgetArgument(t, 0);
          w_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_59, w_59);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_59, w_59);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = SSL_gtr(v_59, w_59);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, v_59, w_59);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
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
  ATerm d_60 = NULL;
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_23, d_60);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_60, term_e_23);
  t = leq_0_0(t);
  t = d_60;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,v_8 = NULL;
  x_59 = t;
  t = SSL_explode_string(x_59);
  c_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_59 = ATgetFirst((ATermList) t);
      a_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  y_59 = t;
  t = z_59;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_23, z_59);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, z_59, term_i_23);
        t = leq_0_0(t);
        t = z_59;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATmakeAppl(sym__2, term_j_23, z_59);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, z_59, term_k_23);
        t = leq_0_0(t);
        t = z_59;
      }
  }
  t = a_60;
  t = Cons_2_0(a_3, h_3, t);
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), z_59);
  v_8 = t;
  t = SSLsetAnnotations(v_8, y_59);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  q_60 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      r_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
      t_60 = ATgetArgument(t, 2);
      {
        ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
        t = s_60;
        t = map_1_0(TranslateVarDec_0_0, t);
        y_60 = t;
        t = t_60;
        t = map_1_0(TranslateVarDec_0_0, t);
        z_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
        t = conc_0_0(t);
        a_61 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, a_61, (ATerm) ATinsert(ATempty, term_i_11)))))));
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
              r_60 = ATgetArgument(t, 0);
              s_60 = ATgetArgument(t, 1);
              t_60 = ATgetArgument(t, 2);
              {
                ATerm n_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(m_23);
          {
            ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
            t = s_60;
            t = map_1_0(TranslateVarDec_0_0, t);
            e_61 = t;
            t = t_60;
            t = map_1_0(TranslateVarDec_0_0, t);
            f_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_61, f_61);
            t = conc_0_0(t);
            g_61 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, g_61, (ATerm) ATinsert(ATempty, term_i_11)))))));
          }
        }
      else
        {
          t = l_23;
          if(match_cons(t, sym_SDefT_4))
            {
              r_60 = ATgetArgument(t, 0);
              s_60 = ATgetArgument(t, 1);
              t_60 = ATgetArgument(t, 2);
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
                ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
                t = r_60;
                t = is_local_function_0_0(t);
                t = s_60;
                t = map_1_0(TranslateVarDec_0_0, t);
                k_61 = t;
                t = t_60;
                t = map_1_0(TranslateVarDec_0_0, t);
                l_61 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
                t = conc_0_0(t);
                m_61 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_g_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, m_61, (ATerm) ATinsert(ATempty, term_i_11)))))));
                LocalPopChoice(q_23);
              }
            else
              {
                t = p_23;
                {
                  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
                  t = r_60;
                  {
                    ATerm z_23 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_23;
                      }
                  }
                  t = s_60;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  o_31 = t;
                  t = t_60;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  p_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
                  t = conc_0_0(t);
                  q_31 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, q_31, (ATerm) ATinsert(ATempty, term_i_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  if(match_cons(t, sym__2))
    {
      c_62 = ATgetArgument(t, 0);
      d_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(c_62, d_62, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm v_9 (ATerm t_37, ATerm r_37, ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,u_61 = NULL,w_61 = NULL,x_61 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,a_62 = NULL;
  t = r_37;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            a_62 = ATgetArgument(t, 0);
            {
              ATerm c_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_24);
        t = a_62;
        t = foldr_3_0(j_3, k_3, l_3, t);
      }
    else
      {
        t = a_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm d_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_v_13;
      }
  }
  s_61 = t;
  t = SSL_int_to_string(s_61);
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_37, s_61);
  a_32 = t;
  t = term_a_14;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATmakeAppl(sym__2, t_37, s_61));
  t = u_9(b_32, a_32, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm e_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_24) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      z_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(t_37);
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_61), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
  t = conc_0_0(t);
  x_61 = t;
  t = SSL_implode_string(x_61);
  u_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_31))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_31), term_z_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_24), (ATerm) ATmakeAppl(sym_IntConst_1, r_61)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, u_61)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_62 = ATgetFirst((ATermList) t);
      i_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_62;
  if(match_int(t, 95))
    {
      ATerm k_62 = NULL;
      t = i_62;
      t = v_0(t);
      k_62 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(k_62), term_j_24), term_j_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm m_62 = NULL;
          t = i_62;
          t = v_0(t);
          m_62 = t;
          t = (ATerm) ATinsert(CheckATermList(m_62), term_j_24);
        }
      else
        {
          ATerm o_62 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = i_62;
          t = v_0(t);
          o_62 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_62), term_j_24), term_k_24), term_j_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm b_120 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  s_62 = t;
  t = SSL_explode_string(s_62);
  {
    static ATerm e_63 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_120(e_63, t);
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
            d_63 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_63 = ATgetFirst((ATermList) t);
                c_63 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm g_32 = NULL,j_32 = NULL,a_9 = NULL;
                  t = SSLgetAnnotations(d_63);
                  g_32 = t;
                  t = c_63;
                  t = e_63(t);
                  j_32 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_32), b_63);
                  a_9 = t;
                  t = SSLsetAnnotations(a_9, g_32);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_63;
              }
          }
        }
      return(t);
    }
    t = e_63(t);
  }
  r_62 = t;
  t = SSL_implode_string(r_62);
  return(t);
}
ATerm foldr_3_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
  h_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_63;
      t = s_116(t);
    }
  else
    {
      ATerm m_63 = NULL,n_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_63 = ATgetFirst((ATermList) t);
          j_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_63;
      t = u_116(t);
      m_63 = t;
      t = j_63;
      t = foldr_3_0(s_116, t_116, u_116, t);
      n_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_63, n_63);
      t = t_116(t);
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL;
  if(match_cons(t, sym__2))
    {
      a_64 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(a_64, b_64, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm w_9 (ATerm g_37, ATerm f_37, ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,y_63 = NULL;
  t = f_37;
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            y_63 = ATgetArgument(t, 0);
            {
              ATerm p_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_24);
        t = y_63;
        t = foldr_3_0(m_3, n_3, o_3, t);
      }
    else
      {
        t = n_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm q_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_v_13;
      }
  }
  p_63 = t;
  t = g_37;
  t = escape_1_0(Cify_1_0, t);
  r_63 = t;
  t = SSL_int_to_string(p_63);
  s_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_63), term_s_24), r_63), term_r_24);
  v_63 = t;
  t = SSL_concat_strings(v_63);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, p_63);
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_24, q_63);
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_37, p_63), (ATerm) ATmakeAppl(sym_Defined_2, term_t_24, q_63));
  t = y_9(p_3, t_63, u_63, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_63), term_e_11)));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  d_64 = t;
  t = term_x_24;
  e_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, d_64);
  t = k_10(e_64, d_64, t);
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, c_64);
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
  ATerm u_64 = NULL,v_64 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(u_64, v_64, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(w_64, x_64, t);
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
  ATerm a_65 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      a_65 = ATgetArgument(t, 1);
      {
        ATerm g_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_65), term_e_11)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  if(match_cons(t, sym__3))
    {
      c_65 = ATgetArgument(t, 0);
      d_65 = ATgetArgument(t, 1);
      e_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_9(c_65, d_65, e_65, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  j_65 = t;
  if(match_cons(t, sym_Conc_2))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, h_65, i_65);
            t = conc_0_0(t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = j_65;
          }
      }
    }
  else
    {
      t = j_65;
    }
  return(t);
}
static ATerm x_9 (ATerm a_38, ATerm d_38, ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  q_64 = t;
  t = GenerateIncludes_0_0(t);
  i_64 = t;
  t = a_38;
  t = map_1_0(r_3, t);
  j_64 = t;
  t = a_38;
  t = map_1_0(s_3, t);
  t = concat_0_0(t);
  k_64 = t;
  t = d_38;
  t = map_1_0(SDefToDeclaration_0_0, t);
  l_64 = t;
  t = d_38;
  t = filter_1_0(t_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  m_64 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_64 = NULL,r_32 = NULL,s_32 = NULL;
        t = (ATerm) ATempty;
        r_32 = t;
        t = term_m_12;
        s_32 = t;
        t = term_r_12;
        t = u_9(s_32, r_32, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            y_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_64;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
  }
  t_64 = t;
  t = map_1_0(u_3, t);
  r_64 = t;
  t = t_64;
  t = map_1_0(v_3, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, w_3, t);
  s_64 = t;
  t = q_64;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_25;
        t = get_config_0_0(t);
        t = q_64;
        LocalPopChoice(n_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = m_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_25, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_v_25)))), term_r_19));
      }
  }
  n_64 = t;
  t = q_64;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_25;
        t = get_config_0_0(t);
        t = q_64;
        LocalPopChoice(x_25);
        t = (ATerm) ATinsert(ATempty, term_a_26);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATinsert(ATempty, term_c_26);
      }
  }
  o_64 = t;
  t = q_64;
  {
    ATerm d_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_25;
        t = get_config_0_0(t);
        t = q_64;
        LocalPopChoice(f_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = d_26;
        {
          ATerm g_65 = NULL;
          t = MainDef_0_0(t);
          g_65 = t;
          t = (ATerm) ATinsert(ATempty, g_65);
        }
      }
  }
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, i_64, n_64), j_64), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_g_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_v_25)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_64)))), r_64), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_g_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_v_25)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_64)))), o_64), l_64), p_64), m_64));
  t = bottomup_1_0(x_3, t);
  return(t);
}
static ATerm y_9 (ATerm g_133 (ATerm), ATerm i_73, ATerm g_73, ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  t = g_133(t);
  o_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_65, i_73, g_73);
  t = m_10(o_65, i_73, g_73, t);
  {
    ATerm y_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_65 = NULL;
        t = term_b_27;
        u_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_65, term_b_27);
        t = l_10(o_65, u_65, t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_65 = ATgetFirst((ATermList) t);
      q_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_27;
  s_65 = t;
  t = (ATerm) ATinsert(CheckATermList(q_65), (ATerm) ATinsert(CheckATermList(p_65), i_73));
  t_65 = t;
  t = SSL_table_put(o_65, s_65, t_65);
  t = r_65;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  t = term_h_27;
  w_65 = t;
  t = term_p_27;
  x_65 = t;
  t = term_v_27;
  t = y_9(y_3, w_65, x_65, t);
  t = v_65;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if(((ATgetType(w_27) == AT_LIST) && !(ATisEmpty(w_27))))
        {
          ATerm x_27 = ATgetFirst((ATermList) w_27);
          if(match_cons(x_27, sym_Signature_1))
            {
              ATerm a_28 = ATgetArgument(x_27, 0);
              if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
                {
                  ATerm b_28 = ATgetFirst((ATermList) a_28);
                  if(match_cons(b_28, sym_Constructors_1))
                    {
                      z_65 = ATgetArgument(b_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_28 = (ATerm) ATgetNext((ATermList) a_28);
                    if(((ATgetType(f_28) != AT_LIST) || !(ATisEmpty(f_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm y_27 = (ATerm) ATgetNext((ATermList) w_27);
            if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
              {
                ATerm l_28 = ATgetFirst((ATermList) y_27);
                if(match_cons(l_28, sym_Strategies_1))
                  {
                    a_66 = ATgetArgument(l_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm o_28 = (ATerm) ATgetNext((ATermList) y_27);
                  if(((ATgetType(o_28) != AT_LIST) || !(ATisEmpty(o_28))))
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
  t = x_9(z_65, a_66, t);
  t = listbottomup_1_0(z_3, t);
  return(t);
}
static ATerm a_10 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm c_66 = NULL;
  t = SSL_fputc(n_54, o_54);
  c_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_66);
  return(t);
}
static ATerm b_10 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm d_66 = NULL;
  t = SSL_write_term_to_stream_text(u_39, v_39);
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_66);
  return(t);
}
static ATerm d_10 (ATerm e_110 (ATerm), ATerm t_247, ATerm y_39, ATerm t)
{
  ATerm e_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_247, term_t_28);
  t = g_10(t);
  e_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_66, y_39);
  t = e_110(t);
  t = fclose_0_0(t);
  t = y_39;
  return(t);
}
static ATerm c_10 (ATerm q_39, ATerm r_39, ATerm t)
{
  ATerm f_66 = NULL;
  t = SSL_write_term_to_stream_baf(q_39, r_39);
  f_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_66);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(match_cons(y_28, sym_Stream_1))
        {
          i_66 = ATgetArgument(y_28, 0);
        }
      else
        _fail(t);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(i_66, j_66, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,s_66 = NULL,t_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if(match_cons(a_29, sym_Stream_1))
        {
          s_66 = ATgetArgument(a_29, 0);
        }
      else
        _fail(t);
      t_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(s_66, t_66, t);
  k_66 = t;
  t = term_b_29;
  l_66 = t;
  t = k_66;
  if(match_cons(t, sym_Stream_1))
    {
      m_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, k_66);
  t = a_10(l_66, m_66, t);
  return(t);
}
ATerm output_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  t = q_126(t);
  h_66 = t;
  {
    ATerm c_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_29;
        t = get_config_0_0(t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = c_29;
        t = term_h_29;
      }
  }
  g_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_66, h_66);
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_29;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, g_66, h_66);
        LocalPopChoice(j_29);
        if(match_cons(t, sym__2))
          {
            ATerm l_29 = ATgetArgument(t, 0);
            ATerm o_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_10(a_4, g_66, h_66, t);
      }
    else
      {
        t = i_29;
        if(match_cons(t, sym__2))
          {
            ATerm q_29 = ATgetArgument(t, 0);
            ATerm s_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_10(b_4, g_66, h_66, t);
      }
  }
  return(t);
}
static ATerm l_67 (ATerm b_67, ATerm t)
{
  t = SSL_fclose(b_67);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  j_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_67 = ATgetArgument(t, 0);
      {
        ATerm t_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_67);
            LocalPopChoice(w_29);
          }
        else
          {
            t = t_29;
            t = l_67(j_67, t);
          }
      }
    }
  else
    {
      t = l_67(j_67, t);
    }
  return(t);
}
static ATerm e_10 (ATerm w_39, ATerm t)
{
  t = SSL_read_term_from_stream(w_39);
  return(t);
}
static ATerm f_10 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm m_67 = NULL;
  t = SSL_fopen(p_54, q_54);
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_67);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_67 = NULL;
  t = SSL_stdin_stream();
  n_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_67);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_67 = NULL;
  t = SSL_stdout_stream();
  o_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_67);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_67 = NULL;
  t = SSL_stderr_stream();
  p_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_67);
  return(t);
}
static ATerm a_69 (ATerm x_67, ATerm t)
{
  ATerm y_67 = NULL;
  t = SSL_explode_term(x_67);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
          {
            y_67 = ATgetFirst((ATermList) z_29);
            {
              ATerm b_30 = (ATerm) ATgetNext((ATermList) z_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_67;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_67;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_67;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_67;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_69 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,j_68 = NULL,n_9 = NULL;
  t = SSLgetAnnotations(d_68);
  g_68 = t;
  t = b_68;
  if(match_cons(t, sym_Path_1))
    {
      j_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_68, c_68);
  n_9 = t;
  t = SSLsetAnnotations(n_9, g_68);
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(e_68, f_68, t);
  return(t);
}
static ATerm c_69 (ATerm l_68, ATerm m_68, ATerm n_68, ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,t_68 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(n_68);
  q_68 = t;
  t = SSL_is_string(l_68);
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_68, m_68);
  o_9 = t;
  t = SSLsetAnnotations(o_9, q_68);
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(o_68, p_68, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm v_68 = NULL,y_68 = NULL,z_68 = NULL;
  v_68 = t;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_69(v_68, t);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm f_30 = t;
              int g_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_69(y_68, z_68, v_68, t);
                  LocalPopChoice(g_30);
                }
              else
                {
                  t = f_30;
                  t = c_69(y_68, z_68, v_68, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_69(v_68, t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
  ATerm j_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_69 = NULL;
      g_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_69, term_q_30);
      t = g_10(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = j_30;
      t = debug_1_0(f_4, t);
      _fail(t);
    }
  e_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(f_69, t);
  d_69 = t;
  t = e_69;
  t = fclose_0_0(t);
  t = d_69;
  return(t);
}
ATerm input_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_30;
      t = get_config_0_0(t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      t = term_u_30;
    }
  t = ReadFromFile_0_0(t);
  t = r_126(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  i_69 = t;
  t = term_v_30;
  t = whoami_0_0(t);
  j_69 = t;
  t = term_w_30;
  l_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_30), j_69), term_x_30);
  m_69 = t;
  t = SSL_printnl(l_69, m_69);
  t = term_w_13;
  k_69 = t;
  t = SSL_exit(k_69);
  t = i_69;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  if(match_string(t, "-k"))
    {
      t = o_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_69;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  p_69 = t;
  t = SSL_string_to_int(p_69);
  q_69 = t;
  t = term_a_31;
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, q_69);
  t = o_10(r_69, q_69, t);
  t = p_69;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, l_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm t_69 = NULL;
  t_69 = t;
  if(match_string(t, "-S"))
    {
      t = t_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_69;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  t = term_e_31;
  u_69 = t;
  t = term_v_13;
  v_69 = t;
  t = term_f_31;
  t = o_10(u_69, v_69, t);
  t = term_g_31;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_h_31;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  w_69 = t;
  t = SSL_string_to_int(w_69);
  x_69 = t;
  t = term_e_31;
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, x_69);
  t = o_10(y_69, x_69, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_69);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_i_31;
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
  ATerm z_69 = NULL,a_70 = NULL;
  t = term_j_31;
  z_69 = t;
  t = term_v_30;
  a_70 = t;
  t = term_k_31;
  t = o_10(z_69, a_70, t);
  t = term_l_31;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, o_4, r_4, t);
      LocalPopChoice(r_31);
    }
  else
    {
      t = n_31;
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, v_4, w_4, t);
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            t = Option_3_0(x_4, b_5, c_5, t);
          }
      }
    }
  return(t);
}
static ATerm o_10 (ATerm r_73, ATerm s_73, ATerm t)
{
  ATerm b_70 = NULL;
  t = term_u_31;
  b_70 = t;
  t = SSL_table_put(b_70, r_73, s_73);
  t = (ATerm) ATmakeAppl(sym__3, term_u_31, r_73, s_73);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
      t = term_v_30;
      t = i_0(t);
      g_70 = t;
      t = term_v_31;
      h_70 = t;
      t = term_w_31;
      i_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_31, term_w_31, g_70);
      t = m_10(h_70, i_70, g_70, t);
      _fail(t);
    }
  else
    {
      ATerm l_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_70 = ATgetFirst((ATermList) t);
          f_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_70;
      t = d_0(t);
      t = term_v_30;
      t = g_0(t);
      l_70 = t;
      t = (ATerm) ATinsert(CheckATermList(f_70), l_70);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  if(match_string(t, "-o"))
    {
      t = n_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_70;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  o_70 = t;
  t = term_f_29;
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, o_70);
  t = o_10(p_70, o_70, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_70);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_70 = NULL;
  r_70 = t;
  if(match_string(t, "-i"))
    {
      t = r_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_70;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  s_70 = t;
  t = term_t_30;
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, s_70);
  t = o_10(t_70, s_70, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_70);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  static ATerm o_71 (ATerm t)
  {
    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
    n_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_71 = ATgetFirst((ATermList) t);
        m_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_33 = NULL,g_33 = NULL,s_9 = NULL;
          t = SSLgetAnnotations(n_71);
          d_33 = t;
          t = m_71;
          t = o_71(t);
          g_33 = t;
          t = (ATerm) ATinsert(CheckATermList(g_33), l_71);
          s_9 = t;
          t = SSLsetAnnotations(s_9, d_33);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_71;
        t = d_111(t);
      }
    return(t);
  }
  t = o_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_70;
    }
  else
    {
      static ATerm m_5 (ATerm t)
      {
        t = not_null(x_70);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_70 = ATgetFirst((ATermList) t);
          if(((x_70 != NULL) && (x_70 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_70;
      t = at_end_1_0(m_5, t);
    }
  return(t);
}
static ATerm k_72 (ATerm s_71, ATerm t)
{
  ATerm t_71 = NULL;
  t = SSL_explode_term(s_71);
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_71;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  x_71 = t;
  if(match_cons(t, sym__2))
    {
      v_71 = ATgetArgument(t, 0);
      w_71 = ATgetArgument(t, 1);
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_5 (ATerm t)
            {
              t = w_71;
              return(t);
            }
            t = v_71;
            t = at_end_1_0(p_5, t);
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            t = k_72(x_71, t);
          }
      }
    }
  else
    {
      t = k_72(x_71, t);
    }
  return(t);
}
static ATerm z_9 (ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm l_72 = NULL,t_72 = NULL,u_72 = NULL;
  t = y_73;
  {
    ATerm f_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = f_32;
        t = (ATerm) ATempty;
      }
  }
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_72, z_73);
  t = conc_0_0(t);
  l_72 = t;
  t = term_u_31;
  u_72 = t;
  t = SSL_table_put(u_72, y_73, l_72);
  t = (ATerm) ATmakeAppl(sym__3, term_u_31, y_73, l_72);
  return(t);
}
static ATerm m_10 (ATerm f_67, ATerm g_67, ATerm e_67, ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL;
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_67, g_67);
  {
    ATerm i_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_32 = ATgetArgument(t, 0);
            ATerm m_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_67, g_67);
        t = l_10(f_67, g_67, t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = i_32;
        t = (ATerm) ATempty;
      }
  }
  x_72 = t;
  t = (ATerm) ATinsert(CheckATermList(x_72), e_67);
  y_72 = t;
  t = SSL_table_put(f_67, g_67, y_72);
  t = w_72;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm f_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_73 = NULL,q_73 = NULL,t_73 = NULL;
      t = term_v_30;
      t = t_0(t);
      p_73 = t;
      t = term_v_31;
      q_73 = t;
      t = term_w_31;
      t_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_31, term_w_31, p_73);
      t = m_10(q_73, t_73, p_73, t);
      _fail(t);
    }
  else
    {
      ATerm x_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_73 = ATgetFirst((ATermList) t);
          l_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_73;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_73 = ATgetFirst((ATermList) t);
          n_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_73;
      t = p_0(t);
      t = m_73;
      t = r_0(t);
      x_73 = t;
      t = (ATerm) ATinsert(CheckATermList(n_73), x_73);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  t = term_y_24;
  h_74 = t;
  t = (ATerm) ATinsert(ATempty, g_74);
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, (ATerm) ATinsert(ATempty, g_74));
  t = z_9(h_74, i_74, t);
  t = g_74;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_o_32;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm j_74 = NULL;
  j_74 = t;
  if(match_string(t, "--library"))
    {
      t = j_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = j_74;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  t = term_o_25;
  l_74 = t;
  t = term_v_30;
  m_74 = t;
  t = term_p_32;
  t = o_10(l_74, m_74, t);
  t = k_74;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(q_5, s_5, t_5, t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      t = Option_3_0(w_5, x_5, c_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_30;
  t = whoami_0_0(t);
  n_74 = t;
  t = term_w_30;
  p_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_32), n_74);
  q_74 = t;
  t = SSL_printnl(p_74, q_74);
  t = term_w_13;
  o_74 = t;
  t = SSL_exit(o_74);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm h_10 (ATerm i_57, ATerm j_57, ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_57, j_57);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      t = SSL_addr(i_57, j_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_74;
      t = q_116(t);
    }
  else
    {
      ATerm x_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_74 = ATgetFirst((ATermList) t);
          u_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_74;
      t = foldr_2_0(q_116, r_116, t);
      x_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_74, x_74);
      t = r_116(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(t_33, u_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_75 = NULL,m_33 = NULL,q_33 = NULL;
  t = times_0_0(t);
  q_33 = t;
  t = SSL_explode_term(q_33);
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_33;
  t = foldr_2_0(e_6, f_6, t);
  a_75 = t;
  t = SSL_TicksToSeconds(a_75);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  if(match_cons(t, sym__2))
    {
      m_75 = ATgetArgument(t, 0);
      n_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_75;
        if((m_75 != t))
          {
            _fail(t);
          }
        t = l_75;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATmakeAppl(sym__2, m_75, n_75);
        {
          ATerm c_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_75, n_75);
              LocalPopChoice(e_33);
            }
          else
            {
              t = c_33;
              t = SSL_gtr(m_75, n_75);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_75, n_75);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm r_75 = NULL;
  r_75 = t;
  {
    ATerm f_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_75 = NULL;
        t = term_e_31;
        t = get_config_0_0(t);
        t_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_75, term_w_13);
        t = geq_0_0(t);
        t = r_75;
        t = t_124(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = f_33;
        t = r_75;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,y_75 = NULL,z_75 = NULL;
  t = run_time_0_0(t);
  v_75 = t;
  t = term_v_30;
  t = whoami_0_0(t);
  w_75 = t;
  t = term_w_30;
  y_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_33), v_75), term_i_33), w_75);
  z_75 = t;
  t = SSL_printnl(y_75, z_75);
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_33), v_75), term_i_33), w_75));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_13;
  a_76 = t;
  t = SSL_exit(a_76);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL;
  j_76 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_76;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_76 = ATgetArgument(t, 0);
          {
            ATerm g_34 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(j_76);
            g_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_76);
            i_10 = t;
            t = SSLsetAnnotations(i_10, g_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_76;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm k_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_33;
      t = get_config_0_0(t);
      LocalPopChoice(r_33);
    }
  else
    {
      t = k_33;
      t = fetch_1_0(j_6, t);
    }
  t = h_126(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_76 = ATgetFirst((ATermList) t);
      n_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_76 = NULL,s_76 = NULL;
        static ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_76)), not_null(s_76));
          return(t);
        }
        t = n_76;
        t = n_0(t);
        if(((r_76 != NULL) && (r_76 != t)))
          _fail(t);
        else
          r_76 = t;
        t = m_76;
        t = k_0(t);
        if(((s_76 != NULL) && (s_76 != t)))
          _fail(t);
        else
          s_76 = t;
        t = n_76;
        t = reverse_acc_2_0(k_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_30;
      t = n_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL,n_10 = NULL;
  y_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_76);
  w_76 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_76);
  n_10 = t;
  t = SSLsetAnnotations(n_10, w_76);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm a_77 = NULL;
  a_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_77), term_v_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL;
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_32;
      t = get_config_0_0(t);
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      t = fetch_1_0(l_6, t);
    }
  t = term_y_33;
  t = echo_0_0(t);
  t = term_v_31;
  u_76 = t;
  t = term_w_31;
  v_76 = t;
  t = term_z_33;
  t = l_10(u_76, v_76, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  static ATerm x_77 (ATerm t)
  {
    ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
    u_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_77 = ATgetFirst((ATermList) t);
        w_77 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_34 = NULL,r_34 = NULL,q_10 = NULL;
          t = SSLgetAnnotations(u_77);
          o_34 = t;
          t = v_77;
          t = x_110(t);
          r_34 = t;
          t = (ATerm) ATinsert(CheckATermList(w_77), r_34);
          q_10 = t;
          t = SSLsetAnnotations(q_10, o_34);
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm z_34 = NULL,c_35 = NULL,r_10 = NULL;
            t = SSLgetAnnotations(u_77);
            z_34 = t;
            t = w_77;
            t = x_77(t);
            c_35 = t;
            t = (ATerm) ATinsert(CheckATermList(c_35), v_77);
            r_10 = t;
            t = SSLsetAnnotations(r_10, z_34);
          }
        }
    }
    return(t);
  }
  t = x_77(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_78;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_34 = ATgetFirst((ATermList) t);
                ATerm f_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_78;
          }
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = (ATerm) ATinsert(ATempty, b_78);
      }
  }
  c_78 = t;
  t = term_h_29;
  d_78 = t;
  t = SSL_printnl(d_78, c_78);
  t = b_78;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm h_53, ATerm i_53, ATerm t)
{
  t = SSL_strcat(h_53, i_53);
  return(t);
}
ATerm debug_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  h_78 = t;
  t = c_110(t);
  i_78 = t;
  t = term_w_30;
  j_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_78), i_78);
  k_78 = t;
  t = SSL_printnl(j_78, k_78);
  t = h_78;
  return(t);
}
ATerm map_1_0 (ATerm n_110 (ATerm), ATerm t)
{
  static ATerm z_78 (ATerm t)
  {
    ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
    w_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_78;
      }
    else
      {
        ATerm k_35 = NULL,n_35 = NULL,o_35 = NULL,x_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_78 = ATgetFirst((ATermList) t);
            y_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_78);
        k_35 = t;
        t = x_78;
        t = n_110(t);
        n_35 = t;
        t = y_78;
        t = z_78(t);
        o_35 = t;
        t = (ATerm) ATinsert(CheckATermList(o_35), n_35);
        x_10 = t;
        t = SSLsetAnnotations(x_10, k_35);
      }
    return(t);
  }
  t = z_78(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_79 = NULL;
      h_79 = t;
      t = SSL_is_string(h_79);
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_6, t);
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
              n_79 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_79 = ATgetArgument(t, 0);
                  t = o_79;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_79 = ATgetArgument(t, 0);
                      t = o_79;
                      {
                        ATerm p_34 = t;
                        int q_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(q_34);
                          }
                        else
                          {
                            t = p_34;
                            t = debug_1_0(s_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_79 = NULL,u_79 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_79 = ATgetArgument(t, 0);
                          p_79 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_79;
                      t = eval_config_0_0(t);
                      t_79 = t;
                      t = p_79;
                      t = eval_config_0_0(t);
                      u_79 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_79, u_79);
                      t = k_10(t_79, u_79, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_10 (ATerm w_68, ATerm x_68, ATerm t)
{
  t = SSL_table_get(w_68, x_68);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL;
  y_79 = t;
  t = term_u_31;
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_31, y_79);
  t = l_10(z_79, y_79, t);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_80 = NULL,b_80 = NULL;
        t = eval_config_0_0(t);
        a_80 = t;
        t = term_u_31;
        b_80 = t;
        t = SSL_table_put(b_80, y_79, a_80);
        t = a_80;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL;
  t = term_u_34;
  e_80 = t;
  t = term_v_30;
  f_80 = t;
  t = term_v_34;
  t = o_10(e_80, f_80, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_w_34;
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
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
  t = term_u_34;
  i_80 = t;
  t = term_v_30;
  j_80 = t;
  t = term_v_34;
  t = o_10(i_80, j_80, t);
  t = term_x_34;
  g_80 = t;
  t = term_v_30;
  h_80 = t;
  t = term_y_34;
  t = o_10(g_80, h_80, t);
  t = term_a_35;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_b_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_6, y_6, a_7, t);
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      t = Option_3_0(b_7, c_7, h_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,a_11 = NULL;
  p_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_80 = ATgetFirst((ATermList) t);
      m_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_80);
  k_80 = t;
  t = l_80;
  t = u_82(t);
  n_80 = t;
  t = m_80;
  t = v_82(t);
  o_80 = t;
  t = (ATerm) ATinsert(CheckATermList(o_80), n_80);
  a_11 = t;
  t = SSLsetAnnotations(a_11, k_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_128 (ATerm), ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,z_80 = NULL,a_81 = NULL,p_11 = NULL;
  u_80 = t;
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_35;
        t = y_128(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
      }
  }
  t = u_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_80 = ATgetFirst((ATermList) t);
      x_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_80);
  v_80 = t;
  t = term_w_32;
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_32, w_80);
  t = o_10(a_81, w_80, t);
  t = x_80;
  {
    static ATerm k_81 (ATerm t)
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_35 = t;
          int m_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_81 = NULL;
              d_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_81;
              LocalPopChoice(m_35);
            }
          else
            {
              t = l_35;
              t = y_128(t);
              t = Cons_2_0(_id, k_81, t);
            }
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          {
            ATerm g_81 = NULL,h_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_81 = ATgetFirst((ATermList) t);
                h_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_81), (ATerm) ATmakeAppl(sym_Undefined_1, g_81));
          }
        }
      return(t);
    }
    t = k_81(t);
  }
  z_80 = t;
  t = (ATerm) ATinsert(CheckATermList(z_80), (ATerm) ATmakeAppl(sym_Program_1, w_80));
  p_11 = t;
  t = SSLsetAnnotations(p_11, v_80);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm w_81 = NULL;
  w_81 = t;
  if(match_string(t, "--help"))
    {
      t = w_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_81;
        }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL;
  t = term_s_33;
  x_81 = t;
  t = term_v_30;
  y_81 = t;
  t = term_p_35;
  t = o_10(x_81, y_81, t);
  t = term_q_35;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_128 (ATerm), ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  r_81 = t;
  t = term_v_31;
  t_81 = t;
  t = term_w_31;
  u_81 = t;
  t = (ATerm) ATempty;
  v_81 = t;
  t = SSL_table_put(t_81, u_81, v_81);
  t = r_81;
  {
    static ATerm i_7 (ATerm t)
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_128(t);
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, l_7, m_7, t);
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
  }
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_82 = NULL;
        f_82 = t;
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_36 = NULL;
              t = f_82;
              {
                ATerm a_36 = t;
                int c_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_36);
                  }
                else
                  {
                    t = a_36;
                    t = fetch_1_0(n_7, t);
                  }
              }
              t = f_82;
              t = default_system_usage_0_0(t);
              t = term_v_13;
              e_36 = t;
              t = SSL_exit(e_36);
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
              {
                ATerm j_36 = NULL;
                t = term_u_34;
                t = get_config_0_0(t);
                t = f_82;
                t = default_system_about_0_0(t);
                t = term_v_13;
                j_36 = t;
                t = SSL_exit(j_36);
              }
            }
        }
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        {
          ATerm d_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
              static ATerm q_7 (ATerm t)
              {
                ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,r_11 = NULL;
                l_82 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_82);
                j_82 = t;
                t = k_82;
                if(((p_81 != NULL) && (p_81 != t)))
                  _fail(t);
                else
                  p_81 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_82);
                r_11 = t;
                t = SSLsetAnnotations(r_11, j_82);
                return(t);
              }
              t = fetch_1_0(q_7, t);
              t = term_w_30;
              h_82 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_81)), term_g_36);
              i_82 = t;
              t = SSL_printnl(h_82, i_82);
              t = (ATerm) ATmakeAppl(sym__2, term_w_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_81)), term_g_36));
              t = default_system_usage_0_0(t);
              t = term_w_13;
              g_82 = t;
              t = SSL_exit(g_82);
              LocalPopChoice(f_36);
            }
          else
            {
              t = d_36;
            }
        }
      }
  }
  q_81 = t;
  t = term_v_31;
  s_81 = t;
  t = SSL_table_destroy(s_81);
  t = q_81;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL;
  t = parse_options_1_0(j_126, t);
  q_82 = t;
  t = term_h_36;
  t_82 = t;
  t = SSL_table_create(t_82);
  t = term_h_36;
  r_82 = t;
  t = term_k_36;
  s_82 = t;
  t = SSL_table_put(r_82, s_82, q_82);
  t = q_82;
  t = l_126(t);
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_126, t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_126(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_36);
            }
          else
            {
              t = n_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
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
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
                  LocalPopChoice(v_36);
                }
              else
                {
                  t = u_36;
                  {
                    ATerm w_36 = t;
                    int x_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, b_8, t);
                        LocalPopChoice(x_36);
                      }
                    else
                      {
                        t = w_36;
                        {
                          ATerm y_36 = t;
                          int z_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_36);
                            }
                          else
                            {
                              t = y_36;
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
  ATerm x_82 = NULL,y_82 = NULL;
  t = term_k_29;
  x_82 = t;
  t = term_v_30;
  y_82 = t;
  t = term_a_37;
  t = o_10(x_82, y_82, t);
  t = term_b_37;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_7, default_usage_0_0, _id, u_7, t);
  return(t);
}
