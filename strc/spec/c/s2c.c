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
ATerm term_f_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_d_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_m_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_a_31;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_e_29;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_j_28;
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
ATerm term_t_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
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
ATerm term_g_17;
ATerm term_f_17;
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
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
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
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_v_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_10, (ATerm) ATempty);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Id_1, term_v_10);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Id_1, term_l_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_m_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Some_1, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_10, term_q_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Id_1, term_t_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_11, (ATerm) ATempty);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Stat_1, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Id_1, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Return_1, term_m_11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Id_1, term_g_12);
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
  term_k_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_10, term_o_11);
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
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Id_1, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_p_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Id_1, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, term_b_16);
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
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_e_17, term_o_11);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_g_17);
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
  term_o_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_17, term_o_11);
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
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_m_20, term_o_11);
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
  term_b_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_21, term_o_11);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, term_m_11);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_o_22, (ATerm)ATempty, term_e_10, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(122);
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
  term_f_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_26, term_o_11);
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
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_r_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_i_29);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_f_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_b_14);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_14);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_m_31);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_m_31);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_n_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_v_31);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_k_34);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_m_32, term_s_32);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_m_31);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_m_31);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_m_31);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__3, term_m_32, term_s_32, (ATerm) ATempty);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_i_35);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_m_31);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm f_3 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm q_151 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm q_121 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm s_9 (ATerm v_30, ATerm x_30, ATerm w_30, ATerm t);
static ATerm g_10 (ATerm f_70, ATerm g_70, ATerm t);
static ATerm a_1 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm u_9 (ATerm h_30, ATerm k_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm v_9 (ATerm q_35, ATerm p_35, ATerm t);
static ATerm w_9 (ATerm l_191, ATerm m_35, ATerm o_35, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm j_53 (ATerm a_28, ATerm d_28, ATerm e_28, ATerm f_28, ATerm t);
static ATerm k_53 (ATerm t_29, ATerm w_29, ATerm y_29, ATerm t);
static ATerm m_53 (ATerm c_30, ATerm d_30, ATerm e_30, ATerm t);
static ATerm n_53 (ATerm o_30, ATerm t_30, ATerm u_30, ATerm p_31, ATerm t);
static ATerm q_53 (ATerm j_32, ATerm p_32, ATerm m_34, ATerm n_34, ATerm t);
static ATerm r_53 (ATerm r_38, ATerm e_39, ATerm l_39, ATerm m_39, ATerm t);
static ATerm s_53 (ATerm y_39, ATerm z_39, ATerm h_40, ATerm i_40, ATerm t);
static ATerm t_53 (ATerm s_40, ATerm x_40, ATerm z_40, ATerm a_41, ATerm e_41, ATerm f_41, ATerm g_41, ATerm h_41, ATerm t);
static ATerm u_53 (ATerm r_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm a_43, ATerm b_43, ATerm t);
static ATerm v_53 (ATerm l_43, ATerm m_43, ATerm n_43, ATerm o_43, ATerm t_43, ATerm w_43, ATerm t);
static ATerm w_53 (ATerm h_44, ATerm i_44, ATerm j_44, ATerm t);
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
ATerm escape_chars_1_0 (ATerm p_138 (ATerm), ATerm t);
static ATerm c_10 (ATerm d_1 (ATerm), ATerm j_1 (ATerm), ATerm f_1, ATerm k_1, ATerm c_1, ATerm t);
ATerm thread_map_1_0 (ATerm r_135 (ATerm), ATerm t);
static ATerm f_61 (ATerm h_58, ATerm i_58, ATerm j_58, ATerm k_58, ATerm l_58, ATerm t);
static ATerm g_61 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm k_59, ATerm t);
static ATerm h_61 (ATerm p_59, ATerm q_59, ATerm r_59, ATerm s_59, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_121 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_136 (ATerm), ATerm t);
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
static ATerm h_10 (ATerm v_39, ATerm t_39, ATerm t);
ATerm Cify_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm m_138 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm i_10 (ATerm i_39, ATerm h_39, ATerm t);
static ATerm y_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_10 (ATerm c_40, ATerm f_40, ATerm t);
static ATerm k_10 (ATerm a_152 (ATerm), ATerm s_79, ATerm q_79, ATerm t);
static ATerm j_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm m_10 (ATerm b_57, ATerm c_57, ATerm t);
static ATerm n_10 (ATerm w_41, ATerm x_41, ATerm t);
static ATerm p_10 (ATerm s_127 (ATerm), ATerm n_267, ATerm c_42, ATerm t);
static ATerm o_10 (ATerm s_41, ATerm t_41, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_1_0 (ATerm c_145 (ATerm), ATerm t);
static ATerm i_72 (ATerm c_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_10 (ATerm y_41, ATerm t);
static ATerm r_10 (ATerm u_55, ATerm v_55, ATerm t);
static ATerm s_10 (ATerm d_57, ATerm e_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_73 (ATerm s_72, ATerm t);
static ATerm u_73 (ATerm w_72, ATerm x_72, ATerm y_72, ATerm t);
static ATerm v_73 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t);
static ATerm t_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm d_145 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_11 (ATerm o_89, ATerm p_89, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm s_128 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_77 (ATerm f_77, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_10 (ATerm v_89, ATerm w_89, ATerm t);
static ATerm a_11 (ATerm u_69, ATerm v_69, ATerm t_69, ATerm t);
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
static ATerm u_10 (ATerm x_59, ATerm y_59, ATerm t);
ATerm foldr_2_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_143 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm need_help_1_0 (ATerm t_144 (ATerm), ATerm t);
static ATerm d_11 (ATerm m_74, ATerm n_74, ATerm o_74, ATerm t);
ATerm lookup_table_0_1 (ATerm g_71, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_74, ATerm v_74, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_10 (ATerm r_74, ATerm s_74, ATerm t);
static ATerm x_10 (ATerm w_74, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_128 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_128 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_11 (ATerm p_74, ATerm q_74, ATerm t);
static ATerm z_10 (ATerm n_71, ATerm o_71, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_147 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm parse_options_1_0 (ATerm j_147 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm y_144 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
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
ATerm listbu1_1_0 (ATerm f_3 (ATerm), ATerm t)
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
      t = listbu1_1_0(f_3, t);
      z_0 = t;
      t = (ATerm) ATinsert(CheckATermList(z_0), s_1);
      o_0 = t;
      t = SSLsetAnnotations(o_0, n_0);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_3(t);
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
      t = f_3(t);
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
      ATerm s_8 = ATgetFirst((ATermList) t);
      if(match_cons(s_8, sym_Compound_2))
        {
          ATerm t_8 = ATgetArgument(s_8, 0);
          if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
            _fail(t);
          d_5 = ATgetArgument(s_8, 1);
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
      ATerm u_8 = ATgetFirst((ATermList) t);
      if(match_cons(u_8, sym_Compound_2))
        {
          ATerm v_8 = ATgetArgument(u_8, 0);
          if(((ATgetType(v_8) != AT_LIST) || !(ATisEmpty(v_8))))
            _fail(t);
          i_5 = ATgetArgument(u_8, 1);
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
  ATerm w_5 = NULL,x_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_8 = ATgetFirst((ATermList) t);
      if(match_cons(y_8, sym_Compound_2))
        {
          ATerm a_9 = ATgetArgument(y_8, 0);
          if(((ATgetType(a_9) != AT_LIST) || !(ATisEmpty(a_9))))
            _fail(t);
          w_5 = ATgetArgument(y_8, 1);
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
static ATerm s_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_9 = ATgetFirst((ATermList) t);
      if(match_cons(b_9, sym_Compound_2))
        {
          ATerm c_9 = ATgetArgument(b_9, 0);
          if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
            _fail(t);
          d_6 = ATgetArgument(b_9, 1);
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
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      e_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
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
                  t = g_3;
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
                              t = (ATerm) ATmakeAppl(sym_If_2, e_3, g_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, e_3, g_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, e_3, g_3);
                    }
                }
              else
                {
                  t = g_3;
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
              t = g_3;
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
          t = g_3;
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
          g_3 = (ATerm) ATgetNext((ATermList) t);
          t = e_3;
          if(match_cons(t, sym_Stat_1))
            {
              b_3 = ATgetArgument(t, 0);
              t = b_3;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = g_3;
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
              t = (ATerm) ATmakeAppl(sym__2, c_3, g_3);
              t = conc_0_0(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              e_3 = ATgetArgument(t, 0);
              g_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_3;
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
                        ATerm e_9 = t;
                        int f_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_4 = NULL;
                            t = g_3;
                            t = listbu1_1_0(a_0, t);
                            g_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, g_4);
                            LocalPopChoice(f_9);
                          }
                        else
                          {
                            t = e_9;
                            {
                              ATerm g_9 = t;
                              int j_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, e_3, i_3);
                                  t = conc_0_0(t);
                                  m_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, m_4, j_3);
                                  LocalPopChoice(j_9);
                                }
                              else
                                {
                                  t = g_9;
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
                      t = g_3;
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
                            t = g_3;
                            t = listbu1_1_0(e_0, t);
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, h_5);
                            LocalPopChoice(p_9);
                          }
                        else
                          {
                            t = m_9;
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
                      t = g_3;
                      t = listbu1_1_0(r_0, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, v_5);
                    }
                }
            }
          else
            {
              ATerm c_6 = NULL;
              t = g_3;
              t = listbu1_1_0(s_0, t);
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, e_3, c_6);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm q_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_120(t);
        t = f_6(t);
        LocalPopChoice(t_9);
      }
    else
      {
        t = q_9;
        t = q_120(t);
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm q_151 (ATerm), ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    t = q_151(t);
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 = NULL,i_7 = NULL,k_7 = NULL,a_2 = NULL,d_2 = NULL,e_2 = NULL,y_0 = NULL;
          h_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_7 = ATgetFirst((ATermList) t);
              k_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_7);
          a_2 = t;
          t = i_7;
          t = l_7(t);
          d_2 = t;
          t = k_7;
          t = l_7(t);
          e_2 = t;
          t = (ATerm) ATinsert(CheckATermList(e_2), d_2);
          y_0 = t;
          t = SSLsetAnnotations(y_0, a_2);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
          t = SRTS_all(l_7, t);
        }
    }
    t = q_151(t);
    return(t);
  }
  t = l_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm q_121 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(q_121, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = q_121(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_f_11, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_s_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_12, (ATerm) ATinsert(ATempty, term_m_11))))), term_a_12)));
  return(t);
}
static ATerm s_9 (ATerm v_30, ATerm x_30, ATerm w_30, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, x_30)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, x_30), term_c_12, w_30)));
  return(t);
}
static ATerm g_10 (ATerm f_70, ATerm g_70, ATerm t)
{
  ATerm n_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
  t = z_10(f_70, g_70, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_7 = ATgetFirst((ATermList) t);
      {
        ATerm p_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_7;
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
        ATerm m_2 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(i_11);
        m_2 = t;
        t = j_11;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = k_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_11, k_11);
        i_1 = t;
        t = SSLsetAnnotations(i_1, m_2);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_2 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,v_4 = NULL,w_4 = NULL,n_1 = NULL,m_1 = NULL;
              t = SSLgetAnnotations(i_11);
              w_2 = t;
              t = j_11;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = k_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_4 = ATgetFirst((ATermList) t);
                  q_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_11);
              o_4 = t;
              t = q_4;
              t = Cons_2_0(proper_list_0_0, a_1, t);
              v_4 = t;
              t = (ATerm) ATinsert(CheckATermList(v_4), p_4);
              m_1 = t;
              t = SSLsetAnnotations(m_1, o_4);
              w_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_11, w_4);
              n_1 = t;
              t = SSLsetAnnotations(n_1, w_2);
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              {
                ATerm h_6 = NULL,k_6 = NULL,o_1 = NULL;
                t = SSLgetAnnotations(i_11);
                h_6 = t;
                t = j_11;
                {
                  ATerm v_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_6 = NULL;
                      n_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = n_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = n_6;
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
static ATerm e_1 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm u_9 (ATerm h_30, ATerm k_30, ATerm t)
{
  ATerm b_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,o_12 = NULL,c_14 = NULL,f_14 = NULL;
  t = h_30;
  if(match_cons(t, sym_Op_2))
    {
      f_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm w_6 = NULL,a_7 = NULL,o_6 = NULL;
        t = SSLgetAnnotations(h_30);
        w_6 = t;
        t = c_14;
        t = map_1_0(Cache_0_0, t);
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, f_14, a_7);
        o_6 = t;
        t = SSLsetAnnotations(o_6, w_6);
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
            ATerm s_7 = NULL,w_7 = NULL,x_7 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(h_30);
            s_7 = t;
            t = f_14;
            t = Cache_0_0(t);
            w_7 = t;
            t = c_14;
            t = Cache_0_0(t);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, w_7, x_7);
            r_6 = t;
            t = SSLsetAnnotations(r_6, s_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_14 = ATgetArgument(t, 0);
              {
                ATerm b_8 = NULL,s_6 = NULL;
                t = SSLgetAnnotations(h_30);
                b_8 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_14);
                s_6 = t;
                t = SSLsetAnnotations(s_6, b_8);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  f_14 = ATgetArgument(t, 0);
                  {
                    ATerm g_8 = NULL,x_6 = NULL;
                    t = SSLgetAnnotations(h_30);
                    g_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, f_14);
                    x_6 = t;
                    t = SSLsetAnnotations(x_6, g_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      f_14 = ATgetArgument(t, 0);
                      {
                        ATerm w_8 = NULL,b_7 = NULL;
                        t = SSLgetAnnotations(h_30);
                        w_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, f_14);
                        b_7 = t;
                        t = SSLsetAnnotations(b_7, w_8);
                      }
                    }
                  else
                    {
                      ATerm d_9 = NULL,d_7 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          f_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(h_30);
                      d_9 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, f_14);
                      d_7 = t;
                      t = SSLsetAnnotations(d_7, d_9);
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
  t = (ATerm) ATmakeAppl(sym__2, h_30, (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, h_12));
  t = k_10(e_1, h_30, l_12, t);
  t = h_12;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_14 = NULL,h_9 = NULL,k_9 = NULL;
        t = (ATerm) ATempty;
        h_9 = t;
        t = term_x_12;
        k_9 = t;
        t = term_f_13;
        t = g_10(k_9, h_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("j_0", 0, ATtrue)))
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
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, b_12, h_12, k_30)));
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, (ATerm) ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym__3, b_12, h_12, k_30))));
  t = k_10(g_1, j_12, k_12, t);
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
        ATerm d_10 = NULL,y_10 = NULL;
        t = term_w_12;
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
        t = g_10(y_10, y_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("f_0", 0, ATtrue)))
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
          ATerm r_11 = NULL,u_11 = NULL;
          t = term_w_12;
          u_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_12, y_14);
          t = g_10(u_11, y_14, t);
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
        ATerm a_16 = NULL,z_11 = NULL;
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
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_16, z_11);
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
              t = (ATerm) ATmakeAppl(sym__2, a_16, z_11);
              t = u_9(a_16, z_11, t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              {
                ATerm n_12 = NULL,u_12 = NULL;
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
                              n_12 = ATgetFirst((ATermList) z_13);
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
                t = n_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm q_35, ATerm p_35, ATerm t)
{
  ATerm e_16 = NULL;
  t = new_0_0(t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_16), term_o_11), (ATerm) ATmakeAppl(sym_AssignInit_1, p_35)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, q_35, (ATerm) ATmakeAppl(sym_Id_1, e_16))));
  return(t);
}
static ATerm w_9 (ATerm l_191, ATerm m_35, ATerm o_35, ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL,i_16 = NULL;
  t = SSLgetAnnotations(l_191);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_35);
  i_16 = t;
  t = SSLsetAnnotations(i_16, f_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, h_16, o_35);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm l_1 (ATerm t)
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
  ATerm t_15 = NULL,w_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_15 = ATgetFirst((ATermList) t);
      w_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), term_j_14), term_e_14);
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
            ATerm h_18 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
            t = x_17;
            t = foldr_3_0(h_1, l_1, p_1, t);
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_17, h_18);
            d_13 = t;
            t = term_n_14;
            e_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, z_17, h_18));
            t = g_10(e_13, d_13, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm o_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("l_0", 0, ATtrue)))
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
                        ATerm o_18 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,m_15 = NULL;
                        t = SSL_explode_string(z_17);
                        t = escape_chars_1_0(q_1, t);
                        m_15 = t;
                        t = SSL_implode_string(m_15);
                        m_16 = t;
                        t = SSL_explode_string(m_16);
                        o_16 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_16), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                        t = conc_0_0(t);
                        l_16 = t;
                        t = SSL_implode_string(l_16);
                        o_18 = t;
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_15), term_j_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, o_18)))))));
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
                          ATerm h_17 = NULL;
                          if(match_cons(t, sym_Int_1))
                            {
                              z_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSL_int_to_string(z_17);
                          h_17 = t;
                          t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, h_17))));
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
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,n_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      r_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  if(match_string(t, "Cons"))
    {
      ATerm c_23 = NULL;
      t = s_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_23 = ATgetFirst((ATermList) t);
          n_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_23;
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
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
                ATerm a_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,i_8 = NULL,h_8 = NULL,c_8 = NULL;
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
                c_8 = t;
                t = SSLsetAnnotations(c_8, i_27);
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
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_15, (ATerm) ATinsert(ATempty, j_23));
          }
      }
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, h_23), c_23)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = s_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_16;
    }
  return(t);
}
static ATerm j_53 (ATerm a_28, ATerm d_28, ATerm e_28, ATerm f_28, ATerm t)
{
  ATerm s_28 = NULL,v_28 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  t = a_28;
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
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,g_29 = NULL;
      if(match_cons(t, sym__2))
        {
          x_28 = ATgetArgument(t, 0);
          y_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_28);
      c_29 = t;
      t = x_28;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm g_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_29 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_29)), e_28));
                n_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_29)), e_28)));
                t = w_9(x_28, g_29, n_29, t);
                LocalPopChoice(j_16);
              }
            else
              {
                t = g_16;
                {
                  ATerm o_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_29)), e_28));
                  o_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_29)), e_28)));
                  t = v_9(x_28, o_29, t);
                }
              }
          }
        }
      else
        {
          ATerm p_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_29)), e_28));
          p_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_29)), e_28)));
          t = v_9(x_28, p_29, t);
        }
      z_28 = t;
      t = term_d_14;
      d_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, term_d_14);
      t = u_10(y_28, d_29, t);
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_28, b_29);
      return(t);
    }
    t = thread_map_1_0(v_1, t);
  }
  if(match_cons(t, sym__2))
    {
      s_28 = ATgetArgument(t, 0);
      {
        ATerm p_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_28;
  t = foldr_3_0(w_1, x_1, y_1, t);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, v_28);
  q_27 = t;
  t = term_n_14;
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, a_28, v_28));
  t = g_10(r_27, q_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, p_27)), e_28)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
  return(t);
}
static ATerm k_53 (ATerm t_29, ATerm w_29, ATerm y_29, ATerm t)
{
  ATerm b_30 = NULL;
  t = SSL_real_to_string(t_29);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, w_29)), term_z_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_f_17, w_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, b_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
  return(t);
}
static ATerm m_53 (ATerm c_30, ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_int_to_string(c_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, d_30)), term_i_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_17, d_30))), (ATerm) ATmakeAppl(sym_IntConst_1, n_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
  return(t);
}
static ATerm n_53 (ATerm o_30, ATerm t_30, ATerm u_30, ATerm p_31, ATerm t)
{
  t = SSLgetAnnotations(o_30);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, t_30), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, t_30), u_30)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, u_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_30), term_c_12, u_30)));
  return(t);
}
static ATerm q_53 (ATerm j_32, ATerm p_32, ATerm m_34, ATerm n_34, ATerm t)
{
  t = SSLgetAnnotations(j_32);
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
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_32), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_32), m_34)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, m_34))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_32), term_c_12, m_34)));
  return(t);
}
static ATerm r_53 (ATerm r_38, ATerm e_39, ATerm l_39, ATerm m_39, ATerm t)
{
  t = SSLgetAnnotations(r_38);
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
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, e_39), l_39), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, l_39))))));
  return(t);
}
static ATerm s_53 (ATerm y_39, ATerm z_39, ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSLgetAnnotations(y_39);
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
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, z_39), term_c_12, h_40));
  return(t);
}
static ATerm t_53 (ATerm s_40, ATerm x_40, ATerm z_40, ATerm a_41, ATerm e_41, ATerm f_41, ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm u_41 = NULL,d_42 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  t = x_40;
  {
    ATerm a_18 = t;
    if((PushChoice() == 0))
      {
        ATerm e_42 = NULL;
        e_42 = t;
        if(match_string(t, "Nil"))
          {
            t = e_42;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = e_42;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, a_41, term_b_14);
  {
    static ATerm z_1 (ATerm t);
    static ATerm z_1 (ATerm t)
    {
      ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,p_42 = NULL,q_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm b_18 = ATgetArgument(t, 0);
          if(match_cons(b_18, sym_Var_1))
            {
              f_42 = ATgetArgument(b_18, 0);
            }
          else
            _fail(t);
          g_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_42);
      h_42 = t;
      t = term_d_14;
      q_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_42, term_d_14);
      t = u_10(g_42, q_42, t);
      p_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_42), term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, h_42)), (ATerm) ATmakeAppl(sym_Id_1, s_40))))), p_42);
      return(t);
    }
    t = thread_map_1_0(z_1, t);
  }
  if(match_cons(t, sym__2))
    {
      u_41 = ATgetArgument(t, 0);
      {
        ATerm c_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_40, z_40);
  v_27 = t;
  t = term_n_14;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, x_40, z_40));
  t = g_10(w_27, v_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_18) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_41, (ATerm) ATinsert(ATempty, e_41));
  t = conc_0_0(t);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_27)), (ATerm) ATmakeAppl(sym_Id_1, s_40))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, d_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_40), f_41, g_41))));
  return(t);
}
static ATerm u_53 (ATerm r_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm j_43 = NULL;
  t = SSL_real_to_string(t_42);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, j_43)), (ATerm) ATmakeAppl(sym_Id_1, r_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, r_42), v_42, a_43))));
  return(t);
}
static ATerm v_53 (ATerm l_43, ATerm m_43, ATerm n_43, ATerm o_43, ATerm t_43, ATerm w_43, ATerm t)
{
  ATerm g_44 = NULL;
  t = SSL_int_to_string(m_43);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, g_44)), (ATerm) ATmakeAppl(sym_Id_1, l_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, l_43), o_43, t_43))));
  return(t);
}
static ATerm w_53 (ATerm h_44, ATerm i_44, ATerm j_44, ATerm t)
{
  t = i_44;
  {
    ATerm l_18 = t;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,o_8 = NULL;
        u_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_44);
        s_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_44);
        o_8 = t;
        t = SSLsetAnnotations(o_8, s_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_44)));
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(r_29, s_29, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym_SVar_1))
        {
          e_47 = ATgetArgument(m_18, 0);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
          _fail(t);
      }
      {
        ATerm p_18 = ATgetArgument(t, 2);
        if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, e_47);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = topdown_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
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
  ATerm z_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if(match_cons(w_18, sym_SVar_1))
        {
          z_47 = ATgetArgument(w_18, 0);
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
  t = (ATerm) ATmakeAppl(sym_Id_1, z_47);
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
  ATerm s_49 = NULL;
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_49), term_o_11), term_f_19);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,e_50 = NULL,f_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_50;
  if(match_cons(t, sym_Var_1))
    {
      b_50 = ATgetArgument(t, 0);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_50;
            t = w_9(e_50, b_50, f_50, t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = c_50;
            t = v_9(e_50, f_50, t);
          }
      }
    }
  else
    {
      t = c_50;
      t = v_9(e_50, f_50, t);
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
  ATerm l_29 = NULL,q_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_29 = ATgetFirst((ATermList) t);
      q_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(q_29), term_h_14), term_e_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_29), term_e_14), term_e_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_29), term_i_14), term_e_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_29), term_j_14), term_e_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,d_46 = NULL;
  x_45 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_46 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
      {
        ATerm i_46 = NULL,j_46 = NULL;
        t = d_46;
        t = map_1_0(SDefToDeclaration_0_0, t);
        i_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_46, d_46);
        t = conc_0_0(t);
        j_46 = t;
        t = (ATerm) ATmakeAppl(sym_Compound_2, j_46, (ATerm) ATinsert(ATempty, v_45));
      }
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          d_46 = ATgetArgument(t, 0);
          {
            ATerm l_46 = NULL;
            t = x_45;
            t = new_0_0(t);
            l_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_46), term_o_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_Id_1, l_46)))), term_j_19), d_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, l_46), term_c_12, term_m_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              d_46 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, d_46);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  d_46 = ATgetArgument(t, 0);
                  v_45 = ATgetArgument(t, 1);
                  s_45 = ATgetArgument(t, 2);
                  {
                    ATerm y_46 = NULL,z_46 = NULL,c_47 = NULL;
                    t = d_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        w_45 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_45;
                    t = map_1_0(b_2, t);
                    y_46 = t;
                    t = s_45;
                    t = map_1_0(c_2, t);
                    z_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_11)), z_46), y_46);
                    t = concat_0_0(t);
                    c_47 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, w_45), c_47)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      d_46 = ATgetArgument(t, 0);
                      v_45 = ATgetArgument(t, 1);
                      s_45 = ATgetArgument(t, 2);
                      {
                        ATerm v_47 = NULL,x_47 = NULL,y_47 = NULL;
                        t = v_45;
                        t = map_1_0(h_2, t);
                        v_47 = t;
                        t = s_45;
                        t = map_1_0(i_2, t);
                        x_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, v_47, x_47);
                        t = conc_0_0(t);
                        y_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, d_46), y_47)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          d_46 = ATgetArgument(t, 0);
                          {
                            ATerm h_48 = NULL;
                            t = x_45;
                            t = new_0_0(t);
                            h_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, h_48), term_o_11), term_k_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11)))), term_s_19), d_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_Id_1, h_48))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              d_46 = ATgetArgument(t, 0);
                              v_45 = ATgetArgument(t, 1);
                              {
                                ATerm n_48 = NULL;
                                t = x_45;
                                t = new_0_0(t);
                                n_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_48), term_o_11), term_k_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_w_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_Id_1, n_48))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  d_46 = ATgetArgument(t, 0);
                                  v_45 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, d_46, v_45);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      d_46 = ATgetArgument(t, 0);
                                      v_45 = ATgetArgument(t, 1);
                                      s_45 = ATgetArgument(t, 2);
                                      {
                                        ATerm z_48 = NULL,e_49 = NULL;
                                        t = x_45;
                                        t = new_0_0(t);
                                        z_48 = t;
                                        t = new_0_0(t);
                                        e_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_y_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_49), term_o_11), term_b_20)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_48), term_o_11), term_k_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_o_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_49))))), term_j_19), d_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, (ATerm) ATmakeAppl(sym_Id_1, z_48))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          d_46 = ATgetArgument(t, 0);
                                          v_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_46, term_e_20, v_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              d_46 = ATgetArgument(t, 0);
                                              v_45 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_46, v_45);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  d_46 = ATgetArgument(t, 0);
                                                  v_45 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_45), d_46));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      d_46 = ATgetArgument(t, 0);
                                                      v_45 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm r_49 = NULL;
                                                        t = d_46;
                                                        t = map_1_0(l_2, t);
                                                        r_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, r_49)), (ATerm) ATinsert(ATempty, v_45));
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
                                                                  d_46 = ATgetArgument(t, 0);
                                                                  v_45 = ATgetArgument(t, 1);
                                                                  t = d_46;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      w_45 = ATgetArgument(t, 0);
                                                                      z_44 = ATgetArgument(t, 1);
                                                                      t = z_44;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          v_44 = ATgetFirst((ATermList) t);
                                                                          w_44 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = w_44;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              x_44 = ATgetFirst((ATermList) t);
                                                                              y_44 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = y_44;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = w_45;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm g_20 = t;
                                                                                      int h_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm a_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_44, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, v_45)))))), (ATerm) ATmakeAppl(sym__2, v_44, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, v_45)))));
                                                                                          t = map_1_0(n_2, t);
                                                                                          a_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, v_45)), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, v_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, a_50), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
                                                                                          LocalPopChoice(h_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_20;
                                                                                          t = j_53(w_45, z_44, v_45, x_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_53(w_45, z_44, v_45, x_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = w_45;
                                                                                  t = j_53(w_45, z_44, v_45, x_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_45;
                                                                              t = j_53(w_45, z_44, v_45, x_45, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = w_45;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm u_20 = t;
                                                                                  int v_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, v_45)), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, v_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
                                                                                      LocalPopChoice(v_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_20;
                                                                                      t = j_53(w_45, z_44, v_45, x_45, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_53(w_45, z_44, v_45, x_45, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_45;
                                                                              t = j_53(w_45, z_44, v_45, x_45, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          w_45 = ATgetArgument(t, 0);
                                                                          t = k_53(w_45, v_45, x_45, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              w_45 = ATgetArgument(t, 0);
                                                                              t = m_53(w_45, v_45, x_45, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  w_45 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm s_50 = NULL,p_28 = NULL,q_28 = NULL,u_28 = NULL,y_27 = NULL;
                                                                                    t = SSL_explode_string(w_45);
                                                                                    t = escape_chars_1_0(o_2, t);
                                                                                    y_27 = t;
                                                                                    t = SSL_implode_string(y_27);
                                                                                    q_28 = t;
                                                                                    t = SSL_explode_string(q_28);
                                                                                    u_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_28), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                                                                                    t = conc_0_0(t);
                                                                                    p_28 = t;
                                                                                    t = SSL_implode_string(p_28);
                                                                                    s_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_21, v_45))), (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_15), term_j_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, s_50))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, term_m_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Var_1))
                                                                                    {
                                                                                      w_45 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm c_21 = t;
                                                                                        int d_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = n_53(d_46, w_45, v_45, x_45, t);
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
                                                                                                  t = q_53(d_46, w_45, v_45, x_45, t);
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
                                                                                                        t = r_53(d_46, w_45, v_45, x_45, t);
                                                                                                        LocalPopChoice(h_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_21;
                                                                                                        t = s_53(d_46, w_45, v_45, x_45, t);
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
                                                                                          w_45 = ATgetArgument(t, 0);
                                                                                          z_44 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, z_44, v_45)), (ATerm) ATmakeAppl(sym_Match_2, w_45, v_45)));
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
                                                                      d_46 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, d_46, term_m_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          d_46 = ATgetArgument(t, 0);
                                                                          v_45 = ATgetArgument(t, 1);
                                                                          s_45 = ATgetArgument(t, 2);
                                                                          t = d_46;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              w_45 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = v_45;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_45 = ATgetFirst((ATermList) t);
                                                                              p_45 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = u_45;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  h_45 = ATgetArgument(t, 0);
                                                                                  l_45 = ATgetArgument(t, 1);
                                                                                  o_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = h_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  k_45 = ATgetArgument(t, 0);
                                                                                  g_45 = ATgetArgument(t, 1);
                                                                                  t = l_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      a_45 = ATgetFirst((ATermList) t);
                                                                                      c_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = c_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          d_45 = ATgetFirst((ATermList) t);
                                                                                          f_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = f_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = d_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  e_45 = ATgetArgument(t, 0);
                                                                                                  t = a_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      b_45 = ATgetArgument(t, 0);
                                                                                                      t = g_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = k_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm l_21 = t;
                                                                                                              int m_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_45))), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_45), term_c_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, (ATerm) ATmakeAppl(sym_Id_1, w_45)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_45), term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_n_20, (ATerm) ATmakeAppl(sym_Id_1, w_45)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, w_45), p_45, s_45))));
                                                                                                                  LocalPopChoice(m_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_21;
                                                                                                                  t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = k_45;
                                                                                                          t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = k_45;
                                                                                                      t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = k_45;
                                                                                                  t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_45;
                                                                                              t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_45;
                                                                                          t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = g_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = k_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm n_21 = t;
                                                                                                  int o_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_45))), term_r_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, o_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, w_45), p_45, s_45))));
                                                                                                      LocalPopChoice(o_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_21;
                                                                                                      t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_45;
                                                                                              t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_45;
                                                                                          t = t_53(w_45, k_45, g_45, l_45, o_45, p_45, s_45, x_45, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      k_45 = ATgetArgument(t, 0);
                                                                                      t = u_53(w_45, k_45, o_45, p_45, s_45, x_45, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          k_45 = ATgetArgument(t, 0);
                                                                                          t = v_53(w_45, k_45, o_45, p_45, s_45, x_45, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm b_52 = NULL,g_30 = NULL,i_30 = NULL,p_30 = NULL,a_29 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              k_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(k_45);
                                                                                          t = escape_chars_1_0(p_2, t);
                                                                                          a_29 = t;
                                                                                          t = SSL_implode_string(a_29);
                                                                                          i_30 = t;
                                                                                          t = SSL_explode_string(i_30);
                                                                                          p_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_30), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
                                                                                          t = conc_0_0(t);
                                                                                          g_30 = t;
                                                                                          t = SSL_implode_string(g_30);
                                                                                          b_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, b_52))), (ATerm) ATmakeAppl(sym_Id_1, w_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, w_45), p_45, s_45))));
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
                                                                              d_46 = ATgetArgument(t, 0);
                                                                              v_45 = ATgetArgument(t, 1);
                                                                              s_45 = ATgetArgument(t, 2);
                                                                              t_45 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, d_46), (ATerm) ATmakeAppl(sym_Case_3, v_45, s_45, t_45));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  d_46 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, d_46));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      d_46 = ATgetArgument(t, 0);
                                                                                      v_45 = ATgetArgument(t, 1);
                                                                                      t = d_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          w_45 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = v_45;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          u_45 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm r_21 = t;
                                                                                            int s_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, w_45), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, w_45), (ATerm) ATmakeAppl(sym_Id_1, u_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_45), term_c_12, (ATerm) ATmakeAppl(sym_Id_1, u_45))));
                                                                                                LocalPopChoice(s_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_21;
                                                                                                t = w_53(w_45, v_45, x_45, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_53(w_45, v_45, x_45, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          d_46 = ATgetArgument(t, 0);
                                                                                          t = d_46;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              w_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_45), term_c_12, term_m_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm i_53 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              d_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = d_46;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          i_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_m_11, term_c_12, i_53));
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
ATerm escape_chars_1_0 (ATerm p_138 (ATerm), ATerm t)
{
  static ATerm f_55 (ATerm t);
  static ATerm f_55 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,q_8 = NULL;
        t = p_138(t);
        j_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_54 = ATgetFirst((ATermList) t);
            h_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_54);
        f_54 = t;
        t = h_54;
        t = Cons_2_0(_id, f_55, t);
        i_54 = t;
        t = (ATerm) ATinsert(CheckATermList(i_54), g_54);
        q_8 = t;
        t = SSLsetAnnotations(q_8, f_54);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm y_54 = NULL,z_54 = NULL,e_55 = NULL;
          e_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_54 = ATgetFirst((ATermList) t);
              z_54 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm y_30 = NULL,b_31 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(e_55);
                y_30 = t;
                t = z_54;
                t = f_55(t);
                b_31 = t;
                t = (ATerm) ATinsert(CheckATermList(b_31), y_54);
                r_8 = t;
                t = SSLsetAnnotations(r_8, y_30);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_55;
            }
        }
      }
    return(t);
  }
  t = f_55(t);
  return(t);
}
static ATerm c_10 (ATerm d_1 (ATerm), ATerm j_1 (ATerm), ATerm f_1, ATerm k_1, ATerm c_1, ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_1, c_1);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      j_55 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_1, h_55);
  t = j_1(t);
  if(match_cons(t, sym__2))
    {
      k_55 = ATgetArgument(t, 0);
      i_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_55), j_55), i_55);
  return(t);
}
ATerm thread_map_1_0 (ATerm r_135 (ATerm), ATerm t)
{
  static ATerm d_56 (ATerm t);
  static ATerm d_56 (ATerm t)
  {
    ATerm p_55 = NULL,s_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
    w_55 = t;
    if(match_cons(t, sym__2))
      {
        x_55 = ATgetArgument(t, 0);
        y_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_55;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_55 = ATgetFirst((ATermList) t);
        s_55 = (ATerm) ATgetNext((ATermList) t);
        t = w_55;
        t = c_10(r_135, d_56, p_55, s_55, y_55, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_55);
      }
    return(t);
  }
  t = d_56(t);
  return(t);
}
static ATerm f_61 (ATerm h_58, ATerm i_58, ATerm j_58, ATerm k_58, ATerm l_58, ATerm t)
{
  ATerm q_58 = NULL,s_58 = NULL,t_58 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  t = h_58;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm u_58 = NULL;
        u_58 = t;
        if(match_string(t, "Nil"))
          {
            t = u_58;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = u_58;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
  }
  t = i_58;
  t = map_1_0(q_2, t);
  t = (ATerm) ATmakeAppl(sym__2, i_58, term_b_14);
  t = thread_map_1_0(r_2, t);
  if(match_cons(t, sym__2))
    {
      q_58 = ATgetArgument(t, 0);
      {
        ATerm w_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_58;
  t = foldr_3_0(s_2, t_2, u_2, t);
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, t_58);
  i_31 = t;
  t = term_n_14;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, h_58, t_58));
  t = g_10(j_31, i_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_58, (ATerm) ATinsert(ATempty, j_58));
  t = conc_0_0(t);
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_31)), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_58), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_58)));
  return(t);
}
static ATerm g_61 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm k_59, ATerm t)
{
  ATerm o_59 = NULL;
  t = SSL_real_to_string(h_59);
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, o_59)), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_59)));
  return(t);
}
static ATerm h_61 (ATerm p_59, ATerm q_59, ATerm r_59, ATerm s_59, ATerm t)
{
  ATerm w_59 = NULL;
  t = SSL_int_to_string(p_59);
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, w_59)), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, r_59)));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,x_8 = NULL;
  x_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_58);
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_58);
  x_8 = t;
  t = SSLsetAnnotations(x_8, v_58);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Var_1))
        {
          y_58 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(z_58);
  c_59 = t;
  t = term_d_14;
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_58, term_d_14);
  t = u_10(z_58, e_59, t);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, y_58), term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, c_59)), term_m_11)))), d_59);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  if(match_cons(t, sym__2))
    {
      f_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(f_59, g_59, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_31 = ATgetFirst((ATermList) t);
      s_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_31;
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
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  g_60 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      h_60 = ATgetArgument(t, 0);
      k_60 = ATgetArgument(t, 1);
      l_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_60;
  if(match_cons(t, sym_Match_1))
    {
      i_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_60;
  if(match_cons(t, sym_Op_2))
    {
      j_60 = ATgetArgument(t, 0);
      f_60 = ATgetArgument(t, 1);
      t = f_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_59 = ATgetFirst((ATermList) t);
          b_60 = (ATerm) ATgetNext((ATermList) t);
          t = b_60;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_60 = ATgetFirst((ATermList) t);
              e_60 = (ATerm) ATgetNext((ATermList) t);
              t = e_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = c_60;
                  if(match_cons(t, sym_Var_1))
                    {
                      d_60 = ATgetArgument(t, 0);
                      t = z_59;
                      if(match_cons(t, sym_Var_1))
                        {
                          a_60 = ATgetArgument(t, 0);
                          t = j_60;
                          if(match_string(t, "Cons"))
                            {
                              ATerm z_21 = t;
                              int a_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_m_11)), term_r_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, term_m_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_60), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_60), term_c_12, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_60), term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_60)));
                                  LocalPopChoice(a_22);
                                }
                              else
                                {
                                  t = z_21;
                                  t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                                }
                            }
                          else
                            {
                              t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                            }
                        }
                      else
                        {
                          t = j_60;
                          t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                        }
                    }
                  else
                    {
                      t = j_60;
                      t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                    }
                }
              else
                {
                  t = j_60;
                  t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                }
            }
          else
            {
              t = j_60;
              t = f_61(j_60, f_60, k_60, l_60, g_60, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = j_60;
              if(match_string(t, "Nil"))
                {
                  ATerm c_22 = t;
                  int d_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_m_11)), term_r_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_20, (ATerm) ATinsert(ATempty, term_m_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_60)));
                      LocalPopChoice(d_22);
                    }
                  else
                    {
                      t = c_22;
                      t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                    }
                }
              else
                {
                  t = f_61(j_60, f_60, k_60, l_60, g_60, t);
                }
            }
          else
            {
              t = j_60;
              t = f_61(j_60, f_60, k_60, l_60, g_60, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          j_60 = ATgetArgument(t, 0);
          t = g_61(j_60, k_60, l_60, g_60, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_60 = ATgetArgument(t, 0);
              t = h_61(j_60, k_60, l_60, g_60, t);
            }
          else
            {
              ATerm v_60 = NULL,x_31 = NULL,y_31 = NULL,a_32 = NULL,l_31 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  j_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(j_60);
              t = escape_chars_1_0(v_2, t);
              l_31 = t;
              t = SSL_implode_string(l_31);
              y_31 = t;
              t = SSL_explode_string(y_31);
              a_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_32), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
              t = conc_0_0(t);
              x_31 = t;
              t = SSL_implode_string(x_31);
              v_60 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, v_60))), term_m_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_60)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  static ATerm x_2 (ATerm t);
  static ATerm x_2 (ATerm t)
  {
    t = topdown_1_0(p_121, t);
    return(t);
  }
  t = p_121(t);
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
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  a_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_62 = ATgetArgument(t, 0);
      c_62 = ATgetArgument(t, 1);
      d_62 = ATgetArgument(t, 2);
      e_62 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
        t = b_62;
        t = is_local_function_0_0(t);
        t = c_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        j_62 = t;
        t = d_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_62, k_62);
        t = conc_0_0(t);
        l_62 = t;
        t = e_62;
        t = topdown_1_0(d_3, t);
        m_62 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_p_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, l_62, (ATerm) ATinsert(ATempty, term_s_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), term_j_19), m_62)));
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          ATerm n_32 = NULL,o_32 = NULL,q_32 = NULL,r_32 = NULL;
          t = b_62;
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
          t = c_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          n_32 = t;
          t = d_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          o_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_32, o_32);
          t = conc_0_0(t);
          q_32 = t;
          t = e_62;
          t = topdown_1_0(m_3, t);
          r_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_f_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, q_32, (ATerm) ATinsert(ATempty, term_s_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), term_j_19), r_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  a_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_63;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_63 = ATgetFirst((ATermList) t);
          c_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_33 = NULL,e_33 = NULL,f_33 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(a_63);
            b_33 = t;
            t = b_63;
            t = e_136(t);
            e_33 = t;
            t = c_63;
            t = filter_1_0(e_136, t);
            f_33 = t;
            t = (ATerm) ATinsert(CheckATermList(f_33), e_33);
            z_8 = t;
            t = SSLsetAnnotations(z_8, b_33);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            t = c_63;
            t = filter_1_0(e_136, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm i_63 = NULL;
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          i_63 = ATgetArgument(t, 0);
          {
            ATerm v_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_22);
      {
        ATerm k_63 = NULL;
        t = i_63;
        t = map_1_0(TranslateType_0_0, t);
        k_63 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_10, (ATerm) ATmakeAppl(sym_ParamList_1, k_63));
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
      t = term_f_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_63;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            r_63 = ATgetArgument(t, 0);
            {
              ATerm z_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        {
          ATerm u_63 = NULL;
          t = r_63;
          t = map_1_0(TranslateType_0_0, t);
          u_63 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_63), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, u_63)))));
        }
      }
    else
      {
        t = x_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm a_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_f_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_63), term_o_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm b_23 = t;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL,x_63 = NULL;
      if(match_cons(t, sym__2))
        {
          w_63 = ATgetArgument(t, 0);
          x_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(w_63, x_63);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = SSL_gtr(w_63, x_63);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_23;
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
  ATerm e_64 = NULL;
  e_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, e_64);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_64, term_g_23);
  t = leq_0_0(t);
  t = e_64;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,i_9 = NULL;
  y_63 = t;
  t = SSL_explode_string(y_63);
  d_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_64 = ATgetFirst((ATermList) t);
      b_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_64);
  z_63 = t;
  t = a_64;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_23, a_64);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_64, term_o_23);
        t = leq_0_0(t);
        t = a_64;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, a_64);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_64, term_t_23);
        t = leq_0_0(t);
        t = a_64;
      }
  }
  t = b_64;
  t = Cons_2_0(o_3, p_3, t);
  c_64 = t;
  t = (ATerm) ATinsert(CheckATermList(c_64), a_64);
  i_9 = t;
  t = SSLsetAnnotations(i_9, z_63);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  r_64 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      s_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
      u_64 = ATgetArgument(t, 2);
      {
        ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
        t = t_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        z_64 = t;
        t = u_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        a_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_64, a_65);
        t = conc_0_0(t);
        b_65 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, b_65, (ATerm) ATinsert(ATempty, term_s_11)))))));
      }
    }
  else
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              s_64 = ATgetArgument(t, 0);
              t_64 = ATgetArgument(t, 1);
              u_64 = ATgetArgument(t, 2);
              {
                ATerm w_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(v_23);
          {
            ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
            t = t_64;
            t = map_1_0(TranslateVarDec_0_0, t);
            f_65 = t;
            t = u_64;
            t = map_1_0(TranslateVarDec_0_0, t);
            g_65 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
            t = conc_0_0(t);
            h_65 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, h_65, (ATerm) ATinsert(ATempty, term_s_11)))))));
          }
        }
      else
        {
          t = u_23;
          if(match_cons(t, sym_SDefT_4))
            {
              s_64 = ATgetArgument(t, 0);
              t_64 = ATgetArgument(t, 1);
              u_64 = ATgetArgument(t, 2);
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
                ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL;
                t = s_64;
                t = is_local_function_0_0(t);
                t = t_64;
                t = map_1_0(TranslateVarDec_0_0, t);
                l_65 = t;
                t = u_64;
                t = map_1_0(TranslateVarDec_0_0, t);
                m_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_65, m_65);
                t = conc_0_0(t);
                n_65 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, n_65, (ATerm) ATinsert(ATempty, term_s_11)))))));
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                {
                  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
                  t = s_64;
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
                  t = t_64;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  r_33 = t;
                  t = u_64;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  s_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
                  t = conc_0_0(t);
                  t_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, t_33, (ATerm) ATinsert(ATempty, term_s_11)))))));
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
  ATerm d_66 = NULL,e_66 = NULL;
  if(match_cons(t, sym__2))
    {
      d_66 = ATgetArgument(t, 0);
      e_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(d_66, e_66, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm h_10 (ATerm v_39, ATerm t_39, ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,v_65 = NULL,x_65 = NULL,y_65 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,b_66 = NULL;
  t = t_39;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            b_66 = ATgetArgument(t, 0);
            {
              ATerm d_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_24);
        t = b_66;
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
  t_65 = t;
  t = SSL_int_to_string(t_65);
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_39, t_65);
  d_34 = t;
  t = term_n_14;
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATmakeAppl(sym__2, v_39, t_65));
  t = g_10(e_34, d_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_24) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(v_39);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_65), term_h_14), (ATerm) ATinsert(ATempty, term_h_14));
  t = conc_0_0(t);
  y_65 = t;
  t = SSL_implode_string(y_65);
  v_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_34), term_c_12, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_24), (ATerm) ATmakeAppl(sym_IntConst_1, s_65)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, v_65)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_66 = ATgetFirst((ATermList) t);
      j_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_66;
  if(match_int(t, 95))
    {
      ATerm l_66 = NULL;
      t = j_66;
      t = x_0(t);
      l_66 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_66), term_k_24), term_k_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm n_66 = NULL;
          t = j_66;
          t = x_0(t);
          n_66 = t;
          t = (ATerm) ATinsert(CheckATermList(n_66), term_k_24);
        }
      else
        {
          ATerm p_66 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = j_66;
          t = x_0(t);
          p_66 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_66), term_k_24), term_l_24), term_k_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm m_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL;
  t_66 = t;
  t = SSL_explode_string(t_66);
  {
    static ATerm f_67 (ATerm t);
    static ATerm f_67 (ATerm t)
    {
      ATerm m_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_138(f_67, t);
          LocalPopChoice(v_24);
        }
      else
        {
          t = m_24;
          {
            ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
            e_67 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_67 = ATgetFirst((ATermList) t);
                d_67 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm j_34 = NULL,p_34 = NULL,l_9 = NULL;
                  t = SSLgetAnnotations(e_67);
                  j_34 = t;
                  t = d_67;
                  t = f_67(t);
                  p_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_34), c_67);
                  l_9 = t;
                  t = SSLsetAnnotations(l_9, j_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_67;
              }
          }
        }
      return(t);
    }
    t = f_67(t);
  }
  s_66 = t;
  t = SSL_implode_string(s_66);
  return(t);
}
ATerm foldr_3_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  i_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_67;
      t = c_135(t);
    }
  else
    {
      ATerm n_67 = NULL,o_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_67 = ATgetFirst((ATermList) t);
          k_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_67;
      t = e_135(t);
      n_67 = t;
      t = k_67;
      t = foldr_3_0(c_135, d_135, e_135, t);
      o_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_67, o_67);
      t = d_135(t);
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
  ATerm b_68 = NULL,c_68 = NULL;
  if(match_cons(t, sym__2))
    {
      b_68 = ATgetArgument(t, 0);
      c_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(b_68, c_68, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm i_10 (ATerm i_39, ATerm h_39, ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,z_67 = NULL;
  t = h_39;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            z_67 = ATgetArgument(t, 0);
            {
              ATerm y_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_24);
        t = z_67;
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
  q_67 = t;
  t = i_39;
  t = escape_1_0(Cify_1_0, t);
  s_67 = t;
  t = SSL_int_to_string(q_67);
  t_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_67), term_b_25), s_67), term_a_25);
  w_67 = t;
  t = SSL_concat_strings(w_67);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_39, q_67);
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, r_67);
  v_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_39, q_67), (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, r_67));
  t = k_10(x_3, u_67, v_67, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_67), term_o_11)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  g_68 = t;
  t = term_g_25;
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, g_68);
  t = r_10(h_68, g_68, t);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, f_68);
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
        ATerm d_68 = NULL,e_68 = NULL;
        t = term_k_25;
        d_68 = t;
        t = term_h_25;
        e_68 = t;
        t = term_l_25;
        t = z_10(d_68, e_68, t);
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
  ATerm x_68 = NULL,y_68 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(x_68, y_68, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_68 = ATgetArgument(t, 0);
      a_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(z_68, a_69, t);
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
  ATerm i_69 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
      {
        ATerm r_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, i_69), term_o_11)));
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  if(match_cons(t, sym__3))
    {
      k_69 = ATgetArgument(t, 0);
      l_69 = ATgetArgument(t, 1);
      m_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_9(k_69, l_69, m_69, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  b_70 = t;
  if(match_cons(t, sym_Conc_2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, z_69, a_70);
            t = conc_0_0(t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = b_70;
          }
      }
    }
  else
    {
      t = b_70;
    }
  return(t);
}
static ATerm j_10 (ATerm c_40, ATerm f_40, ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
  t_68 = t;
  t = GenerateIncludes_0_0(t);
  l_68 = t;
  t = c_40;
  t = map_1_0(z_3, t);
  m_68 = t;
  t = c_40;
  t = map_1_0(a_4, t);
  t = concat_0_0(t);
  n_68 = t;
  t = f_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  o_68 = t;
  t = f_40;
  t = filter_1_0(b_4, t);
  t = map_1_0(TranslateDef_0_0, t);
  p_68 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_69 = NULL,u_34 = NULL,v_34 = NULL;
        t = (ATerm) ATempty;
        u_34 = t;
        t = term_x_12;
        v_34 = t;
        t = term_f_13;
        t = g_10(v_34, u_34, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            b_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_69;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
  }
  w_68 = t;
  t = map_1_0(c_4, t);
  u_68 = t;
  t = w_68;
  t = map_1_0(d_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, e_4, t);
  v_68 = t;
  t = t_68;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_69 = NULL,p_69 = NULL;
        t = term_k_25;
        o_69 = t;
        t = term_z_25;
        p_69 = t;
        t = term_a_26;
        t = z_10(o_69, p_69, t);
        t = t_68;
        LocalPopChoice(y_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_c_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), term_f_20));
      }
  }
  q_68 = t;
  t = t_68;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_69 = NULL,s_69 = NULL;
        t = term_k_25;
        q_69 = t;
        t = term_z_25;
        s_69 = t;
        t = term_a_26;
        t = z_10(q_69, s_69, t);
        t = t_68;
        LocalPopChoice(h_26);
        t = (ATerm) ATinsert(ATempty, term_j_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATinsert(ATempty, term_l_26);
      }
  }
  r_68 = t;
  t = t_68;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_69 = NULL,x_69 = NULL;
        t = term_k_25;
        w_69 = t;
        t = term_z_25;
        x_69 = t;
        t = term_a_26;
        t = z_10(w_69, x_69, t);
        t = t_68;
        LocalPopChoice(n_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = m_26;
        {
          ATerm y_69 = NULL;
          t = MainDef_0_0(t);
          y_69 = t;
          t = (ATerm) ATinsert(ATempty, y_69);
        }
      }
  }
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, l_68, q_68), m_68), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_68)))), u_68), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_u_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_68)))), r_68), o_68), s_68), p_68));
  t = bottomup_1_0(f_4, t);
  return(t);
}
static ATerm k_10 (ATerm a_152 (ATerm), ATerm s_79, ATerm q_79, ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  l_70 = t;
  t = a_152(t);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_70, s_79, q_79);
  t = a_11(i_70, s_79, q_79, t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_70 = NULL;
        t = term_y_26;
        q_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_70, term_y_26);
        t = z_10(i_70, q_70, t);
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
      j_70 = ATgetFirst((ATermList) t);
      k_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_70, term_y_26, (ATerm) ATinsert(CheckATermList(k_70), (ATerm) ATinsert(CheckATermList(j_70), s_79)));
  t = lookup_table_0_1(i_70, t);
  p_70 = t;
  t = term_y_26;
  m_70 = t;
  t = (ATerm) ATinsert(CheckATermList(k_70), (ATerm) ATinsert(CheckATermList(j_70), s_79));
  n_70 = t;
  t = p_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(m_70, n_70, o_70, t);
  t = l_70;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
  r_70 = t;
  t = term_c_27;
  s_70 = t;
  t = term_m_27;
  t_70 = t;
  t = term_n_27;
  t = k_10(j_4, s_70, t_70, t);
  t = r_70;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL;
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
                      v_70 = ATgetArgument(z_27, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm b_28 = (ATerm) ATgetNext((ATermList) x_27);
                    if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
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
                ATerm c_28 = ATgetFirst((ATermList) t_27);
                if(match_cons(c_28, sym_Strategies_1))
                  {
                    w_70 = ATgetArgument(c_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm i_28 = (ATerm) ATgetNext((ATermList) t_27);
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
  t = j_10(v_70, w_70, t);
  t = listbottomup_1_0(k_4, t);
  return(t);
}
static ATerm m_10 (ATerm b_57, ATerm c_57, ATerm t)
{
  ATerm y_70 = NULL;
  t = SSL_fputc(b_57, c_57);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_70);
  return(t);
}
static ATerm n_10 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_write_term_to_stream_text(w_41, x_41);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
static ATerm p_10 (ATerm s_127 (ATerm), ATerm n_267, ATerm c_42, ATerm t)
{
  ATerm a_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_267, term_j_28);
  t = t_10(t);
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_71, c_42);
  t = s_127(t);
  t = fclose_0_0(t);
  t = c_42;
  return(t);
}
static ATerm o_10 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm b_71 = NULL;
  t = SSL_write_term_to_stream_baf(s_41, t_41);
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_71);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_71 = NULL,p_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(match_cons(k_28, sym_Stream_1))
        {
          m_71 = ATgetArgument(k_28, 0);
        }
      else
        _fail(t);
      p_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(m_71, p_71, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(match_cons(l_28, sym_Stream_1))
        {
          t_71 = ATgetArgument(l_28, 0);
        }
      else
        _fail(t);
      u_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(t_71, u_71, t);
  q_71 = t;
  t = term_m_28;
  r_71 = t;
  t = q_71;
  if(match_cons(t, sym_Stream_1))
    {
      s_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, q_71);
  t = m_10(r_71, s_71, t);
  return(t);
}
ATerm output_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL;
  t = c_145(t);
  d_71 = t;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_71 = NULL,f_71 = NULL;
        t = term_k_25;
        e_71 = t;
        t = term_r_28;
        f_71 = t;
        t = term_t_28;
        t = z_10(e_71, f_71, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = term_e_29;
      }
  }
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_71, d_71);
  {
    ATerm f_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_71 = NULL,l_71 = NULL;
        t = term_k_25;
        k_71 = t;
        t = term_i_29;
        l_71 = t;
        t = term_j_29;
        t = z_10(k_71, l_71, t);
        t = (ATerm) ATmakeAppl(sym__2, c_71, d_71);
        LocalPopChoice(h_29);
        if(match_cons(t, sym__2))
          {
            ATerm k_29 = ATgetArgument(t, 0);
            ATerm m_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_10(l_4, c_71, d_71, t);
      }
    else
      {
        t = f_29;
        if(match_cons(t, sym__2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            ATerm v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_10(n_4, c_71, d_71, t);
      }
  }
  return(t);
}
static ATerm i_72 (ATerm c_72, ATerm t)
{
  t = SSL_fclose(c_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  g_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_72 = ATgetArgument(t, 0);
      {
        ATerm x_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_72);
            LocalPopChoice(z_29);
          }
        else
          {
            t = x_29;
            t = i_72(g_72, t);
          }
      }
    }
  else
    {
      t = i_72(g_72, t);
    }
  return(t);
}
static ATerm q_10 (ATerm y_41, ATerm t)
{
  t = SSL_read_term_from_stream(y_41);
  return(t);
}
static ATerm r_10 (ATerm u_55, ATerm v_55, ATerm t)
{
  t = SSL_strcat(u_55, v_55);
  return(t);
}
static ATerm s_10 (ATerm d_57, ATerm e_57, ATerm t)
{
  ATerm j_72 = NULL;
  t = SSL_fopen(d_57, e_57);
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_72 = NULL;
  t = SSL_stdin_stream();
  k_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_72 = NULL;
  t = SSL_stdout_stream();
  l_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_72 = NULL;
  t = SSL_stderr_stream();
  m_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_72);
  return(t);
}
static ATerm t_73 (ATerm s_72, ATerm t)
{
  ATerm t_72 = NULL;
  t = SSL_explode_term(s_72);
  if(match_cons(t, sym__2))
    {
      ATerm a_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
          {
            t_72 = ATgetFirst((ATermList) f_30);
            {
              ATerm j_30 = (ATerm) ATgetNext((ATermList) f_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_73 (ATerm w_72, ATerm x_72, ATerm y_72, ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,e_73 = NULL,n_9 = NULL;
  t = SSLgetAnnotations(y_72);
  b_73 = t;
  t = w_72;
  if(match_cons(t, sym_Path_1))
    {
      e_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_73, x_72);
  n_9 = t;
  t = SSLsetAnnotations(n_9, b_73);
  if(match_cons(t, sym__2))
    {
      z_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(z_72, a_73, t);
  return(t);
}
static ATerm v_73 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,o_73 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(i_73);
  l_73 = t;
  t = SSL_is_string(g_73);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_73, h_73);
  o_9 = t;
  t = SSLsetAnnotations(o_9, l_73);
  if(match_cons(t, sym__2))
    {
      j_73 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(j_73, k_73, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  if(match_cons(t, sym__2))
    {
      r_73 = ATgetArgument(t, 0);
      s_73 = ATgetArgument(t, 1);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_73(q_73, t);
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_73(r_73, s_73, q_73, t);
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = q_30;
                  t = v_73(r_73, s_73, q_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_73(q_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,e_74 = NULL;
  e_74 = t;
  {
    ATerm s_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_74, term_a_31);
        t = t_10(t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = s_30;
        {
          ATerm f_35 = NULL,g_35 = NULL;
          t = term_c_31;
          g_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_31, e_74);
          t = r_10(g_35, e_74, t);
          f_35 = t;
          t = SSL_perror(f_35);
          _fail(t);
        }
      }
  }
  y_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_10(z_73, t);
  x_73 = t;
  t = y_73;
  t = fclose_0_0(t);
  t = x_73;
  return(t);
}
ATerm input_1_0 (ATerm d_145 (ATerm), ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_74 = NULL,i_74 = NULL;
      t = term_k_25;
      h_74 = t;
      t = term_f_31;
      i_74 = t;
      t = term_g_31;
      t = z_10(h_74, i_74, t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = term_k_31;
    }
  t = ReadFromFile_0_0(t);
  t = d_145(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,t_74 = NULL,x_74 = NULL;
  j_74 = t;
  t = term_m_31;
  t = whoami_0_0(t);
  k_74 = t;
  t = term_n_31;
  t_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_31), k_74), term_o_31);
  x_74 = t;
  t = SSL_printnl(t_74, x_74);
  t = term_d_14;
  l_74 = t;
  t = SSL_exit(l_74);
  t = j_74;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm z_74 = NULL;
  z_74 = t;
  if(match_string(t, "-k"))
    {
      t = z_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_74;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  t = SSL_string_to_int(a_75);
  b_75 = t;
  t = term_t_31;
  c_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, b_75);
  t = c_11(c_75, b_75, t);
  t = a_75;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_75 = NULL;
  e_75 = t;
  if(match_string(t, "-S"))
    {
      t = e_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_75;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL;
  t = term_v_31;
  f_75 = t;
  t = term_b_14;
  g_75 = t;
  t = term_w_31;
  t = c_11(f_75, g_75, t);
  t = term_z_31;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_b_32;
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
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  t = SSL_string_to_int(h_75);
  i_75 = t;
  t = term_v_31;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, i_75);
  t = c_11(j_75, i_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_75);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_c_32;
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
  ATerm k_75 = NULL,l_75 = NULL;
  t = term_d_32;
  k_75 = t;
  t = term_m_31;
  l_75 = t;
  t = term_e_32;
  t = c_11(k_75, l_75, t);
  t = term_f_32;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, z_4, a_5, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_5, f_5, g_5, t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            t = Option_3_0(k_5, l_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm c_11 (ATerm o_89, ATerm p_89, ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL;
  t = term_k_25;
  m_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, o_89, p_89);
  t = lookup_table_0_1(m_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(o_89, p_89, n_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, o_89, p_89);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
      t = term_m_31;
      t = k_0(t);
      t_75 = t;
      t = term_m_32;
      u_75 = t;
      t = term_s_32;
      v_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_32, term_s_32, t_75);
      t = a_11(u_75, v_75, t_75, t);
      _fail(t);
    }
  else
    {
      ATerm y_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_75 = ATgetFirst((ATermList) t);
          s_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_75;
      t = d_0(t);
      t = term_m_31;
      t = g_0(t);
      y_75 = t;
      t = (ATerm) ATinsert(CheckATermList(s_75), y_75);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  if(match_string(t, "-o"))
    {
      t = a_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_76;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL;
  b_76 = t;
  t = term_r_28;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, b_76);
  t = c_11(c_76, b_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_76);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, p_5, q_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm e_76 = NULL;
  e_76 = t;
  if(match_string(t, "-i"))
    {
      t = e_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_76;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL;
  f_76 = t;
  t = term_f_31;
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, f_76);
  t = c_11(g_76, f_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_76);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_128 (ATerm), ATerm t)
{
  static ATerm b_77 (ATerm t);
  static ATerm b_77 (ATerm t)
  {
    ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
    a_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_76 = ATgetFirst((ATermList) t);
        z_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_35 = NULL,s_35 = NULL,r_9 = NULL;
          t = SSLgetAnnotations(a_77);
          l_35 = t;
          t = z_76;
          t = b_77(t);
          s_35 = t;
          t = (ATerm) ATinsert(CheckATermList(s_35), y_76);
          r_9 = t;
          t = SSLsetAnnotations(r_9, l_35);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_77;
        t = s_128(t);
      }
    return(t);
  }
  t = b_77(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_76;
    }
  else
    {
      static ATerm y_5 (ATerm t);
      static ATerm y_5 (ATerm t)
      {
        t = not_null(k_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_76 = ATgetFirst((ATermList) t);
          if(((k_76 != NULL) && (k_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_76;
      t = at_end_1_0(y_5, t);
    }
  return(t);
}
static ATerm n_77 (ATerm f_77, ATerm t)
{
  ATerm g_77 = NULL;
  t = SSL_explode_term(f_77);
  if(match_cons(t, sym__2))
    {
      ATerm v_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  k_77 = t;
  if(match_cons(t, sym__2))
    {
      i_77 = ATgetArgument(t, 0);
      j_77 = ATgetArgument(t, 1);
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_5 (ATerm t);
            static ATerm z_5 (ATerm t)
            {
              t = j_77;
              return(t);
            }
            t = i_77;
            t = at_end_1_0(z_5, t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = n_77(k_77, t);
          }
      }
    }
  else
    {
      t = n_77(k_77, t);
    }
  return(t);
}
static ATerm l_10 (ATerm v_89, ATerm w_89, ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  t = v_89;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_77 = NULL;
        t = term_k_25;
        t_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, v_89);
        t = z_10(t_77, v_89, t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = (ATerm) ATempty;
      }
  }
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_77, w_89);
  t = conc_0_0(t);
  o_77 = t;
  t = term_k_25;
  q_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, v_89, o_77);
  t = lookup_table_0_1(q_77, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(v_89, o_77, r_77, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, v_89, o_77);
  return(t);
}
static ATerm a_11 (ATerm u_69, ATerm v_69, ATerm t_69, ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_69, v_69);
  {
    ATerm a_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_33 = ATgetArgument(t, 0);
            ATerm g_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_69, v_69);
        t = z_10(u_69, v_69, t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATempty;
      }
  }
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_69, v_69, (ATerm) ATinsert(CheckATermList(w_77), t_69));
  t = lookup_table_0_1(u_69, t);
  z_77 = t;
  t = (ATerm) ATinsert(CheckATermList(w_77), t_69);
  x_77 = t;
  t = z_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(v_69, x_77, y_77, t);
  t = v_77;
  return(t);
}
ATerm ArgOption_3_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_78 = NULL,v_78 = NULL,d_79 = NULL;
      t = term_m_31;
      t = u_0(t);
      u_78 = t;
      t = term_m_32;
      v_78 = t;
      t = term_s_32;
      d_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_32, term_s_32, u_78);
      t = a_11(v_78, d_79, u_78, t);
      _fail(t);
    }
  else
    {
      ATerm h_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_78 = ATgetFirst((ATermList) t);
          h_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_78 = ATgetFirst((ATermList) t);
          j_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_78;
      t = q_0(t);
      t = i_78;
      t = t_0(t);
      h_79 = t;
      t = (ATerm) ATinsert(CheckATermList(j_78), h_79);
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
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  t = term_h_25;
  k_79 = t;
  t = (ATerm) ATinsert(ATempty, j_79);
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, j_79));
  t = l_10(k_79, l_79, t);
  t = j_79;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_79 = NULL;
  m_79 = t;
  if(match_string(t, "--library"))
    {
      t = m_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = m_79;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
  n_79 = t;
  t = term_z_25;
  o_79 = t;
  t = term_m_31;
  p_79 = t;
  t = term_i_33;
  t = c_11(o_79, p_79, t);
  t = n_79;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(a_6, b_6, g_6, t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      t = Option_3_0(i_6, j_6, l_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,z_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_31;
  t = whoami_0_0(t);
  v_79 = t;
  t = term_n_31;
  x_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_33), v_79);
  z_79 = t;
  t = SSL_printnl(x_79, z_79);
  t = term_d_14;
  w_79 = t;
  t = SSL_exit(w_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL;
  t = term_k_25;
  a_80 = t;
  t = term_n_33;
  b_80 = t;
  t = term_o_33;
  t = z_10(a_80, b_80, t);
  return(t);
}
static ATerm u_10 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_59, y_59);
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = SSL_addr(x_59, y_59);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
  d_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_80;
      t = a_135(t);
    }
  else
    {
      ATerm i_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_80 = ATgetFirst((ATermList) t);
          f_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_80;
      t = foldr_2_0(a_135, b_135, t);
      i_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_80, i_80);
      t = b_135(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  if(match_cons(t, sym__2))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(b_36, c_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_80 = NULL,x_35 = NULL,y_35 = NULL;
  t = times_0_0(t);
  y_35 = t;
  t = SSL_explode_term(y_35);
  if(match_cons(t, sym__2))
    {
      ATerm u_33 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_35;
  t = foldr_2_0(m_6, p_6, t);
  l_80 = t;
  t = SSL_TicksToSeconds(l_80);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  if(match_cons(t, sym__2))
    {
      x_80 = ATgetArgument(t, 0);
      y_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_80;
        if((x_80 != t))
          {
            _fail(t);
          }
        t = w_80;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATmakeAppl(sym__2, x_80, y_80);
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_80, y_80);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              t = SSL_gtr(x_80, y_80);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_80, y_80);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_143 (ATerm), ATerm t)
{
  ATerm c_81 = NULL;
  c_81 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
        t = term_k_25;
        f_81 = t;
        t = term_v_31;
        g_81 = t;
        t = term_b_34;
        t = z_10(f_81, g_81, t);
        e_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_81, term_d_14);
        t = geq_0_0(t);
        t = c_81;
        t = f_143(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = c_81;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,l_81 = NULL,m_81 = NULL;
  t = run_time_0_0(t);
  i_81 = t;
  t = term_m_31;
  t = whoami_0_0(t);
  j_81 = t;
  t = term_n_31;
  l_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_34), i_81), term_f_34), j_81);
  m_81 = t;
  t = SSL_printnl(l_81, m_81);
  t = (ATerm) ATmakeAppl(sym__2, term_n_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_34), i_81), term_f_34), j_81));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_14;
  n_81 = t;
  t = SSL_exit(n_81);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL;
  y_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_81 = ATgetArgument(t, 0);
          {
            ATerm o_36 = NULL,x_9 = NULL;
            t = SSLgetAnnotations(y_81);
            o_36 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_81);
            x_9 = t;
            t = SSLsetAnnotations(x_9, o_36);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_144 (ATerm), ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_81 = NULL,r_81 = NULL;
      t = term_k_25;
      q_81 = t;
      t = term_k_34;
      r_81 = t;
      t = term_l_34;
      t = z_10(q_81, r_81, t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = fetch_1_0(t_6, t);
    }
  t = t_144(t);
  return(t);
}
static ATerm d_11 (ATerm m_74, ATerm n_74, ATerm o_74, ATerm t)
{
  ATerm a_82 = NULL;
  t = SSL_hashtable_put(o_74, m_74, n_74);
  a_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_82);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_71, ATerm t)
{
  ATerm j_82 = NULL;
  t = table_hashtable_0_0(t);
  j_82 = t;
  {
    ATerm o_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL;
        t = j_82;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_11(g_71, u_36, t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = o_34;
        {
          ATerm z_36 = NULL;
          t = g_71;
          t = table_create_0_0(t);
          t = j_82;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_11(g_71, z_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_74, ATerm v_74, ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_hashtable_create(u_74, v_74);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_82);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,r_82 = NULL,s_82 = NULL;
  n_82 = t;
  t = term_r_34;
  r_82 = t;
  t = term_s_34;
  s_82 = t;
  t = n_82;
  t = new_hashtable_0_2(r_82, s_82, t);
  o_82 = t;
  t = n_82;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(n_82, o_82, p_82, t);
  t = n_82;
  return(t);
}
static ATerm w_10 (ATerm r_74, ATerm s_74, ATerm t)
{
  ATerm t_82 = NULL;
  t = SSL_hashtable_remove(s_74, r_74);
  t_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_82);
  return(t);
}
static ATerm x_10 (ATerm w_74, ATerm t)
{
  ATerm u_82 = NULL;
  t = SSL_hashtable_destroy(w_74);
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_82);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_82 = NULL;
  t = SSL_table_hashtable();
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_82);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  w_82 = t;
  t = table_hashtable_0_0(t);
  x_82 = t;
  t = lookup_table_0_1(w_82, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_10(z_82, t);
  t = x_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_10(w_82, y_82, t);
  t = w_82;
  return(t);
}
ATerm map_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  static ATerm o_83 (ATerm t);
  static ATerm o_83 (ATerm t)
  {
    ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
    l_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_83;
      }
    else
      {
        ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL,a_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_83 = ATgetFirst((ATermList) t);
            n_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_83);
        e_37 = t;
        t = m_83;
        t = b_128(t);
        h_37 = t;
        t = n_83;
        t = o_83(t);
        i_37 = t;
        t = (ATerm) ATinsert(CheckATermList(i_37), h_37);
        a_10 = t;
        t = SSLsetAnnotations(a_10, e_37);
      }
    return(t);
  }
  t = o_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_83 = ATgetFirst((ATermList) t);
      s_83 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_83 = NULL,x_83 = NULL;
        static ATerm u_6 (ATerm t);
        static ATerm u_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_83)), not_null(x_83));
          return(t);
        }
        t = s_83;
        t = p_0(t);
        if(((w_83 != NULL) && (w_83 != t)))
          _fail(t);
        else
          w_83 = t;
        t = r_83;
        t = m_0(t);
        if(((x_83 != NULL) && (x_83 != t)))
          _fail(t);
        else
          x_83 = t;
        t = s_83;
        t = reverse_acc_2_0(m_0, u_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_31;
      t = p_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,b_11 = NULL;
  f_84 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_84);
  d_84 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_84);
  b_11 = t;
  t = SSLsetAnnotations(b_11, d_84);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_84 = NULL;
  h_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_84), term_t_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL;
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_84 = NULL,c_84 = NULL;
      t = term_k_25;
      b_84 = t;
      t = term_n_33;
      c_84 = t;
      t = term_o_33;
      t = z_10(b_84, c_84, t);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = fetch_1_0(v_6, t);
    }
  t = term_y_34;
  t = echo_0_0(t);
  t = term_m_32;
  z_83 = t;
  t = term_s_32;
  a_84 = t;
  t = term_z_34;
  t = z_10(z_83, a_84, t);
  t = reverse_acc_2_0(_id, y_6, t);
  t = map_1_0(z_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_128 (ATerm), ATerm t)
{
  static ATerm e_85 (ATerm t);
  static ATerm e_85 (ATerm t)
  {
    ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
    b_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_85 = ATgetFirst((ATermList) t);
        d_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_37 = NULL,t_37 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(b_85);
          q_37 = t;
          t = c_85;
          t = l_128(t);
          t_37 = t;
          t = (ATerm) ATinsert(CheckATermList(d_85), t_37);
          g_11 = t;
          t = SSLsetAnnotations(g_11, q_37);
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm b_38 = NULL,f_38 = NULL,h_11 = NULL;
            t = SSLgetAnnotations(b_85);
            b_38 = t;
            t = d_85;
            t = e_85(t);
            f_38 = t;
            t = (ATerm) ATinsert(CheckATermList(f_38), c_85);
            h_11 = t;
            t = SSLsetAnnotations(h_11, b_38);
          }
        }
    }
    return(t);
  }
  t = e_85(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_85;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_35 = ATgetFirst((ATermList) t);
                ATerm h_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_85;
          }
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = (ATerm) ATinsert(ATempty, i_85);
      }
  }
  j_85 = t;
  t = term_e_29;
  k_85 = t;
  t = SSL_printnl(k_85, j_85);
  t = i_85;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL;
  t = term_k_25;
  o_85 = t;
  t = term_n_33;
  p_85 = t;
  t = term_o_33;
  t = z_10(o_85, p_85, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_11 (ATerm p_74, ATerm q_74, ATerm t)
{
  t = SSL_hashtable_get(q_74, p_74);
  return(t);
}
static ATerm z_10 (ATerm n_71, ATerm o_71, ATerm t)
{
  ATerm q_85 = NULL;
  t = lookup_table_0_1(n_71, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(o_71, q_85, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL;
  t = term_i_35;
  s_85 = t;
  t = term_m_31;
  t_85 = t;
  t = term_j_35;
  t = c_11(s_85, t_85, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL;
  t = term_i_35;
  w_85 = t;
  t = term_m_31;
  x_85 = t;
  t = term_j_35;
  t = c_11(w_85, x_85, t);
  t = term_n_35;
  u_85 = t;
  t = term_m_31;
  v_85 = t;
  t = term_r_35;
  t = c_11(u_85, v_85, t);
  t = term_t_35;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_7, e_7, f_7, t);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      t = Option_3_0(g_7, j_7, m_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,n_11 = NULL;
  d_86 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_85 = ATgetFirst((ATermList) t);
      a_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_86);
  y_85 = t;
  t = z_85;
  t = h_99(t);
  b_86 = t;
  t = a_86;
  t = i_99(t);
  c_86 = t;
  t = (ATerm) ATinsert(CheckATermList(c_86), b_86);
  n_11 = t;
  t = SSLsetAnnotations(n_11, y_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_147 (ATerm), ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,n_86 = NULL,o_86 = NULL,v_11 = NULL;
  i_86 = t;
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_36;
        t = k_147(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
      }
  }
  t = i_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_86 = ATgetFirst((ATermList) t);
      l_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_86);
  j_86 = t;
  t = term_n_33;
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_33, k_86);
  t = c_11(o_86, k_86, t);
  t = l_86;
  {
    static ATerm y_86 (ATerm t);
    static ATerm y_86 (ATerm t)
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_86 = NULL;
              r_86 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_86;
              LocalPopChoice(h_36);
            }
          else
            {
              t = g_36;
              t = k_147(t);
              t = Cons_2_0(_id, y_86, t);
            }
          LocalPopChoice(f_36);
        }
      else
        {
          t = e_36;
          {
            ATerm u_86 = NULL,v_86 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_86 = ATgetFirst((ATermList) t);
                v_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_86), (ATerm) ATmakeAppl(sym_Undefined_1, u_86));
          }
        }
      return(t);
    }
    t = y_86(t);
  }
  n_86 = t;
  t = (ATerm) ATinsert(CheckATermList(n_86), (ATerm) ATmakeAppl(sym_Program_1, k_86));
  v_11 = t;
  t = SSLsetAnnotations(v_11, j_86);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm l_87 = NULL;
  l_87 = t;
  if(match_string(t, "--help"))
    {
      t = l_87;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_87;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_87;
        }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL;
  t = term_k_34;
  m_87 = t;
  t = term_m_31;
  n_87 = t;
  t = term_i_36;
  t = c_11(m_87, n_87, t);
  t = term_j_36;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_147 (ATerm), ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL;
  f_87 = t;
  t = term_m_32;
  g_87 = t;
  t = term_l_36;
  t = lookup_table_0_1(g_87, t);
  k_87 = t;
  t = term_s_32;
  h_87 = t;
  t = (ATerm) ATempty;
  i_87 = t;
  t = k_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(h_87, i_87, j_87, t);
  t = f_87;
  {
    static ATerm o_7 (ATerm t);
    static ATerm o_7 (ATerm t)
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_147(t);
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_7, q_7, r_7, t);
                LocalPopChoice(q_36);
              }
            else
              {
                t = p_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
  }
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_87 = NULL;
        y_87 = t;
        {
          ATerm t_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_38 = NULL;
              t = y_87;
              {
                ATerm w_36 = t;
                int x_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_38 = NULL,p_38 = NULL;
                    t = term_k_25;
                    o_38 = t;
                    t = term_k_34;
                    p_38 = t;
                    t = term_l_34;
                    t = z_10(o_38, p_38, t);
                    LocalPopChoice(x_36);
                  }
                else
                  {
                    t = w_36;
                    t = fetch_1_0(u_7, t);
                  }
              }
              t = y_87;
              t = default_system_usage_0_0(t);
              t = term_b_14;
              n_38 = t;
              t = SSL_exit(n_38);
              LocalPopChoice(v_36);
            }
          else
            {
              t = t_36;
              {
                ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
                t = term_k_25;
                v_38 = t;
                t = term_i_35;
                w_38 = t;
                t = term_y_36;
                t = z_10(v_38, w_38, t);
                t = y_87;
                t = default_system_about_0_0(t);
                t = term_b_14;
                u_38 = t;
                t = SSL_exit(u_38);
              }
            }
        }
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        {
          ATerm a_37 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
              static ATerm v_7 (ATerm t);
              static ATerm v_7 (ATerm t)
              {
                ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,x_11 = NULL;
                e_88 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_88);
                c_88 = t;
                t = d_88;
                if(((d_87 != NULL) && (d_87 != t)))
                  _fail(t);
                else
                  d_87 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_88);
                x_11 = t;
                t = SSLsetAnnotations(x_11, c_88);
                return(t);
              }
              t = fetch_1_0(v_7, t);
              t = term_n_31;
              a_88 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_87)), term_c_37);
              b_88 = t;
              t = SSL_printnl(a_88, b_88);
              t = (ATerm) ATmakeAppl(sym__2, term_n_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_87)), term_c_37));
              t = default_system_usage_0_0(t);
              t = term_d_14;
              z_87 = t;
              t = SSL_exit(z_87);
              LocalPopChoice(b_37);
            }
          else
            {
              t = a_37;
            }
        }
      }
  }
  e_87 = t;
  t = term_m_32;
  t = table_destroy_0_0(t);
  t = e_87;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm y_144 (ATerm), ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL;
  t = parse_options_1_0(v_144, t);
  j_88 = t;
  t = term_d_37;
  t = table_create_0_0(t);
  t = term_d_37;
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_37, term_f_37, j_88);
  t = lookup_table_0_1(k_88, t);
  n_88 = t;
  t = term_f_37;
  l_88 = t;
  t = n_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(l_88, j_88, m_88, t);
  t = j_88;
  t = x_144(t);
  {
    ATerm g_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_144, t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = g_37;
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_144(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
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
              ATerm r_37 = t;
              int s_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(s_37);
                }
              else
                {
                  t = r_37;
                  {
                    ATerm u_37 = t;
                    int v_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, d_8, e_8, t);
                        LocalPopChoice(v_37);
                      }
                    else
                      {
                        t = u_37;
                        {
                          ATerm w_37 = t;
                          int x_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(x_37);
                            }
                          else
                            {
                              t = w_37;
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
  ATerm p_88 = NULL,q_88 = NULL;
  t = term_i_29;
  p_88 = t;
  t = term_m_31;
  q_88 = t;
  t = term_y_37;
  t = c_11(p_88, q_88, t);
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
  t = option_wrap_4_0(y_7, default_usage_0_0, _id, z_7, t);
  return(t);
}
