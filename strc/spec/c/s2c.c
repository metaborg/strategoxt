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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_t_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_i_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
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
ATerm term_a_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_q_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_s_28;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_y_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_u_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
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
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
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
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
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
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_p_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_n_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_s_9, (ATerm) ATempty);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Id_1, term_v_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Id_1, term_z_9);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_10, term_z_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Some_1, term_b_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_9, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Id_1, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_11, (ATerm) ATempty);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Id_1, term_s_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Return_1, term_p_10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Id_1, term_x_11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, (ATerm) ATempty);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_TypeName_2, term_t_9, term_z_10);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Id_1, term_x_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Id_1, term_d_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Id_1, term_j_14);
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
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Id_1, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Id_1, term_d_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Id_1, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Id_1, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Id_1, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, term_n_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Id_1, term_m_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_16, (ATerm) ATempty);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_TypeName_2, term_r_16, term_z_10);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Id_1, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Id_1, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_16, (ATerm) ATempty);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_16, term_z_10);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Id_1, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Id_1, term_q_17);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_c_17);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Stat_1, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_p_10);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Id_1, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_18, (ATerm) ATempty);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_a_19, term_x_14);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_1, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATempty);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Id_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_19, (ATerm) ATempty);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_i_19, term_x_14);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_19, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Id_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_0);
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
  term_a_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_19, term_z_10);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_1, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Id_1, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Id_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_20, term_z_10);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Id_1, term_c_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, term_p_10);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_i_22, (ATerm)ATempty, term_s_9, (ATerm) ATempty);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Id_1, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Id_1, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_24, (ATerm) ATempty);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_a_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_s_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_u_25, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Id_1, term_w_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_v_25, term_z_10);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Include_1, term_e_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Include_1, term_g_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_i_22, (ATerm)ATempty, term_u_25, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Id_1, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Id_1, term_w_26);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Op_2, term_l_27, (ATerm) ATempty);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_p_27, term_o_15);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_q_27);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_f_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_o_29);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_w_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_t_13);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_13);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_b_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_b_31);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_y_32);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_h_31);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_a_34);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_b_32);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_b_31);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_x_34, term_b_31);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_b_31);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, (ATerm) ATempty);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_u_34);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_b_31);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm x_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm l_137 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm w_107 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm m_9 (ATerm x_28, ATerm z_28, ATerm y_28, ATerm t);
