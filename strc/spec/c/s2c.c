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
static ATerm term_i_38;
static ATerm term_g_38;
static ATerm term_f_38;
static ATerm term_p_37;
static ATerm term_n_37;
static ATerm term_m_37;
static ATerm term_i_37;
static ATerm term_h_37;
static ATerm term_s_36;
static ATerm term_r_36;
static ATerm term_q_36;
static ATerm term_p_36;
static ATerm term_n_36;
static ATerm term_h_36;
static ATerm term_w_35;
static ATerm term_u_35;
static ATerm term_t_35;
static ATerm term_s_35;
static ATerm term_r_35;
static ATerm term_o_35;
static ATerm term_n_35;
static ATerm term_k_35;
static ATerm term_j_35;
static ATerm term_g_35;
static ATerm term_d_35;
static ATerm term_z_34;
static ATerm term_k_34;
static ATerm term_j_34;
static ATerm term_g_34;
static ATerm term_f_34;
static ATerm term_e_34;
static ATerm term_r_33;
static ATerm term_q_33;
static ATerm term_i_33;
static ATerm term_h_33;
static ATerm term_g_33;
static ATerm term_f_33;
static ATerm term_e_33;
static ATerm term_c_33;
static ATerm term_x_32;
static ATerm term_w_32;
static ATerm term_v_32;
static ATerm term_u_32;
static ATerm term_t_32;
static ATerm term_q_32;
static ATerm term_n_32;
static ATerm term_m_32;
static ATerm term_l_32;
static ATerm term_k_32;
static ATerm term_a_32;
static ATerm term_x_31;
static ATerm term_q_31;
static ATerm term_p_31;
static ATerm term_n_31;
static ATerm term_e_31;
static ATerm term_d_31;
static ATerm term_a_31;
static ATerm term_w_30;
static ATerm term_n_29;
static ATerm term_j_29;
static ATerm term_f_29;
static ATerm term_e_29;
static ATerm term_c_29;
static ATerm term_o_28;
static ATerm term_j_28;
static ATerm term_q_27;
static ATerm term_p_27;
static ATerm term_l_27;
static ATerm term_k_27;
static ATerm term_j_27;
static ATerm term_z_26;
static ATerm term_v_26;
static ATerm term_u_26;
static ATerm term_t_26;
static ATerm term_r_26;
static ATerm term_q_26;
static ATerm term_l_26;
static ATerm term_k_26;
static ATerm term_j_26;
static ATerm term_i_26;
static ATerm term_f_26;
static ATerm term_e_26;
static ATerm term_d_26;
static ATerm term_c_26;
static ATerm term_b_26;
static ATerm term_a_26;
static ATerm term_z_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_h_25;
static ATerm term_g_25;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_b_25;
static ATerm term_a_25;
static ATerm term_t_24;
static ATerm term_s_24;
static ATerm term_j_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_e_24;
static ATerm term_q_23;
static ATerm term_p_23;
static ATerm term_l_23;
static ATerm term_k_23;
static ATerm term_g_23;
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
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_r_16;
static ATerm term_q_16;
static ATerm term_l_16;
static ATerm term_j_16;
static ATerm term_g_16;
static ATerm term_d_16;
static ATerm term_a_16;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_u_15;
static ATerm term_t_15;
static ATerm term_s_15;
static ATerm term_r_15;
static ATerm term_p_15;
static ATerm term_o_15;
static ATerm term_m_15;
static ATerm term_l_15;
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
static ATerm term_e_14;
static ATerm term_b_14;
static ATerm term_a_14;
static ATerm term_y_13;
static ATerm term_x_13;
static ATerm term_d_13;
static ATerm term_b_13;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_c_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_z_11;
static ATerm term_x_11;
static ATerm term_w_11;
static ATerm term_u_11;
static ATerm term_s_11;
static ATerm term_p_11;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_l_11;
static ATerm term_k_11;
static ATerm term_j_11;
static ATerm term_d_11;
static ATerm term_y_10;
static ATerm term_s_10;
static ATerm term_b_10;
static ATerm term_a_10;
static ATerm term_w_9;
static ATerm term_v_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_v_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Id_1, term_b_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Id_1, term_y_10);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_11, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Some_1, term_k_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_10, term_l_11);
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
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Id_1, term_x_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Return_1, term_d_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Id_1, term_b_12);
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
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_10, term_j_11);
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
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Id_1, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_IntConst_1, term_o_15);
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
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Id_1, term_a_16);
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
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_y_16);
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
  term_g_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_f_17, term_j_11);
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
  term_o_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_17, term_j_11);
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
  term_m_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_19, term_p_15);
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
  term_u_19 = (ATerm) ATmakeAppl(sym_Equal_2, term_t_19, term_p_15);
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
  term_l_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_20, term_j_11);
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
  term_z_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_y_20, term_j_11);
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
  term_n_22 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_m_22, (ATerm)ATempty, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(122);
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
  term_j_24 = (ATerm) ATmakeInt(98);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(113);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_TypeId_1, term_d_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_m_22, (ATerm)ATempty, term_e_25, (ATerm) ATempty);
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
  term_f_26 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_c_26, term_j_11);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-module.h>", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Include_1, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("#include <srts/init-stratego-application.h>", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Include_1, term_k_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_DeclSpec_5, (ATerm)ATempty, term_m_22, (ATerm)ATempty, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constructors", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_module_constant_terms", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Id_1, term_u_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Op_2, term_j_27, (ATerm) ATempty);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_l_27, term_l_16);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_p_27);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_c_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_j_29);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_d_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_p_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_m_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_x_13);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__2, term_f_33, term_x_31);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_x_31);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    build library instead of application", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_v_32);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_x_31);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_s_35, term_x_31);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym__2, term_n_36, term_x_31);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__3, term_l_32, term_m_32, (ATerm) ATempty);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_n_36);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_n_35);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_x_31);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm listbu1_1_0 (ATerm z_2 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm Csimplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm t);
