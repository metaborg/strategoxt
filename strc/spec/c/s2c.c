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
static ATerm term_d_38;
static ATerm term_b_38;
static ATerm term_a_38;
static ATerm term_k_37;
static ATerm term_j_37;
static ATerm term_i_37;
static ATerm term_e_37;
static ATerm term_d_37;
static ATerm term_o_36;
static ATerm term_n_36;
static ATerm term_l_36;
static ATerm term_k_36;
static ATerm term_i_36;
static ATerm term_z_35;
static ATerm term_r_35;
static ATerm term_q_35;
static ATerm term_p_35;
static ATerm term_m_35;
static ATerm term_l_35;
static ATerm term_k_35;
static ATerm term_j_35;
static ATerm term_g_35;
static ATerm term_f_35;
static ATerm term_y_34;
static ATerm term_x_34;
static ATerm term_w_34;
static ATerm term_h_34;
static ATerm term_g_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_y_33;
static ATerm term_o_33;
static ATerm term_l_33;
static ATerm term_f_33;
static ATerm term_e_33;
static ATerm term_d_33;
static ATerm term_c_33;
static ATerm term_b_33;
static ATerm term_a_33;
static ATerm term_x_32;
static ATerm term_u_32;
static ATerm term_t_32;
static ATerm term_s_32;
static ATerm term_q_32;
static ATerm term_m_32;
static ATerm term_j_32;
static ATerm term_i_32;
static ATerm term_h_32;
static ATerm term_f_32;
static ATerm term_w_31;
static ATerm term_v_31;
static ATerm term_n_31;
static ATerm term_e_31;
static ATerm term_d_31;
static ATerm term_c_31;
static ATerm term_b_31;
static ATerm term_v_30;
static ATerm term_t_30;
static ATerm term_i_29;
static ATerm term_h_29;
static ATerm term_a_29;
static ATerm term_u_28;
static ATerm term_s_28;
static ATerm term_m_28;
static ATerm term_d_28;
static ATerm term_l_27;
static ATerm term_k_27;
static ATerm term_j_27;
static ATerm term_i_27;
static ATerm term_z_26;
static ATerm term_w_26;
static ATerm term_t_26;
static ATerm term_r_26;
static ATerm term_q_26;
static ATerm term_p_26;
static ATerm term_o_26;
static ATerm term_j_26;
static ATerm term_i_26;
static ATerm term_h_26;
static ATerm term_g_26;
static ATerm term_d_26;
static ATerm term_c_26;
static ATerm term_b_26;
static ATerm term_a_26;
static ATerm term_z_25;
static ATerm term_y_25;
static ATerm term_x_25;
static ATerm term_j_25;
static ATerm term_i_25;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_b_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_y_24;
static ATerm term_j_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_e_24;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_j_23;
static ATerm term_i_23;
static ATerm term_e_23;
static ATerm term_d_23;
static ATerm term_n_22;
static ATerm term_m_22;
static ATerm term_b_22;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_l_20;
static ATerm term_k_20;
static ATerm term_j_20;
static ATerm term_i_20;
static ATerm term_h_20;
static ATerm term_g_20;
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
static ATerm term_i_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_d_19;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_d_18;
static ATerm term_c_18;
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
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_r_16;
static ATerm term_q_16;
static ATerm term_l_16;
static ATerm term_j_16;
static ATerm term_g_16;
static ATerm term_b_16;
static ATerm term_a_16;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_u_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_r_15;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_b_15;
static ATerm term_a_15;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_o_14;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_g_14;
static ATerm term_f_14;
static ATerm term_d_14;
static ATerm term_b_14;
static ATerm term_z_13;
static ATerm term_y_13;
static ATerm term_x_13;
static ATerm term_d_13;
static ATerm term_b_13;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_z_11;
static ATerm term_y_11;
static ATerm term_x_11;
static ATerm term_w_11;
static ATerm term_u_11;
static ATerm term_s_11;
static ATerm term_p_11;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_m_11;
static ATerm term_j_11;
static ATerm term_i_11;
static ATerm term_d_11;
static ATerm term_b_11;
static ATerm term_w_10;
static ATerm term_q_10;
static ATerm term_z_9;
static ATerm term_y_9;
static ATerm term_u_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_u_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_y_9, (ATerm) ATempty);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Id_1, term_q_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Id_1, term_b_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Some_1, term_j_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_stratego_initialize", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Id_1, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_11, (ATerm) ATempty);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Stat_1, term_s_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Id_1, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Return_1, term_d_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Id_1, term_a_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATempty);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_z_9, term_i_11);
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
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Id_1, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_pop_seqvar", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Id_1, term_a_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Id_1, term_m_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Id_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Id_1, term_a_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Id_1, term_g_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, term_o_14);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Id_1, term_q_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Id_1, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Id_1, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_17, (ATerm) ATempty);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_17, term_i_11);
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
  term_o_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_17, term_i_11);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_c_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_q_14);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_11);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Id_1, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_19, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_19, term_q_15);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Id_1, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_o_19, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Stat_1, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Id_1, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_19, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_t_19, term_q_15);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_19, (ATerm) ATempty);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_20, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_20, term_i_11);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Id_1, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Id_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Id_1, term_q_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Id_1, term_u_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_w_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_y_20, term_i_11);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ATappend", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Id_1, term_a_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Id_1, term_p_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, term_d_11);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Static_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_m_22, (ATerm)ATempty, term_y_9, (ATerm) ATempty);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Id_1, term_e_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Id_1, term_g_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_m_22, (ATerm)ATempty, term_c_25, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_f_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_x_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_25, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Id_1, term_b_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_26, term_i_11);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Include_1, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Include_1, term_i_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_m_22, (ATerm)ATempty, term_z_25, (ATerm) ATempty);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Id_1, term_p_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Op_2, term_z_26, (ATerm) ATempty);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_j_27, term_l_16);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_k_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_s_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_h_29);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_b_31);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_e_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_i_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_x_13);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_v_31);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_v_31);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_t_32);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_j_35, term_v_31);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_v_31);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_i_36, term_v_31);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_i_36);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_j_35);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_v_31);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm z_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm s_170 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_137 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm n_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t);