static ATerm a_10 (ATerm g_68, ATerm h_68, ATerm t);
static ATerm y_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm o_9 (ATerm j_28, ATerm m_28, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm p_9 (ATerm s_33, ATerm r_33, ATerm t);
static ATerm q_9 (ATerm q_177, ATerm o_33, ATerm q_33, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm v_51 (ATerm z_26, ATerm a_27, ATerm b_27, ATerm d_27, ATerm t);
static ATerm w_51 (ATerm l_30, ATerm r_30, ATerm o_32, ATerm t);
static ATerm x_51 (ATerm l_36, ATerm s_36, ATerm h_37, ATerm t);
static ATerm y_51 (ATerm j_38, ATerm k_38, ATerm l_38, ATerm p_38, ATerm t);
static ATerm b_52 (ATerm t_38, ATerm u_38, ATerm y_38, ATerm z_38, ATerm t);
static ATerm e_52 (ATerm f_39, ATerm g_39, ATerm i_39, ATerm j_39, ATerm t);
static ATerm f_52 (ATerm w_39, ATerm g_40, ATerm h_40, ATerm i_40, ATerm t);
static ATerm g_52 (ATerm s_40, ATerm t_40, ATerm u_40, ATerm v_40, ATerm a_41, ATerm d_41, ATerm i_41, ATerm j_41, ATerm t);
static ATerm h_52 (ATerm l_42, ATerm m_42, ATerm n_42, ATerm o_42, ATerm p_42, ATerm q_42, ATerm t);
static ATerm k_52 (ATerm d_43, ATerm e_43, ATerm f_43, ATerm g_43, ATerm h_43, ATerm i_43, ATerm t);
static ATerm l_52 (ATerm w_43, ATerm a_44, ATerm b_44, ATerm t);
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
static ATerm w_9 (ATerm x_0 (ATerm), ATerm d_1 (ATerm), ATerm z_0, ATerm e_1, ATerm v_0, ATerm t);
ATerm thread_map_1_0 (ATerm p_121 (ATerm), ATerm t);
static ATerm l_59 (ATerm w_56, ATerm x_56, ATerm y_56, ATerm z_56, ATerm a_57, ATerm t);
static ATerm m_59 (ATerm u_57, ATerm v_57, ATerm w_57, ATerm x_57, ATerm t);
static ATerm n_59 (ATerm e_58, ATerm f_58, ATerm g_58, ATerm h_58, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_122 (ATerm), ATerm t);
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
static ATerm b_10 (ATerm w_37, ATerm u_37, ATerm t);
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm j_124 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm c_10 (ATerm j_37, ATerm i_37, ATerm t);
static ATerm q_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm d_10 (ATerm d_38, ATerm g_38, ATerm t);
static ATerm e_10 (ATerm v_137 (ATerm), ATerm i_76, ATerm g_76, ATerm t);
static ATerm y_3 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm g_10 (ATerm c_55, ATerm d_55, ATerm t);
static ATerm h_10 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm j_10 (ATerm y_113 (ATerm), ATerm x_252, ATerm d_40, ATerm t);
static ATerm i_10 (ATerm t_39, ATerm u_39, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_1_0 (ATerm y_130 (ATerm), ATerm t);
static ATerm o_70 (ATerm i_70, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_10 (ATerm z_39, ATerm t);
static ATerm l_10 (ATerm v_53, ATerm w_53, ATerm t);
static ATerm m_10 (ATerm e_55, ATerm f_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_72 (ATerm y_70, ATerm t);
static ATerm k_72 (ATerm j_71, ATerm n_71, ATerm o_71, ATerm t);
static ATerm l_72 (ATerm w_71, ATerm x_71, ATerm y_71, ATerm t);
static ATerm n_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_130 (ATerm), ATerm t);
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
static ATerm w_10 (ATerm n_77, ATerm o_77, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_76 (ATerm c_76, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_10 (ATerm u_77, ATerm v_77, ATerm t);
static ATerm u_10 (ATerm v_67, ATerm w_67, ATerm u_67, ATerm t);
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
static ATerm o_10 (ATerm y_57, ATerm z_57, ATerm t);
ATerm foldr_2_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_129 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm need_help_1_0 (ATerm p_130 (ATerm), ATerm t);
static ATerm x_10 (ATerm c_71, ATerm d_71, ATerm e_71, ATerm t);
ATerm lookup_table_0_1 (ATerm h_69, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_71, ATerm l_71, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_10 (ATerm h_71, ATerm i_71, ATerm t);
static ATerm r_10 (ATerm m_71, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_114 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_114 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_10 (ATerm f_71, ATerm g_71, ATerm t);
static ATerm t_10 (ATerm o_69, ATerm p_69, ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_133 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm f_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm u_130 (ATerm), ATerm t);
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
ATerm listbu1_1_0 (ATerm x_2 (ATerm), ATerm t)
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
      t = listbu1_1_0(x_2, t);
      w_0 = t;
      t = (ATerm) ATinsert(CheckATermList(w_0), o_1);
      s_0 = t;
      t = SSLsetAnnotations(s_0, q_0);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_2(t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
          }
      }
      LocalPopChoice(y_7);
    }
  else
    {
      t = w_7;
      t = x_2(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_8 = ATgetFirst((ATermList) t);
      if(match_cons(f_8, sym_Compound_2))
        {
          ATerm g_8 = ATgetArgument(f_8, 0);
          if(((ATgetType(g_8) != AT_LIST) || !(ATisEmpty(g_8))))
            _fail(t);
          d_4 = ATgetArgument(f_8, 1);
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
      ATerm h_8 = ATgetFirst((ATermList) t);
      if(match_cons(h_8, sym_Compound_2))
        {
          ATerm i_8 = ATgetArgument(h_8, 0);
          if(((ATgetType(i_8) != AT_LIST) || !(ATisEmpty(i_8))))
            _fail(t);
          z_4 = ATgetArgument(h_8, 1);
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
      ATerm j_8 = ATgetFirst((ATermList) t);
      if(match_cons(j_8, sym_Compound_2))
        {
          ATerm l_8 = ATgetArgument(j_8, 0);
          if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
            _fail(t);
          e_5 = ATgetArgument(j_8, 1);
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
      ATerm m_8 = ATgetFirst((ATermList) t);
      if(match_cons(m_8, sym_Compound_2))
        {
          ATerm n_8 = ATgetArgument(m_8, 0);
          if(((ATgetType(n_8) != AT_LIST) || !(ATisEmpty(n_8))))
            _fail(t);
          u_5 = ATgetArgument(m_8, 1);
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
      ATerm r_8 = ATgetFirst((ATermList) t);
      if(match_cons(r_8, sym_Compound_2))
        {
          ATerm s_8 = ATgetArgument(r_8, 0);
          if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
            _fail(t);
          z_5 = ATgetArgument(r_8, 1);
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
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
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
                        ATerm u_8 = t;
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
                            t = u_8;
                            {
                              ATerm w_8 = t;
                              int y_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                                  t = conc_0_0(t);
                                  m_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, m_4, f_3);
                                  LocalPopChoice(y_8);
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
                        int a_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_5 = NULL;
                            t = c_3;
                            t = listbu1_1_0(o_0, t);
                            d_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, b_3, d_5);
                            LocalPopChoice(a_9);
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
ATerm repeat_2_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm d_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_106(t);
        t = b_6(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = d_9;
        t = w_106(t);
      }
    return(t);
  }
  t = b_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  static ATerm h_7 (ATerm t)
  {
    t = l_137(t);
    {
      ATerm i_9 = t;
      int l_9 = stack_ptr;
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
          LocalPopChoice(l_9);
        }
      else
        {
          t = i_9;
          t = SRTS_all(h_7, t);
        }
    }
    t = l_137(t);
    return(t);
  }
  t = h_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    t = bottomup_1_0(w_107, t);
    return(t);
  }
  t = SRTS_all(u_0, t);
  t = w_107(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_i_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_11), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_11, (ATerm) ATinsert(ATempty, term_p_10))))), term_o_11)));
  return(t);
}
static ATerm m_9 (ATerm x_28, ATerm z_28, ATerm y_28, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, z_28)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_28), term_p_11, y_28)));
  return(t);
}
static ATerm a_10 (ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm k_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_68, h_68);
  t = t_10(g_68, h_68, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_7 = ATgetFirst((ATermList) t);
      {
        ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
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
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_Op_2))
    {
      f_11 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(e_11);
        i_2 = t;
        t = f_11;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = g_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, f_11, g_11);
        h_1 = t;
        t = SSLsetAnnotations(h_1, i_2);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm g_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,p_4 = NULL,q_4 = NULL,j_1 = NULL,i_1 = NULL;
              t = SSLgetAnnotations(e_11);
              s_2 = t;
              t = f_11;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = g_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_4 = ATgetFirst((ATermList) t);
                  k_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_11);
              i_4 = t;
              t = k_4;
              t = Cons_2_0(proper_list_0_0, y_0, t);
              p_4 = t;
              t = (ATerm) ATinsert(CheckATermList(p_4), j_4);
              i_1 = t;
              t = SSLsetAnnotations(i_1, i_4);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, f_11, q_4);
              j_1 = t;
              t = SSLsetAnnotations(j_1, s_2);
              LocalPopChoice(l_12);
            }
          else
            {
              t = g_12;
              {
                ATerm d_6 = NULL,g_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(e_11);
                d_6 = t;
                t = f_11;
                {
                  ATerm m_12 = t;
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
                      t = m_12;
                    }
                }
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_6, g_11);
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
  t = term_n_12;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_p_12;
  return(t);
}
static ATerm o_9 (ATerm j_28, ATerm m_28, ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,w_13 = NULL,y_13 = NULL;
  t = j_28;
  if(match_cons(t, sym_Op_2))
    {
      y_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
      {
        ATerm q_6 = NULL,u_6 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(j_28);
        q_6 = t;
        t = w_13;
        t = map_1_0(Cache_0_0, t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, y_13, u_6);
        m_6 = t;
        t = SSLsetAnnotations(m_6, q_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          y_13 = ATgetArgument(t, 0);
          w_13 = ATgetArgument(t, 1);
          {
            ATerm m_7 = NULL,s_7 = NULL,t_7 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(j_28);
            m_7 = t;
            t = y_13;
            t = Cache_0_0(t);
            s_7 = t;
            t = w_13;
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
              y_13 = ATgetArgument(t, 0);
              {
                ATerm x_7 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(j_28);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, y_13);
                v_6 = t;
                t = SSLsetAnnotations(v_6, x_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  y_13 = ATgetArgument(t, 0);
                  {
                    ATerm b_8 = NULL,x_6 = NULL;
                    t = SSLgetAnnotations(j_28);
                    b_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, y_13);
                    x_6 = t;
                    t = SSLsetAnnotations(x_6, b_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      y_13 = ATgetArgument(t, 0);
                      {
                        ATerm q_8 = NULL,y_6 = NULL;
                        t = SSLgetAnnotations(j_28);
                        q_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, y_13);
                        y_6 = t;
                        t = SSLsetAnnotations(y_6, q_8);
                      }
                    }
                  else
                    {
                      ATerm x_8 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          y_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_28);
                      x_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, y_13);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, x_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  c_12 = t;
  t = term_q_12;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, c_12);
  t = l_10(k_12, c_12, t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_12, d_12);
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_28, (ATerm) ATmakeAppl(sym_Defined_2, term_r_12, d_12));
  t = e_10(b_1, j_28, j_12, t);
  t = d_12;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,b_9 = NULL,e_9 = NULL;
        t = (ATerm) ATempty;
        b_9 = t;
        t = term_p_12;
        e_9 = t;
        t = term_u_12;
        t = a_10(e_9, b_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_12) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            z_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_13;
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = (ATerm) ATempty;
      }
  }
  e_12 = t;
  t = (ATerm) ATempty;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, (ATerm) ATinsert(CheckATermList(e_12), (ATerm) ATmakeAppl(sym__3, c_12, d_12, m_28)));
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, (ATerm) ATinsert(CheckATermList(e_12), (ATerm) ATmakeAppl(sym__3, c_12, d_12, m_28))));
  t = e_10(c_1, f_12, i_12, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, d_12);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL,s_10 = NULL;
        t = term_n_12;
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_12, b_15);
        t = a_10(s_10, b_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
            x_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, x_9);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm n_11 = NULL,q_11 = NULL;
          t = term_n_12;
          q_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_12, b_15);
          t = a_10(q_11, b_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm d_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              n_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      {
        ATerm s_15 = NULL,v_11 = NULL;
        s_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              {
                ATerm i_13 = t;
                int j_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(j_13);
                  }
                else
                  {
                    t = i_13;
                  }
              }
            }
        }
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_15, v_11);
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm m_13 = ATgetArgument(t, 0);
                  ATerm n_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, s_15, v_11);
              t = o_9(s_15, v_11, t);
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              {
                ATerm h_12 = NULL,o_12 = NULL;
                o_12 = t;
                t = SSL_explode_term(o_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_13 = ATgetArgument(t, 1);
                      if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
                        {
                          ATerm q_13 = ATgetFirst((ATermList) p_13);
                          ATerm r_13 = (ATerm) ATgetNext((ATermList) p_13);
                          if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
                            {
                              h_12 = ATgetFirst((ATermList) r_13);
                              {
                                ATerm s_13 = (ATerm) ATgetNext((ATermList) r_13);
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
                t = h_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm p_9 (ATerm s_33, ATerm r_33, ATerm t)
{
  ATerm v_15 = NULL;
  t = new_0_0(t);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_15), term_z_10), (ATerm) ATmakeAppl(sym_AssignInit_1, r_33)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, s_33, (ATerm) ATmakeAppl(sym_Id_1, v_15))));
  return(t);
}
static ATerm q_9 (ATerm q_177, ATerm o_33, ATerm q_33, ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = SSLgetAnnotations(q_177);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_33);
  y_15 = t;
  t = SSLsetAnnotations(y_15, w_15);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, x_15, q_33);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(i_18, j_18, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm u_17 = NULL,w_17 = NULL,x_17 = NULL;
  w_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      x_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_14, (ATerm) ATinsert(ATinsert(ATempty, u_17), x_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          x_17 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
          {
            ATerm h_18 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
            t = u_17;
            t = foldr_3_0(f_1, g_1, l_1, t);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_17, h_18);
            x_12 = t;
            t = term_b_14;
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATmakeAppl(sym__2, x_17, h_18));
            t = a_10(y_12, x_12, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm c_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_14) != ATmakeSymbol("j_0", 0, ATtrue)))
                  _fail(t);
                w_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_14, (ATerm) ATinsert(CheckATermList(u_17), (ATerm) ATmakeAppl(sym_Id_1, w_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              x_17 = ATgetArgument(t, 0);
              t = x_17;
            }
          else
            {
              if(match_cons(t, sym_Var_1))
                {
                  x_17 = ATgetArgument(t, 0);
                  {
                    ATerm f_14 = t;
                    int g_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSLgetAnnotations(w_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm h_14 = ATgetFirst((ATermList) t);
                            if((ATgetSymbol((ATermAppl) h_14) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm i_14 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17)));
                        LocalPopChoice(g_14);
                      }
                    else
                      {
                        t = f_14;
                        {
                          ATerm l_14 = t;
                          int m_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SSLgetAnnotations(w_17);
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  ATerm n_14 = ATgetFirst((ATermList) t);
                                  if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("unbound", 0, ATtrue)))
                                    _fail(t);
                                  {
                                    ATerm o_14 = (ATerm) ATgetNext((ATermList) t);
                                    if(((ATgetType(o_14) != AT_LIST) || !(ATisEmpty(o_14))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17)));
                              LocalPopChoice(m_14);
                            }
                          else
                            {
                              t = l_14;
                              {
                                ATerm p_14 = t;
                                int q_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SSLgetAnnotations(w_17);
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17)));
                                    LocalPopChoice(q_14);
                                  }
                                else
                                  {
                                    t = p_14;
                                    t = SSLgetAnnotations(w_17);
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
                                    t = (ATerm) ATmakeAppl(sym_Id_1, x_17);
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
                      x_17 = ATgetArgument(t, 0);
                      {
                        ATerm m_18 = NULL,a_16 = NULL,b_16 = NULL,d_16 = NULL,h_15 = NULL;
                        t = SSL_explode_string(x_17);
                        t = escape_chars_0_0(t);
                        h_15 = t;
                        t = SSL_implode_string(h_15);
                        b_16 = t;
                        t = SSL_explode_string(b_16);
                        d_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_16), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
                        t = conc_0_0(t);
                        a_16 = t;
                        t = SSL_implode_string(a_16);
                        m_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), term_x_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_18)))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Real_1))
                        {
                          x_17 = ATgetArgument(t, 0);
                          {
                            ATerm o_16 = NULL;
                            t = SSL_real_to_string(x_17);
                            o_16 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, o_16))));
                          }
                        }
                      else
                        {
                          ATerm i_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              x_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(x_17);
                          i_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, i_17))));
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
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      f_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_23;
  if(match_string(t, "Cons"))
    {
      ATerm z_21 = NULL;
      t = g_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_22 = ATgetFirst((ATermList) t);
          a_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_23 = ATgetFirst((ATermList) t);
          c_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_23;
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,x_25 = NULL,y_25 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                v_23 = ATgetArgument(t, 0);
                c_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_23;
            if(match_cons(t, sym_TypeName_2))
              {
                w_23 = ATgetArgument(t, 0);
                b_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_23;
            if(match_cons(t, sym_TypeSpec_3))
              {
                x_23 = ATgetArgument(t, 0);
                y_23 = ATgetArgument(t, 1);
                a_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_23;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_23;
            if(match_cons(t, sym_TypeId_1))
              {
                z_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_23;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = a_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = c_24;
            if(match_cons(t, sym_Id_1))
              {
                x_25 = ATgetArgument(t, 0);
                {
                  ATerm d_26 = NULL,p_7 = NULL;
                  t = SSLgetAnnotations(c_24);
                  d_26 = t;
                  t = x_25;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, x_25);
                  p_7 = t;
                  t = SSLsetAnnotations(p_7, d_26);
                }
              }
            else
              {
                ATerm i_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,e_8 = NULL,d_8 = NULL,c_8 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    x_25 = ATgetArgument(t, 0);
                    y_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_24);
                i_26 = t;
                t = x_25;
                if(match_cons(t, sym_Id_1))
                  {
                    r_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_25);
                q_26 = t;
                t = r_26;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, r_26);
                c_8 = t;
                t = SSLsetAnnotations(c_8, q_26);
                s_26 = t;
                t = y_25;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_26 = ATgetFirst((ATermList) t);
                    n_26 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_25);
                l_26 = t;
                t = n_26;
                t = Cons_2_0(_id, m_1, t);
                o_26 = t;
                t = (ATerm) ATinsert(CheckATermList(o_26), m_26);
                d_8 = t;
                t = SSLsetAnnotations(d_8, l_26);
                p_26 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, s_26, p_26);
                e_8 = t;
                t = SSLsetAnnotations(e_8, i_26);
              }
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_j_15, (ATerm) ATinsert(ATempty, b_23));
          }
      }
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, z_22), z_21)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = g_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_15;
    }
  return(t);
}
static ATerm v_51 (ATerm z_26, ATerm a_27, ATerm b_27, ATerm d_27, ATerm t)
{
  ATerm o_27 = NULL,r_27 = NULL,x_26 = NULL,y_26 = NULL,c_27 = NULL;
  t = z_26;
  {
    ATerm p_15 = t;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL;
        s_27 = t;
        if(match_string(t, "Nil"))
          {
            t = s_27;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = s_27;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_15;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, a_27, term_t_13);
  {
    static ATerm q_1 (ATerm t)
    {
      ATerm v_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
      if(match_cons(t, sym__2))
        {
          v_27 = ATgetArgument(t, 0);
          z_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_27);
      e_28 = t;
      t = v_27;
      if(match_cons(t, sym_Var_1))
        {
          g_28 = ATgetArgument(t, 0);
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_28 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_28)), b_27));
                t_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_28)), b_27)));
                t = q_9(v_27, g_28, t_28, t);
                LocalPopChoice(r_15);
              }
            else
              {
                t = q_15;
                {
                  ATerm u_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_28)), b_27));
                  u_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_28)), b_27)));
                  t = p_9(v_27, u_28, t);
                }
              }
          }
        }
      else
        {
          ATerm q_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_28)), b_27));
          q_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_27, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_28)), b_27)));
          t = p_9(v_27, q_29, t);
        }
      a_28 = t;
      t = term_u_13;
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_27, term_u_13);
      t = o_10(z_27, f_28, t);
      b_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_28, b_28);
      return(t);
    }
    t = thread_map_1_0(q_1, t);
  }
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      {
        ATerm z_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_27;
  t = foldr_3_0(r_1, s_1, t_1, t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_26, r_27);
  y_26 = t;
  t = term_b_14;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATmakeAppl(sym__2, z_26, r_27));
  t = a_10(c_27, y_26, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_16) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_26)), b_27)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, o_27), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10))));
  return(t);
}
static ATerm w_51 (ATerm l_30, ATerm r_30, ATerm o_32, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_real_to_string(l_30);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, r_30)), term_l_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_16, r_30))), (ATerm) ATmakeAppl(sym_FloatConst_1, e_36))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10))));
  return(t);
}
static ATerm x_51 (ATerm l_36, ATerm s_36, ATerm h_37, ATerm t)
{
  ATerm i_38 = NULL;
  t = SSL_int_to_string(l_36);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, s_36)), term_u_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_17, s_36))), (ATerm) ATmakeAppl(sym_IntConst_1, i_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10))));
  return(t);
}
static ATerm y_51 (ATerm j_38, ATerm k_38, ATerm l_38, ATerm p_38, ATerm t)
{
  t = SSLgetAnnotations(j_38);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_38), term_c_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_38), l_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, l_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_38), term_p_11, l_38)));
  return(t);
}
static ATerm b_52 (ATerm t_38, ATerm u_38, ATerm y_38, ATerm z_38, ATerm t)
{
  t = SSLgetAnnotations(t_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, u_38), term_c_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, u_38), y_38)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, y_38))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, u_38), term_p_11, y_38)));
  return(t);
}
static ATerm e_52 (ATerm f_39, ATerm g_39, ATerm i_39, ATerm j_39, ATerm t)
{
  t = SSLgetAnnotations(f_39);
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
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_39), i_39), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, i_39))))));
  return(t);
}
static ATerm f_52 (ATerm w_39, ATerm g_40, ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSLgetAnnotations(w_39);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) h_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(j_17) != AT_LIST) || !(ATisEmpty(j_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_40), term_p_11, h_40));
  return(t);
}
static ATerm g_52 (ATerm s_40, ATerm t_40, ATerm u_40, ATerm v_40, ATerm a_41, ATerm d_41, ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm t_41 = NULL,v_41 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  t = t_40;
  {
    ATerm k_17 = t;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL;
        y_41 = t;
        if(match_string(t, "Nil"))
          {
            t = y_41;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = y_41;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, v_40, term_t_13);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL,k_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm l_17 = ATgetArgument(t, 0);
          if(match_cons(l_17, sym_Var_1))
            {
              d_42 = ATgetArgument(l_17, 0);
            }
          else
            _fail(t);
          e_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_42);
      f_42 = t;
      t = term_u_13;
      k_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_42, term_u_13);
      t = o_10(e_42, k_42, t);
      i_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_42), term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, f_42)), (ATerm) ATmakeAppl(sym_Id_1, s_40))))), i_42);
      return(t);
    }
    t = thread_map_1_0(u_1, t);
  }
  if(match_cons(t, sym__2))
    {
      t_41 = ATgetArgument(t, 0);
      {
        ATerm m_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
  j_27 = t;
  t = term_b_14;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATmakeAppl(sym__2, t_40, u_40));
  t = a_10(k_27, j_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_41, (ATerm) ATinsert(ATempty, a_41));
  t = conc_0_0(t);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, i_27)), (ATerm) ATmakeAppl(sym_Id_1, s_40))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_41), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_40), d_41, i_41))));
  return(t);
}
static ATerm h_52 (ATerm l_42, ATerm m_42, ATerm n_42, ATerm o_42, ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_real_to_string(m_42);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, a_43)), (ATerm) ATmakeAppl(sym_Id_1, l_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, l_42), o_42, p_42))));
  return(t);
}
static ATerm k_52 (ATerm d_43, ATerm e_43, ATerm f_43, ATerm g_43, ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm v_43 = NULL;
  t = SSL_int_to_string(e_43);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, v_43)), (ATerm) ATmakeAppl(sym_Id_1, d_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, d_43), g_43, h_43))));
  return(t);
}
static ATerm l_52 (ATerm w_43, ATerm a_44, ATerm b_44, ATerm t)
{
  t = a_44;
  {
    ATerm s_17 = t;
    if((PushChoice() == 0))
      {
        ATerm j_44 = NULL,k_44 = NULL,n_44 = NULL,k_8 = NULL;
        n_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            k_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_44);
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, k_44);
        k_8 = t;
        t = SSLsetAnnotations(k_8, j_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_43)));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm d_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(d_30, f_30, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm v_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_SVar_1))
        {
          v_46 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
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
  t = (ATerm) ATmakeAppl(sym_Id_1, v_46);
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
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm t_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(match_cons(f_18, sym_SVar_1))
        {
          t_47 = ATgetArgument(f_18, 0);
        }
      else
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(((ATgetType(g_18) != AT_LIST) || !(ATisEmpty(g_18))))
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
  t = (ATerm) ATmakeAppl(sym_Id_1, t_47);
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
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(f_2, t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = l_18;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_49), term_z_10), term_s_18);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_49;
  if(match_cons(t, sym_Var_1))
    {
      f_49 = ATgetArgument(t, 0);
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_49;
            t = q_9(h_49, f_49, i_49, t);
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            t = g_49;
            t = p_9(h_49, i_49, t);
          }
      }
    }
  else
    {
      t = g_49;
      t = p_9(h_49, i_49, t);
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm p_44 = NULL,s_44 = NULL,u_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,c_45 = NULL,d_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,c_46 = NULL;
  a_46 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_46 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, c_46, (ATerm) ATinsert(ATempty, y_45));
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          c_46 = ATgetArgument(t, 0);
          {
            ATerm l_46 = NULL;
            t = a_46;
            t = new_0_0(t);
            l_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_46), term_z_10)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_Id_1, l_46)))), term_w_18), c_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_46), term_p_11, term_p_10))));
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
                  y_45 = ATgetArgument(t, 1);
                  s_45 = ATgetArgument(t, 2);
                  {
                    ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
                    t = c_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        z_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_45;
                    t = map_1_0(v_1, t);
                    s_46 = t;
                    t = s_45;
                    t = map_1_0(x_1, t);
                    t_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_10)), t_46), s_46);
                    t = concat_0_0(t);
                    u_46 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, z_45), u_46)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      c_46 = ATgetArgument(t, 0);
                      y_45 = ATgetArgument(t, 1);
                      s_45 = ATgetArgument(t, 2);
                      {
                        ATerm n_47 = NULL,p_47 = NULL,q_47 = NULL;
                        t = y_45;
                        t = map_1_0(c_2, t);
                        n_47 = t;
                        t = s_45;
                        t = map_1_0(d_2, t);
                        p_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, n_47, p_47);
                        t = conc_0_0(t);
                        q_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, c_46), q_47)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          c_46 = ATgetArgument(t, 0);
                          {
                            ATerm z_47 = NULL;
                            t = a_46;
                            t = new_0_0(t);
                            z_47 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_47), term_z_10), term_x_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_b_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10)))), term_f_19), c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_Id_1, z_47))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              c_46 = ATgetArgument(t, 0);
                              y_45 = ATgetArgument(t, 1);
                              {
                                ATerm c_48 = NULL;
                                t = a_46;
                                t = new_0_0(t);
                                c_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_z_10), term_x_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, y_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_Id_1, c_48))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  c_46 = ATgetArgument(t, 0);
                                  y_45 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_46, y_45);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      c_46 = ATgetArgument(t, 0);
                                      y_45 = ATgetArgument(t, 1);
                                      s_45 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_48 = NULL,l_48 = NULL;
                                        t = a_46;
                                        t = new_0_0(t);
                                        k_48 = t;
                                        t = new_0_0(t);
                                        l_48 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_l_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_48), term_z_10), term_o_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_48), term_z_10), term_x_18)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_b_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, l_48))))), term_w_18), c_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, (ATerm) ATmakeAppl(sym_Id_1, k_48))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          c_46 = ATgetArgument(t, 0);
                                          y_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_46, term_r_19, y_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              c_46 = ATgetArgument(t, 0);
                                              y_45 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_46, y_45);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  c_46 = ATgetArgument(t, 0);
                                                  y_45 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, y_45), c_46));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      c_46 = ATgetArgument(t, 0);
                                                      y_45 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm z_48 = NULL;
                                                        t = c_46;
                                                        t = map_1_0(g_2, t);
                                                        z_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, z_48)), (ATerm) ATinsert(ATempty, y_45));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10)));
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
                                                                  c_46 = ATgetArgument(t, 0);
                                                                  y_45 = ATgetArgument(t, 1);
                                                                  t = c_46;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      z_45 = ATgetArgument(t, 0);
                                                                      z_44 = ATgetArgument(t, 1);
                                                                      t = z_44;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          p_44 = ATgetFirst((ATermList) t);
                                                                          s_44 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = s_44;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_44 = ATgetFirst((ATermList) t);
                                                                              y_44 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = y_44;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = z_45;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm t_19 = t;
                                                                                      int u_19 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm e_49 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_44, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, y_45)))))), (ATerm) ATmakeAppl(sym__2, p_44, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, y_45)))));
                                                                                          t = map_1_0(h_2, t);
                                                                                          e_49 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, y_45)), term_e_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, y_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, e_49), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10))));
                                                                                          LocalPopChoice(u_19);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_19;
                                                                                          t = v_51(z_45, z_44, y_45, a_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_51(z_45, z_44, y_45, a_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_45;
                                                                                  t = v_51(z_45, z_44, y_45, a_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_45;
                                                                              t = v_51(z_45, z_44, y_45, a_46, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = z_45;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm h_20 = t;
                                                                                  int i_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, y_45)), term_e_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, y_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10))));
                                                                                      LocalPopChoice(i_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_20;
                                                                                      t = v_51(z_45, z_44, y_45, a_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = v_51(z_45, z_44, y_45, a_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_45;
                                                                              t = v_51(z_45, z_44, y_45, a_46, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          z_45 = ATgetArgument(t, 0);
                                                                          t = w_51(z_45, y_45, a_46, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              z_45 = ATgetArgument(t, 0);
                                                                              t = x_51(z_45, y_45, a_46, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  z_45 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm u_49 = NULL,u_27 = NULL,w_27 = NULL,y_27 = NULL,n_27 = NULL;
                                                                                    t = SSL_explode_string(z_45);
                                                                                    t = escape_chars_0_0(t);
                                                                                    n_27 = t;
                                                                                    t = SSL_implode_string(n_27);
                                                                                    w_27 = t;
                                                                                    t = SSL_explode_string(w_27);
                                                                                    y_27 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_27), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
                                                                                    t = conc_0_0(t);
                                                                                    u_27 = t;
                                                                                    t = SSL_implode_string(u_27);
                                                                                    u_49 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, y_45))), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), term_x_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, u_49))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, term_p_10))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      z_45 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm p_20 = t;
                                                                                        int q_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = y_51(c_46, z_45, y_45, a_46, t);
                                                                                            LocalPopChoice(q_20);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_20;
                                                                                            {
                                                                                              ATerm r_20 = t;
                                                                                              int s_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = b_52(c_46, z_45, y_45, a_46, t);
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
                                                                                                        t = e_52(c_46, z_45, y_45, a_46, t);
                                                                                                        LocalPopChoice(u_20);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = t_20;
                                                                                                        t = f_52(c_46, z_45, y_45, a_46, t);
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
                                                                                          z_45 = ATgetArgument(t, 0);
                                                                                          z_44 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, z_44, y_45)), (ATerm) ATmakeAppl(sym_Match_2, z_45, y_45)));
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
                                                                      c_46 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, c_46, term_p_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          c_46 = ATgetArgument(t, 0);
                                                                          y_45 = ATgetArgument(t, 1);
                                                                          s_45 = ATgetArgument(t, 2);
                                                                          t = c_46;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              z_45 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = y_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              v_45 = ATgetFirst((ATermList) t);
                                                                              r_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = v_45;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  l_45 = ATgetArgument(t, 0);
                                                                                  n_45 = ATgetArgument(t, 1);
                                                                                  q_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = l_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  m_45 = ATgetArgument(t, 0);
                                                                                  k_45 = ATgetArgument(t, 1);
                                                                                  t = n_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      a_45 = ATgetFirst((ATermList) t);
                                                                                      d_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = d_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          g_45 = ATgetFirst((ATermList) t);
                                                                                          j_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = j_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = g_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  i_45 = ATgetArgument(t, 0);
                                                                                                  t = a_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      c_45 = ATgetArgument(t, 0);
                                                                                                      t = k_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = m_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm y_20 = t;
                                                                                                              int z_20 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_45))), term_e_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_45), term_p_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, (ATerm) ATmakeAppl(sym_Id_1, z_45)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_45), term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_a_20, (ATerm) ATmakeAppl(sym_Id_1, z_45)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, z_45), r_45, s_45))));
                                                                                                                  LocalPopChoice(z_20);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_20;
                                                                                                                  t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = m_45;
                                                                                                          t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_45;
                                                                                                      t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = m_45;
                                                                                                  t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = m_45;
                                                                                              t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_45;
                                                                                          t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = k_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = m_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm a_21 = t;
                                                                                                  int b_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_45))), term_e_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, z_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, q_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, z_45), r_45, s_45))));
                                                                                                      LocalPopChoice(b_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_21;
                                                                                                      t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = m_45;
                                                                                              t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_45;
                                                                                          t = g_52(z_45, m_45, k_45, n_45, q_45, r_45, s_45, a_46, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      m_45 = ATgetArgument(t, 0);
                                                                                      t = h_52(z_45, m_45, q_45, r_45, s_45, a_46, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          m_45 = ATgetArgument(t, 0);
                                                                                          t = k_52(z_45, m_45, q_45, r_45, s_45, a_46, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm f_51 = NULL,i_28 = NULL,k_28 = NULL,r_28 = NULL,c_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              m_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(m_45);
                                                                                          t = escape_chars_0_0(t);
                                                                                          c_28 = t;
                                                                                          t = SSL_implode_string(c_28);
                                                                                          k_28 = t;
                                                                                          t = SSL_explode_string(k_28);
                                                                                          r_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_28), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
                                                                                          t = conc_0_0(t);
                                                                                          i_28 = t;
                                                                                          t = SSL_implode_string(i_28);
                                                                                          f_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, f_51))), (ATerm) ATmakeAppl(sym_Id_1, z_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, z_45), r_45, s_45))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = s_45;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              c_46 = ATgetArgument(t, 0);
                                                                              y_45 = ATgetArgument(t, 1);
                                                                              s_45 = ATgetArgument(t, 2);
                                                                              u_45 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, c_46), (ATerm) ATmakeAppl(sym_Case_3, y_45, s_45, u_45));
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
                                                                                      y_45 = ATgetArgument(t, 1);
                                                                                      t = c_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          z_45 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = y_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          v_45 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm e_21 = t;
                                                                                            int f_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, z_45), term_c_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, z_45), (ATerm) ATmakeAppl(sym_Id_1, v_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, v_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_45), term_p_11, (ATerm) ATmakeAppl(sym_Id_1, v_45))));
                                                                                                LocalPopChoice(f_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_21;
                                                                                                t = l_52(z_45, y_45, a_46, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_52(z_45, y_45, a_46, t);
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
                                                                                              z_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_45), term_p_11, term_p_10));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm u_51 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              c_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_46;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          u_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_p_10, term_p_11, u_51));
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
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,e_53 = NULL,f_53 = NULL,o_8 = NULL;
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_53 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(k_21) != AT_INT) || (ATgetInt((ATermInt) k_21) != 34)))
                _fail(t);
              g_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_53), term_t_14), term_l_21);
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          {
            ATerm j_53 = NULL,k_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_53 = ATgetFirst((ATermList) t);
                k_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_53;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_53), term_l_21), term_l_21);
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_53), term_m_21), term_l_21);
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_53), term_n_21), term_l_21);
                  }
              }
          }
        }
      f_53 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_52 = ATgetFirst((ATermList) t);
          a_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_53);
      y_52 = t;
      t = a_53;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      e_53 = t;
      t = (ATerm) ATinsert(CheckATermList(e_53), z_52);
      o_8 = t;
      t = SSLsetAnnotations(o_8, y_52);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm j_54 = NULL,l_54 = NULL,m_54 = NULL;
        m_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_54 = ATgetFirst((ATermList) t);
            l_54 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm a_29 = NULL,d_29 = NULL,p_8 = NULL;
              t = SSLgetAnnotations(m_54);
              a_29 = t;
              t = l_54;
              t = escape_chars_0_0(t);
              d_29 = t;
              t = (ATerm) ATinsert(CheckATermList(d_29), j_54);
              p_8 = t;
              t = SSLsetAnnotations(p_8, a_29);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_54;
          }
      }
    }
  return(t);
}
static ATerm w_9 (ATerm x_0 (ATerm), ATerm d_1 (ATerm), ATerm z_0, ATerm e_1, ATerm v_0, ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,w_54 = NULL,x_54 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_0, v_0);
  t = x_0(t);
  if(match_cons(t, sym__2))
    {
      w_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_1, s_54);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      x_54 = ATgetArgument(t, 0);
      t_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_54), w_54), t_54);
  return(t);
}
ATerm thread_map_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  static ATerm w_55 (ATerm t)
  {
    ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,o_55 = NULL,r_55 = NULL;
    l_55 = t;
    if(match_cons(t, sym__2))
      {
        o_55 = ATgetArgument(t, 0);
        r_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_55;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_55 = ATgetFirst((ATermList) t);
        k_55 = (ATerm) ATgetNext((ATermList) t);
        t = l_55;
        t = w_9(p_121, w_55, j_55, k_55, r_55, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_55);
      }
    return(t);
  }
  t = w_55(t);
  return(t);
}
static ATerm l_59 (ATerm w_56, ATerm x_56, ATerm y_56, ATerm z_56, ATerm a_57, ATerm t)
{
  ATerm f_57 = NULL,h_57 = NULL,i_57 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  t = w_56;
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        ATerm j_57 = NULL;
        j_57 = t;
        if(match_string(t, "Nil"))
          {
            t = j_57;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = j_57;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
  }
  t = x_56;
  t = map_1_0(j_2, t);
  t = (ATerm) ATmakeAppl(sym__2, x_56, term_t_13);
  t = thread_map_1_0(k_2, t);
  if(match_cons(t, sym__2))
    {
      f_57 = ATgetArgument(t, 0);
      {
        ATerm p_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_56;
  t = foldr_3_0(l_2, m_2, n_2, t);
  i_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_56, i_57);
  k_29 = t;
  t = term_b_14;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATmakeAppl(sym__2, w_56, i_57));
  t = a_10(l_29, k_29, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_57, (ATerm) ATinsert(ATempty, y_56));
  t = conc_0_0(t);
  h_57 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, j_29)), term_p_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, h_57), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_56)));
  return(t);
}
static ATerm m_59 (ATerm u_57, ATerm v_57, ATerm w_57, ATerm x_57, ATerm t)
{
  ATerm d_58 = NULL;
  t = SSL_real_to_string(u_57);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, d_58)), term_p_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_57)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_57)));
  return(t);
}
static ATerm n_59 (ATerm e_58, ATerm f_58, ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm l_58 = NULL;
  t = SSL_int_to_string(e_58);
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, l_58)), term_p_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_58)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, g_58)));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,t_8 = NULL;
  m_57 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_57);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_57);
  t_8 = t;
  t = SSLsetAnnotations(t_8, k_57);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_21 = ATgetArgument(t, 0);
      if(match_cons(r_21, sym_Var_1))
        {
          n_57 = ATgetArgument(r_21, 0);
        }
      else
        _fail(t);
      o_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(o_57);
  p_57 = t;
  t = term_u_13;
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_57, term_u_13);
  t = o_10(o_57, r_57, t);
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_57), term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, p_57)), term_p_10)))), q_57);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym__2))
    {
      s_57 = ATgetArgument(t, 0);
      t_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(s_57, t_57, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  t_58 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      u_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
      y_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_58;
  if(match_cons(t, sym_Match_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_58;
  if(match_cons(t, sym_Op_2))
    {
      w_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
      t = s_58;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_58 = ATgetFirst((ATermList) t);
          o_58 = (ATerm) ATgetNext((ATermList) t);
          t = o_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_58 = ATgetFirst((ATermList) t);
              r_58 = (ATerm) ATgetNext((ATermList) t);
              t = r_58;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_58;
                  if(match_cons(t, sym_Var_1))
                    {
                      q_58 = ATgetArgument(t, 0);
                      t = m_58;
                      if(match_cons(t, sym_Var_1))
                        {
                          n_58 = ATgetArgument(t, 0);
                          t = w_58;
                          if(match_string(t, "Cons"))
                            {
                              ATerm s_21 = t;
                              int t_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, term_p_10)), term_e_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, term_p_10)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_58), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, q_58), term_p_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_v_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATempty, term_u_21)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_58), term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATempty, term_u_21)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_58)));
                                  LocalPopChoice(t_21);
                                }
                              else
                                {
                                  t = s_21;
                                  t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                                }
                            }
                          else
                            {
                              t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                            }
                        }
                      else
                        {
                          t = w_58;
                          t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                        }
                    }
                  else
                    {
                      t = w_58;
                      t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                    }
                }
              else
                {
                  t = w_58;
                  t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                }
            }
          else
            {
              t = w_58;
              t = l_59(w_58, s_58, x_58, y_58, t_58, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = w_58;
              if(match_string(t, "Nil"))
                {
                  ATerm v_21 = t;
                  int w_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATempty, term_p_10)), term_e_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, term_p_10))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_58)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_58)));
                      LocalPopChoice(w_21);
                    }
                  else
                    {
                      t = v_21;
                      t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                    }
                }
              else
                {
                  t = l_59(w_58, s_58, x_58, y_58, t_58, t);
                }
            }
          else
            {
              t = w_58;
              t = l_59(w_58, s_58, x_58, y_58, t_58, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          w_58 = ATgetArgument(t, 0);
          t = m_59(w_58, x_58, y_58, t_58, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              w_58 = ATgetArgument(t, 0);
              t = n_59(w_58, x_58, y_58, t_58, t);
            }
          else
            {
              ATerm j_59 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL,n_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  w_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(w_58);
              t = escape_chars_0_0(t);
              n_29 = t;
              t = SSL_implode_string(n_29);
              s_29 = t;
              t = SSL_explode_string(s_29);
              u_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_29), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
              t = conc_0_0(t);
              r_29 = t;
              t = SSL_implode_string(r_29);
              j_59 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, j_59))), term_p_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_58)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_58)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t)
  {
    t = topdown_1_0(v_107, t);
    return(t);
  }
  t = v_107(t);
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
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
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
static ATerm r_2 (ATerm t)
{
  t = repeat_2_0(t_2, _id, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  g_60 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
      j_60 = ATgetArgument(t, 2);
      k_60 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
        t = h_60;
        t = is_local_function_0_0(t);
        t = i_60;
        t = map_1_0(TranslateVarDec_0_0, t);
        p_60 = t;
        t = j_60;
        t = map_1_0(TranslateVarDec_0_0, t);
        q_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
        t = conc_0_0(t);
        r_60 = t;
        t = k_60;
        t = topdown_1_0(p_2, t);
        s_60 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_j_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, r_60, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_11), term_w_18), s_60)));
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
          t = h_60;
          {
            ATerm k_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_22;
              }
          }
          t = i_60;
          t = map_1_0(TranslateVarDec_0_0, t);
          g_30 = t;
          t = j_60;
          t = map_1_0(TranslateVarDec_0_0, t);
          h_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_30, h_30);
          t = conc_0_0(t);
          i_30 = t;
          t = k_60;
          t = topdown_1_0(r_2, t);
          j_30 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_60), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, i_30, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_11), term_w_18), j_30)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
  g_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_61;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_61 = ATgetFirst((ATermList) t);
          i_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = NULL,y_30 = NULL,z_30 = NULL,c_9 = NULL;
            t = SSLgetAnnotations(g_61);
            v_30 = t;
            t = h_61;
            t = c_122(t);
            y_30 = t;
            t = i_61;
            t = filter_1_0(c_122, t);
            z_30 = t;
            t = (ATerm) ATinsert(CheckATermList(z_30), y_30);
            c_9 = t;
            t = SSLsetAnnotations(c_9, v_30);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = i_61;
            t = filter_1_0(c_122, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm o_61 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          o_61 = ATgetArgument(t, 0);
          {
            ATerm p_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      {
        ATerm q_61 = NULL;
        t = o_61;
        t = map_1_0(TranslateType_0_0, t);
        q_61 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_9, (ATerm) ATmakeAppl(sym_ParamList_1, q_61));
      }
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm q_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_t_9;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_61;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            x_61 = ATgetArgument(t, 0);
            {
              ATerm t_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_22);
        {
          ATerm a_62 = NULL;
          t = x_61;
          t = map_1_0(TranslateType_0_0, t);
          a_62 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_61), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, a_62)))));
        }
      }
    else
      {
        t = r_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm u_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_61), term_z_10)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm v_22 = t;
  if((PushChoice() == 0))
    {
      ATerm c_62 = NULL,d_62 = NULL;
      if(match_cons(t, sym__2))
        {
          c_62 = ATgetArgument(t, 0);
          d_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_62, d_62);
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_62, d_62);
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = SSL_gtr(c_62, d_62);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, c_62, d_62);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_22;
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
  ATerm k_62 = NULL;
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, k_62);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, k_62, term_e_23);
  t = leq_0_0(t);
  t = k_62;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,f_9 = NULL;
  e_62 = t;
  t = SSL_explode_string(e_62);
  j_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_62 = ATgetFirst((ATermList) t);
      h_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_62);
  f_62 = t;
  t = g_62;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_23, g_62);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, g_62, term_k_23);
        t = leq_0_0(t);
        t = g_62;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATmakeAppl(sym__2, term_l_23, g_62);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, g_62, term_m_23);
        t = leq_0_0(t);
        t = g_62;
      }
  }
  t = h_62;
  t = Cons_2_0(a_3, h_3, t);
  i_62 = t;
  t = (ATerm) ATinsert(CheckATermList(i_62), g_62);
  f_9 = t;
  t = SSLsetAnnotations(f_9, f_62);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
  x_62 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      y_62 = ATgetArgument(t, 0);
      z_62 = ATgetArgument(t, 1);
      a_63 = ATgetArgument(t, 2);
      {
        ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
        t = z_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        f_63 = t;
        t = a_63;
        t = map_1_0(TranslateVarDec_0_0, t);
        g_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_63, g_63);
        t = conc_0_0(t);
        h_63 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, h_63, (ATerm) ATinsert(ATempty, term_i_11)))))));
      }
    }
  else
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              y_62 = ATgetArgument(t, 0);
              z_62 = ATgetArgument(t, 1);
              a_63 = ATgetArgument(t, 2);
              {
                ATerm p_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(o_23);
          {
            ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
            t = z_62;
            t = map_1_0(TranslateVarDec_0_0, t);
            l_63 = t;
            t = a_63;
            t = map_1_0(TranslateVarDec_0_0, t);
            m_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
            t = conc_0_0(t);
            n_63 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, n_63, (ATerm) ATinsert(ATempty, term_i_11)))))));
          }
        }
      else
        {
          t = n_23;
          if(match_cons(t, sym_SDefT_4))
            {
              y_62 = ATgetArgument(t, 0);
              z_62 = ATgetArgument(t, 1);
              a_63 = ATgetArgument(t, 2);
              {
                ATerm q_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm r_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
                t = y_62;
                t = is_local_function_0_0(t);
                t = z_62;
                t = map_1_0(TranslateVarDec_0_0, t);
                r_63 = t;
                t = a_63;
                t = map_1_0(TranslateVarDec_0_0, t);
                s_63 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_63, s_63);
                t = conc_0_0(t);
                t_63 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_j_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, t_63, (ATerm) ATinsert(ATempty, term_i_11)))))));
                LocalPopChoice(s_23);
              }
            else
              {
                t = r_23;
                {
                  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
                  t = y_62;
                  {
                    ATerm t_23 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = t_23;
                      }
                  }
                  t = z_62;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  l_31 = t;
                  t = a_63;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  m_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_31, m_31);
                  t = conc_0_0(t);
                  n_31 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, y_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, n_31, (ATerm) ATinsert(ATempty, term_i_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL;
  if(match_cons(t, sym__2))
    {
      j_64 = ATgetArgument(t, 0);
      k_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(j_64, k_64, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm b_10 (ATerm w_37, ATerm u_37, ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,b_64 = NULL,d_64 = NULL,e_64 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,h_64 = NULL;
  t = u_37;
  {
    ATerm u_23 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            h_64 = ATgetArgument(t, 0);
            {
              ATerm e_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_24);
        t = h_64;
        t = foldr_3_0(j_3, k_3, l_3, t);
      }
    else
      {
        t = u_23;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm f_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_t_13;
      }
  }
  z_63 = t;
  t = SSL_int_to_string(z_63);
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_37, z_63);
  x_31 = t;
  t = term_b_14;
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATmakeAppl(sym__2, w_37, z_63));
  t = a_10(y_31, x_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm g_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_24) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(w_37);
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_64), term_t_14), (ATerm) ATinsert(ATempty, term_t_14));
  t = conc_0_0(t);
  e_64 = t;
  t = SSL_implode_string(e_64);
  b_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_31))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_31), term_p_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), (ATerm) ATmakeAppl(sym_IntConst_1, y_63)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, b_64)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_64 = ATgetFirst((ATermList) t);
      p_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_64;
  if(match_int(t, 95))
    {
      ATerm r_64 = NULL;
      t = p_64;
      t = p_0(t);
      r_64 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(r_64), term_l_24), term_l_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm t_64 = NULL;
          t = p_64;
          t = p_0(t);
          t_64 = t;
          t = (ATerm) ATinsert(CheckATermList(t_64), term_l_24);
        }
      else
        {
          ATerm v_64 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = p_64;
          t = p_0(t);
          v_64 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_64), term_l_24), term_m_24), term_l_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm j_124 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  z_64 = t;
  t = SSL_explode_string(z_64);
  {
    static ATerm l_65 (ATerm t)
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_124(l_65, t);
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          {
            ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
            k_65 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_65 = ATgetFirst((ATermList) t);
                j_65 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm d_32 = NULL,g_32 = NULL,h_9 = NULL;
                  t = SSLgetAnnotations(k_65);
                  d_32 = t;
                  t = j_65;
                  t = l_65(t);
                  g_32 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_32), i_65);
                  h_9 = t;
                  t = SSLsetAnnotations(h_9, d_32);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_65;
              }
          }
        }
      return(t);
    }
    t = l_65(t);
  }
  y_64 = t;
  t = SSL_implode_string(y_64);
  return(t);
}
ATerm foldr_3_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_65;
      t = a_121(t);
    }
  else
    {
      ATerm t_65 = NULL,u_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_65 = ATgetFirst((ATermList) t);
          q_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_65;
      t = c_121(t);
      t_65 = t;
      t = q_65;
      t = foldr_3_0(a_121, b_121, c_121, t);
      u_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
      t = b_121(t);
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym__2))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(h_66, i_66, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm c_10 (ATerm j_37, ATerm i_37, ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,f_66 = NULL;
  t = i_37;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            f_66 = ATgetArgument(t, 0);
            {
              ATerm r_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_24);
        t = f_66;
        t = foldr_3_0(m_3, n_3, o_3, t);
      }
    else
      {
        t = p_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm s_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_t_13;
      }
  }
  w_65 = t;
  t = j_37;
  t = escape_1_0(Cify_1_0, t);
  y_65 = t;
  t = SSL_int_to_string(w_65);
  z_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_65), term_u_24), y_65), term_t_24);
  c_66 = t;
  t = SSL_concat_strings(c_66);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, w_65);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_24, x_65);
  b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_37, w_65), (ATerm) ATmakeAppl(sym_Defined_2, term_v_24, x_65));
  t = e_10(p_3, a_66, b_66, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_y_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, x_65), term_z_10)));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  m_66 = t;
  t = term_z_24;
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, m_66);
  t = l_10(n_66, m_66, t);
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, l_66);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_a_25;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_66 = NULL,k_66 = NULL;
        t = term_d_25;
        j_66 = t;
        t = term_a_25;
        k_66 = t;
        t = term_e_25;
        t = t_10(j_66, k_66, t);
        t = map_1_0(q_3, t);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      i_67 = ATgetArgument(t, 0);
      j_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(i_67, j_67, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      k_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(k_67, l_67, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      ATerm g_25 = ATgetArgument(t, 1);
      ATerm h_25 = ATgetArgument(t, 2);
      ATerm i_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_67 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      o_67 = ATgetArgument(t, 1);
      {
        ATerm k_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_67), term_z_10)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,t_67 = NULL;
  if(match_cons(t, sym__3))
    {
      q_67 = ATgetArgument(t, 0);
      r_67 = ATgetArgument(t, 1);
      t_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_9(q_67, r_67, t_67, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm f_68 = NULL,i_68 = NULL,j_68 = NULL;
  j_68 = t;
  if(match_cons(t, sym_Conc_2))
    {
      f_68 = ATgetArgument(t, 0);
      i_68 = ATgetArgument(t, 1);
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, f_68, i_68);
            t = conc_0_0(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            t = j_68;
          }
      }
    }
  else
    {
      t = j_68;
    }
  return(t);
}
static ATerm d_10 (ATerm d_38, ATerm g_38, ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  z_66 = t;
  t = GenerateIncludes_0_0(t);
  r_66 = t;
  t = d_38;
  t = map_1_0(r_3, t);
  s_66 = t;
  t = d_38;
  t = map_1_0(s_3, t);
  t = concat_0_0(t);
  t_66 = t;
  t = g_38;
  t = map_1_0(SDefToDeclaration_0_0, t);
  u_66 = t;
  t = g_38;
  t = filter_1_0(t_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  v_66 = t;
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_67 = NULL,l_32 = NULL,m_32 = NULL;
        t = (ATerm) ATempty;
        l_32 = t;
        t = term_p_12;
        m_32 = t;
        t = term_u_12;
        t = a_10(m_32, l_32, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            m_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_67;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = (ATerm) ATempty;
      }
  }
  c_67 = t;
  t = map_1_0(u_3, t);
  a_67 = t;
  t = c_67;
  t = map_1_0(v_3, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, w_3, t);
  b_67 = t;
  t = z_66;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_67 = NULL,z_67 = NULL;
        t = term_d_25;
        y_67 = t;
        t = term_s_25;
        z_67 = t;
        t = term_t_25;
        t = t_10(y_67, z_67, t);
        t = z_66;
        LocalPopChoice(r_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = q_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_v_25, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_a_26)))), term_s_19));
      }
  }
  w_66 = t;
  t = z_66;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_68 = NULL,b_68 = NULL;
        t = term_d_25;
        a_68 = t;
        t = term_s_25;
        b_68 = t;
        t = term_t_25;
        t = t_10(a_68, b_68, t);
        t = z_66;
        LocalPopChoice(c_26);
        t = (ATerm) ATinsert(ATempty, term_f_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATinsert(ATempty, term_h_26);
      }
  }
  x_66 = t;
  t = z_66;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_68 = NULL,d_68 = NULL;
        t = term_d_25;
        c_68 = t;
        t = term_s_25;
        d_68 = t;
        t = term_t_25;
        t = t_10(c_68, d_68, t);
        t = z_66;
        LocalPopChoice(k_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = j_26;
        {
          ATerm e_68 = NULL;
          t = MainDef_0_0(t);
          e_68 = t;
          t = (ATerm) ATinsert(ATempty, e_68);
        }
      }
  }
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, r_66, w_66), s_66), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_t_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_a_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, t_66)))), a_67), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_t_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_a_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, b_67)))), x_66), u_66), y_66), v_66));
  t = bottomup_1_0(x_3, t);
  return(t);
}
static ATerm e_10 (ATerm v_137 (ATerm), ATerm i_76, ATerm g_76, ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  r_68 = t;
  t = v_137(t);
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_68, i_76, g_76);
  t = u_10(o_68, i_76, g_76, t);
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_68 = NULL;
        t = term_h_27;
        w_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_68, term_h_27);
        t = t_10(o_68, w_68, t);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_68 = ATgetFirst((ATermList) t);
      q_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_68, term_h_27, (ATerm) ATinsert(CheckATermList(q_68), (ATerm) ATinsert(CheckATermList(p_68), i_76)));
  t = lookup_table_0_1(o_68, t);
  v_68 = t;
  t = term_h_27;
  s_68 = t;
  t = (ATerm) ATinsert(CheckATermList(q_68), (ATerm) ATinsert(CheckATermList(p_68), i_76));
  t_68 = t;
  t = v_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(s_68, t_68, u_68, t);
  t = r_68;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  x_68 = t;
  t = term_m_27;
  y_68 = t;
  t = term_q_27;
  z_68 = t;
  t = term_t_27;
  t = e_10(y_3, y_68, z_68, t);
  t = x_68;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
        {
          ATerm d_28 = ATgetFirst((ATermList) x_27);
          if(match_cons(d_28, sym_Signature_1))
            {
              ATerm l_28 = ATgetArgument(d_28, 0);
              if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
                {
                  ATerm n_28 = ATgetFirst((ATermList) l_28);
                  if(match_cons(n_28, sym_Constructors_1))
                    {
                      b_69 = ATgetArgument(n_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_28 = (ATerm) ATgetNext((ATermList) l_28);
                    if(((ATgetType(o_28) != AT_LIST) || !(ATisEmpty(o_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm h_28 = (ATerm) ATgetNext((ATermList) x_27);
            if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
              {
                ATerm p_28 = ATgetFirst((ATermList) h_28);
                if(match_cons(p_28, sym_Strategies_1))
                  {
                    c_69 = ATgetArgument(p_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm q_28 = (ATerm) ATgetNext((ATermList) h_28);
                  if(((ATgetType(q_28) != AT_LIST) || !(ATisEmpty(q_28))))
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
  t = d_10(b_69, c_69, t);
  t = listbottomup_1_0(z_3, t);
  return(t);
}
static ATerm g_10 (ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm e_69 = NULL;
  t = SSL_fputc(c_55, d_55);
  e_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_69);
  return(t);
}
static ATerm h_10 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm f_69 = NULL;
  t = SSL_write_term_to_stream_text(x_39, y_39);
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_69);
  return(t);
}
static ATerm j_10 (ATerm y_113 (ATerm), ATerm x_252, ATerm d_40, ATerm t)
{
  ATerm g_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_252, term_s_28);
  t = n_10(t);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_69, d_40);
  t = y_113(t);
  t = fclose_0_0(t);
  t = d_40;
  return(t);
}
static ATerm i_10 (ATerm t_39, ATerm u_39, ATerm t)
{
  ATerm l_69 = NULL;
  t = SSL_write_term_to_stream_baf(t_39, u_39);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_69);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(match_cons(v_28, sym_Stream_1))
        {
          u_69 = ATgetArgument(v_28, 0);
        }
      else
        _fail(t);
      v_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(u_69, v_69, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(match_cons(w_28, sym_Stream_1))
        {
          z_69 = ATgetArgument(w_28, 0);
        }
      else
        _fail(t);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(z_69, a_70, t);
  w_69 = t;
  t = term_b_29;
  x_69 = t;
  t = w_69;
  if(match_cons(t, sym_Stream_1))
    {
      y_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, w_69);
  t = g_10(x_69, y_69, t);
  return(t);
}
ATerm output_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  t = y_130(t);
  n_69 = t;
  {
    ATerm c_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_69 = NULL,r_69 = NULL;
        t = term_d_25;
        q_69 = t;
        t = term_f_29;
        r_69 = t;
        t = term_g_29;
        t = t_10(q_69, r_69, t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = c_29;
        t = term_h_29;
      }
  }
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_69, n_69);
  {
    ATerm i_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_69 = NULL,t_69 = NULL;
        t = term_d_25;
        s_69 = t;
        t = term_o_29;
        t_69 = t;
        t = term_p_29;
        t = t_10(s_69, t_69, t);
        t = (ATerm) ATmakeAppl(sym__2, m_69, n_69);
        LocalPopChoice(m_29);
        if(match_cons(t, sym__2))
          {
            ATerm t_29 = ATgetArgument(t, 0);
            ATerm v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_10(a_4, m_69, n_69, t);
      }
    else
      {
        t = i_29;
        if(match_cons(t, sym__2))
          {
            ATerm w_29 = ATgetArgument(t, 0);
            ATerm x_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_10(b_4, m_69, n_69, t);
      }
  }
  return(t);
}
static ATerm o_70 (ATerm i_70, ATerm t)
{
  t = SSL_fclose(i_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  m_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_70 = ATgetArgument(t, 0);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_70);
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            t = o_70(m_70, t);
          }
      }
    }
  else
    {
      t = o_70(m_70, t);
    }
  return(t);
}
static ATerm k_10 (ATerm z_39, ATerm t)
{
  t = SSL_read_term_from_stream(z_39);
  return(t);
}
static ATerm l_10 (ATerm v_53, ATerm w_53, ATerm t)
{
  t = SSL_strcat(v_53, w_53);
  return(t);
}
static ATerm m_10 (ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm p_70 = NULL;
  t = SSL_fopen(e_55, f_55);
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_70 = NULL;
  t = SSL_stdin_stream();
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_70);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_70 = NULL;
  t = SSL_stdout_stream();
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_70);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_70 = NULL;
  t = SSL_stderr_stream();
  s_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_70);
  return(t);
}
static ATerm j_72 (ATerm y_70, ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_explode_term(y_70);
  if(match_cons(t, sym__2))
    {
      ATerm a_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_30 = ATgetArgument(t, 1);
        if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
          {
            z_70 = ATgetFirst((ATermList) b_30);
            {
              ATerm c_30 = (ATerm) ATgetNext((ATermList) b_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_70;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_70;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_70;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_70;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_72 (ATerm j_71, ATerm n_71, ATerm o_71, ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,u_71 = NULL,j_9 = NULL;
  t = SSLgetAnnotations(o_71);
  r_71 = t;
  t = j_71;
  if(match_cons(t, sym_Path_1))
    {
      u_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_71, n_71);
  j_9 = t;
  t = SSLsetAnnotations(j_9, r_71);
  if(match_cons(t, sym__2))
    {
      p_71 = ATgetArgument(t, 0);
      q_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(p_71, q_71, t);
  return(t);
}
static ATerm l_72 (ATerm w_71, ATerm x_71, ATerm y_71, ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,e_72 = NULL,k_9 = NULL;
  t = SSLgetAnnotations(y_71);
  b_72 = t;
  t = SSL_is_string(w_71);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_72, x_71);
  k_9 = t;
  t = SSLsetAnnotations(k_9, b_72);
  if(match_cons(t, sym__2))
    {
      z_71 = ATgetArgument(t, 0);
      a_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(z_71, a_72, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  if(match_cons(t, sym__2))
    {
      h_72 = ATgetArgument(t, 0);
      i_72 = ATgetArgument(t, 1);
      {
        ATerm e_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_72(g_72, t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = e_30;
            {
              ATerm m_30 = t;
              int n_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_72(h_72, i_72, g_72, t);
                  LocalPopChoice(n_30);
                }
              else
                {
                  t = m_30;
                  t = l_72(h_72, i_72, g_72, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_72(g_72, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,u_72 = NULL;
  u_72 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_72, term_q_30);
        t = n_10(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm z_32 = NULL,a_33 = NULL;
          t = term_s_30;
          a_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_30, u_72);
          t = l_10(a_33, u_72, t);
          z_32 = t;
          t = SSL_perror(z_32);
          _fail(t);
        }
      }
  }
  o_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_10(p_72, t);
  n_72 = t;
  t = o_72;
  t = fclose_0_0(t);
  t = n_72;
  return(t);
}
ATerm input_1_0 (ATerm z_130 (ATerm), ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_72 = NULL,y_72 = NULL;
      t = term_d_25;
      x_72 = t;
      t = term_w_30;
      y_72 = t;
      t = term_x_30;
      t = t_10(x_72, y_72, t);
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      t = term_a_31;
    }
  t = ReadFromFile_0_0(t);
  t = z_130(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  z_72 = t;
  t = term_b_31;
  t = whoami_0_0(t);
  a_73 = t;
  t = term_c_31;
  c_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_31), a_73), term_d_31);
  d_73 = t;
  t = SSL_printnl(c_73, d_73);
  t = term_u_13;
  b_73 = t;
  t = SSL_exit(b_73);
  t = z_72;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm f_73 = NULL;
  f_73 = t;
  if(match_string(t, "-k"))
    {
      t = f_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_73;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL;
  g_73 = t;
  t = SSL_string_to_int(g_73);
  h_73 = t;
  t = term_f_31;
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, h_73);
  t = w_10(i_73, h_73, t);
  t = g_73;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm k_73 = NULL;
  k_73 = t;
  if(match_string(t, "-S"))
    {
      t = k_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_73;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  t = term_h_31;
  l_73 = t;
  t = term_t_13;
  m_73 = t;
  t = term_i_31;
  t = w_10(l_73, m_73, t);
  t = term_j_31;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_k_31;
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
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL;
  n_73 = t;
  t = SSL_string_to_int(n_73);
  o_73 = t;
  t = term_h_31;
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_31, o_73);
  t = w_10(p_73, o_73, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_73);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_o_31;
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
  ATerm q_73 = NULL,r_73 = NULL;
  t = term_p_31;
  q_73 = t;
  t = term_b_31;
  r_73 = t;
  t = term_q_31;
  t = w_10(q_73, r_73, t);
  t = term_r_31;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, o_4, t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm v_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, s_4, v_4, t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = v_31;
            t = Option_3_0(w_4, x_4, b_5, t);
          }
      }
    }
  return(t);
}
static ATerm w_10 (ATerm n_77, ATerm o_77, ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL;
  t = term_d_25;
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_25, n_77, o_77);
  t = lookup_table_0_1(s_73, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(n_77, o_77, t_73, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_25, n_77, o_77);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
      t = term_b_31;
      t = e_0(t);
      z_73 = t;
      t = term_a_32;
      a_74 = t;
      t = term_b_32;
      b_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, z_73);
      t = u_10(a_74, b_74, z_73, t);
      _fail(t);
    }
  else
    {
      ATerm e_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_73 = ATgetFirst((ATermList) t);
          y_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_73;
      t = c_0(t);
      t = term_b_31;
      t = d_0(t);
      e_74 = t;
      t = (ATerm) ATinsert(CheckATermList(y_73), e_74);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_74 = NULL;
  g_74 = t;
  if(match_string(t, "-o"))
    {
      t = g_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_74;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL;
  h_74 = t;
  t = term_f_29;
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, h_74);
  t = w_10(i_74, h_74, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_74);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, g_5, h_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm k_74 = NULL;
  k_74 = t;
  if(match_string(t, "-i"))
    {
      t = k_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_74;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL;
  l_74 = t;
  t = term_w_30;
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, l_74);
  t = w_10(m_74, l_74, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_74);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  static ATerm y_75 (ATerm t)
  {
    ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
    x_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_75 = ATgetFirst((ATermList) t);
        w_75 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_33 = NULL,i_33 = NULL,r_9 = NULL;
          t = SSLgetAnnotations(x_75);
          f_33 = t;
          t = w_75;
          t = y_75(t);
          i_33 = t;
          t = (ATerm) ATinsert(CheckATermList(i_33), v_75);
          r_9 = t;
          t = SSLsetAnnotations(r_9, f_33);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_75;
        t = y_114(t);
      }
    return(t);
  }
  t = y_75(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
  o_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_74;
    }
  else
    {
      static ATerm l_5 (ATerm t)
      {
        t = not_null(q_74);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_74 = ATgetFirst((ATermList) t);
          if(((q_74 != NULL) && (q_74 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_74;
      t = at_end_1_0(l_5, t);
    }
  return(t);
}
static ATerm q_76 (ATerm c_76, ATerm t)
{
  ATerm d_76 = NULL;
  t = SSL_explode_term(c_76);
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_76;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_76 = NULL,l_76 = NULL,m_76 = NULL;
  m_76 = t;
  if(match_cons(t, sym__2))
    {
      f_76 = ATgetArgument(t, 0);
      l_76 = ATgetArgument(t, 1);
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_5 (ATerm t)
            {
              t = l_76;
              return(t);
            }
            t = f_76;
            t = at_end_1_0(m_5, t);
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            t = q_76(m_76, t);
          }
      }
    }
  else
    {
      t = q_76(m_76, t);
    }
  return(t);
}
static ATerm f_10 (ATerm u_77, ATerm v_77, ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  t = u_77;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_76 = NULL;
        t = term_d_25;
        w_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_25, u_77);
        t = t_10(w_76, u_77, t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATempty;
      }
  }
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_76, v_77);
  t = conc_0_0(t);
  r_76 = t;
  t = term_d_25;
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_25, u_77, r_76);
  t = lookup_table_0_1(t_76, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(u_77, r_76, u_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_25, u_77, r_76);
  return(t);
}
static ATerm u_10 (ATerm v_67, ATerm w_67, ATerm u_67, ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  y_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_67, w_67);
  {
    ATerm n_32 = t;
    int p_32 = stack_ptr;
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
        t = t_10(v_67, w_67, t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATempty;
      }
  }
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_67, w_67, (ATerm) ATinsert(CheckATermList(z_76), u_67));
  t = lookup_table_0_1(v_67, t);
  c_77 = t;
  t = (ATerm) ATinsert(CheckATermList(z_76), u_67);
  a_77 = t;
  t = c_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(w_67, a_77, b_77, t);
  t = y_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
      t = term_b_31;
      t = n_0(t);
      p_77 = t;
      t = term_a_32;
      q_77 = t;
      t = term_b_32;
      r_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, p_77);
      t = u_10(q_77, r_77, p_77, t);
      _fail(t);
    }
  else
    {
      ATerm x_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_77 = ATgetFirst((ATermList) t);
          k_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_77;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_77 = ATgetFirst((ATermList) t);
          m_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_77;
      t = k_0(t);
      t = l_77;
      t = l_0(t);
      x_77 = t;
      t = (ATerm) ATinsert(CheckATermList(m_77), x_77);
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
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  t = term_a_25;
  a_78 = t;
  t = (ATerm) ATinsert(ATempty, z_77);
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATempty, z_77));
  t = f_10(a_78, b_78, t);
  t = z_77;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_78 = NULL;
  c_78 = t;
  if(match_string(t, "--library"))
    {
      t = c_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = c_78;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  t = term_s_25;
  e_78 = t;
  t = term_b_31;
  f_78 = t;
  t = term_t_32;
  t = w_10(e_78, f_78, t);
  t = d_78;
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
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_31;
  t = whoami_0_0(t);
  g_78 = t;
  t = term_c_31;
  i_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_32), g_78);
  j_78 = t;
  t = SSL_printnl(i_78, j_78);
  t = term_u_13;
  h_78 = t;
  t = SSL_exit(h_78);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL;
  t = term_d_25;
  k_78 = t;
  t = term_y_32;
  l_78 = t;
  t = term_b_33;
  t = t_10(k_78, l_78, t);
  return(t);
}
static ATerm o_10 (ATerm y_57, ATerm z_57, ATerm t)
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
ATerm foldr_2_0 (ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
  n_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_78;
      t = y_120(t);
    }
  else
    {
      ATerm s_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_78 = ATgetFirst((ATermList) t);
          p_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_78;
      t = foldr_2_0(y_120, z_120, t);
      s_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_78, s_78);
      t = z_120(t);
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
  t = term_t_13;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(v_33, w_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_78 = NULL,n_33 = NULL,p_33 = NULL;
  t = times_0_0(t);
  p_33 = t;
  t = SSL_explode_term(p_33);
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_33;
  t = foldr_2_0(c_6, e_6, t);
  v_78 = t;
  t = SSL_TicksToSeconds(v_78);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  g_79 = t;
  if(match_cons(t, sym__2))
    {
      h_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_79;
        if((h_79 != t))
          {
            _fail(t);
          }
        t = g_79;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = (ATerm) ATmakeAppl(sym__2, h_79, i_79);
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_79, i_79);
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = SSL_gtr(h_79, i_79);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_79, i_79);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm m_79 = NULL;
  m_79 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
        t = term_d_25;
        p_79 = t;
        t = term_h_31;
        q_79 = t;
        t = term_t_33;
        t = t_10(p_79, q_79, t);
        o_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_79, term_u_13);
        t = geq_0_0(t);
        t = m_79;
        t = b_129(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = m_79;
      }
  }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,v_79 = NULL,w_79 = NULL;
  t = run_time_0_0(t);
  s_79 = t;
  t = term_b_31;
  t = whoami_0_0(t);
  t_79 = t;
  t = term_c_31;
  v_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_33), s_79), term_u_33), t_79);
  w_79 = t;
  t = SSL_printnl(v_79, w_79);
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_33), s_79), term_u_33), t_79));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_13;
  x_79 = t;
  t = SSL_exit(x_79);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL;
  i_80 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_80;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_80 = ATgetArgument(t, 0);
          {
            ATerm i_34 = NULL,u_9 = NULL;
            t = SSLgetAnnotations(i_80);
            i_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_80);
            u_9 = t;
            t = SSLsetAnnotations(u_9, i_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_80;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_80 = NULL,b_80 = NULL;
      t = term_d_25;
      a_80 = t;
      t = term_a_34;
      b_80 = t;
      t = term_b_34;
      t = t_10(a_80, b_80, t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = fetch_1_0(h_6, t);
    }
  t = p_130(t);
  return(t);
}
static ATerm x_10 (ATerm c_71, ATerm d_71, ATerm e_71, ATerm t)
{
  ATerm k_80 = NULL;
  t = SSL_hashtable_put(e_71, c_71, d_71);
  k_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_80);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_69, ATerm t)
{
  ATerm t_80 = NULL;
  t = table_hashtable_0_0(t);
  t_80 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL;
        t = t_80;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_10(h_69, o_34, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm t_34 = NULL;
          t = h_69;
          t = table_create_0_0(t);
          t = t_80;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_10(h_69, t_34, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_71, ATerm l_71, ATerm t)
{
  ATerm w_80 = NULL;
  t = SSL_hashtable_create(k_71, l_71);
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_80);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,b_81 = NULL,c_81 = NULL;
  x_80 = t;
  t = term_e_34;
  b_81 = t;
  t = term_f_34;
  c_81 = t;
  t = x_80;
  t = new_hashtable_0_2(b_81, c_81, t);
  y_80 = t;
  t = x_80;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(x_80, y_80, z_80, t);
  t = x_80;
  return(t);
}
static ATerm q_10 (ATerm h_71, ATerm i_71, ATerm t)
{
  ATerm d_81 = NULL;
  t = SSL_hashtable_remove(i_71, h_71);
  d_81 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_81);
  return(t);
}
static ATerm r_10 (ATerm m_71, ATerm t)
{
  ATerm e_81 = NULL;
  t = SSL_hashtable_destroy(m_71);
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_81);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_81 = NULL;
  t = SSL_table_hashtable();
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_81);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  g_81 = t;
  t = table_hashtable_0_0(t);
  h_81 = t;
  t = lookup_table_0_1(g_81, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(j_81, t);
  t = h_81;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_10(g_81, i_81, t);
  t = g_81;
  return(t);
}
ATerm map_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  static ATerm y_81 (ATerm t)
  {
    ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
    v_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_81;
      }
    else
      {
        ATerm y_34 = NULL,b_35 = NULL,c_35 = NULL,v_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_81 = ATgetFirst((ATermList) t);
            x_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_81);
        y_34 = t;
        t = w_81;
        t = h_114(t);
        b_35 = t;
        t = x_81;
        t = y_81(t);
        c_35 = t;
        t = (ATerm) ATinsert(CheckATermList(c_35), b_35);
        v_10 = t;
        t = SSLsetAnnotations(v_10, y_34);
      }
    return(t);
  }
  t = y_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_82 = ATgetFirst((ATermList) t);
      c_82 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_82 = NULL,h_82 = NULL;
        static ATerm j_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_82)), not_null(h_82));
          return(t);
        }
        t = c_82;
        t = i_0(t);
        if(((g_82 != NULL) && (g_82 != t)))
          _fail(t);
        else
          g_82 = t;
        t = b_82;
        t = g_0(t);
        if(((h_82 != NULL) && (h_82 != t)))
          _fail(t);
        else
          h_82 = t;
        t = c_82;
        t = reverse_acc_2_0(g_0, j_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_31;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,a_11 = NULL;
  p_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_82);
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_82);
  a_11 = t;
  t = SSLsetAnnotations(a_11, n_82);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm r_82 = NULL;
  r_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_82), term_g_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL;
  ATerm h_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_82 = NULL,m_82 = NULL;
      t = term_d_25;
      l_82 = t;
      t = term_y_32;
      m_82 = t;
      t = term_b_33;
      t = t_10(l_82, m_82, t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = h_34;
      t = fetch_1_0(k_6, t);
    }
  t = term_k_34;
  t = echo_0_0(t);
  t = term_a_32;
  j_82 = t;
  t = term_b_32;
  k_82 = t;
  t = term_l_34;
  t = t_10(j_82, k_82, t);
  t = reverse_acc_2_0(_id, l_6, t);
  t = map_1_0(n_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_114 (ATerm), ATerm t)
{
  static ATerm o_83 (ATerm t)
  {
    ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
    l_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_83 = ATgetFirst((ATermList) t);
        n_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_34 = t;
      int n_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_35 = NULL,n_35 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(l_83);
          k_35 = t;
          t = m_83;
          t = r_114(t);
          n_35 = t;
          t = (ATerm) ATinsert(CheckATermList(n_83), n_35);
          c_11 = t;
          t = SSLsetAnnotations(c_11, k_35);
          LocalPopChoice(n_34);
        }
      else
        {
          t = m_34;
          {
            ATerm v_35 = NULL,y_35 = NULL,d_11 = NULL;
            t = SSLgetAnnotations(l_83);
            v_35 = t;
            t = n_83;
            t = o_83(t);
            y_35 = t;
            t = (ATerm) ATinsert(CheckATermList(y_35), m_83);
            d_11 = t;
            t = SSLsetAnnotations(d_11, v_35);
          }
        }
    }
    return(t);
  }
  t = o_83(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL;
  s_83 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_83;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_34 = ATgetFirst((ATermList) t);
                ATerm s_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_83;
          }
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATinsert(ATempty, s_83);
      }
  }
  t_83 = t;
  t = term_h_29;
  u_83 = t;
  t = SSL_printnl(u_83, t_83);
  t = s_83;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL;
  t = term_d_25;
  y_83 = t;
  t = term_y_32;
  z_83 = t;
  t = term_b_33;
  t = t_10(y_83, z_83, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_10 (ATerm f_71, ATerm g_71, ATerm t)
{
  t = SSL_hashtable_get(g_71, f_71);
  return(t);
}
static ATerm t_10 (ATerm o_69, ATerm p_69, ATerm t)
{
  ATerm a_84 = NULL;
  t = lookup_table_0_1(o_69, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(p_69, a_84, t);
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
  ATerm c_84 = NULL,d_84 = NULL;
  t = term_u_34;
  c_84 = t;
  t = term_b_31;
  d_84 = t;
  t = term_v_34;
  t = w_10(c_84, d_84, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_w_34;
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
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL;
  t = term_u_34;
  g_84 = t;
  t = term_b_31;
  h_84 = t;
  t = term_v_34;
  t = w_10(g_84, h_84, t);
  t = term_x_34;
  e_84 = t;
  t = term_b_31;
  f_84 = t;
  t = term_z_34;
  t = w_10(e_84, f_84, t);
  t = term_a_35;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_6, p_6, s_6, t);
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      t = Option_3_0(t_6, w_6, z_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,l_11 = NULL;
  n_84 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_84 = ATgetFirst((ATermList) t);
      k_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_84);
  i_84 = t;
  t = j_84;
  t = n_86(t);
  l_84 = t;
  t = k_84;
  t = o_86(t);
  m_84 = t;
  t = (ATerm) ATinsert(CheckATermList(m_84), l_84);
  l_11 = t;
  t = SSLsetAnnotations(l_11, i_84);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,x_84 = NULL,y_84 = NULL,r_11 = NULL;
  s_84 = t;
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_35;
        t = g_133(t);
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
      }
  }
  t = s_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_84 = ATgetFirst((ATermList) t);
      v_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_84);
  t_84 = t;
  t = term_y_32;
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_32, u_84);
  t = w_10(y_84, u_84, t);
  t = v_84;
  {
    static ATerm i_85 (ATerm t)
    {
      ATerm j_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_85 = NULL;
              b_85 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_85;
              LocalPopChoice(o_35);
            }
          else
            {
              t = m_35;
              t = g_133(t);
              t = Cons_2_0(_id, i_85, t);
            }
          LocalPopChoice(l_35);
        }
      else
        {
          t = j_35;
          {
            ATerm e_85 = NULL,f_85 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_85 = ATgetFirst((ATermList) t);
                f_85 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_85), (ATerm) ATmakeAppl(sym_Undefined_1, e_85));
          }
        }
      return(t);
    }
    t = i_85(t);
  }
  x_84 = t;
  t = (ATerm) ATinsert(CheckATermList(x_84), (ATerm) ATmakeAppl(sym_Program_1, u_84));
  r_11 = t;
  t = SSLsetAnnotations(r_11, t_84);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm v_85 = NULL;
  v_85 = t;
  if(match_string(t, "--help"))
    {
      t = v_85;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_85;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_85;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  t = term_a_34;
  w_85 = t;
  t = term_b_31;
  x_85 = t;
  t = term_p_35;
  t = w_10(w_85, x_85, t);
  t = term_q_35;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_133 (ATerm), ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  p_85 = t;
  t = term_a_32;
  q_85 = t;
  t = term_s_35;
  t = lookup_table_0_1(q_85, t);
  u_85 = t;
  t = term_b_32;
  r_85 = t;
  t = (ATerm) ATempty;
  s_85 = t;
  t = u_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(r_85, s_85, t_85, t);
  t = p_85;
  {
    static ATerm b_7 (ATerm t)
    {
      ATerm t_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_133(t);
          LocalPopChoice(u_35);
        }
      else
        {
          t = t_35;
          {
            ATerm w_35 = t;
            int x_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_7, d_7, i_7, t);
                LocalPopChoice(x_35);
              }
            else
              {
                t = w_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
  }
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_86 = NULL;
        i_86 = t;
        {
          ATerm b_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_36 = NULL;
              t = i_86;
              {
                ATerm d_36 = t;
                int f_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_36 = NULL,i_36 = NULL;
                    t = term_d_25;
                    h_36 = t;
                    t = term_a_34;
                    i_36 = t;
                    t = term_b_34;
                    t = t_10(h_36, i_36, t);
                    LocalPopChoice(f_36);
                  }
                else
                  {
                    t = d_36;
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = i_86;
              t = default_system_usage_0_0(t);
              t = term_t_13;
              g_36 = t;
              t = SSL_exit(g_36);
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
              {
                ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
                t = term_d_25;
                o_36 = t;
                t = term_u_34;
                p_36 = t;
                t = term_j_36;
                t = t_10(o_36, p_36, t);
                t = i_86;
                t = default_system_about_0_0(t);
                t = term_t_13;
                n_36 = t;
                t = SSL_exit(n_36);
              }
            }
        }
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm k_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
              static ATerm l_7 (ATerm t)
              {
                ATerm m_86 = NULL,p_86 = NULL,q_86 = NULL,t_11 = NULL;
                q_86 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_86);
                m_86 = t;
                t = p_86;
                if(((n_85 != NULL) && (n_85 != t)))
                  _fail(t);
                else
                  n_85 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_86);
                t_11 = t;
                t = SSLsetAnnotations(t_11, m_86);
                return(t);
              }
              t = fetch_1_0(l_7, t);
              t = term_c_31;
              k_86 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_85)), term_q_36);
              l_86 = t;
              t = SSL_printnl(k_86, l_86);
              t = (ATerm) ATmakeAppl(sym__2, term_c_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_85)), term_q_36));
              t = default_system_usage_0_0(t);
              t = term_u_13;
              j_86 = t;
              t = SSL_exit(j_86);
              LocalPopChoice(m_36);
            }
          else
            {
              t = k_36;
            }
        }
      }
  }
  o_85 = t;
  t = term_a_32;
  t = table_destroy_0_0(t);
  t = o_85;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm u_130 (ATerm), ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL;
  t = parse_options_1_0(r_130, t);
  v_86 = t;
  t = term_r_36;
  t = table_create_0_0(t);
  t = term_r_36;
  w_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_36, term_t_36, v_86);
  t = lookup_table_0_1(w_86, t);
  z_86 = t;
  t = term_t_36;
  x_86 = t;
  t = z_86;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(x_86, v_86, y_86, t);
  t = v_86;
  t = t_130(t);
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_130, t);
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
              t = u_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_36);
            }
          else
            {
              t = w_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
                  LocalPopChoice(d_37);
                }
              else
                {
                  t = c_37;
                  {
                    ATerm e_37 = t;
                    int f_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_7, r_7, u_7, t);
                        LocalPopChoice(f_37);
                      }
                    else
                      {
                        t = e_37;
                        {
                          ATerm g_37 = t;
                          int k_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(k_37);
                            }
                          else
                            {
                              t = g_37;
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
  ATerm b_87 = NULL,c_87 = NULL;
  t = term_o_29;
  b_87 = t;
  t = term_b_31;
  c_87 = t;
  t = term_l_37;
  t = w_10(b_87, c_87, t);
  t = term_m_37;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_n_37;
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
