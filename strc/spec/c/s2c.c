#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Match_2;
static Symbol sym_Include_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Conc_2;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_Anno_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_SeqVar_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LGChoice_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_OpDecl_2;
static Symbol sym_Constructors_1;
static Symbol sym_Case_4;
static Symbol sym_Case_3;
static Symbol sym_Case_2;
static Symbol sym_Alt_3;
static Symbol sym_Continue_1;
static Symbol sym_Assign_2;
static Symbol sym_Assign_1;
static Symbol sym_Fun_2;
static Symbol sym_Str_1;
static Symbol sym_Int_1;
static Symbol sym_Real_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conc_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_None_0;
static Symbol sym_Some_1;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Anno_2;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Conc_2;
static Symbol sym_Some_1;
static Symbol sym_None_0;
static Symbol sym_FunType_2;
static Symbol sym_ParamList_1;
static Symbol sym_TypeName_2;
static Symbol sym_TypeName_2;
static Symbol sym_ParamDecl_2;
static Symbol sym_DeclSpec_5;
static Symbol sym_TypeSpec_3;
static Symbol sym_AssignInit_1;
static Symbol sym_DeclInit_2;
static Symbol sym_Void_0;
static Symbol sym_Int_0;
static Symbol sym_Static_0;
static Symbol sym_Return_1;
static Symbol sym_Continue_0;
static Symbol sym_Goto_1;
static Symbol sym_IfElse_3;
static Symbol sym_If_2;
static Symbol sym_Stat_1;
static Symbol sym_Compound_2;
static Symbol sym_Case_2;
static Symbol sym_Label_2;
static Symbol sym_EmptyExp_0;
static Symbol sym_AssignEq_0;
static Symbol sym_Assign_3;
static Symbol sym_IfExp_3;
static Symbol sym_LOr_2;
static Symbol sym_LAnd_2;
static Symbol sym_NotEqual_2;
static Symbol sym_Equal_2;
static Symbol sym_TypeCast_2;
static Symbol sym_Negation_1;
static Symbol sym_Address_1;
static Symbol sym_FunCall_2;
static Symbol sym_Declaration2_2;
static Symbol sym_FunDef_3;
static Symbol sym_TranslationUnit_1;
static Symbol sym_IdDecl_3;
static Symbol sym_TypeId_1;
static Symbol sym_Id_1;
static Symbol sym_StringLit_1;
static Symbol sym_FloatConst_1;
static Symbol sym_IntConst_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static void init_module_constructors (void)
{
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
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
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
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
static ATerm term_e_38;
static ATerm term_d_38;
static ATerm term_c_38;
static ATerm term_m_37;
static ATerm term_l_37;
static ATerm term_j_37;
static ATerm term_g_37;
static ATerm term_e_37;
static ATerm term_s_36;
static ATerm term_r_36;
static ATerm term_q_36;
static ATerm term_n_36;
static ATerm term_m_36;
static ATerm term_a_36;
static ATerm term_u_35;
static ATerm term_t_35;
static ATerm term_s_35;
static ATerm term_r_35;
static ATerm term_o_35;
static ATerm term_n_35;
static ATerm term_l_35;
static ATerm term_i_35;
static ATerm term_f_35;
static ATerm term_z_34;
static ATerm term_y_34;
static ATerm term_x_34;
static ATerm term_j_34;
static ATerm term_i_34;
static ATerm term_c_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_n_33;
static ATerm term_m_33;
static ATerm term_h_33;
static ATerm term_e_33;
static ATerm term_c_33;
static ATerm term_a_33;
static ATerm term_z_32;
static ATerm term_y_32;
static ATerm term_w_32;
static ATerm term_v_32;
static ATerm term_u_32;
static ATerm term_t_32;
static ATerm term_s_32;
static ATerm term_f_32;
static ATerm term_e_32;
static ATerm term_d_32;
static ATerm term_c_32;
static ATerm term_b_32;
static ATerm term_v_31;
static ATerm term_t_31;
static ATerm term_l_31;
static ATerm term_h_31;
static ATerm term_g_31;
static ATerm term_a_31;
static ATerm term_w_30;
static ATerm term_m_30;
static ATerm term_k_30;
static ATerm term_h_29;
static ATerm term_f_29;
static ATerm term_a_29;
static ATerm term_z_28;
static ATerm term_w_28;
static ATerm term_r_28;
static ATerm term_m_28;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_s_27;
static ATerm term_j_27;
static ATerm term_i_27;
static ATerm term_f_27;
static ATerm term_b_27;
static ATerm term_a_27;
static ATerm term_z_26;
static ATerm term_y_26;
static ATerm term_v_26;
static ATerm term_s_26;
static ATerm term_r_26;
static ATerm term_q_26;
static ATerm term_p_26;
static ATerm term_m_26;
static ATerm term_l_26;
static ATerm term_k_26;
static ATerm term_j_26;
static ATerm term_i_26;
static ATerm term_h_26;
static ATerm term_g_26;
static ATerm term_s_25;
static ATerm term_r_25;
static ATerm term_o_25;
static ATerm term_n_25;
static ATerm term_m_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_j_25;
static ATerm term_i_25;
static ATerm term_h_25;
static ATerm term_y_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_l_24;
static ATerm term_k_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_e_24;
static ATerm term_r_23;
static ATerm term_q_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_l_23;
static ATerm term_k_23;
static ATerm term_v_22;
static ATerm term_u_22;
static ATerm term_i_22;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_g_21;
static ATerm term_f_21;
static ATerm term_e_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_t_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_i_20;
static ATerm term_h_20;
static ATerm term_g_20;
static ATerm term_f_20;
static ATerm term_e_20;
static ATerm term_d_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_a_20;
static ATerm term_z_19;
static ATerm term_y_19;
static ATerm term_x_19;
static ATerm term_w_19;
static ATerm term_v_19;
static ATerm term_u_19;
static ATerm term_t_19;
static ATerm term_s_19;
static ATerm term_r_19;
static ATerm term_q_19;
static ATerm term_p_19;
static ATerm term_o_19;
static ATerm term_n_19;
static ATerm term_m_19;
static ATerm term_l_19;
static ATerm term_i_19;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_e_18;
static ATerm term_t_17;
static ATerm term_s_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_k_17;
static ATerm term_j_17;
static ATerm term_i_17;
static ATerm term_h_17;
static ATerm term_g_17;
static ATerm term_f_17;
static ATerm term_d_17;
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_i_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_f_16;
static ATerm term_d_16;
static ATerm term_z_15;
static ATerm term_y_15;
static ATerm term_x_15;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_s_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_o_15;
static ATerm term_n_15;
static ATerm term_d_15;
static ATerm term_c_15;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_o_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_f_14;
static ATerm term_e_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_a_14;
static ATerm term_g_13;
static ATerm term_e_13;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_p_12;
static ATerm term_m_12;
static ATerm term_c_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_z_11;
static ATerm term_v_11;
static ATerm term_s_11;
static ATerm term_q_11;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_l_11;
static ATerm term_i_11;
static ATerm term_g_11;
static ATerm term_e_11;
static ATerm term_d_11;
static ATerm term_w_10;
static ATerm term_t_10;
static ATerm term_b_10;
static ATerm term_z_9;
static ATerm term_w_9;
static ATerm term_v_9;
static ATerm term_p_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_9, (ATerm) ATempty);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Id_1, term_z_9);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Id_1, term_t_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_10, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Some_1, term_e_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_9, term_g_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Id_1, term_l_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_11, (ATerm) ATempty);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Id_1, term_v_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Return_1, term_w_10);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Id_1, term_b_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_p_12, (ATerm) ATempty);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_9, term_d_11);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Id_1, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Id_1, term_l_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Id_1, term_o_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Id_1, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Id_1, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_pop_seqvar", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Id_1, term_w_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Id_1, term_c_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_1, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Id_1, term_y_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, term_r_14);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Id_1, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Id_1, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Id_1, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_17, (ATerm) ATempty);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_17, term_d_11);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Id_1, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Id_1, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_17, (ATerm) ATempty);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_17, term_d_11);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Id_1, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Id_1, term_g_18);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_14);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_w_10);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Id_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_19, (ATerm) ATempty);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_q_19, term_q_15);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Id_1, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATempty);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_y_19, term_q_15);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_20, (ATerm) ATempty);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Id_1, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Id_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_20, term_d_11);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Id_1, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Id_1, term_v_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Id_1, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_21, term_d_11);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATappend", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Id_1, term_f_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Id_1, term_u_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, term_w_10);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_u_22, (ATerm)ATempty, term_v_9, (ATerm) ATempty);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Id_1, term_e_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Id_1, term_g_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(98);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(113);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_u_22, (ATerm)ATempty, term_l_25, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_o_25);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_26, (ATerm) ATempty);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Id_1, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_j_26, term_d_11);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Include_1, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Include_1, term_r_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_u_22, (ATerm)ATempty, term_i_26, (ATerm) ATempty);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Id_1, term_y_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Id_1, term_a_27);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Op_2, term_i_27, (ATerm) ATempty);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_s_27, term_i_16);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_t_27);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_w_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_f_29);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_w_30);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_h_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_d_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_a_14);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_14);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_t_31);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_t_31);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_u_32);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_l_35, term_t_31);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_t_31);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_m_36, term_t_31);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, (ATerm) ATempty);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_m_36);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_l_35);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_t_31);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm b_3 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm z_171 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm i_138 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm q_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t);
static ATerm e_10 (ATerm j_64, ATerm k_64, ATerm t);
static ATerm w_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm s_9 (ATerm u_30, ATerm x_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm t_9 (ATerm j_36, ATerm i_36, ATerm t);
static ATerm u_9 (ATerm z_211, ATerm f_36, ATerm h_36, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm p_55 (ATerm k_29, ATerm l_29, ATerm m_29, ATerm o_29, ATerm p_29, ATerm t);
static ATerm q_55 (ATerm d_35, ATerm e_35, ATerm w_38, ATerm t);
static ATerm r_55 (ATerm f_40, ATerm i_40, ATerm j_40, ATerm t);
static ATerm s_55 (ATerm s_40, ATerm a_41, ATerm b_41, ATerm g_41, ATerm t);
static ATerm t_55 (ATerm o_41, ATerm p_41, ATerm q_41, ATerm r_41, ATerm t);
static ATerm z_55 (ATerm y_41, ATerm z_41, ATerm a_42, ATerm d_42, ATerm t);
static ATerm a_56 (ATerm h_42, ATerm j_42, ATerm k_42, ATerm o_42, ATerm t);
static ATerm c_56 (ATerm y_42, ATerm z_42, ATerm j_43, ATerm k_43, ATerm l_43, ATerm m_43, ATerm n_43, ATerm o_43, ATerm q_43, ATerm t);
static ATerm d_56 (ATerm f_45, ATerm g_45, ATerm i_45, ATerm j_45, ATerm k_45, ATerm l_45, ATerm t);
static ATerm e_56 (ATerm u_45, ATerm x_45, ATerm z_45, ATerm b_46, ATerm c_46, ATerm d_46, ATerm t);
static ATerm f_56 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm TranslateStrat_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm m_155 (ATerm), ATerm t);
static ATerm a_10 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t);
ATerm thread_map_1_0 (ATerm g_152 (ATerm), ATerm t);
static ATerm g_63 (ATerm f_60, ATerm g_60, ATerm h_60, ATerm i_60, ATerm j_60, ATerm k_60, ATerm t);
static ATerm h_63 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm m_61, ATerm t);
static ATerm i_63 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm u_61, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_138 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm translate_body_0_0 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_152 (ATerm), ATerm t);
ATerm TranslateType_0_0 (ATerm t);
ATerm TranslateVarDec_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm is_local_function_0_0 (ATerm t);
ATerm SDefToDeclaration_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm f_10 (ATerm o_40, ATerm m_40, ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm j_155 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm r_151 (ATerm), ATerm s_151 (ATerm), ATerm t_151 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm g_10 (ATerm b_40, ATerm a_40, ATerm t);
static ATerm v_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm h_10 (ATerm v_40, ATerm y_40, ATerm t);
static ATerm i_10 (ATerm j_172 (ATerm), ATerm h_89, ATerm f_89, ATerm t);
static ATerm d_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm k_10 (ATerm m_58, ATerm n_58, ATerm t);
static ATerm l_10 (ATerm p_42, ATerm q_42, ATerm t);
static ATerm n_10 (ATerm k_144 (ATerm), ATerm m_288, ATerm v_42, ATerm t);
static ATerm m_10 (ATerm l_42, ATerm m_42, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_1_0 (ATerm b_164 (ATerm), ATerm t);
static ATerm e_75 (ATerm y_74, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_10 (ATerm r_42, ATerm t);
static ATerm p_10 (ATerm s_56, ATerm t_56, ATerm t);
static ATerm q_10 (ATerm o_58, ATerm p_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_76 (ATerm o_75, ATerm t);
static ATerm q_76 (ATerm s_75, ATerm t_75, ATerm u_75, ATerm t);
static ATerm r_76 (ATerm c_76, ATerm d_76, ATerm e_76, ATerm t);
static ATerm r_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_164 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_144 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_166 (ATerm), ATerm p_166 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_11 (ATerm q_105, ATerm r_105, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm h_145 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_82 (ATerm z_81, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_10 (ATerm x_105, ATerm y_105, ATerm t);
static ATerm y_10 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_10 (ATerm h_62, ATerm i_62, ATerm t);
ATerm foldr_2_0 (ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_161 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_11 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t);
ATerm lookup_table_0_1 (ATerm k_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_10 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm v_10 (ATerm x_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_145 (ATerm), ATerm t);
static ATerm c_11 (ATerm q_68, ATerm r_68, ATerm t);
static ATerm x_10 (ATerm r_65, ATerm s_65, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_166 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm parse_options_3_0 (ATerm g_166 (ATerm), ATerm h_166 (ATerm), ATerm i_166 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm v_163 (ATerm), ATerm w_163 (ATerm), ATerm x_163 (ATerm), ATerm y_163 (ATerm), ATerm z_163 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm listbu1_1_0 (ATerm b_3 (ATerm), ATerm t)
{
  ATerm b_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 = NULL,p_1 = NULL,r_1 = NULL,m_0 = NULL,u_0 = NULL,q_0 = NULL;
      o_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_1 = ATgetFirst((ATermList) t);
          r_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_1);
      m_0 = t;
      t = r_1;
      t = listbu1_1_0(b_3, t);
      u_0 = t;
      t = (ATerm) ATinsert(CheckATermList(u_0), p_1);
      q_0 = t;
      t = SSLsetAnnotations(q_0, m_0);
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_3(t);
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
          }
      }
      LocalPopChoice(d_8);
    }
  else
    {
      t = b_8;
      t = b_3(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_8 = ATgetFirst((ATermList) t);
      if(match_cons(h_8, sym_Compound_2))
        {
          ATerm i_8 = ATgetArgument(h_8, 0);
          if(((ATgetType(i_8) != AT_LIST) || !(ATisEmpty(i_8))))
            _fail(t);
          h_4 = ATgetArgument(h_8, 1);
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
      ATerm j_8 = ATgetFirst((ATermList) t);
      if(match_cons(j_8, sym_Compound_2))
        {
          ATerm n_8 = ATgetArgument(j_8, 0);
          if(((ATgetType(n_8) != AT_LIST) || !(ATisEmpty(n_8))))
            _fail(t);
          d_5 = ATgetArgument(j_8, 1);
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
      ATerm o_8 = ATgetFirst((ATermList) t);
      if(match_cons(o_8, sym_Compound_2))
        {
          ATerm q_8 = ATgetArgument(o_8, 0);
          if(((ATgetType(q_8) != AT_LIST) || !(ATisEmpty(q_8))))
            _fail(t);
          i_5 = ATgetArgument(o_8, 1);
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
static ATerm o_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_8 = ATgetFirst((ATermList) t);
      if(match_cons(r_8, sym_Compound_2))
        {
          ATerm s_8 = ATgetArgument(r_8, 0);
          if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
            _fail(t);
          y_5 = ATgetArgument(r_8, 1);
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
      ATerm t_8 = ATgetFirst((ATermList) t);
      if(match_cons(t_8, sym_Compound_2))
        {
          ATerm v_8 = ATgetArgument(t_8, 0);
          if(((ATgetType(v_8) != AT_LIST) || !(ATisEmpty(v_8))))
            _fail(t);
          d_6 = ATgetArgument(t_8, 1);
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
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      w_2 = ATgetArgument(t, 2);
      t = w_2;
      if(match_cons(t, sym_Compound_2))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          t = y_2;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = x_2;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      f_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                      t = j_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = f_3;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_3), w_2);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, d_3, e_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, d_3, e_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, d_3, e_3);
                    }
                }
              else
                {
                  t = e_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      f_3 = ATgetArgument(t, 0);
                      j_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_3), w_2);
                }
            }
          else
            {
              t = e_3;
              if(match_cons(t, sym_Compound_2))
                {
                  f_3 = ATgetArgument(t, 0);
                  j_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_3), w_2);
            }
        }
      else
        {
          t = e_3;
          if(match_cons(t, sym_Compound_2))
            {
              f_3 = ATgetArgument(t, 0);
              j_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, d_3), w_2);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_3 = ATgetFirst((ATermList) t);
          e_3 = (ATerm) ATgetNext((ATermList) t);
          t = d_3;
          if(match_cons(t, sym_Stat_1))
            {
              z_2 = ATgetArgument(t, 0);
              t = z_2;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = e_3;
            }
          else
            {
              if(match_cons(t, sym_Compound_2))
                {
                  z_2 = ATgetArgument(t, 0);
                  a_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_2;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_3, e_3);
              t = conc_0_0(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              d_3 = ATgetArgument(t, 0);
              e_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_3 = ATgetFirst((ATermList) t);
              j_3 = (ATerm) ATgetNext((ATermList) t);
              t = j_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = f_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      g_3 = ATgetArgument(t, 0);
                      h_3 = ATgetArgument(t, 1);
                      {
                        ATerm w_8 = t;
                        int y_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_4 = NULL;
                            t = e_3;
                            t = listbu1_1_0(a_0, t);
                            g_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, g_4);
                            LocalPopChoice(y_8);
                          }
                        else
                          {
                            t = w_8;
                            {
                              ATerm b_9 = t;
                              int e_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, d_3, g_3);
                                  t = conc_0_0(t);
                                  q_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, q_4, h_3);
                                  LocalPopChoice(e_9);
                                }
                              else
                                {
                                  t = b_9;
                                  {
                                    ATerm y_4 = NULL,z_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, d_3, g_3);
                                    t = conc_0_0(t);
                                    y_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, h_3, j_3);
                                    t = conc_0_0(t);
                                    z_4 = t;
                                    t = (ATerm) ATmakeAppl(sym_Compound_2, y_4, z_4);
                                  }
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_5 = NULL;
                      t = e_3;
                      t = listbu1_1_0(c_0, t);
                      c_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, c_5);
                    }
                }
              else
                {
                  t = f_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      g_3 = ATgetArgument(t, 0);
                      h_3 = ATgetArgument(t, 1);
                      {
                        ATerm f_9 = t;
                        int h_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_5 = NULL;
                            t = e_3;
                            t = listbu1_1_0(i_0, t);
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, h_5);
                            LocalPopChoice(h_9);
                          }
                        else
                          {
                            t = f_9;
                            {
                              ATerm r_5 = NULL,s_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, d_3, g_3);
                              t = conc_0_0(t);
                              r_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, h_3, j_3);
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
                      t = e_3;
                      t = listbu1_1_0(o_0, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, v_5);
                    }
                }
            }
          else
            {
              ATerm c_6 = NULL;
              t = e_3;
              t = listbu1_1_0(s_0, t);
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, c_6);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm j_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_137(t);
        t = f_6(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = j_9;
        t = i_137(t);
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm z_171 (ATerm), ATerm t)
{
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    t = z_171(t);
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_7 = NULL,c_7 = NULL,h_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,e_1 = NULL;
          b_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_7 = ATgetFirst((ATermList) t);
              h_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_7);
          w_1 = t;
          t = c_7;
          t = l_7(t);
          z_1 = t;
          t = h_7;
          t = l_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          e_1 = t;
          t = SSLsetAnnotations(e_1, w_1);
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          t = SRTS_all(l_7, t);
        }
    }
    t = z_171(t);
    return(t);
  }
  t = l_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm i_138 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(i_138, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = i_138(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_i_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_11, (ATerm) ATinsert(ATempty, term_w_10))))), term_q_11)));
  return(t);
}
static ATerm q_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, k_31)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_31), term_s_11, j_31)));
  return(t);
}
static ATerm e_10 (ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm o_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_64, k_64);
  t = x_10(j_64, k_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_7 = ATgetFirst((ATermList) t);
      {
        ATerm d_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_7;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm proper_list_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,y_11 = NULL;
  t_11 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(t_11);
        i_2 = t;
        t = u_11;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = y_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, u_11, y_11);
        i_1 = t;
        t = SSLsetAnnotations(i_1, i_2);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,v_2 = NULL,i_3 = NULL,t_3 = NULL,j_4 = NULL,k_4 = NULL,k_1 = NULL,j_1 = NULL;
              t = SSLgetAnnotations(t_11);
              s_2 = t;
              t = u_11;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = y_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_3 = ATgetFirst((ATermList) t);
                  t_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_11);
              v_2 = t;
              t = t_3;
              t = Cons_2_0(proper_list_0_0, w_0, t);
              j_4 = t;
              t = (ATerm) ATinsert(CheckATermList(j_4), i_3);
              j_1 = t;
              t = SSLsetAnnotations(j_1, v_2);
              k_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, u_11, k_4);
              k_1 = t;
              t = SSLsetAnnotations(k_1, s_2);
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              {
                ATerm q_5 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(t_11);
                q_5 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, u_11, y_11);
                l_1 = t;
                t = SSLsetAnnotations(l_1, q_5);
                {
                  ATerm j_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,q_6 = NULL,u_6 = NULL;
                      h_6 = t;
                      if(match_cons(t, sym_Op_2))
                        {
                          i_6 = ATgetArgument(t, 0);
                          j_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_6;
                      if(match_string(t, "Nil"))
                        {
                          t = j_6;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = h_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = j_6;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm k_12 = ATgetFirst((ATermList) t);
                              q_6 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = q_6;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm l_12 = ATgetFirst((ATermList) t);
                              u_6 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = u_6;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = h_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = j_12;
                    }
                }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_m_12;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_p_12;
  return(t);
}
static ATerm s_9 (ATerm u_30, ATerm x_30, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,n_14 = NULL,p_14 = NULL;
  t = u_30;
  if(match_cons(t, sym_Op_2))
    {
      p_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm e_7 = NULL,i_7 = NULL,m_6 = NULL;
        t = SSLgetAnnotations(u_30);
        e_7 = t;
        t = n_14;
        t = map_1_0(Cache_0_0, t);
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, p_14, i_7);
        m_6 = t;
        t = SSLsetAnnotations(m_6, e_7);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          p_14 = ATgetArgument(t, 0);
          n_14 = ATgetArgument(t, 1);
          {
            ATerm t_7 = NULL,x_7 = NULL,y_7 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(u_30);
            t_7 = t;
            t = p_14;
            t = Cache_0_0(t);
            x_7 = t;
            t = n_14;
            t = Cache_0_0(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, x_7, y_7);
            n_6 = t;
            t = SSLsetAnnotations(n_6, t_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_14 = ATgetArgument(t, 0);
              {
                ATerm c_8 = NULL,o_6 = NULL;
                t = SSLgetAnnotations(u_30);
                c_8 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, p_14);
                o_6 = t;
                t = SSLsetAnnotations(o_6, c_8);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  p_14 = ATgetArgument(t, 0);
                  {
                    ATerm g_8 = NULL,p_6 = NULL;
                    t = SSLgetAnnotations(u_30);
                    g_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, p_14);
                    p_6 = t;
                    t = SSLsetAnnotations(p_6, g_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      p_14 = ATgetArgument(t, 0);
                      {
                        ATerm m_8 = NULL,r_6 = NULL;
                        t = SSLgetAnnotations(u_30);
                        m_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, p_14);
                        r_6 = t;
                        t = SSLsetAnnotations(r_6, m_8);
                      }
                    }
                  else
                    {
                      ATerm u_8 = NULL,s_6 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          p_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_30);
                      u_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, p_14);
                      s_6 = t;
                      t = SSLsetAnnotations(s_6, u_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  r_12 = t;
  t = term_a_13;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, r_12);
  t = p_10(z_12, r_12, t);
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_13, s_12);
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_30, (ATerm) ATmakeAppl(sym_Defined_2, term_b_13, s_12));
  t = i_10(y_0, u_30, y_12, t);
  t = s_12;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL,z_8 = NULL,a_9 = NULL;
        t = (ATerm) ATempty;
        z_8 = t;
        t = term_p_12;
        a_9 = t;
        t = term_e_13;
        t = e_10(a_9, z_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_13) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            q_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_14;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATempty;
      }
  }
  t_12 = t;
  t = (ATerm) ATempty;
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, (ATerm) ATinsert(CheckATermList(t_12), (ATerm) ATmakeAppl(sym__3, r_12, s_12, x_30)));
  x_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, (ATerm) ATinsert(CheckATermList(t_12), (ATerm) ATmakeAppl(sym__3, r_12, s_12, x_30))));
  t = i_10(b_1, w_12, x_12, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, s_12);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL,c_10 = NULL;
        t = term_m_12;
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_12, t_15);
        t = e_10(c_10, t_15, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_13) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            o_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, o_9);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm m_11 = NULL,w_11 = NULL;
          t = term_m_12;
          w_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_12, t_15);
          t = e_10(w_11, t_15, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm k_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              m_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm l_16 = NULL,e_12 = NULL;
        l_16 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              {
                ATerm p_13 = t;
                int q_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(q_13);
                  }
                else
                  {
                    t = p_13;
                  }
              }
            }
        }
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, e_12);
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm t_13 = ATgetArgument(t, 0);
                  ATerm u_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, l_16, e_12);
              t = s_9(l_16, e_12, t);
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              {
                ATerm n_12 = NULL,o_12 = NULL;
                o_12 = t;
                t = SSL_explode_term(o_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm w_13 = ATgetArgument(t, 1);
                      if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
                        {
                          ATerm x_13 = ATgetFirst((ATermList) w_13);
                          ATerm y_13 = (ATerm) ATgetNext((ATermList) w_13);
                          if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
                            {
                              n_12 = ATgetFirst((ATermList) y_13);
                              {
                                ATerm z_13 = (ATerm) ATgetNext((ATermList) y_13);
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
static ATerm t_9 (ATerm j_36, ATerm i_36, ATerm t)
{
  ATerm o_16 = NULL;
  t = new_0_0(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_16), term_d_11), (ATerm) ATmakeAppl(sym_AssignInit_1, i_36)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, j_36, (ATerm) ATmakeAppl(sym_Id_1, o_16))));
  return(t);
}
static ATerm u_9 (ATerm z_211, ATerm f_36, ATerm h_36, ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,t_16 = NULL;
  t = SSLgetAnnotations(z_211);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_36);
  t_16 = t;
  t = SSLsetAnnotations(t_16, q_16);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, r_16, h_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(c_19, d_19, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm m_1 (ATerm t)
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
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_e_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), term_f_14), term_c_14);
            }
        }
    }
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      k_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, i_18), k_18)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          k_18 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          {
            ATerm b_19 = NULL,q_12 = NULL,u_12 = NULL,v_12 = NULL;
            t = i_18;
            t = foldr_3_0(c_1, g_1, h_1, t);
            b_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_18, b_19);
            u_12 = t;
            t = term_j_14;
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, k_18, b_19));
            t = e_10(v_12, u_12, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm k_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_14) != ATmakeSymbol("k_0", 0, ATtrue)))
                  _fail(t);
                q_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(CheckATermList(i_18), (ATerm) ATmakeAppl(sym_Id_1, q_12))));
          }
        }
      else
        {
          if(match_cons(t, sym_BuildDefault_1))
            {
              k_18 = ATgetArgument(t, 0);
              t = k_18;
            }
          else
            {
              if(match_cons(t, sym_SeqVar_1))
                {
                  k_18 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_IfExp_3, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, k_18), term_r_14), (ATerm) ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, k_18), term_t_14)), (ATerm)ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_18))), (ATerm) ATmakeAppl(sym_FunCall_2, term_x_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, k_18)))));
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_18 = ATgetArgument(t, 0);
                      {
                        ATerm y_14 = t;
                        int z_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSLgetAnnotations(j_18);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm a_15 = ATgetFirst((ATermList) t);
                                if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                                  _fail(t);
                                {
                                  ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
                                  if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
                                    _fail(t);
                                }
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_18)));
                            LocalPopChoice(z_14);
                          }
                        else
                          {
                            t = y_14;
                            {
                              ATerm e_15 = t;
                              int f_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SSLgetAnnotations(j_18);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm g_15 = ATgetFirst((ATermList) t);
                                      if((ATgetSymbol((ATermAppl) g_15) != ATmakeSymbol("unbound", 0, ATtrue)))
                                        _fail(t);
                                      {
                                        ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
                                        if(((ATgetType(h_15) != AT_LIST) || !(ATisEmpty(h_15))))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_18)));
                                  LocalPopChoice(f_15);
                                }
                              else
                                {
                                  t = e_15;
                                  {
                                    ATerm i_15 = t;
                                    int j_15 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSLgetAnnotations(j_18);
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_18)));
                                        LocalPopChoice(j_15);
                                      }
                                    else
                                      {
                                        t = i_15;
                                        t = SSLgetAnnotations(j_18);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm l_15 = ATgetFirst((ATermList) t);
                                            if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("bound", 0, ATtrue)))
                                              _fail(t);
                                            {
                                              ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
                                              if(((ATgetType(m_15) != AT_LIST) || !(ATisEmpty(m_15))))
                                                _fail(t);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Id_1, k_18);
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
                          k_18 = ATgetArgument(t, 0);
                          {
                            ATerm h_19 = NULL,b_16 = NULL,e_16 = NULL,s_16 = NULL,k_15 = NULL;
                            t = SSL_explode_string(k_18);
                            t = escape_chars_1_0(m_1, t);
                            k_15 = t;
                            t = SSL_implode_string(k_15);
                            e_16 = t;
                            t = SSL_explode_string(e_16);
                            s_16 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_16), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                            t = conc_0_0(t);
                            b_16 = t;
                            t = SSL_implode_string(b_16);
                            h_19 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_15), term_q_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, h_19)))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Real_1))
                            {
                              k_18 = ATgetArgument(t, 0);
                              {
                                ATerm y_16 = NULL;
                                t = SSL_real_to_string(k_18);
                                y_16 = t;
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, y_16))));
                              }
                            }
                          else
                            {
                              ATerm e_17 = NULL;
                              if(match_cons(t, sym_Int_1))
                                {
                                  k_18 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSL_int_to_string(k_18);
                              e_17 = t;
                              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_17))));
                            }
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
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Op_2))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_24;
  if(match_string(t, "Cons"))
    {
      ATerm t_22 = NULL;
      t = t_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_24 = ATgetFirst((ATermList) t);
          i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_24 = ATgetFirst((ATermList) t);
          q_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_24;
      {
        ATerm a_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,w_24 = NULL,x_24 = NULL,z_24 = NULL,b_25 = NULL,w_26 = NULL,x_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                m_24 = ATgetArgument(t, 0);
                b_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_24;
            if(match_cons(t, sym_TypeName_2))
              {
                n_24 = ATgetArgument(t, 0);
                z_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                o_24 = ATgetArgument(t, 0);
                p_24 = ATgetArgument(t, 1);
                x_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = o_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_24;
            if(match_cons(t, sym_TypeId_1))
              {
                w_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = x_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = b_25;
            if(match_cons(t, sym_Id_1))
              {
                w_26 = ATgetArgument(t, 0);
                {
                  ATerm c_27 = NULL,u_7 = NULL;
                  t = SSLgetAnnotations(b_25);
                  c_27 = t;
                  t = w_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, w_26);
                  u_7 = t;
                  t = SSLsetAnnotations(u_7, c_27);
                }
              }
            else
              {
                ATerm h_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,p_8 = NULL,l_8 = NULL,k_8 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    w_26 = ATgetArgument(t, 0);
                    x_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_25);
                h_27 = t;
                t = w_26;
                if(match_cons(t, sym_Id_1))
                  {
                    q_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_26);
                p_27 = t;
                t = q_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, q_27);
                k_8 = t;
                t = SSLsetAnnotations(k_8, p_27);
                r_27 = t;
                t = x_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_27 = ATgetFirst((ATermList) t);
                    m_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_26);
                k_27 = t;
                t = m_27;
                t = Cons_2_0(_id, n_1, t);
                n_27 = t;
                t = (ATerm) ATinsert(CheckATermList(n_27), l_27);
                l_8 = t;
                t = SSLsetAnnotations(l_8, k_27);
                o_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, r_27, o_27);
                p_8 = t;
                t = SSLsetAnnotations(p_8, h_27);
              }
            LocalPopChoice(c_16);
          }
        else
          {
            t = a_16;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, j_24));
          }
      }
      t_22 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, h_24), t_22)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = t_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_16;
    }
  return(t);
}
static ATerm p_55 (ATerm k_29, ATerm l_29, ATerm m_29, ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm v_29 = NULL,y_29 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t = k_29;
  {
    ATerm j_16 = t;
    if((PushChoice() == 0))
      {
        ATerm b_30 = NULL,e_30 = NULL,g_30 = NULL,i_30 = NULL,p_30 = NULL;
        b_30 = t;
        if(match_cons(t, sym_Op_2))
          {
            e_30 = ATgetArgument(t, 0);
            g_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_30;
        if(match_string(t, "Nil"))
          {
            t = g_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_30;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = g_30;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_16 = ATgetFirst((ATermList) t);
                i_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_30;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_16 = ATgetFirst((ATermList) t);
                p_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_30;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_30;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_16;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, m_29, term_a_14);
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm q_30 = NULL,r_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL,e_31 = NULL,f_31 = NULL;
      if(match_cons(t, sym__2))
        {
          q_30 = ATgetArgument(t, 0);
          r_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(r_30);
      b_31 = t;
      t = q_30;
      if(match_cons(t, sym_Var_1))
        {
          f_31 = ATgetArgument(t, 0);
          {
            ATerm n_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_32 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_31)), o_29));
                p_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_30, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_31)), o_29)));
                t = u_9(q_30, f_31, p_32, t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = n_16;
                {
                  ATerm r_32 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_31)), o_29));
                  r_32 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_30, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_31)), o_29)));
                  t = t_9(q_30, r_32, t);
                }
              }
          }
        }
      else
        {
          ATerm x_32 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_31)), o_29));
          x_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_30, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_31)), o_29)));
          t = t_9(q_30, x_32, t);
        }
      y_30 = t;
      t = term_b_14;
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_30, term_b_14);
      t = s_10(r_30, e_31, t);
      z_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, z_30);
      return(t);
    }
    t = thread_map_1_0(q_1, t);
  }
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      {
        ATerm w_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_29;
  t = foldr_3_0(s_1, t_1, u_1, t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_29, y_29);
  x_27 = t;
  t = term_j_14;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, l_29, y_29));
  t = e_10(y_27, x_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_27)), o_29)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, v_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10))));
  return(t);
}
static ATerm q_55 (ATerm d_35, ATerm e_35, ATerm w_38, ATerm t)
{
  ATerm e_40 = NULL;
  t = SSL_real_to_string(d_35);
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, e_35)), term_f_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_17, e_35))), (ATerm) ATmakeAppl(sym_FloatConst_1, e_40))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10))));
  return(t);
}
static ATerm r_55 (ATerm f_40, ATerm i_40, ATerm j_40, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_int_to_string(f_40);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, i_40)), term_n_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_17, i_40))), (ATerm) ATmakeAppl(sym_IntConst_1, r_40))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10))));
  return(t);
}
static ATerm s_55 (ATerm s_40, ATerm a_41, ATerm b_41, ATerm g_41, ATerm t)
{
  t = SSLgetAnnotations(s_40);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_41), term_t_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_41), b_41)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, b_41))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_41), term_s_11, b_41)));
  return(t);
}
static ATerm t_55 (ATerm o_41, ATerm p_41, ATerm q_41, ATerm r_41, ATerm t)
{
  t = SSLgetAnnotations(o_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_41), term_t_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, p_41), q_41)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, q_41))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_41), term_s_11, q_41)));
  return(t);
}
static ATerm z_55 (ATerm y_41, ATerm z_41, ATerm a_42, ATerm d_42, ATerm t)
{
  t = SSLgetAnnotations(y_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, z_41), a_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, a_42))))));
  return(t);
}
static ATerm a_56 (ATerm h_42, ATerm j_42, ATerm k_42, ATerm o_42, ATerm t)
{
  t = SSLgetAnnotations(h_42);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_17) != AT_LIST) || !(ATisEmpty(z_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_42), term_s_11, k_42));
  return(t);
}
static ATerm c_56 (ATerm y_42, ATerm z_42, ATerm j_43, ATerm k_43, ATerm l_43, ATerm m_43, ATerm n_43, ATerm o_43, ATerm q_43, ATerm t)
{
  ATerm j_44 = NULL,l_44 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  t = z_42;
  {
    ATerm a_18 = t;
    if((PushChoice() == 0))
      {
        ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
        p_44 = t;
        if(match_cons(t, sym_Fun_2))
          {
            q_44 = ATgetArgument(t, 0);
            r_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_44;
        if(match_string(t, "Nil"))
          {
            t = r_44;
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
              _fail(t);
            t = p_44;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = r_44;
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 2)))
              _fail(t);
            t = p_44;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, l_43, term_a_14);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm s_44 = NULL,t_44 = NULL,w_44 = NULL,b_45 = NULL,c_45 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm b_18 = ATgetArgument(t, 0);
          if(match_cons(b_18, sym_Var_1))
            {
              s_44 = ATgetArgument(b_18, 0);
            }
          else
            _fail(t);
          t_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_44);
      w_44 = t;
      t = term_b_14;
      c_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_44, term_b_14);
      t = s_10(t_44, c_45, t);
      b_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, s_44), term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, w_44)), (ATerm) ATmakeAppl(sym_Id_1, y_42))))), b_45);
      return(t);
    }
    t = thread_map_1_0(v_1, t);
  }
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      {
        ATerm c_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
  c_28 = t;
  t = term_j_14;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, j_43, k_43));
  t = e_10(d_28, c_28, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_18) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_44, (ATerm) ATinsert(ATempty, m_43));
  t = conc_0_0(t);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_28)), (ATerm) ATmakeAppl(sym_Id_1, y_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, l_44), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, y_42), n_43, o_43))));
  return(t);
}
static ATerm d_56 (ATerm f_45, ATerm g_45, ATerm i_45, ATerm j_45, ATerm k_45, ATerm l_45, ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_real_to_string(g_45);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, t_45)), (ATerm) ATmakeAppl(sym_Id_1, f_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_45), j_45, k_45))));
  return(t);
}
static ATerm e_56 (ATerm u_45, ATerm x_45, ATerm z_45, ATerm b_46, ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm l_46 = NULL;
  t = SSL_int_to_string(x_45);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, l_46)), (ATerm) ATmakeAppl(sym_Id_1, u_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, u_45), b_46, c_46))));
  return(t);
}
static ATerm f_56 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t)
{
  t = n_46;
  {
    ATerm l_18 = t;
    if((PushChoice() == 0))
      {
        ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,x_8 = NULL;
        t_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            s_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_46);
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
        x_8 = t;
        t = SSLsetAnnotations(x_8, r_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_46)));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm d_33 = NULL,c_35 = NULL;
  if(match_cons(t, sym__2))
    {
      d_33 = ATgetArgument(t, 0);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(d_33, c_35, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm k_49 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym_SVar_1))
        {
          k_49 = ATgetArgument(m_18, 0);
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
  t = (ATerm) ATmakeAppl(sym_Id_1, k_49);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = topdown_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(c_2, t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_50 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      if(match_cons(v_18, sym_SVar_1))
        {
          f_50 = ATgetArgument(v_18, 0);
        }
      else
        _fail(t);
      {
        ATerm w_18 = ATgetArgument(t, 1);
        if(((ATgetType(w_18) != AT_LIST) || !(ATisEmpty(w_18))))
          _fail(t);
      }
      {
        ATerm x_18 = ATgetArgument(t, 2);
        if(((ATgetType(x_18) != AT_LIST) || !(ATisEmpty(x_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, f_50);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = topdown_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = a_19;
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
static ATerm h_2 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_51), term_d_11), term_i_19);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,d_52 = NULL;
  a_52 = t;
  if(match_cons(t, sym__2))
    {
      b_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_52;
  if(match_cons(t, sym_Var_1))
    {
      z_51 = ATgetArgument(t, 0);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_52;
            t = u_9(b_52, z_51, d_52, t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = a_52;
            t = t_9(b_52, d_52, t);
          }
      }
    }
  else
    {
      t = a_52;
      t = t_9(b_52, d_52, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_28 = ATgetFirst((ATermList) t);
      k_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_28;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(k_28), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(k_28), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_28), term_e_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_28), term_f_14), term_c_14);
            }
        }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_28 = ATgetFirst((ATermList) t);
      y_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_28;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(y_28), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(y_28), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_28), term_e_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_28), term_f_14), term_c_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,c_47 = NULL,d_47 = NULL,g_47 = NULL,h_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,h_48 = NULL;
  d_48 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_48 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
      {
        ATerm n_48 = NULL,q_48 = NULL;
        t = h_48;
        t = map_1_0(SDefToDeclaration_0_0, t);
        n_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_48, h_48);
        t = conc_0_0(t);
        q_48 = t;
        t = (ATerm) ATmakeAppl(sym_Compound_2, q_48, (ATerm) ATinsert(ATempty, b_48));
      }
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          h_48 = ATgetArgument(t, 0);
          {
            ATerm u_48 = NULL;
            t = d_48;
            t = new_0_0(t);
            u_48 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_48), term_d_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_Id_1, u_48)))), term_m_19), h_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, u_48), term_s_11, term_w_10))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              h_48 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, h_48);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  h_48 = ATgetArgument(t, 0);
                  b_48 = ATgetArgument(t, 1);
                  w_47 = ATgetArgument(t, 2);
                  {
                    ATerm g_49 = NULL,h_49 = NULL,j_49 = NULL;
                    t = h_48;
                    if(match_cons(t, sym_SVar_1))
                      {
                        c_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_48;
                    t = map_1_0(x_1, t);
                    g_49 = t;
                    t = w_47;
                    t = map_1_0(y_1, t);
                    h_49 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_10)), h_49), g_49);
                    t = concat_0_0(t);
                    j_49 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, c_48), j_49)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      h_48 = ATgetArgument(t, 0);
                      b_48 = ATgetArgument(t, 1);
                      w_47 = ATgetArgument(t, 2);
                      {
                        ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
                        t = b_48;
                        t = map_1_0(d_2, t);
                        b_50 = t;
                        t = w_47;
                        t = map_1_0(e_2, t);
                        c_50 = t;
                        t = (ATerm) ATmakeAppl(sym__2, b_50, c_50);
                        t = conc_0_0(t);
                        d_50 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_48), d_50)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          h_48 = ATgetArgument(t, 0);
                          {
                            ATerm q_50 = NULL;
                            t = d_48;
                            t = new_0_0(t);
                            q_50 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_50), term_d_11), term_n_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_r_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10)))), term_v_19), h_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_Id_1, q_50))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              h_48 = ATgetArgument(t, 0);
                              b_48 = ATgetArgument(t, 1);
                              {
                                ATerm v_50 = NULL;
                                t = d_48;
                                t = new_0_0(t);
                                v_50 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_50), term_d_11), term_n_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_z_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_Id_1, v_50))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  h_48 = ATgetArgument(t, 0);
                                  b_48 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, h_48, b_48);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      h_48 = ATgetArgument(t, 0);
                                      b_48 = ATgetArgument(t, 1);
                                      w_47 = ATgetArgument(t, 2);
                                      {
                                        ATerm d_51 = NULL,g_51 = NULL;
                                        t = d_48;
                                        t = new_0_0(t);
                                        d_51 = t;
                                        t = new_0_0(t);
                                        g_51 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, g_51), term_d_11), term_e_20)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_51), term_d_11), term_n_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_r_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_48), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_51))))), term_m_19), h_48)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, w_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, (ATerm) ATmakeAppl(sym_Id_1, d_51))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          h_48 = ATgetArgument(t, 0);
                                          b_48 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_48, term_h_20, b_48);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              h_48 = ATgetArgument(t, 0);
                                              b_48 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_48, b_48);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  h_48 = ATgetArgument(t, 0);
                                                  b_48 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_48), h_48));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      h_48 = ATgetArgument(t, 0);
                                                      b_48 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm t_51 = NULL;
                                                        t = h_48;
                                                        t = map_1_0(h_2, t);
                                                        t_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, t_51)), (ATerm) ATinsert(ATempty, b_48));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_i_20;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  h_48 = ATgetArgument(t, 0);
                                                                  b_48 = ATgetArgument(t, 1);
                                                                  t = h_48;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      c_48 = ATgetArgument(t, 0);
                                                                      y_46 = ATgetArgument(t, 1);
                                                                      t = y_46;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          u_46 = ATgetFirst((ATermList) t);
                                                                          v_46 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = v_46;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_46 = ATgetFirst((ATermList) t);
                                                                              x_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = x_46;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = c_48;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm j_20 = t;
                                                                                      int k_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm y_51 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_46, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, b_48)))))), (ATerm) ATmakeAppl(sym__2, u_46, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, b_48)))));
                                                                                          t = map_1_0(j_2, t);
                                                                                          y_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, b_48)), term_u_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATinsert(ATempty, b_48)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, y_51), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10))));
                                                                                          LocalPopChoice(k_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_20;
                                                                                          t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_48;
                                                                                  t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_48;
                                                                              t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = c_48;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm x_20 = t;
                                                                                  int y_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, b_48)), term_u_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATinsert(ATempty, b_48)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10))));
                                                                                      LocalPopChoice(y_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_20;
                                                                                      t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_48;
                                                                              t = p_55(h_48, c_48, y_46, b_48, d_48, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          c_48 = ATgetArgument(t, 0);
                                                                          t = q_55(c_48, b_48, d_48, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              c_48 = ATgetArgument(t, 0);
                                                                              t = r_55(c_48, b_48, d_48, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  c_48 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm p_52 = NULL,p_28 = NULL,q_28 = NULL,s_28 = NULL,f_28 = NULL;
                                                                                    t = SSL_explode_string(c_48);
                                                                                    t = escape_chars_1_0(k_2, t);
                                                                                    f_28 = t;
                                                                                    t = SSL_implode_string(f_28);
                                                                                    q_28 = t;
                                                                                    t = SSL_explode_string(q_28);
                                                                                    s_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                                                                                    t = conc_0_0(t);
                                                                                    p_28 = t;
                                                                                    t = SSL_implode_string(p_28);
                                                                                    p_52 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_e_21, b_48))), (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_15), term_q_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, p_52))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, term_w_10))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SeqVar_1))
                                                                                    {
                                                                                      c_48 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_s_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_48)), (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, (ATerm) ATmakeAppl(sym_Id_1, c_48)))))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_t_14), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_s_11, term_i_16)))))));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          c_48 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm h_21 = t;
                                                                                            int i_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = s_55(h_48, c_48, b_48, d_48, t);
                                                                                                LocalPopChoice(i_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_21;
                                                                                                {
                                                                                                  ATerm j_21 = t;
                                                                                                  int k_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = t_55(h_48, c_48, b_48, d_48, t);
                                                                                                      LocalPopChoice(k_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_21;
                                                                                                      {
                                                                                                        ATerm l_21 = t;
                                                                                                        int m_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = z_55(h_48, c_48, b_48, d_48, t);
                                                                                                            LocalPopChoice(m_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_21;
                                                                                                            t = a_56(h_48, c_48, b_48, d_48, t);
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
                                                                                              c_48 = ATgetArgument(t, 0);
                                                                                              y_46 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, y_46, b_48)), (ATerm) ATmakeAppl(sym_Match_2, c_48, b_48)));
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              ATerm n_21 = t;
                                                                                              int o_21 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_BuildDefault_1))
                                                                                                    {
                                                                                                      ATerm p_21 = ATgetArgument(t, 0);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(o_21);
                                                                                                  t = term_i_20;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_21;
                                                                                                  if(!(match_cons(t, sym_Wld_0)))
                                                                                                    _fail(t);
                                                                                                  t = term_i_20;
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
                                                                      h_48 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, h_48, term_w_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          h_48 = ATgetArgument(t, 0);
                                                                          b_48 = ATgetArgument(t, 1);
                                                                          w_47 = ATgetArgument(t, 2);
                                                                          t = h_48;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              c_48 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = b_48;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              a_48 = ATgetFirst((ATermList) t);
                                                                              v_47 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = a_48;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  m_47 = ATgetArgument(t, 0);
                                                                                  o_47 = ATgetArgument(t, 1);
                                                                                  p_47 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = m_47;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  n_47 = ATgetArgument(t, 0);
                                                                                  l_47 = ATgetArgument(t, 1);
                                                                                  t = o_47;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      z_46 = ATgetFirst((ATermList) t);
                                                                                      d_47 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = d_47;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          g_47 = ATgetFirst((ATermList) t);
                                                                                          k_47 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = k_47;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = g_47;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  h_47 = ATgetArgument(t, 0);
                                                                                                  t = z_46;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      c_47 = ATgetArgument(t, 0);
                                                                                                      t = l_47;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = n_47;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm q_21 = t;
                                                                                                              int r_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_48))), term_u_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_48))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_s_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, (ATerm) ATmakeAppl(sym_Id_1, c_48)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_47), term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_q_20, (ATerm) ATmakeAppl(sym_Id_1, c_48)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, c_48), v_47, w_47))));
                                                                                                                  LocalPopChoice(r_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_21;
                                                                                                                  t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_47;
                                                                                                          t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_47;
                                                                                                      t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_47;
                                                                                                  t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_47;
                                                                                              t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_47;
                                                                                          t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = l_47;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = n_47;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm s_21 = t;
                                                                                                  int t_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_48))), term_u_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_48)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, p_47), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, c_48), v_47, w_47))));
                                                                                                      LocalPopChoice(t_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = s_21;
                                                                                                      t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_47;
                                                                                              t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_47;
                                                                                          t = c_56(c_48, m_47, n_47, l_47, o_47, p_47, v_47, w_47, d_48, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      n_47 = ATgetArgument(t, 0);
                                                                                      t = d_56(c_48, n_47, p_47, v_47, w_47, d_48, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          n_47 = ATgetArgument(t, 0);
                                                                                          t = e_56(c_48, n_47, p_47, v_47, w_47, d_48, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm k_54 = NULL,d_29 = NULL,e_29 = NULL,g_29 = NULL,t_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              n_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(n_47);
                                                                                          t = escape_chars_1_0(l_2, t);
                                                                                          t_28 = t;
                                                                                          t = SSL_implode_string(t_28);
                                                                                          e_29 = t;
                                                                                          t = SSL_explode_string(e_29);
                                                                                          g_29 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_29), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                                                                                          t = conc_0_0(t);
                                                                                          d_29 = t;
                                                                                          t = SSL_implode_string(d_29);
                                                                                          k_54 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, k_54))), (ATerm) ATmakeAppl(sym_Id_1, c_48))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, c_48), v_47, w_47))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = w_47;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              h_48 = ATgetArgument(t, 0);
                                                                              b_48 = ATgetArgument(t, 1);
                                                                              w_47 = ATgetArgument(t, 2);
                                                                              x_47 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, h_48), (ATerm) ATmakeAppl(sym_Case_3, b_48, w_47, x_47));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  h_48 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, h_48));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      h_48 = ATgetArgument(t, 0);
                                                                                      b_48 = ATgetArgument(t, 1);
                                                                                      t = h_48;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          c_48 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = b_48;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          a_48 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm w_21 = t;
                                                                                            int x_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_t_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, c_48), (ATerm) ATmakeAppl(sym_Id_1, a_48))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_48)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_s_11, (ATerm) ATmakeAppl(sym_Id_1, a_48))));
                                                                                                LocalPopChoice(x_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = w_21;
                                                                                                t = f_56(c_48, b_48, d_48, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_56(c_48, b_48, d_48, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          h_48 = ATgetArgument(t, 0);
                                                                                          t = h_48;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              c_48 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_s_11, term_w_10));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm o_55 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              h_48 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_48;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          o_55 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_w_10, term_s_11, o_55));
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
ATerm escape_chars_1_0 (ATerm m_155 (ATerm), ATerm t)
{
  static ATerm x_57 (ATerm t);
  static ATerm x_57 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,c_9 = NULL;
        t = m_155(t);
        z_56 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_56 = ATgetFirst((ATermList) t);
            x_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_56);
        u_56 = t;
        t = x_56;
        t = Cons_2_0(_id, x_57, t);
        y_56 = t;
        t = (ATerm) ATinsert(CheckATermList(y_56), w_56);
        c_9 = t;
        t = SSLsetAnnotations(c_9, u_56);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          ATerm r_57 = NULL,s_57 = NULL,v_57 = NULL;
          v_57 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_57 = ATgetFirst((ATermList) t);
              s_57 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm n_29 = NULL,z_29 = NULL,d_9 = NULL;
                t = SSLgetAnnotations(v_57);
                n_29 = t;
                t = s_57;
                t = x_57(t);
                z_29 = t;
                t = (ATerm) ATinsert(CheckATermList(z_29), r_57);
                d_9 = t;
                t = SSLsetAnnotations(d_9, n_29);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_57;
            }
        }
      }
    return(t);
  }
  t = x_57(t);
  return(t);
}
static ATerm a_10 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t)
{
  ATerm z_57 = NULL,b_58 = NULL,e_58 = NULL,f_58 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, x_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      e_58 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_1, z_57);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      f_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_58), e_58), b_58);
  return(t);
}
ATerm thread_map_1_0 (ATerm g_152 (ATerm), ATerm t)
{
  static ATerm x_58 (ATerm t);
  static ATerm x_58 (ATerm t)
  {
    ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,s_58 = NULL;
    k_58 = t;
    if(match_cons(t, sym__2))
      {
        l_58 = ATgetArgument(t, 0);
        s_58 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = l_58;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_58 = ATgetFirst((ATermList) t);
        j_58 = (ATerm) ATgetNext((ATermList) t);
        t = k_58;
        t = a_10(g_152, x_58, i_58, j_58, s_58, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_58);
      }
    return(t);
  }
  t = x_58(t);
  return(t);
}
static ATerm g_63 (ATerm f_60, ATerm g_60, ATerm h_60, ATerm i_60, ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm q_60 = NULL,s_60 = NULL,t_60 = NULL,l_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = f_60;
  {
    ATerm a_22 = t;
    if((PushChoice() == 0))
      {
        ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,z_60 = NULL,b_61 = NULL;
        v_60 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_60 = ATgetArgument(t, 0);
            x_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_60;
        if(match_string(t, "Nil"))
          {
            t = x_60;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_60;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = x_60;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_22 = ATgetFirst((ATermList) t);
                z_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_60;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_22 = ATgetFirst((ATermList) t);
                b_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_61;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_60;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, h_60, term_a_14);
  t = thread_map_1_0(m_2, t);
  if(match_cons(t, sym__2))
    {
      q_60 = ATgetArgument(t, 0);
      {
        ATerm d_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_60;
  t = foldr_3_0(n_2, o_2, p_2, t);
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_60, t_60);
  n_30 = t;
  t = term_j_14;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, g_60, t_60));
  t = e_10(o_30, n_30, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_22) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_60, (ATerm) ATinsert(ATempty, i_60));
  t = conc_0_0(t);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, l_30)), term_w_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, s_60), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_60)));
  return(t);
}
static ATerm h_63 (ATerm j_61, ATerm k_61, ATerm l_61, ATerm m_61, ATerm t)
{
  ATerm q_61 = NULL;
  t = SSL_real_to_string(j_61);
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, q_61)), term_w_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_61)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_61)));
  return(t);
}
static ATerm i_63 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm u_61, ATerm t)
{
  ATerm y_61 = NULL;
  t = SSL_int_to_string(r_61);
  y_61 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_61)), term_w_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_61)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, t_61)));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym_Var_1))
        {
          c_61 = ATgetArgument(f_22, 0);
        }
      else
        _fail(t);
      d_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(d_61);
  e_61 = t;
  t = term_b_14;
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_61, term_b_14);
  t = s_10(d_61, g_61, t);
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_61), term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, e_61)), term_w_10)))), f_61);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  if(match_cons(t, sym__2))
    {
      h_61 = ATgetArgument(t, 0);
      i_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(h_61, i_61, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_31 = ATgetFirst((ATermList) t);
      d_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_31;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(d_31), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(d_31), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(d_31), term_e_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(d_31), term_f_14), term_c_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL;
  g_62 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      j_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
      n_62 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_62;
  if(match_cons(t, sym_Match_1))
    {
      k_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_62;
  if(match_cons(t, sym_Op_2))
    {
      l_62 = ATgetArgument(t, 0);
      f_62 = ATgetArgument(t, 1);
      t = f_62;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_61 = ATgetFirst((ATermList) t);
          b_62 = (ATerm) ATgetNext((ATermList) t);
          t = b_62;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_62 = ATgetFirst((ATermList) t);
              e_62 = (ATerm) ATgetNext((ATermList) t);
              t = e_62;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = c_62;
                  if(match_cons(t, sym_Var_1))
                    {
                      d_62 = ATgetArgument(t, 0);
                      t = z_61;
                      if(match_cons(t, sym_Var_1))
                        {
                          a_62 = ATgetArgument(t, 0);
                          t = l_62;
                          if(match_string(t, "Cons"))
                            {
                              ATerm g_22 = t;
                              int h_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_w_10)), term_u_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATinsert(ATempty, term_w_10)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_62), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_62), term_s_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_20, (ATerm) ATinsert(ATempty, term_i_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_62), term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_20, (ATerm) ATinsert(ATempty, term_i_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_62)));
                                  LocalPopChoice(h_22);
                                }
                              else
                                {
                                  t = g_22;
                                  t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                                }
                            }
                          else
                            {
                              t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                            }
                        }
                      else
                        {
                          t = l_62;
                          t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                        }
                    }
                  else
                    {
                      t = l_62;
                      t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                    }
                }
              else
                {
                  t = l_62;
                  t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                }
            }
          else
            {
              t = l_62;
              t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = l_62;
              if(match_string(t, "Nil"))
                {
                  ATerm j_22 = t;
                  int k_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_w_10)), term_u_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_w_20, (ATerm) ATinsert(ATempty, term_w_10))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_62)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_62)));
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = j_22;
                      t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                    }
                }
              else
                {
                  t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
                }
            }
          else
            {
              t = l_62;
              t = g_63(k_62, l_62, f_62, m_62, n_62, g_62, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          l_62 = ATgetArgument(t, 0);
          t = h_63(l_62, m_62, n_62, g_62, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              l_62 = ATgetArgument(t, 0);
              t = i_63(l_62, m_62, n_62, g_62, t);
            }
          else
            {
              ATerm x_62 = NULL,o_31 = NULL,p_31 = NULL,r_31 = NULL,t_30 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  l_62 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(l_62);
              t = escape_chars_1_0(q_2, t);
              t_30 = t;
              t = SSL_implode_string(t_30);
              p_31 = t;
              t = SSL_explode_string(p_31);
              r_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_31), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
              t = conc_0_0(t);
              o_31 = t;
              t = SSL_implode_string(o_31);
              x_62 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, x_62))), term_w_10)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_62)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_62)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_138 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t);
  static ATerm r_2 (ATerm t)
  {
    t = topdown_1_0(h_138, t);
    return(t);
  }
  t = h_138(t);
  t = SRTS_all(r_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  v_63 = t;
  if(match_cons(t, sym_SeqVar_1))
    {
      u_63 = ATgetArgument(t, 0);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_31 = NULL,w_31 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(v_63);
            u_31 = t;
            t = u_63;
            if(match_cons(t, sym_Var_1))
              {
                w_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SeqVar_1, w_31);
            g_9 = t;
            t = SSLsetAnnotations(g_9, u_31);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = v_63;
          }
      }
    }
  else
    {
      t = v_63;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = repeat_2_0(c_3, _id, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm translate_body_0_0 (ATerm t)
{
  t = topdown_1_0(t_2, t);
  t = topdown_1_0(u_2, t);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  u_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
      x_64 = ATgetArgument(t, 2);
      y_64 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
        t = v_64;
        t = is_local_function_0_0(t);
        t = w_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        d_65 = t;
        t = x_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        e_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_65, e_65);
        t = conc_0_0(t);
        f_65 = t;
        t = y_64;
        t = translate_body_0_0(t);
        g_65 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_v_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, f_65, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), term_m_19), g_65)));
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,q_32 = NULL;
          t = v_64;
          {
            ATerm w_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_22;
              }
          }
          t = w_64;
          t = map_1_0(TranslateVarDec_0_0, t);
          m_32 = t;
          t = x_64;
          t = map_1_0(TranslateVarDec_0_0, t);
          n_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_32, n_32);
          t = conc_0_0(t);
          o_32 = t;
          t = y_64;
          t = translate_body_0_0(t);
          q_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_w_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, o_32, (ATerm) ATinsert(ATempty, term_i_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), term_m_19), q_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_152 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_65;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_66 = ATgetFirst((ATermList) t);
          b_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_33 = NULL,f_33 = NULL,g_33 = NULL,i_9 = NULL;
            t = SSLgetAnnotations(z_65);
            b_33 = t;
            t = a_66;
            t = t_152(t);
            f_33 = t;
            t = b_66;
            t = filter_1_0(t_152, t);
            g_33 = t;
            t = (ATerm) ATinsert(CheckATermList(g_33), f_33);
            i_9 = t;
            t = SSLsetAnnotations(i_9, b_33);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = b_66;
            t = filter_1_0(t_152, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm h_66 = NULL;
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          h_66 = ATgetArgument(t, 0);
          {
            ATerm b_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_23);
      {
        ATerm j_66 = NULL;
        t = h_66;
        t = map_1_0(TranslateType_0_0, t);
        j_66 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_9, (ATerm) ATmakeAppl(sym_ParamList_1, j_66));
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
      t = term_w_9;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_66;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            q_66 = ATgetArgument(t, 0);
            {
              ATerm f_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_23);
        {
          ATerm t_66 = NULL;
          t = q_66;
          t = map_1_0(TranslateType_0_0, t);
          t_66 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_66), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, t_66)))));
        }
      }
    else
      {
        t = d_23;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm g_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_w_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_66), term_d_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm h_23 = t;
  if((PushChoice() == 0))
    {
      ATerm v_66 = NULL,w_66 = NULL;
      if(match_cons(t, sym__2))
        {
          v_66 = ATgetArgument(t, 0);
          w_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_66, w_66);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_66, w_66);
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            t = SSL_gtr(v_66, w_66);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, v_66, w_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = map_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm d_67 = NULL;
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, d_67);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_67, term_l_23);
  t = leq_0_0(t);
  t = d_67;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,k_9 = NULL;
  x_66 = t;
  t = SSL_explode_string(x_66);
  c_67 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_66 = ATgetFirst((ATermList) t);
      a_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_67);
  y_66 = t;
  t = z_66;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_23, z_66);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, z_66, term_p_23);
        t = leq_0_0(t);
        t = z_66;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, z_66);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, z_66, term_r_23);
        t = leq_0_0(t);
        t = z_66;
      }
  }
  t = a_67;
  t = Cons_2_0(k_3, l_3, t);
  b_67 = t;
  t = (ATerm) ATinsert(CheckATermList(b_67), z_66);
  k_9 = t;
  t = SSLsetAnnotations(k_9, y_66);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  q_67 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      r_67 = ATgetArgument(t, 0);
      s_67 = ATgetArgument(t, 1);
      t_67 = ATgetArgument(t, 2);
      {
        ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
        t = s_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        y_67 = t;
        t = t_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        z_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_67, z_67);
        t = conc_0_0(t);
        a_68 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, a_68, (ATerm) ATinsert(ATempty, term_i_11)))))));
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
              r_67 = ATgetArgument(t, 0);
              s_67 = ATgetArgument(t, 1);
              t_67 = ATgetArgument(t, 2);
              {
                ATerm u_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(t_23);
          {
            ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
            t = s_67;
            t = map_1_0(TranslateVarDec_0_0, t);
            e_68 = t;
            t = t_67;
            t = map_1_0(TranslateVarDec_0_0, t);
            f_68 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_68, f_68);
            t = conc_0_0(t);
            g_68 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, g_68, (ATerm) ATinsert(ATempty, term_i_11)))))));
          }
        }
      else
        {
          t = s_23;
          if(match_cons(t, sym_SDefT_4))
            {
              r_67 = ATgetArgument(t, 0);
              s_67 = ATgetArgument(t, 1);
              t_67 = ATgetArgument(t, 2);
              {
                ATerm v_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm w_23 = t;
            int x_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
                t = r_67;
                t = is_local_function_0_0(t);
                t = s_67;
                t = map_1_0(TranslateVarDec_0_0, t);
                k_68 = t;
                t = t_67;
                t = map_1_0(TranslateVarDec_0_0, t);
                l_68 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_68, l_68);
                t = conc_0_0(t);
                m_68 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, m_68, (ATerm) ATinsert(ATempty, term_i_11)))))));
                LocalPopChoice(x_23);
              }
            else
              {
                t = w_23;
                {
                  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
                  t = r_67;
                  {
                    ATerm y_23 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = y_23;
                      }
                  }
                  t = s_67;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  s_33 = t;
                  t = t_67;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  t_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_33, t_33);
                  t = conc_0_0(t);
                  u_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, r_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, u_33, (ATerm) ATinsert(ATempty, term_i_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  if(match_cons(t, sym__2))
    {
      m_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(m_69, n_69, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm f_10 (ATerm o_40, ATerm m_40, ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,e_69 = NULL,g_69 = NULL,h_69 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,k_69 = NULL;
  t = m_40;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            k_69 = ATgetArgument(t, 0);
            {
              ATerm b_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_24);
        t = k_69;
        t = foldr_3_0(n_3, o_3, p_3, t);
      }
    else
      {
        t = z_23;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm c_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_a_14;
      }
  }
  c_69 = t;
  t = SSL_int_to_string(c_69);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, c_69);
  e_34 = t;
  t = term_j_14;
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, o_40, c_69));
  t = e_10(f_34, e_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_24) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(o_40);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_69), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
  t = conc_0_0(t);
  h_69 = t;
  t = SSL_implode_string(h_69);
  e_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_34), term_s_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), (ATerm) ATmakeAppl(sym_IntConst_1, b_69)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, e_69)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_69 = ATgetFirst((ATermList) t);
      s_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_69;
  if(match_int(t, 92))
    {
      ATerm u_69 = NULL;
      t = s_69;
      t = t_0(t);
      u_69 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_69), term_l_24), term_u_24), term_l_24);
    }
  else
    {
      if(match_int(t, 34))
        {
          ATerm w_69 = NULL;
          t = s_69;
          t = t_0(t);
          w_69 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_69), term_l_24), term_v_24), term_l_24);
        }
      else
        {
          if(match_int(t, 95))
            {
              ATerm y_69 = NULL;
              t = s_69;
              t = t_0(t);
              y_69 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(y_69), term_l_24), term_l_24);
            }
          else
            {
              if(match_int(t, 45))
                {
                  ATerm a_70 = NULL;
                  t = s_69;
                  t = t_0(t);
                  a_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_70), term_l_24);
                }
              else
                {
                  ATerm c_70 = NULL;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
                    _fail(t);
                  t = s_69;
                  t = t_0(t);
                  c_70 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(c_70), term_l_24), term_y_24), term_l_24);
                }
            }
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm j_155 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  g_70 = t;
  t = SSL_explode_string(g_70);
  {
    static ATerm s_70 (ATerm t);
    static ATerm s_70 (ATerm t)
    {
      ATerm a_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_155(s_70, t);
          LocalPopChoice(c_25);
        }
      else
        {
          t = a_25;
          {
            ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
            r_70 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_70 = ATgetFirst((ATermList) t);
                q_70 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm k_34 = NULL,n_34 = NULL,r_9 = NULL;
                  t = SSLgetAnnotations(r_70);
                  k_34 = t;
                  t = q_70;
                  t = s_70(t);
                  n_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_34), p_70);
                  r_9 = t;
                  t = SSLsetAnnotations(r_9, k_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_70;
              }
          }
        }
      return(t);
    }
    t = s_70(t);
  }
  f_70 = t;
  t = SSL_implode_string(f_70);
  return(t);
}
ATerm foldr_3_0 (ATerm r_151 (ATerm), ATerm s_151 (ATerm), ATerm t_151 (ATerm), ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_70;
      t = r_151(t);
    }
  else
    {
      ATerm a_71 = NULL,b_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_70 = ATgetFirst((ATermList) t);
          x_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_70;
      t = t_151(t);
      a_71 = t;
      t = x_70;
      t = foldr_3_0(r_151, s_151, t_151, t);
      b_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_71, b_71);
      t = s_151(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL;
  if(match_cons(t, sym__2))
    {
      o_71 = ATgetArgument(t, 0);
      p_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(o_71, p_71, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_j_14;
  return(t);
}
static ATerm g_10 (ATerm b_40, ATerm a_40, ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,m_71 = NULL;
  t = a_40;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            m_71 = ATgetArgument(t, 0);
            {
              ATerm f_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_25);
        t = m_71;
        t = foldr_3_0(q_3, r_3, s_3, t);
      }
    else
      {
        t = d_25;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm g_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_a_14;
      }
  }
  d_71 = t;
  t = b_40;
  t = escape_1_0(Cify_1_0, t);
  f_71 = t;
  t = SSL_int_to_string(d_71);
  g_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_71), term_i_25), f_71), term_h_25);
  j_71 = t;
  t = SSL_concat_strings(j_71);
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, d_71);
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_25, e_71);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_40, d_71), (ATerm) ATmakeAppl(sym_Defined_2, term_j_25, e_71));
  t = i_10(u_3, h_71, i_71, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, e_71), term_d_11)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  t_71 = t;
  t = term_n_25;
  u_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_25, t_71);
  t = p_10(u_71, t_71, t);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, s_71);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_o_25;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_71 = NULL,r_71 = NULL;
        t = term_r_25;
        q_71 = t;
        t = term_o_25;
        r_71 = t;
        t = term_s_25;
        t = x_10(q_71, r_71, t);
        t = map_1_0(v_3, t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      k_72 = ATgetArgument(t, 0);
      l_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(k_72, l_72, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      m_72 = ATgetArgument(t, 0);
      n_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(m_72, n_72, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm t_25 = ATgetArgument(t, 0);
      ATerm u_25 = ATgetArgument(t, 1);
      ATerm v_25 = ATgetArgument(t, 2);
      ATerm w_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
      {
        ATerm y_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_v_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_72), term_d_11)));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__3))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
      u_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_9(s_72, t_72, u_72, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  f_73 = t;
  if(match_cons(t, sym_Conc_2))
    {
      d_73 = ATgetArgument(t, 0);
      e_73 = ATgetArgument(t, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, d_73, e_73);
            t = conc_0_0(t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = f_73;
          }
      }
    }
  else
    {
      t = f_73;
    }
  return(t);
}
static ATerm h_10 (ATerm v_40, ATerm y_40, ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  g_72 = t;
  t = GenerateIncludes_0_0(t);
  y_71 = t;
  t = v_40;
  t = filter_1_0(w_3, t);
  z_71 = t;
  t = v_40;
  t = filter_1_0(x_3, t);
  t = concat_0_0(t);
  a_72 = t;
  t = y_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  b_72 = t;
  t = y_40;
  t = filter_1_0(y_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  c_72 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_72 = NULL,s_34 = NULL,t_34 = NULL;
        t = (ATerm) ATempty;
        s_34 = t;
        t = term_p_12;
        t_34 = t;
        t = term_e_13;
        t = e_10(t_34, s_34, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            o_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_72;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
  }
  j_72 = t;
  t = map_1_0(z_3, t);
  h_72 = t;
  t = j_72;
  t = map_1_0(a_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, b_4, t);
  i_72 = t;
  t = g_72;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_72 = NULL,x_72 = NULL;
        t = term_r_25;
        w_72 = t;
        t = term_g_26;
        x_72 = t;
        t = term_h_26;
        t = x_10(w_72, x_72, t);
        t = g_72;
        LocalPopChoice(f_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_j_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_l_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_26)))), term_i_20));
      }
  }
  d_72 = t;
  t = g_72;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_72 = NULL,z_72 = NULL;
        t = term_r_25;
        y_72 = t;
        t = term_g_26;
        z_72 = t;
        t = term_h_26;
        t = x_10(y_72, z_72, t);
        t = g_72;
        LocalPopChoice(o_26);
        t = (ATerm) ATinsert(ATempty, term_q_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATinsert(ATempty, term_s_26);
      }
  }
  e_72 = t;
  t = g_72;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_73 = NULL,b_73 = NULL;
        t = term_r_25;
        a_73 = t;
        t = term_g_26;
        b_73 = t;
        t = term_h_26;
        t = x_10(a_73, b_73, t);
        t = g_72;
        LocalPopChoice(u_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = t_26;
        {
          ATerm c_73 = NULL;
          t = MainDef_0_0(t);
          c_73 = t;
          t = (ATerm) ATinsert(ATempty, c_73);
        }
      }
  }
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, y_71, d_72), z_71), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_v_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, a_72)))), h_72), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_v_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_m_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, i_72)))), e_72), b_72), f_72), c_72));
  t = bottomup_1_0(c_4, t);
  return(t);
}
static ATerm i_10 (ATerm j_172 (ATerm), ATerm h_89, ATerm f_89, ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  n_73 = t;
  t = j_172(t);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_73, h_89, f_89);
  t = y_10(k_73, h_89, f_89, t);
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_73 = NULL;
        t = term_f_27;
        s_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_73, term_f_27);
        t = x_10(k_73, s_73, t);
        {
          ATerm g_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_27;
            }
        }
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_73 = ATgetFirst((ATermList) t);
      m_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_73, term_f_27, (ATerm) ATinsert(CheckATermList(m_73), (ATerm) ATinsert(CheckATermList(l_73), h_89)));
  t = lookup_table_0_1(k_73, t);
  r_73 = t;
  t = term_f_27;
  o_73 = t;
  t = (ATerm) ATinsert(CheckATermList(m_73), (ATerm) ATinsert(CheckATermList(l_73), h_89));
  p_73 = t;
  t = r_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(o_73, p_73, q_73, t);
  t = n_73;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_m_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  t = term_j_27;
  u_73 = t;
  t = term_t_27;
  v_73 = t;
  t = term_u_27;
  t = i_10(d_4, u_73, v_73, t);
  t = t_73;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
        {
          ATerm z_27 = ATgetFirst((ATermList) v_27);
          if(match_cons(z_27, sym_Signature_1))
            {
              ATerm e_28 = ATgetArgument(z_27, 0);
              if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
                {
                  ATerm g_28 = ATgetFirst((ATermList) e_28);
                  if(match_cons(g_28, sym_Constructors_1))
                    {
                      x_73 = ATgetArgument(g_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_28 = (ATerm) ATgetNext((ATermList) e_28);
                    if(((ATgetType(h_28) != AT_LIST) || !(ATisEmpty(h_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm a_28 = (ATerm) ATgetNext((ATermList) v_27);
            if(((ATgetType(a_28) == AT_LIST) && !(ATisEmpty(a_28))))
              {
                ATerm i_28 = ATgetFirst((ATermList) a_28);
                if(match_cons(i_28, sym_Strategies_1))
                  {
                    y_73 = ATgetArgument(i_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm l_28 = (ATerm) ATgetNext((ATermList) a_28);
                  if(((ATgetType(l_28) != AT_LIST) || !(ATisEmpty(l_28))))
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
  t = h_10(x_73, y_73, t);
  t = listbottomup_1_0(e_4, t);
  return(t);
}
static ATerm k_10 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm a_74 = NULL;
  t = SSL_fputc(m_58, n_58);
  a_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_74);
  return(t);
}
static ATerm l_10 (ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm b_74 = NULL;
  t = SSL_write_term_to_stream_text(p_42, q_42);
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_74);
  return(t);
}
static ATerm n_10 (ATerm k_144 (ATerm), ATerm m_288, ATerm v_42, ATerm t)
{
  ATerm c_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_288, term_m_28);
  t = r_10(t);
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_74, v_42);
  t = k_144(t);
  t = fclose_0_0(t);
  t = v_42;
  return(t);
}
static ATerm m_10 (ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm d_74 = NULL;
  t = SSL_write_term_to_stream_baf(l_42, m_42);
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_74);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Stream_1))
        {
          k_74 = ATgetArgument(n_28, 0);
        }
      else
        _fail(t);
      l_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(k_74, l_74, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if(match_cons(o_28, sym_Stream_1))
        {
          p_74 = ATgetArgument(o_28, 0);
        }
      else
        _fail(t);
      q_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(p_74, q_74, t);
  m_74 = t;
  t = term_r_28;
  n_74 = t;
  t = m_74;
  if(match_cons(t, sym_Stream_1))
    {
      o_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, m_74);
  t = k_10(n_74, o_74, t);
  return(t);
}
ATerm output_1_0 (ATerm b_164 (ATerm), ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL;
  t = b_164(t);
  f_74 = t;
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_74 = NULL,h_74 = NULL;
        t = term_r_25;
        g_74 = t;
        t = term_w_28;
        h_74 = t;
        t = term_z_28;
        t = x_10(g_74, h_74, t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = term_a_29;
      }
  }
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_74 = NULL,j_74 = NULL;
        t = term_r_25;
        i_74 = t;
        t = term_f_29;
        j_74 = t;
        t = term_h_29;
        t = x_10(i_74, j_74, t);
        t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
        LocalPopChoice(c_29);
        if(match_cons(t, sym__2))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            ATerm j_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(f_4, e_74, f_74, t);
      }
    else
      {
        t = b_29;
        if(match_cons(t, sym__2))
          {
            ATerm q_29 = ATgetArgument(t, 0);
            ATerm r_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(l_4, e_74, f_74, t);
      }
  }
  return(t);
}
static ATerm e_75 (ATerm y_74, ATerm t)
{
  t = SSL_fclose(y_74);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL;
  c_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_75 = ATgetArgument(t, 0);
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_75);
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            t = e_75(c_75, t);
          }
      }
    }
  else
    {
      t = e_75(c_75, t);
    }
  return(t);
}
static ATerm o_10 (ATerm r_42, ATerm t)
{
  t = SSL_read_term_from_stream(r_42);
  return(t);
}
static ATerm p_10 (ATerm s_56, ATerm t_56, ATerm t)
{
  t = SSL_strcat(s_56, t_56);
  return(t);
}
static ATerm q_10 (ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm f_75 = NULL;
  t = SSL_fopen(o_58, p_58);
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_75);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_75 = NULL;
  t = SSL_stdin_stream();
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_75);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_75 = NULL;
  t = SSL_stdout_stream();
  h_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_75);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_75 = NULL;
  t = SSL_stderr_stream();
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_75);
  return(t);
}
static ATerm p_76 (ATerm o_75, ATerm t)
{
  ATerm p_75 = NULL;
  t = SSL_explode_term(o_75);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_29 = ATgetArgument(t, 1);
        if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
          {
            p_75 = ATgetFirst((ATermList) w_29);
            {
              ATerm x_29 = (ATerm) ATgetNext((ATermList) w_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_75;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_75;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_75;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_75;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_76 (ATerm s_75, ATerm t_75, ATerm u_75, ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,a_76 = NULL,x_9 = NULL;
  t = SSLgetAnnotations(u_75);
  x_75 = t;
  t = s_75;
  if(match_cons(t, sym_Path_1))
    {
      a_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_76, t_75);
  x_9 = t;
  t = SSLsetAnnotations(x_9, x_75);
  if(match_cons(t, sym__2))
    {
      v_75 = ATgetArgument(t, 0);
      w_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(v_75, w_75, t);
  return(t);
}
static ATerm r_76 (ATerm c_76, ATerm d_76, ATerm e_76, ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,k_76 = NULL,y_9 = NULL;
  t = SSLgetAnnotations(e_76);
  h_76 = t;
  t = SSL_is_string(c_76);
  k_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_76, d_76);
  y_9 = t;
  t = SSLsetAnnotations(y_9, h_76);
  if(match_cons(t, sym__2))
    {
      f_76 = ATgetArgument(t, 0);
      g_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(f_76, g_76, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  m_76 = t;
  if(match_cons(t, sym__2))
    {
      n_76 = ATgetArgument(t, 0);
      o_76 = ATgetArgument(t, 1);
      {
        ATerm a_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_76(m_76, t);
            LocalPopChoice(c_30);
          }
        else
          {
            t = a_30;
            {
              ATerm d_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_76(n_76, o_76, m_76, t);
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = d_30;
                  t = r_76(n_76, o_76, m_76, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_76(m_76, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,a_77 = NULL;
  a_77 = t;
  {
    ATerm h_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_77, term_k_30);
        t = r_10(t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = h_30;
        {
          ATerm g_35 = NULL,h_35 = NULL;
          t = term_m_30;
          h_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_30, a_77);
          t = p_10(h_35, a_77, t);
          g_35 = t;
          t = SSL_perror(g_35);
          _fail(t);
        }
      }
  }
  u_76 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(v_76, t);
  t_76 = t;
  t = u_76;
  t = fclose_0_0(t);
  t = t_76;
  return(t);
}
ATerm input_1_0 (ATerm c_164 (ATerm), ATerm t)
{
  ATerm s_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_77 = NULL,e_77 = NULL;
      t = term_r_25;
      d_77 = t;
      t = term_w_30;
      e_77 = t;
      t = term_a_31;
      t = x_10(d_77, e_77, t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = s_30;
      t = term_g_31;
    }
  t = ReadFromFile_0_0(t);
  t = c_164(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL;
  t = term_r_25;
  f_77 = t;
  t = term_h_31;
  g_77 = t;
  t = term_l_31;
  t = x_10(f_77, g_77, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  i_77 = t;
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_77;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_31 = ATgetFirst((ATermList) t);
                ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_77;
          }
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATinsert(ATempty, i_77);
      }
  }
  j_77 = t;
  t = term_a_29;
  k_77 = t;
  t = SSL_printnl(k_77, j_77);
  t = i_77;
  return(t);
}
ATerm map_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  static ATerm c_78 (ATerm t);
  static ATerm c_78 (ATerm t)
  {
    ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
    z_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_77;
      }
    else
      {
        ATerm m_35 = NULL,p_35 = NULL,q_35 = NULL,d_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_78 = ATgetFirst((ATermList) t);
            b_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_77);
        m_35 = t;
        t = a_78;
        t = s_144(t);
        p_35 = t;
        t = b_78;
        t = c_78(t);
        q_35 = t;
        t = (ATerm) ATinsert(CheckATermList(q_35), p_35);
        d_10 = t;
        t = SSLsetAnnotations(d_10, m_35);
      }
    return(t);
  }
  t = c_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_78 = ATgetFirst((ATermList) t);
      g_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_78 = NULL,l_78 = NULL;
        static ATerm m_4 (ATerm t);
        static ATerm m_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_78)), not_null(l_78));
          return(t);
        }
        t = g_78;
        t = r_0(t);
        if(((k_78 != NULL) && (k_78 != t)))
          _fail(t);
        else
          k_78 = t;
        t = f_78;
        t = p_0(t);
        if(((l_78 != NULL) && (l_78 != t)))
          _fail(t);
        else
          l_78 = t;
        t = g_78;
        t = reverse_acc_2_0(p_0, m_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_31;
      t = r_0(t);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,z_10 = NULL;
  w_78 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_78);
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_78);
  z_10 = t;
  t = SSLsetAnnotations(z_10, u_78);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_79 = NULL;
  a_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_79), term_v_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_166 (ATerm), ATerm p_166 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_78 = NULL,t_78 = NULL;
      t = term_r_25;
      s_78 = t;
      t = term_h_31;
      t_78 = t;
      t = term_l_31;
      t = x_10(s_78, t_78, t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      t = fetch_1_0(n_4, t);
    }
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_166(t);
        t = echo_0_0(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
      }
  }
  t = term_b_32;
  t = echo_0_0(t);
  t = term_c_32;
  q_78 = t;
  t = term_d_32;
  r_78 = t;
  t = term_e_32;
  t = x_10(q_78, r_78, t);
  t = reverse_acc_2_0(_id, o_4, t);
  t = map_1_0(p_4, t);
  t = term_f_32;
  t = echo_0_0(t);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_166(t);
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_79 = NULL;
              b_79 = t;
              t = SSL_is_string(b_79);
              t = b_79;
              LocalPopChoice(j_32);
              {
                ATerm c_79 = NULL;
                c_79 = t;
                t = (ATerm) ATinsert(ATempty, c_79);
              }
            }
          else
            {
              t = i_32;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
      }
  }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,f_11 = NULL;
  l_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_79);
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_79);
  f_11 = t;
  t = SSLsetAnnotations(f_11, j_79);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_79 = NULL;
  g_79 = t;
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_79 = NULL,i_79 = NULL;
        t = term_r_25;
        h_79 = t;
        t = term_h_31;
        i_79 = t;
        t = term_l_31;
        t = x_10(h_79, i_79, t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = fetch_1_0(r_4, t);
      }
  }
  t = g_79;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_79 = NULL;
  n_79 = t;
  if(match_string(t, "-k"))
    {
      t = n_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_79;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  t = SSL_string_to_int(o_79);
  p_79 = t;
  t = term_s_32;
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_32, p_79);
  t = a_11(q_79, p_79, t);
  t = o_79;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm s_79 = NULL;
  s_79 = t;
  if(match_string(t, "-S"))
    {
      t = s_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_79;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL;
  t = term_u_32;
  t_79 = t;
  t = term_a_14;
  u_79 = t;
  t = term_v_32;
  t = a_11(t_79, u_79, t);
  t = term_w_32;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
  v_79 = t;
  t = SSL_string_to_int(v_79);
  w_79 = t;
  t = term_u_32;
  x_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, w_79);
  t = a_11(x_79, w_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_79);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_z_32;
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
  ATerm y_79 = NULL,z_79 = NULL;
  t = term_a_33;
  y_79 = t;
  t = term_t_31;
  z_79 = t;
  t = term_c_33;
  t = a_11(y_79, z_79, t);
  t = term_e_33;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, w_4, x_4, t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, f_5, t);
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            t = Option_3_0(g_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm a_11 (ATerm q_105, ATerm r_105, ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL;
  t = term_r_25;
  a_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, q_105, r_105);
  t = lookup_table_0_1(a_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(q_105, r_105, b_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, q_105, r_105);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
      t = term_t_31;
      t = g_0(t);
      h_80 = t;
      t = term_c_32;
      i_80 = t;
      t = term_d_32;
      j_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, h_80);
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
      t = d_0(t);
      t = term_t_31;
      t = f_0(t);
      m_80 = t;
      t = (ATerm) ATinsert(CheckATermList(g_80), m_80);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm u_80 = NULL;
  u_80 = t;
  if(match_string(t, "-o"))
    {
      t = u_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_80;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL;
  v_80 = t;
  t = term_w_28;
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, v_80);
  t = a_11(w_80, v_80, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_80);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm y_80 = NULL;
  y_80 = t;
  if(match_string(t, "-i"))
    {
      t = y_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_80;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL;
  z_80 = t;
  t = term_w_30;
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, z_80);
  t = a_11(a_81, z_80, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_80);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, t_5, u_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_145 (ATerm), ATerm t)
{
  static ATerm v_81 (ATerm t);
  static ATerm v_81 (ATerm t)
  {
    ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
    u_81 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_81 = ATgetFirst((ATermList) t);
        t_81 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_35 = NULL,b_36 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(u_81);
          y_35 = t;
          t = t_81;
          t = v_81(t);
          b_36 = t;
          t = (ATerm) ATinsert(CheckATermList(b_36), s_81);
          h_11 = t;
          t = SSLsetAnnotations(h_11, y_35);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_81;
        t = h_145(t);
      }
    return(t);
  }
  t = v_81(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
  c_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_81;
    }
  else
    {
      static ATerm w_5 (ATerm t);
      static ATerm w_5 (ATerm t)
      {
        t = not_null(e_81);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_81 = ATgetFirst((ATermList) t);
          if(((e_81 != NULL) && (e_81 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_81;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm h_82 (ATerm z_81, ATerm t)
{
  ATerm a_82 = NULL;
  t = SSL_explode_term(z_81);
  if(match_cons(t, sym__2))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_82;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  e_82 = t;
  if(match_cons(t, sym__2))
    {
      c_82 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t);
            static ATerm x_5 (ATerm t)
            {
              t = d_82;
              return(t);
            }
            t = c_82;
            t = at_end_1_0(x_5, t);
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = h_82(e_82, t);
          }
      }
    }
  else
    {
      t = h_82(e_82, t);
    }
  return(t);
}
static ATerm j_10 (ATerm x_105, ATerm y_105, ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL;
  t = x_105;
  {
    ATerm r_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_82 = NULL;
        t = term_r_25;
        n_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_25, x_105);
        t = x_10(n_82, x_105, t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = r_33;
        t = (ATerm) ATempty;
      }
  }
  j_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_82, y_105);
  t = conc_0_0(t);
  i_82 = t;
  t = term_r_25;
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, x_105, i_82);
  t = lookup_table_0_1(k_82, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(x_105, i_82, l_82, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, x_105, i_82);
  return(t);
}
static ATerm y_10 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL;
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_33 = ATgetArgument(t, 0);
            ATerm z_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
        t = x_10(y_63, z_63, t);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATempty;
      }
  }
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_63, z_63, (ATerm) ATinsert(CheckATermList(q_82), x_63));
  t = lookup_table_0_1(y_63, t);
  t_82 = t;
  t = (ATerm) ATinsert(CheckATermList(q_82), x_63);
  r_82 = t;
  t = t_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(z_63, r_82, s_82, t);
  t = p_82;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
      t = term_t_31;
      t = n_0(t);
      e_83 = t;
      t = term_c_32;
      f_83 = t;
      t = term_d_32;
      g_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_32, term_d_32, e_83);
      t = y_10(f_83, g_83, e_83, t);
      _fail(t);
    }
  else
    {
      ATerm k_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_83 = ATgetFirst((ATermList) t);
          b_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_83 = ATgetFirst((ATermList) t);
          d_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_83;
      t = j_0(t);
      t = c_83;
      t = l_0(t);
      k_83 = t;
      t = (ATerm) ATinsert(CheckATermList(d_83), k_83);
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
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL;
  m_83 = t;
  t = term_o_25;
  n_83 = t;
  t = (ATerm) ATinsert(ATempty, m_83);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, (ATerm) ATinsert(ATempty, m_83));
  t = j_10(n_83, o_83, t);
  t = m_83;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm p_83 = NULL;
  p_83 = t;
  if(match_string(t, "--library"))
    {
      t = p_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = p_83;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  t = term_g_26;
  r_83 = t;
  t = term_t_31;
  s_83 = t;
  t = term_b_34;
  t = a_11(r_83, s_83, t);
  t = q_83;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(a_6, b_6, g_6, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = Option_3_0(k_6, l_6, t_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_31;
  t = whoami_0_0(t);
  t_83 = t;
  t = term_i_34;
  v_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_34), t_83);
  w_83 = t;
  t = SSL_printnl(v_83, w_83);
  t = term_b_14;
  u_83 = t;
  t = SSL_exit(u_83);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL;
  t = term_r_25;
  x_83 = t;
  t = term_h_31;
  y_83 = t;
  t = term_l_31;
  t = x_10(x_83, y_83, t);
  return(t);
}
static ATerm s_10 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_62, i_62);
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      t = SSL_addr(h_62, i_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
  a_84 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_84;
      t = p_151(t);
    }
  else
    {
      ATerm f_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_84 = ATgetFirst((ATermList) t);
          c_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_84;
      t = foldr_2_0(p_151, q_151, t);
      f_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_84, f_84);
      t = q_151(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(o_36, p_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_84 = NULL,k_36 = NULL,l_36 = NULL;
  t = times_0_0(t);
  l_36 = t;
  t = SSL_explode_term(l_36);
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_36;
  t = foldr_2_0(v_6, w_6, t);
  i_84 = t;
  t = SSL_TicksToSeconds(i_84);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_84;
        if((u_84 != t))
          {
            _fail(t);
          }
        t = t_84;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATmakeAppl(sym__2, u_84, v_84);
        {
          ATerm r_34 = t;
          int u_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_84, v_84);
              LocalPopChoice(u_34);
            }
          else
            {
              t = r_34;
              t = SSL_gtr(u_84, v_84);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_84, v_84);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_161 (ATerm), ATerm t)
{
  ATerm z_84 = NULL;
  z_84 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
        t = term_r_25;
        c_85 = t;
        t = term_u_32;
        d_85 = t;
        t = term_x_34;
        t = x_10(c_85, d_85, t);
        b_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_85, term_b_14);
        t = geq_0_0(t);
        t = z_84;
        t = z_161(t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = z_84;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,i_85 = NULL,j_85 = NULL;
  t = run_time_0_0(t);
  f_85 = t;
  t = term_t_31;
  t = whoami_0_0(t);
  g_85 = t;
  t = term_i_34;
  i_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_34), f_85), term_y_34), g_85);
  j_85 = t;
  t = SSL_printnl(i_85, j_85);
  t = (ATerm) ATmakeAppl(sym__2, term_i_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_34), f_85), term_y_34), g_85));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_14;
  k_85 = t;
  t = SSL_exit(k_85);
  return(t);
}
static ATerm b_11 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm l_85 = NULL;
  t = SSL_hashtable_put(p_68, n_68, o_68);
  l_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_85);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_65, ATerm t)
{
  ATerm u_85 = NULL;
  t = table_hashtable_0_0(t);
  u_85 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL;
        t = u_85;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_11(k_65, a_37, t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        {
          ATerm f_37 = NULL;
          t = k_65;
          t = table_create_0_0(t);
          t = u_85;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_11(k_65, f_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm x_85 = NULL;
  t = SSL_hashtable_create(v_68, w_68);
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_85);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,c_86 = NULL,d_86 = NULL;
  y_85 = t;
  t = term_f_35;
  c_86 = t;
  t = term_i_35;
  d_86 = t;
  t = y_85;
  t = new_hashtable_0_2(c_86, d_86, t);
  z_85 = t;
  t = y_85;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(y_85, z_85, a_86, t);
  t = y_85;
  return(t);
}
static ATerm u_10 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm e_86 = NULL;
  t = SSL_hashtable_remove(t_68, s_68);
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_86);
  return(t);
}
static ATerm v_10 (ATerm x_68, ATerm t)
{
  ATerm f_86 = NULL;
  t = SSL_hashtable_destroy(x_68);
  f_86 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_86);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_86 = NULL;
  t = SSL_table_hashtable();
  g_86 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_86);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL;
  h_86 = t;
  t = table_hashtable_0_0(t);
  i_86 = t;
  t = lookup_table_0_1(h_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(k_86, t);
  t = i_86;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(h_86, j_86, t);
  t = h_86;
  return(t);
}
ATerm fetch_1_0 (ATerm a_145 (ATerm), ATerm t)
{
  static ATerm h_87 (ATerm t);
  static ATerm h_87 (ATerm t)
  {
    ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
    e_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_87 = ATgetFirst((ATermList) t);
        g_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_37 = NULL,n_37 = NULL,j_11 = NULL;
          t = SSLgetAnnotations(e_87);
          k_37 = t;
          t = f_87;
          t = a_145(t);
          n_37 = t;
          t = (ATerm) ATinsert(CheckATermList(g_87), n_37);
          j_11 = t;
          t = SSLsetAnnotations(j_11, k_37);
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          {
            ATerm v_37 = NULL,y_37 = NULL,k_11 = NULL;
            t = SSLgetAnnotations(e_87);
            v_37 = t;
            t = g_87;
            t = h_87(t);
            y_37 = t;
            t = (ATerm) ATinsert(CheckATermList(y_37), f_87);
            k_11 = t;
            t = SSLsetAnnotations(k_11, v_37);
          }
        }
    }
    return(t);
  }
  t = h_87(t);
  return(t);
}
static ATerm c_11 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_hashtable_get(r_68, q_68);
  return(t);
}
static ATerm x_10 (ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm k_87 = NULL;
  t = lookup_table_0_1(r_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(s_65, k_87, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL;
  t = term_l_35;
  m_87 = t;
  t = term_t_31;
  n_87 = t;
  t = term_n_35;
  t = a_11(m_87, n_87, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  t = term_l_35;
  q_87 = t;
  t = term_t_31;
  r_87 = t;
  t = term_n_35;
  t = a_11(q_87, r_87, t);
  t = term_r_35;
  o_87 = t;
  t = term_t_31;
  p_87 = t;
  t = term_s_35;
  t = a_11(o_87, p_87, t);
  t = term_t_35;
  return(t);
}
static ATerm g_7 (ATerm t)
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
      t = Option_3_0(y_6, z_6, a_7, t);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      t = Option_3_0(d_7, f_7, g_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,p_11 = NULL;
  x_87 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_87 = ATgetFirst((ATermList) t);
      u_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_87);
  s_87 = t;
  t = t_87;
  t = c_106(t);
  v_87 = t;
  t = u_87;
  t = d_106(t);
  w_87 = t;
  t = (ATerm) ATinsert(CheckATermList(w_87), v_87);
  p_11 = t;
  t = SSLsetAnnotations(p_11, s_87);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_166 (ATerm), ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,y_88 = NULL,z_88 = NULL,r_11 = NULL;
  t_88 = t;
  {
    ATerm x_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_36;
        t = j_166(t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = x_35;
      }
  }
  t = t_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_88 = ATgetFirst((ATermList) t);
      w_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_88);
  u_88 = t;
  t = term_h_31;
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_31, v_88);
  t = a_11(z_88, v_88, t);
  t = w_88;
  {
    static ATerm p_89 (ATerm t);
    static ATerm p_89 (ATerm t)
    {
      ATerm c_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_89 = NULL;
              c_89 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_89;
              LocalPopChoice(g_36);
            }
          else
            {
              t = e_36;
              t = j_166(t);
              t = Cons_2_0(_id, p_89, t);
            }
          LocalPopChoice(d_36);
        }
      else
        {
          t = c_36;
          {
            ATerm k_89 = NULL,l_89 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_89 = ATgetFirst((ATermList) t);
                l_89 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_89), (ATerm) ATmakeAppl(sym_Undefined_1, k_89));
          }
        }
      return(t);
    }
    t = p_89(t);
  }
  y_88 = t;
  t = (ATerm) ATinsert(CheckATermList(y_88), (ATerm) ATmakeAppl(sym_Program_1, v_88));
  r_11 = t;
  t = SSLsetAnnotations(r_11, u_88);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm c_90 = NULL;
  c_90 = t;
  if(match_string(t, "--help"))
    {
      t = c_90;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_90;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_90;
        }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL;
  t = term_m_36;
  d_90 = t;
  t = term_t_31;
  e_90 = t;
  t = term_n_36;
  t = a_11(d_90, e_90, t);
  t = term_q_36;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_r_36;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_166 (ATerm), ATerm h_166 (ATerm), ATerm i_166 (ATerm), ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL;
  w_89 = t;
  t = term_c_32;
  x_89 = t;
  t = term_s_36;
  t = lookup_table_0_1(x_89, t);
  b_90 = t;
  t = term_d_32;
  y_89 = t;
  t = (ATerm) ATempty;
  z_89 = t;
  t = b_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(y_89, z_89, a_90, t);
  t = w_89;
  {
    static ATerm j_7 (ATerm t);
    static ATerm j_7 (ATerm t)
    {
      ATerm t_36 = t;
      int u_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_166(t);
          LocalPopChoice(u_36);
        }
      else
        {
          t = t_36;
          {
            ATerm v_36 = t;
            int w_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, m_7, n_7, t);
                LocalPopChoice(w_36);
              }
            else
              {
                t = v_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_7, t);
  }
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_90 = NULL;
        p_90 = t;
        {
          ATerm z_36 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_38 = NULL;
              t = p_90;
              {
                ATerm c_37 = t;
                int d_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_38 = NULL,h_38 = NULL;
                    t = term_r_25;
                    g_38 = t;
                    t = term_m_36;
                    h_38 = t;
                    t = term_e_37;
                    t = x_10(g_38, h_38, t);
                    LocalPopChoice(d_37);
                  }
                else
                  {
                    t = c_37;
                    t = fetch_1_0(p_7, t);
                  }
              }
              t = p_90;
              t = h_166(t);
              t = term_a_14;
              f_38 = t;
              t = SSL_exit(f_38);
              LocalPopChoice(b_37);
            }
          else
            {
              t = z_36;
              {
                ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
                t = term_r_25;
                m_38 = t;
                t = term_l_35;
                n_38 = t;
                t = term_g_37;
                t = x_10(m_38, n_38, t);
                t = p_90;
                t = i_166(t);
                t = term_a_14;
                l_38 = t;
                t = SSL_exit(l_38);
              }
            }
        }
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL;
              static ATerm q_7 (ATerm t);
              static ATerm q_7 (ATerm t)
              {
                ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,x_11 = NULL;
                v_90 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_90 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_90);
                t_90 = t;
                t = u_90;
                if(((u_89 != NULL) && (u_89 != t)))
                  _fail(t);
                else
                  u_89 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_90);
                x_11 = t;
                t = SSLsetAnnotations(x_11, t_90);
                return(t);
              }
              t = fetch_1_0(q_7, t);
              t = term_i_34;
              r_90 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_89)), term_j_37);
              s_90 = t;
              t = SSL_printnl(r_90, s_90);
              t = (ATerm) ATmakeAppl(sym__2, term_i_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_89)), term_j_37));
              t = h_166(t);
              t = term_b_14;
              q_90 = t;
              t = SSL_exit(q_90);
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
            }
        }
      }
  }
  v_89 = t;
  t = term_c_32;
  t = table_destroy_0_0(t);
  t = v_89;
  return(t);
}
ATerm option_wrap_5_0 (ATerm v_163 (ATerm), ATerm w_163 (ATerm), ATerm x_163 (ATerm), ATerm y_163 (ATerm), ATerm z_163 (ATerm), ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  t = parse_options_3_0(v_163, w_163, x_163, t);
  a_91 = t;
  t = term_l_37;
  t = table_create_0_0(t);
  t = term_l_37;
  b_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_37, term_m_37, a_91);
  t = lookup_table_0_1(b_91, t);
  e_91 = t;
  t = term_m_37;
  c_91 = t;
  t = e_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(c_91, a_91, d_91, t);
  t = a_91;
  t = y_163(t);
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_163(t);
        t = report_success_0_0(t);
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
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
            t = input_option_0_0(t);
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            {
              ATerm u_37 = t;
              int w_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_37);
                }
              else
                {
                  t = u_37;
                  {
                    ATerm x_37 = t;
                    int z_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, z_7, t);
                        LocalPopChoice(z_37);
                      }
                    else
                      {
                        t = x_37;
                        {
                          ATerm a_38 = t;
                          int b_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(b_38);
                            }
                          else
                            {
                              t = a_38;
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
static ATerm s_7 (ATerm t)
{
  t = input_1_0(a_8, t);
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
  ATerm g_91 = NULL,h_91 = NULL;
  t = term_f_29;
  g_91 = t;
  t = term_t_31;
  h_91 = t;
  t = term_c_38;
  t = a_11(g_91, h_91, t);
  t = term_d_38;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_e_38;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(r_7, default_system_usage_0_0, default_system_about_0_0, _id, s_7, t);
  return(t);
}
