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
}
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_c_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_n_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_o_28;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_q_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_k_20;
ATerm term_j_20;
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
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
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
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
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
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_t_11;
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
ATerm term_y_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_10, (ATerm) ATempty);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Id_1, term_p_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Id_1, term_t_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_10, term_z_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Some_1, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_10, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Id_1, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_11, (ATerm) ATempty);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Id_1, term_o_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Return_1, term_y_10);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Id_1, term_a_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATempty);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_10, term_z_10);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Id_1, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Id_1, term_z_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Id_1, term_f_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Id_1, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Id_1, term_z_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Id_1, term_i_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, term_j_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Id_1, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Id_1, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_16, (ATerm) ATempty);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_16, term_z_10);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Id_1, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Id_1, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_16, (ATerm) ATempty);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_u_16, term_z_10);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Id_1, term_x_16);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Id_1, term_k_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_16);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Stat_1, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_10);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Id_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATempty);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Equal_2, term_w_18, term_u_14);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Id_1, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATempty);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_1, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATempty);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_e_19, term_u_14);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Id_1, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Id_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_u_19, (ATerm) ATempty);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_v_19, term_z_10);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Id_1, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_1, term_b_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_20, term_z_10);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Id_1, term_y_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_19, term_y_10);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_e_22, (ATerm)ATempty, term_l_10, (ATerm) ATempty);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Id_1, term_d_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Id_1, term_f_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_TypeId_1, term_s_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_t_24, (ATerm) ATempty);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_w_24);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_25, (ATerm) ATempty);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Id_1, term_s_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_r_25, term_z_10);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Include_1, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Include_1, term_c_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_e_22, (ATerm)ATempty, term_q_25, (ATerm) ATempty);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Id_1, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Id_1, term_v_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Op_2, term_f_27, (ATerm) ATempty);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_27, term_o_15);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_o_27);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_f_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_o_29);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_u_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_s_13);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_13);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_y_30);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_y_30);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_y_32);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_g_31);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_a_32);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_o_34, term_y_30);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_y_30);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_y_30);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_o_34);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_y_30);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm c_136 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm a_9 (ATerm x_28, ATerm z_28, ATerm y_28, ATerm t);
static ATerm o_9 (ATerm g_68, ATerm h_68, ATerm t);
static ATerm y_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm c_9 (ATerm j_28, ATerm m_28, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm d_9 (ATerm s_33, ATerm r_33, ATerm t);
static ATerm e_9 (ATerm h_176, ATerm o_33, ATerm q_33, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm x_51 (ATerm o_26, ATerm p_26, ATerm s_26, ATerm x_26, ATerm t);
static ATerm y_51 (ATerm w_28, ATerm q_29, ATerm r_29, ATerm t);
static ATerm z_51 (ATerm r_30, ATerm o_32, ATerm p_32, ATerm t);
static ATerm a_52 (ATerm s_36, ATerm h_37, ATerm m_37, ATerm n_37, ATerm t);
static ATerm b_52 (ATerm l_38, ATerm m_38, ATerm p_38, ATerm q_38, ATerm t);
static ATerm c_52 (ATerm w_38, ATerm x_38, ATerm a_39, ATerm b_39, ATerm t);
static ATerm d_52 (ATerm j_39, ATerm k_39, ATerm l_39, ATerm m_39, ATerm t);
static ATerm e_52 (ATerm i_40, ATerm j_40, ATerm q_40, ATerm s_40, ATerm t_40, ATerm u_40, ATerm z_40, ATerm a_41, ATerm t);
static ATerm f_52 (ATerm a_42, ATerm d_42, ATerm e_42, ATerm f_42, ATerm g_42, ATerm h_42, ATerm t);
static ATerm g_52 (ATerm v_42, ATerm w_42, ATerm a_43, ATerm b_43, ATerm c_43, ATerm g_43, ATerm t);
static ATerm h_52 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm t);
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
static ATerm k_9 (ATerm x_0 (ATerm), ATerm c_1 (ATerm), ATerm z_0, ATerm d_1, ATerm v_0, ATerm t);
ATerm thread_map_1_0 (ATerm g_120 (ATerm), ATerm t);
static ATerm e_58 (ATerm q_55, ATerm r_55, ATerm s_55, ATerm t_55, ATerm u_55, ATerm t);
static ATerm f_58 (ATerm o_56, ATerm p_56, ATerm q_56, ATerm r_56, ATerm t);
static ATerm g_58 (ATerm w_56, ATerm x_56, ATerm y_56, ATerm z_56, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_120 (ATerm), ATerm t);
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
static ATerm p_9 (ATerm w_37, ATerm u_37, ATerm t);
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm a_123 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_9 (ATerm j_37, ATerm i_37, ATerm t);
static ATerm q_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm r_9 (ATerm d_38, ATerm g_38, ATerm t);
static ATerm s_9 (ATerm m_136 (ATerm), ATerm z_74, ATerm x_74, ATerm t);
static ATerm y_3 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm u_9 (ATerm c_55, ATerm d_55, ATerm t);
static ATerm v_9 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm x_9 (ATerm p_112 (ATerm), ATerm o_251, ATerm d_40, ATerm t);
static ATerm w_9 (ATerm t_39, ATerm u_39, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_1_0 (ATerm p_129 (ATerm), ATerm t);
static ATerm a_69 (ATerm u_68, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_9 (ATerm z_39, ATerm t);
static ATerm z_9 (ATerm v_53, ATerm w_53, ATerm t);
static ATerm a_10 (ATerm e_55, ATerm f_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_70 (ATerm k_69, ATerm t);
static ATerm o_70 (ATerm q_69, ATerm r_69, ATerm s_69, ATerm t);
static ATerm p_70 (ATerm a_70, ATerm b_70, ATerm c_70, ATerm t);
static ATerm b_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_129 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_10 (ATerm e_76, ATerm f_76, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_74 (ATerm n_73, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_9 (ATerm l_76, ATerm m_76, ATerm t);
static ATerm g_10 (ATerm v_67, ATerm w_67, ATerm u_67, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_10 (ATerm y_57, ATerm z_57, ATerm t);
ATerm foldr_2_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm need_help_1_0 (ATerm g_129 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_113 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_10 (ATerm m_69, ATerm n_69, ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_131 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm w_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm l_129 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm w_2 (ATerm), ATerm t)
{
  ATerm w_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_0 = NULL,w_0 = NULL,s_0 = NULL;
      n_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_1 = ATgetFirst((ATermList) t);
          p_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_1);
      q_0 = t;
      t = p_1;
      t = listbu1_1_0(w_2, t);
      w_0 = t;
      t = (ATerm) ATinsert(CheckATermList(w_0), o_1);
      s_0 = t;
      t = SSLsetAnnotations(s_0, q_0);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_2(t);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
          }
      }
      LocalPopChoice(y_7);
    }
  else
    {
      t = w_7;
      t = w_2(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_8 = ATgetFirst((ATermList) t);
      if(match_cons(e_8, sym_Compound_2))
        {
          ATerm f_8 = ATgetArgument(e_8, 0);
          if(((ATgetType(f_8) != AT_LIST) || !(ATisEmpty(f_8))))
            _fail(t);
          d_4 = ATgetArgument(e_8, 1);
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
      ATerm g_8 = ATgetFirst((ATermList) t);
      if(match_cons(g_8, sym_Compound_2))
        {
          ATerm i_8 = ATgetArgument(g_8, 0);
          if(((ATgetType(i_8) != AT_LIST) || !(ATisEmpty(i_8))))
            _fail(t);
          z_4 = ATgetArgument(g_8, 1);
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
  ATerm e_5 = NULL,f_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_8 = ATgetFirst((ATermList) t);
      if(match_cons(k_8, sym_Compound_2))
        {
          ATerm m_8 = ATgetArgument(k_8, 0);
          if(((ATgetType(m_8) != AT_LIST) || !(ATisEmpty(m_8))))
            _fail(t);
          e_5 = ATgetArgument(k_8, 1);
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
static ATerm r_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_8 = ATgetFirst((ATermList) t);
      if(match_cons(o_8, sym_Compound_2))
        {
          ATerm p_8 = ATgetArgument(o_8, 0);
          if(((ATgetType(p_8) != AT_LIST) || !(ATisEmpty(p_8))))
            _fail(t);
          u_5 = ATgetArgument(o_8, 1);
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
  ATerm z_5 = NULL,a_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_8 = ATgetFirst((ATermList) t);
      if(match_cons(q_8, sym_Compound_2))
        {
          ATerm r_8 = ATgetArgument(q_8, 0);
          if(((ATgetType(r_8) != AT_LIST) || !(ATisEmpty(r_8))))
            _fail(t);
          z_5 = ATgetArgument(q_8, 1);
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
  ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
      u_2 = ATgetArgument(t, 2);
      t = u_2;
      if(match_cons(t, sym_Compound_2))
        {
          v_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          t = x_2;
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
              y_2 = ATgetArgument(t, 0);
              t = y_2;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = c_3;
            }
          else
            {
              if(match_cons(t, sym_Compound_2))
                {
                  y_2 = ATgetArgument(t, 0);
                  z_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_2;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, z_2, c_3);
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
                        ATerm t_8 = t;
                        int v_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_4 = NULL;
                            t = c_3;
                            t = listbu1_1_0(a_0, t);
                            c_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, c_4);
                            LocalPopChoice(v_8);
                          }
                        else
                          {
                            t = t_8;
                            {
                              ATerm w_8 = t;
                              int x_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                                  t = conc_0_0(t);
                                  m_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, m_4, f_3);
                                  LocalPopChoice(x_8);
                                }
                              else
                                {
                                  t = w_8;
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
                      t = listbu1_1_0(m_0, t);
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
                        ATerm z_8 = t;
                        int b_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_5 = NULL;
                            t = c_3;
                            t = listbu1_1_0(o_0, t);
                            d_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, d_5);
                            LocalPopChoice(b_9);
                          }
                        else
                          {
                            t = z_8;
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
                      t = listbu1_1_0(r_0, t);
                      r_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, r_5);
                    }
                }
            }
          else
            {
              ATerm y_5 = NULL;
              t = c_3;
              t = listbu1_1_0(t_0, t);
              y_5 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, y_5);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm i_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_105(t);
        t = b_6(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = i_9;
        t = n_105(t);
      }
    return(t);
  }
  t = b_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  static ATerm h_7 (ATerm t)
  {
    t = c_136(t);
    {
      ATerm n_9 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,a_1 = NULL;
          e_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_7 = ATgetFirst((ATermList) t);
              g_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_7);
          w_1 = t;
          t = f_7;
          t = h_7(t);
          z_1 = t;
          t = g_7;
          t = h_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          a_1 = t;
          t = SSLsetAnnotations(a_1, w_1);
          LocalPopChoice(h_10);
        }
      else
        {
          t = n_9;
          t = SRTS_all(h_7, t);
        }
    }
    t = c_136(t);
    return(t);
  }
  t = h_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    t = bottomup_1_0(n_106, t);
    return(t);
  }
  t = SRTS_all(u_0, t);
  t = n_106(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_r_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_e_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_11), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_11, (ATerm) ATinsert(ATempty, term_y_10))))), term_k_11)));
  return(t);
}
static ATerm a_9 (ATerm x_28, ATerm z_28, ATerm y_28, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, z_28)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_28), term_l_11, y_28)));
  return(t);
}
static ATerm o_9 (ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm k_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_68, h_68);
  t = f_10(g_68, h_68, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_7 = ATgetFirst((ATermList) t);
      {
        ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
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
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym_Op_2))
    {
      w_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(v_10);
        i_2 = t;
        t = w_10;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = x_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, w_10, x_10);
        h_1 = t;
        t = SSLsetAnnotations(h_1, i_2);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        {
          ATerm f_12 = t;
          int g_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,p_4 = NULL,q_4 = NULL,j_1 = NULL,i_1 = NULL;
              t = SSLgetAnnotations(v_10);
              s_2 = t;
              t = w_10;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = x_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_4 = ATgetFirst((ATermList) t);
                  k_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_10);
              i_4 = t;
              t = k_4;
              t = Cons_2_0(proper_list_0_0, y_0, t);
              p_4 = t;
              t = (ATerm) ATinsert(CheckATermList(p_4), j_4);
              i_1 = t;
              t = SSLsetAnnotations(i_1, i_4);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_10, q_4);
              j_1 = t;
              t = SSLsetAnnotations(j_1, s_2);
              LocalPopChoice(g_12);
            }
          else
            {
              t = f_12;
              {
                ATerm d_6 = NULL,g_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(v_10);
                d_6 = t;
                t = w_10;
                {
                  ATerm h_12 = t;
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
                      t = h_12;
                    }
                }
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_6, x_10);
                k_1 = t;
                t = SSLsetAnnotations(k_1, d_6);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_i_12;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_j_12;
  return(t);
}
static ATerm c_9 (ATerm j_28, ATerm m_28, ATerm t)
{
  ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,l_13 = NULL,n_13 = NULL;
  t = j_28;
  if(match_cons(t, sym_Op_2))
    {
      n_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
      {
        ATerm q_6 = NULL,u_6 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(j_28);
        q_6 = t;
        t = l_13;
        t = map_1_0(Cache_0_0, t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, n_13, u_6);
        m_6 = t;
        t = SSLsetAnnotations(m_6, q_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          n_13 = ATgetArgument(t, 0);
          l_13 = ATgetArgument(t, 1);
          {
            ATerm m_7 = NULL,s_7 = NULL,t_7 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(j_28);
            m_7 = t;
            t = n_13;
            t = Cache_0_0(t);
            s_7 = t;
            t = l_13;
            t = Cache_0_0(t);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, s_7, t_7);
            r_6 = t;
            t = SSLsetAnnotations(r_6, m_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              n_13 = ATgetArgument(t, 0);
              {
                ATerm x_7 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(j_28);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, n_13);
                v_6 = t;
                t = SSLsetAnnotations(v_6, x_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  n_13 = ATgetArgument(t, 0);
                  {
                    ATerm j_8 = NULL,x_6 = NULL;
                    t = SSLgetAnnotations(j_28);
                    j_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, n_13);
                    x_6 = t;
                    t = SSLsetAnnotations(x_6, j_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      n_13 = ATgetArgument(t, 0);
                      {
                        ATerm s_8 = NULL,y_6 = NULL;
                        t = SSLgetAnnotations(j_28);
                        s_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, n_13);
                        y_6 = t;
                        t = SSLsetAnnotations(y_6, s_8);
                      }
                    }
                  else
                    {
                      ATerm y_8 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          n_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_28);
                      y_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, n_13);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, y_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  r_11 = t;
  t = term_k_12;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, r_11);
  t = z_9(z_11, r_11, t);
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_12, u_11);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_28, (ATerm) ATmakeAppl(sym_Defined_2, term_l_12, u_11));
  t = s_9(b_1, j_28, y_11, t);
  t = u_11;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,f_9 = NULL,g_9 = NULL;
        t = (ATerm) ATempty;
        f_9 = t;
        t = term_j_12;
        g_9 = t;
        t = term_o_12;
        t = o_9(g_9, f_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_12) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            o_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_13;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATempty;
      }
  }
  v_11 = t;
  t = (ATerm) ATempty;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_12, (ATerm) ATinsert(CheckATermList(v_11), (ATerm) ATmakeAppl(sym__3, r_11, u_11, m_28)));
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_12, (ATerm) ATinsert(CheckATermList(v_11), (ATerm) ATmakeAppl(sym__3, r_11, u_11, m_28))));
  t = s_9(e_1, w_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, u_11);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL,f_11 = NULL;
        t = term_i_12;
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_12, r_14);
        t = o_9(f_11, r_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, c_11);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
          ATerm j_11 = NULL,m_11 = NULL;
          t = term_i_12;
          m_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_12, r_14);
          t = o_9(m_11, r_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("b_0", 0, ATtrue)))
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
  ATerm z_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = z_12;
      {
        ATerm h_15 = NULL,s_11 = NULL;
        h_15 = t;
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
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_15, s_11);
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
              t = (ATerm) ATmakeAppl(sym__2, h_15, s_11);
              t = c_9(h_15, s_11, t);
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              {
                ATerm r_12 = NULL,s_12 = NULL;
                s_12 = t;
                t = SSL_explode_term(s_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm m_13 = ATgetArgument(t, 1);
                      if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
                        {
                          ATerm p_13 = ATgetFirst((ATermList) m_13);
                          ATerm q_13 = (ATerm) ATgetNext((ATermList) m_13);
                          if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
                            {
                              r_12 = ATgetFirst((ATermList) q_13);
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
                t = r_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm d_9 (ATerm s_33, ATerm r_33, ATerm t)
{
  ATerm k_15 = NULL;
  t = new_0_0(t);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_15), term_z_10), (ATerm) ATmakeAppl(sym_AssignInit_1, r_33)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, s_33, (ATerm) ATmakeAppl(sym_Id_1, k_15))));
  return(t);
}
static ATerm e_9 (ATerm h_176, ATerm o_33, ATerm q_33, ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  t = SSLgetAnnotations(h_176);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_33);
  n_15 = t;
  t = SSLsetAnnotations(n_15, l_15);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, m_15, q_33);
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
static ATerm g_1 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(v_17, w_17, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      n_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, l_17), n_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          n_17 = ATgetArgument(t, 0);
          l_17 = ATgetArgument(t, 1);
          {
            ATerm u_17 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL;
            t = l_17;
            t = foldr_3_0(f_1, g_1, l_1, t);
            u_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_17, u_17);
            y_12 = t;
            t = term_x_13;
            a_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, n_17, u_17));
            t = o_9(a_13, y_12, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm y_13 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_13) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_14, (ATerm) ATinsert(CheckATermList(l_17), (ATerm) ATmakeAppl(sym_Id_1, x_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              n_17 = ATgetArgument(t, 0);
              t = n_17;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  n_17 = ATgetArgument(t, 0);
                  {
                    ATerm b_14 = t;
                    int c_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(m_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_14 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) d_14) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm e_14 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_14) != AT_LIST) || !(ATisEmpty(e_14))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, n_17)));
                        LocalPopChoice(c_14);
                      }
                    else
                      {
                        t = b_14;
                        {
                          ATerm h_14 = t;
                          int i_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(m_17);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm j_14 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) j_14) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm k_14 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(k_14) != AT_LIST) || !(ATisEmpty(k_14))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, n_17)));
                              LocalPopChoice(i_14);
                            }
                          else
                            {
                              t = h_14;
                              {
                                ATerm l_14 = t;
                                int m_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(m_17);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_g_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, n_17)));
                                    LocalPopChoice(m_14);
                                  }
                                else
                                  {
                                    t = l_14;
                                    t = SSLgetAnnotations(m_17);
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
                                    t = (ATerm) ATmakeAppl(sym_Id_1, n_17);
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
                      n_17 = ATgetArgument(t, 0);
                      {
                        ATerm g_18 = NULL,a_16 = NULL,b_16 = NULL,i_16 = NULL,t_15 = NULL;
                        t = SSL_explode_string(n_17);
                        t = escape_chars_0_0(t);
                        t_15 = t;
                        t = SSL_implode_string(t_15);
                        b_16 = t;
                        t = SSL_explode_string(b_16);
                        i_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_16), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
                        t = conc_0_0(t);
                        a_16 = t;
                        t = SSL_implode_string(a_16);
                        g_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), term_u_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, g_18)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          n_17 = ATgetArgument(t, 0);
                          {
                            ATerm v_16 = NULL;
                            t = SSL_real_to_string(n_17);
                            v_16 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, v_16))));
                          }
                        }
                      else
                        {
                          ATerm f_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              n_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(n_17);
                          f_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, f_17))));
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
  ATerm m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,u_22 = NULL,v_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_22;
  if(match_string(t, "Cons"))
    {
      ATerm x_21 = NULL;
      t = v_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          p_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_22 = ATgetFirst((ATermList) t);
          r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_22;
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
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
                  ATerm z_25 = NULL,p_7 = NULL;
                  t = SSLgetAnnotations(y_23);
                  z_25 = t;
                  t = t_25;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, t_25);
                  p_7 = t;
                  t = SSLsetAnnotations(p_7, z_25);
                }
              }
            else
              {
                ATerm e_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,q_26 = NULL,b_8 = NULL,a_8 = NULL,z_7 = NULL;
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
                    n_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_25);
                m_26 = t;
                t = n_26;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, n_26);
                z_7 = t;
                t = SSLsetAnnotations(z_7, m_26);
                q_26 = t;
                t = u_25;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_26 = ATgetFirst((ATermList) t);
                    j_26 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_25);
                h_26 = t;
                t = j_26;
                t = Cons_2_0(_id, m_1, t);
                k_26 = t;
                t = (ATerm) ATinsert(CheckATermList(k_26), i_26);
                a_8 = t;
                t = SSLsetAnnotations(a_8, h_26);
                l_26 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, q_26, l_26);
                b_8 = t;
                t = SSLsetAnnotations(b_8, e_26);
              }
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_15, (ATerm) ATinsert(ATempty, q_22));
          }
      }
      x_21 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_15, (ATerm) ATinsert(ATinsert(ATempty, m_22), x_21)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = v_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_15;
    }
  return(t);
}
static ATerm x_51 (ATerm o_26, ATerm p_26, ATerm s_26, ATerm x_26, ATerm t)
{
  ATerm c_27 = NULL,k_27 = NULL,w_26 = NULL,z_26 = NULL,d_27 = NULL;
  t = o_26;
  {
    ATerm p_15 = t;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL;
        l_27 = t;
        if(match_string(t, "Nil"))
          {
            t = l_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = l_27;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_15;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, p_26, term_s_13);
  {
    static ATerm q_1 (ATerm t)
    {
      ATerm p_27 = NULL,u_27 = NULL,w_27 = NULL,x_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
      if(match_cons(t, sym__2))
        {
          p_27 = ATgetArgument(t, 0);
          u_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_27);
      b_28 = t;
      t = p_27;
      if(match_cons(t, sym_Var_1))
        {
          d_28 = ATgetArgument(t, 0);
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_28 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_28)), s_26));
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_28)), s_26)));
                t = e_9(p_27, d_28, p_28, t);
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                {
                  ATerm q_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_28)), s_26));
                  q_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_28)), s_26)));
                  t = d_9(p_27, q_28, t);
                }
              }
          }
        }
      else
        {
          ATerm t_28 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_28)), s_26));
          t_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_28)), s_26)));
          t = d_9(p_27, t_28, t);
        }
      w_27 = t;
      t = term_t_13;
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_27, term_t_13);
      t = c_10(u_27, c_28, t);
      x_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
      return(t);
    }
    t = thread_map_1_0(q_1, t);
  }
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      {
        ATerm v_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_26;
  t = foldr_3_0(r_1, s_1, t_1, t);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, k_27);
  z_26 = t;
  t = term_x_13;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, o_26, k_27));
  t = o_9(d_27, z_26, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_15) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_26)), s_26)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, c_27), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10))));
  return(t);
}
static ATerm y_51 (ATerm w_28, ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm l_30 = NULL;
  t = SSL_real_to_string(w_28);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, q_29)), term_g_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_16, q_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, l_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10))));
  return(t);
}
static ATerm z_51 (ATerm r_30, ATerm o_32, ATerm p_32, ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_int_to_string(r_30);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, o_32)), term_p_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_16, o_32))), (ATerm) ATmakeAppl(sym_IntConst_1, l_36))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10))));
  return(t);
}
static ATerm a_52 (ATerm s_36, ATerm h_37, ATerm m_37, ATerm n_37, ATerm t)
{
  t = SSLgetAnnotations(s_36);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, h_37), term_y_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, h_37), m_37)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, m_37))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_37), term_l_11, m_37)));
  return(t);
}
static ATerm b_52 (ATerm l_38, ATerm m_38, ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSLgetAnnotations(l_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_16 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) z_16) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_17) != AT_LIST) || !(ATisEmpty(a_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, m_38), term_y_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, m_38), p_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, p_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_38), term_l_11, p_38)));
  return(t);
}
static ATerm c_52 (ATerm w_38, ATerm x_38, ATerm a_39, ATerm b_39, ATerm t)
{
  t = SSLgetAnnotations(w_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(c_17) != AT_LIST) || !(ATisEmpty(c_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, x_38), a_39), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, a_39))))));
  return(t);
}
static ATerm d_52 (ATerm j_39, ATerm k_39, ATerm l_39, ATerm m_39, ATerm t)
{
  t = SSLgetAnnotations(j_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_39), term_l_11, l_39));
  return(t);
}
static ATerm e_52 (ATerm i_40, ATerm j_40, ATerm q_40, ATerm s_40, ATerm t_40, ATerm u_40, ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm n_41 = NULL,p_41 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  t = j_40;
  {
    ATerm g_17 = t;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL;
        q_41 = t;
        if(match_string(t, "Nil"))
          {
            t = q_41;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = q_41;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, s_40, term_s_13);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm r_41 = NULL,s_41 = NULL,v_41 = NULL,w_41 = NULL,z_41 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm h_17 = ATgetArgument(t, 0);
          if(match_cons(h_17, sym_Var_1))
            {
              r_41 = ATgetArgument(h_17, 0);
            }
          else
            _fail(t);
          s_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_41);
      v_41 = t;
      t = term_t_13;
      z_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_41, term_t_13);
      t = c_10(s_41, z_41, t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_41), term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_41)), (ATerm) ATmakeAppl(sym_Id_1, i_40))))), w_41);
      return(t);
    }
    t = thread_map_1_0(u_1, t);
  }
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      {
        ATerm i_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_40, q_40);
  i_27 = t;
  t = term_x_13;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, j_40, q_40));
  t = o_9(j_27, i_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_17) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_41, (ATerm) ATinsert(ATempty, t_40));
  t = conc_0_0(t);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_27)), (ATerm) ATmakeAppl(sym_Id_1, i_40))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_41), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, i_40), u_40, z_40))));
  return(t);
}
static ATerm f_52 (ATerm a_42, ATerm d_42, ATerm e_42, ATerm f_42, ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_real_to_string(d_42);
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, u_42)), (ATerm) ATmakeAppl(sym_Id_1, a_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, a_42), f_42, g_42))));
  return(t);
}
static ATerm g_52 (ATerm v_42, ATerm w_42, ATerm a_43, ATerm b_43, ATerm c_43, ATerm g_43, ATerm t)
{
  ATerm u_43 = NULL;
  t = SSL_int_to_string(w_42);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_43)), (ATerm) ATmakeAppl(sym_Id_1, v_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, v_42), b_43, c_43))));
  return(t);
}
static ATerm h_52 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm t)
{
  t = z_43;
  {
    ATerm r_17 = t;
    if((PushChoice() == 0))
      {
        ATerm g_44 = NULL,i_44 = NULL,j_44 = NULL,h_8 = NULL;
        j_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            i_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_44);
        g_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, i_44);
        h_8 = t;
        t = SSLsetAnnotations(h_8, g_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_43)));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(u_28, v_28, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm p_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym_SVar_1))
        {
          p_46 = ATgetArgument(s_17, 0);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
          _fail(t);
      }
      {
        ATerm x_17 = ATgetArgument(t, 2);
        if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, p_46);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = topdown_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(b_2, t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm g_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(match_cons(e_18, sym_SVar_1))
        {
          g_47 = ATgetArgument(e_18, 0);
        }
      else
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(((ATgetType(f_18) != AT_LIST) || !(ATisEmpty(f_18))))
          _fail(t);
      }
      {
        ATerm h_18 = ATgetArgument(t, 2);
        if(((ATgetType(h_18) != AT_LIST) || !(ATisEmpty(h_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, g_47);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = topdown_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(f_2, t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_48), term_z_10), term_o_18);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_48;
  if(match_cons(t, sym_Var_1))
    {
      x_48 = ATgetArgument(t, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_48;
            t = e_9(z_48, x_48, a_49, t);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = y_48;
            t = d_9(z_48, a_49, t);
          }
      }
    }
  else
    {
      t = y_48;
      t = d_9(z_48, a_49, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,u_44 = NULL,v_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,c_45 = NULL,d_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  t_45 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_45 = ATgetArgument(t, 0);
      r_45 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, u_45, (ATerm) ATinsert(ATempty, r_45));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm a_46 = NULL;
            t = t_45;
            t = new_0_0(t);
            a_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_46), term_z_10)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_Id_1, a_46)))), term_s_18), u_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_46), term_l_11, term_y_10))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              u_45 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, u_45);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  u_45 = ATgetArgument(t, 0);
                  r_45 = ATgetArgument(t, 1);
                  m_45 = ATgetArgument(t, 2);
                  {
                    ATerm j_46 = NULL,l_46 = NULL,m_46 = NULL;
                    t = u_45;
                    if(match_cons(t, sym_SVar_1))
                      {
                        s_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_45;
                    t = map_1_0(v_1, t);
                    j_46 = t;
                    t = m_45;
                    t = map_1_0(x_1, t);
                    l_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_10)), l_46), j_46);
                    t = concat_0_0(t);
                    m_46 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, s_45), m_46)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      u_45 = ATgetArgument(t, 0);
                      r_45 = ATgetArgument(t, 1);
                      m_45 = ATgetArgument(t, 2);
                      {
                        ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
                        t = r_45;
                        t = map_1_0(c_2, t);
                        x_46 = t;
                        t = m_45;
                        t = map_1_0(d_2, t);
                        y_46 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_46, y_46);
                        t = conc_0_0(t);
                        z_46 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, u_45), z_46)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          u_45 = ATgetArgument(t, 0);
                          {
                            ATerm o_47 = NULL;
                            t = t_45;
                            t = new_0_0(t);
                            o_47 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_47), term_z_10), term_t_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_x_18, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10)))), term_b_19), u_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_Id_1, o_47))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              u_45 = ATgetArgument(t, 0);
                              r_45 = ATgetArgument(t, 1);
                              {
                                ATerm r_47 = NULL;
                                t = t_45;
                                t = new_0_0(t);
                                r_47 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_47), term_z_10), term_t_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_f_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, r_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_Id_1, r_47))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  u_45 = ATgetArgument(t, 0);
                                  r_45 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, u_45, r_45);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      u_45 = ATgetArgument(t, 0);
                                      r_45 = ATgetArgument(t, 1);
                                      m_45 = ATgetArgument(t, 2);
                                      {
                                        ATerm x_47 = NULL,y_47 = NULL;
                                        t = t_45;
                                        t = new_0_0(t);
                                        x_47 = t;
                                        t = new_0_0(t);
                                        y_47 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_47), term_z_10), term_k_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_47), term_z_10), term_t_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_x_18, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, y_47))))), term_s_18), u_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, (ATerm) ATmakeAppl(sym_Id_1, x_47))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          u_45 = ATgetArgument(t, 0);
                                          r_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_45, term_n_19, r_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              u_45 = ATgetArgument(t, 0);
                                              r_45 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_45, r_45);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  u_45 = ATgetArgument(t, 0);
                                                  r_45 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, r_45), u_45));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      u_45 = ATgetArgument(t, 0);
                                                      r_45 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm k_48 = NULL;
                                                        t = u_45;
                                                        t = map_1_0(g_2, t);
                                                        k_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, k_48)), (ATerm) ATinsert(ATempty, r_45));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_o_19;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  u_45 = ATgetArgument(t, 0);
                                                                  r_45 = ATgetArgument(t, 1);
                                                                  t = u_45;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      s_45 = ATgetArgument(t, 0);
                                                                      q_44 = ATgetArgument(t, 1);
                                                                      t = q_44;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          k_44 = ATgetFirst((ATermList) t);
                                                                          l_44 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = l_44;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_44 = ATgetFirst((ATermList) t);
                                                                              n_44 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = n_44;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = s_45;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm p_19 = t;
                                                                                      int q_19 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm v_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_44, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_19, r_45)))))), (ATerm) ATmakeAppl(sym__2, k_44, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_19, r_45)))));
                                                                                          t = map_1_0(h_2, t);
                                                                                          v_48 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, r_45)), term_a_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, r_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10))));
                                                                                          LocalPopChoice(q_19);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_19;
                                                                                          t = x_51(s_45, q_44, r_45, t_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_51(s_45, q_44, r_45, t_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = s_45;
                                                                                  t = x_51(s_45, q_44, r_45, t_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_45;
                                                                              t = x_51(s_45, q_44, r_45, t_45, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = s_45;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm d_20 = t;
                                                                                  int e_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, r_45)), term_a_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, r_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10))));
                                                                                      LocalPopChoice(e_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_20;
                                                                                      t = x_51(s_45, q_44, r_45, t_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_51(s_45, q_44, r_45, t_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_45;
                                                                              t = x_51(s_45, q_44, r_45, t_45, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          s_45 = ATgetArgument(t, 0);
                                                                          t = y_51(s_45, r_45, t_45, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              s_45 = ATgetArgument(t, 0);
                                                                              t = z_51(s_45, r_45, t_45, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  s_45 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm p_49 = NULL,r_27 = NULL,s_27 = NULL,v_27 = NULL,n_27 = NULL;
                                                                                    t = SSL_explode_string(s_45);
                                                                                    t = escape_chars_0_0(t);
                                                                                    n_27 = t;
                                                                                    t = SSL_implode_string(n_27);
                                                                                    s_27 = t;
                                                                                    t = SSL_explode_string(s_27);
                                                                                    v_27 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_27), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
                                                                                    t = conc_0_0(t);
                                                                                    r_27 = t;
                                                                                    t = SSL_implode_string(r_27);
                                                                                    p_49 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_20, r_45))), (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), term_u_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, p_49))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, term_y_10))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      s_45 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm l_20 = t;
                                                                                        int m_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = a_52(u_45, s_45, r_45, t_45, t);
                                                                                            LocalPopChoice(m_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_20;
                                                                                            {
                                                                                              ATerm n_20 = t;
                                                                                              int o_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = b_52(u_45, s_45, r_45, t_45, t);
                                                                                                  LocalPopChoice(o_20);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_20;
                                                                                                  {
                                                                                                    ATerm p_20 = t;
                                                                                                    int q_20 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = c_52(u_45, s_45, r_45, t_45, t);
                                                                                                        LocalPopChoice(q_20);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_20;
                                                                                                        t = d_52(u_45, s_45, r_45, t_45, t);
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
                                                                                          s_45 = ATgetArgument(t, 0);
                                                                                          q_44 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, q_44, r_45)), (ATerm) ATmakeAppl(sym_Match_2, s_45, r_45)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm r_20 = t;
                                                                                          int s_20 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_BuildDefault_1))
                                                                                                {
                                                                                                  ATerm t_20 = ATgetArgument(t, 0);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(s_20);
                                                                                              t = term_o_19;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_20;
                                                                                              if(!(match_cons(t, sym_Wld_0)))
                                                                                                _fail(t);
                                                                                              t = term_o_19;
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
                                                                      u_45 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, u_45, term_y_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          u_45 = ATgetArgument(t, 0);
                                                                          r_45 = ATgetArgument(t, 1);
                                                                          m_45 = ATgetArgument(t, 2);
                                                                          t = u_45;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              s_45 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = r_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              q_45 = ATgetFirst((ATermList) t);
                                                                              l_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = q_45;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  c_45 = ATgetArgument(t, 0);
                                                                                  j_45 = ATgetArgument(t, 1);
                                                                                  k_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = c_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  d_45 = ATgetArgument(t, 0);
                                                                                  a_45 = ATgetArgument(t, 1);
                                                                                  t = j_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      r_44 = ATgetFirst((ATermList) t);
                                                                                      u_44 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = u_44;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          v_44 = ATgetFirst((ATermList) t);
                                                                                          z_44 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = z_44;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = v_44;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  y_44 = ATgetArgument(t, 0);
                                                                                                  t = r_44;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      s_44 = ATgetArgument(t, 0);
                                                                                                      t = a_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = d_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm u_20 = t;
                                                                                                              int v_20 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, s_45))), term_a_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, s_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_44), term_l_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_19, (ATerm) ATmakeAppl(sym_Id_1, s_45)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_44), term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_19, (ATerm) ATmakeAppl(sym_Id_1, s_45)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_45), l_45, m_45))));
                                                                                                                  LocalPopChoice(v_20);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = u_20;
                                                                                                                  t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = d_45;
                                                                                                          t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_45;
                                                                                                      t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_45;
                                                                                                  t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_45;
                                                                                              t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_45;
                                                                                          t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = a_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = d_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm w_20 = t;
                                                                                                  int x_20 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, s_45))), term_a_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, s_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, k_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_45), l_45, m_45))));
                                                                                                      LocalPopChoice(x_20);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = w_20;
                                                                                                      t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_45;
                                                                                              t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_45;
                                                                                          t = e_52(s_45, d_45, a_45, j_45, k_45, l_45, m_45, t_45, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      d_45 = ATgetArgument(t, 0);
                                                                                      t = f_52(s_45, d_45, k_45, l_45, m_45, t_45, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          d_45 = ATgetArgument(t, 0);
                                                                                          t = g_52(s_45, d_45, k_45, l_45, m_45, t_45, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm w_50 = NULL,h_28 = NULL,i_28 = NULL,l_28 = NULL,y_27 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              d_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(d_45);
                                                                                          t = escape_chars_0_0(t);
                                                                                          y_27 = t;
                                                                                          t = SSL_implode_string(y_27);
                                                                                          i_28 = t;
                                                                                          t = SSL_explode_string(i_28);
                                                                                          l_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_28), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
                                                                                          t = conc_0_0(t);
                                                                                          h_28 = t;
                                                                                          t = SSL_implode_string(h_28);
                                                                                          w_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, w_50))), (ATerm) ATmakeAppl(sym_Id_1, s_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_45), l_45, m_45))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = m_45;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              u_45 = ATgetArgument(t, 0);
                                                                              r_45 = ATgetArgument(t, 1);
                                                                              m_45 = ATgetArgument(t, 2);
                                                                              n_45 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, u_45), (ATerm) ATmakeAppl(sym_Case_3, r_45, m_45, n_45));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  u_45 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, u_45));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      u_45 = ATgetArgument(t, 0);
                                                                                      r_45 = ATgetArgument(t, 1);
                                                                                      t = u_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          s_45 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = r_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          q_45 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm a_21 = t;
                                                                                            int b_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, s_45), term_y_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, s_45), (ATerm) ATmakeAppl(sym_Id_1, q_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, q_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_45), term_l_11, (ATerm) ATmakeAppl(sym_Id_1, q_45))));
                                                                                                LocalPopChoice(b_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_21;
                                                                                                t = h_52(s_45, r_45, t_45, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_52(s_45, r_45, t_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          u_45 = ATgetArgument(t, 0);
                                                                                          t = u_45;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              s_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_45), term_l_11, term_y_10));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm t_51 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              u_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = u_45;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          t_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_y_10, term_l_11, t_51));
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
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,u_52 = NULL,v_52 = NULL,l_8 = NULL;
      ATerm e_21 = t;
      int f_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_52 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(g_21) != AT_INT) || (ATgetInt((ATermInt) g_21) != 34)))
                _fail(t);
              w_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_52), term_p_14), term_h_21);
          LocalPopChoice(f_21);
        }
      else
        {
          t = e_21;
          {
            ATerm y_52 = NULL,z_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_52 = ATgetFirst((ATermList) t);
                z_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_52;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_52), term_h_21), term_h_21);
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(z_52), term_i_21), term_h_21);
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(z_52), term_j_21), term_h_21);
                  }
              }
          }
        }
      v_52 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_52 = ATgetFirst((ATermList) t);
          r_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_52);
      p_52 = t;
      t = r_52;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      u_52 = t;
      t = (ATerm) ATinsert(CheckATermList(u_52), q_52);
      l_8 = t;
      t = SSLsetAnnotations(l_8, p_52);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
        r_53 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_53 = ATgetFirst((ATermList) t);
            q_53 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm a_29 = NULL,d_29 = NULL,n_8 = NULL;
              t = SSLgetAnnotations(r_53);
              a_29 = t;
              t = q_53;
              t = escape_chars_0_0(t);
              d_29 = t;
              t = (ATerm) ATinsert(CheckATermList(d_29), p_53);
              n_8 = t;
              t = SSLsetAnnotations(n_8, a_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_53;
          }
      }
    }
  return(t);
}
static ATerm k_9 (ATerm x_0 (ATerm), ATerm c_1 (ATerm), ATerm z_0, ATerm d_1, ATerm v_0, ATerm t)
{
  ATerm u_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_0, v_0);
  t = x_0(t);
  if(match_cons(t, sym__2))
    {
      y_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_1, u_53);
  t = c_1(t);
  if(match_cons(t, sym__2))
    {
      z_53 = ATgetArgument(t, 0);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_53), y_53), x_53);
  return(t);
}
ATerm thread_map_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  static ATerm l_54 (ATerm t)
  {
    ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
    e_54 = t;
    if(match_cons(t, sym__2))
      {
        f_54 = ATgetArgument(t, 0);
        g_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = f_54;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_54 = ATgetFirst((ATermList) t);
        d_54 = (ATerm) ATgetNext((ATermList) t);
        t = e_54;
        t = k_9(g_120, l_54, c_54, d_54, g_54, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_54);
      }
    return(t);
  }
  t = l_54(t);
  return(t);
}
static ATerm e_58 (ATerm q_55, ATerm r_55, ATerm s_55, ATerm t_55, ATerm u_55, ATerm t)
{
  ATerm z_55 = NULL,b_56 = NULL,c_56 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  t = q_55;
  {
    ATerm k_21 = t;
    if((PushChoice() == 0))
      {
        ATerm d_56 = NULL;
        d_56 = t;
        if(match_string(t, "Nil"))
          {
            t = d_56;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = d_56;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_21;
      }
  }
  t = r_55;
  t = map_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym__2, r_55, term_s_13);
  t = thread_map_1_0(k_2, t);
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      {
        ATerm l_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_55;
  t = foldr_3_0(l_2, m_2, n_2, t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_55, c_56);
  k_29 = t;
  t = term_x_13;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, q_55, c_56));
  t = o_9(l_29, k_29, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_55, (ATerm) ATinsert(ATempty, s_55));
  t = conc_0_0(t);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_29)), term_y_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, b_56), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_55)));
  return(t);
}
static ATerm f_58 (ATerm o_56, ATerm p_56, ATerm q_56, ATerm r_56, ATerm t)
{
  ATerm v_56 = NULL;
  t = SSL_real_to_string(o_56);
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, v_56)), term_y_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_56)));
  return(t);
}
static ATerm g_58 (ATerm w_56, ATerm x_56, ATerm y_56, ATerm z_56, ATerm t)
{
  ATerm d_57 = NULL;
  t = SSL_int_to_string(w_56);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_57)), term_y_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_56)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_56)));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,u_8 = NULL;
  g_56 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_56);
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_56);
  u_8 = t;
  t = SSLsetAnnotations(u_8, e_56);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(match_cons(n_21, sym_Var_1))
        {
          h_56 = ATgetArgument(n_21, 0);
        }
      else
        _fail(t);
      i_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(i_56);
  j_56 = t;
  t = term_t_13;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_56, term_t_13);
  t = c_10(i_56, l_56, t);
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_56), term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, j_56)), term_y_10)))), k_56);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  if(match_cons(t, sym__2))
    {
      m_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(m_56, n_56, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  l_57 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      m_57 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
      q_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_57;
  if(match_cons(t, sym_Match_1))
    {
      n_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_57;
  if(match_cons(t, sym_Op_2))
    {
      o_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
      t = k_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_57 = ATgetFirst((ATermList) t);
          g_57 = (ATerm) ATgetNext((ATermList) t);
          t = g_57;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_57 = ATgetFirst((ATermList) t);
              j_57 = (ATerm) ATgetNext((ATermList) t);
              t = j_57;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = h_57;
                  if(match_cons(t, sym_Var_1))
                    {
                      i_57 = ATgetArgument(t, 0);
                      t = e_57;
                      if(match_cons(t, sym_Var_1))
                        {
                          f_57 = ATgetArgument(t, 0);
                          t = o_57;
                          if(match_string(t, "Cons"))
                            {
                              ATerm o_21 = t;
                              int p_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_y_10)), term_a_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, term_y_10)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_57), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_57), term_l_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_u_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_19, (ATerm) ATinsert(ATempty, term_q_21)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_57), term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATinsert(ATempty, term_q_21)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_57)));
                                  LocalPopChoice(p_21);
                                }
                              else
                                {
                                  t = o_21;
                                  t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                                }
                            }
                          else
                            {
                              t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                            }
                        }
                      else
                        {
                          t = o_57;
                          t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                        }
                    }
                  else
                    {
                      t = o_57;
                      t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                    }
                }
              else
                {
                  t = o_57;
                  t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                }
            }
          else
            {
              t = o_57;
              t = e_58(o_57, k_57, p_57, q_57, l_57, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = o_57;
              if(match_string(t, "Nil"))
                {
                  ATerm r_21 = t;
                  int s_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_16, (ATerm) ATinsert(ATempty, term_y_10)), term_a_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, term_y_10))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_57)));
                      LocalPopChoice(s_21);
                    }
                  else
                    {
                      t = r_21;
                      t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                    }
                }
              else
                {
                  t = e_58(o_57, k_57, p_57, q_57, l_57, t);
                }
            }
          else
            {
              t = o_57;
              t = e_58(o_57, k_57, p_57, q_57, l_57, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          o_57 = ATgetArgument(t, 0);
          t = f_58(o_57, p_57, q_57, l_57, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              o_57 = ATgetArgument(t, 0);
              t = g_58(o_57, p_57, q_57, l_57, t);
            }
          else
            {
              ATerm c_58 = NULL,s_29 = NULL,t_29 = NULL,v_29 = NULL,n_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  o_57 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(o_57);
              t = escape_chars_0_0(t);
              n_29 = t;
              t = SSL_implode_string(n_29);
              t_29 = t;
              t = SSL_explode_string(t_29);
              v_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_29), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
              t = conc_0_0(t);
              s_29 = t;
              t = SSL_implode_string(s_29);
              c_58 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, c_58))), term_y_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_57)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    t = topdown_1_0(m_106, t);
    return(t);
  }
  t = m_106(t);
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
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
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
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  z_58 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_59 = ATgetArgument(t, 0);
      b_59 = ATgetArgument(t, 1);
      c_59 = ATgetArgument(t, 2);
      d_59 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
        t = a_59;
        t = is_local_function_0_0(t);
        t = b_59;
        t = map_1_0(TranslateVarDec_0_0, t);
        j_59 = t;
        t = c_59;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
        t = conc_0_0(t);
        l_59 = t;
        t = d_59;
        t = topdown_1_0(p_2, t);
        m_59 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_59), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, l_59, (ATerm) ATinsert(ATempty, term_e_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_11), term_s_18), m_59)));
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
          t = a_59;
          {
            ATerm g_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_22;
              }
          }
          t = b_59;
          t = map_1_0(TranslateVarDec_0_0, t);
          h_30 = t;
          t = c_59;
          t = map_1_0(TranslateVarDec_0_0, t);
          i_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
          t = conc_0_0(t);
          j_30 = t;
          t = d_59;
          t = topdown_1_0(r_2, t);
          k_30 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_59), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, j_30, (ATerm) ATinsert(ATempty, term_e_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_11), term_s_18), k_30)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_60;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_60 = ATgetFirst((ATermList) t);
          c_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_30 = NULL,z_30 = NULL,a_31 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(a_60);
            w_30 = t;
            t = b_60;
            t = t_120(t);
            z_30 = t;
            t = c_60;
            t = filter_1_0(t_120, t);
            a_31 = t;
            t = (ATerm) ATinsert(CheckATermList(a_31), z_30);
            h_9 = t;
            t = SSLsetAnnotations(h_9, w_30);
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            t = c_60;
            t = filter_1_0(t_120, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm i_60 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          i_60 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_22);
      {
        ATerm k_60 = NULL;
        t = i_60;
        t = map_1_0(TranslateType_0_0, t);
        k_60 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_10, (ATerm) ATmakeAppl(sym_ParamList_1, k_60));
      }
    }
  else
    {
      t = j_22;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm n_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_n_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_60;
  {
    ATerm o_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            r_60 = ATgetArgument(t, 0);
            {
              ATerm w_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_22);
        {
          ATerm u_60 = NULL;
          t = r_60;
          t = map_1_0(TranslateType_0_0, t);
          u_60 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, u_60)))));
        }
      }
    else
      {
        t = o_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm x_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_n_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_60), term_z_10)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm y_22 = t;
  if((PushChoice() == 0))
    {
      ATerm w_60 = NULL,x_60 = NULL;
      if(match_cons(t, sym__2))
        {
          w_60 = ATgetArgument(t, 0);
          x_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(w_60, x_60);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = SSL_gtr(w_60, x_60);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, w_60, x_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_22;
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
  ATerm e_61 = NULL;
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, e_61);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_61, term_c_23);
  t = leq_0_0(t);
  t = e_61;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,j_9 = NULL;
  y_60 = t;
  t = SSL_explode_string(y_60);
  d_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_61 = ATgetFirst((ATermList) t);
      b_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_61);
  z_60 = t;
  t = a_61;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_23, a_61);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_61, term_g_23);
        t = leq_0_0(t);
        t = a_61;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = (ATerm) ATmakeAppl(sym__2, term_h_23, a_61);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_61, term_i_23);
        t = leq_0_0(t);
        t = a_61;
      }
  }
  t = b_61;
  t = Cons_2_0(a_3, h_3, t);
  c_61 = t;
  t = (ATerm) ATinsert(CheckATermList(c_61), a_61);
  j_9 = t;
  t = SSLsetAnnotations(j_9, z_60);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  r_61 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      s_61 = ATgetArgument(t, 0);
      t_61 = ATgetArgument(t, 1);
      u_61 = ATgetArgument(t, 2);
      {
        ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
        t = t_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        z_61 = t;
        t = u_61;
        t = map_1_0(TranslateVarDec_0_0, t);
        a_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_61, a_62);
        t = conc_0_0(t);
        b_62 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, b_62, (ATerm) ATinsert(ATempty, term_e_11)))))));
      }
    }
  else
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              s_61 = ATgetArgument(t, 0);
              t_61 = ATgetArgument(t, 1);
              u_61 = ATgetArgument(t, 2);
              {
                ATerm l_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(k_23);
          {
            ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
            t = t_61;
            t = map_1_0(TranslateVarDec_0_0, t);
            f_62 = t;
            t = u_61;
            t = map_1_0(TranslateVarDec_0_0, t);
            g_62 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_62, g_62);
            t = conc_0_0(t);
            h_62 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, h_62, (ATerm) ATinsert(ATempty, term_e_11)))))));
          }
        }
      else
        {
          t = j_23;
          if(match_cons(t, sym_SDefT_4))
            {
              s_61 = ATgetArgument(t, 0);
              t_61 = ATgetArgument(t, 1);
              u_61 = ATgetArgument(t, 2);
              {
                ATerm m_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
                t = s_61;
                t = is_local_function_0_0(t);
                t = t_61;
                t = map_1_0(TranslateVarDec_0_0, t);
                l_62 = t;
                t = u_61;
                t = map_1_0(TranslateVarDec_0_0, t);
                m_62 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_62, m_62);
                t = conc_0_0(t);
                n_62 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, n_62, (ATerm) ATinsert(ATempty, term_e_11)))))));
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                {
                  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
                  t = s_61;
                  {
                    ATerm p_23 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_23;
                      }
                  }
                  t = t_61;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  m_31 = t;
                  t = u_61;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  n_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_31, n_31);
                  t = conc_0_0(t);
                  o_31 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, o_31, (ATerm) ATinsert(ATempty, term_e_11)))))));
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
  ATerm d_63 = NULL,e_63 = NULL;
  if(match_cons(t, sym__2))
    {
      d_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(d_63, e_63, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm p_9 (ATerm w_37, ATerm u_37, ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,v_62 = NULL,x_62 = NULL,y_62 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,b_63 = NULL;
  t = u_37;
  {
    ATerm q_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            b_63 = ATgetArgument(t, 0);
            {
              ATerm a_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_23);
        t = b_63;
        t = foldr_3_0(j_3, k_3, l_3, t);
      }
    else
      {
        t = q_23;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm b_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_s_13;
      }
  }
  t_62 = t;
  t = SSL_int_to_string(t_62);
  s_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_37, t_62);
  y_31 = t;
  t = term_x_13;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATmakeAppl(sym__2, w_37, t_62));
  t = o_9(z_31, y_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_24) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(w_37);
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_62), term_p_14), (ATerm) ATinsert(ATempty, term_p_14));
  t = conc_0_0(t);
  y_62 = t;
  t = SSL_implode_string(y_62);
  v_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_31))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_31), term_l_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), (ATerm) ATmakeAppl(sym_IntConst_1, s_62)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, v_62)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_63 = ATgetFirst((ATermList) t);
      j_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_63;
  if(match_int(t, 95))
    {
      ATerm l_63 = NULL;
      t = j_63;
      t = p_0(t);
      l_63 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_63), term_h_24), term_h_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm n_63 = NULL;
          t = j_63;
          t = p_0(t);
          n_63 = t;
          t = (ATerm) ATinsert(CheckATermList(n_63), term_h_24);
        }
      else
        {
          ATerm p_63 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = j_63;
          t = p_0(t);
          p_63 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_63), term_h_24), term_i_24), term_h_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm a_123 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL;
  t_63 = t;
  t = SSL_explode_string(t_63);
  {
    static ATerm f_64 (ATerm t)
    {
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_123(f_64, t);
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
          {
            ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
            e_64 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_64 = ATgetFirst((ATermList) t);
                d_64 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm e_32 = NULL,h_32 = NULL,m_9 = NULL;
                  t = SSLgetAnnotations(e_64);
                  e_32 = t;
                  t = d_64;
                  t = f_64(t);
                  h_32 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_32), c_64);
                  m_9 = t;
                  t = SSLsetAnnotations(m_9, e_32);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_64;
              }
          }
        }
      return(t);
    }
    t = f_64(t);
  }
  s_63 = t;
  t = SSL_implode_string(s_63);
  return(t);
}
ATerm foldr_3_0 (ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_64;
      t = r_119(t);
    }
  else
    {
      ATerm n_64 = NULL,o_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_64 = ATgetFirst((ATermList) t);
          k_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_64;
      t = t_119(t);
      n_64 = t;
      t = k_64;
      t = foldr_3_0(r_119, s_119, t_119, t);
      o_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_64, o_64);
      t = s_119(t);
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
  ATerm b_65 = NULL,c_65 = NULL;
  if(match_cons(t, sym__2))
    {
      b_65 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(b_65, c_65, t);
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
static ATerm q_9 (ATerm j_37, ATerm i_37, ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,z_64 = NULL;
  t = i_37;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            z_64 = ATgetArgument(t, 0);
            {
              ATerm n_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_24);
        t = z_64;
        t = foldr_3_0(m_3, n_3, o_3, t);
      }
    else
      {
        t = l_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm o_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_s_13;
      }
  }
  q_64 = t;
  t = j_37;
  t = escape_1_0(Cify_1_0, t);
  s_64 = t;
  t = SSL_int_to_string(q_64);
  t_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_64), term_q_24), s_64), term_p_24);
  w_64 = t;
  t = SSL_concat_strings(w_64);
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, q_64);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_24, r_64);
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_37, q_64), (ATerm) ATmakeAppl(sym_Defined_2, term_r_24, r_64));
  t = s_9(p_3, u_64, v_64, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_u_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_64), term_z_10)));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  g_65 = t;
  t = term_v_24;
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, g_65);
  t = z_9(h_65, g_65, t);
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, f_65);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_w_24;
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_65 = NULL,e_65 = NULL;
        t = term_z_24;
        d_65 = t;
        t = term_w_24;
        e_65 = t;
        t = term_a_25;
        t = f_10(d_65, e_65, t);
        t = map_1_0(q_3, t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_65 = ATgetArgument(t, 0);
      y_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9(x_65, y_65, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(z_65, a_66, t);
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
  ATerm d_66 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
      {
        ATerm g_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_66), term_z_10)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  if(match_cons(t, sym__3))
    {
      f_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
      h_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_9(f_66, g_66, h_66, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  s_66 = t;
  if(match_cons(t, sym_Conc_2))
    {
      q_66 = ATgetArgument(t, 0);
      r_66 = ATgetArgument(t, 1);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, q_66, r_66);
            t = conc_0_0(t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = s_66;
          }
      }
    }
  else
    {
      t = s_66;
    }
  return(t);
}
static ATerm r_9 (ATerm d_38, ATerm g_38, ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  t_65 = t;
  t = GenerateIncludes_0_0(t);
  l_65 = t;
  t = d_38;
  t = map_1_0(r_3, t);
  m_65 = t;
  t = d_38;
  t = map_1_0(s_3, t);
  t = concat_0_0(t);
  n_65 = t;
  t = g_38;
  t = map_1_0(SDefToDeclaration_0_0, t);
  o_65 = t;
  t = g_38;
  t = filter_1_0(t_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  p_65 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_66 = NULL,m_32 = NULL,n_32 = NULL;
        t = (ATerm) ATempty;
        m_32 = t;
        t = term_j_12;
        n_32 = t;
        t = term_o_12;
        t = o_9(n_32, m_32, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            b_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_66;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
  }
  w_65 = t;
  t = map_1_0(u_3, t);
  u_65 = t;
  t = w_65;
  t = map_1_0(v_3, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, w_3, t);
  v_65 = t;
  t = t_65;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_66 = NULL,k_66 = NULL;
        t = term_z_24;
        j_66 = t;
        t = term_o_25;
        k_66 = t;
        t = term_p_25;
        t = f_10(j_66, k_66, t);
        t = t_65;
        LocalPopChoice(n_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = m_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_r_25, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_25)))), term_o_19));
      }
  }
  q_65 = t;
  t = t_65;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_66 = NULL,m_66 = NULL;
        t = term_z_24;
        l_66 = t;
        t = term_o_25;
        m_66 = t;
        t = term_p_25;
        t = f_10(l_66, m_66, t);
        t = t_65;
        LocalPopChoice(y_25);
        t = (ATerm) ATinsert(ATempty, term_b_26);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, term_d_26);
      }
  }
  r_65 = t;
  t = t_65;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_66 = NULL,o_66 = NULL;
        t = term_z_24;
        n_66 = t;
        t = term_o_25;
        o_66 = t;
        t = term_p_25;
        t = f_10(n_66, o_66, t);
        t = t_65;
        LocalPopChoice(g_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = f_26;
        {
          ATerm p_66 = NULL;
          t = MainDef_0_0(t);
          p_66 = t;
          t = (ATerm) ATinsert(ATempty, p_66);
        }
      }
  }
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, l_65, q_65), m_65), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_r_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_u_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_25)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_65)))), u_65), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_r_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_25)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_65)))), r_65), o_65), s_65), p_65));
  t = bottomup_1_0(x_3, t);
  return(t);
}
static ATerm s_9 (ATerm m_136 (ATerm), ATerm z_74, ATerm x_74, ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  t = m_136(t);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_66, z_74, x_74);
  t = g_10(x_66, z_74, x_74, t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_67 = NULL;
        t = term_e_27;
        i_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_66, term_e_27);
        t = f_10(x_66, i_67, t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_66 = ATgetFirst((ATermList) t);
      z_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_27;
  b_67 = t;
  t = (ATerm) ATinsert(CheckATermList(z_66), (ATerm) ATinsert(CheckATermList(y_66), z_74));
  c_67 = t;
  t = SSL_table_put(x_66, b_67, c_67);
  t = a_67;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  t = term_g_27;
  k_67 = t;
  t = term_o_27;
  l_67 = t;
  t = term_q_27;
  t = s_9(y_3, k_67, l_67, t);
  t = j_67;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
        {
          ATerm z_27 = ATgetFirst((ATermList) t_27);
          if(match_cons(z_27, sym_Signature_1))
            {
              ATerm e_28 = ATgetArgument(z_27, 0);
              if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
                {
                  ATerm f_28 = ATgetFirst((ATermList) e_28);
                  if(match_cons(f_28, sym_Constructors_1))
                    {
                      n_67 = ATgetArgument(f_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm g_28 = (ATerm) ATgetNext((ATermList) e_28);
                    if(((ATgetType(g_28) != AT_LIST) || !(ATisEmpty(g_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm a_28 = (ATerm) ATgetNext((ATermList) t_27);
            if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
              {
                ATerm k_28 = ATgetFirst((ATermList) a_28);
                if(match_cons(k_28, sym_Strategies_1))
                  {
                    o_67 = ATgetArgument(k_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm n_28 = (ATerm) ATgetNext((ATermList) a_28);
                  if(((ATgetType(n_28) != AT_LIST) || !(ATisEmpty(n_28))))
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
  t = r_9(n_67, o_67, t);
  t = listbottomup_1_0(z_3, t);
  return(t);
}
static ATerm u_9 (ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm q_67 = NULL;
  t = SSL_fputc(c_55, d_55);
  q_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_67);
  return(t);
}
static ATerm v_9 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm r_67 = NULL;
  t = SSL_write_term_to_stream_text(x_39, y_39);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_67);
  return(t);
}
static ATerm x_9 (ATerm p_112 (ATerm), ATerm o_251, ATerm d_40, ATerm t)
{
  ATerm t_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_251, term_o_28);
  t = b_10(t);
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_67, d_40);
  t = p_112(t);
  t = fclose_0_0(t);
  t = d_40;
  return(t);
}
static ATerm w_9 (ATerm t_39, ATerm u_39, ATerm t)
{
  ATerm x_67 = NULL;
  t = SSL_write_term_to_stream_baf(t_39, u_39);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_67);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if(match_cons(r_28, sym_Stream_1))
        {
          e_68 = ATgetArgument(r_28, 0);
        }
      else
        _fail(t);
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(e_68, f_68, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if(match_cons(s_28, sym_Stream_1))
        {
          l_68 = ATgetArgument(s_28, 0);
        }
      else
        _fail(t);
      m_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(l_68, m_68, t);
  i_68 = t;
  t = term_b_29;
  j_68 = t;
  t = i_68;
  if(match_cons(t, sym_Stream_1))
    {
      k_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, i_68);
  t = u_9(j_68, k_68, t);
  return(t);
}
ATerm output_1_0 (ATerm p_129 (ATerm), ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  t = p_129(t);
  z_67 = t;
  {
    ATerm c_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_68 = NULL,b_68 = NULL;
        t = term_z_24;
        a_68 = t;
        t = term_f_29;
        b_68 = t;
        t = term_g_29;
        t = f_10(a_68, b_68, t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = c_29;
        t = term_h_29;
      }
  }
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_67, z_67);
  {
    ATerm i_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_68 = NULL,d_68 = NULL;
        t = term_z_24;
        c_68 = t;
        t = term_o_29;
        d_68 = t;
        t = term_p_29;
        t = f_10(c_68, d_68, t);
        t = (ATerm) ATmakeAppl(sym__2, y_67, z_67);
        LocalPopChoice(m_29);
        if(match_cons(t, sym__2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            ATerm w_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_9(a_4, y_67, z_67, t);
      }
    else
      {
        t = i_29;
        if(match_cons(t, sym__2))
          {
            ATerm x_29 = ATgetArgument(t, 0);
            ATerm y_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_9(b_4, y_67, z_67, t);
      }
  }
  return(t);
}
static ATerm a_69 (ATerm u_68, ATerm t)
{
  t = SSL_fclose(u_68);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL;
  y_68 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_68 = ATgetArgument(t, 0);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_68);
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = a_69(y_68, t);
          }
      }
    }
  else
    {
      t = a_69(y_68, t);
    }
  return(t);
}
static ATerm y_9 (ATerm z_39, ATerm t)
{
  t = SSL_read_term_from_stream(z_39);
  return(t);
}
static ATerm z_9 (ATerm v_53, ATerm w_53, ATerm t)
{
  t = SSL_strcat(v_53, w_53);
  return(t);
}
static ATerm a_10 (ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm b_69 = NULL;
  t = SSL_fopen(e_55, f_55);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_69 = NULL;
  t = SSL_stdin_stream();
  c_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_69 = NULL;
  t = SSL_stdout_stream();
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_69 = NULL;
  t = SSL_stderr_stream();
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_69);
  return(t);
}
static ATerm n_70 (ATerm k_69, ATerm t)
{
  ATerm l_69 = NULL;
  t = SSL_explode_term(k_69);
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
          {
            l_69 = ATgetFirst((ATermList) c_30);
            {
              ATerm d_30 = (ATerm) ATgetNext((ATermList) c_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_69;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_69;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_69;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_69;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_70 (ATerm q_69, ATerm r_69, ATerm s_69, ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,y_69 = NULL,d_10 = NULL;
  t = SSLgetAnnotations(s_69);
  v_69 = t;
  t = q_69;
  if(match_cons(t, sym_Path_1))
    {
      y_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_69, r_69);
  d_10 = t;
  t = SSLsetAnnotations(d_10, v_69);
  if(match_cons(t, sym__2))
    {
      t_69 = ATgetArgument(t, 0);
      u_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(t_69, u_69, t);
  return(t);
}
static ATerm p_70 (ATerm a_70, ATerm b_70, ATerm c_70, ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,i_70 = NULL,e_10 = NULL;
  t = SSLgetAnnotations(c_70);
  f_70 = t;
  t = SSL_is_string(a_70);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_70, b_70);
  e_10 = t;
  t = SSLsetAnnotations(e_10, f_70);
  if(match_cons(t, sym__2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(d_70, e_70, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_70 = t;
  if(match_cons(t, sym__2))
    {
      l_70 = ATgetArgument(t, 0);
      m_70 = ATgetArgument(t, 1);
      {
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_70(k_70, t);
            LocalPopChoice(f_30);
          }
        else
          {
            t = e_30;
            {
              ATerm g_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_70(l_70, m_70, k_70, t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = g_30;
                  t = p_70(l_70, m_70, k_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_70(k_70, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,y_70 = NULL;
  y_70 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_70, term_p_30);
        t = b_10(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm a_33 = NULL,b_33 = NULL;
          t = term_q_30;
          b_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_30, y_70);
          t = z_9(b_33, y_70, t);
          a_33 = t;
          t = SSL_perror(a_33);
          _fail(t);
        }
      }
  }
  s_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_9(t_70, t);
  r_70 = t;
  t = s_70;
  t = fclose_0_0(t);
  t = r_70;
  return(t);
}
ATerm input_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_71 = NULL,c_71 = NULL;
      t = term_z_24;
      b_71 = t;
      t = term_u_30;
      c_71 = t;
      t = term_v_30;
      t = f_10(b_71, c_71, t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      t = term_x_30;
    }
  t = ReadFromFile_0_0(t);
  t = q_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
  d_71 = t;
  t = term_y_30;
  t = whoami_0_0(t);
  e_71 = t;
  t = term_b_31;
  g_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_31), e_71), term_c_31);
  h_71 = t;
  t = SSL_printnl(g_71, h_71);
  t = term_t_13;
  f_71 = t;
  t = SSL_exit(f_71);
  t = d_71;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm j_71 = NULL;
  j_71 = t;
  if(match_string(t, "-k"))
    {
      t = j_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_71;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
  k_71 = t;
  t = SSL_string_to_int(k_71);
  l_71 = t;
  t = term_e_31;
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, l_71);
  t = i_10(m_71, l_71, t);
  t = k_71;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_71 = NULL;
  o_71 = t;
  if(match_string(t, "-S"))
    {
      t = o_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_71;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL;
  t = term_g_31;
  p_71 = t;
  t = term_s_13;
  q_71 = t;
  t = term_h_31;
  t = i_10(p_71, q_71, t);
  t = term_i_31;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
  r_71 = t;
  t = SSL_string_to_int(r_71);
  s_71 = t;
  t = term_g_31;
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, s_71);
  t = i_10(t_71, s_71, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_71);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  t = term_l_31;
  u_71 = t;
  t = term_y_30;
  v_71 = t;
  t = term_p_31;
  t = i_10(u_71, v_71, t);
  t = term_q_31;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, o_4, t);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, s_4, v_4, t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            t = Option_3_0(w_4, x_4, b_5, t);
          }
      }
    }
  return(t);
}
static ATerm i_10 (ATerm e_76, ATerm f_76, ATerm t)
{
  ATerm w_71 = NULL;
  t = term_z_24;
  w_71 = t;
  t = SSL_table_put(w_71, e_76, f_76);
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, e_76, f_76);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
      t = term_y_30;
      t = e_0(t);
      b_72 = t;
      t = term_w_31;
      c_72 = t;
      t = term_a_32;
      d_72 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_31, term_a_32, b_72);
      t = g_10(c_72, d_72, b_72, t);
      _fail(t);
    }
  else
    {
      ATerm g_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_71 = ATgetFirst((ATermList) t);
          a_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_71;
      t = c_0(t);
      t = term_y_30;
      t = d_0(t);
      g_72 = t;
      t = (ATerm) ATinsert(CheckATermList(a_72), g_72);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_72 = NULL;
  i_72 = t;
  if(match_string(t, "-o"))
    {
      t = i_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_72;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL;
  j_72 = t;
  t = term_f_29;
  k_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, j_72);
  t = i_10(k_72, j_72, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_72);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, g_5, h_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  if(match_string(t, "-i"))
    {
      t = m_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_72;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  n_72 = t;
  t = term_u_30;
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, n_72);
  t = i_10(o_72, n_72, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_72);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  static ATerm j_73 (ATerm t)
  {
    ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL;
    i_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_73 = ATgetFirst((ATermList) t);
        h_73 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_33 = NULL,j_33 = NULL,k_10 = NULL;
          t = SSLgetAnnotations(i_73);
          g_33 = t;
          t = h_73;
          t = j_73(t);
          j_33 = t;
          t = (ATerm) ATinsert(CheckATermList(j_33), g_73);
          k_10 = t;
          t = SSLsetAnnotations(k_10, g_33);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_73;
        t = p_113(t);
      }
    return(t);
  }
  t = j_73(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  q_72 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_72;
    }
  else
    {
      static ATerm l_5 (ATerm t)
      {
        t = not_null(s_72);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_72 = ATgetFirst((ATermList) t);
          if(((s_72 != NULL) && (s_72 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_72;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
static ATerm m_74 (ATerm n_73, ATerm t)
{
  ATerm o_73 = NULL;
  t = SSL_explode_term(n_73);
  if(match_cons(t, sym__2))
    {
      ATerm d_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_73;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_73 = NULL,b_74 = NULL,c_74 = NULL;
  c_74 = t;
  if(match_cons(t, sym__2))
    {
      q_73 = ATgetArgument(t, 0);
      b_74 = ATgetArgument(t, 1);
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_5 (ATerm t)
            {
              t = b_74;
              return(t);
            }
            t = q_73;
            t = at_end_1_0(m_5, t);
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            t = m_74(c_74, t);
          }
      }
    }
  else
    {
      t = m_74(c_74, t);
    }
  return(t);
}
static ATerm t_9 (ATerm l_76, ATerm m_76, ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
  t = l_76;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_74 = NULL;
        t = term_z_24;
        q_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_24, l_76);
        t = f_10(q_74, l_76, t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = (ATerm) ATempty;
      }
  }
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_74, m_76);
  t = conc_0_0(t);
  n_74 = t;
  t = term_z_24;
  p_74 = t;
  t = SSL_table_put(p_74, l_76, n_74);
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, l_76, n_74);
  return(t);
}
static ATerm g_10 (ATerm v_67, ATerm w_67, ATerm u_67, ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_67, w_67);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            ATerm r_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_67, w_67);
        t = f_10(v_67, w_67, t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = (ATerm) ATempty;
      }
  }
  t_74 = t;
  t = (ATerm) ATinsert(CheckATermList(t_74), u_67);
  u_74 = t;
  t = SSL_table_put(v_67, w_67, u_74);
  t = s_74;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
      t = term_y_30;
      t = n_0(t);
      l_75 = t;
      t = term_w_31;
      m_75 = t;
      t = term_a_32;
      n_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_31, term_a_32, l_75);
      t = g_10(m_75, n_75, l_75, t);
      _fail(t);
    }
  else
    {
      ATerm r_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_75 = ATgetFirst((ATermList) t);
          i_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_75 = ATgetFirst((ATermList) t);
          k_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_75;
      t = k_0(t);
      t = j_75;
      t = l_0(t);
      r_75 = t;
      t = (ATerm) ATinsert(CheckATermList(k_75), r_75);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
  t_75 = t;
  t = term_w_24;
  u_75 = t;
  t = (ATerm) ATinsert(ATempty, t_75);
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, (ATerm) ATinsert(ATempty, t_75));
  t = t_9(u_75, v_75, t);
  t = t_75;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm w_75 = NULL;
  w_75 = t;
  if(match_string(t, "--library"))
    {
      t = w_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = w_75;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL;
  x_75 = t;
  t = term_o_25;
  y_75 = t;
  t = term_y_30;
  z_75 = t;
  t = term_t_32;
  t = i_10(y_75, z_75, t);
  t = x_75;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_5, q_5, s_5, t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = Option_3_0(t_5, w_5, x_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_30;
  t = whoami_0_0(t);
  a_76 = t;
  t = term_b_31;
  c_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_32), a_76);
  d_76 = t;
  t = SSL_printnl(c_76, d_76);
  t = term_t_13;
  b_76 = t;
  t = SSL_exit(b_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL;
  t = term_z_24;
  g_76 = t;
  t = term_y_32;
  h_76 = t;
  t = term_z_32;
  t = f_10(g_76, h_76, t);
  return(t);
}
static ATerm c_10 (ATerm y_57, ATerm z_57, ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_57, z_57);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = SSL_addr(y_57, z_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,n_76 = NULL;
  j_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_76;
      t = p_119(t);
    }
  else
    {
      ATerm q_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_76 = ATgetFirst((ATermList) t);
          n_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_76;
      t = foldr_2_0(p_119, q_119, t);
      q_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_76, q_76);
      t = q_119(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  if(match_cons(t, sym__2))
    {
      w_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(w_33, x_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_76 = NULL,p_33 = NULL,t_33 = NULL;
  t = times_0_0(t);
  t_33 = t;
  t = SSL_explode_term(t_33);
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_33;
  t = foldr_2_0(c_6, e_6, t);
  t_76 = t;
  t = SSL_TicksToSeconds(t_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  if(match_cons(t, sym__2))
    {
      f_77 = ATgetArgument(t, 0);
      g_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_77;
        if((f_77 != t))
          {
            _fail(t);
          }
        t = e_77;
        LocalPopChoice(h_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATmakeAppl(sym__2, f_77, g_77);
        {
          ATerm i_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_77, g_77);
              LocalPopChoice(k_33);
            }
          else
            {
              t = i_33;
              t = SSL_gtr(f_77, g_77);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_77, g_77);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm k_77 = NULL;
  k_77 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
        t = term_z_24;
        n_77 = t;
        t = term_g_31;
        o_77 = t;
        t = term_n_33;
        t = f_10(n_77, o_77, t);
        m_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_77, term_t_13);
        t = geq_0_0(t);
        t = k_77;
        t = s_127(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = k_77;
      }
  }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,t_77 = NULL,u_77 = NULL;
  t = run_time_0_0(t);
  q_77 = t;
  t = term_y_30;
  t = whoami_0_0(t);
  r_77 = t;
  t = term_b_31;
  t_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_33), q_77), term_u_33), r_77);
  u_77 = t;
  t = SSL_printnl(t_77, u_77);
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_33), q_77), term_u_33), r_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_13;
  v_77 = t;
  t = SSL_exit(v_77);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL;
  g_78 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_78;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_78 = ATgetArgument(t, 0);
          {
            ATerm j_34 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(g_78);
            j_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_78);
            m_10 = t;
            t = SSLsetAnnotations(m_10, j_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_78;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_129 (ATerm), ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_77 = NULL,z_77 = NULL;
      t = term_z_24;
      y_77 = t;
      t = term_a_34;
      z_77 = t;
      t = term_b_34;
      t = f_10(y_77, z_77, t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = fetch_1_0(h_6, t);
    }
  t = g_129(t);
  return(t);
}
ATerm map_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  static ATerm w_78 (ATerm t)
  {
    ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
    t_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_78;
      }
    else
      {
        ATerm r_34 = NULL,u_34 = NULL,v_34 = NULL,o_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_78 = ATgetFirst((ATermList) t);
            v_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_78);
        r_34 = t;
        t = u_78;
        t = y_112(t);
        u_34 = t;
        t = v_78;
        t = w_78(t);
        v_34 = t;
        t = (ATerm) ATinsert(CheckATermList(v_34), u_34);
        o_10 = t;
        t = SSLsetAnnotations(o_10, r_34);
      }
    return(t);
  }
  t = w_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_78 = ATgetFirst((ATermList) t);
      a_79 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_79 = NULL,f_79 = NULL;
        static ATerm j_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_79)), not_null(f_79));
          return(t);
        }
        t = a_79;
        t = i_0(t);
        if(((e_79 != NULL) && (e_79 != t)))
          _fail(t);
        else
          e_79 = t;
        t = z_78;
        t = g_0(t);
        if(((f_79 != NULL) && (f_79 != t)))
          _fail(t);
        else
          f_79 = t;
        t = a_79;
        t = reverse_acc_2_0(g_0, j_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_30;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,q_10 = NULL;
  n_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_79);
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_79);
  q_10 = t;
  t = SSLsetAnnotations(q_10, l_79);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm p_79 = NULL;
  p_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_79), term_c_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL;
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_79 = NULL,k_79 = NULL;
      t = term_z_24;
      j_79 = t;
      t = term_y_32;
      k_79 = t;
      t = term_z_32;
      t = f_10(j_79, k_79, t);
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = fetch_1_0(k_6, t);
    }
  t = term_f_34;
  t = echo_0_0(t);
  t = term_w_31;
  h_79 = t;
  t = term_a_32;
  i_79 = t;
  t = term_g_34;
  t = f_10(h_79, i_79, t);
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(n_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  static ATerm m_80 (ATerm t)
  {
    ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
    j_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_80 = ATgetFirst((ATermList) t);
        l_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_35 = NULL,g_35 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(j_80);
          d_35 = t;
          t = k_80;
          t = i_113(t);
          g_35 = t;
          t = (ATerm) ATinsert(CheckATermList(l_80), g_35);
          s_10 = t;
          t = SSLsetAnnotations(s_10, d_35);
          LocalPopChoice(i_34);
        }
      else
        {
          t = h_34;
          {
            ATerm o_35 = NULL,r_35 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(j_80);
            o_35 = t;
            t = l_80;
            t = m_80(t);
            r_35 = t;
            t = (ATerm) ATinsert(CheckATermList(r_35), k_80);
            u_10 = t;
            t = SSLsetAnnotations(u_10, o_35);
          }
        }
    }
    return(t);
  }
  t = m_80(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
  q_80 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_80;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_34 = ATgetFirst((ATermList) t);
                ATerm n_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_80;
          }
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = (ATerm) ATinsert(ATempty, q_80);
      }
  }
  r_80 = t;
  t = term_h_29;
  s_80 = t;
  t = SSL_printnl(s_80, r_80);
  t = q_80;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL;
  t = term_z_24;
  w_80 = t;
  t = term_y_32;
  x_80 = t;
  t = term_z_32;
  t = f_10(w_80, x_80, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_10 (ATerm m_69, ATerm n_69, ATerm t)
{
  t = SSL_table_get(m_69, n_69);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL;
  t = term_o_34;
  y_80 = t;
  t = term_y_30;
  z_80 = t;
  t = term_p_34;
  t = i_10(y_80, z_80, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL;
  t = term_o_34;
  c_81 = t;
  t = term_y_30;
  d_81 = t;
  t = term_p_34;
  t = i_10(c_81, d_81, t);
  t = term_s_34;
  a_81 = t;
  t = term_y_30;
  b_81 = t;
  t = term_t_34;
  t = i_10(a_81, b_81, t);
  t = term_w_34;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_6, p_6, s_6, t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      t = Option_3_0(t_6, w_6, z_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,a_11 = NULL;
  j_81 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_81 = ATgetFirst((ATermList) t);
      g_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_81);
  e_81 = t;
  t = f_81;
  t = e_85(t);
  h_81 = t;
  t = g_81;
  t = f_85(t);
  i_81 = t;
  t = (ATerm) ATinsert(CheckATermList(i_81), h_81);
  a_11 = t;
  t = SSLsetAnnotations(a_11, e_81);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_131 (ATerm), ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,t_81 = NULL,u_81 = NULL,n_11 = NULL;
  o_81 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_35;
        t = x_131(t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
      }
  }
  t = o_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_81 = ATgetFirst((ATermList) t);
      r_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_81);
  p_81 = t;
  t = term_y_32;
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_32, q_81);
  t = i_10(u_81, q_81, t);
  t = r_81;
  {
    static ATerm e_82 (ATerm t)
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_81 = NULL;
              x_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_81;
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              t = x_131(t);
              t = Cons_2_0(_id, e_82, t);
            }
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          {
            ATerm a_82 = NULL,b_82 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_82 = ATgetFirst((ATermList) t);
                b_82 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_82), (ATerm) ATmakeAppl(sym_Undefined_1, a_82));
          }
        }
      return(t);
    }
    t = e_82(t);
  }
  t_81 = t;
  t = (ATerm) ATinsert(CheckATermList(t_81), (ATerm) ATmakeAppl(sym_Program_1, q_81));
  n_11 = t;
  t = SSLsetAnnotations(n_11, p_81);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm q_82 = NULL;
  q_82 = t;
  if(match_string(t, "--help"))
    {
      t = q_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_82;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL;
  t = term_a_34;
  r_82 = t;
  t = term_y_30;
  s_82 = t;
  t = term_j_35;
  t = i_10(r_82, s_82, t);
  t = term_k_35;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_131 (ATerm), ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  l_82 = t;
  t = term_w_31;
  n_82 = t;
  t = term_a_32;
  o_82 = t;
  t = (ATerm) ATempty;
  p_82 = t;
  t = SSL_table_put(n_82, o_82, p_82);
  t = l_82;
  {
    static ATerm b_7 (ATerm t)
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_131(t);
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          {
            ATerm p_35 = t;
            int q_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_7, d_7, i_7, t);
                LocalPopChoice(q_35);
              }
            else
              {
                t = p_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
  }
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_83 = NULL;
        d_83 = t;
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_35 = NULL;
              t = d_83;
              {
                ATerm w_35 = t;
                int x_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_35 = NULL,a_36 = NULL;
                    t = term_z_24;
                    z_35 = t;
                    t = term_a_34;
                    a_36 = t;
                    t = term_b_34;
                    t = f_10(z_35, a_36, t);
                    LocalPopChoice(x_35);
                  }
                else
                  {
                    t = w_35;
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = d_83;
              t = default_system_usage_0_0(t);
              t = term_s_13;
              y_35 = t;
              t = SSL_exit(y_35);
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
              {
                ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
                t = term_z_24;
                g_36 = t;
                t = term_o_34;
                h_36 = t;
                t = term_b_36;
                t = f_10(g_36, h_36, t);
                t = d_83;
                t = default_system_about_0_0(t);
                t = term_s_13;
                f_36 = t;
                t = SSL_exit(f_36);
              }
            }
        }
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
              static ATerm l_7 (ATerm t)
              {
                ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,p_11 = NULL;
                j_83 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_83 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_83);
                h_83 = t;
                t = i_83;
                if(((j_82 != NULL) && (j_82 != t)))
                  _fail(t);
                else
                  j_82 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_83);
                p_11 = t;
                t = SSLsetAnnotations(p_11, h_83);
                return(t);
              }
              t = fetch_1_0(l_7, t);
              t = term_b_31;
              f_83 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_82)), term_e_36);
              g_83 = t;
              t = SSL_printnl(f_83, g_83);
              t = (ATerm) ATmakeAppl(sym__2, term_b_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_82)), term_e_36));
              t = default_system_usage_0_0(t);
              t = term_t_13;
              e_83 = t;
              t = SSL_exit(e_83);
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
            }
        }
      }
  }
  k_82 = t;
  t = term_w_31;
  m_82 = t;
  t = SSL_table_destroy(m_82);
  t = k_82;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm l_129 (ATerm), ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  t = parse_options_1_0(i_129, t);
  o_83 = t;
  t = term_i_36;
  r_83 = t;
  t = SSL_table_create(r_83);
  t = term_i_36;
  p_83 = t;
  t = term_j_36;
  q_83 = t;
  t = SSL_table_put(p_83, q_83, o_83);
  t = o_83;
  t = k_129(t);
  {
    ATerm k_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_129, t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = k_36;
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_129(t);
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
static ATerm n_7 (ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      {
        ATerm r_36 = t;
        int t_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(t_36);
          }
        else
          {
            t = r_36;
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
                        t = Option_3_0(q_7, r_7, u_7, t);
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
static ATerm o_7 (ATerm t)
{
  t = input_1_0(v_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL;
  t = term_o_29;
  t_83 = t;
  t = term_y_30;
  u_83 = t;
  t = term_a_37;
  t = i_10(t_83, u_83, t);
  t = term_b_37;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_7, default_usage_0_0, _id, o_7, t);
  return(t);
}