static ATerm b_10 (ATerm c_64, ATerm d_64, ATerm t);
static ATerm w_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm p_9 (ATerm u_30, ATerm x_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm q_9 (ATerm g_36, ATerm f_36, ATerm t);
static ATerm r_9 (ATerm a_212, ATerm c_36, ATerm e_36, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm r_53 (ATerm e_28, ATerm f_28, ATerm g_28, ATerm h_28, ATerm t);
static ATerm t_53 (ATerm s_29, ATerm t_29, ATerm a_30, ATerm t);
static ATerm u_53 (ATerm f_30, ATerm g_30, ATerm j_30, ATerm t);
static ATerm v_53 (ATerm q_30, ATerm r_30, ATerm y_30, ATerm z_30, ATerm t);
static ATerm w_53 (ATerm f_31, ATerm h_31, ATerm p_32, ATerm r_32, ATerm t);
static ATerm x_53 (ATerm b_35, ATerm c_35, ATerm t_38, ATerm a_39, ATerm t);
static ATerm a_54 (ATerm c_40, ATerm g_40, ATerm o_40, ATerm p_40, ATerm t);
static ATerm b_54 (ATerm c_41, ATerm d_41, ATerm h_41, ATerm i_41, ATerm j_41, ATerm k_41, ATerm l_41, ATerm m_41, ATerm t);
static ATerm c_54 (ATerm q_42, ATerm t_42, ATerm d_43, ATerm e_43, ATerm f_43, ATerm g_43, ATerm t);
static ATerm d_54 (ATerm s_43, ATerm w_43, ATerm x_43, ATerm z_43, ATerm c_44, ATerm d_44, ATerm t);
static ATerm e_54 (ATerm m_44, ATerm n_44, ATerm q_44, ATerm t);
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
ATerm escape_chars_1_0 (ATerm k_154 (ATerm), ATerm t);
static ATerm x_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t);
ATerm thread_map_1_0 (ATerm i_151 (ATerm), ATerm t);
static ATerm h_61 (ATerm l_58, ATerm m_58, ATerm n_58, ATerm o_58, ATerm p_58, ATerm t);
static ATerm i_61 (ATerm m_59, ATerm n_59, ATerm o_59, ATerm p_59, ATerm t);
static ATerm j_61 (ATerm u_59, ATerm v_59, ATerm w_59, ATerm x_59, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_137 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm translate_body_0_0 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm v_151 (ATerm), ATerm t);
ATerm TranslateType_0_0 (ATerm t);
ATerm TranslateVarDec_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm is_local_function_0_0 (ATerm t);
ATerm SDefToDeclaration_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm c_10 (ATerm l_40, ATerm j_40, ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm h_154 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm t_150 (ATerm), ATerm u_150 (ATerm), ATerm v_150 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm d_10 (ATerm y_39, ATerm x_39, ATerm t);
static ATerm t_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_10 (ATerm s_40, ATerm v_40, ATerm t);
static ATerm f_10 (ATerm c_171 (ATerm), ATerm j_88, ATerm h_88, ATerm t);
static ATerm b_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm h_10 (ATerm f_58, ATerm g_58, ATerm t);
static ATerm i_10 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm k_10 (ATerm m_143 (ATerm), ATerm n_288, ATerm s_42, ATerm t);
static ATerm j_10 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_1_0 (ATerm z_162 (ATerm), ATerm t);
static ATerm d_73 (ATerm x_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_10 (ATerm o_42, ATerm t);
static ATerm m_10 (ATerm l_56, ATerm m_56, ATerm t);
static ATerm n_10 (ATerm h_58, ATerm i_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_74 (ATerm n_73, ATerm t);
static ATerm p_74 (ATerm r_73, ATerm s_73, ATerm t_73, ATerm t);
static ATerm q_74 (ATerm b_74, ATerm c_74, ATerm d_74, ATerm t);
static ATerm o_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_163 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_143 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm m_165 (ATerm), ATerm n_165 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_10 (ATerm s_104, ATerm t_104, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_144 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_80 (ATerm p_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_10 (ATerm z_104, ATerm a_105, ATerm t);
static ATerm v_10 (ATerm r_63, ATerm s_63, ATerm q_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_10 (ATerm a_62, ATerm b_62, ATerm t);
ATerm foldr_2_0 (ATerm r_150 (ATerm), ATerm s_150 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_160 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_10 (ATerm g_68, ATerm h_68, ATerm i_68, ATerm t);
ATerm lookup_table_0_1 (ATerm d_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_68, ATerm p_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_10 (ATerm l_68, ATerm m_68, ATerm t);
static ATerm s_10 (ATerm q_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_144 (ATerm), ATerm t);
static ATerm z_10 (ATerm j_68, ATerm k_68, ATerm t);
static ATerm u_10 (ATerm k_65, ATerm l_65, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_165 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm parse_options_3_0 (ATerm e_165 (ATerm), ATerm f_165 (ATerm), ATerm g_165 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm t_162 (ATerm), ATerm u_162 (ATerm), ATerm v_162 (ATerm), ATerm w_162 (ATerm), ATerm x_162 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
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
  ATerm e_4 = NULL,f_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_8 = ATgetFirst((ATermList) t);
      if(match_cons(i_8, sym_Compound_2))
        {
          ATerm j_8 = ATgetArgument(i_8, 0);
          if(((ATgetType(j_8) != AT_LIST) || !(ATisEmpty(j_8))))
            _fail(t);
          e_4 = ATgetArgument(i_8, 1);
        }
      else
        _fail(t);
      f_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_4, f_4);
  t = conc_0_0(t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_8 = ATgetFirst((ATermList) t);
      if(match_cons(k_8, sym_Compound_2))
        {
          ATerm l_8 = ATgetArgument(k_8, 0);
          if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
            _fail(t);
          a_5 = ATgetArgument(k_8, 1);
        }
      else
        _fail(t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_8 = ATgetFirst((ATermList) t);
      if(match_cons(n_8, sym_Compound_2))
        {
          ATerm r_8 = ATgetArgument(n_8, 0);
          if(((ATgetType(r_8) != AT_LIST) || !(ATisEmpty(r_8))))
            _fail(t);
          f_5 = ATgetArgument(n_8, 1);
        }
      else
        _fail(t);
      g_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_5, g_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm t_5 = NULL,w_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_8 = ATgetFirst((ATermList) t);
      if(match_cons(s_8, sym_Compound_2))
        {
          ATerm t_8 = ATgetArgument(s_8, 0);
          if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
            _fail(t);
          t_5 = ATgetArgument(s_8, 1);
        }
      else
        _fail(t);
      w_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_5, w_5);
  t = conc_0_0(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_8 = ATgetFirst((ATermList) t);
      if(match_cons(v_8, sym_Compound_2))
        {
          ATerm w_8 = ATgetArgument(v_8, 0);
          if(((ATgetType(w_8) != AT_LIST) || !(ATisEmpty(w_8))))
            _fail(t);
          a_6 = ATgetArgument(v_8, 1);
        }
      else
        _fail(t);
      b_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_6, b_6);
  t = conc_0_0(t);
  return(t);
}
ATerm Csimplify_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym_IfElse_3))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      v_2 = ATgetArgument(t, 2);
      t = v_2;
      if(match_cons(t, sym_Compound_2))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          t = x_2;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = w_2;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = d_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      e_3 = ATgetArgument(t, 0);
                      h_3 = ATgetArgument(t, 1);
                      t = h_3;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = e_3;
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, c_3), v_2);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_If_2, c_3, d_3);
                            }
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_If_2, c_3, d_3);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_If_2, c_3, d_3);
                    }
                }
              else
                {
                  t = d_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      e_3 = ATgetArgument(t, 0);
                      h_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_3;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, c_3), v_2);
                }
            }
          else
            {
              t = d_3;
              if(match_cons(t, sym_Compound_2))
                {
                  e_3 = ATgetArgument(t, 0);
                  h_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_3;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, c_3), v_2);
            }
        }
      else
        {
          t = d_3;
          if(match_cons(t, sym_Compound_2))
            {
              e_3 = ATgetArgument(t, 0);
              h_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_3;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, c_3), v_2);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_3 = ATgetFirst((ATermList) t);
          d_3 = (ATerm) ATgetNext((ATermList) t);
          t = c_3;
          if(match_cons(t, sym_Stat_1))
            {
              y_2 = ATgetArgument(t, 0);
              t = y_2;
              if(!(match_cons(t, sym_EmptyExp_0)))
                _fail(t);
              t = d_3;
            }
          else
            {
              if(match_cons(t, sym_Compound_2))
                {
                  y_2 = ATgetArgument(t, 0);
                  a_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_2;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_3, d_3);
              t = conc_0_0(t);
            }
        }
      else
        {
          if(match_cons(t, sym_Compound_2))
            {
              c_3 = ATgetArgument(t, 0);
              d_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_3 = ATgetFirst((ATermList) t);
              h_3 = (ATerm) ATgetNext((ATermList) t);
              t = h_3;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      f_3 = ATgetArgument(t, 0);
                      g_3 = ATgetArgument(t, 1);
                      {
                        ATerm y_8 = t;
                        int z_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_4 = NULL;
                            t = d_3;
                            t = listbu1_1_0(a_0, t);
                            d_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, c_3, d_4);
                            LocalPopChoice(z_8);
                          }
                        else
                          {
                            t = y_8;
                            {
                              ATerm b_9 = t;
                              int e_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, c_3, f_3);
                                  t = conc_0_0(t);
                                  n_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, n_4, g_3);
                                  LocalPopChoice(e_9);
                                }
                              else
                                {
                                  t = b_9;
                                  {
                                    ATerm u_4 = NULL,v_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, c_3, f_3);
                                    t = conc_0_0(t);
                                    u_4 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
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
                      ATerm z_4 = NULL;
                      t = d_3;
                      t = listbu1_1_0(c_0, t);
                      z_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, c_3, z_4);
                    }
                }
              else
                {
                  t = e_3;
                  if(match_cons(t, sym_Compound_2))
                    {
                      f_3 = ATgetArgument(t, 0);
                      g_3 = ATgetArgument(t, 1);
                      {
                        ATerm g_9 = t;
                        int i_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_5 = NULL;
                            t = d_3;
                            t = listbu1_1_0(i_0, t);
                            e_5 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, c_3, e_5);
                            LocalPopChoice(i_9);
                          }
                        else
                          {
                            t = g_9;
                            {
                              ATerm n_5 = NULL,p_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, c_3, f_3);
                              t = conc_0_0(t);
                              n_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
                              t = conc_0_0(t);
                              p_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, n_5, p_5);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_5 = NULL;
                      t = d_3;
                      t = listbu1_1_0(o_0, t);
                      s_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Compound_2, c_3, s_5);
                    }
                }
            }
          else
            {
              ATerm z_5 = NULL;
              t = d_3;
              t = listbu1_1_0(s_0, t);
              z_5 = t;
              t = (ATerm) ATmakeAppl(sym_Compound_2, c_3, z_5);
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm t)
{
  static ATerm c_6 (ATerm t);
  static ATerm c_6 (ATerm t)
  {
    ATerm k_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_136(t);
        t = c_6(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = k_9;
        t = k_136(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm s_170 (ATerm), ATerm t)
{
  static ATerm i_7 (ATerm t);
  static ATerm i_7 (ATerm t)
  {
    t = s_170(t);
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_6 = NULL,z_6 = NULL,e_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,e_1 = NULL;
          y_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_6 = ATgetFirst((ATermList) t);
              e_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_6);
          w_1 = t;
          t = z_6;
          t = i_7(t);
          z_1 = t;
          t = e_7;
          t = i_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          e_1 = t;
          t = SSLsetAnnotations(e_1, w_1);
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          t = SRTS_all(i_7, t);
        }
    }
    t = s_170(t);
    return(t);
  }
  t = i_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_137 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(k_137, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = k_137(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_w_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_n_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_11), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_11, (ATerm) ATinsert(ATempty, term_d_11))))), term_u_11)));
  return(t);
}
static ATerm n_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, k_31)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_31), term_w_11, j_31)));
  return(t);
}
static ATerm b_10 (ATerm c_64, ATerm d_64, ATerm t)
{
  ATerm l_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
  t = u_10(c_64, d_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_7 = ATgetFirst((ATermList) t);
      {
        ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_7;
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
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_Op_2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(f_11);
        i_2 = t;
        t = g_11;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
          _fail(t);
        t = h_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, g_11, h_11);
        i_1 = t;
        t = SSLsetAnnotations(i_1, i_2);
        LocalPopChoice(o_12);
      }
    else
      {
        t = m_12;
        {
          ATerm p_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,r_4 = NULL,k_1 = NULL,j_1 = NULL;
              t = SSLgetAnnotations(f_11);
              s_2 = t;
              t = g_11;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                _fail(t);
              t = h_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_4 = ATgetFirst((ATermList) t);
                  l_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_11);
              j_4 = t;
              t = l_4;
              t = Cons_2_0(proper_list_0_0, w_0, t);
              m_4 = t;
              t = (ATerm) ATinsert(CheckATermList(m_4), k_4);
              j_1 = t;
              t = SSLsetAnnotations(j_1, j_4);
              r_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_11, r_4);
              k_1 = t;
              t = SSLsetAnnotations(k_1, s_2);
              LocalPopChoice(r_12);
            }
          else
            {
              t = p_12;
              {
                ATerm d_6 = NULL,g_6 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(f_11);
                d_6 = t;
                t = g_11;
                {
                  ATerm s_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm o_6 = NULL;
                      o_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = o_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = o_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = s_12;
                    }
                }
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_6, h_11);
                l_1 = t;
                t = SSLsetAnnotations(l_1, d_6);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_t_12;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_u_12;
  return(t);
}
static ATerm p_9 (ATerm u_30, ATerm x_30, ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,a_14 = NULL,c_14 = NULL;
  t = u_30;
  if(match_cons(t, sym_Op_2))
    {
      c_14 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
      {
        ATerm x_6 = NULL,c_7 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(u_30);
        x_6 = t;
        t = a_14;
        t = map_1_0(Cache_0_0, t);
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, c_14, c_7);
        j_6 = t;
        t = SSLsetAnnotations(j_6, x_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          c_14 = ATgetArgument(t, 0);
          a_14 = ATgetArgument(t, 1);
          {
            ATerm j_7 = NULL,s_7 = NULL,t_7 = NULL,k_6 = NULL;
            t = SSLgetAnnotations(u_30);
            j_7 = t;
            t = c_14;
            t = Cache_0_0(t);
            s_7 = t;
            t = a_14;
            t = Cache_0_0(t);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, s_7, t_7);
            k_6 = t;
            t = SSLsetAnnotations(k_6, j_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              c_14 = ATgetArgument(t, 0);
              {
                ATerm x_7 = NULL,l_6 = NULL;
                t = SSLgetAnnotations(u_30);
                x_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, c_14);
                l_6 = t;
                t = SSLsetAnnotations(l_6, x_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  c_14 = ATgetArgument(t, 0);
                  {
                    ATerm g_8 = NULL,m_6 = NULL;
                    t = SSLgetAnnotations(u_30);
                    g_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, c_14);
                    m_6 = t;
                    t = SSLsetAnnotations(m_6, g_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      c_14 = ATgetArgument(t, 0);
                      {
                        ATerm o_8 = NULL,n_6 = NULL;
                        t = SSLgetAnnotations(u_30);
                        o_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, c_14);
                        n_6 = t;
                        t = SSLsetAnnotations(n_6, o_8);
                      }
                    }
                  else
                    {
                      ATerm x_8 = NULL,p_6 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          c_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_30);
                      x_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, c_14);
                      p_6 = t;
                      t = SSLsetAnnotations(p_6, x_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  d_12 = t;
  t = term_v_12;
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, d_12);
  t = m_10(l_12, d_12, t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_12, e_12);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_30, (ATerm) ATmakeAppl(sym_Defined_2, term_w_12, e_12));
  t = f_10(y_0, u_30, k_12, t);
  t = e_12;
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,a_9 = NULL,c_9 = NULL;
        t = (ATerm) ATempty;
        a_9 = t;
        t = term_u_12;
        c_9 = t;
        t = term_b_13;
        t = b_10(c_9, a_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_14;
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = (ATerm) ATempty;
      }
  }
  f_12 = t;
  t = (ATerm) ATempty;
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym__3, d_12, e_12, x_30)));
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym__3, d_12, e_12, x_30))));
  t = f_10(b_1, g_12, j_12, t);
  t = (ATerm) ATmakeAppl(sym_Id_1, e_12);
  return(t);
}
ATerm Cache_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL,a_10 = NULL;
        t = term_t_12;
        a_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_12, v_14);
        t = b_10(a_10, v_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            w_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, w_9);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm k_11 = NULL,q_11 = NULL;
          t = term_t_12;
          q_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_12, v_14);
          t = b_10(q_11, v_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
              k_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_11;
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0_0(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm y_15 = NULL,v_11 = NULL;
        y_15 = t;
        t = SRTS_all(construct_term_caching_0_0, t);
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = ConstructList_0_0(t);
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              {
                ATerm m_13 = t;
                int n_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ConstructTerm_0_0(t);
                    LocalPopChoice(n_13);
                  }
                else
                  {
                    t = m_13;
                  }
              }
            }
        }
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, v_11);
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm q_13 = ATgetArgument(t, 0);
                  ATerm r_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, y_15, v_11);
              t = p_9(y_15, v_11, t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                ATerm h_12 = NULL,i_12 = NULL;
                i_12 = t;
                t = SSL_explode_term(i_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm t_13 = ATgetArgument(t, 1);
                      if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
                        {
                          ATerm u_13 = ATgetFirst((ATermList) t_13);
                          ATerm v_13 = (ATerm) ATgetNext((ATermList) t_13);
                          if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
                            {
                              h_12 = ATgetFirst((ATermList) v_13);
                              {
                                ATerm w_13 = (ATerm) ATgetNext((ATermList) v_13);
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
static ATerm q_9 (ATerm g_36, ATerm f_36, ATerm t)
{
  ATerm c_16 = NULL;
  t = new_0_0(t);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_16), term_i_11), (ATerm) ATmakeAppl(sym_AssignInit_1, f_36)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, g_36, (ATerm) ATmakeAppl(sym_Id_1, c_16))));
  return(t);
}
static ATerm r_9 (ATerm a_212, ATerm c_36, ATerm e_36, ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  t = SSLgetAnnotations(a_212);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_36);
  f_16 = t;
  t = SSLsetAnnotations(f_16, d_16);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Match_2, e_16, e_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(f_18, g_18, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm l_15 = NULL,o_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_15 = ATgetFirst((ATermList) t);
      o_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(o_15), term_b_14), term_z_13);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_15), term_z_13), term_z_13);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_15), term_d_14), term_z_13);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_15), term_f_14), term_z_13);
            }
        }
    }
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
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, u_17), w_17)));
    }
  else
    {
      if(match_cons(t, sym_Op_2))
        {
          w_17 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
          {
            ATerm e_18 = NULL,q_12 = NULL,x_12 = NULL,y_12 = NULL;
            t = u_17;
            t = foldr_3_0(c_1, g_1, h_1, t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_17, e_18);
            x_12 = t;
            t = term_j_14;
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, w_17, e_18));
            t = b_10(y_12, x_12, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm k_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_14) != ATmakeSymbol("k_0", 0, ATtrue)))
                  _fail(t);
                q_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(CheckATermList(u_17), (ATerm) ATmakeAppl(sym_Id_1, q_12))));
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
              if(match_cons(t, sym_SeqVar_1))
                {
                  w_17 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_IfExp_3, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, w_17), term_o_14), (ATerm) ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, w_17), term_q_14)), (ATerm)ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17))), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, w_17)))));
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_17 = ATgetArgument(t, 0);
                      {
                        ATerm w_14 = t;
                        int x_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSLgetAnnotations(v_17);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm y_14 = ATgetFirst((ATermList) t);
                                if((ATgetSymbol((ATermAppl) y_14) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                                  _fail(t);
                                {
                                  ATerm z_14 = (ATerm) ATgetNext((ATermList) t);
                                  if(((ATgetType(z_14) != AT_LIST) || !(ATisEmpty(z_14))))
                                    _fail(t);
                                }
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)));
                            LocalPopChoice(x_14);
                          }
                        else
                          {
                            t = w_14;
                            {
                              ATerm c_15 = t;
                              int d_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = SSLgetAnnotations(v_17);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm e_15 = ATgetFirst((ATermList) t);
                                      if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("unbound", 0, ATtrue)))
                                        _fail(t);
                                      {
                                        ATerm f_15 = (ATerm) ATgetNext((ATermList) t);
                                        if(((ATgetType(f_15) != AT_LIST) || !(ATisEmpty(f_15))))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)));
                                  LocalPopChoice(d_15);
                                }
                              else
                                {
                                  t = c_15;
                                  {
                                    ATerm g_15 = t;
                                    int i_15 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = SSLgetAnnotations(v_17);
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, w_17)));
                                        LocalPopChoice(i_15);
                                      }
                                    else
                                      {
                                        t = g_15;
                                        t = SSLgetAnnotations(v_17);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm j_15 = ATgetFirst((ATermList) t);
                                            if((ATgetSymbol((ATermAppl) j_15) != ATmakeSymbol("bound", 0, ATtrue)))
                                              _fail(t);
                                            {
                                              ATerm k_15 = (ATerm) ATgetNext((ATermList) t);
                                              if(((ATgetType(k_15) != AT_LIST) || !(ATisEmpty(k_15))))
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
                            ATerm r_18 = NULL,h_16 = NULL,i_16 = NULL,k_16 = NULL,h_15 = NULL;
                            t = SSL_explode_string(w_17);
                            t = escape_chars_1_0(m_1, t);
                            h_15 = t;
                            t = SSL_implode_string(h_15);
                            i_16 = t;
                            t = SSL_explode_string(i_16);
                            k_16 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_16), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
                            t = conc_0_0(t);
                            h_16 = t;
                            t = SSL_implode_string(h_16);
                            r_18 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_15), term_q_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, r_18)))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Real_1))
                            {
                              w_17 = ATgetArgument(t, 0);
                              {
                                ATerm o_16 = NULL;
                                t = SSL_real_to_string(w_17);
                                o_16 = t;
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, o_16))));
                              }
                            }
                          else
                            {
                              ATerm y_16 = NULL;
                              if(match_cons(t, sym_Int_1))
                                {
                                  w_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSL_int_to_string(w_17);
                              y_16 = t;
                              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, y_16))));
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
  ATerm h_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,q_23 = NULL,t_23 = NULL,u_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_23;
  if(match_string(t, "Cons"))
    {
      ATerm x_22 = NULL;
      t = u_23;
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
          l_23 = ATgetFirst((ATermList) t);
          m_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_23;
      {
        ATerm x_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,m_26 = NULL,n_26 = NULL;
            if(match_cons(t, sym_TypeCast_2))
              {
                k_24 = ATgetArgument(t, 0);
                r_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_24;
            if(match_cons(t, sym_TypeName_2))
              {
                l_24 = ATgetArgument(t, 0);
                q_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_24;
            if(match_cons(t, sym_TypeSpec_3))
              {
                m_24 = ATgetArgument(t, 0);
                n_24 = ATgetArgument(t, 1);
                p_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_24;
            if(match_cons(t, sym_TypeId_1))
              {
                o_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_24;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATerm", 0, ATtrue)))
              _fail(t);
            t = p_24;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_24;
            if(!(match_cons(t, sym_None_0)))
              _fail(t);
            t = r_24;
            if(match_cons(t, sym_Id_1))
              {
                m_26 = ATgetArgument(t, 0);
                {
                  ATerm s_26 = NULL,r_7 = NULL;
                  t = SSLgetAnnotations(r_24);
                  s_26 = t;
                  t = m_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, m_26);
                  r_7 = t;
                  t = SSLsetAnnotations(r_7, s_26);
                }
              }
            else
              {
                ATerm x_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,a_8 = NULL,z_7 = NULL,y_7 = NULL;
                if(match_cons(t, sym_FunCall_2))
                  {
                    m_26 = ATgetArgument(t, 0);
                    n_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_24);
                x_26 = t;
                t = m_26;
                if(match_cons(t, sym_Id_1))
                  {
                    g_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_26);
                f_27 = t;
                t = g_27;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATinsert", 0, ATtrue)))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Id_1, g_27);
                y_7 = t;
                t = SSLsetAnnotations(y_7, f_27);
                h_27 = t;
                t = n_26;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_27 = ATgetFirst((ATermList) t);
                    c_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_26);
                a_27 = t;
                t = c_27;
                t = Cons_2_0(_id, n_1, t);
                d_27 = t;
                t = (ATerm) ATinsert(CheckATermList(d_27), b_27);
                z_7 = t;
                t = SSLsetAnnotations(z_7, a_27);
                e_27 = t;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, h_27, e_27);
                a_8 = t;
                t = SSLsetAnnotations(a_8, x_26);
              }
            LocalPopChoice(z_15);
          }
        else
          {
            t = x_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_b_16, (ATerm) ATinsert(ATempty, l_23));
          }
      }
      x_22 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, h_23), x_22)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = u_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_16;
    }
  return(t);
}
static ATerm r_53 (ATerm e_28, ATerm f_28, ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm r_28 = NULL,t_28 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  t = e_28;
  {
    ATerm m_16 = t;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL;
        v_28 = t;
        if(match_string(t, "Nil"))
          {
            t = v_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = v_28;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_16;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, f_28, term_x_13);
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
      if(match_cons(t, sym__2))
        {
          w_28 = ATgetArgument(t, 0);
          x_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_28);
      b_29 = t;
      t = w_28;
      if(match_cons(t, sym_Var_1))
        {
          d_29 = ATgetArgument(t, 0);
          {
            ATerm n_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_29 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_29)), g_28));
                m_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_29)), g_28)));
                t = r_9(w_28, d_29, m_29, t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = n_16;
                {
                  ATerm n_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_29)), g_28));
                  n_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_29)), g_28)));
                  t = q_9(w_28, n_29, t);
                }
              }
          }
        }
      else
        {
          ATerm o_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_29)), g_28));
          o_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_29)), g_28)));
          t = q_9(w_28, o_29, t);
        }
      y_28 = t;
      t = term_y_13;
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, term_y_13);
      t = p_10(x_28, c_29, t);
      z_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, z_28);
      return(t);
    }
    t = thread_map_1_0(q_1, t);
  }
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_28;
  t = foldr_3_0(s_1, t_1, u_1, t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, t_28);
  n_27 = t;
  t = term_j_14;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, e_28, t_28));
  t = b_10(o_27, n_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_27)), g_28)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, r_28), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm t_53 (ATerm s_29, ATerm t_29, ATerm a_30, ATerm t)
{
  ATerm e_30 = NULL;
  t = SSL_real_to_string(s_29);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, t_29)), term_a_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_17, t_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, e_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm u_53 (ATerm f_30, ATerm g_30, ATerm j_30, ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_int_to_string(f_30);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, g_30)), term_i_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_17, g_30))), (ATerm) ATmakeAppl(sym_IntConst_1, p_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm v_53 (ATerm q_30, ATerm r_30, ATerm y_30, ATerm z_30, ATerm t)
{
  t = SSLgetAnnotations(q_30);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, r_30), term_q_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, r_30), y_30)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, y_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, r_30), term_w_11, y_30)));
  return(t);
}
static ATerm w_53 (ATerm f_31, ATerm h_31, ATerm p_32, ATerm r_32, ATerm t)
{
  t = SSLgetAnnotations(f_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("(un)bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(q_17) != AT_LIST) || !(ATisEmpty(q_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, h_31), term_q_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, h_31), p_32)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, p_32))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, h_31), term_w_11, p_32)));
  return(t);
}
static ATerm x_53 (ATerm b_35, ATerm c_35, ATerm t_38, ATerm a_39, ATerm t)
{
  t = SSLgetAnnotations(b_35);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("bound", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, c_35), t_38), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, t_38))))));
  return(t);
}
static ATerm a_54 (ATerm c_40, ATerm g_40, ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSLgetAnnotations(c_40);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_17 = ATgetFirst((ATermList) t);
      if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_40), term_w_11, o_40));
  return(t);
}
static ATerm b_54 (ATerm c_41, ATerm d_41, ATerm h_41, ATerm i_41, ATerm j_41, ATerm k_41, ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm z_41 = NULL,b_42 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = d_41;
  {
    ATerm y_17 = t;
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
        t = y_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, i_41, term_x_13);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,k_42 = NULL,p_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm z_17 = ATgetArgument(t, 0);
          if(match_cons(z_17, sym_Var_1))
            {
              f_42 = ATgetArgument(z_17, 0);
            }
          else
            _fail(t);
          g_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_42);
      h_42 = t;
      t = term_y_13;
      p_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_42, term_y_13);
      t = p_10(g_42, p_42, t);
      k_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_42), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, h_42)), (ATerm) ATmakeAppl(sym_Id_1, c_41))))), k_42);
      return(t);
    }
    t = thread_map_1_0(v_1, t);
  }
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      {
        ATerm a_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_41, h_41);
  s_27 = t;
  t = term_j_14;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, d_41, h_41));
  t = b_10(t_27, s_27, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_41, (ATerm) ATinsert(ATempty, j_41));
  t = conc_0_0(t);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, r_27)), (ATerm) ATmakeAppl(sym_Id_1, c_41))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, b_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, c_41), k_41, l_41))));
  return(t);
}
static ATerm c_54 (ATerm q_42, ATerm t_42, ATerm d_43, ATerm e_43, ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm n_43 = NULL;
  t = SSL_real_to_string(t_42);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, n_43)), (ATerm) ATmakeAppl(sym_Id_1, q_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, d_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, q_42), e_43, f_43))));
  return(t);
}
static ATerm d_54 (ATerm s_43, ATerm w_43, ATerm x_43, ATerm z_43, ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm l_44 = NULL;
  t = SSL_int_to_string(w_43);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, l_44)), (ATerm) ATmakeAppl(sym_Id_1, s_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, s_43), z_43, c_44))));
  return(t);
}
static ATerm e_54 (ATerm m_44, ATerm n_44, ATerm q_44, ATerm t)
{
  t = n_44;
  {
    ATerm j_18 = t;
    if((PushChoice() == 0))
      {
        ATerm z_44 = NULL,a_45 = NULL,c_45 = NULL,m_8 = NULL;
        c_45 = t;
        if(match_cons(t, sym_Var_1))
          {
            a_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_45);
        z_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_45);
        m_8 = t;
        t = SSLsetAnnotations(m_8, z_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_18;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_44)));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm p_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(p_29, r_29, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm z_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym_SVar_1))
        {
          z_46 = ATgetArgument(k_18, 0);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(((ATgetType(l_18) != AT_LIST) || !(ATisEmpty(l_18))))
          _fail(t);
      }
      {
        ATerm m_18 = ATgetArgument(t, 2);
        if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, z_46);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = topdown_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(c_2, t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm t_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym_SVar_1))
        {
          t_47 = ATgetArgument(u_18, 0);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) != AT_LIST) || !(ATisEmpty(v_18))))
          _fail(t);
      }
      {
        ATerm w_18 = ATgetArgument(t, 2);
        if(((ATgetType(w_18) != AT_LIST) || !(ATisEmpty(w_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Id_1, t_47);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = topdown_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(g_2, t);
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ConstructTerm_0_0(t);
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
          }
      }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_49), term_i_11), term_d_19);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_50;
  if(match_cons(t, sym_Var_1))
    {
      f_50 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_50;
            t = r_9(h_50, f_50, i_50, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = g_50;
            t = q_9(h_50, i_50, t);
          }
      }
    }
  else
    {
      t = g_50;
      t = q_9(h_50, i_50, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_27 = ATgetFirst((ATermList) t);
      a_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_27;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_28), term_b_14), term_z_13);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_28), term_z_13), term_z_13);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_28), term_d_14), term_z_13);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_28), term_f_14), term_z_13);
            }
        }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm f_29 = NULL,j_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_29 = ATgetFirst((ATermList) t);
      j_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(j_29), term_b_14), term_z_13);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_29), term_z_13), term_z_13);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(j_29), term_d_14), term_z_13);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(j_29), term_f_14), term_z_13);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,r_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  g_46 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
      {
        ATerm k_46 = NULL,l_46 = NULL;
        t = h_46;
        t = map_1_0(SDefToDeclaration_0_0, t);
        k_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_46, h_46);
        t = conc_0_0(t);
        l_46 = t;
        t = (ATerm) ATmakeAppl(sym_Compound_2, l_46, (ATerm) ATinsert(ATempty, e_46));
      }
    }
  else
    {
      if(match_cons(t, sym_Where_1))
        {
          h_46 = ATgetArgument(t, 0);
          {
            ATerm n_46 = NULL;
            t = g_46;
            t = new_0_0(t);
            n_46 = t;
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_46), term_i_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, n_46)))), term_h_19), h_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_46), term_w_11, term_d_11))));
          }
        }
      else
        {
          if(match_cons(t, sym_Test_1))
            {
              h_46 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, h_46);
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  h_46 = ATgetArgument(t, 0);
                  e_46 = ATgetArgument(t, 1);
                  b_46 = ATgetArgument(t, 2);
                  {
                    ATerm u_46 = NULL,v_46 = NULL,y_46 = NULL;
                    t = h_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        f_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_46;
                    t = map_1_0(x_1, t);
                    u_46 = t;
                    t = b_46;
                    t = map_1_0(y_1, t);
                    v_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_11)), v_46), u_46);
                    t = concat_0_0(t);
                    y_46 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, f_46), y_46)));
                  }
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      h_46 = ATgetArgument(t, 0);
                      e_46 = ATgetArgument(t, 1);
                      b_46 = ATgetArgument(t, 2);
                      {
                        ATerm o_47 = NULL,p_47 = NULL,s_47 = NULL;
                        t = e_46;
                        t = map_1_0(d_2, t);
                        o_47 = t;
                        t = b_46;
                        t = map_1_0(e_2, t);
                        p_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, o_47, p_47);
                        t = conc_0_0(t);
                        s_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_46), s_47)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          h_46 = ATgetArgument(t, 0);
                          {
                            ATerm f_48 = NULL;
                            t = g_46;
                            t = new_0_0(t);
                            f_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, f_48), term_i_11), term_i_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11)))), term_q_19), h_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, f_48))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              h_46 = ATgetArgument(t, 0);
                              e_46 = ATgetArgument(t, 1);
                              {
                                ATerm m_48 = NULL;
                                t = g_46;
                                t = new_0_0(t);
                                m_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, m_48), term_i_11), term_i_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_u_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, m_48))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GChoice_2))
                                {
                                  h_46 = ATgetArgument(t, 0);
                                  e_46 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, h_46, e_46);
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      h_46 = ATgetArgument(t, 0);
                                      e_46 = ATgetArgument(t, 1);
                                      b_46 = ATgetArgument(t, 2);
                                      {
                                        ATerm z_48 = NULL,b_49 = NULL;
                                        t = g_46;
                                        t = new_0_0(t);
                                        z_48 = t;
                                        t = new_0_0(t);
                                        b_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_49), term_i_11), term_z_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_48), term_i_11), term_i_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, b_49))))), term_h_19), h_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, z_48))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          h_46 = ATgetArgument(t, 0);
                                          e_46 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_46, term_c_20, e_46);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              h_46 = ATgetArgument(t, 0);
                                              e_46 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_46, e_46);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  h_46 = ATgetArgument(t, 0);
                                                  e_46 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_46), h_46));
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Scope_2))
                                                    {
                                                      h_46 = ATgetArgument(t, 0);
                                                      e_46 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm t_49 = NULL;
                                                        t = h_46;
                                                        t = map_1_0(h_2, t);
                                                        t_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, t_49)), (ATerm) ATinsert(ATempty, e_46));
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_d_20;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Match_2))
                                                                {
                                                                  h_46 = ATgetArgument(t, 0);
                                                                  e_46 = ATgetArgument(t, 1);
                                                                  t = h_46;
                                                                  if(match_cons(t, sym_Op_2))
                                                                    {
                                                                      f_46 = ATgetArgument(t, 0);
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
                                                                                  t = f_46;
                                                                                  if(match_string(t, "Cons"))
                                                                                    {
                                                                                      ATerm e_20 = t;
                                                                                      int f_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm e_50 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_45, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, e_46)))))), (ATerm) ATmakeAppl(sym__2, d_45, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, e_46)))));
                                                                                          t = map_1_0(j_2, t);
                                                                                          e_50 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, e_46)), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, e_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, e_50), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                          LocalPopChoice(f_20);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_20;
                                                                                          t = r_53(f_46, h_45, e_46, g_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_53(f_46, h_45, e_46, g_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_46;
                                                                                  t = r_53(f_46, h_45, e_46, g_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_46;
                                                                              t = r_53(f_46, h_45, e_46, g_46, t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                            {
                                                                              t = f_46;
                                                                              if(match_string(t, "Nil"))
                                                                                {
                                                                                  ATerm s_20 = t;
                                                                                  int t_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, e_46)), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, e_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                      LocalPopChoice(t_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_20;
                                                                                      t = r_53(f_46, h_45, e_46, g_46, t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = r_53(f_46, h_45, e_46, g_46, t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_46;
                                                                              t = r_53(f_46, h_45, e_46, g_46, t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Real_1))
                                                                        {
                                                                          f_46 = ATgetArgument(t, 0);
                                                                          t = t_53(f_46, e_46, g_46, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              f_46 = ATgetArgument(t, 0);
                                                                              t = u_53(f_46, e_46, g_46, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  f_46 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm z_50 = NULL,k_28 = NULL,l_28 = NULL,n_28 = NULL,v_27 = NULL;
                                                                                    t = SSL_explode_string(f_46);
                                                                                    t = escape_chars_1_0(k_2, t);
                                                                                    v_27 = t;
                                                                                    t = SSL_implode_string(v_27);
                                                                                    l_28 = t;
                                                                                    t = SSL_explode_string(l_28);
                                                                                    n_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_28), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
                                                                                    t = conc_0_0(t);
                                                                                    k_28 = t;
                                                                                    t = SSL_implode_string(k_28);
                                                                                    z_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_20, e_46))), (ATerm) ATmakeAppl(sym_FunCall_2, term_n_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_15), term_q_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, z_50))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SeqVar_1))
                                                                                    {
                                                                                      f_46 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_w_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, e_46)), (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, (ATerm) ATmakeAppl(sym_Id_1, f_46)))))))), (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_q_14), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_w_11, term_l_16)))))));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          f_46 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm c_21 = t;
                                                                                            int d_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = v_53(h_46, f_46, e_46, g_46, t);
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
                                                                                                      t = w_53(h_46, f_46, e_46, g_46, t);
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
                                                                                                            t = x_53(h_46, f_46, e_46, g_46, t);
                                                                                                            LocalPopChoice(h_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = g_21;
                                                                                                            t = a_54(h_46, f_46, e_46, g_46, t);
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
                                                                                              f_46 = ATgetArgument(t, 0);
                                                                                              h_45 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, h_45, e_46)), (ATerm) ATmakeAppl(sym_Match_2, f_46, e_46)));
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
                                                                                                  t = term_d_20;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = i_21;
                                                                                                  if(!(match_cons(t, sym_Wld_0)))
                                                                                                    _fail(t);
                                                                                                  t = term_d_20;
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
                                                                      h_46 = ATgetArgument(t, 0);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_2, h_46, term_d_11);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Case_3))
                                                                        {
                                                                          h_46 = ATgetArgument(t, 0);
                                                                          e_46 = ATgetArgument(t, 1);
                                                                          b_46 = ATgetArgument(t, 2);
                                                                          t = h_46;
                                                                          if(match_cons(t, sym_Var_1))
                                                                            {
                                                                              f_46 = ATgetArgument(t, 0);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = e_46;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              d_46 = ATgetFirst((ATermList) t);
                                                                              a_46 = (ATerm) ATgetNext((ATermList) t);
                                                                              t = d_46;
                                                                              if(match_cons(t, sym_Alt_3))
                                                                                {
                                                                                  u_45 = ATgetArgument(t, 0);
                                                                                  y_45 = ATgetArgument(t, 1);
                                                                                  z_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = u_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  v_45 = ATgetArgument(t, 0);
                                                                                  t_45 = ATgetArgument(t, 1);
                                                                                  t = y_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_45 = ATgetFirst((ATermList) t);
                                                                                      m_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = m_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          n_45 = ATgetFirst((ATermList) t);
                                                                                          r_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = r_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = n_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  o_45 = ATgetArgument(t, 0);
                                                                                                  t = i_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      j_45 = ATgetArgument(t, 0);
                                                                                                      t = t_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = v_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm l_21 = t;
                                                                                                              int m_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46))), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_45), term_w_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, (ATerm) ATmakeAppl(sym_Id_1, f_46)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_45), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, (ATerm) ATmakeAppl(sym_Id_1, f_46)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_46), a_46, b_46))));
                                                                                                                  LocalPopChoice(m_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_21;
                                                                                                                  t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = v_45;
                                                                                                          t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_45;
                                                                                                      t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_45;
                                                                                                  t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_45;
                                                                                              t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_45;
                                                                                          t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = t_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = v_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm n_21 = t;
                                                                                                  int o_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46))), term_p_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, z_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_46), a_46, b_46))));
                                                                                                      LocalPopChoice(o_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_21;
                                                                                                      t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_45;
                                                                                              t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_45;
                                                                                          t = b_54(f_46, v_45, t_45, y_45, z_45, a_46, b_46, g_46, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      v_45 = ATgetArgument(t, 0);
                                                                                      t = c_54(f_46, v_45, z_45, a_46, b_46, g_46, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          v_45 = ATgetArgument(t, 0);
                                                                                          t = d_54(f_46, v_45, z_45, a_46, b_46, g_46, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm p_52 = NULL,w_29 = NULL,x_29 = NULL,z_29 = NULL,o_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              v_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(v_45);
                                                                                          t = escape_chars_1_0(l_2, t);
                                                                                          o_28 = t;
                                                                                          t = SSL_implode_string(o_28);
                                                                                          x_29 = t;
                                                                                          t = SSL_explode_string(x_29);
                                                                                          z_29 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_29), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
                                                                                          t = conc_0_0(t);
                                                                                          w_29 = t;
                                                                                          t = SSL_implode_string(w_29);
                                                                                          p_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, p_52))), (ATerm) ATmakeAppl(sym_Id_1, f_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, z_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_46), a_46, b_46))));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              t = b_46;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Case_4))
                                                                            {
                                                                              h_46 = ATgetArgument(t, 0);
                                                                              e_46 = ATgetArgument(t, 1);
                                                                              b_46 = ATgetArgument(t, 2);
                                                                              c_46 = ATgetArgument(t, 3);
                                                                              t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, h_46), (ATerm) ATmakeAppl(sym_Case_3, e_46, b_46, c_46));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Continue_1))
                                                                                {
                                                                                  h_46 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, h_46));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Assign_2))
                                                                                    {
                                                                                      h_46 = ATgetArgument(t, 0);
                                                                                      e_46 = ATgetArgument(t, 1);
                                                                                      t = h_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          f_46 = ATgetArgument(t, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = e_46;
                                                                                      if(match_cons(t, sym_Var_1))
                                                                                        {
                                                                                          d_46 = ATgetArgument(t, 0);
                                                                                          {
                                                                                            ATerm r_21 = t;
                                                                                            int s_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_q_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, f_46), (ATerm) ATmakeAppl(sym_Id_1, d_46))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, d_46)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_w_11, (ATerm) ATmakeAppl(sym_Id_1, d_46))));
                                                                                                LocalPopChoice(s_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_21;
                                                                                                t = e_54(f_46, e_46, g_46, t);
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_54(f_46, e_46, g_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Assign_1))
                                                                                        {
                                                                                          h_46 = ATgetArgument(t, 0);
                                                                                          t = h_46;
                                                                                          if(match_cons(t, sym_Var_1))
                                                                                            {
                                                                                              f_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_46), term_w_11, term_d_11));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm q_53 = NULL;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              h_46 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_46;
                                                                                          t = construct_term_caching_0_0(t);
                                                                                          q_53 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, q_53));
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
ATerm escape_chars_1_0 (ATerm k_154 (ATerm), ATerm t)
{
  static ATerm n_55 (ATerm t);
  static ATerm n_55 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,u_54 = NULL,p_8 = NULL;
        t = k_154(t);
        u_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_54 = ATgetFirst((ATermList) t);
            q_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_54);
        o_54 = t;
        t = q_54;
        t = Cons_2_0(_id, n_55, t);
        r_54 = t;
        t = (ATerm) ATinsert(CheckATermList(r_54), p_54);
        p_8 = t;
        t = SSLsetAnnotations(p_8, o_54);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
          l_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_55 = ATgetFirst((ATermList) t);
              k_55 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm k_30 = NULL,s_30 = NULL,q_8 = NULL;
                t = SSLgetAnnotations(l_55);
                k_30 = t;
                t = k_55;
                t = n_55(t);
                s_30 = t;
                t = (ATerm) ATinsert(CheckATermList(s_30), j_55);
                q_8 = t;
                t = SSLsetAnnotations(q_8, k_30);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_55;
            }
        }
      }
    return(t);
  }
  t = n_55(t);
  return(t);
}
static ATerm x_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,u_55 = NULL,x_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, x_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      u_55 = ATgetArgument(t, 0);
      p_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_1, p_55);
  t = d_1(t);
  if(match_cons(t, sym__2))
    {
      x_55 = ATgetArgument(t, 0);
      q_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_55), u_55), q_55);
  return(t);
}
ATerm thread_map_1_0 (ATerm i_151 (ATerm), ATerm t)
{
  static ATerm t_56 (ATerm t);
  static ATerm t_56 (ATerm t)
  {
    ATerm b_56 = NULL,d_56 = NULL,g_56 = NULL,j_56 = NULL,k_56 = NULL;
    g_56 = t;
    if(match_cons(t, sym__2))
      {
        j_56 = ATgetArgument(t, 0);
        k_56 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_56 = ATgetFirst((ATermList) t);
        d_56 = (ATerm) ATgetNext((ATermList) t);
        t = g_56;
        t = x_9(i_151, t_56, b_56, d_56, k_56, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_56);
      }
    return(t);
  }
  t = t_56(t);
  return(t);
}
static ATerm h_61 (ATerm l_58, ATerm m_58, ATerm n_58, ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm u_58 = NULL,w_58 = NULL,x_58 = NULL,g_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = l_58;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_58 = NULL;
        y_58 = t;
        if(match_string(t, "Nil"))
          {
            t = y_58;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = y_58;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
  }
  t = m_58;
  t = map_1_0(m_2, t);
  t = (ATerm) ATmakeAppl(sym__2, m_58, term_x_13);
  t = thread_map_1_0(n_2, t);
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      {
        ATerm w_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_58;
  t = foldr_3_0(o_2, p_2, q_2, t);
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_58, x_58);
  l_31 = t;
  t = term_j_14;
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, l_58, x_58));
  t = b_10(m_31, l_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_58, (ATerm) ATinsert(ATempty, n_58));
  t = conc_0_0(t);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, g_31)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, w_58), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_58)));
  return(t);
}
static ATerm i_61 (ATerm m_59, ATerm n_59, ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm t_59 = NULL;
  t = SSL_real_to_string(m_59);
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, t_59)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_59)));
  return(t);
}
static ATerm j_61 (ATerm u_59, ATerm v_59, ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm b_60 = NULL;
  t = SSL_int_to_string(u_59);
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, b_60)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, v_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_59)));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,u_8 = NULL;
  b_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_59);
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_59);
  u_8 = t;
  t = SSLsetAnnotations(u_8, z_58);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Var_1))
        {
          c_59 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(d_59);
  g_59 = t;
  t = term_y_13;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_59, term_y_13);
  t = p_10(d_59, i_59, t);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, c_59), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, g_59)), term_d_11)))), h_59);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  if(match_cons(t, sym__2))
    {
      k_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(k_59, l_59, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_31 = ATgetFirst((ATermList) t);
      t_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_31;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_b_14), term_z_13);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_z_13), term_z_13);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_d_14), term_z_13);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_f_14), term_z_13);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
  j_60 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      k_60 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
      o_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_60;
  if(match_cons(t, sym_Match_1))
    {
      l_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_60;
  if(match_cons(t, sym_Op_2))
    {
      m_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
      t = i_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_60 = ATgetFirst((ATermList) t);
          e_60 = (ATerm) ATgetNext((ATermList) t);
          t = e_60;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_60 = ATgetFirst((ATermList) t);
              h_60 = (ATerm) ATgetNext((ATermList) t);
              t = h_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = f_60;
                  if(match_cons(t, sym_Var_1))
                    {
                      g_60 = ATgetArgument(t, 0);
                      t = c_60;
                      if(match_cons(t, sym_Var_1))
                        {
                          d_60 = ATgetArgument(t, 0);
                          t = m_60;
                          if(match_string(t, "Cons"))
                            {
                              ATerm z_21 = t;
                              int a_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_d_11)), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, term_d_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_60), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_60), term_w_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_60), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_60)));
                                  LocalPopChoice(a_22);
                                }
                              else
                                {
                                  t = z_21;
                                  t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                                }
                            }
                          else
                            {
                              t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                            }
                        }
                      else
                        {
                          t = m_60;
                          t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                        }
                    }
                  else
                    {
                      t = m_60;
                      t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                    }
                }
              else
                {
                  t = m_60;
                  t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                }
            }
          else
            {
              t = m_60;
              t = h_61(m_60, i_60, n_60, o_60, j_60, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = m_60;
              if(match_string(t, "Nil"))
                {
                  ATerm c_22 = t;
                  int d_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_d_11)), term_p_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, term_d_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_60)));
                      LocalPopChoice(d_22);
                    }
                  else
                    {
                      t = c_22;
                      t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                    }
                }
              else
                {
                  t = h_61(m_60, i_60, n_60, o_60, j_60, t);
                }
            }
          else
            {
              t = m_60;
              t = h_61(m_60, i_60, n_60, o_60, j_60, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          m_60 = ATgetArgument(t, 0);
          t = i_61(m_60, n_60, o_60, j_60, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              m_60 = ATgetArgument(t, 0);
              t = j_61(m_60, n_60, o_60, j_60, t);
            }
          else
            {
              ATerm y_60 = NULL,y_31 = NULL,z_31 = NULL,b_32 = NULL,o_31 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  m_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(m_60);
              t = escape_chars_1_0(r_2, t);
              o_31 = t;
              t = SSL_implode_string(o_31);
              z_31 = t;
              t = SSL_explode_string(z_31);
              b_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_32), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
              t = conc_0_0(t);
              y_31 = t;
              t = SSL_implode_string(y_31);
              y_60 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, y_60))), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_60)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = topdown_1_0(j_137, t);
    return(t);
  }
  t = j_137(t);
  t = SRTS_all(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL;
  v_61 = t;
  if(match_cons(t, sym_SeqVar_1))
    {
      u_61 = ATgetArgument(t, 0);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_32 = NULL,g_32 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(v_61);
            e_32 = t;
            t = u_61;
            if(match_cons(t, sym_Var_1))
              {
                g_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SeqVar_1, g_32);
            d_9 = t;
            t = SSLsetAnnotations(d_9, e_32);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = v_61;
          }
      }
    }
  else
    {
      t = v_61;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = repeat_2_0(i_3, _id, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TranslateDef_0_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TranslateStratMatchGuard_0_0(t);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = TranslateStrat_0_0(t);
          }
      }
    }
  return(t);
}
ATerm translate_body_0_0 (ATerm t)
{
  t = topdown_1_0(u_2, t);
  t = topdown_1_0(b_3, t);
  return(t);
}
ATerm TranslateDef_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  r_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_62 = ATgetArgument(t, 0);
      t_62 = ATgetArgument(t, 1);
      u_62 = ATgetArgument(t, 2);
      v_62 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
        t = s_62;
        t = is_local_function_0_0(t);
        t = t_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        a_63 = t;
        t = u_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        b_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_63, b_63);
        t = conc_0_0(t);
        c_63 = t;
        t = v_62;
        t = translate_body_0_0(t);
        d_63 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, c_63, (ATerm) ATinsert(ATempty, term_n_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_11), term_h_19), d_63)));
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm v_32 = NULL,w_32 = NULL,y_32 = NULL,z_32 = NULL;
          t = s_62;
          {
            ATerm o_22 = t;
            if((PushChoice() == 0))
              {
                t = is_local_function_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_22;
              }
          }
          t = t_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          v_32 = t;
          t = u_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          w_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
          t = conc_0_0(t);
          y_32 = t;
          t = v_62;
          t = translate_body_0_0(t);
          z_32 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_z_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, s_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, y_32, (ATerm) ATinsert(ATempty, term_n_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_11), term_h_19), z_32)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_151 (ATerm), ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
  u_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_63;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_63 = ATgetFirst((ATermList) t);
          w_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_33 = NULL,m_33 = NULL,n_33 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(u_63);
            j_33 = t;
            t = v_63;
            t = v_151(t);
            m_33 = t;
            t = w_63;
            t = filter_1_0(v_151, t);
            n_33 = t;
            t = (ATerm) ATinsert(CheckATermList(n_33), m_33);
            f_9 = t;
            t = SSLsetAnnotations(f_9, j_33);
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = w_63;
            t = filter_1_0(v_151, t);
          }
      }
    }
  return(t);
}
ATerm TranslateType_0_0 (ATerm t)
{
  ATerm e_64 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_FunType_2))
        {
          e_64 = ATgetArgument(t, 0);
          {
            ATerm t_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_22);
      {
        ATerm g_64 = NULL;
        t = e_64;
        t = map_1_0(TranslateType_0_0, t);
        g_64 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_ParamList_1, g_64));
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
      t = term_z_9;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_64;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            n_64 = ATgetArgument(t, 0);
            {
              ATerm y_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_22);
        {
          ATerm q_64 = NULL;
          t = n_64;
          t = map_1_0(TranslateType_0_0, t);
          q_64 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, q_64)))));
        }
      }
    else
      {
        t = v_22;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm z_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_z_9, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, l_64), term_i_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      ATerm s_64 = NULL,t_64 = NULL;
      if(match_cons(t, sym__2))
        {
          s_64 = ATgetArgument(t, 0);
          t_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(s_64, t_64);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = SSL_gtr(s_64, t_64);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = map_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm a_65 = NULL;
  a_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_23, a_65);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, a_65, term_e_23);
  t = leq_0_0(t);
  t = a_65;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,h_9 = NULL;
  u_64 = t;
  t = SSL_explode_string(u_64);
  z_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_64 = ATgetFirst((ATermList) t);
      x_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_64);
  v_64 = t;
  t = w_64;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_23, w_64);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, w_64, term_j_23);
        t = leq_0_0(t);
        t = w_64;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATmakeAppl(sym__2, term_n_23, w_64);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, w_64, term_o_23);
        t = leq_0_0(t);
        t = w_64;
      }
  }
  t = x_64;
  t = Cons_2_0(j_3, k_3, t);
  y_64 = t;
  t = (ATerm) ATinsert(CheckATermList(y_64), w_64);
  h_9 = t;
  t = SSLsetAnnotations(h_9, v_64);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  t_65 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      u_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
      w_65 = ATgetArgument(t, 2);
      {
        ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
        t = v_65;
        t = map_1_0(TranslateVarDec_0_0, t);
        b_66 = t;
        t = w_65;
        t = map_1_0(TranslateVarDec_0_0, t);
        c_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_66, c_66);
        t = conc_0_0(t);
        d_66 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, d_66, (ATerm) ATinsert(ATempty, term_n_11)))))));
      }
    }
  else
    {
      ATerm p_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              u_65 = ATgetArgument(t, 0);
              v_65 = ATgetArgument(t, 1);
              w_65 = ATgetArgument(t, 2);
              {
                ATerm s_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(r_23);
          {
            ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
            t = v_65;
            t = map_1_0(TranslateVarDec_0_0, t);
            h_66 = t;
            t = w_65;
            t = map_1_0(TranslateVarDec_0_0, t);
            i_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_66, i_66);
            t = conc_0_0(t);
            j_66 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, j_66, (ATerm) ATinsert(ATempty, term_n_11)))))));
          }
        }
      else
        {
          t = p_23;
          if(match_cons(t, sym_SDefT_4))
            {
              u_65 = ATgetArgument(t, 0);
              v_65 = ATgetArgument(t, 1);
              w_65 = ATgetArgument(t, 2);
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
                ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
                t = u_65;
                t = is_local_function_0_0(t);
                t = v_65;
                t = map_1_0(TranslateVarDec_0_0, t);
                n_66 = t;
                t = w_65;
                t = map_1_0(TranslateVarDec_0_0, t);
                o_66 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_66, o_66);
                t = conc_0_0(t);
                p_66 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, p_66, (ATerm) ATinsert(ATempty, term_n_11)))))));
                LocalPopChoice(x_23);
              }
            else
              {
                t = w_23;
                {
                  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
                  t = u_65;
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
                  t = v_65;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  z_33 = t;
                  t = w_65;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  a_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
                  t = conc_0_0(t);
                  b_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, b_34, (ATerm) ATinsert(ATempty, term_n_11)))))));
                }
              }
          }
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL;
  if(match_cons(t, sym__2))
    {
      f_67 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(f_67, g_67, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm c_10 (ATerm l_40, ATerm j_40, ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,x_66 = NULL,z_66 = NULL,a_67 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,d_67 = NULL;
  t = j_40;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            d_67 = ATgetArgument(t, 0);
            {
              ATerm b_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_24);
        t = d_67;
        t = foldr_3_0(m_3, n_3, o_3, t);
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
        t = term_x_13;
      }
  }
  v_66 = t;
  t = SSL_int_to_string(v_66);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_40, v_66);
  l_34 = t;
  t = term_j_14;
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, l_40, v_66));
  t = b_10(m_34, l_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_24) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(l_40);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_66), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
  t = conc_0_0(t);
  a_67 = t;
  t = SSL_implode_string(a_67);
  x_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, k_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_34), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), (ATerm) ATmakeAppl(sym_IntConst_1, u_66)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, x_66)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_67 = ATgetFirst((ATermList) t);
      l_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_67;
  if(match_int(t, 95))
    {
      ATerm n_67 = NULL;
      t = l_67;
      t = t_0(t);
      n_67 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_67), term_i_24), term_i_24);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm p_67 = NULL;
          t = l_67;
          t = t_0(t);
          p_67 = t;
          t = (ATerm) ATinsert(CheckATermList(p_67), term_i_24);
        }
      else
        {
          ATerm r_67 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = l_67;
          t = t_0(t);
          r_67 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_67), term_i_24), term_j_24), term_i_24);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm h_154 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  v_67 = t;
  t = SSL_explode_string(v_67);
  {
    static ATerm r_68 (ATerm t);
    static ATerm r_68 (ATerm t)
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_154(r_68, t);
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          {
            ATerm e_68 = NULL,f_68 = NULL,n_68 = NULL;
            n_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_68 = ATgetFirst((ATermList) t);
                f_68 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm r_34 = NULL,u_34 = NULL,j_9 = NULL;
                  t = SSLgetAnnotations(n_68);
                  r_34 = t;
                  t = f_68;
                  t = r_68(t);
                  u_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_34), e_68);
                  j_9 = t;
                  t = SSLsetAnnotations(j_9, r_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_68;
              }
          }
        }
      return(t);
    }
    t = r_68(t);
  }
  u_67 = t;
  t = SSL_implode_string(u_67);
  return(t);
}
ATerm foldr_3_0 (ATerm t_150 (ATerm), ATerm u_150 (ATerm), ATerm v_150 (ATerm), ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
  u_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_68;
      t = t_150(t);
    }
  else
    {
      ATerm z_68 = NULL,a_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_68 = ATgetFirst((ATermList) t);
          w_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_68;
      t = v_150(t);
      z_68 = t;
      t = w_68;
      t = foldr_3_0(t_150, u_150, v_150, t);
      a_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_68, a_69);
      t = u_150(t);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL;
  if(match_cons(t, sym__2))
    {
      n_69 = ATgetArgument(t, 0);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(n_69, o_69, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_j_14;
  return(t);
}
static ATerm d_10 (ATerm y_39, ATerm x_39, ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,l_69 = NULL;
  t = x_39;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            l_69 = ATgetArgument(t, 0);
            {
              ATerm w_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_24);
        t = l_69;
        t = foldr_3_0(p_3, q_3, r_3, t);
      }
    else
      {
        t = u_24;
        if(match_cons(t, sym_ConstType_1))
          {
            ATerm x_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_x_13;
      }
  }
  c_69 = t;
  t = y_39;
  t = escape_1_0(Cify_1_0, t);
  e_69 = t;
  t = SSL_int_to_string(c_69);
  f_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_69), term_z_24), e_69), term_y_24);
  i_69 = t;
  t = SSL_concat_strings(i_69);
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_39, c_69);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_25, d_69);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_39, c_69), (ATerm) ATmakeAppl(sym_Defined_2, term_a_25, d_69));
  t = f_10(s_3, g_69, h_69, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, d_69), term_i_11)));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  s_69 = t;
  t = term_e_25;
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, s_69);
  t = m_10(t_69, s_69, t);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, r_69);
  return(t);
}
ATerm GenerateIncludes_0_0 (ATerm t)
{
  t = term_f_25;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_69 = NULL,q_69 = NULL;
        t = term_i_25;
        p_69 = t;
        t = term_f_25;
        q_69 = t;
        t = term_j_25;
        t = u_10(p_69, q_69, t);
        t = map_1_0(t_3, t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      j_70 = ATgetArgument(t, 0);
      k_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(j_70, k_70, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      l_70 = ATgetArgument(t, 0);
      m_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(l_70, m_70, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      ATerm l_25 = ATgetArgument(t, 1);
      ATerm m_25 = ATgetArgument(t, 2);
      ATerm n_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm p_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm o_25 = ATgetArgument(t, 0);
      p_70 = ATgetArgument(t, 1);
      {
        ATerm p_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, p_70), term_i_11)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
  if(match_cons(t, sym__3))
    {
      r_70 = ATgetArgument(t, 0);
      s_70 = ATgetArgument(t, 1);
      t_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_9(r_70, s_70, t_70, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
  e_71 = t;
  if(match_cons(t, sym_Conc_2))
    {
      c_71 = ATgetArgument(t, 0);
      d_71 = ATgetArgument(t, 1);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, c_71, d_71);
            t = conc_0_0(t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = e_71;
          }
      }
    }
  else
    {
      t = e_71;
    }
  return(t);
}
static ATerm e_10 (ATerm s_40, ATerm v_40, ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  f_70 = t;
  t = GenerateIncludes_0_0(t);
  x_69 = t;
  t = s_40;
  t = filter_1_0(u_3, t);
  y_69 = t;
  t = s_40;
  t = filter_1_0(v_3, t);
  t = concat_0_0(t);
  z_69 = t;
  t = v_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  a_70 = t;
  t = v_40;
  t = filter_1_0(w_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  b_70 = t;
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_70 = NULL,z_34 = NULL,d_35 = NULL;
        t = (ATerm) ATempty;
        z_34 = t;
        t = term_u_12;
        d_35 = t;
        t = term_b_13;
        t = b_10(d_35, z_34, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            n_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_70;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
  }
  i_70 = t;
  t = map_1_0(x_3, t);
  g_70 = t;
  t = i_70;
  t = map_1_0(y_3, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, z_3, t);
  h_70 = t;
  t = f_70;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_70 = NULL,w_70 = NULL;
        t = term_i_25;
        v_70 = t;
        t = term_x_25;
        w_70 = t;
        t = term_y_25;
        t = u_10(v_70, w_70, t);
        t = f_70;
        LocalPopChoice(w_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = v_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_a_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_c_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_d_26)))), term_d_20));
      }
  }
  c_70 = t;
  t = f_70;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_70 = NULL,y_70 = NULL;
        t = term_i_25;
        x_70 = t;
        t = term_x_25;
        y_70 = t;
        t = term_y_25;
        t = u_10(x_70, y_70, t);
        t = f_70;
        LocalPopChoice(f_26);
        t = (ATerm) ATinsert(ATempty, term_h_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, term_j_26);
      }
  }
  d_70 = t;
  t = f_70;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_70 = NULL,a_71 = NULL;
        t = term_i_25;
        z_70 = t;
        t = term_x_25;
        a_71 = t;
        t = term_y_25;
        t = u_10(z_70, a_71, t);
        t = f_70;
        LocalPopChoice(l_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = k_26;
        {
          ATerm b_71 = NULL;
          t = MainDef_0_0(t);
          b_71 = t;
          t = (ATerm) ATinsert(ATempty, b_71);
        }
      }
  }
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, x_69, c_70), y_69), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_q_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_d_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, z_69)))), g_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_o_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_t_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_d_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, h_70)))), d_70), a_70), e_70), b_70));
  t = bottomup_1_0(a_4, t);
  return(t);
}
static ATerm f_10 (ATerm c_171 (ATerm), ATerm j_88, ATerm h_88, ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  m_71 = t;
  t = c_171(t);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_71, j_88, h_88);
  t = v_10(j_71, j_88, h_88, t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_71 = NULL;
        t = term_w_26;
        r_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_71, term_w_26);
        t = u_10(j_71, r_71, t);
        {
          ATerm y_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_26;
            }
        }
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_71 = ATgetFirst((ATermList) t);
      l_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_71, term_w_26, (ATerm) ATinsert(CheckATermList(l_71), (ATerm) ATinsert(CheckATermList(k_71), j_88)));
  t = lookup_table_0_1(j_71, t);
  q_71 = t;
  t = term_w_26;
  n_71 = t;
  t = (ATerm) ATinsert(CheckATermList(l_71), (ATerm) ATinsert(CheckATermList(k_71), j_88));
  o_71 = t;
  t = q_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(n_71, o_71, p_71, t);
  t = m_71;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  s_71 = t;
  t = term_i_27;
  t_71 = t;
  t = term_k_27;
  u_71 = t;
  t = term_l_27;
  t = f_10(b_4, t_71, u_71, t);
  t = s_71;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
        {
          ATerm q_27 = ATgetFirst((ATermList) p_27);
          if(match_cons(q_27, sym_Signature_1))
            {
              ATerm w_27 = ATgetArgument(q_27, 0);
              if(((ATgetType(w_27) == AT_LIST) && !(ATisEmpty(w_27))))
                {
                  ATerm x_27 = ATgetFirst((ATermList) w_27);
                  if(match_cons(x_27, sym_Constructors_1))
                    {
                      w_71 = ATgetArgument(x_27, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_27 = (ATerm) ATgetNext((ATermList) w_27);
                    if(((ATgetType(y_27) != AT_LIST) || !(ATisEmpty(y_27))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm u_27 = (ATerm) ATgetNext((ATermList) p_27);
            if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
              {
                ATerm b_28 = ATgetFirst((ATermList) u_27);
                if(match_cons(b_28, sym_Strategies_1))
                  {
                    x_71 = ATgetArgument(b_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_28 = (ATerm) ATgetNext((ATermList) u_27);
                  if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
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
  t = e_10(w_71, x_71, t);
  t = listbottomup_1_0(c_4, t);
  return(t);
}
static ATerm h_10 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm z_71 = NULL;
  t = SSL_fputc(f_58, g_58);
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_71);
  return(t);
}
static ATerm i_10 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm a_72 = NULL;
  t = SSL_write_term_to_stream_text(m_42, n_42);
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_72);
  return(t);
}
static ATerm k_10 (ATerm m_143 (ATerm), ATerm n_288, ATerm s_42, ATerm t)
{
  ATerm b_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_288, term_d_28);
  t = o_10(t);
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_72, s_42);
  t = m_143(t);
  t = fclose_0_0(t);
  t = s_42;
  return(t);
}
static ATerm j_10 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm c_72 = NULL;
  t = SSL_write_term_to_stream_baf(i_42, j_42);
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_72);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym_Stream_1))
        {
          j_72 = ATgetArgument(i_28, 0);
        }
      else
        _fail(t);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(j_72, k_72, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          o_72 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(o_72, p_72, t);
  l_72 = t;
  t = term_m_28;
  m_72 = t;
  t = l_72;
  if(match_cons(t, sym_Stream_1))
    {
      n_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, l_72);
  t = h_10(m_72, n_72, t);
  return(t);
}
ATerm output_1_0 (ATerm z_162 (ATerm), ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL;
  t = z_162(t);
  e_72 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_72 = NULL,g_72 = NULL;
        t = term_i_25;
        f_72 = t;
        t = term_s_28;
        g_72 = t;
        t = term_u_28;
        t = u_10(f_72, g_72, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = term_a_29;
      }
  }
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
  {
    ATerm e_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_72 = NULL,i_72 = NULL;
        t = term_i_25;
        h_72 = t;
        t = term_h_29;
        i_72 = t;
        t = term_i_29;
        t = u_10(h_72, i_72, t);
        t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
        LocalPopChoice(g_29);
        if(match_cons(t, sym__2))
          {
            ATerm k_29 = ATgetArgument(t, 0);
            ATerm l_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_10(g_4, d_72, e_72, t);
      }
    else
      {
        t = e_29;
        if(match_cons(t, sym__2))
          {
            ATerm q_29 = ATgetArgument(t, 0);
            ATerm u_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_10(h_4, d_72, e_72, t);
      }
  }
  return(t);
}
static ATerm d_73 (ATerm x_72, ATerm t)
{
  t = SSL_fclose(x_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_73 = ATgetArgument(t, 0);
      {
        ATerm v_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_73);
            LocalPopChoice(y_29);
          }
        else
          {
            t = v_29;
            t = d_73(b_73, t);
          }
      }
    }
  else
    {
      t = d_73(b_73, t);
    }
  return(t);
}
static ATerm l_10 (ATerm o_42, ATerm t)
{
  t = SSL_read_term_from_stream(o_42);
  return(t);
}
static ATerm m_10 (ATerm l_56, ATerm m_56, ATerm t)
{
  t = SSL_strcat(l_56, m_56);
  return(t);
}
static ATerm n_10 (ATerm h_58, ATerm i_58, ATerm t)
{
  ATerm e_73 = NULL;
  t = SSL_fopen(h_58, i_58);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_73 = NULL;
  t = SSL_stdin_stream();
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_73 = NULL;
  t = SSL_stdout_stream();
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_73 = NULL;
  t = SSL_stderr_stream();
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_73);
  return(t);
}
static ATerm o_74 (ATerm n_73, ATerm t)
{
  ATerm o_73 = NULL;
  t = SSL_explode_term(n_73);
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
          {
            o_73 = ATgetFirst((ATermList) c_30);
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
  t = o_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_74 (ATerm r_73, ATerm s_73, ATerm t_73, ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,z_73 = NULL,l_9 = NULL;
  t = SSLgetAnnotations(t_73);
  w_73 = t;
  t = r_73;
  if(match_cons(t, sym_Path_1))
    {
      z_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_73, s_73);
  l_9 = t;
  t = SSLsetAnnotations(l_9, w_73);
  if(match_cons(t, sym__2))
    {
      u_73 = ATgetArgument(t, 0);
      v_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(u_73, v_73, t);
  return(t);
}
static ATerm q_74 (ATerm b_74, ATerm c_74, ATerm d_74, ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,j_74 = NULL,m_9 = NULL;
  t = SSLgetAnnotations(d_74);
  g_74 = t;
  t = SSL_is_string(b_74);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_74, c_74);
  m_9 = t;
  t = SSLsetAnnotations(m_9, g_74);
  if(match_cons(t, sym__2))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(e_74, f_74, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  l_74 = t;
  if(match_cons(t, sym__2))
    {
      m_74 = ATgetArgument(t, 0);
      n_74 = ATgetArgument(t, 1);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_74(l_74, t);
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            {
              ATerm l_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_74(m_74, n_74, l_74, t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = l_30;
                  t = q_74(m_74, n_74, l_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_74(l_74, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,z_74 = NULL;
  z_74 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_74, term_t_30);
        t = o_10(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm n_35 = NULL,o_35 = NULL;
          t = term_v_30;
          o_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_30, z_74);
          t = m_10(o_35, z_74, t);
          n_35 = t;
          t = SSL_perror(n_35);
          _fail(t);
        }
      }
  }
  t_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10(u_74, t);
  s_74 = t;
  t = t_74;
  t = fclose_0_0(t);
  t = s_74;
  return(t);
}
ATerm input_1_0 (ATerm a_163 (ATerm), ATerm t)
{
  ATerm w_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_75 = NULL,d_75 = NULL;
      t = term_i_25;
      c_75 = t;
      t = term_b_31;
      d_75 = t;
      t = term_c_31;
      t = u_10(c_75, d_75, t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = w_30;
      t = term_d_31;
    }
  t = ReadFromFile_0_0(t);
  t = a_163(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  t = term_i_25;
  e_75 = t;
  t = term_e_31;
  f_75 = t;
  t = term_n_31;
  t = u_10(e_75, f_75, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_31 = ATgetFirst((ATermList) t);
                ATerm u_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_75;
          }
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATinsert(ATempty, h_75);
      }
  }
  i_75 = t;
  t = term_a_29;
  j_75 = t;
  t = SSL_printnl(j_75, i_75);
  t = h_75;
  return(t);
}
ATerm map_1_0 (ATerm u_143 (ATerm), ATerm t)
{
  static ATerm b_76 (ATerm t);
  static ATerm b_76 (ATerm t)
  {
    ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL;
    y_75 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_75;
      }
    else
      {
        ATerm t_35 = NULL,w_35 = NULL,x_35 = NULL,v_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_75 = ATgetFirst((ATermList) t);
            a_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_75);
        t_35 = t;
        t = z_75;
        t = u_143(t);
        w_35 = t;
        t = a_76;
        t = b_76(t);
        x_35 = t;
        t = (ATerm) ATinsert(CheckATermList(x_35), w_35);
        v_9 = t;
        t = SSLsetAnnotations(v_9, t_35);
      }
    return(t);
  }
  t = b_76(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_76 = ATgetFirst((ATermList) t);
      f_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_76 = NULL,k_76 = NULL;
        static ATerm i_4 (ATerm t);
        static ATerm i_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_76)), not_null(k_76));
          return(t);
        }
        t = f_76;
        t = r_0(t);
        if(((j_76 != NULL) && (j_76 != t)))
          _fail(t);
        else
          j_76 = t;
        t = e_76;
        t = p_0(t);
        if(((k_76 != NULL) && (k_76 != t)))
          _fail(t);
        else
          k_76 = t;
        t = f_76;
        t = reverse_acc_2_0(p_0, i_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_31;
      t = r_0(t);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,t_10 = NULL;
  u_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_76);
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_76);
  t_10 = t;
  t = SSLsetAnnotations(t_10, s_76);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm y_76 = NULL;
  y_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_76), term_w_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm m_165 (ATerm), ATerm n_165 (ATerm), ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL;
  ATerm x_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_76 = NULL,r_76 = NULL;
      t = term_i_25;
      q_76 = t;
      t = term_e_31;
      r_76 = t;
      t = term_n_31;
      t = u_10(q_76, r_76, t);
      LocalPopChoice(a_32);
    }
  else
    {
      t = x_31;
      t = fetch_1_0(o_4, t);
    }
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_165(t);
        t = echo_0_0(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
      }
  }
  t = term_f_32;
  t = echo_0_0(t);
  t = term_h_32;
  o_76 = t;
  t = term_i_32;
  p_76 = t;
  t = term_j_32;
  t = u_10(o_76, p_76, t);
  t = reverse_acc_2_0(_id, p_4, t);
  t = map_1_0(q_4, t);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_76 = NULL;
        t = n_165(t);
        z_76 = t;
        t = (ATerm) ATinsert(CheckATermList(z_76), term_m_32);
        t = echo_0_0(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,a_11 = NULL;
  h_77 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_77);
  f_77 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_77);
  a_11 = t;
  t = SSLsetAnnotations(a_11, f_77);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_77 = NULL;
  c_77 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_77 = NULL,e_77 = NULL;
        t = term_i_25;
        d_77 = t;
        t = term_e_31;
        e_77 = t;
        t = term_n_31;
        t = u_10(d_77, e_77, t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = fetch_1_0(s_4, t);
      }
  }
  t = c_77;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm j_77 = NULL;
  j_77 = t;
  if(match_string(t, "-k"))
    {
      t = j_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_77;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  t = SSL_string_to_int(k_77);
  l_77 = t;
  t = term_q_32;
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, l_77);
  t = x_10(m_77, l_77, t);
  t = k_77;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, w_4, x_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm o_77 = NULL;
  o_77 = t;
  if(match_string(t, "-S"))
    {
      t = o_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_77;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL;
  t = term_t_32;
  p_77 = t;
  t = term_x_13;
  q_77 = t;
  t = term_u_32;
  t = x_10(p_77, q_77, t);
  t = term_x_32;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
  r_77 = t;
  t = SSL_string_to_int(r_77);
  s_77 = t;
  t = term_t_32;
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, s_77);
  t = x_10(t_77, s_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_77);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_b_33;
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
  ATerm u_77 = NULL,v_77 = NULL;
  t = term_c_33;
  u_77 = t;
  t = term_v_31;
  v_77 = t;
  t = term_d_33;
  t = x_10(u_77, v_77, t);
  t = term_e_33;
  return(t);
}
static ATerm m_5 (ATerm t)
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
      t = Option_3_0(y_4, c_5, d_5, t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm i_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_5, i_5, j_5, t);
            LocalPopChoice(k_33);
          }
        else
          {
            t = i_33;
            t = Option_3_0(k_5, l_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm x_10 (ATerm s_104, ATerm t_104, ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL;
  t = term_i_25;
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_25, s_104, t_104);
  t = lookup_table_0_1(w_77, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(s_104, t_104, x_77, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_25, s_104, t_104);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
      t = term_v_31;
      t = g_0(t);
      d_78 = t;
      t = term_h_32;
      e_78 = t;
      t = term_i_32;
      f_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, d_78);
      t = v_10(e_78, f_78, d_78, t);
      _fail(t);
    }
  else
    {
      ATerm i_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_78 = ATgetFirst((ATermList) t);
          c_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_78;
      t = d_0(t);
      t = term_v_31;
      t = f_0(t);
      i_78 = t;
      t = (ATerm) ATinsert(CheckATermList(c_78), i_78);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm k_78 = NULL;
  k_78 = t;
  if(match_string(t, "-o"))
    {
      t = k_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_78;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL;
  l_78 = t;
  t = term_s_28;
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, l_78);
  t = x_10(m_78, l_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_78);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, q_5, r_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm o_78 = NULL;
  o_78 = t;
  if(match_string(t, "-i"))
    {
      t = o_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_78;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL;
  p_78 = t;
  t = term_b_31;
  q_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, p_78);
  t = x_10(q_78, p_78, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_78);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, v_5, x_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  static ATerm l_79 (ATerm t);
  static ATerm l_79 (ATerm t)
  {
    ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
    k_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_79 = ATgetFirst((ATermList) t);
        j_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_36 = NULL,m_36 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(k_79);
          j_36 = t;
          t = j_79;
          t = l_79(t);
          m_36 = t;
          t = (ATerm) ATinsert(CheckATermList(m_36), i_79);
          c_11 = t;
          t = SSLsetAnnotations(c_11, j_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_79;
        t = j_144(t);
      }
    return(t);
  }
  t = l_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
  s_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_78;
    }
  else
    {
      static ATerm y_5 (ATerm t);
      static ATerm y_5 (ATerm t)
      {
        t = not_null(u_78);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_78 = ATgetFirst((ATermList) t);
          if(((u_78 != NULL) && (u_78 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_78;
      t = at_end_1_0(y_5, t);
    }
  return(t);
}
static ATerm c_80 (ATerm p_79, ATerm t)
{
  ATerm q_79 = NULL;
  t = SSL_explode_term(p_79);
  if(match_cons(t, sym__2))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  u_79 = t;
  if(match_cons(t, sym__2))
    {
      s_79 = ATgetArgument(t, 0);
      t_79 = ATgetArgument(t, 1);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_6 (ATerm t);
            static ATerm e_6 (ATerm t)
            {
              t = t_79;
              return(t);
            }
            t = s_79;
            t = at_end_1_0(e_6, t);
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = c_80(u_79, t);
          }
      }
    }
  else
    {
      t = c_80(u_79, t);
    }
  return(t);
}
static ATerm g_10 (ATerm z_104, ATerm a_105, ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  t = z_104;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_80 = NULL;
        t = term_i_25;
        i_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_25, z_104);
        t = u_10(i_80, z_104, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATempty;
      }
  }
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_80, a_105);
  t = conc_0_0(t);
  d_80 = t;
  t = term_i_25;
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_25, z_104, d_80);
  t = lookup_table_0_1(f_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(z_104, d_80, g_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_25, z_104, d_80);
  return(t);
}
static ATerm v_10 (ATerm r_63, ATerm s_63, ATerm q_63, ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_63, s_63);
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
        t = (ATerm) ATmakeAppl(sym__2, r_63, s_63);
        t = u_10(r_63, s_63, t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = (ATerm) ATempty;
      }
  }
  m_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_63, s_63, (ATerm) ATinsert(CheckATermList(m_80), q_63));
  t = lookup_table_0_1(r_63, t);
  p_80 = t;
  t = (ATerm) ATinsert(CheckATermList(m_80), q_63);
  n_80 = t;
  t = p_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(s_63, n_80, o_80, t);
  t = l_80;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
      t = term_v_31;
      t = n_0(t);
      a_81 = t;
      t = term_h_32;
      b_81 = t;
      t = term_i_32;
      c_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, a_81);
      t = v_10(b_81, c_81, a_81, t);
      _fail(t);
    }
  else
    {
      ATerm g_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_80 = ATgetFirst((ATermList) t);
          x_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_80 = ATgetFirst((ATermList) t);
          z_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_80;
      t = j_0(t);
      t = y_80;
      t = l_0(t);
      g_81 = t;
      t = (ATerm) ATinsert(CheckATermList(z_80), g_81);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  i_81 = t;
  t = term_f_25;
  j_81 = t;
  t = (ATerm) ATinsert(ATempty, i_81);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATinsert(ATempty, i_81));
  t = g_10(j_81, k_81, t);
  t = i_81;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_y_33;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm l_81 = NULL;
  l_81 = t;
  if(match_string(t, "--library"))
    {
      t = l_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = l_81;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  t = term_x_25;
  n_81 = t;
  t = term_v_31;
  o_81 = t;
  t = term_c_34;
  t = x_10(n_81, o_81, t);
  t = m_81;
  return(t);
}
static ATerm s_6 (ATerm t)
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
      t = ArgOption_3_0(f_6, h_6, i_6, t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = Option_3_0(q_6, r_6, s_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_31;
  t = whoami_0_0(t);
  p_81 = t;
  t = term_g_34;
  r_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_34), p_81);
  s_81 = t;
  t = SSL_printnl(r_81, s_81);
  t = term_y_13;
  q_81 = t;
  t = SSL_exit(q_81);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL;
  t = term_i_25;
  t_81 = t;
  t = term_e_31;
  u_81 = t;
  t = term_n_31;
  t = u_10(t_81, u_81, t);
  return(t);
}
static ATerm p_10 (ATerm a_62, ATerm b_62, ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_62, b_62);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      t = SSL_addr(a_62, b_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_150 (ATerm), ATerm s_150 (ATerm), ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  w_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_81;
      t = r_150(t);
    }
  else
    {
      ATerm b_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_81 = ATgetFirst((ATermList) t);
          y_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_81;
      t = foldr_2_0(r_150, s_150, t);
      b_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_81, b_82);
      t = s_150(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(v_36, w_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_82 = NULL,r_36 = NULL,s_36 = NULL;
  t = times_0_0(t);
  s_36 = t;
  t = SSL_explode_term(s_36);
  if(match_cons(t, sym__2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_36;
  t = foldr_2_0(t_6, u_6, t);
  e_82 = t;
  t = SSL_TicksToSeconds(e_82);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL;
  p_82 = t;
  if(match_cons(t, sym__2))
    {
      q_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_82;
        if((q_82 != t))
          {
            _fail(t);
          }
        t = p_82;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATmakeAppl(sym__2, q_82, r_82);
        {
          ATerm q_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_82, r_82);
              LocalPopChoice(s_34);
            }
          else
            {
              t = q_34;
              t = SSL_gtr(q_82, r_82);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_82, r_82);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_160 (ATerm), ATerm t)
{
  ATerm v_82 = NULL;
  v_82 = t;
  {
    ATerm t_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
        t = term_i_25;
        y_82 = t;
        t = term_t_32;
        z_82 = t;
        t = term_w_34;
        t = u_10(y_82, z_82, t);
        x_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_82, term_y_13);
        t = geq_0_0(t);
        t = v_82;
        t = x_160(t);
        LocalPopChoice(v_34);
      }
    else
      {
        t = t_34;
        t = v_82;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,e_83 = NULL,f_83 = NULL;
  t = run_time_0_0(t);
  b_83 = t;
  t = term_v_31;
  t = whoami_0_0(t);
  c_83 = t;
  t = term_g_34;
  e_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_34), b_83), term_x_34), c_83);
  f_83 = t;
  t = SSL_printnl(e_83, f_83);
  t = (ATerm) ATmakeAppl(sym__2, term_g_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_34), b_83), term_x_34), c_83));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_13;
  g_83 = t;
  t = SSL_exit(g_83);
  return(t);
}
static ATerm y_10 (ATerm g_68, ATerm h_68, ATerm i_68, ATerm t)
{
  ATerm h_83 = NULL;
  t = SSL_hashtable_put(i_68, g_68, h_68);
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_83);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_65, ATerm t)
{
  ATerm q_83 = NULL;
  t = table_hashtable_0_0(t);
  q_83 = t;
  {
    ATerm a_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL;
        t = q_83;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_10(d_65, h_37, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = a_35;
        {
          ATerm m_37 = NULL;
          t = d_65;
          t = table_create_0_0(t);
          t = q_83;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_10(d_65, m_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm t_83 = NULL;
  t = SSL_hashtable_create(o_68, p_68);
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_83);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,y_83 = NULL,z_83 = NULL;
  u_83 = t;
  t = term_f_35;
  y_83 = t;
  t = term_g_35;
  z_83 = t;
  t = u_83;
  t = new_hashtable_0_2(y_83, z_83, t);
  v_83 = t;
  t = u_83;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(u_83, v_83, w_83, t);
  t = u_83;
  return(t);
}
static ATerm r_10 (ATerm l_68, ATerm m_68, ATerm t)
{
  ATerm a_84 = NULL;
  t = SSL_hashtable_remove(m_68, l_68);
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_84);
  return(t);
}
static ATerm s_10 (ATerm q_68, ATerm t)
{
  ATerm b_84 = NULL;
  t = SSL_hashtable_destroy(q_68);
  b_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_84);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_84 = NULL;
  t = SSL_table_hashtable();
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_84);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  d_84 = t;
  t = table_hashtable_0_0(t);
  e_84 = t;
  t = lookup_table_0_1(d_84, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(g_84, t);
  t = e_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10(d_84, f_84, t);
  t = d_84;
  return(t);
}
ATerm fetch_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  static ATerm d_85 (ATerm t);
  static ATerm d_85 (ATerm t)
  {
    ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
    a_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_85 = ATgetFirst((ATermList) t);
        c_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_35 = t;
      int i_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_37 = NULL,u_37 = NULL,e_11 = NULL;
          t = SSLgetAnnotations(a_85);
          r_37 = t;
          t = b_85;
          t = c_144(t);
          u_37 = t;
          t = (ATerm) ATinsert(CheckATermList(c_85), u_37);
          e_11 = t;
          t = SSLsetAnnotations(e_11, r_37);
          LocalPopChoice(i_35);
        }
      else
        {
          t = h_35;
          {
            ATerm c_38 = NULL,f_38 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(a_85);
            c_38 = t;
            t = c_85;
            t = d_85(t);
            f_38 = t;
            t = (ATerm) ATinsert(CheckATermList(f_38), b_85);
            l_11 = t;
            t = SSLsetAnnotations(l_11, c_38);
          }
        }
    }
    return(t);
  }
  t = d_85(t);
  return(t);
}
static ATerm z_10 (ATerm j_68, ATerm k_68, ATerm t)
{
  t = SSL_hashtable_get(k_68, j_68);
  return(t);
}
static ATerm u_10 (ATerm k_65, ATerm l_65, ATerm t)
{
  ATerm g_85 = NULL;
  t = lookup_table_0_1(k_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_10(l_65, g_85, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL;
  t = term_j_35;
  i_85 = t;
  t = term_v_31;
  j_85 = t;
  t = term_k_35;
  t = x_10(i_85, j_85, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_l_35;
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
  ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  t = term_j_35;
  m_85 = t;
  t = term_v_31;
  n_85 = t;
  t = term_k_35;
  t = x_10(m_85, n_85, t);
  t = term_m_35;
  k_85 = t;
  t = term_v_31;
  l_85 = t;
  t = term_p_35;
  t = x_10(k_85, l_85, t);
  t = term_q_35;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, a_7, b_7, t);
      LocalPopChoice(u_35);
    }
  else
    {
      t = s_35;
      t = Option_3_0(d_7, f_7, g_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,r_11 = NULL;
  t_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_85 = ATgetFirst((ATermList) t);
      q_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_85);
  o_85 = t;
  t = p_85;
  t = e_105(t);
  r_85 = t;
  t = q_85;
  t = f_105(t);
  s_85 = t;
  t = (ATerm) ATinsert(CheckATermList(s_85), r_85);
  r_11 = t;
  t = SSLsetAnnotations(r_11, o_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_165 (ATerm), ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,d_86 = NULL,e_86 = NULL,t_11 = NULL;
  y_85 = t;
  {
    ATerm v_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_35;
        t = h_165(t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = v_35;
      }
  }
  t = y_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_86 = ATgetFirst((ATermList) t);
      b_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_85);
  z_85 = t;
  t = term_e_31;
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, a_86);
  t = x_10(e_86, a_86, t);
  t = b_86;
  {
    static ATerm o_86 (ATerm t);
    static ATerm o_86 (ATerm t)
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_86 = NULL;
              h_86 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_86;
              LocalPopChoice(h_36);
            }
          else
            {
              t = d_36;
              t = h_165(t);
              t = Cons_2_0(_id, o_86, t);
            }
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          {
            ATerm k_86 = NULL,l_86 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_86 = ATgetFirst((ATermList) t);
                l_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_86), (ATerm) ATmakeAppl(sym_Undefined_1, k_86));
          }
        }
      return(t);
    }
    t = o_86(t);
  }
  d_86 = t;
  t = (ATerm) ATinsert(CheckATermList(d_86), (ATerm) ATmakeAppl(sym_Program_1, a_86));
  t_11 = t;
  t = SSLsetAnnotations(t_11, z_85);
  return(t);
}
static ATerm k_7 (ATerm t)
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
static ATerm m_7 (ATerm t)
{
  ATerm m_87 = NULL,u_87 = NULL;
  t = term_i_36;
  m_87 = t;
  t = term_v_31;
  u_87 = t;
  t = term_k_36;
  t = x_10(m_87, u_87, t);
  t = term_l_36;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_n_36;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm e_165 (ATerm), ATerm f_165 (ATerm), ATerm g_165 (ATerm), ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
  v_86 = t;
  t = term_h_32;
  w_86 = t;
  t = term_o_36;
  t = lookup_table_0_1(w_86, t);
  a_87 = t;
  t = term_i_32;
  x_86 = t;
  t = (ATerm) ATempty;
  y_86 = t;
  t = a_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(x_86, y_86, z_86, t);
  t = v_86;
  {
    static ATerm h_7 (ATerm t);
    static ATerm h_7 (ATerm t)
    {
      ATerm p_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_165(t);
          LocalPopChoice(q_36);
        }
      else
        {
          t = p_36;
          {
            ATerm t_36 = t;
            int u_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, m_7, n_7, t);
                LocalPopChoice(u_36);
              }
            else
              {
                t = t_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_7, t);
  }
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_88 = NULL;
        f_88 = t;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_38 = NULL;
              t = f_88;
              {
                ATerm b_37 = t;
                int c_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_38 = NULL,o_38 = NULL;
                    t = term_i_25;
                    n_38 = t;
                    t = term_i_36;
                    o_38 = t;
                    t = term_d_37;
                    t = u_10(n_38, o_38, t);
                    LocalPopChoice(c_37);
                  }
                else
                  {
                    t = b_37;
                    t = fetch_1_0(o_7, t);
                  }
              }
              t = f_88;
              t = f_165(t);
              t = term_x_13;
              m_38 = t;
              t = SSL_exit(m_38);
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              {
                ATerm s_38 = NULL,u_38 = NULL,v_38 = NULL;
                t = term_i_25;
                u_38 = t;
                t = term_j_35;
                v_38 = t;
                t = term_e_37;
                t = u_10(u_38, v_38, t);
                t = f_88;
                t = g_165(t);
                t = term_x_13;
                s_38 = t;
                t = SSL_exit(s_38);
              }
            }
        }
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm f_37 = t;
          int g_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_88 = NULL,m_88 = NULL,n_88 = NULL;
              static ATerm p_7 (ATerm t);
              static ATerm p_7 (ATerm t)
              {
                ATerm o_88 = NULL,q_88 = NULL,r_88 = NULL,n_12 = NULL;
                r_88 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_88);
                o_88 = t;
                t = q_88;
                if(((t_86 != NULL) && (t_86 != t)))
                  _fail(t);
                else
                  t_86 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_88);
                n_12 = t;
                t = SSLsetAnnotations(n_12, o_88);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_g_34;
              m_88 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_86)), term_i_37);
              n_88 = t;
              t = SSL_printnl(m_88, n_88);
              t = (ATerm) ATmakeAppl(sym__2, term_g_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_86)), term_i_37));
              t = f_165(t);
              t = term_y_13;
              g_88 = t;
              t = SSL_exit(g_88);
              LocalPopChoice(g_37);
            }
          else
            {
              t = f_37;
            }
        }
      }
  }
  u_86 = t;
  t = term_h_32;
  t = table_destroy_0_0(t);
  t = u_86;
  return(t);
}
ATerm option_wrap_5_0 (ATerm t_162 (ATerm), ATerm u_162 (ATerm), ATerm v_162 (ATerm), ATerm w_162 (ATerm), ATerm x_162 (ATerm), ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL;
  t = parse_options_3_0(t_162, u_162, v_162, t);
  w_88 = t;
  t = term_j_37;
  t = table_create_0_0(t);
  t = term_j_37;
  x_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_37, term_k_37, w_88);
  t = lookup_table_0_1(x_88, t);
  a_89 = t;
  t = term_k_37;
  y_88 = t;
  t = a_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_10(y_88, w_88, z_88, t);
  t = w_88;
  t = w_162(t);
  {
    ATerm l_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_162(t);
        t = report_success_0_0(t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = l_37;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm q_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_37);
          }
        else
          {
            t = q_37;
            {
              ATerm t_37 = t;
              int v_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(v_37);
                }
              else
                {
                  t = t_37;
                  {
                    ATerm w_37 = t;
                    int x_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, b_8, t);
                        LocalPopChoice(x_37);
                      }
                    else
                      {
                        t = w_37;
                        {
                          ATerm y_37 = t;
                          int z_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_37);
                            }
                          else
                            {
                              t = y_37;
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
  ATerm c_89 = NULL,d_89 = NULL;
  t = term_h_29;
  c_89 = t;
  t = term_v_31;
  d_89 = t;
  t = term_a_38;
  t = x_10(c_89, d_89, t);
  t = term_b_38;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_d_38;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(q_7, default_system_usage_0_0, default_system_about_0_0, _id, u_7, t);
  return(t);
}