ATerm listbottomup_1_0 (ATerm a_171 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm o_137 (ATerm), ATerm t);
ATerm MainDef_0_0 (ATerm t);
static ATerm p_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t);
static ATerm d_10 (ATerm g_64, ATerm h_64, ATerm t);
static ATerm w_0 (ATerm t);
ATerm proper_list_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm r_9 (ATerm u_30, ATerm x_30, ATerm t);
ATerm Cache_0_0 (ATerm t);
ATerm construct_term_caching_0_0 (ATerm t);
static ATerm s_9 (ATerm g_36, ATerm f_36, ATerm t);
static ATerm t_9 (ATerm i_212, ATerm c_36, ATerm e_36, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ConstructTerm_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm ConstructList_0_0 (ATerm t);
static ATerm r_53 (ATerm x_27, ATerm b_28, ATerm g_28, ATerm h_28, ATerm t);
static ATerm s_53 (ATerm r_29, ATerm t_29, ATerm u_29, ATerm t);
static ATerm t_53 (ATerm e_30, ATerm g_30, ATerm h_30, ATerm t);
static ATerm v_53 (ATerm q_30, ATerm r_30, ATerm y_30, ATerm z_30, ATerm t);
static ATerm w_53 (ATerm f_31, ATerm g_31, ATerm c_32, ATerm d_32, ATerm t);
static ATerm x_53 (ATerm d_33, ATerm a_35, ATerm b_35, ATerm c_35, ATerm t);
static ATerm y_53 (ATerm w_39, ATerm b_40, ATerm c_40, ATerm g_40, ATerm t);
static ATerm z_53 (ATerm y_40, ATerm c_41, ATerm e_41, ATerm f_41, ATerm j_41, ATerm k_41, ATerm l_41, ATerm m_41, ATerm t);
static ATerm c_54 (ATerm p_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm f_43, ATerm g_43, ATerm t);
static ATerm d_54 (ATerm o_43, ATerm p_43, ATerm w_43, ATerm x_43, ATerm y_43, ATerm b_44, ATerm t);
static ATerm e_54 (ATerm m_44, ATerm n_44, ATerm o_44, ATerm t);
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
ATerm escape_chars_1_0 (ATerm s_154 (ATerm), ATerm t);
static ATerm z_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t);
ATerm thread_map_1_0 (ATerm m_151 (ATerm), ATerm t);
static ATerm j_61 (ATerm h_58, ATerm i_58, ATerm p_58, ATerm q_58, ATerm r_58, ATerm t);
static ATerm k_61 (ATerm o_59, ATerm p_59, ATerm q_59, ATerm r_59, ATerm t);
static ATerm l_61 (ATerm w_59, ATerm x_59, ATerm y_59, ATerm z_59, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm TranslateStratMatchGuard_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_137 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm translate_body_0_0 (ATerm t);
ATerm TranslateDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_151 (ATerm), ATerm t);
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
static ATerm e_10 (ATerm l_40, ATerm j_40, ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm p_154 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm f_10 (ATerm y_39, ATerm x_39, ATerm t);
static ATerm t_3 (ATerm t);
ATerm GenerateIncludes_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm g_10 (ATerm s_40, ATerm v_40, ATerm t);
static ATerm h_10 (ATerm k_171 (ATerm), ATerm n_88, ATerm l_88, ATerm t);
static ATerm b_4 (ATerm t);
ATerm init_term_caching_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm compile_0_0 (ATerm t);
static ATerm j_10 (ATerm j_58, ATerm k_58, ATerm t);
static ATerm k_10 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm m_10 (ATerm q_143 (ATerm), ATerm v_288, ATerm s_42, ATerm t);
static ATerm l_10 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_1_0 (ATerm h_163 (ATerm), ATerm t);
static ATerm j_73 (ATerm d_73, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_10 (ATerm o_42, ATerm t);
static ATerm o_10 (ATerm p_56, ATerm q_56, ATerm t);
static ATerm p_10 (ATerm l_58, ATerm m_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_74 (ATerm t_73, ATerm t);
static ATerm v_74 (ATerm x_73, ATerm y_73, ATerm z_73, ATerm t);
static ATerm w_74 (ATerm h_74, ATerm i_74, ATerm j_74, ATerm t);
static ATerm q_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm i_163 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_143 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_165 (ATerm), ATerm v_165 (ATerm), ATerm t);
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
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_10 (ATerm w_104, ATerm x_104, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_144 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_80 (ATerm v_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_10 (ATerm d_105, ATerm e_105, ATerm t);
static ATerm x_10 (ATerm v_63, ATerm w_63, ATerm u_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm s2c_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_10 (ATerm e_62, ATerm f_62, ATerm t);
ATerm foldr_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_161 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_11 (ATerm k_68, ATerm l_68, ATerm m_68, ATerm t);
ATerm lookup_table_0_1 (ATerm h_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_68, ATerm t_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_10 (ATerm p_68, ATerm q_68, ATerm t);
static ATerm u_10 (ATerm u_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_144 (ATerm), ATerm t);
static ATerm b_11 (ATerm n_68, ATerm o_68, ATerm t);
static ATerm w_10 (ATerm o_65, ATerm p_65, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_165 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm parse_options_3_0 (ATerm m_165 (ATerm), ATerm n_165 (ATerm), ATerm o_165 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm b_163 (ATerm), ATerm c_163 (ATerm), ATerm d_163 (ATerm), ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm t);
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
  ATerm e_4 = NULL,f_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_8 = ATgetFirst((ATermList) t);
      if(match_cons(h_8, sym_Compound_2))
        {
          ATerm k_8 = ATgetArgument(h_8, 0);
          if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
            _fail(t);
          e_4 = ATgetArgument(h_8, 1);
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
      ATerm l_8 = ATgetFirst((ATermList) t);
      if(match_cons(l_8, sym_Compound_2))
        {
          ATerm m_8 = ATgetArgument(l_8, 0);
          if(((ATgetType(m_8) != AT_LIST) || !(ATisEmpty(m_8))))
            _fail(t);
          a_5 = ATgetArgument(l_8, 1);
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
  ATerm t_5 = NULL,u_5 = NULL;
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
      u_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_5, u_5);
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
          ATerm x_8 = ATgetArgument(v_8, 0);
          if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
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
                        int a_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_4 = NULL;
                            t = d_3;
                            t = listbu1_1_0(a_0, t);
                            d_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, c_3, d_4);
                            LocalPopChoice(a_9);
                          }
                        else
                          {
                            t = y_8;
                            {
                              ATerm b_9 = t;
                              int d_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_4 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, c_3, f_3);
                                  t = conc_0_0(t);
                                  n_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Compound_2, n_4, g_3);
                                  LocalPopChoice(d_9);
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
                              ATerm l_5 = NULL,m_5 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, c_3, f_3);
                              t = conc_0_0(t);
                              l_5 = t;
                              t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
                              t = conc_0_0(t);
                              m_5 = t;
                              t = (ATerm) ATmakeAppl(sym_Compound_2, l_5, m_5);
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
ATerm repeat_2_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm t)
{
  static ATerm c_6 (ATerm t);
  static ATerm c_6 (ATerm t)
  {
    ATerm k_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_136(t);
        t = c_6(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = k_9;
        t = o_136(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm listbottomup_1_0 (ATerm a_171 (ATerm), ATerm t)
{
  static ATerm b_7 (ATerm t);
  static ATerm b_7 (ATerm t)
  {
    t = a_171(t);
    {
      ATerm o_9 = t;
      int q_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 = NULL,x_6 = NULL,a_7 = NULL,w_1 = NULL,z_1 = NULL,a_2 = NULL,e_1 = NULL;
          v_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_6 = ATgetFirst((ATermList) t);
              a_7 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_6);
          w_1 = t;
          t = x_6;
          t = b_7(t);
          z_1 = t;
          t = a_7;
          t = b_7(t);
          a_2 = t;
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          e_1 = t;
          t = SSLsetAnnotations(e_1, w_1);
          LocalPopChoice(q_9);
        }
      else
        {
          t = o_9;
          t = SRTS_all(b_7, t);
        }
    }
    t = a_171(t);
    return(t);
  }
  t = b_7(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(o_137, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = o_137(t);
  return(t);
}
ATerm MainDef_0_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_FunDef_3, term_a_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_n_11)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_11, (ATerm) ATinsert(ATempty, term_d_11))))), term_u_11)));
  return(t);
}
static ATerm p_9 (ATerm i_31, ATerm k_31, ATerm j_31, ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, k_31)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, k_31), term_w_11, j_31)));
  return(t);
}
static ATerm d_10 (ATerm g_64, ATerm h_64, ATerm t)
{
  ATerm k_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_64, h_64);
  t = w_10(g_64, h_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_7 = ATgetFirst((ATermList) t);
      {
        ATerm d_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_7;
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
          int q_12 = stack_ptr;
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
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm d_6 = NULL,h_6 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(f_11);
                d_6 = t;
                t = g_11;
                {
                  ATerm r_12 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm q_6 = NULL;
                      q_6 = t;
                      if(match_string(t, "Nil"))
                        {
                          t = q_6;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
                            _fail(t);
                          t = q_6;
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = r_12;
                    }
                }
                h_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, h_6, h_11);
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
static ATerm r_9 (ATerm u_30, ATerm x_30, ATerm t)
{
  ATerm y_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,l_12 = NULL,z_13 = NULL,c_14 = NULL;
  t = u_30;
  if(match_cons(t, sym_Op_2))
    {
      c_14 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      {
        ATerm z_6 = NULL,e_7 = NULL,i_6 = NULL;
        t = SSLgetAnnotations(u_30);
        z_6 = t;
        t = z_13;
        t = map_1_0(Cache_0_0, t);
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, c_14, e_7);
        i_6 = t;
        t = SSLsetAnnotations(i_6, z_6);
        t = proper_list_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_Anno_2))
        {
          c_14 = ATgetArgument(t, 0);
          z_13 = ATgetArgument(t, 1);
          {
            ATerm l_7 = NULL,s_7 = NULL,t_7 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(u_30);
            l_7 = t;
            t = c_14;
            t = Cache_0_0(t);
            s_7 = t;
            t = z_13;
            t = Cache_0_0(t);
            t_7 = t;
            t = (ATerm) ATmakeAppl(sym_Anno_2, s_7, t_7);
            j_6 = t;
            t = SSLsetAnnotations(j_6, l_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              c_14 = ATgetArgument(t, 0);
              {
                ATerm y_7 = NULL,l_6 = NULL;
                t = SSLgetAnnotations(u_30);
                y_7 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, c_14);
                l_6 = t;
                t = SSLsetAnnotations(l_6, y_7);
              }
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  c_14 = ATgetArgument(t, 0);
                  {
                    ATerm i_8 = NULL,m_6 = NULL;
                    t = SSLgetAnnotations(u_30);
                    i_8 = t;
                    t = (ATerm) ATmakeAppl(sym_Str_1, c_14);
                    m_6 = t;
                    t = SSLsetAnnotations(m_6, i_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      c_14 = ATgetArgument(t, 0);
                      {
                        ATerm q_8 = NULL,n_6 = NULL;
                        t = SSLgetAnnotations(u_30);
                        q_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, c_14);
                        n_6 = t;
                        t = SSLsetAnnotations(n_6, q_8);
                      }
                    }
                  else
                    {
                      ATerm z_8 = NULL,o_6 = NULL;
                      if(match_cons(t, sym_BuildDefault_1))
                        {
                          c_14 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_30);
                      z_8 = t;
                      t = (ATerm) ATmakeAppl(sym_BuildDefault_1, c_14);
                      o_6 = t;
                      t = SSLsetAnnotations(o_6, z_8);
                    }
                }
            }
        }
    }
  t = new_0_0(t);
  y_11 = t;
  t = term_v_12;
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, y_11);
  t = o_10(l_12, y_11, t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_12, e_12);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_30, (ATerm) ATmakeAppl(sym_Defined_2, term_w_12, e_12));
  t = h_10(y_0, u_30, i_12, t);
  t = e_12;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL,c_9 = NULL,e_9 = NULL;
        t = (ATerm) ATempty;
        c_9 = t;
        t = term_u_12;
        e_9 = t;
        t = term_b_13;
        t = d_10(e_9, c_9, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            d_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_14;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATempty;
      }
  }
  f_12 = t;
  t = (ATerm) ATempty;
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym__3, y_11, e_12, x_30)));
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym__3, y_11, e_12, x_30))));
  t = h_10(b_1, g_12, h_12, t);
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
        ATerm y_9 = NULL,c_10 = NULL;
        t = term_t_12;
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_12, v_14);
        t = d_10(c_10, v_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_13) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
            y_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Id_1, y_9);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm m_11 = NULL,q_11 = NULL;
          t = term_t_12;
          q_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_12, v_14);
          t = d_10(q_11, v_14, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("b_0", 0, ATtrue)))
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
        ATerm x_15 = NULL,v_11 = NULL;
        x_15 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, x_15, v_11);
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
              t = (ATerm) ATmakeAppl(sym__2, x_15, v_11);
              t = r_9(x_15, v_11, t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                ATerm j_12 = NULL,k_12 = NULL;
                k_12 = t;
                t = SSL_explode_term(k_12);
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
                              j_12 = ATgetFirst((ATermList) v_13);
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
                t = j_12;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm g_36, ATerm f_36, ATerm t)
{
  ATerm b_16 = NULL;
  t = new_0_0(t);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, b_16), term_j_11), (ATerm) ATmakeAppl(sym_AssignInit_1, f_36)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, g_36, (ATerm) ATmakeAppl(sym_Id_1, b_16))));
  return(t);
}
static ATerm t_9 (ATerm i_212, ATerm c_36, ATerm e_36, ATerm t)
{
  ATerm c_16 = NULL,e_16 = NULL,f_16 = NULL;
  t = SSLgetAnnotations(i_212);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_36);
  f_16 = t;
  t = SSLsetAnnotations(f_16, c_16);
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
  t = r_10(f_18, g_18, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm n_15 = NULL,q_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_15 = ATgetFirst((ATermList) t);
      q_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(q_15), term_b_14), term_a_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_15), term_a_14), term_a_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_15), term_e_14), term_a_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_15), term_f_14), term_a_14);
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
            ATerm e_18 = NULL,s_12 = NULL,z_12 = NULL,a_13 = NULL;
            t = u_17;
            t = foldr_3_0(c_1, g_1, h_1, t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_17, e_18);
            z_12 = t;
            t = term_j_14;
            a_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, w_17, e_18));
            t = d_10(a_13, z_12, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm k_14 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_14) != ATmakeSymbol("k_0", 0, ATtrue)))
                  _fail(t);
                s_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(CheckATermList(u_17), (ATerm) ATmakeAppl(sym_Id_1, s_12))));
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
                            ATerm m_18 = NULL,h_16 = NULL,i_16 = NULL,k_16 = NULL,h_15 = NULL;
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
                            m_18 = t;
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_15), term_p_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, m_18)))))));
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
                              ATerm a_17 = NULL;
                              if(match_cons(t, sym_Int_1))
                                {
                                  w_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSL_int_to_string(w_17);
                              a_17 = t;
                              t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_17))));
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
  ATerm e_23 = NULL,f_23 = NULL,j_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,s_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      o_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_23;
  if(match_string(t, "Cons"))
    {
      ATerm z_22 = NULL;
      t = s_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_23 = ATgetFirst((ATermList) t);
          f_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_23 = ATgetFirst((ATermList) t);
          m_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_23;
      {
        ATerm y_15 = t;
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
                  ATerm s_26 = NULL,q_7 = NULL;
                  t = SSLgetAnnotations(r_24);
                  s_26 = t;
                  t = m_26;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("ATempty", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Id_1, m_26);
                  q_7 = t;
                  t = SSLsetAnnotations(q_7, s_26);
                }
              }
            else
              {
                ATerm x_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,a_8 = NULL,z_7 = NULL,x_7 = NULL;
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
                x_7 = t;
                t = SSLsetAnnotations(x_7, f_27);
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
            t = y_15;
            t = (ATerm) ATmakeAppl(sym_FunCall_2, term_d_16, (ATerm) ATinsert(ATempty, j_23));
          }
      }
      z_22 = t;
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, e_23), z_22)));
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
        _fail(t);
      t = s_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_16;
    }
  return(t);
}
static ATerm r_53 (ATerm x_27, ATerm b_28, ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm r_28 = NULL,t_28 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  t = x_27;
  {
    ATerm m_16 = t;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        u_28 = t;
        if(match_string(t, "Nil"))
          {
            t = u_28;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = u_28;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_16;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, b_28, term_x_13);
  {
    static ATerm q_1 (ATerm t);
    static ATerm q_1 (ATerm t)
    {
      ATerm v_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,d_29 = NULL;
      if(match_cons(t, sym__2))
        {
          v_28 = ATgetArgument(t, 0);
          x_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_28);
      a_29 = t;
      t = v_28;
      if(match_cons(t, sym_Var_1))
        {
          d_29 = ATgetArgument(t, 0);
          {
            ATerm n_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_29 = NULL;
                t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_29)), g_28));
                k_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_29)), g_28)));
                t = t_9(v_28, d_29, k_29, t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = n_16;
                {
                  ATerm m_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_29)), g_28));
                  m_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_29)), g_28)));
                  t = s_9(v_28, m_29, t);
                }
              }
          }
        }
      else
        {
          ATerm o_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_29)), g_28));
          o_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_28, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, a_29)), g_28)));
          t = s_9(v_28, o_29, t);
        }
      y_28 = t;
      t = term_y_13;
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, term_y_13);
      t = r_10(x_28, b_29, t);
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
  t = b_28;
  t = foldr_3_0(s_1, t_1, u_1, t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, t_28);
  n_27 = t;
  t = term_j_14;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, x_27, t_28));
  t = d_10(o_27, n_27, t);
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
static ATerm s_53 (ATerm r_29, ATerm t_29, ATerm u_29, ATerm t)
{
  ATerm d_30 = NULL;
  t = SSL_real_to_string(r_29);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, t_29)), term_z_16), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_17, t_29))), (ATerm) ATmakeAppl(sym_FloatConst_1, d_30))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
  return(t);
}
static ATerm t_53 (ATerm e_30, ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_int_to_string(e_30);
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
static ATerm w_53 (ATerm f_31, ATerm g_31, ATerm c_32, ATerm d_32, ATerm t)
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
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_31), term_q_14), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, g_31), c_32)), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, c_32))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, g_31), term_w_11, c_32)));
  return(t);
}
static ATerm x_53 (ATerm d_33, ATerm a_35, ATerm b_35, ATerm c_35, ATerm t)
{
  t = SSLgetAnnotations(d_33);
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
  t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, a_35), b_35), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, b_35))))));
  return(t);
}
static ATerm y_53 (ATerm w_39, ATerm b_40, ATerm c_40, ATerm g_40, ATerm t)
{
  t = SSLgetAnnotations(w_39);
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
  t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, b_40), term_w_11, c_40));
  return(t);
}
static ATerm z_53 (ATerm y_40, ATerm c_41, ATerm e_41, ATerm f_41, ATerm j_41, ATerm k_41, ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm z_41 = NULL,b_42 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t = c_41;
  {
    ATerm y_17 = t;
    if((PushChoice() == 0))
      {
        ATerm c_42 = NULL;
        c_42 = t;
        if(match_string(t, "Nil"))
          {
            t = c_42;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = c_42;
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, f_41, term_x_13);
  {
    static ATerm v_1 (ATerm t);
    static ATerm v_1 (ATerm t)
    {
      ATerm d_42 = NULL,g_42 = NULL,h_42 = NULL,k_42 = NULL,l_42 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm z_17 = ATgetArgument(t, 0);
          if(match_cons(z_17, sym_Var_1))
            {
              d_42 = ATgetArgument(z_17, 0);
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
      l_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_42, term_y_13);
      t = r_10(g_42, l_42, t);
      k_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, d_42), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, h_42)), (ATerm) ATmakeAppl(sym_Id_1, y_40))))), k_42);
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
  t = (ATerm) ATmakeAppl(sym__2, c_41, e_41);
  s_27 = t;
  t = term_j_14;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, c_41, e_41));
  t = d_10(t_27, s_27, t);
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
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, r_27)), (ATerm) ATmakeAppl(sym_Id_1, y_40))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, b_42), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, y_40), k_41, l_41))));
  return(t);
}
static ATerm c_54 (ATerm p_42, ATerm t_42, ATerm u_42, ATerm v_42, ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm n_43 = NULL;
  t = SSL_real_to_string(t_42);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, n_43)), (ATerm) ATmakeAppl(sym_Id_1, p_42))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_42)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, p_42), v_42, f_43))));
  return(t);
}
static ATerm d_54 (ATerm o_43, ATerm p_43, ATerm w_43, ATerm x_43, ATerm y_43, ATerm b_44, ATerm t)
{
  ATerm l_44 = NULL;
  t = SSL_int_to_string(p_43);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, l_44)), (ATerm) ATmakeAppl(sym_Id_1, o_43))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_43)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, o_43), x_43, y_43))));
  return(t);
}
static ATerm e_54 (ATerm m_44, ATerm n_44, ATerm o_44, ATerm t)
{
  t = n_44;
  {
    ATerm j_18 = t;
    if((PushChoice() == 0))
      {
        ATerm x_44 = NULL,y_44 = NULL,b_45 = NULL,j_8 = NULL;
        b_45 = t;
        if(match_cons(t, sym_Var_1))
          {
            y_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_45);
        x_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, y_44);
        j_8 = t;
        t = SSLsetAnnotations(j_8, x_44);
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
  ATerm p_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(p_29, q_29, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_46 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym_SVar_1))
        {
          x_46 = ATgetArgument(k_18, 0);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(((ATgetType(l_18) != AT_LIST) || !(ATisEmpty(l_18))))
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
  t = (ATerm) ATmakeAppl(sym_Id_1, x_46);
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
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = bottomup_1_0(c_2, t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ConstructList_0_0(t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
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
  ATerm r_47 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym_SVar_1))
        {
          r_47 = ATgetArgument(u_18, 0);
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
  t = (ATerm) ATmakeAppl(sym_Id_1, r_47);
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
  ATerm o_49 = NULL;
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, o_49), term_j_11), term_d_19);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
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
      a_50 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_50;
            t = t_9(h_50, a_50, i_50, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = g_50;
            t = s_9(h_50, i_50, t);
          }
      }
    }
  else
    {
      t = g_50;
      t = s_9(h_50, i_50, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm a_28 = NULL,c_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      c_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_28;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(c_28), term_b_14), term_a_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_28), term_a_14), term_a_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(c_28), term_e_14), term_a_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(c_28), term_f_14), term_a_14);
            }
        }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_29 = NULL,l_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_29 = ATgetFirst((ATermList) t);
      l_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_29;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_29), term_b_14), term_a_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(l_29), term_a_14), term_a_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_29), term_e_14), term_a_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_29), term_f_14), term_a_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStrat_0_0 (ATerm t)
{
  ATerm c_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,t_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
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
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_46), term_j_11)))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, n_46)))), term_h_19), h_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, n_46), term_w_11, term_d_11))));
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
                    ATerm s_46 = NULL,t_46 = NULL,w_46 = NULL;
                    t = h_46;
                    if(match_cons(t, sym_SVar_1))
                      {
                        f_46 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_46;
                    t = map_1_0(x_1, t);
                    s_46 = t;
                    t = b_46;
                    t = map_1_0(y_1, t);
                    t_46 = t;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_11)), t_46), s_46);
                    t = concat_0_0(t);
                    w_46 = t;
                    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, f_46), w_46)));
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
                        ATerm j_47 = NULL,p_47 = NULL,q_47 = NULL;
                        t = e_46;
                        t = map_1_0(d_2, t);
                        j_47 = t;
                        t = b_46;
                        t = map_1_0(e_2, t);
                        p_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, j_47, p_47);
                        t = conc_0_0(t);
                        q_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, h_46), q_47)));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Not_1))
                        {
                          h_46 = ATgetArgument(t, 0);
                          {
                            ATerm c_48 = NULL;
                            t = g_46;
                            t = new_0_0(t);
                            c_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, c_48), term_j_11), term_i_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11)))), term_q_19), h_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, c_48))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LGChoice_2))
                            {
                              h_46 = ATgetArgument(t, 0);
                              e_46 = ATgetArgument(t, 1);
                              {
                                ATerm k_48 = NULL;
                                t = g_46;
                                t = new_0_0(t);
                                k_48 = t;
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, k_48), term_j_11), term_i_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_u_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, k_48))))))));
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
                                        ATerm z_48 = NULL,a_49 = NULL;
                                        t = g_46;
                                        t = new_0_0(t);
                                        z_48 = t;
                                        t = new_0_0(t);
                                        a_49 = t;
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_w_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, a_49), term_j_11), term_z_19)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, z_48), term_j_11), term_i_19)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_m_19, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, a_49))))), term_h_19), h_46)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, b_46), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_11, term_w_11, (ATerm) ATmakeAppl(sym_Id_1, z_48))))))));
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
                                                        ATerm n_49 = NULL;
                                                        t = h_46;
                                                        t = map_1_0(h_2, t);
                                                        n_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, n_49)), (ATerm) ATinsert(ATempty, e_46));
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
                                                                          c_45 = ATgetFirst((ATermList) t);
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
                                                                                          ATerm z_49 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_45, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, e_46)))))), (ATerm) ATmakeAppl(sym__2, c_45, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, e_46)))));
                                                                                          t = map_1_0(j_2, t);
                                                                                          z_49 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, e_46)), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, e_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, z_49), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
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
                                                                          t = s_53(f_46, e_46, g_46, t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Int_1))
                                                                            {
                                                                              f_46 = ATgetArgument(t, 0);
                                                                              t = t_53(f_46, e_46, g_46, t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Str_1))
                                                                                {
                                                                                  f_46 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm x_50 = NULL,m_28 = NULL,n_28 = NULL,p_28 = NULL,v_27 = NULL;
                                                                                    t = SSL_explode_string(f_46);
                                                                                    t = escape_chars_1_0(k_2, t);
                                                                                    v_27 = t;
                                                                                    t = SSL_implode_string(v_27);
                                                                                    n_28 = t;
                                                                                    t = SSL_explode_string(n_28);
                                                                                    p_28 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_28), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
                                                                                    t = conc_0_0(t);
                                                                                    m_28 = t;
                                                                                    t = SSL_implode_string(m_28);
                                                                                    x_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_z_20, e_46))), (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_15), term_p_15), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, x_50))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, term_d_11))));
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
                                                                                                            t = y_53(h_46, f_46, e_46, g_46, t);
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
                                                                                  t_45 = ATgetArgument(t, 0);
                                                                                  w_45 = ATgetArgument(t, 1);
                                                                                  x_45 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = t_45;
                                                                              if(match_cons(t, sym_Fun_2))
                                                                                {
                                                                                  v_45 = ATgetArgument(t, 0);
                                                                                  q_45 = ATgetArgument(t, 1);
                                                                                  t = w_45;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      i_45 = ATgetFirst((ATermList) t);
                                                                                      k_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                      t = k_45;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          l_45 = ATgetFirst((ATermList) t);
                                                                                          p_45 = (ATerm) ATgetNext((ATermList) t);
                                                                                          t = p_45;
                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                            {
                                                                                              t = l_45;
                                                                                              if(match_cons(t, sym_Var_1))
                                                                                                {
                                                                                                  o_45 = ATgetArgument(t, 0);
                                                                                                  t = i_45;
                                                                                                  if(match_cons(t, sym_Var_1))
                                                                                                    {
                                                                                                      j_45 = ATgetArgument(t, 0);
                                                                                                      t = q_45;
                                                                                                      if(match_int(t, 2))
                                                                                                        {
                                                                                                          t = v_45;
                                                                                                          if(match_string(t, "Cons"))
                                                                                                            {
                                                                                                              ATerm l_21 = t;
                                                                                                              int m_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46))), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_45), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, o_45), term_w_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, (ATerm) ATmakeAppl(sym_Id_1, f_46)))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, j_45), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_20, (ATerm) ATmakeAppl(sym_Id_1, f_46)))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_46), a_46, b_46))));
                                                                                                                  LocalPopChoice(m_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_21;
                                                                                                                  t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = v_45;
                                                                                                          t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_45;
                                                                                                      t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_45;
                                                                                                  t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_45;
                                                                                              t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_45;
                                                                                          t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          t = q_45;
                                                                                          if(match_int(t, 0))
                                                                                            {
                                                                                              t = v_45;
                                                                                              if(match_string(t, "Nil"))
                                                                                                {
                                                                                                  ATerm n_21 = t;
                                                                                                  int o_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46))), term_p_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, f_46)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, x_45), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_46), a_46, b_46))));
                                                                                                      LocalPopChoice(o_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_21;
                                                                                                      t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_45;
                                                                                              t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_45;
                                                                                          t = z_53(f_46, v_45, q_45, w_45, x_45, a_46, b_46, g_46, t);
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Real_1))
                                                                                    {
                                                                                      v_45 = ATgetArgument(t, 0);
                                                                                      t = c_54(f_46, v_45, x_45, a_46, b_46, g_46, t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Int_1))
                                                                                        {
                                                                                          v_45 = ATgetArgument(t, 0);
                                                                                          t = d_54(f_46, v_45, x_45, a_46, b_46, g_46, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          ATerm j_52 = NULL,y_29 = NULL,z_29 = NULL,b_30 = NULL,q_28 = NULL;
                                                                                          if(match_cons(t, sym_Str_1))
                                                                                            {
                                                                                              v_45 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = SSL_explode_string(v_45);
                                                                                          t = escape_chars_1_0(l_2, t);
                                                                                          q_28 = t;
                                                                                          t = SSL_implode_string(q_28);
                                                                                          z_29 = t;
                                                                                          t = SSL_explode_string(z_29);
                                                                                          b_30 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_30), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
                                                                                          t = conc_0_0(t);
                                                                                          y_29 = t;
                                                                                          t = SSL_implode_string(y_29);
                                                                                          j_52 = t;
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, j_52))), (ATerm) ATmakeAppl(sym_Id_1, f_46))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, f_46), a_46, b_46))));
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
ATerm escape_chars_1_0 (ATerm s_154 (ATerm), ATerm t)
{
  static ATerm m_55 (ATerm t);
  static ATerm m_55 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_54 = NULL,n_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,o_8 = NULL;
        t = s_154(t);
        s_54 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_54 = ATgetFirst((ATermList) t);
            q_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_54);
        k_54 = t;
        t = q_54;
        t = Cons_2_0(_id, m_55, t);
        r_54 = t;
        t = (ATerm) ATinsert(CheckATermList(r_54), n_54);
        o_8 = t;
        t = SSLsetAnnotations(o_8, k_54);
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
                ATerm m_30 = NULL,s_30 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(l_55);
                m_30 = t;
                t = k_55;
                t = m_55(t);
                s_30 = t;
                t = (ATerm) ATinsert(CheckATermList(s_30), j_55);
                p_8 = t;
                t = SSLsetAnnotations(p_8, m_30);
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
  t = m_55(t);
  return(t);
}
static ATerm z_9 (ATerm z_0 (ATerm), ATerm d_1 (ATerm), ATerm a_1, ATerm f_1, ATerm x_0, ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,w_55 = NULL,x_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_1, x_0);
  t = z_0(t);
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_55), w_55), q_55);
  return(t);
}
ATerm thread_map_1_0 (ATerm m_151 (ATerm), ATerm t)
{
  static ATerm u_56 (ATerm t);
  static ATerm u_56 (ATerm t)
  {
    ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,h_56 = NULL,k_56 = NULL;
    f_56 = t;
    if(match_cons(t, sym__2))
      {
        h_56 = ATgetArgument(t, 0);
        k_56 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = h_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_56 = ATgetFirst((ATermList) t);
        e_56 = (ATerm) ATgetNext((ATermList) t);
        t = f_56;
        t = z_9(m_151, u_56, d_56, e_56, k_56, t);
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_56);
      }
    return(t);
  }
  t = u_56(t);
  return(t);
}
static ATerm j_61 (ATerm h_58, ATerm i_58, ATerm p_58, ATerm q_58, ATerm r_58, ATerm t)
{
  ATerm w_58 = NULL,y_58 = NULL,z_58 = NULL,h_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = h_58;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm a_59 = NULL;
        a_59 = t;
        if(match_string(t, "Nil"))
          {
            t = a_59;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
              _fail(t);
            t = a_59;
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
  t = map_1_0(m_2, t);
  t = (ATerm) ATmakeAppl(sym__2, i_58, term_x_13);
  t = thread_map_1_0(n_2, t);
  if(match_cons(t, sym__2))
    {
      w_58 = ATgetArgument(t, 0);
      {
        ATerm w_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_58;
  t = foldr_3_0(o_2, p_2, q_2, t);
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, z_58);
  l_31 = t;
  t = term_j_14;
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, h_58, z_58));
  t = d_10(m_31, l_31, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_58, (ATerm) ATinsert(ATempty, p_58));
  t = conc_0_0(t);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, h_31)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, y_58), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_58)));
  return(t);
}
static ATerm k_61 (ATerm o_59, ATerm p_59, ATerm q_59, ATerm r_59, ATerm t)
{
  ATerm v_59 = NULL;
  t = SSL_real_to_string(o_59);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, v_59)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_59)));
  return(t);
}
static ATerm l_61 (ATerm w_59, ATerm x_59, ATerm y_59, ATerm z_59, ATerm t)
{
  ATerm d_60 = NULL;
  t = SSL_int_to_string(w_59);
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, d_60)), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_59)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_59)));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,u_8 = NULL;
  d_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_59);
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_59);
  u_8 = t;
  t = SSLsetAnnotations(u_8, b_59);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,k_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      if(match_cons(y_21, sym_Var_1))
        {
          e_59 = ATgetArgument(y_21, 0);
        }
      else
        _fail(t);
      f_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(f_59);
  g_59 = t;
  t = term_y_13;
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_59, term_y_13);
  t = r_10(f_59, k_59, t);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, e_59), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, g_59)), term_d_11)))), h_59);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(l_59, m_59, t);
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
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_b_14), term_a_14);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_a_14), term_a_14);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_e_14), term_a_14);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), term_f_14), term_a_14);
            }
        }
    }
  return(t);
}
ATerm TranslateStratMatchGuard_0_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  l_60 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      m_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
      q_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_60;
  if(match_cons(t, sym_Match_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_60;
  if(match_cons(t, sym_Op_2))
    {
      o_60 = ATgetArgument(t, 0);
      k_60 = ATgetArgument(t, 1);
      t = k_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_60 = ATgetFirst((ATermList) t);
          g_60 = (ATerm) ATgetNext((ATermList) t);
          t = g_60;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_60 = ATgetFirst((ATermList) t);
              j_60 = (ATerm) ATgetNext((ATermList) t);
              t = j_60;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = h_60;
                  if(match_cons(t, sym_Var_1))
                    {
                      i_60 = ATgetArgument(t, 0);
                      t = e_60;
                      if(match_cons(t, sym_Var_1))
                        {
                          f_60 = ATgetArgument(t, 0);
                          t = o_60;
                          if(match_string(t, "Cons"))
                            {
                              ATerm z_21 = t;
                              int a_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_d_11)), term_p_20), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, term_d_11)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_60), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, i_60), term_w_11, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, f_60), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATinsert(ATempty, term_b_22)))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_60)));
                                  LocalPopChoice(a_22);
                                }
                              else
                                {
                                  t = z_21;
                                  t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                                }
                            }
                          else
                            {
                              t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                            }
                        }
                      else
                        {
                          t = o_60;
                          t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                        }
                    }
                  else
                    {
                      t = o_60;
                      t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                    }
                }
              else
                {
                  t = o_60;
                  t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                }
            }
          else
            {
              t = o_60;
              t = j_61(o_60, k_60, p_60, q_60, l_60, t);
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = o_60;
              if(match_string(t, "Nil"))
                {
                  ATerm c_22 = t;
                  int d_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_16, (ATerm) ATinsert(ATempty, term_d_11)), term_p_20), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_20, (ATerm) ATinsert(ATempty, term_d_11))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_60)));
                      LocalPopChoice(d_22);
                    }
                  else
                    {
                      t = c_22;
                      t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                    }
                }
              else
                {
                  t = j_61(o_60, k_60, p_60, q_60, l_60, t);
                }
            }
          else
            {
              t = o_60;
              t = j_61(o_60, k_60, p_60, q_60, l_60, t);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          o_60 = ATgetArgument(t, 0);
          t = k_61(o_60, p_60, q_60, l_60, t);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              o_60 = ATgetArgument(t, 0);
              t = l_61(o_60, p_60, q_60, l_60, t);
            }
          else
            {
              ATerm a_61 = NULL,y_31 = NULL,z_31 = NULL,b_32 = NULL,o_31 = NULL;
              if(match_cons(t, sym_Str_1))
                {
                  o_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_explode_string(o_60);
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
              a_61 = t;
              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, a_61))), term_d_11)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_60)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, q_60)));
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm n_137 (ATerm), ATerm t)
{
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = topdown_1_0(n_137, t);
    return(t);
  }
  t = n_137(t);
  t = SRTS_all(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  x_61 = t;
  if(match_cons(t, sym_SeqVar_1))
    {
      w_61 = ATgetArgument(t, 0);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_32 = NULL,i_32 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(x_61);
            g_32 = t;
            t = w_61;
            if(match_cons(t, sym_Var_1))
              {
                i_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SeqVar_1, i_32);
            w_8 = t;
            t = SSLsetAnnotations(w_8, g_32);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = x_61;
          }
      }
    }
  else
    {
      t = x_61;
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
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  t_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
      w_62 = ATgetArgument(t, 2);
      x_62 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
        t = u_62;
        t = is_local_function_0_0(t);
        t = v_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        c_63 = t;
        t = w_62;
        t = map_1_0(TranslateVarDec_0_0, t);
        d_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
        t = conc_0_0(t);
        e_63 = t;
        t = x_62;
        t = translate_body_0_0(t);
        f_63 = t;
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_22, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, e_63, (ATerm) ATinsert(ATempty, term_n_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), term_h_19), f_63)));
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
          t = u_62;
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
          t = v_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          y_32 = t;
          t = w_62;
          t = map_1_0(TranslateVarDec_0_0, t);
          z_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_32, z_32);
          t = conc_0_0(t);
          a_33 = t;
          t = x_62;
          t = translate_body_0_0(t);
          b_33 = t;
          t = (ATerm) ATmakeAppl(sym_FunDef_3, term_a_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, u_62), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, a_33, (ATerm) ATinsert(ATempty, term_n_11))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), term_h_19), b_33)));
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_151 (ATerm), ATerm t)
{
  ATerm t_63 = NULL,x_63 = NULL,y_63 = NULL;
  t_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_63;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_63 = ATgetFirst((ATermList) t);
          y_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33 = NULL,o_33 = NULL,p_33 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(t_63);
            l_33 = t;
            t = x_63;
            t = z_151(t);
            o_33 = t;
            t = y_63;
            t = filter_1_0(z_151, t);
            p_33 = t;
            t = (ATerm) ATinsert(CheckATermList(p_33), o_33);
            f_9 = t;
            t = SSLsetAnnotations(f_9, l_33);
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = y_63;
            t = filter_1_0(z_151, t);
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
        ATerm i_64 = NULL;
        t = e_64;
        t = map_1_0(TranslateType_0_0, t);
        i_64 = t;
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_10, (ATerm) ATmakeAppl(sym_ParamList_1, i_64));
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
      t = term_a_10;
    }
  return(t);
}
ATerm TranslateVarDec_0_0 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_64 = ATgetArgument(t, 0);
      o_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_64;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            p_64 = ATgetArgument(t, 0);
            {
              ATerm x_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_22);
        {
          ATerm s_64 = NULL;
          t = p_64;
          t = map_1_0(TranslateType_0_0, t);
          s_64 = t;
          t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_64), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, s_64)))));
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
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_a_10, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, n_64), term_j_11)));
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      ATerm u_64 = NULL,v_64 = NULL;
      if(match_cons(t, sym__2))
        {
          u_64 = ATgetArgument(t, 0);
          v_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(u_64, v_64);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = SSL_gtr(u_64, v_64);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
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
  ATerm c_65 = NULL;
  c_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_23, c_65);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, c_65, term_g_23);
  t = leq_0_0(t);
  t = c_65;
  return(t);
}
ATerm is_local_function_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,h_9 = NULL;
  w_64 = t;
  t = SSL_explode_string(w_64);
  b_65 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_64 = ATgetFirst((ATermList) t);
      z_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_65);
  x_64 = t;
  t = y_64;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_23, y_64);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, y_64, term_l_23);
        t = leq_0_0(t);
        t = y_64;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, y_64);
        t = leq_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, y_64, term_q_23);
        t = leq_0_0(t);
        t = y_64;
      }
  }
  t = z_64;
  t = Cons_2_0(j_3, k_3, t);
  a_65 = t;
  t = (ATerm) ATinsert(CheckATermList(a_65), y_64);
  h_9 = t;
  t = SSLsetAnnotations(h_9, x_64);
  return(t);
}
ATerm SDefToDeclaration_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  v_65 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      w_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
      y_65 = ATgetArgument(t, 2);
      {
        ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL;
        t = x_65;
        t = map_1_0(TranslateVarDec_0_0, t);
        d_66 = t;
        t = y_65;
        t = map_1_0(TranslateVarDec_0_0, t);
        e_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_66, e_66);
        t = conc_0_0(t);
        f_66 = t;
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, f_66, (ATerm) ATinsert(ATempty, term_n_11)))))));
      }
    }
  else
    {
      ATerm r_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              w_65 = ATgetArgument(t, 0);
              x_65 = ATgetArgument(t, 1);
              y_65 = ATgetArgument(t, 2);
              {
                ATerm u_23 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          LocalPopChoice(t_23);
          {
            ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
            t = x_65;
            t = map_1_0(TranslateVarDec_0_0, t);
            j_66 = t;
            t = y_65;
            t = map_1_0(TranslateVarDec_0_0, t);
            k_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_66, k_66);
            t = conc_0_0(t);
            l_66 = t;
            t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, l_66, (ATerm) ATinsert(ATempty, term_n_11)))))));
          }
        }
      else
        {
          t = r_23;
          if(match_cons(t, sym_SDefT_4))
            {
              w_65 = ATgetArgument(t, 0);
              x_65 = ATgetArgument(t, 1);
              y_65 = ATgetArgument(t, 2);
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
                ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
                t = w_65;
                t = is_local_function_0_0(t);
                t = x_65;
                t = map_1_0(TranslateVarDec_0_0, t);
                p_66 = t;
                t = y_65;
                t = map_1_0(TranslateVarDec_0_0, t);
                q_66 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_66, q_66);
                t = conc_0_0(t);
                r_66 = t;
                t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, r_66, (ATerm) ATinsert(ATempty, term_n_11)))))));
                LocalPopChoice(x_23);
              }
            else
              {
                t = w_23;
                {
                  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
                  t = w_65;
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
                  t = x_65;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  b_34 = t;
                  t = y_65;
                  t = map_1_0(TranslateVarDec_0_0, t);
                  c_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
                  t = conc_0_0(t);
                  d_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, w_65), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATmakeAppl(sym_Conc_2, d_34, (ATerm) ATinsert(ATempty, term_n_11)))))));
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
  ATerm h_67 = NULL,i_67 = NULL;
  if(match_cons(t, sym__2))
    {
      h_67 = ATgetArgument(t, 0);
      i_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(h_67, i_67, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm e_10 (ATerm l_40, ATerm j_40, ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,z_66 = NULL,b_67 = NULL,c_67 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,f_67 = NULL;
  t = j_40;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            f_67 = ATgetArgument(t, 0);
            {
              ATerm b_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_24);
        t = f_67;
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
  x_66 = t;
  t = SSL_int_to_string(x_66);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_40, x_66);
  n_34 = t;
  t = term_j_14;
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATmakeAppl(sym__2, l_40, x_66));
  t = d_10(o_34, n_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_24) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_string(l_40);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_67), term_b_14), (ATerm) ATinsert(ATempty, term_b_14));
  t = conc_0_0(t);
  c_67 = t;
  t = SSL_implode_string(c_67);
  z_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, m_34))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, m_34), term_w_11, (ATerm) ATmakeAppl(sym_FunCall_2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), (ATerm) ATmakeAppl(sym_IntConst_1, w_66)), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, z_66)))))));
  return(t);
}
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_67 = ATgetFirst((ATermList) t);
      n_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_67;
  if(match_int(t, 92))
    {
      ATerm p_67 = NULL;
      t = n_67;
      t = t_0(t);
      p_67 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_67), term_i_24), term_j_24), term_i_24);
    }
  else
    {
      if(match_int(t, 34))
        {
          ATerm r_67 = NULL;
          t = n_67;
          t = t_0(t);
          r_67 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_67), term_i_24), term_s_24), term_i_24);
        }
      else
        {
          if(match_int(t, 95))
            {
              ATerm t_67 = NULL;
              t = n_67;
              t = t_0(t);
              t_67 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(t_67), term_i_24), term_i_24);
            }
          else
            {
              if(match_int(t, 45))
                {
                  ATerm v_67 = NULL;
                  t = n_67;
                  t = t_0(t);
                  v_67 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_67), term_i_24);
                }
              else
                {
                  ATerm x_67 = NULL;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
                    _fail(t);
                  t = n_67;
                  t = t_0(t);
                  x_67 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_67), term_i_24), term_t_24), term_i_24);
                }
            }
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm p_154 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL;
  b_68 = t;
  t = SSL_explode_string(b_68);
  {
    static ATerm x_68 (ATerm t);
    static ATerm x_68 (ATerm t)
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_154(x_68, t);
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          {
            ATerm r_68 = NULL,v_68 = NULL,w_68 = NULL;
            w_68 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_68 = ATgetFirst((ATermList) t);
                v_68 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm t_34 = NULL,w_34 = NULL,j_9 = NULL;
                  t = SSLgetAnnotations(w_68);
                  t_34 = t;
                  t = v_68;
                  t = x_68(t);
                  w_34 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_34), r_68);
                  j_9 = t;
                  t = SSLsetAnnotations(j_9, t_34);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_68;
              }
          }
        }
      return(t);
    }
    t = x_68(t);
  }
  a_68 = t;
  t = SSL_implode_string(a_68);
  return(t);
}
ATerm foldr_3_0 (ATerm x_150 (ATerm), ATerm y_150 (ATerm), ATerm z_150 (ATerm), ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  a_69 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_69;
      t = x_150(t);
    }
  else
    {
      ATerm f_69 = NULL,g_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_69 = ATgetFirst((ATermList) t);
          c_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_69;
      t = z_150(t);
      f_69 = t;
      t = c_69;
      t = foldr_3_0(x_150, y_150, z_150, t);
      g_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
      t = y_150(t);
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
  ATerm t_69 = NULL,u_69 = NULL;
  if(match_cons(t, sym__2))
    {
      t_69 = ATgetArgument(t, 0);
      u_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(t_69, u_69, t);
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
static ATerm f_10 (ATerm y_39, ATerm x_39, ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,r_69 = NULL;
  t = x_39;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_FunType_2))
          {
            r_69 = ATgetArgument(t, 0);
            {
              ATerm y_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_24);
        t = r_69;
        t = foldr_3_0(p_3, q_3, r_3, t);
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
        t = term_x_13;
      }
  }
  i_69 = t;
  t = y_39;
  t = escape_1_0(Cify_1_0, t);
  k_69 = t;
  t = SSL_int_to_string(i_69);
  l_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_69), term_b_25), k_69), term_a_25);
  o_69 = t;
  t = SSL_concat_strings(o_69);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_39, i_69);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, j_69);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_39, i_69), (ATerm) ATmakeAppl(sym_Defined_2, term_c_25, j_69));
  t = h_10(s_3, m_69, n_69, t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_f_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, j_69), term_j_11)));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  y_69 = t;
  t = term_g_25;
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, y_69);
  t = o_10(z_69, y_69, t);
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym_Include_1, x_69);
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
        ATerm v_69 = NULL,w_69 = NULL;
        t = term_k_25;
        v_69 = t;
        t = term_h_25;
        w_69 = t;
        t = term_l_25;
        t = w_10(v_69, w_69, t);
        t = map_1_0(t_3, t);
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
static ATerm u_3 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      p_70 = ATgetArgument(t, 0);
      q_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(p_70, q_70, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      r_70 = ATgetArgument(t, 0);
      s_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(r_70, s_70, t);
  return(t);
}
static ATerm w_3 (ATerm t)
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
static ATerm x_3 (ATerm t)
{
  ATerm v_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      v_70 = ATgetArgument(t, 1);
      {
        ATerm r_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_n_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, v_70), term_j_11)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  if(match_cons(t, sym__3))
    {
      x_70 = ATgetArgument(t, 0);
      y_70 = ATgetArgument(t, 1);
      z_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_9(x_70, y_70, z_70, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
  k_71 = t;
  if(match_cons(t, sym_Conc_2))
    {
      i_71 = ATgetArgument(t, 0);
      j_71 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, i_71, j_71);
            t = conc_0_0(t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = k_71;
          }
      }
    }
  else
    {
      t = k_71;
    }
  return(t);
}
static ATerm g_10 (ATerm s_40, ATerm v_40, ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  l_70 = t;
  t = GenerateIncludes_0_0(t);
  d_70 = t;
  t = s_40;
  t = filter_1_0(u_3, t);
  e_70 = t;
  t = s_40;
  t = filter_1_0(v_3, t);
  t = concat_0_0(t);
  f_70 = t;
  t = v_40;
  t = map_1_0(SDefToDeclaration_0_0, t);
  g_70 = t;
  t = v_40;
  t = filter_1_0(w_3, t);
  t = map_1_0(TranslateDef_0_0, t);
  h_70 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_70 = NULL,e_35 = NULL,f_35 = NULL;
        t = (ATerm) ATempty;
        e_35 = t;
        t = term_u_12;
        f_35 = t;
        t = term_b_13;
        t = d_10(f_35, e_35, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            t_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_70;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
  }
  o_70 = t;
  t = map_1_0(x_3, t);
  m_70 = t;
  t = o_70;
  t = map_1_0(y_3, t);
  t = concat_0_0(t);
  t = reverse_acc_2_0(_id, z_3, t);
  n_70 = t;
  t = l_70;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_71 = NULL,c_71 = NULL;
        t = term_k_25;
        b_71 = t;
        t = term_z_25;
        c_71 = t;
        t = term_a_26;
        t = w_10(b_71, c_71, t);
        t = l_70;
        LocalPopChoice(y_25);
        t = (ATerm) ATempty;
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_c_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), term_d_20));
      }
  }
  i_70 = t;
  t = l_70;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_71 = NULL,e_71 = NULL;
        t = term_k_25;
        d_71 = t;
        t = term_z_25;
        e_71 = t;
        t = term_a_26;
        t = w_10(d_71, e_71, t);
        t = l_70;
        LocalPopChoice(h_26);
        t = (ATerm) ATinsert(ATempty, term_j_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATinsert(ATempty, term_l_26);
      }
  }
  j_70 = t;
  t = l_70;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_71 = NULL,g_71 = NULL;
        t = term_k_25;
        f_71 = t;
        t = term_z_25;
        g_71 = t;
        t = term_a_26;
        t = w_10(f_71, g_71, t);
        t = l_70;
        LocalPopChoice(p_26);
        t = (ATerm) ATempty;
      }
    else
      {
        t = o_26;
        {
          ATerm h_71 = NULL;
          t = MainDef_0_0(t);
          h_71 = t;
          t = (ATerm) ATinsert(ATempty, h_71);
        }
      }
  }
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Conc_2, d_70, i_70), e_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_t_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, f_70)))), m_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunDef_3, term_q_26, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_v_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_f_26)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, n_70)))), j_70), g_70), k_70), h_70));
  t = bottomup_1_0(a_4, t);
  return(t);
}
static ATerm h_10 (ATerm k_171 (ATerm), ATerm n_88, ATerm l_88, ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
  s_71 = t;
  t = k_171(t);
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_71, n_88, l_88);
  t = x_10(p_71, n_88, l_88, t);
  {
    ATerm w_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_71 = NULL;
        t = term_z_26;
        x_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_71, term_z_26);
        t = w_10(p_71, x_71, t);
        {
          ATerm i_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_27;
            }
        }
        LocalPopChoice(y_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_71 = ATgetFirst((ATermList) t);
      r_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_71, term_z_26, (ATerm) ATinsert(CheckATermList(r_71), (ATerm) ATinsert(CheckATermList(q_71), n_88)));
  t = lookup_table_0_1(p_71, t);
  w_71 = t;
  t = term_z_26;
  t_71 = t;
  t = (ATerm) ATinsert(CheckATermList(r_71), (ATerm) ATinsert(CheckATermList(q_71), n_88));
  u_71 = t;
  t = w_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(t_71, u_71, v_71, t);
  t = s_71;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm init_term_caching_0_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  t = term_k_27;
  z_71 = t;
  t = term_p_27;
  a_72 = t;
  t = term_q_27;
  t = h_10(b_4, z_71, a_72, t);
  t = y_71;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = repeat_2_0(Csimplify_0_0, _id, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL;
  t = init_term_caching_0_0(t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
        {
          ATerm w_27 = ATgetFirst((ATermList) u_27);
          if(match_cons(w_27, sym_Signature_1))
            {
              ATerm z_27 = ATgetArgument(w_27, 0);
              if(((ATgetType(z_27) == AT_LIST) && !(ATisEmpty(z_27))))
                {
                  ATerm d_28 = ATgetFirst((ATermList) z_27);
                  if(match_cons(d_28, sym_Constructors_1))
                    {
                      c_72 = ATgetArgument(d_28, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_28 = (ATerm) ATgetNext((ATermList) z_27);
                    if(((ATgetType(e_28) != AT_LIST) || !(ATisEmpty(e_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm y_27 = (ATerm) ATgetNext((ATermList) u_27);
            if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
              {
                ATerm f_28 = ATgetFirst((ATermList) y_27);
                if(match_cons(f_28, sym_Strategies_1))
                  {
                    d_72 = ATgetArgument(f_28, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm i_28 = (ATerm) ATgetNext((ATermList) y_27);
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
  t = g_10(c_72, d_72, t);
  t = listbottomup_1_0(c_4, t);
  return(t);
}
static ATerm j_10 (ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm f_72 = NULL;
  t = SSL_fputc(j_58, k_58);
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_72);
  return(t);
}
static ATerm k_10 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm g_72 = NULL;
  t = SSL_write_term_to_stream_text(m_42, n_42);
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_72);
  return(t);
}
static ATerm m_10 (ATerm q_143 (ATerm), ATerm v_288, ATerm s_42, ATerm t)
{
  ATerm h_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_288, term_j_28);
  t = q_10(t);
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_72, s_42);
  t = q_143(t);
  t = fclose_0_0(t);
  t = s_42;
  return(t);
}
static ATerm l_10 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm i_72 = NULL;
  t = SSL_write_term_to_stream_baf(i_42, j_42);
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_72);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(match_cons(k_28, sym_Stream_1))
        {
          p_72 = ATgetArgument(k_28, 0);
        }
      else
        _fail(t);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(p_72, q_72, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(match_cons(l_28, sym_Stream_1))
        {
          u_72 = ATgetArgument(l_28, 0);
        }
      else
        _fail(t);
      v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(u_72, v_72, t);
  r_72 = t;
  t = term_o_28;
  s_72 = t;
  t = r_72;
  if(match_cons(t, sym_Stream_1))
    {
      t_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, r_72);
  t = j_10(s_72, t_72, t);
  return(t);
}
ATerm output_1_0 (ATerm h_163 (ATerm), ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL;
  t = h_163(t);
  k_72 = t;
  {
    ATerm s_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_72 = NULL,m_72 = NULL;
        t = term_k_25;
        l_72 = t;
        t = term_c_29;
        m_72 = t;
        t = term_e_29;
        t = w_10(l_72, m_72, t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = s_28;
        t = term_f_29;
      }
  }
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_72, k_72);
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_72 = NULL,o_72 = NULL;
        t = term_k_25;
        n_72 = t;
        t = term_j_29;
        o_72 = t;
        t = term_n_29;
        t = w_10(n_72, o_72, t);
        t = (ATerm) ATmakeAppl(sym__2, j_72, k_72);
        LocalPopChoice(i_29);
        if(match_cons(t, sym__2))
          {
            ATerm s_29 = ATgetArgument(t, 0);
            ATerm v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_10(g_4, j_72, k_72, t);
      }
    else
      {
        t = g_29;
        if(match_cons(t, sym__2))
          {
            ATerm w_29 = ATgetArgument(t, 0);
            ATerm x_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_10(h_4, j_72, k_72, t);
      }
  }
  return(t);
}
static ATerm j_73 (ATerm d_73, ATerm t)
{
  t = SSL_fclose(d_73);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL;
  h_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_73 = ATgetArgument(t, 0);
      {
        ATerm a_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_73);
            LocalPopChoice(c_30);
          }
        else
          {
            t = a_30;
            t = j_73(h_73, t);
          }
      }
    }
  else
    {
      t = j_73(h_73, t);
    }
  return(t);
}
static ATerm n_10 (ATerm o_42, ATerm t)
{
  t = SSL_read_term_from_stream(o_42);
  return(t);
}
static ATerm o_10 (ATerm p_56, ATerm q_56, ATerm t)
{
  t = SSL_strcat(p_56, q_56);
  return(t);
}
static ATerm p_10 (ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm k_73 = NULL;
  t = SSL_fopen(l_58, m_58);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_73 = NULL;
  t = SSL_stdin_stream();
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_stdout_stream();
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_73 = NULL;
  t = SSL_stderr_stream();
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_73);
  return(t);
}
static ATerm u_74 (ATerm t_73, ATerm t)
{
  ATerm u_73 = NULL;
  t = SSL_explode_term(t_73);
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
        if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
          {
            u_73 = ATgetFirst((ATermList) i_30);
            {
              ATerm j_30 = (ATerm) ATgetNext((ATermList) i_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_74 (ATerm x_73, ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,f_74 = NULL,l_9 = NULL;
  t = SSLgetAnnotations(z_73);
  c_74 = t;
  t = x_73;
  if(match_cons(t, sym_Path_1))
    {
      f_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_74, y_73);
  l_9 = t;
  t = SSLsetAnnotations(l_9, c_74);
  if(match_cons(t, sym__2))
    {
      a_74 = ATgetArgument(t, 0);
      b_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(a_74, b_74, t);
  return(t);
}
static ATerm w_74 (ATerm h_74, ATerm i_74, ATerm j_74, ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,p_74 = NULL,m_9 = NULL;
  t = SSLgetAnnotations(j_74);
  m_74 = t;
  t = SSL_is_string(h_74);
  p_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_74, i_74);
  m_9 = t;
  t = SSLsetAnnotations(m_9, m_74);
  if(match_cons(t, sym__2))
    {
      k_74 = ATgetArgument(t, 0);
      l_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(k_74, l_74, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  r_74 = t;
  if(match_cons(t, sym__2))
    {
      s_74 = ATgetArgument(t, 0);
      t_74 = ATgetArgument(t, 1);
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_74(r_74, t);
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            {
              ATerm n_30 = t;
              int o_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_74(s_74, t_74, r_74, t);
                  LocalPopChoice(o_30);
                }
              else
                {
                  t = n_30;
                  t = w_74(s_74, t_74, r_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_74(r_74, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,f_75 = NULL;
  f_75 = t;
  {
    ATerm t_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_75, term_w_30);
        t = q_10(t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = t_30;
        {
          ATerm p_35 = NULL,q_35 = NULL;
          t = term_a_31;
          q_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, f_75);
          t = o_10(q_35, f_75, t);
          p_35 = t;
          t = SSL_perror(p_35);
          _fail(t);
        }
      }
  }
  z_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_10(a_75, t);
  y_74 = t;
  t = z_74;
  t = fclose_0_0(t);
  t = y_74;
  return(t);
}
ATerm input_1_0 (ATerm i_163 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_75 = NULL,j_75 = NULL;
      t = term_k_25;
      i_75 = t;
      t = term_d_31;
      j_75 = t;
      t = term_e_31;
      t = w_10(i_75, j_75, t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = term_n_31;
    }
  t = ReadFromFile_0_0(t);
  t = i_163(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL;
  t = term_k_25;
  k_75 = t;
  t = term_p_31;
  l_75 = t;
  t = term_q_31;
  t = w_10(k_75, l_75, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
  n_75 = t;
  {
    ATerm r_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_31 = ATgetFirst((ATermList) t);
                ATerm w_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_75;
          }
        LocalPopChoice(u_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATinsert(ATempty, n_75);
      }
  }
  o_75 = t;
  t = term_f_29;
  p_75 = t;
  t = SSL_printnl(p_75, o_75);
  t = n_75;
  return(t);
}
ATerm map_1_0 (ATerm y_143 (ATerm), ATerm t)
{
  static ATerm h_76 (ATerm t);
  static ATerm h_76 (ATerm t)
  {
    ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
    e_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_76;
      }
    else
      {
        ATerm v_35 = NULL,y_35 = NULL,z_35 = NULL,u_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_76 = ATgetFirst((ATermList) t);
            g_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_76);
        v_35 = t;
        t = f_76;
        t = y_143(t);
        y_35 = t;
        t = g_76;
        t = h_76(t);
        z_35 = t;
        t = (ATerm) ATinsert(CheckATermList(z_35), y_35);
        u_9 = t;
        t = SSLsetAnnotations(u_9, v_35);
      }
    return(t);
  }
  t = h_76(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_76 = ATgetFirst((ATermList) t);
      l_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_76 = NULL,q_76 = NULL;
        static ATerm i_4 (ATerm t);
        static ATerm i_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_76)), not_null(q_76));
          return(t);
        }
        t = l_76;
        t = r_0(t);
        if(((p_76 != NULL) && (p_76 != t)))
          _fail(t);
        else
          p_76 = t;
        t = k_76;
        t = p_0(t);
        if(((q_76 != NULL) && (q_76 != t)))
          _fail(t);
        else
          q_76 = t;
        t = l_76;
        t = reverse_acc_2_0(p_0, i_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_31;
      t = r_0(t);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,x_9 = NULL;
  a_77 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_77);
  y_76 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_76);
  x_9 = t;
  t = SSLsetAnnotations(x_9, y_76);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_77 = NULL;
  e_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_77), term_a_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_165 (ATerm), ATerm v_165 (ATerm), ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL;
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_76 = NULL,x_76 = NULL;
      t = term_k_25;
      w_76 = t;
      t = term_p_31;
      x_76 = t;
      t = term_q_31;
      t = w_10(w_76, x_76, t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      t = fetch_1_0(o_4, t);
    }
  {
    ATerm h_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_165(t);
        t = echo_0_0(t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = h_32;
      }
  }
  t = term_k_32;
  t = echo_0_0(t);
  t = term_l_32;
  u_76 = t;
  t = term_m_32;
  v_76 = t;
  t = term_n_32;
  t = w_10(u_76, v_76, t);
  t = reverse_acc_2_0(_id, p_4, t);
  t = map_1_0(q_4, t);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_77 = NULL;
        t = v_165(t);
        f_77 = t;
        t = (ATerm) ATinsert(CheckATermList(f_77), term_q_32);
        t = echo_0_0(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,v_10 = NULL;
  n_77 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_77);
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_77);
  v_10 = t;
  t = SSLsetAnnotations(v_10, l_77);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_77 = NULL;
  i_77 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_77 = NULL,k_77 = NULL;
        t = term_k_25;
        j_77 = t;
        t = term_p_31;
        k_77 = t;
        t = term_q_31;
        t = w_10(j_77, k_77, t);
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = fetch_1_0(s_4, t);
      }
  }
  t = i_77;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm p_77 = NULL;
  p_77 = t;
  if(match_string(t, "-k"))
    {
      t = p_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_77;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
  q_77 = t;
  t = SSL_string_to_int(q_77);
  r_77 = t;
  t = term_t_32;
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, r_77);
  t = z_10(s_77, r_77, t);
  t = q_77;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, w_4, x_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm u_77 = NULL;
  u_77 = t;
  if(match_string(t, "-S"))
    {
      t = u_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_77;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  t = term_v_32;
  v_77 = t;
  t = term_x_13;
  w_77 = t;
  t = term_w_32;
  t = z_10(v_77, w_77, t);
  t = term_x_32;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_c_33;
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
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
  x_77 = t;
  t = SSL_string_to_int(x_77);
  y_77 = t;
  t = term_v_32;
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, y_77);
  t = z_10(z_77, y_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_77);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL;
  t = term_f_33;
  a_78 = t;
  t = term_x_31;
  b_78 = t;
  t = term_g_33;
  t = z_10(a_78, b_78, t);
  t = term_h_33;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, c_5, d_5, t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_5, i_5, j_5, t);
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            t = Option_3_0(k_5, n_5, o_5, t);
          }
      }
    }
  return(t);
}
static ATerm z_10 (ATerm w_104, ATerm x_104, ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL;
  t = term_k_25;
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, w_104, x_104);
  t = lookup_table_0_1(c_78, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(w_104, x_104, d_78, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, w_104, x_104);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
      t = term_x_31;
      t = g_0(t);
      j_78 = t;
      t = term_l_32;
      k_78 = t;
      t = term_m_32;
      l_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_32, term_m_32, j_78);
      t = x_10(k_78, l_78, j_78, t);
      _fail(t);
    }
  else
    {
      ATerm o_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_78 = ATgetFirst((ATermList) t);
          i_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_78;
      t = d_0(t);
      t = term_x_31;
      t = f_0(t);
      o_78 = t;
      t = (ATerm) ATinsert(CheckATermList(i_78), o_78);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm q_78 = NULL;
  q_78 = t;
  if(match_string(t, "-o"))
    {
      t = q_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_78;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL;
  r_78 = t;
  t = term_c_29;
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, r_78);
  t = z_10(s_78, r_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_78);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_78 = NULL;
  u_78 = t;
  if(match_string(t, "-i"))
    {
      t = u_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_78;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL;
  v_78 = t;
  t = term_d_31;
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_31, v_78);
  t = z_10(w_78, v_78, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_78);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_144 (ATerm), ATerm t)
{
  static ATerm r_79 (ATerm t);
  static ATerm r_79 (ATerm t)
  {
    ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
    q_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_79 = ATgetFirst((ATermList) t);
        p_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_36 = NULL,o_36 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(q_79);
          l_36 = t;
          t = p_79;
          t = r_79(t);
          o_36 = t;
          t = (ATerm) ATinsert(CheckATermList(o_36), o_79);
          c_11 = t;
          t = SSLsetAnnotations(c_11, l_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_79;
        t = n_144(t);
      }
    return(t);
  }
  t = r_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
  y_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_78;
    }
  else
    {
      static ATerm y_5 (ATerm t);
      static ATerm y_5 (ATerm t)
      {
        t = not_null(a_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_78 = ATgetFirst((ATermList) t);
          if(((a_79 != NULL) && (a_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_78;
      t = at_end_1_0(y_5, t);
    }
  return(t);
}
static ATerm i_80 (ATerm v_79, ATerm t)
{
  ATerm w_79 = NULL;
  t = SSL_explode_term(v_79);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_79 = NULL,e_80 = NULL,f_80 = NULL;
  f_80 = t;
  if(match_cons(t, sym__2))
    {
      y_79 = ATgetArgument(t, 0);
      e_80 = ATgetArgument(t, 1);
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_6 (ATerm t);
            static ATerm e_6 (ATerm t)
            {
              t = e_80;
              return(t);
            }
            t = y_79;
            t = at_end_1_0(e_6, t);
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            t = i_80(f_80, t);
          }
      }
    }
  else
    {
      t = i_80(f_80, t);
    }
  return(t);
}
static ATerm i_10 (ATerm d_105, ATerm e_105, ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
  t = d_105;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_80 = NULL;
        t = term_k_25;
        p_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_25, d_105);
        t = w_10(p_80, d_105, t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATempty;
      }
  }
  k_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_80, e_105);
  t = conc_0_0(t);
  j_80 = t;
  t = term_k_25;
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, d_105, j_80);
  t = lookup_table_0_1(l_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(d_105, j_80, m_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, d_105, j_80);
  return(t);
}
static ATerm x_10 (ATerm v_63, ATerm w_63, ATerm u_63, ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL;
  r_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_63, w_63);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_33 = ATgetArgument(t, 0);
            ATerm a_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_63, w_63);
        t = w_10(v_63, w_63, t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = (ATerm) ATempty;
      }
  }
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_63, w_63, (ATerm) ATinsert(CheckATermList(s_80), u_63));
  t = lookup_table_0_1(v_63, t);
  v_80 = t;
  t = (ATerm) ATinsert(CheckATermList(s_80), u_63);
  t_80 = t;
  t = v_80;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(w_63, t_80, u_80, t);
  t = r_80;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL;
      t = term_x_31;
      t = n_0(t);
      g_81 = t;
      t = term_l_32;
      h_81 = t;
      t = term_m_32;
      i_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_32, term_m_32, g_81);
      t = x_10(h_81, i_81, g_81, t);
      _fail(t);
    }
  else
    {
      ATerm m_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_81 = ATgetFirst((ATermList) t);
          d_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_81 = ATgetFirst((ATermList) t);
          f_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_81;
      t = j_0(t);
      t = e_81;
      t = l_0(t);
      m_81 = t;
      t = (ATerm) ATinsert(CheckATermList(f_81), m_81);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
  o_81 = t;
  t = term_h_25;
  p_81 = t;
  t = (ATerm) ATinsert(ATempty, o_81);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, o_81));
  t = i_10(p_81, q_81, t);
  t = o_81;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  if(match_string(t, "--library"))
    {
      t = r_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = r_81;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
  s_81 = t;
  t = term_z_25;
  t_81 = t;
  t = term_x_31;
  u_81 = t;
  t = term_f_34;
  t = z_10(t_81, u_81, t);
  t = s_81;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm s2c_options_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(f_6, g_6, k_6, t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = Option_3_0(p_6, r_6, s_6, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_31;
  t = whoami_0_0(t);
  v_81 = t;
  t = term_j_34;
  x_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_34), v_81);
  y_81 = t;
  t = SSL_printnl(x_81, y_81);
  t = term_y_13;
  w_81 = t;
  t = SSL_exit(w_81);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL;
  t = term_k_25;
  z_81 = t;
  t = term_p_31;
  a_82 = t;
  t = term_q_31;
  t = w_10(z_81, a_82, t);
  return(t);
}
static ATerm r_10 (ATerm e_62, ATerm f_62, ATerm t)
{
  ATerm l_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_62, f_62);
      LocalPopChoice(p_34);
    }
  else
    {
      t = l_34;
      t = SSL_addr(e_62, f_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_82;
      t = v_150(t);
    }
  else
    {
      ATerm h_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_82 = ATgetFirst((ATermList) t);
          e_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_82;
      t = foldr_2_0(v_150, w_150, t);
      h_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_82, h_82);
      t = w_150(t);
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
  ATerm x_36 = NULL,y_36 = NULL;
  if(match_cons(t, sym__2))
    {
      x_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(x_36, y_36, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_82 = NULL,t_36 = NULL,u_36 = NULL;
  t = times_0_0(t);
  u_36 = t;
  t = SSL_explode_term(u_36);
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_36;
  t = foldr_2_0(t_6, u_6, t);
  k_82 = t;
  t = SSL_TicksToSeconds(k_82);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
  v_82 = t;
  if(match_cons(t, sym__2))
    {
      w_82 = ATgetArgument(t, 0);
      x_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_82;
        if((w_82 != t))
          {
            _fail(t);
          }
        t = v_82;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = (ATerm) ATmakeAppl(sym__2, w_82, x_82);
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_82, x_82);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              t = SSL_gtr(w_82, x_82);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_82, x_82);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_161 (ATerm), ATerm t)
{
  ATerm b_83 = NULL;
  b_83 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL;
        t = term_k_25;
        e_83 = t;
        t = term_v_32;
        f_83 = t;
        t = term_z_34;
        t = w_10(e_83, f_83, t);
        d_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_83, term_y_13);
        t = geq_0_0(t);
        t = b_83;
        t = f_161(t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = b_83;
      }
  }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,k_83 = NULL,l_83 = NULL;
  t = run_time_0_0(t);
  h_83 = t;
  t = term_x_31;
  t = whoami_0_0(t);
  i_83 = t;
  t = term_j_34;
  k_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_35), h_83), term_d_35), i_83);
  l_83 = t;
  t = SSL_printnl(k_83, l_83);
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_35), h_83), term_d_35), i_83));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_13;
  m_83 = t;
  t = SSL_exit(m_83);
  return(t);
}
static ATerm a_11 (ATerm k_68, ATerm l_68, ATerm m_68, ATerm t)
{
  ATerm n_83 = NULL;
  t = SSL_hashtable_put(m_68, k_68, l_68);
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_83);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_65, ATerm t)
{
  ATerm w_83 = NULL;
  t = table_hashtable_0_0(t);
  w_83 = t;
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL;
        t = w_83;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_11(h_65, j_37, t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm o_37 = NULL;
          t = h_65;
          t = table_create_0_0(t);
          t = w_83;
          if(match_cons(t, sym_Hashtable_1))
            {
              o_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_11(h_65, o_37, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm z_83 = NULL;
  t = SSL_hashtable_create(s_68, t_68);
  z_83 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_83);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,e_84 = NULL,f_84 = NULL;
  a_84 = t;
  t = term_j_35;
  e_84 = t;
  t = term_k_35;
  f_84 = t;
  t = a_84;
  t = new_hashtable_0_2(e_84, f_84, t);
  b_84 = t;
  t = a_84;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(a_84, b_84, c_84, t);
  t = a_84;
  return(t);
}
static ATerm t_10 (ATerm p_68, ATerm q_68, ATerm t)
{
  ATerm g_84 = NULL;
  t = SSL_hashtable_remove(q_68, p_68);
  g_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_84);
  return(t);
}
static ATerm u_10 (ATerm u_68, ATerm t)
{
  ATerm h_84 = NULL;
  t = SSL_hashtable_destroy(u_68);
  h_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_84);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_84 = NULL;
  t = SSL_table_hashtable();
  i_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_84);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
  j_84 = t;
  t = table_hashtable_0_0(t);
  k_84 = t;
  t = lookup_table_0_1(j_84, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(m_84, t);
  t = k_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_10(j_84, l_84, t);
  t = j_84;
  return(t);
}
ATerm fetch_1_0 (ATerm g_144 (ATerm), ATerm t)
{
  static ATerm j_85 (ATerm t);
  static ATerm j_85 (ATerm t)
  {
    ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
    g_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_85 = ATgetFirst((ATermList) t);
        i_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_35 = t;
      int m_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_37 = NULL,w_37 = NULL,e_11 = NULL;
          t = SSLgetAnnotations(g_85);
          t_37 = t;
          t = h_85;
          t = g_144(t);
          w_37 = t;
          t = (ATerm) ATinsert(CheckATermList(i_85), w_37);
          e_11 = t;
          t = SSLsetAnnotations(e_11, t_37);
          LocalPopChoice(m_35);
        }
      else
        {
          t = l_35;
          {
            ATerm e_38 = NULL,h_38 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(g_85);
            e_38 = t;
            t = i_85;
            t = j_85(t);
            h_38 = t;
            t = (ATerm) ATinsert(CheckATermList(h_38), h_85);
            i_11 = t;
            t = SSLsetAnnotations(i_11, e_38);
          }
        }
    }
    return(t);
  }
  t = j_85(t);
  return(t);
}
static ATerm b_11 (ATerm n_68, ATerm o_68, ATerm t)
{
  t = SSL_hashtable_get(o_68, n_68);
  return(t);
}
static ATerm w_10 (ATerm o_65, ATerm p_65, ATerm t)
{
  ATerm m_85 = NULL;
  t = lookup_table_0_1(o_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(p_65, m_85, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL;
  t = term_n_35;
  o_85 = t;
  t = term_x_31;
  p_85 = t;
  t = term_o_35;
  t = z_10(o_85, p_85, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_r_35;
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
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
  t = term_n_35;
  s_85 = t;
  t = term_x_31;
  t_85 = t;
  t = term_o_35;
  t = z_10(s_85, t_85, t);
  t = term_s_35;
  q_85 = t;
  t = term_x_31;
  r_85 = t;
  t = term_t_35;
  t = z_10(q_85, r_85, t);
  t = term_u_35;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_6, c_7, d_7, t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = x_35;
      t = Option_3_0(f_7, g_7, h_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,r_11 = NULL;
  z_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_85 = ATgetFirst((ATermList) t);
      w_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_85);
  u_85 = t;
  t = v_85;
  t = i_105(t);
  x_85 = t;
  t = w_85;
  t = j_105(t);
  y_85 = t;
  t = (ATerm) ATinsert(CheckATermList(y_85), x_85);
  r_11 = t;
  t = SSLsetAnnotations(r_11, u_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_165 (ATerm), ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,j_86 = NULL,k_86 = NULL,t_11 = NULL;
  e_86 = t;
  {
    ATerm b_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_36;
        t = p_165(t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = b_36;
      }
  }
  t = e_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_86 = ATgetFirst((ATermList) t);
      h_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_86);
  f_86 = t;
  t = term_p_31;
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_31, g_86);
  t = z_10(k_86, g_86, t);
  t = h_86;
  {
    static ATerm u_86 (ATerm t);
    static ATerm u_86 (ATerm t)
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_86 = NULL;
              n_86 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_86;
              LocalPopChoice(m_36);
            }
          else
            {
              t = k_36;
              t = p_165(t);
              t = Cons_2_0(_id, u_86, t);
            }
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          {
            ATerm q_86 = NULL,r_86 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_86 = ATgetFirst((ATermList) t);
                r_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_86), (ATerm) ATmakeAppl(sym_Undefined_1, q_86));
          }
        }
      return(t);
    }
    t = u_86(t);
  }
  j_86 = t;
  t = (ATerm) ATinsert(CheckATermList(j_86), (ATerm) ATmakeAppl(sym_Program_1, g_86));
  t_11 = t;
  t = SSLsetAnnotations(t_11, f_86);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm y_87 = NULL;
  y_87 = t;
  if(match_string(t, "--help"))
    {
      t = y_87;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_87;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_87;
        }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL;
  t = term_n_36;
  z_87 = t;
  t = term_x_31;
  a_88 = t;
  t = term_p_36;
  t = z_10(z_87, a_88, t);
  t = term_q_36;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_r_36;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_165 (ATerm), ATerm n_165 (ATerm), ATerm o_165 (ATerm), ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,p_87 = NULL,q_87 = NULL;
  b_87 = t;
  t = term_l_32;
  c_87 = t;
  t = term_s_36;
  t = lookup_table_0_1(c_87, t);
  q_87 = t;
  t = term_m_32;
  d_87 = t;
  t = (ATerm) ATempty;
  e_87 = t;
  t = q_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(d_87, e_87, p_87, t);
  t = b_87;
  {
    static ATerm i_7 (ATerm t);
    static ATerm i_7 (ATerm t)
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_165(t);
          LocalPopChoice(w_36);
        }
      else
        {
          t = v_36;
          {
            ATerm z_36 = t;
            int a_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_7, m_7, n_7, t);
                LocalPopChoice(a_37);
              }
            else
              {
                t = z_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
  }
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_88 = NULL;
        q_88 = t;
        {
          ATerm d_37 = t;
          int e_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_38 = NULL;
              t = q_88;
              {
                ATerm f_37 = t;
                int g_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_38 = NULL,q_38 = NULL;
                    t = term_k_25;
                    p_38 = t;
                    t = term_n_36;
                    q_38 = t;
                    t = term_h_37;
                    t = w_10(p_38, q_38, t);
                    LocalPopChoice(g_37);
                  }
                else
                  {
                    t = f_37;
                    t = fetch_1_0(o_7, t);
                  }
              }
              t = q_88;
              t = n_165(t);
              t = term_x_13;
              o_38 = t;
              t = SSL_exit(o_38);
              LocalPopChoice(e_37);
            }
          else
            {
              t = d_37;
              {
                ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                t = term_k_25;
                w_38 = t;
                t = term_n_35;
                x_38 = t;
                t = term_i_37;
                t = w_10(w_38, x_38, t);
                t = q_88;
                t = o_165(t);
                t = term_x_13;
                v_38 = t;
                t = SSL_exit(v_38);
              }
            }
        }
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_88 = NULL,s_88 = NULL,u_88 = NULL;
              static ATerm p_7 (ATerm t);
              static ATerm p_7 (ATerm t)
              {
                ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,n_12 = NULL;
                x_88 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_88);
                v_88 = t;
                t = w_88;
                if(((z_86 != NULL) && (z_86 != t)))
                  _fail(t);
                else
                  z_86 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_88);
                n_12 = t;
                t = SSLsetAnnotations(n_12, v_88);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_j_34;
              s_88 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_86)), term_m_37);
              u_88 = t;
              t = SSL_printnl(s_88, u_88);
              t = (ATerm) ATmakeAppl(sym__2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_86)), term_m_37));
              t = n_165(t);
              t = term_y_13;
              r_88 = t;
              t = SSL_exit(r_88);
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
            }
        }
      }
  }
  a_87 = t;
  t = term_l_32;
  t = table_destroy_0_0(t);
  t = a_87;
  return(t);
}
ATerm option_wrap_5_0 (ATerm b_163 (ATerm), ATerm c_163 (ATerm), ATerm d_163 (ATerm), ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
  t = parse_options_3_0(b_163, c_163, d_163, t);
  c_89 = t;
  t = term_n_37;
  t = table_create_0_0(t);
  t = term_n_37;
  d_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_37, term_p_37, c_89);
  t = lookup_table_0_1(d_89, t);
  g_89 = t;
  t = term_p_37;
  e_89 = t;
  t = g_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(e_89, c_89, f_89, t);
  t = c_89;
  t = e_163(t);
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_163(t);
        t = report_success_0_0(t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s2c_options_0_0(t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = s_37;
      {
        ATerm v_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(x_37);
          }
        else
          {
            t = v_37;
            {
              ATerm y_37 = t;
              int z_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(z_37);
                }
              else
                {
                  t = y_37;
                  {
                    ATerm a_38 = t;
                    int b_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, b_8, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(d_38);
                            }
                          else
                            {
                              t = c_38;
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
  ATerm i_89 = NULL,j_89 = NULL;
  t = term_j_29;
  i_89 = t;
  t = term_x_31;
  j_89 = t;
  t = term_f_38;
  t = z_10(i_89, j_89, t);
  t = term_g_38;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = output_1_0(compile_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(r_7, default_system_usage_0_0, default_system_about_0_0, _id, u_7, t);
  return(t);
}
