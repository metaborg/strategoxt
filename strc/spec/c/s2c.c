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
static ATerm term_m_38;
static ATerm term_l_38;
static ATerm term_k_38;
static ATerm term_u_37;
static ATerm term_t_37;
static ATerm term_p_37;
static ATerm term_m_37;
static ATerm term_l_37;
static ATerm term_x_36;
static ATerm term_w_36;
static ATerm term_u_36;
static ATerm term_t_36;
static ATerm term_s_36;
static ATerm term_m_36;
static ATerm term_c_36;
static ATerm term_b_36;
static ATerm term_a_36;
static ATerm term_z_35;
static ATerm term_y_35;
static ATerm term_x_35;
static ATerm term_u_35;
static ATerm term_p_35;
static ATerm term_o_35;
static ATerm term_k_35;
static ATerm term_i_35;
static ATerm term_h_35;
static ATerm term_t_34;
static ATerm term_s_34;
static ATerm term_n_34;
static ATerm term_m_34;
static ATerm term_l_34;
static ATerm term_z_33;
static ATerm term_x_33;
static ATerm term_r_33;
static ATerm term_n_33;
static ATerm term_m_33;
static ATerm term_l_33;
static ATerm term_k_33;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_h_33;
static ATerm term_g_33;
static ATerm term_b_33;
static ATerm term_a_33;
static ATerm term_w_32;
static ATerm term_t_32;
static ATerm term_s_32;
static ATerm term_q_32;
static ATerm term_o_32;
static ATerm term_g_32;
static ATerm term_f_32;
static ATerm term_w_31;
static ATerm term_v_31;
static ATerm term_u_31;
static ATerm term_t_31;
static ATerm term_s_31;
static ATerm term_p_31;
static ATerm term_o_31;
static ATerm term_g_30;
static ATerm term_c_30;
static ATerm term_p_29;
static ATerm term_n_29;
static ATerm term_l_29;
static ATerm term_h_29;
static ATerm term_e_29;
static ATerm term_k_28;
static ATerm term_j_28;
static ATerm term_i_28;
static ATerm term_g_28;
static ATerm term_d_28;
static ATerm term_b_28;
static ATerm term_w_27;
static ATerm term_v_27;
static ATerm term_s_27;
static ATerm term_p_27;
static ATerm term_o_27;
static ATerm term_j_27;
static ATerm term_i_27;
static ATerm term_h_27;
static ATerm term_f_27;
static ATerm term_w_26;
static ATerm term_v_26;
static ATerm term_u_26;
static ATerm term_t_26;
static ATerm term_k_26;
static ATerm term_j_26;
static ATerm term_h_26;
static ATerm term_q_25;
static ATerm term_p_25;
static ATerm term_m_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_j_25;
static ATerm term_i_25;
static ATerm term_h_25;
static ATerm term_g_25;
static ATerm term_f_25;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_w_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_t_24;
static ATerm term_s_24;
static ATerm term_r_24;
static ATerm term_b_24;
static ATerm term_a_24;
static ATerm term_z_23;
static ATerm term_y_23;
static ATerm term_r_23;
static ATerm term_q_23;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_h_22;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_e_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
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
static ATerm term_k_20;
static ATerm term_j_20;
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
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_g_19;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
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
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_f_16;
static ATerm term_z_15;
static ATerm term_y_15;
static ATerm term_x_15;
static ATerm term_v_15;
static ATerm term_u_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_z_14;
static ATerm term_y_14;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_o_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_a_14;
static ATerm term_z_13;
static ATerm term_e_13;
static ATerm term_c_13;
static ATerm term_z_12;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_w_12;
static ATerm term_d_12;
static ATerm term_c_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_z_11;
static ATerm term_y_11;
static ATerm term_x_11;
static ATerm term_w_11;
static ATerm term_v_11;
static ATerm term_r_11;
static ATerm term_p_11;
static ATerm term_n_11;
static ATerm term_k_11;
static ATerm term_f_11;
static ATerm term_d_11;
static ATerm term_c_11;
static ATerm term_y_10;
static ATerm term_a_10;
static ATerm term_x_9;
static ATerm term_w_9;
static ATerm term_u_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Id_1, term_a_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Id_1, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_11, term_f_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Some_1, term_k_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_x_9, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Id_1, term_r_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_11, (ATerm) ATempty);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Id_1, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Return_1, term_d_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Id_1, term_c_12);
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
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_x_9, term_f_11);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Id_1, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Id_1, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Id_1, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Id_1, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_pop_seqvar", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Id_1, term_y_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Id_1, term_h_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Id_1, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Id_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Id_1, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, term_r_14);
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
  term_j_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_17, term_f_11);
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
  term_r_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_17, term_f_11);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Id_1, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_14);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_11);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Id_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_n_19, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_o_19, term_v_15);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_1, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_19, (ATerm) ATempty);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Id_1, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATempty);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_w_19, term_v_15);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_19, (ATerm) ATempty);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Id_1, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Id_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_20, term_f_11);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Id_1, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Id_1, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Id_1, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_21, (ATerm) ATempty);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_21, term_f_11);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATappend", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Id_1, term_d_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Id_1, term_t_21);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, term_d_11);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_s_22, (ATerm)ATempty, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Id_1, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Id_1, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(98);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(113);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_s_22, (ATerm)ATempty, term_j_25, (ATerm) ATempty);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_m_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_h_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Id_1, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_t_26, term_f_11);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Include_1, term_f_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Include_1, term_i_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_s_22, (ATerm)ATempty, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Id_1, term_p_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Id_1, term_v_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Op_2, term_d_28, (ATerm) ATempty);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_28, term_o_16);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_j_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_l_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_c_30);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_v_31);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_s_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_z_13);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_13);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_f_32);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_f_32);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_g_33);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_f_32);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_z_35, term_f_32);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_s_36, term_f_32);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__3, term_q_32, term_s_32, (ATerm) ATempty);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_s_36);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_u_35);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_f_32);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm z_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm d_171 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm r_137 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm p_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t);
static ATerm d_10 (ATerm j_64, ATerm k_64, ATerm t);
static ATerm w_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm r_9 (ATerm u_30, ATerm x_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm s_9 (ATerm j_36, ATerm i_36, ATerm t);
static ATerm t_9 (ATerm d_211, ATerm f_36, ATerm h_36, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm u_54 (ATerm x_28, ATerm y_28, ATerm a_29, ATerm b_29, ATerm c_29, ATerm t);
static ATerm x_54 (ATerm b_31, ATerm e_31, ATerm f_31, ATerm t);
static ATerm y_54 (ATerm r_32, ATerm x_32, ATerm d_33, ATerm t);
static ATerm z_54 (ATerm w_38, ATerm d_39, ATerm k_39, ATerm x_39, ATerm t);
static ATerm a_55 (ATerm j_40, ATerm k_40, ATerm r_40, ATerm s_40, ATerm t);
static ATerm d_55 (ATerm f_41, ATerm g_41, ATerm k_41, ATerm l_41, ATerm t);
static ATerm e_55 (ATerm p_41, ATerm t_41, ATerm u_41, ATerm v_41, ATerm t);
static ATerm h_55 (ATerm b_42, ATerm c_42, ATerm d_42, ATerm e_42, ATerm h_42, ATerm i_42, ATerm j_42, ATerm k_42, ATerm n_42, ATerm t);
static ATerm j_55 (ATerm i_44, ATerm k_44, ATerm m_44, ATerm n_44, ATerm o_44, ATerm p_44, ATerm t);
static ATerm k_55 (ATerm f_45, ATerm g_45, ATerm h_45, ATerm i_45, ATerm j_45, ATerm k_45, ATerm t);
static ATerm l_55 (ATerm w_45, ATerm x_45, ATerm y_45, ATerm t);
static ATerm q_1 (ATerm t);
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
ATerm escape_chars_1_0 (ATerm v_154 (ATerm), ATerm t);
static ATerm z_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t);
ATerm thread_map_1_0 (ATerm p_151 (ATerm), ATerm t);
static ATerm s_62 (ATerm r_59, ATerm s_59, ATerm t_59, ATerm u_59, ATerm v_59, ATerm w_59, ATerm t);
static ATerm t_62 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm y_60, ATerm t);
static ATerm u_62 (ATerm d_61, ATerm e_61, ATerm f_61, ATerm g_61, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_137 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm translate_body_0_0 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_152 (ATerm), ATerm t);
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
static ATerm e_10 (ATerm o_40, ATerm m_40, ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm s_154 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm f_10 (ATerm b_40, ATerm a_40, ATerm t);
static ATerm v_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_10 (ATerm v_40, ATerm y_40, ATerm t);
static ATerm h_10 (ATerm n_171 (ATerm), ATerm q_88, ATerm o_88, ATerm t);
static ATerm d_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm j_10 (ATerm m_58, ATerm n_58, ATerm t);
static ATerm k_10 (ATerm p_42, ATerm q_42, ATerm t);
static ATerm m_10 (ATerm t_143 (ATerm), ATerm q_287, ATerm v_42, ATerm t);
static ATerm l_10 (ATerm l_42, ATerm m_42, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_1_0 (ATerm k_163 (ATerm), ATerm t);
static ATerm q_74 (ATerm k_74, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_10 (ATerm r_42, ATerm t);
static ATerm o_10 (ATerm s_56, ATerm t_56, ATerm t);
static ATerm p_10 (ATerm o_58, ATerm p_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_76 (ATerm a_75, ATerm t);
static ATerm c_76 (ATerm e_75, ATerm f_75, ATerm g_75, ATerm t);
static ATerm d_76 (ATerm o_75, ATerm p_75, ATerm q_75, ATerm t);
static ATerm q_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_163 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_144 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_165 (ATerm), ATerm y_165 (ATerm), ATerm t);
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
static ATerm z_10 (ATerm z_104, ATerm a_105, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_144 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_81 (ATerm i_81, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_10 (ATerm g_105, ATerm h_105, ATerm t);
static ATerm x_10 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_10 (ATerm h_62, ATerm i_62, ATerm t);
ATerm foldr_2_0 (ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_161 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_11 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t);
ATerm lookup_table_0_1 (ATerm k_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_10 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm u_10 (ATerm x_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_144 (ATerm), ATerm t);
static ATerm b_11 (ATerm q_68, ATerm r_68, ATerm t);
static ATerm w_10 (ATerm r_65, ATerm s_65, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_165 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm parse_options_3_0 (ATerm p_165 (ATerm), ATerm q_165 (ATerm), ATerm r_165 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm g_163 (ATerm), ATerm h_163 (ATerm), ATerm i_163 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
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
      t = listbu1_1_0(z_2, t);
      u_0 = t;
      t = (ATerm) ATinsert(CheckATermList(u_0), p_1);
      q_0 = t;
      t = SSLsetAnnotations(q_0, m_0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_2(t);
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
      t = z_2(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_8 = ATgetFirst((ATermList) t);
      if(match_cons(i_8, sym_Compound_2))
        {
          ATerm l_8 = ATgetArgument(i_8, 0);
          if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
            _fail(t);
          h_4 = ATgetArgument(i_8, 1);
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
      ATerm m_8 = ATgetFirst((ATermList) t);
      if(match_cons(m_8, sym_Compound_2))
        {
          ATerm o_8 = ATgetArgument(m_8, 0);
          if(((ATgetType(o_8) != AT_LIST) || !(ATisEmpty(o_8))))
            _fail(t);
          d_5 = ATgetArgument(m_8, 1);
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
      ATerm p_8 = ATgetFirst((ATermList) t);
      if(match_cons(p_8, sym_Compound_2))
        {
          ATerm q_8 = ATgetArgument(p_8, 0);
          if(((ATgetType(q_8) != AT_LIST) || !(ATisEmpty(q_8))))
            _fail(t);
          i_5 = ATgetArgument(p_8, 1);
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
      ATerm s_8 = ATgetFirst((ATermList) t);
      if(match_cons(s_8, sym_Compound_2))
        {
          ATerm t_8 = ATgetArgument(s_8, 0);
          if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
            _fail(t);
          y_5 = ATgetArgument(s_8, 1);
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
      ATerm v_8 = ATgetFirst((ATermList) t);
      if(match_cons(v_8, sym_Compound_2))
        {
          ATerm y_8 = ATgetArgument(v_8, 0);
          if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
            _fail(t);
          d_6 = ATgetArgument(v_8, 1);
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
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL;
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
              a_3 = ATgetArgument(t, 0);
              t = a_3;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = e_3;
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
              t = a_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
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
                        ATerm z_8 = t;
                        int a_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_4 = NULL;
                            t = e_3;
                            t = listbu1_1_0(a_0, t);
                            g_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, g_4);
                            LocalPopChoice(a_9);
                          }
                        else
                          {
                            t = z_8;
                            {
                              ATerm c_9 = t;
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
                                  t = c_9;
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
                        int j_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_5 = NULL;
                            t = e_3;
                            t = listbu1_1_0(i_0, t);
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, d_3, h_5);
                            LocalPopChoice(j_9);
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
ATerm repeat_2_0 (ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm k_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_136(t);
        t = f_6(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = k_9;
        t = r_136(t);
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm d_171 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t);
  static ATerm m_7 (ATerm t)
  {
    t = d_171(t);
    {
      ATerm o_9 = t;
      int q_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_7 = NULL,g_7 = NULL,k_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,e_1 = NULL;
          b_7 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_7 = ATgetFirst((ATermList) t);
              k_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_7);
          w_1 = t;
          t = g_7;
          t = m_7(t);
          z_1 = t;
          t = k_7;
          t = m_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          e_1 = t;
          t = SSLsetAnnotations(e_1, w_1);
          LocalPopChoice(q_9);
        }
      else
        {
          t = o_9;
          t = SRTS_all(m_7, t);
        }
    }
    t = d_171(t);
    return(t);
  }
  t = m_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm r_137 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(r_137, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = r_137(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_x_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_y_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_p_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_12, (ATerm) ATinsert(ATempty, term_d_11))))), term_x_11)));
  return(t);
}
static ATerm p_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, k_31)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_31), term_y_11, j_31)));
  return(t);
}
static ATerm d_10 (ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm p_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_64, k_64);
  t = w_10(j_64, k_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_7 = ATgetFirst((ATermList) t);
      {
        ATerm i_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_7;
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
  ATerm j_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_10 = NULL,s_10 = NULL,v_10 = NULL;
      c_10 = t;
      if(match_cons(t, sym_Op_2))
        {
          s_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(c_10);
            i_2 = t;
            t = s_10;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
              _fail(t);
            t = v_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Op_2, s_10, v_10);
            i_1 = t;
            t = SSLsetAnnotations(i_1, i_2);
            LocalPopChoice(q_12);
          }
        else
          {
            t = o_12;
            {
              ATerm s_2 = NULL,v_2 = NULL,i_3 = NULL,t_3 = NULL,j_4 = NULL,k_4 = NULL,k_1 = NULL,j_1 = NULL;
              t = SSLgetAnnotations(c_10);
              s_2 = t;
              t = s_10;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = v_10;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_3 = ATgetFirst((ATermList) t);
                  t_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_10);
              v_2 = t;
              t = t_3;
              t = Cons_2_0(proper_list_0_0, w_0, t);
              j_4 = t;
              t = (ATerm) ATinsert(CheckATermList(j_4), i_3);
              j_1 = t;
              t = SSLsetAnnotations(j_1, v_2);
              k_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, s_10, k_4);
              k_1 = t;
              t = SSLsetAnnotations(k_1, s_2);
            }
          }
      }
      LocalPopChoice(n_12);
    }
  else
    {
      t = j_12;
      {
        ATerm r_12 = t;
        if((PushChoice() == 0))
          {
            ATerm e_11 = NULL,g_11 = NULL,h_11 = NULL,o_11 = NULL,q_11 = NULL;
            e_11 = t;
            if(match_cons(t, sym_Op_2))
              {
                g_11 = ATgetArgument(t, 0);
                h_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_11;
            if(match_string(t, "Nil"))
              {
                t = h_11;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_11;
              }
            else
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                t = h_11;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm s_12 = ATgetFirst((ATermList) t);
                    o_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_11;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm u_12 = ATgetFirst((ATermList) t);
                    q_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_11;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_11;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_12;
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm r_9 (ATerm u_30, ATerm x_30, ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,b_14 = NULL,e_14 = NULL;
  t = u_30;
  if(match_cons(t, sym_Op_2))
    {
      e_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      {
        ATerm o_5 = NULL,x_5 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(u_30);
        o_5 = t;
        t = b_14;
        t = map_1_0(Cache_0_0, t);
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, e_14, x_5);
        s_1 = t;
        t = SSLsetAnnotations(s_1, o_5);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          e_14 = ATgetArgument(t, 0);
          b_14 = ATgetArgument(t, 1);
          {
            ATerm k_6 = NULL,t_6 = NULL,u_6 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(u_30);
            k_6 = t;
            t = e_14;
            t = Cache_0_0(t);
            t_6 = t;
            t = b_14;
            t = Cache_0_0(t);
            u_6 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, t_6, u_6);
            l_6 = t;
            t = SSLsetAnnotations(l_6, k_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              e_14 = ATgetArgument(t, 0);
              {
                ATerm c_7 = NULL,m_6 = NULL;
                t = SSLgetAnnotations(u_30);
                c_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, e_14);
                m_6 = t;
                t = SSLsetAnnotations(m_6, c_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  e_14 = ATgetArgument(t, 0);
                  {
                    ATerm h_7 = NULL,n_6 = NULL;
                    t = SSLgetAnnotations(u_30);
                    h_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, e_14);
                    n_6 = t;
                    t = SSLsetAnnotations(n_6, h_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      e_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_7 = NULL,o_6 = NULL;
                        t = SSLgetAnnotations(u_30);
                        o_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, e_14);
                        o_6 = t;
                        t = SSLsetAnnotations(o_6, o_7);
                      }
                    }
                  else
                    {
                      ATerm x_7 = NULL,p_6 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          e_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_30);
                      x_7 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, e_14);
                      p_6 = t;
                      t = SSLsetAnnotations(p_6, x_7);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  e_12 = t;
  t = term_y_12;
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, e_12);
  t = o_10(m_12, e_12, t);
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, f_12);
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_30, (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, f_12));
  t = h_10(y_0, u_30, l_12, t);
  t = f_12;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,a_8 = NULL,b_8 = NULL;
        t = (ATerm) ATempty;
        a_8 = t;
        t = term_x_12;
        b_8 = t;
        t = term_c_13;
        t = d_10(b_8, a_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            f_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_14;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATempty;
      }
  }
  g_12 = t;
  t = (ATerm) ATempty;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_13, (ATerm) ATinsert(CheckATermList(g_12), (ATerm) ATmakeAppl(sym__3, e_12, f_12, x_30)));
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_13, (ATerm) ATinsert(CheckATermList(g_12), (ATerm) ATmakeAppl(sym__3, e_12, f_12, x_30))));
  t = h_10(b_1, h_12, k_12, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, f_12);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,x_8 = NULL;
        t = term_w_12;
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_12, u_14);
        t = d_10(x_8, u_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            n_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, n_8);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm b_9 = NULL,h_9 = NULL;
          t = term_w_12;
          h_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_12, u_14);
          t = d_10(h_9, u_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm i_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              b_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_9;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm w_15 = NULL,n_9 = NULL;
        w_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm n_13 = t;
                int o_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(o_13);
                  }
                else
                  {
                    t = n_13;
                  }
              }
            }
        }
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_15, n_9);
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm r_13 = ATgetArgument(t, 0);
                  ATerm s_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_15, n_9);
              t = r_9(w_15, n_9, t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                ATerm i_11 = NULL,j_11 = NULL;
                j_11 = t;
                t = SSL_explode_term(j_11);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm u_13 = ATgetArgument(t, 1);
                      if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
                        {
                          ATerm v_13 = ATgetFirst((ATermList) u_13);
                          ATerm x_13 = (ATerm) ATgetNext((ATermList) u_13);
                          if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
                            {
                              i_11 = ATgetFirst((ATermList) x_13);
                              {
                                ATerm y_13 = (ATerm) ATgetNext((ATermList) x_13);
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
                t = i_11;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm j_36, ATerm i_36, ATerm t)
{
  ATerm a_16 = NULL;
  t = new_0_0(t);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_16), term_f_11), (ATerm) ATmakeAppl(sym_AssignInit_1, i_36)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, j_36, (ATerm) ATmakeAppl(sym_Id_1, a_16))));
  return(t);
}
static ATerm t_9 (ATerm d_211, ATerm f_36, ATerm h_36, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  t = SSLgetAnnotations(d_211);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_36);
  e_16 = t;
  t = SSLsetAnnotations(e_16, c_16);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, d_16, h_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(p_18, q_18, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm n_14 = NULL,x_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_14 = ATgetFirst((ATermList) t);
      x_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_14;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(x_14), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_14), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(x_14), term_g_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(x_14), term_h_14), term_c_14);
            }
        }
    }
  return(t);
}
ATerm ConstructTerm_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  w_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      x_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_14, (ATerm) ATinsert(ATinsert(ATempty, v_17), x_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          x_17 = ATgetArgument(t, 0);
          v_17 = ATgetArgument(t, 1);
          {
            ATerm k_18 = NULL,l_11 = NULL,m_11 = NULL,t_11 = NULL;
            t = v_17;
            t = foldr_3_0(c_1, g_1, h_1, t);
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_17, k_18);
            m_11 = t;
            t = term_l_14;
            t_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym__2, x_17, k_18));
            t = d_10(t_11, m_11, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm m_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_14) != ATmakeSymbol("k_0", 0, ATtrue)))
                  _fail(t);
                l_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_14, (ATerm) ATinsert(CheckATermList(v_17), (ATerm) ATmakeAppl(sym_Id_1, l_11))));
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
              if(match_cons(t, sym_SeqVar_1))
                {
                  x_17 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_IfExp_3, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, x_17), term_r_14), (ATerm) ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, x_17), term_t_14)), (ATerm)ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17))), (ATerm) ATmakeAppl(sym_FunCall_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, x_17)))));
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_17 = ATgetArgument(t, 0);
                      {
                        ATerm a_15 = t;
                        int b_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSLgetAnnotations(w_17);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm e_15 = ATgetFirst((ATermList) t);
                                if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                                  _fail(t);
                                {
                                  ATerm g_15 = (ATerm) ATgetNext((ATermList) t);
                                  if(((ATgetType(g_15) != AT_LIST) || !(ATisEmpty(g_15))))
                                    _fail(t);
                                }
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17)));
                            LocalPopChoice(b_15);
                          }
                        else
                          {
                            t = a_15;
                            {
                              ATerm j_15 = t;
                              int l_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SSLgetAnnotations(w_17);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm m_15 = ATgetFirst((ATermList) t);
                                      if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("unbound", 0, ATtrue)))
                                        _fail(t);
                                      {
                                        ATerm n_15 = (ATerm) ATgetNext((ATermList) t);
                                        if(((ATgetType(n_15) != AT_LIST) || !(ATisEmpty(n_15))))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17)));
                                  LocalPopChoice(l_15);
                                }
                              else
                                {
                                  t = j_15;
                                  {
                                    ATerm o_15 = t;
                                    int p_15 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSLgetAnnotations(w_17);
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_17)));
                                        LocalPopChoice(p_15);
                                      }
                                    else
                                      {
                                        t = o_15;
                                        t = SSLgetAnnotations(w_17);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm q_15 = ATgetFirst((ATermList) t);
                                            if((ATgetSymbol((ATermAppl) q_15) != ATmakeSymbol("bound", 0, ATtrue)))
                                              _fail(t);
                                            {
                                              ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
                                              if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
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
                            ATerm u_18 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,w_13 = NULL;
                            t = SSL_explode_string(x_17);
                            t = escape_chars_1_0(l_1, t);
                            w_13 = t;
                            t = SSL_implode_string(w_13);
                            d_15 = t;
                            t = SSL_explode_string(d_15);
                            f_15 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_15), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                            t = conc_0_0(t);
                            c_15 = t;
                            t = SSL_implode_string(c_15);
                            u_18 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_p_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_v_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, u_18)))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Real_1))
                            {
                              x_17 = ATgetArgument(t, 0);
                              {
                                ATerm k_15 = NULL;
                                t = SSL_real_to_string(x_17);
                                k_15 = t;
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, k_15))));
                              }
                            }
                          else
                            {
                              ATerm b_16 = NULL;
                              if(match_cons(t, sym_Int_1))
                                {
                                  x_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSL_int_to_string(x_17);
                              b_16 = t;
                              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_16))));
                            }
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_Op_2))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_24;
  if(match_string(t, "Cons"))
    {
      ATerm g_21 = NULL;
      t = g_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_23 = ATgetFirst((ATermList) t);
          u_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_23 = ATgetFirst((ATermList) t);
          w_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_23;
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,k_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,x_25 = NULL,y_25 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                f_23 = ATgetArgument(t, 0);
                p_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_23;
            if(match_cons(t, sym_TypeName_2))
              {
                g_23 = ATgetArgument(t, 0);
                o_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_23;
            if(match_cons(t, sym_TypeSpec_3))
              {
                h_23 = ATgetArgument(t, 0);
                k_23 = ATgetArgument(t, 1);
                n_23 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_23;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_23;
            if(match_cons(t, sym_TypeId_1))
              {
                m_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_23;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = n_23;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_23;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = p_23;
            if(match_cons(t, sym_Id_1))
              {
                x_25 = ATgetArgument(t, 0);
                {
                  ATerm d_26 = NULL,r_7 = NULL;
                  t = SSLgetAnnotations(p_23);
                  d_26 = t;
                  t = x_25;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, x_25);
                  r_7 = t;
                  t = SSLsetAnnotations(r_7, d_26);
                }
              }
            else
              {
                ATerm i_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,c_8 = NULL,u_7 = NULL,t_7 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    x_25 = ATgetArgument(t, 0);
                    y_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_23);
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
                t_7 = t;
                t = SSLsetAnnotations(t_7, q_26);
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
                u_7 = t;
                t = SSLsetAnnotations(u_7, l_26);
                p_26 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, s_26, p_26);
                c_8 = t;
                t = SSLsetAnnotations(c_8, i_26);
              }
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_16, (ATerm) ATinsert(ATempty, v_23));
          }
      }
      g_21 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, t_23), g_21)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = g_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_16;
    }
  return(t);
}
static ATerm u_54 (ATerm x_28, ATerm y_28, ATerm a_29, ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm j_29 = NULL,m_29 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  t = x_28;
  {
    ATerm p_16 = t;
    if((PushChoice() == 0))
      {
        ATerm o_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,x_29 = NULL;
        o_29 = t;
        if(match_cons(t, sym_Op_2))
          {
            q_29 = ATgetArgument(t, 0);
            r_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_29;
        if(match_string(t, "Nil"))
          {
            t = r_29;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_29;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = r_29;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_16 = ATgetFirst((ATermList) t);
                u_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_29;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_16 = ATgetFirst((ATermList) t);
                x_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_29;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_29;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_16;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, a_29, term_z_13);
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
      if(match_cons(t, sym__2))
        {
          y_29 = ATgetArgument(t, 0);
          z_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_29);
      d_30 = t;
      t = y_29;
      if(match_cons(t, sym_Var_1))
        {
          f_30 = ATgetArgument(t, 0);
          {
            ATerm s_16 = t;
            int t_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_30 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_30)), b_29));
                q_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_29, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_30)), b_29)));
                t = t_9(y_29, f_30, q_30, t);
                LocalPopChoice(t_16);
              }
            else
              {
                t = s_16;
                {
                  ATerm r_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_30)), b_29));
                  r_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_29, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_30)), b_29)));
                  t = s_9(y_29, r_30, t);
                }
              }
          }
        }
      else
        {
          ATerm y_30 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_30)), b_29));
          y_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_29, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_30)), b_29)));
          t = s_9(y_29, y_30, t);
        }
      a_30 = t;
      t = term_a_14;
      e_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_29, term_a_14);
      t = r_10(z_29, e_30, t);
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_30, b_30);
      return(t);
    }
    t = thread_map_1_0(n_1, t);
  }
  if(match_cons(t, sym__2))
    {
      j_29 = ATgetArgument(t, 0);
      {
        ATerm w_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_29;
  t = foldr_3_0(q_1, t_1, u_1, t);
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_28, m_29);
  y_26 = t;
  t = term_l_14;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym__2, y_28, m_29));
  t = d_10(z_26, y_26, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, x_26)), b_29)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, j_29), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm x_54 (ATerm b_31, ATerm e_31, ATerm f_31, ATerm t)
{
  ATerm p_32 = NULL;
  t = SSL_real_to_string(b_31);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, e_31)), term_d_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_f_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_17, e_31))), (ATerm) ATmakeAppl(sym_FloatConst_1, p_32))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm y_54 (ATerm r_32, ATerm x_32, ATerm d_33, ATerm t)
{
  ATerm e_35 = NULL;
  t = SSL_int_to_string(r_32);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, x_32)), term_l_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_17, x_32))), (ATerm) ATmakeAppl(sym_IntConst_1, e_35))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm z_54 (ATerm w_38, ATerm d_39, ATerm k_39, ATerm x_39, ATerm t)
{
  t = SSLgetAnnotations(w_38);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, d_39), term_t_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, d_39), k_39)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, k_39))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_39), term_y_11, k_39)));
  return(t);
}
static ATerm a_55 (ATerm j_40, ATerm k_40, ATerm r_40, ATerm s_40, ATerm t)
{
  t = SSLgetAnnotations(j_40);
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
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_40), term_t_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, k_40), r_40)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, r_40))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_40), term_y_11, r_40)));
  return(t);
}
static ATerm d_55 (ATerm f_41, ATerm g_41, ATerm k_41, ATerm l_41, ATerm t)
{
  t = SSLgetAnnotations(f_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(y_17) != AT_LIST) || !(ATisEmpty(y_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_41), k_41), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, k_41))))));
  return(t);
}
static ATerm e_55 (ATerm p_41, ATerm t_41, ATerm u_41, ATerm v_41, ATerm t)
{
  t = SSLgetAnnotations(p_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) z_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_18 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_18) != AT_LIST) || !(ATisEmpty(a_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, t_41), term_y_11, u_41));
  return(t);
}
static ATerm h_55 (ATerm b_42, ATerm c_42, ATerm d_42, ATerm e_42, ATerm h_42, ATerm i_42, ATerm j_42, ATerm k_42, ATerm n_42, ATerm t)
{
  ATerm l_43 = NULL,o_43 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  t = c_42;
  {
    ATerm b_18 = t;
    if((PushChoice() == 0))
      {
        ATerm q_43 = NULL,v_43 = NULL,z_43 = NULL;
        q_43 = t;
        if(match_cons(t, sym_Fun_2))
          {
            v_43 = ATgetArgument(t, 0);
            z_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_43;
        if(match_string(t, "Nil"))
          {
            t = z_43;
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
              _fail(t);
            t = q_43;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = z_43;
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 2)))
              _fail(t);
            t = q_43;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, h_42, term_z_13);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm a_44 = NULL,c_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm c_18 = ATgetArgument(t, 0);
          if(match_cons(c_18, sym_Var_1))
            {
              a_44 = ATgetArgument(c_18, 0);
            }
          else
            _fail(t);
          c_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_44);
      f_44 = t;
      t = term_a_14;
      h_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_44, term_a_14);
      t = r_10(c_44, h_44, t);
      g_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, a_44), term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, f_44)), (ATerm) ATmakeAppl(sym_Id_1, b_42))))), g_44);
      return(t);
    }
    t = thread_map_1_0(v_1, t);
  }
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      {
        ATerm d_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_42, e_42);
  d_27 = t;
  t = term_l_14;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym__2, d_42, e_42));
  t = d_10(e_27, d_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_18) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_43, (ATerm) ATinsert(ATempty, i_42));
  t = conc_0_0(t);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, c_27)), (ATerm) ATmakeAppl(sym_Id_1, b_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, o_43), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, b_42), j_42, k_42))));
  return(t);
}
static ATerm j_55 (ATerm i_44, ATerm k_44, ATerm m_44, ATerm n_44, ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_real_to_string(k_44);
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, d_45)), (ATerm) ATmakeAppl(sym_Id_1, i_44))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_44)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, i_44), n_44, o_44))));
  return(t);
}
static ATerm k_55 (ATerm f_45, ATerm g_45, ATerm h_45, ATerm i_45, ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm u_45 = NULL;
  t = SSL_int_to_string(g_45);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, u_45)), (ATerm) ATmakeAppl(sym_Id_1, f_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_45), i_45, j_45))));
  return(t);
}
static ATerm l_55 (ATerm w_45, ATerm x_45, ATerm y_45, ATerm t)
{
  t = x_45;
  {
    ATerm j_18 = t;
    if((PushChoice() == 0))
      {
        ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,h_8 = NULL;
        f_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_46);
        d_46 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_46);
        h_8 = t;
        t = SSLsetAnnotations(h_8, d_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_45)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(z_30, a_31, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm m_48 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if(match_cons(l_18, sym_SVar_1))
        {
          m_48 = ATgetArgument(l_18, 0);
        }
      else
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
          _fail(t);
      }
      {
        ATerm n_18 = ATgetArgument(t, 2);
        if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, m_48);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = topdown_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm o_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(c_2, t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
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
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm k_49 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      if(match_cons(x_18, sym_SVar_1))
        {
          k_49 = ATgetArgument(x_18, 0);
        }
      else
        _fail(t);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) != AT_LIST) || !(ATisEmpty(y_18))))
          _fail(t);
      }
      {
        ATerm z_18 = ATgetArgument(t, 2);
        if(((ATgetType(z_18) != AT_LIST) || !(ATisEmpty(z_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, k_49);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = topdown_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
          }
      }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_51), term_f_11), term_g_19);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,o_51 = NULL;
  l_51 = t;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      o_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_51;
  if(match_cons(t, sym_Var_1))
    {
      k_51 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_51;
            t = t_9(m_51, k_51, o_51, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = l_51;
            t = s_9(m_51, o_51, t);
          }
      }
    }
  else
    {
      t = l_51;
      t = s_9(m_51, o_51, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_27 = ATgetFirst((ATermList) t);
      l_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_27;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_27), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(l_27), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_27), term_g_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_27), term_h_14), term_c_14);
            }
        }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_27 = ATgetFirst((ATermList) t);
      z_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_27;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_27), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_27), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_27), term_g_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_27), term_h_14), term_c_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,x_46 = NULL,y_46 = NULL,b_47 = NULL,c_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_47 = ATgetArgument(t, 0);
      g_47 = ATgetArgument(t, 1);
      {
        ATerm r_47 = NULL,s_47 = NULL;
        t = j_47;
        t = map_1_0(SDefToDeclaration_0_0, t);
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_47, j_47);
        t = conc_0_0(t);
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym_Compound_2, s_47, (ATerm) ATinsert(ATempty, g_47));
      }
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          j_47 = ATgetArgument(t, 0);
          {
            ATerm w_47 = NULL;
            t = i_47;
            t = new_0_0(t);
            w_47 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_47), term_f_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_Id_1, w_47)))), term_k_19), j_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, w_47), term_y_11, term_d_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              j_47 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, j_47);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  j_47 = ATgetArgument(t, 0);
                  g_47 = ATgetArgument(t, 1);
                  b_47 = ATgetArgument(t, 2);
                  {
                    ATerm e_48 = NULL,i_48 = NULL,l_48 = NULL;
                    t = j_47;
                    if(match_cons(t, sym_SVar_1))
                      {
                        h_47 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = g_47;
                    t = map_1_0(x_1, t);
                    e_48 = t;
                    t = b_47;
                    t = map_1_0(y_1, t);
                    i_48 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_11)), i_48), e_48);
                    t = concat_0_0(t);
                    l_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_47), l_48)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      j_47 = ATgetArgument(t, 0);
                      g_47 = ATgetArgument(t, 1);
                      b_47 = ATgetArgument(t, 2);
                      {
                        ATerm e_49 = NULL,f_49 = NULL,i_49 = NULL;
                        t = g_47;
                        t = map_1_0(d_2, t);
                        e_49 = t;
                        t = b_47;
                        t = map_1_0(e_2, t);
                        f_49 = t;
                        t = (ATerm) ATmakeAppl(sym__2, e_49, f_49);
                        t = conc_0_0(t);
                        i_49 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, j_47), i_49)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          j_47 = ATgetArgument(t, 0);
                          {
                            ATerm w_49 = NULL;
                            t = i_47;
                            t = new_0_0(t);
                            w_49 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_49), term_f_11), term_l_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11)))), term_t_19), j_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_Id_1, w_49))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              j_47 = ATgetArgument(t, 0);
                              g_47 = ATgetArgument(t, 1);
                              {
                                ATerm a_50 = NULL;
                                t = i_47;
                                t = new_0_0(t);
                                a_50 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_50), term_f_11), term_l_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_x_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_Id_1, a_50))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  j_47 = ATgetArgument(t, 0);
                                  g_47 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, j_47, g_47);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      j_47 = ATgetArgument(t, 0);
                                      g_47 = ATgetArgument(t, 1);
                                      b_47 = ATgetArgument(t, 2);
                                      {
                                        ATerm l_50 = NULL,o_50 = NULL;
                                        t = i_47;
                                        t = new_0_0(t);
                                        l_50 = t;
                                        t = new_0_0(t);
                                        o_50 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_50), term_f_11), term_c_20)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_50), term_f_11), term_l_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_p_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_50))))), term_k_19), j_47)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_47), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, (ATerm) ATmakeAppl(sym_Id_1, l_50))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          j_47 = ATgetArgument(t, 0);
                                          g_47 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_47, term_f_20, g_47);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              j_47 = ATgetArgument(t, 0);
                                              g_47 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_47, g_47);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  j_47 = ATgetArgument(t, 0);
                                                  g_47 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_47), j_47));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      j_47 = ATgetArgument(t, 0);
                                                      g_47 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm b_51 = NULL;
                                                        t = j_47;
                                                        t = map_1_0(h_2, t);
                                                        b_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, b_51)), (ATerm) ATinsert(ATempty, g_47));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_g_20;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  j_47 = ATgetArgument(t, 0);
                                                                  g_47 = ATgetArgument(t, 1);
                                                                  t = j_47;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      h_47 = ATgetArgument(t, 0);
                                                                      k_46 = ATgetArgument(t, 1);
                                                                      t = k_46;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          g_46 = ATgetFirst((ATermList) t);
                                                                          h_46 = (ATerm) ATgetNext((ATermList) t);
                                                                          t = h_46;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              i_46 = ATgetFirst((ATermList) t);
                                                                              j_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = j_46;
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  t = h_47;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm h_20 = t;
                                                                                      int i_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm j_51 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_46, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, g_47)))))), (ATerm) ATmakeAppl(sym__2, g_46, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, g_47)))));
                                                                                          t = map_1_0(j_2, t);
                                                                                          j_51 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, g_47)), term_s_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, g_47)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, j_51), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                          LocalPopChoice(i_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_20;
                                                                                          t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_47;
                                                                                  t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_47;
                                                                              t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = h_47;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm v_20 = t;
                                                                                  int w_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, g_47)), term_s_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, g_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                      LocalPopChoice(w_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_20;
                                                                                      t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_47;
                                                                              t = u_54(j_47, h_47, k_46, g_47, i_47, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          h_47 = ATgetArgument(t, 0);
                                                                          t = x_54(h_47, g_47, i_47, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              h_47 = ATgetArgument(t, 0);
                                                                              t = y_54(h_47, g_47, i_47, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  h_47 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm b_52 = NULL,q_27 = NULL,r_27 = NULL,t_27 = NULL,g_27 = NULL;
                                                                                    t = SSL_explode_string(h_47);
                                                                                    t = escape_chars_1_0(k_2, t);
                                                                                    g_27 = t;
                                                                                    t = SSL_implode_string(g_27);
                                                                                    r_27 = t;
                                                                                    t = SSL_explode_string(r_27);
                                                                                    t_27 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_27), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                                                                                    t = conc_0_0(t);
                                                                                    q_27 = t;
                                                                                    t = SSL_implode_string(q_27);
                                                                                    b_52 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_y_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_c_21, g_47))), (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_v_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, b_52))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SeqVar_1))
                                                                                    {
                                                                                      h_47 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_y_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_47)), (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, (ATerm) ATmakeAppl(sym_Id_1, h_47)))))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_t_14), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_y_11, term_o_16)))))));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          h_47 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm f_21 = t;
                                                                                            int h_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = z_54(j_47, h_47, g_47, i_47, t);
                                                                                                LocalPopChoice(h_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_21;
                                                                                                {
                                                                                                  ATerm i_21 = t;
                                                                                                  int j_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = a_55(j_47, h_47, g_47, i_47, t);
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
                                                                                                            t = d_55(j_47, h_47, g_47, i_47, t);
                                                                                                            LocalPopChoice(l_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_21;
                                                                                                            t = e_55(j_47, h_47, g_47, i_47, t);
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
                                                                                              h_47 = ATgetArgument(t, 0);
                                                                                              k_46 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, k_46, g_47)), (ATerm) ATmakeAppl(sym_Match_2, h_47, g_47)));
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
                                                                                                  t = term_g_20;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = m_21;
                                                                                                  if(!(match_cons(t, sym_Wld_0)))
                                                                                                    _fail(t);
                                                                                                  t = term_g_20;
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
                                                                      j_47 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, j_47, term_d_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          j_47 = ATgetArgument(t, 0);
                                                                          g_47 = ATgetArgument(t, 1);
                                                                          b_47 = ATgetArgument(t, 2);
                                                                          t = j_47;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              h_47 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = g_47;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_47 = ATgetFirst((ATermList) t);
                                                                              y_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = f_47;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  s_46 = ATgetArgument(t, 0);
                                                                                  u_46 = ATgetArgument(t, 1);
                                                                                  x_46 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = s_46;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  t_46 = ATgetArgument(t, 0);
                                                                                  r_46 = ATgetArgument(t, 1);
                                                                                  t = u_46;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      l_46 = ATgetFirst((ATermList) t);
                                                                                      n_46 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = n_46;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          o_46 = ATgetFirst((ATermList) t);
                                                                                          q_46 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = q_46;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = o_46;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  p_46 = ATgetArgument(t, 0);
                                                                                                  t = l_46;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      m_46 = ATgetArgument(t, 0);
                                                                                                      t = r_46;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = t_46;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm p_21 = t;
                                                                                                              int q_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_47))), term_s_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_47))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_46), term_y_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, (ATerm) ATmakeAppl(sym_Id_1, h_47)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_46), term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_20, (ATerm) ATmakeAppl(sym_Id_1, h_47)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, h_47), y_46, b_47))));
                                                                                                                  LocalPopChoice(q_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_21;
                                                                                                                  t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = t_46;
                                                                                                          t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_46;
                                                                                                      t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_46;
                                                                                                  t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = t_46;
                                                                                              t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_46;
                                                                                          t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = r_46;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = t_46;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm r_21 = t;
                                                                                                  int s_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_47))), term_s_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_47)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, x_46), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, h_47), y_46, b_47))));
                                                                                                      LocalPopChoice(s_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_21;
                                                                                                      t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = t_46;
                                                                                              t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_46;
                                                                                          t = h_55(h_47, s_46, t_46, r_46, u_46, x_46, y_46, b_47, i_47, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      t_46 = ATgetArgument(t, 0);
                                                                                      t = j_55(h_47, t_46, x_46, y_46, b_47, i_47, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          t_46 = ATgetArgument(t, 0);
                                                                                          t = k_55(h_47, t_46, x_46, y_46, b_47, i_47, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm t_53 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL,u_27 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              t_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(t_46);
                                                                                          t = escape_chars_1_0(l_2, t);
                                                                                          u_27 = t;
                                                                                          t = SSL_implode_string(u_27);
                                                                                          f_28 = t;
                                                                                          t = SSL_explode_string(f_28);
                                                                                          h_28 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_28), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
                                                                                          t = conc_0_0(t);
                                                                                          e_28 = t;
                                                                                          t = SSL_implode_string(e_28);
                                                                                          t_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, t_53))), (ATerm) ATmakeAppl(sym_Id_1, h_47))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, h_47), y_46, b_47))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = b_47;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              j_47 = ATgetArgument(t, 0);
                                                                              g_47 = ATgetArgument(t, 1);
                                                                              b_47 = ATgetArgument(t, 2);
                                                                              c_47 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, j_47), (ATerm) ATmakeAppl(sym_Case_3, g_47, b_47, c_47));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  j_47 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, j_47));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      j_47 = ATgetArgument(t, 0);
                                                                                      g_47 = ATgetArgument(t, 1);
                                                                                      t = j_47;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          h_47 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = g_47;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          f_47 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm v_21 = t;
                                                                                            int w_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_t_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, h_47), (ATerm) ATmakeAppl(sym_Id_1, f_47))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_47)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_y_11, (ATerm) ATmakeAppl(sym_Id_1, f_47))));
                                                                                                LocalPopChoice(w_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_21;
                                                                                                t = l_55(h_47, g_47, i_47, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_55(h_47, g_47, i_47, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          j_47 = ATgetArgument(t, 0);
                                                                                          t = j_47;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              h_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_47), term_y_11, term_d_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm t_54 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              j_47 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = j_47;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          t_54 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_y_11, t_54));
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
ATerm escape_chars_1_0 (ATerm v_154 (ATerm), ATerm t)
{
  static ATerm b_57 (ATerm t);
  static ATerm b_57 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_55 = NULL,t_55 = NULL,z_55 = NULL,e_56 = NULL,f_56 = NULL,j_8 = NULL;
        t = v_154(t);
        f_56 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_55 = ATgetFirst((ATermList) t);
            z_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_56);
        s_55 = t;
        t = z_55;
        t = Cons_2_0(_id, b_57, t);
        e_56 = t;
        t = (ATerm) ATinsert(CheckATermList(e_56), t_55);
        j_8 = t;
        t = SSLsetAnnotations(j_8, s_55);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm x_56 = NULL,y_56 = NULL,a_57 = NULL;
          a_57 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_56 = ATgetFirst((ATermList) t);
              y_56 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm l_28 = NULL,o_28 = NULL,k_8 = NULL;
                t = SSLgetAnnotations(a_57);
                l_28 = t;
                t = y_56;
                t = b_57(t);
                o_28 = t;
                t = (ATerm) ATinsert(CheckATermList(o_28), x_56);
                k_8 = t;
                t = SSLsetAnnotations(k_8, l_28);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_57;
            }
        }
      }
    return(t);
  }
  t = b_57(t);
  return(t);
}
static ATerm z_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,l_57 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, x_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      i_57 = ATgetArgument(t, 0);
      g_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_1, g_57);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      l_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_57), i_57), h_57);
  return(t);
}
ATerm thread_map_1_0 (ATerm p_151 (ATerm), ATerm t)
{
  static ATerm d_58 (ATerm t);
  static ATerm d_58 (ATerm t)
  {
    ATerm q_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,w_57 = NULL;
    t_57 = t;
    if(match_cons(t, sym__2))
      {
        u_57 = ATgetArgument(t, 0);
        w_57 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = u_57;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_57 = ATgetFirst((ATermList) t);
        s_57 = (ATerm) ATgetNext((ATermList) t);
        t = t_57;
        t = z_9(p_151, d_58, q_57, s_57, w_57, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_57);
      }
    return(t);
  }
  t = d_58(t);
  return(t);
}
static ATerm s_62 (ATerm r_59, ATerm s_59, ATerm t_59, ATerm u_59, ATerm v_59, ATerm w_59, ATerm t)
{
  ATerm c_60 = NULL,e_60 = NULL,f_60 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t = r_59;
  {
    ATerm z_21 = t;
    if((PushChoice() == 0))
      {
        ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,l_60 = NULL,n_60 = NULL;
        h_60 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_60 = ATgetArgument(t, 0);
            j_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_60;
        if(match_string(t, "Nil"))
          {
            t = j_60;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_60;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = j_60;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_22 = ATgetFirst((ATermList) t);
                l_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_60;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_22 = ATgetFirst((ATermList) t);
                n_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_60;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_60;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, t_59, term_z_13);
  t = thread_map_1_0(m_2, t);
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      {
        ATerm c_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_59;
  t = foldr_3_0(n_2, o_2, p_2, t);
  f_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_59, f_60);
  v_28 = t;
  t = term_l_14;
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym__2, s_59, f_60));
  t = d_10(w_28, v_28, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_60, (ATerm) ATinsert(ATempty, u_59));
  t = conc_0_0(t);
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, u_28)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, e_60), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_59)));
  return(t);
}
static ATerm t_62 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm c_61 = NULL;
  t = SSL_real_to_string(v_60);
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, c_61)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_60)));
  return(t);
}
static ATerm u_62 (ATerm d_61, ATerm e_61, ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm k_61 = NULL;
  t = SSL_int_to_string(d_61);
  k_61 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, k_61)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_61)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_61)));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(match_cons(e_22, sym_Var_1))
        {
          o_60 = ATgetArgument(e_22, 0);
        }
      else
        _fail(t);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(p_60);
  q_60 = t;
  t = term_a_14;
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_60, term_a_14);
  t = r_10(p_60, s_60, t);
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_60), term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, q_60)), term_d_11)))), r_60);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  if(match_cons(t, sym__2))
    {
      t_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(t_60, u_60, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm t_29 = NULL,w_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_29 = ATgetFirst((ATermList) t);
      w_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(w_29), term_d_14), term_c_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_29), term_c_14), term_c_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_29), term_g_14), term_c_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_29), term_h_14), term_c_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  s_61 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      t_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
      x_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_61;
  if(match_cons(t, sym_Match_1))
    {
      u_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_61;
  if(match_cons(t, sym_Op_2))
    {
      v_61 = ATgetArgument(t, 0);
      r_61 = ATgetArgument(t, 1);
      t = r_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_61 = ATgetFirst((ATermList) t);
          n_61 = (ATerm) ATgetNext((ATermList) t);
          t = n_61;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_61 = ATgetFirst((ATermList) t);
              q_61 = (ATerm) ATgetNext((ATermList) t);
              t = q_61;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = o_61;
                  if(match_cons(t, sym_Var_1))
                    {
                      p_61 = ATgetArgument(t, 0);
                      t = l_61;
                      if(match_cons(t, sym_Var_1))
                        {
                          m_61 = ATgetArgument(t, 0);
                          t = v_61;
                          if(match_string(t, "Cons"))
                            {
                              ATerm f_22 = t;
                              int g_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, term_d_11)), term_s_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, term_d_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_61), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, p_61), term_y_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_i_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_20, (ATerm) ATinsert(ATempty, term_h_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_61), term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATinsert(ATempty, term_h_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_61)));
                                  LocalPopChoice(g_22);
                                }
                              else
                                {
                                  t = f_22;
                                  t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                                }
                            }
                          else
                            {
                              t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                            }
                        }
                      else
                        {
                          t = v_61;
                          t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                        }
                    }
                  else
                    {
                      t = v_61;
                      t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                    }
                }
              else
                {
                  t = v_61;
                  t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                }
            }
          else
            {
              t = v_61;
              t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = v_61;
              if(match_string(t, "Nil"))
                {
                  ATerm i_22 = t;
                  int j_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_17, (ATerm) ATinsert(ATempty, term_d_11)), term_s_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_20, (ATerm) ATinsert(ATempty, term_d_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_61)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_61)));
                      LocalPopChoice(j_22);
                    }
                  else
                    {
                      t = i_22;
                      t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                    }
                }
              else
                {
                  t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
                }
            }
          else
            {
              t = v_61;
              t = s_62(u_61, v_61, r_61, w_61, x_61, s_61, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          v_61 = ATgetArgument(t, 0);
          t = t_62(v_61, w_61, x_61, s_61, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              v_61 = ATgetArgument(t, 0);
              t = u_62(v_61, w_61, x_61, s_61, t);
            }
          else
            {
              ATerm j_62 = NULL,k_30 = NULL,l_30 = NULL,s_30 = NULL,d_29 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  v_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(v_61);
              t = escape_chars_1_0(q_2, t);
              d_29 = t;
              t = SSL_implode_string(d_29);
              l_30 = t;
              t = SSL_explode_string(l_30);
              s_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_30), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
              t = conc_0_0(t);
              k_30 = t;
              t = SSL_implode_string(k_30);
              j_62 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, j_62))), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_61)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_61)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_137 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t);
  static ATerm r_2 (ATerm t)
  {
    t = topdown_1_0(q_137, t);
    return(t);
  }
  t = q_137(t);
  t = SRTS_all(r_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL;
  g_63 = t;
  if(match_cons(t, sym_SeqVar_1))
    {
      f_63 = ATgetArgument(t, 0);
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_30 = NULL,d_31 = NULL,r_8 = NULL;
            t = SSLgetAnnotations(g_63);
            w_30 = t;
            t = f_63;
            if(match_cons(t, sym_Var_1))
              {
                d_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SeqVar_1, d_31);
            r_8 = t;
            t = SSLsetAnnotations(r_8, w_30);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = g_63;
          }
      }
    }
  else
    {
      t = g_63;
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
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
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
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
  e_64 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
      h_64 = ATgetArgument(t, 2);
      i_64 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
        t = f_64;
        t = is_local_function_0_0(t);
        t = g_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        p_64 = t;
        t = h_64;
        t = map_1_0(TranslateVarDec_0_0, t);
        q_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_64, q_64);
        t = conc_0_0(t);
        r_64 = t;
        t = i_64;
        t = translate_body_0_0(t);
        s_64 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_t_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, r_64, (ATerm) ATinsert(ATempty, term_p_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), term_k_19), s_64)));
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
          t = f_64;
          {
            ATerm u_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_22;
              }
          }
          t = g_64;
          t = map_1_0(TranslateVarDec_0_0, t);
          x_31 = t;
          t = h_64;
          t = map_1_0(TranslateVarDec_0_0, t);
          y_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
          t = conc_0_0(t);
          z_31 = t;
          t = i_64;
          t = translate_body_0_0(t);
          a_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_x_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, z_31, (ATerm) ATinsert(ATempty, term_p_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), term_k_19), a_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_152 (ATerm), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_65;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_65 = ATgetFirst((ATermList) t);
          h_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = NULL,m_32 = NULL,n_32 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(f_65);
            j_32 = t;
            t = g_65;
            t = c_152(t);
            m_32 = t;
            t = h_65;
            t = filter_1_0(c_152, t);
            n_32 = t;
            t = (ATerm) ATinsert(CheckATermList(n_32), m_32);
            u_8 = t;
            t = SSLsetAnnotations(u_8, j_32);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = h_65;
            t = filter_1_0(c_152, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm t_65 = NULL;
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          t_65 = ATgetArgument(t, 0);
          {
            ATerm z_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_22);
      {
        ATerm v_65 = NULL;
        t = t_65;
        t = map_1_0(TranslateType_0_0, t);
        v_65 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_x_9, (ATerm) ATmakeAppl(sym_ParamList_1, v_65));
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
      t = term_x_9;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_66 = ATgetArgument(t, 0);
      b_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_66;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            c_66 = ATgetArgument(t, 0);
            {
              ATerm d_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        {
          ATerm f_66 = NULL;
          t = c_66;
          t = map_1_0(TranslateType_0_0, t);
          f_66 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_x_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_66), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, f_66)))));
        }
      }
    else
      {
        t = b_23;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm e_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_x_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_66), term_f_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm i_23 = t;
  if((PushChoice() == 0))
    {
      ATerm h_66 = NULL,i_66 = NULL;
      if(match_cons(t, sym__2))
        {
          h_66 = ATgetArgument(t, 0);
          i_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, h_66, i_66);
      {
        ATerm j_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(h_66, i_66);
            LocalPopChoice(l_23);
          }
        else
          {
            t = j_23;
            t = SSL_gtr(h_66, i_66);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, h_66, i_66);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_23;
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
  ATerm p_66 = NULL;
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_23, p_66);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, p_66, term_r_23);
  t = leq_0_0(t);
  t = p_66;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,w_8 = NULL;
  j_66 = t;
  t = SSL_explode_string(j_66);
  o_66 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_66 = ATgetFirst((ATermList) t);
      m_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_66);
  k_66 = t;
  t = l_66;
  {
    ATerm s_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_23, l_66);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_66, term_z_23);
        t = leq_0_0(t);
        t = l_66;
        LocalPopChoice(x_23);
      }
    else
      {
        t = s_23;
        t = (ATerm) ATmakeAppl(sym__2, term_a_24, l_66);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_66, term_b_24);
        t = leq_0_0(t);
        t = l_66;
      }
  }
  t = m_66;
  t = Cons_2_0(k_3, l_3, t);
  n_66 = t;
  t = (ATerm) ATinsert(CheckATermList(n_66), l_66);
  w_8 = t;
  t = SSLsetAnnotations(w_8, k_66);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  c_67 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      d_67 = ATgetArgument(t, 0);
      e_67 = ATgetArgument(t, 1);
      f_67 = ATgetArgument(t, 2);
      {
        ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
        t = e_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        k_67 = t;
        t = f_67;
        t = map_1_0(TranslateVarDec_0_0, t);
        l_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_67, l_67);
        t = conc_0_0(t);
        m_67 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, m_67, (ATerm) ATinsert(ATempty, term_p_11)))))));
      }
    }
  else
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              d_67 = ATgetArgument(t, 0);
              e_67 = ATgetArgument(t, 1);
              f_67 = ATgetArgument(t, 2);
              {
                ATerm h_24 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(d_24);
          {
            ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
            t = e_67;
            t = map_1_0(TranslateVarDec_0_0, t);
            q_67 = t;
            t = f_67;
            t = map_1_0(TranslateVarDec_0_0, t);
            r_67 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_67, r_67);
            t = conc_0_0(t);
            s_67 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, s_67, (ATerm) ATinsert(ATempty, term_p_11)))))));
          }
        }
      else
        {
          t = c_24;
          if(match_cons(t, sym_SDefT_4))
            {
              d_67 = ATgetArgument(t, 0);
              e_67 = ATgetArgument(t, 1);
              f_67 = ATgetArgument(t, 2);
              {
                ATerm i_24 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          {
            ATerm j_24 = t;
            int k_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
                t = d_67;
                t = is_local_function_0_0(t);
                t = e_67;
                t = map_1_0(TranslateVarDec_0_0, t);
                w_67 = t;
                t = f_67;
                t = map_1_0(TranslateVarDec_0_0, t);
                x_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_67, x_67);
                t = conc_0_0(t);
                y_67 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, y_67, (ATerm) ATinsert(ATempty, term_p_11)))))));
                LocalPopChoice(k_24);
              }
            else
              {
                t = j_24;
                {
                  ATerm c_33 = NULL,e_33 = NULL,f_33 = NULL;
                  t = d_67;
                  {
                    ATerm l_24 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_local_function_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_24;
                      }
                  }
                  t = e_67;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  c_33 = t;
                  t = f_67;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  e_33 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
                  t = conc_0_0(t);
                  f_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_67), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, f_33, (ATerm) ATinsert(ATempty, term_p_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(y_68, z_68, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm e_10 (ATerm o_40, ATerm m_40, ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,g_68 = NULL,i_68 = NULL,j_68 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,m_68 = NULL;
  t = m_40;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            m_68 = ATgetArgument(t, 0);
            {
              ATerm o_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_24);
        t = m_68;
        t = foldr_3_0(n_3, o_3, p_3, t);
      }
    else
      {
        t = m_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm p_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_z_13;
      }
  }
  e_68 = t;
  t = SSL_int_to_string(e_68);
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, e_68);
  p_33 = t;
  t = term_l_14;
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, (ATerm) ATmakeAppl(sym__2, o_40, e_68));
  t = d_10(q_33, p_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_24) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(o_40);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_68), term_d_14), (ATerm) ATinsert(ATempty, term_d_14));
  t = conc_0_0(t);
  j_68 = t;
  t = SSL_implode_string(j_68);
  g_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, o_33))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_33), term_y_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), (ATerm) ATmakeAppl(sym_IntConst_1, d_68)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, g_68)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_69 = ATgetFirst((ATermList) t);
      e_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_69;
  if(match_int(t, 92))
    {
      ATerm g_69 = NULL;
      t = e_69;
      t = t_0(t);
      g_69 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_69), term_v_24), term_w_24), term_v_24);
    }
  else
    {
      if(match_int(t, 34))
        {
          ATerm i_69 = NULL;
          t = e_69;
          t = t_0(t);
          i_69 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(i_69), term_v_24), term_x_24), term_v_24);
        }
      else
        {
          if(match_int(t, 95))
            {
              ATerm k_69 = NULL;
              t = e_69;
              t = t_0(t);
              k_69 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_69), term_v_24), term_v_24);
            }
          else
            {
              if(match_int(t, 45))
                {
                  ATerm m_69 = NULL;
                  t = e_69;
                  t = t_0(t);
                  m_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_69), term_v_24);
                }
              else
                {
                  ATerm o_69 = NULL;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
                    _fail(t);
                  t = e_69;
                  t = t_0(t);
                  o_69 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_69), term_v_24), term_y_24), term_v_24);
                }
            }
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm s_154 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  s_69 = t;
  t = SSL_explode_string(s_69);
  {
    static ATerm e_70 (ATerm t);
    static ATerm e_70 (ATerm t)
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_154(e_70, t);
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          {
            ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
            d_70 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_70 = ATgetFirst((ATermList) t);
                c_70 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm v_33 = NULL,y_33 = NULL,d_9 = NULL;
                  t = SSLgetAnnotations(d_70);
                  v_33 = t;
                  t = c_70;
                  t = e_70(t);
                  y_33 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_33), b_70);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, v_33);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_70;
              }
          }
        }
      return(t);
    }
    t = e_70(t);
  }
  r_69 = t;
  t = SSL_implode_string(r_69);
  return(t);
}
ATerm foldr_3_0 (ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm c_151 (ATerm), ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_70;
      t = a_151(t);
    }
  else
    {
      ATerm m_70 = NULL,n_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_70 = ATgetFirst((ATermList) t);
          j_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_70;
      t = c_151(t);
      m_70 = t;
      t = j_70;
      t = foldr_3_0(a_151, b_151, c_151, t);
      n_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_70, n_70);
      t = b_151(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  if(match_cons(t, sym__2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(a_71, b_71, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_l_14;
  return(t);
}
static ATerm f_10 (ATerm b_40, ATerm a_40, ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,y_70 = NULL;
  t = a_40;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            y_70 = ATgetArgument(t, 0);
            {
              ATerm d_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_25);
        t = y_70;
        t = foldr_3_0(q_3, r_3, s_3, t);
      }
    else
      {
        t = b_25;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm e_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_z_13;
      }
  }
  p_70 = t;
  t = b_40;
  t = escape_1_0(Cify_1_0, t);
  r_70 = t;
  t = SSL_int_to_string(p_70);
  s_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_70), term_g_25), r_70), term_f_25);
  v_70 = t;
  t = SSL_concat_strings(v_70);
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, p_70);
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_25, q_70);
  u_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_40, p_70), (ATerm) ATmakeAppl(sym_Defined_2, term_h_25, q_70));
  t = h_10(u_3, t_70, u_70, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, q_70), term_f_11)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
  f_71 = t;
  t = term_l_25;
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_25, f_71);
  t = o_10(g_71, f_71, t);
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, e_71);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_m_25;
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_71 = NULL,d_71 = NULL;
        t = term_p_25;
        c_71 = t;
        t = term_m_25;
        d_71 = t;
        t = term_q_25;
        t = w_10(c_71, d_71, t);
        t = map_1_0(v_3, t);
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_71 = ATgetArgument(t, 0);
      x_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(w_71, x_71, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      y_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(y_71, z_71, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm r_25 = ATgetArgument(t, 0);
      ATerm s_25 = ATgetArgument(t, 1);
      ATerm t_25 = ATgetArgument(t, 2);
      ATerm u_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm c_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      c_72 = ATgetArgument(t, 1);
      {
        ATerm w_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_t_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_72), term_f_11)));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
  if(match_cons(t, sym__3))
    {
      e_72 = ATgetArgument(t, 0);
      f_72 = ATgetArgument(t, 1);
      g_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_9(e_72, f_72, g_72, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  r_72 = t;
  if(match_cons(t, sym_Conc_2))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, p_72, q_72);
            t = conc_0_0(t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = r_72;
          }
      }
    }
  else
    {
      t = r_72;
    }
  return(t);
}
static ATerm g_10 (ATerm v_40, ATerm y_40, ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  s_71 = t;
  t = GenerateIncludes_0_0(t);
  k_71 = t;
  t = v_40;
  t = filter_1_0(w_3, t);
  l_71 = t;
  t = v_40;
  t = filter_1_0(x_3, t);
  t = concat_0_0(t);
  m_71 = t;
  t = y_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  n_71 = t;
  t = y_40;
  t = filter_1_0(y_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  o_71 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_72 = NULL,d_34 = NULL,e_34 = NULL;
        t = (ATerm) ATempty;
        d_34 = t;
        t = term_x_12;
        e_34 = t;
        t = term_c_13;
        t = d_10(e_34, d_34, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_26) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            a_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_72;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
  }
  v_71 = t;
  t = map_1_0(z_3, t);
  t_71 = t;
  t = v_71;
  t = map_1_0(a_4, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, b_4, t);
  u_71 = t;
  t = s_71;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_72 = NULL,j_72 = NULL;
        t = term_p_25;
        i_72 = t;
        t = term_h_26;
        j_72 = t;
        t = term_j_26;
        t = w_10(i_72, j_72, t);
        t = s_71;
        LocalPopChoice(g_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = f_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_t_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_26)))), term_g_20));
      }
  }
  p_71 = t;
  t = s_71;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_72 = NULL,l_72 = NULL;
        t = term_p_25;
        k_72 = t;
        t = term_h_26;
        l_72 = t;
        t = term_j_26;
        t = w_10(k_72, l_72, t);
        t = s_71;
        LocalPopChoice(b_27);
        t = (ATerm) ATinsert(ATempty, term_h_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATinsert(ATempty, term_j_27);
      }
  }
  q_71 = t;
  t = s_71;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_72 = NULL,n_72 = NULL;
        t = term_p_25;
        m_72 = t;
        t = term_h_26;
        n_72 = t;
        t = term_j_26;
        t = w_10(m_72, n_72, t);
        t = s_71;
        LocalPopChoice(n_27);
        t = (ATerm) ATempty;
      }
    else
      {
        t = m_27;
        {
          ATerm o_72 = NULL;
          t = MainDef_0_0(t);
          o_72 = t;
          t = (ATerm) ATinsert(ATempty, o_72);
        }
      }
  }
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, k_71, p_71), l_71), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_27, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, m_71)))), t_71), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_27, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_27, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_w_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, u_71)))), q_71), n_71), r_71), o_71));
  t = bottomup_1_0(c_4, t);
  return(t);
}
static ATerm h_10 (ATerm n_171 (ATerm), ATerm q_88, ATerm o_88, ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  z_72 = t;
  t = n_171(t);
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_72, q_88, o_88);
  t = x_10(w_72, q_88, o_88, t);
  {
    ATerm x_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_73 = NULL;
        t = term_b_28;
        e_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_72, term_b_28);
        t = w_10(w_72, e_73, t);
        {
          ATerm c_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_28;
            }
        }
        LocalPopChoice(a_28);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_72 = ATgetFirst((ATermList) t);
      y_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_72, term_b_28, (ATerm) ATinsert(CheckATermList(y_72), (ATerm) ATinsert(CheckATermList(x_72), q_88)));
  t = lookup_table_0_1(w_72, t);
  d_73 = t;
  t = term_b_28;
  a_73 = t;
  t = (ATerm) ATinsert(CheckATermList(y_72), (ATerm) ATinsert(CheckATermList(x_72), q_88));
  b_73 = t;
  t = d_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(a_73, b_73, c_73, t);
  t = z_72;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  t = term_g_28;
  g_73 = t;
  t = term_j_28;
  h_73 = t;
  t = term_k_28;
  t = h_10(d_4, g_73, h_73, t);
  t = f_73;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
        {
          ATerm n_28 = ATgetFirst((ATermList) m_28);
          if(match_cons(n_28, sym_Signature_1))
            {
              ATerm q_28 = ATgetArgument(n_28, 0);
              if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
                {
                  ATerm r_28 = ATgetFirst((ATermList) q_28);
                  if(match_cons(r_28, sym_Constructors_1))
                    {
                      j_73 = ATgetArgument(r_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_28 = (ATerm) ATgetNext((ATermList) q_28);
                    if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm p_28 = (ATerm) ATgetNext((ATermList) m_28);
            if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
              {
                ATerm t_28 = ATgetFirst((ATermList) p_28);
                if(match_cons(t_28, sym_Strategies_1))
                  {
                    k_73 = ATgetArgument(t_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm z_28 = (ATerm) ATgetNext((ATermList) p_28);
                  if(((ATgetType(z_28) != AT_LIST) || !(ATisEmpty(z_28))))
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
  t = g_10(j_73, k_73, t);
  t = listbottomup_1_0(e_4, t);
  return(t);
}
static ATerm j_10 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_fputc(m_58, n_58);
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_73);
  return(t);
}
static ATerm k_10 (ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm n_73 = NULL;
  t = SSL_write_term_to_stream_text(p_42, q_42);
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_73);
  return(t);
}
static ATerm m_10 (ATerm t_143 (ATerm), ATerm q_287, ATerm v_42, ATerm t)
{
  ATerm o_73 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_287, term_e_29);
  t = q_10(t);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_73, v_42);
  t = t_143(t);
  t = fclose_0_0(t);
  t = v_42;
  return(t);
}
static ATerm l_10 (ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm p_73 = NULL;
  t = SSL_write_term_to_stream_baf(l_42, m_42);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_73);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(match_cons(f_29, sym_Stream_1))
        {
          w_73 = ATgetArgument(f_29, 0);
        }
      else
        _fail(t);
      x_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(w_73, x_73, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      if(match_cons(g_29, sym_Stream_1))
        {
          b_74 = ATgetArgument(g_29, 0);
        }
      else
        _fail(t);
      c_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(b_74, c_74, t);
  y_73 = t;
  t = term_h_29;
  z_73 = t;
  t = y_73;
  if(match_cons(t, sym_Stream_1))
    {
      a_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_29, y_73);
  t = j_10(z_73, a_74, t);
  return(t);
}
ATerm output_1_0 (ATerm k_163 (ATerm), ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL;
  t = k_163(t);
  r_73 = t;
  {
    ATerm i_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_73 = NULL,t_73 = NULL;
        t = term_p_25;
        s_73 = t;
        t = term_l_29;
        t_73 = t;
        t = term_n_29;
        t = w_10(s_73, t_73, t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = i_29;
        t = term_p_29;
      }
  }
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
  {
    ATerm s_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_73 = NULL,v_73 = NULL;
        t = term_p_25;
        u_73 = t;
        t = term_c_30;
        v_73 = t;
        t = term_g_30;
        t = w_10(u_73, v_73, t);
        t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
        LocalPopChoice(v_29);
        if(match_cons(t, sym__2))
          {
            ATerm h_30 = ATgetArgument(t, 0);
            ATerm i_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_10(f_4, q_73, r_73, t);
      }
    else
      {
        t = s_29;
        if(match_cons(t, sym__2))
          {
            ATerm j_30 = ATgetArgument(t, 0);
            ATerm m_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_10(l_4, q_73, r_73, t);
      }
  }
  return(t);
}
static ATerm q_74 (ATerm k_74, ATerm t)
{
  t = SSL_fclose(k_74);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL;
  o_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_74 = ATgetArgument(t, 0);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_74);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            t = q_74(o_74, t);
          }
      }
    }
  else
    {
      t = q_74(o_74, t);
    }
  return(t);
}
static ATerm n_10 (ATerm r_42, ATerm t)
{
  t = SSL_read_term_from_stream(r_42);
  return(t);
}
static ATerm o_10 (ATerm s_56, ATerm t_56, ATerm t)
{
  t = SSL_strcat(s_56, t_56);
  return(t);
}
static ATerm p_10 (ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm r_74 = NULL;
  t = SSL_fopen(o_58, p_58);
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_74);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_74 = NULL;
  t = SSL_stdin_stream();
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_74);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_74 = NULL;
  t = SSL_stdout_stream();
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_74);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_74 = NULL;
  t = SSL_stderr_stream();
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_74);
  return(t);
}
static ATerm b_76 (ATerm a_75, ATerm t)
{
  ATerm b_75 = NULL;
  t = SSL_explode_term(a_75);
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_30 = ATgetArgument(t, 1);
        if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
          {
            b_75 = ATgetFirst((ATermList) t_30);
            {
              ATerm v_30 = (ATerm) ATgetNext((ATermList) t_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_75;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_75;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_75;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_75;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_76 (ATerm e_75, ATerm f_75, ATerm g_75, ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,m_75 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(g_75);
  j_75 = t;
  t = e_75;
  if(match_cons(t, sym_Path_1))
    {
      m_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_75, f_75);
  g_9 = t;
  t = SSLsetAnnotations(g_9, j_75);
  if(match_cons(t, sym__2))
    {
      h_75 = ATgetArgument(t, 0);
      i_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(h_75, i_75, t);
  return(t);
}
static ATerm d_76 (ATerm o_75, ATerm p_75, ATerm q_75, ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,w_75 = NULL,i_9 = NULL;
  t = SSLgetAnnotations(q_75);
  t_75 = t;
  t = SSL_is_string(o_75);
  w_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_75, p_75);
  i_9 = t;
  t = SSLsetAnnotations(i_9, t_75);
  if(match_cons(t, sym__2))
    {
      r_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(r_75, s_75, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL;
  y_75 = t;
  if(match_cons(t, sym__2))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
      {
        ATerm c_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_76(y_75, t);
            LocalPopChoice(g_31);
          }
        else
          {
            t = c_31;
            {
              ATerm h_31 = t;
              int l_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_76(z_75, a_76, y_75, t);
                  LocalPopChoice(l_31);
                }
              else
                {
                  t = h_31;
                  t = d_76(z_75, a_76, y_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_76(y_75, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,m_76 = NULL;
  m_76 = t;
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_76, term_o_31);
        t = q_10(t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm o_34 = NULL,p_34 = NULL;
          t = term_p_31;
          p_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_31, m_76);
          t = o_10(p_34, m_76, t);
          o_34 = t;
          t = SSL_perror(o_34);
          _fail(t);
        }
      }
  }
  g_76 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10(h_76, t);
  f_76 = t;
  t = g_76;
  t = fclose_0_0(t);
  t = f_76;
  return(t);
}
ATerm input_1_0 (ATerm l_163 (ATerm), ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_76 = NULL,q_76 = NULL;
      t = term_p_25;
      p_76 = t;
      t = term_s_31;
      q_76 = t;
      t = term_t_31;
      t = w_10(p_76, q_76, t);
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      t = term_u_31;
    }
  t = ReadFromFile_0_0(t);
  t = l_163(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  t = term_p_25;
  r_76 = t;
  t = term_v_31;
  s_76 = t;
  t = term_w_31;
  t = w_10(r_76, s_76, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL;
  u_76 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_76;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_32 = ATgetFirst((ATermList) t);
                ATerm e_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_76;
          }
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = (ATerm) ATinsert(ATempty, u_76);
      }
  }
  v_76 = t;
  t = term_p_29;
  w_76 = t;
  t = SSL_printnl(w_76, v_76);
  t = u_76;
  return(t);
}
ATerm map_1_0 (ATerm b_144 (ATerm), ATerm t)
{
  static ATerm o_77 (ATerm t);
  static ATerm o_77 (ATerm t)
  {
    ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
    l_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_77;
      }
    else
      {
        ATerm u_34 = NULL,x_34 = NULL,y_34 = NULL,l_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_77 = ATgetFirst((ATermList) t);
            n_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_77);
        u_34 = t;
        t = m_77;
        t = b_144(t);
        x_34 = t;
        t = n_77;
        t = o_77(t);
        y_34 = t;
        t = (ATerm) ATinsert(CheckATermList(y_34), x_34);
        l_9 = t;
        t = SSLsetAnnotations(l_9, u_34);
      }
    return(t);
  }
  t = o_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_77 = ATgetFirst((ATermList) t);
      s_77 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_77 = NULL,x_77 = NULL;
        static ATerm m_4 (ATerm t);
        static ATerm m_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_77)), not_null(x_77));
          return(t);
        }
        t = s_77;
        t = r_0(t);
        if(((w_77 != NULL) && (w_77 != t)))
          _fail(t);
        else
          w_77 = t;
        t = r_77;
        t = p_0(t);
        if(((x_77 != NULL) && (x_77 != t)))
          _fail(t);
        else
          x_77 = t;
        t = s_77;
        t = reverse_acc_2_0(p_0, m_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_32;
      t = r_0(t);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL,v_9 = NULL;
  h_78 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_78);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_78);
  v_9 = t;
  t = SSLsetAnnotations(v_9, f_78);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm l_78 = NULL;
  l_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_78), term_g_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm x_165 (ATerm), ATerm y_165 (ATerm), ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_78 = NULL,e_78 = NULL;
      t = term_p_25;
      d_78 = t;
      t = term_v_31;
      e_78 = t;
      t = term_w_31;
      t = w_10(d_78, e_78, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = fetch_1_0(n_4, t);
    }
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_165(t);
        t = echo_0_0(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
      }
  }
  t = term_o_32;
  t = echo_0_0(t);
  t = term_q_32;
  b_78 = t;
  t = term_s_32;
  c_78 = t;
  t = term_t_32;
  t = w_10(b_78, c_78, t);
  t = reverse_acc_2_0(_id, o_4, t);
  t = map_1_0(p_4, t);
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_78 = NULL;
        t = y_165(t);
        m_78 = t;
        t = (ATerm) ATinsert(CheckATermList(m_78), term_w_32);
        t = echo_0_0(t);
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
      }
  }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL,y_9 = NULL;
  u_78 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_78);
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_78);
  y_9 = t;
  t = SSLsetAnnotations(y_9, s_78);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_78 = NULL;
  p_78 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_78 = NULL,r_78 = NULL;
        t = term_p_25;
        q_78 = t;
        t = term_v_31;
        r_78 = t;
        t = term_w_31;
        t = w_10(q_78, r_78, t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = fetch_1_0(r_4, t);
      }
  }
  t = p_78;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm w_78 = NULL;
  w_78 = t;
  if(match_string(t, "-k"))
    {
      t = w_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_78;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL;
  x_78 = t;
  t = SSL_string_to_int(x_78);
  y_78 = t;
  t = term_a_33;
  z_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_33, y_78);
  t = z_10(z_78, y_78, t);
  t = x_78;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm b_79 = NULL;
  b_79 = t;
  if(match_string(t, "-S"))
    {
      t = b_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_79;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL;
  t = term_g_33;
  c_79 = t;
  t = term_z_13;
  d_79 = t;
  t = term_h_33;
  t = z_10(c_79, d_79, t);
  t = term_i_33;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_j_33;
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
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
  e_79 = t;
  t = SSL_string_to_int(e_79);
  f_79 = t;
  t = term_g_33;
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, f_79);
  t = z_10(g_79, f_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_79);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_k_33;
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
  ATerm h_79 = NULL,i_79 = NULL;
  t = term_l_33;
  h_79 = t;
  t = term_f_32;
  i_79 = t;
  t = term_m_33;
  t = z_10(h_79, i_79, t);
  t = term_n_33;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, w_4, x_4, t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm u_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, f_5, t);
            LocalPopChoice(w_33);
          }
        else
          {
            t = u_33;
            t = Option_3_0(g_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm z_10 (ATerm z_104, ATerm a_105, ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL;
  t = term_p_25;
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_25, z_104, a_105);
  t = lookup_table_0_1(j_79, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(z_104, a_105, k_79, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_25, z_104, a_105);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
      t = term_f_32;
      t = g_0(t);
      q_79 = t;
      t = term_q_32;
      r_79 = t;
      t = term_s_32;
      s_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_32, term_s_32, q_79);
      t = x_10(r_79, s_79, q_79, t);
      _fail(t);
    }
  else
    {
      ATerm v_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_79 = ATgetFirst((ATermList) t);
          p_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_79;
      t = d_0(t);
      t = term_f_32;
      t = f_0(t);
      v_79 = t;
      t = (ATerm) ATinsert(CheckATermList(p_79), v_79);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm x_79 = NULL;
  x_79 = t;
  if(match_string(t, "-o"))
    {
      t = x_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_79;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL;
  y_79 = t;
  t = term_l_29;
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, y_79);
  t = z_10(z_79, y_79, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_79);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm b_80 = NULL;
  b_80 = t;
  if(match_string(t, "-i"))
    {
      t = b_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_80;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL;
  h_80 = t;
  t = term_s_31;
  i_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_31, h_80);
  t = z_10(i_80, h_80, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_80);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, t_5, u_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_144 (ATerm), ATerm t)
{
  static ATerm e_81 (ATerm t);
  static ATerm e_81 (ATerm t)
  {
    ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
    d_81 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_81 = ATgetFirst((ATermList) t);
        c_81 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_35 = NULL,m_35 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(d_81);
          j_35 = t;
          t = c_81;
          t = e_81(t);
          m_35 = t;
          t = (ATerm) ATinsert(CheckATermList(m_35), b_81);
          b_10 = t;
          t = SSLsetAnnotations(b_10, j_35);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_81;
        t = q_144(t);
      }
    return(t);
  }
  t = e_81(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL;
  k_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_80;
    }
  else
    {
      static ATerm w_5 (ATerm t);
      static ATerm w_5 (ATerm t)
      {
        t = not_null(m_80);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_80 = ATgetFirst((ATermList) t);
          if(((m_80 != NULL) && (m_80 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_80;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm q_81 (ATerm i_81, ATerm t)
{
  ATerm j_81 = NULL;
  t = SSL_explode_term(i_81);
  if(match_cons(t, sym__2))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_81;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
  n_81 = t;
  if(match_cons(t, sym__2))
    {
      l_81 = ATgetArgument(t, 0);
      m_81 = ATgetArgument(t, 1);
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_6 (ATerm t);
            static ATerm a_6 (ATerm t)
            {
              t = m_81;
              return(t);
            }
            t = l_81;
            t = at_end_1_0(a_6, t);
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            t = q_81(n_81, t);
          }
      }
    }
  else
    {
      t = q_81(n_81, t);
    }
  return(t);
}
static ATerm i_10 (ATerm g_105, ATerm h_105, ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  t = g_105;
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_81 = NULL;
        t = term_p_25;
        w_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_25, g_105);
        t = w_10(w_81, g_105, t);
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = (ATerm) ATempty;
      }
  }
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_81, h_105);
  t = conc_0_0(t);
  r_81 = t;
  t = term_p_25;
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_25, g_105, r_81);
  t = lookup_table_0_1(t_81, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(g_105, r_81, u_81, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_25, g_105, r_81);
  return(t);
}
static ATerm x_10 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL;
  y_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_34 = ATgetArgument(t, 0);
            ATerm k_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
        t = w_10(y_63, z_63, t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = (ATerm) ATempty;
      }
  }
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_63, z_63, (ATerm) ATinsert(CheckATermList(z_81), x_63));
  t = lookup_table_0_1(y_63, t);
  c_82 = t;
  t = (ATerm) ATinsert(CheckATermList(z_81), x_63);
  a_82 = t;
  t = c_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(z_63, a_82, b_82, t);
  t = y_81;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
      t = term_f_32;
      t = n_0(t);
      n_82 = t;
      t = term_q_32;
      o_82 = t;
      t = term_s_32;
      p_82 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_32, term_s_32, n_82);
      t = x_10(o_82, p_82, n_82, t);
      _fail(t);
    }
  else
    {
      ATerm t_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_82 = ATgetFirst((ATermList) t);
          k_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_82 = ATgetFirst((ATermList) t);
          m_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_82;
      t = j_0(t);
      t = l_82;
      t = l_0(t);
      t_82 = t;
      t = (ATerm) ATinsert(CheckATermList(m_82), t_82);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
  v_82 = t;
  t = term_m_25;
  w_82 = t;
  t = (ATerm) ATinsert(ATempty, v_82);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATinsert(ATempty, v_82));
  t = i_10(w_82, x_82, t);
  t = v_82;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_82 = NULL;
  y_82 = t;
  if(match_string(t, "--library"))
    {
      t = y_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = y_82;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL;
  z_82 = t;
  t = term_h_26;
  a_83 = t;
  t = term_f_32;
  b_83 = t;
  t = term_m_34;
  t = z_10(a_83, b_83, t);
  t = z_82;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(b_6, g_6, h_6, t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      t = Option_3_0(i_6, j_6, q_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_32;
  t = whoami_0_0(t);
  c_83 = t;
  t = term_s_34;
  e_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_34), c_83);
  f_83 = t;
  t = SSL_printnl(e_83, f_83);
  t = term_a_14;
  d_83 = t;
  t = SSL_exit(d_83);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL;
  t = term_p_25;
  g_83 = t;
  t = term_v_31;
  h_83 = t;
  t = term_w_31;
  t = w_10(g_83, h_83, t);
  return(t);
}
static ATerm r_10 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_62, i_62);
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      t = SSL_addr(h_62, i_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
  j_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_83;
      t = y_150(t);
    }
  else
    {
      ATerm o_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_83 = ATgetFirst((ATermList) t);
          l_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_83;
      t = foldr_2_0(y_150, z_150, t);
      o_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_83, o_83);
      t = z_150(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  if(match_cons(t, sym__2))
    {
      v_35 = ATgetArgument(t, 0);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(v_35, w_35, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_83 = NULL,r_35 = NULL,s_35 = NULL;
  t = times_0_0(t);
  s_35 = t;
  t = SSL_explode_term(s_35);
  if(match_cons(t, sym__2))
    {
      ATerm z_34 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_35;
  t = foldr_2_0(r_6, s_6, t);
  r_83 = t;
  t = SSL_TicksToSeconds(r_83);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL;
  c_84 = t;
  if(match_cons(t, sym__2))
    {
      d_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_84;
        if((d_84 != t))
          {
            _fail(t);
          }
        t = c_84;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = (ATerm) ATmakeAppl(sym__2, d_84, e_84);
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_84, e_84);
              LocalPopChoice(d_35);
            }
          else
            {
              t = c_35;
              t = SSL_gtr(d_84, e_84);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_84, e_84);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_161 (ATerm), ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
        t = term_p_25;
        l_84 = t;
        t = term_g_33;
        m_84 = t;
        t = term_h_35;
        t = w_10(l_84, m_84, t);
        k_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_84, term_a_14);
        t = geq_0_0(t);
        t = i_84;
        t = i_161(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        t = i_84;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,r_84 = NULL,s_84 = NULL;
  t = run_time_0_0(t);
  o_84 = t;
  t = term_f_32;
  t = whoami_0_0(t);
  p_84 = t;
  t = term_s_34;
  r_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_35), o_84), term_i_35), p_84);
  s_84 = t;
  t = SSL_printnl(r_84, s_84);
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_35), o_84), term_i_35), p_84));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_84 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_13;
  t_84 = t;
  t = SSL_exit(t_84);
  return(t);
}
static ATerm a_11 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm u_84 = NULL;
  t = SSL_hashtable_put(p_68, n_68, o_68);
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_84);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_65, ATerm t)
{
  ATerm d_85 = NULL;
  t = table_hashtable_0_0(t);
  d_85 = t;
  {
    ATerm l_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_36 = NULL;
        t = d_85;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_11(k_65, l_36, t);
        LocalPopChoice(n_35);
      }
    else
      {
        t = l_35;
        {
          ATerm q_36 = NULL;
          t = k_65;
          t = table_create_0_0(t);
          t = d_85;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_11(k_65, q_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm g_85 = NULL;
  t = SSL_hashtable_create(v_68, w_68);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_85);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,l_85 = NULL,m_85 = NULL;
  h_85 = t;
  t = term_o_35;
  l_85 = t;
  t = term_p_35;
  m_85 = t;
  t = h_85;
  t = new_hashtable_0_2(l_85, m_85, t);
  i_85 = t;
  t = h_85;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(h_85, i_85, j_85, t);
  t = h_85;
  return(t);
}
static ATerm t_10 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm n_85 = NULL;
  t = SSL_hashtable_remove(t_68, s_68);
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_85);
  return(t);
}
static ATerm u_10 (ATerm x_68, ATerm t)
{
  ATerm o_85 = NULL;
  t = SSL_hashtable_destroy(x_68);
  o_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_85);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm p_85 = NULL;
  t = SSL_table_hashtable();
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_85);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
  q_85 = t;
  t = table_hashtable_0_0(t);
  r_85 = t;
  t = lookup_table_0_1(q_85, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(t_85, t);
  t = r_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_10(q_85, s_85, t);
  t = q_85;
  return(t);
}
ATerm fetch_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  static ATerm q_86 (ATerm t);
  static ATerm q_86 (ATerm t)
  {
    ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
    n_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_86 = ATgetFirst((ATermList) t);
        p_86 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_36 = NULL,y_36 = NULL,s_11 = NULL;
          t = SSLgetAnnotations(n_86);
          v_36 = t;
          t = o_86;
          t = j_144(t);
          y_36 = t;
          t = (ATerm) ATinsert(CheckATermList(p_86), y_36);
          s_11 = t;
          t = SSLsetAnnotations(s_11, v_36);
          LocalPopChoice(t_35);
        }
      else
        {
          t = q_35;
          {
            ATerm g_37 = NULL,j_37 = NULL,u_11 = NULL;
            t = SSLgetAnnotations(n_86);
            g_37 = t;
            t = p_86;
            t = q_86(t);
            j_37 = t;
            t = (ATerm) ATinsert(CheckATermList(j_37), o_86);
            u_11 = t;
            t = SSLsetAnnotations(u_11, g_37);
          }
        }
    }
    return(t);
  }
  t = q_86(t);
  return(t);
}
static ATerm b_11 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_hashtable_get(r_68, q_68);
  return(t);
}
static ATerm w_10 (ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm t_86 = NULL;
  t = lookup_table_0_1(r_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(s_65, t_86, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL;
  t = term_u_35;
  v_86 = t;
  t = term_f_32;
  w_86 = t;
  t = term_x_35;
  t = z_10(v_86, w_86, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_y_35;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
  t = term_u_35;
  z_86 = t;
  t = term_f_32;
  a_87 = t;
  t = term_x_35;
  t = z_10(z_86, a_87, t);
  t = term_z_35;
  x_86 = t;
  t = term_f_32;
  y_86 = t;
  t = term_a_36;
  t = z_10(x_86, y_86, t);
  t = term_b_36;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, x_6, y_6, t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      t = Option_3_0(z_6, a_7, d_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,p_12 = NULL;
  g_87 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_87 = ATgetFirst((ATermList) t);
      d_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_87);
  b_87 = t;
  t = c_87;
  t = l_105(t);
  e_87 = t;
  t = d_87;
  t = m_105(t);
  f_87 = t;
  t = (ATerm) ATinsert(CheckATermList(f_87), e_87);
  p_12 = t;
  t = SSLsetAnnotations(p_12, b_87);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_165 (ATerm), ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,h_88 = NULL,i_88 = NULL,t_12 = NULL;
  c_88 = t;
  {
    ATerm g_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_36;
        t = s_165(t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = g_36;
      }
  }
  t = c_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_88 = ATgetFirst((ATermList) t);
      f_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_88);
  d_88 = t;
  t = term_v_31;
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, e_88);
  t = z_10(i_88, e_88, t);
  t = f_88;
  {
    static ATerm y_88 (ATerm t);
    static ATerm y_88 (ATerm t)
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_36 = t;
          int r_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_88 = NULL;
              l_88 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_88;
              LocalPopChoice(r_36);
            }
          else
            {
              t = p_36;
              t = s_165(t);
              t = Cons_2_0(_id, y_88, t);
            }
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          {
            ATerm t_88 = NULL,u_88 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_88 = ATgetFirst((ATermList) t);
                u_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_88), (ATerm) ATmakeAppl(sym_Undefined_1, t_88));
          }
        }
      return(t);
    }
    t = y_88(t);
  }
  h_88 = t;
  t = (ATerm) ATinsert(CheckATermList(h_88), (ATerm) ATmakeAppl(sym_Program_1, e_88));
  t_12 = t;
  t = SSLsetAnnotations(t_12, d_88);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  if(match_string(t, "--help"))
    {
      t = l_89;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_89;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_89;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL;
  t = term_s_36;
  m_89 = t;
  t = term_f_32;
  n_89 = t;
  t = term_t_36;
  t = z_10(m_89, n_89, t);
  t = term_u_36;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm p_165 (ATerm), ATerm q_165 (ATerm), ATerm r_165 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL;
  f_89 = t;
  t = term_q_32;
  g_89 = t;
  t = term_x_36;
  t = lookup_table_0_1(g_89, t);
  k_89 = t;
  t = term_s_32;
  h_89 = t;
  t = (ATerm) ATempty;
  i_89 = t;
  t = k_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(h_89, i_89, j_89, t);
  t = f_89;
  {
    static ATerm e_7 (ATerm t);
    static ATerm e_7 (ATerm t)
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_165(t);
          LocalPopChoice(a_37);
        }
      else
        {
          t = z_36;
          {
            ATerm b_37 = t;
            int c_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_7, i_7, j_7, t);
                LocalPopChoice(c_37);
              }
            else
              {
                t = b_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_7, t);
  }
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_89 = NULL;
        y_89 = t;
        {
          ATerm f_37 = t;
          int h_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL;
              t = y_89;
              {
                ATerm i_37 = t;
                int k_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_37 = NULL,s_37 = NULL;
                    t = term_p_25;
                    r_37 = t;
                    t = term_s_36;
                    s_37 = t;
                    t = term_l_37;
                    t = w_10(r_37, s_37, t);
                    LocalPopChoice(k_37);
                  }
                else
                  {
                    t = i_37;
                    t = fetch_1_0(l_7, t);
                  }
              }
              t = y_89;
              t = q_165(t);
              t = term_z_13;
              q_37 = t;
              t = SSL_exit(q_37);
              LocalPopChoice(h_37);
            }
          else
            {
              t = f_37;
              {
                ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
                t = term_p_25;
                x_37 = t;
                t = term_u_35;
                y_37 = t;
                t = term_m_37;
                t = w_10(x_37, y_37, t);
                t = y_89;
                t = r_165(t);
                t = term_z_13;
                w_37 = t;
                t = SSL_exit(w_37);
              }
            }
        }
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        {
          ATerm n_37 = t;
          int o_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
              static ATerm n_7 (ATerm t);
              static ATerm n_7 (ATerm t)
              {
                ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,v_12 = NULL;
                e_90 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_90 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_90);
                c_90 = t;
                t = d_90;
                if(((d_89 != NULL) && (d_89 != t)))
                  _fail(t);
                else
                  d_89 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_90);
                v_12 = t;
                t = SSLsetAnnotations(v_12, c_90);
                return(t);
              }
              t = fetch_1_0(n_7, t);
              t = term_s_34;
              a_90 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_89)), term_p_37);
              b_90 = t;
              t = SSL_printnl(a_90, b_90);
              t = (ATerm) ATmakeAppl(sym__2, term_s_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_89)), term_p_37));
              t = q_165(t);
              t = term_a_14;
              z_89 = t;
              t = SSL_exit(z_89);
              LocalPopChoice(o_37);
            }
          else
            {
              t = n_37;
            }
        }
      }
  }
  e_89 = t;
  t = term_q_32;
  t = table_destroy_0_0(t);
  t = e_89;
  return(t);
}
ATerm option_wrap_5_0 (ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm g_163 (ATerm), ATerm h_163 (ATerm), ATerm i_163 (ATerm), ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  t = parse_options_3_0(e_163, f_163, g_163, t);
  j_90 = t;
  t = term_t_37;
  t = table_create_0_0(t);
  t = term_t_37;
  k_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_37, term_u_37, j_90);
  t = lookup_table_0_1(k_90, t);
  n_90 = t;
  t = term_u_37;
  l_90 = t;
  t = n_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(l_90, j_90, m_90, t);
  t = j_90;
  t = h_163(t);
  {
    ATerm v_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_163(t);
        t = report_success_0_0(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = v_37;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            {
              ATerm e_38 = t;
              int f_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(f_38);
                }
              else
                {
                  t = e_38;
                  {
                    ATerm g_38 = t;
                    int h_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, y_7, t);
                        LocalPopChoice(h_38);
                      }
                    else
                      {
                        t = g_38;
                        {
                          ATerm i_38 = t;
                          int j_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(j_38);
                            }
                          else
                            {
                              t = i_38;
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
  t = input_1_0(z_7, t);
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
  ATerm p_90 = NULL,q_90 = NULL;
  t = term_c_30;
  p_90 = t;
  t = term_f_32;
  q_90 = t;
  t = term_k_38;
  t = z_10(p_90, q_90, t);
  t = term_l_38;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_m_38;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(q_7, default_system_usage_0_0, default_system_about_0_0, _id, s_7, t);
  return(t);
}
