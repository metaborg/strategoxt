#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Match_2;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
Symbol sym_Include_1;
Symbol sym_InitCachedTerms_0;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_PpIf_4;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_FunDef_3;
Symbol sym_TypeQualifiers_1;
Symbol sym_OldFun_2;
Symbol sym_TranslationUnit_1;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Break_0;
Symbol sym_Return_1;
Symbol sym_Exit_1;
Symbol sym_While_2;
Symbol sym_DoWhile_2;
Symbol sym_For_4;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Switch_2;
Symbol sym_Stat_1;
Symbol sym_Compound_2;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Default_1;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_DeclSpec_5;
Symbol sym_DQualifiers_3;
Symbol sym_TypeSpec_3;
Symbol sym_IdDeclInit_2;
Symbol sym_DeclInit_2;
Symbol sym_ArrayInit_1;
Symbol sym_ArrayInitIncomplete_1;
Symbol sym_AssignInit_1;
Symbol sym_Declaration_2;
Symbol sym_Declaration2_2;
Symbol sym_Const_0;
Symbol sym_Volatile_0;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Short_0;
Symbol sym_Long_0;
Symbol sym_Float_0;
Symbol sym_Double_0;
Symbol sym_Signed_0;
Symbol sym_Unsigned_0;
Symbol sym_Void_0;
Symbol sym_Typedef_0;
Symbol sym_Extern_0;
Symbol sym_Static_0;
Symbol sym_Auto_0;
Symbol sym_Register_0;
Symbol sym_Comma_2;
Symbol sym_EmptyExp_0;
Symbol sym_AssignEq_0;
Symbol sym_AssignMul_0;
Symbol sym_AssignDiv_0;
Symbol sym_AssignMod_0;
Symbol sym_AssignPlus_0;
Symbol sym_AssignMin_0;
Symbol sym_AssignSL_0;
Symbol sym_AssignSR_0;
Symbol sym_AssignAnd_0;
Symbol sym_AssignExp_0;
Symbol sym_AssignOr_0;
Symbol sym_Assign_3;
Symbol sym_IfExp_3;
Symbol sym_LOr_2;
Symbol sym_LAnd_2;
Symbol sym_IncOr_2;
Symbol sym_ExOr_2;
Symbol sym_And_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_Lt_2;
Symbol sym_Gt_2;
Symbol sym_Le_2;
Symbol sym_Ge_2;
Symbol sym_ShiftLeft_2;
Symbol sym_ShiftRight_2;
Symbol sym_Add_2;
Symbol sym_Subt_2;
Symbol sym_Mul_2;
Symbol sym_Div_2;
Symbol sym_Mod_2;
Symbol sym_TypeCast_2;
Symbol sym_PreIncr_1;
Symbol sym_PreDecr_1;
Symbol sym_SizeofExp_1;
Symbol sym_SizeofType_1;
Symbol sym_Address_1;
Symbol sym_Deref_1;
Symbol sym_Positive_1;
Symbol sym_Negative_1;
Symbol sym_Tilde_1;
Symbol sym_Negation_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
Symbol sym_StringLit_1;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_BitFieldSize_2;
Symbol sym_MemDecl_2;
Symbol sym_MemDecl_2;
Symbol sym_Union_2;
Symbol sym_UnionId_1;
Symbol sym_Struct_2;
Symbol sym_StructId_1;
Symbol sym_EnumVal_1;
Symbol sym_Enumerator_2;
Symbol sym_Enum_2;
Symbol sym_EnumId_1;
Symbol sym_TypeName_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDeclTD_2;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket_1;
Symbol sym_FunType_2;
Symbol sym_ArrayDecl_2;
Symbol sym_ParamListVarArgs_1;
Symbol sym_ParamList_1;
Symbol sym_Pointer_2;
Symbol sym_PointerOf_1;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_InitCachedTerms_0 = ATmakeSymbol("InitCachedTerms", 0, ATfalse);
  ATprotectSymbol(sym_InitCachedTerms_0);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
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
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
  sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
  ATprotectSymbol(sym_PpIf_4);
  sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction1_3);
  sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction2_3);
  sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator1_3);
  sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator2_3);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
  ATprotectSymbol(sym_FunDecl_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_TypeQualifiers_1 = ATmakeSymbol("TypeQualifiers", 1, ATfalse);
  ATprotectSymbol(sym_TypeQualifiers_1);
  sym_OldFun_2 = ATmakeSymbol("OldFun", 2, ATfalse);
  ATprotectSymbol(sym_OldFun_2);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
  ATprotectSymbol(sym_Goto_1);
  sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
  ATprotectSymbol(sym_Continue_0);
  sym_Break_0 = ATmakeSymbol("Break", 0, ATfalse);
  ATprotectSymbol(sym_Break_0);
  sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
  ATprotectSymbol(sym_Return_1);
  sym_Exit_1 = ATmakeSymbol("Exit", 1, ATfalse);
  ATprotectSymbol(sym_Exit_1);
  sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
  ATprotectSymbol(sym_While_2);
  sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
  ATprotectSymbol(sym_DoWhile_2);
  sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
  ATprotectSymbol(sym_For_4);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
  ATprotectSymbol(sym_Switch_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
  ATprotectSymbol(sym_DQualifiers_3);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_IdDeclInit_2 = ATmakeSymbol("IdDeclInit", 2, ATfalse);
  ATprotectSymbol(sym_IdDeclInit_2);
  sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
  ATprotectSymbol(sym_DeclInit_2);
  sym_ArrayInit_1 = ATmakeSymbol("ArrayInit", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInit_1);
  sym_ArrayInitIncomplete_1 = ATmakeSymbol("ArrayInitIncomplete", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInitIncomplete_1);
  sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
  ATprotectSymbol(sym_AssignInit_1);
  sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
  ATprotectSymbol(sym_Declaration_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
  ATprotectSymbol(sym_Const_0);
  sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
  ATprotectSymbol(sym_Volatile_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
  ATprotectSymbol(sym_Char_0);
  sym_Short_0 = ATmakeSymbol("Short", 0, ATfalse);
  ATprotectSymbol(sym_Short_0);
  sym_Long_0 = ATmakeSymbol("Long", 0, ATfalse);
  ATprotectSymbol(sym_Long_0);
  sym_Float_0 = ATmakeSymbol("Float", 0, ATfalse);
  ATprotectSymbol(sym_Float_0);
  sym_Double_0 = ATmakeSymbol("Double", 0, ATfalse);
  ATprotectSymbol(sym_Double_0);
  sym_Signed_0 = ATmakeSymbol("Signed", 0, ATfalse);
  ATprotectSymbol(sym_Signed_0);
  sym_Unsigned_0 = ATmakeSymbol("Unsigned", 0, ATfalse);
  ATprotectSymbol(sym_Unsigned_0);
  sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
  ATprotectSymbol(sym_Void_0);
  sym_Typedef_0 = ATmakeSymbol("Typedef", 0, ATfalse);
  ATprotectSymbol(sym_Typedef_0);
  sym_Extern_0 = ATmakeSymbol("Extern", 0, ATfalse);
  ATprotectSymbol(sym_Extern_0);
  sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
  ATprotectSymbol(sym_Static_0);
  sym_Auto_0 = ATmakeSymbol("Auto", 0, ATfalse);
  ATprotectSymbol(sym_Auto_0);
  sym_Register_0 = ATmakeSymbol("Register", 0, ATfalse);
  ATprotectSymbol(sym_Register_0);
  sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
  ATprotectSymbol(sym_Comma_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
  sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
  ATprotectSymbol(sym_AssignEq_0);
  sym_AssignMul_0 = ATmakeSymbol("AssignMul", 0, ATfalse);
  ATprotectSymbol(sym_AssignMul_0);
  sym_AssignDiv_0 = ATmakeSymbol("AssignDiv", 0, ATfalse);
  ATprotectSymbol(sym_AssignDiv_0);
  sym_AssignMod_0 = ATmakeSymbol("AssignMod", 0, ATfalse);
  ATprotectSymbol(sym_AssignMod_0);
  sym_AssignPlus_0 = ATmakeSymbol("AssignPlus", 0, ATfalse);
  ATprotectSymbol(sym_AssignPlus_0);
  sym_AssignMin_0 = ATmakeSymbol("AssignMin", 0, ATfalse);
  ATprotectSymbol(sym_AssignMin_0);
  sym_AssignSL_0 = ATmakeSymbol("AssignSL", 0, ATfalse);
  ATprotectSymbol(sym_AssignSL_0);
  sym_AssignSR_0 = ATmakeSymbol("AssignSR", 0, ATfalse);
  ATprotectSymbol(sym_AssignSR_0);
  sym_AssignAnd_0 = ATmakeSymbol("AssignAnd", 0, ATfalse);
  ATprotectSymbol(sym_AssignAnd_0);
  sym_AssignExp_0 = ATmakeSymbol("AssignExp", 0, ATfalse);
  ATprotectSymbol(sym_AssignExp_0);
  sym_AssignOr_0 = ATmakeSymbol("AssignOr", 0, ATfalse);
  ATprotectSymbol(sym_AssignOr_0);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
  ATprotectSymbol(sym_IncOr_2);
  sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
  ATprotectSymbol(sym_ExOr_2);
  sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
  ATprotectSymbol(sym_And_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
  ATprotectSymbol(sym_Lt_2);
  sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
  ATprotectSymbol(sym_Gt_2);
  sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
  ATprotectSymbol(sym_Le_2);
  sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
  ATprotectSymbol(sym_Ge_2);
  sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
  ATprotectSymbol(sym_ShiftLeft_2);
  sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
  ATprotectSymbol(sym_ShiftRight_2);
  sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
  ATprotectSymbol(sym_Add_2);
  sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
  ATprotectSymbol(sym_Subt_2);
  sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
  ATprotectSymbol(sym_Mul_2);
  sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
  ATprotectSymbol(sym_Div_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_PreIncr_1 = ATmakeSymbol("PreIncr", 1, ATfalse);
  ATprotectSymbol(sym_PreIncr_1);
  sym_PreDecr_1 = ATmakeSymbol("PreDecr", 1, ATfalse);
  ATprotectSymbol(sym_PreDecr_1);
  sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
  ATprotectSymbol(sym_SizeofExp_1);
  sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
  ATprotectSymbol(sym_SizeofType_1);
  sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
  ATprotectSymbol(sym_Address_1);
  sym_Deref_1 = ATmakeSymbol("Deref", 1, ATfalse);
  ATprotectSymbol(sym_Deref_1);
  sym_Positive_1 = ATmakeSymbol("Positive", 1, ATfalse);
  ATprotectSymbol(sym_Positive_1);
  sym_Negative_1 = ATmakeSymbol("Negative", 1, ATfalse);
  ATprotectSymbol(sym_Negative_1);
  sym_Tilde_1 = ATmakeSymbol("Tilde", 1, ATfalse);
  ATprotectSymbol(sym_Tilde_1);
  sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
  ATprotectSymbol(sym_Negation_1);
  sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
  ATprotectSymbol(sym_ArrayIndex_2);
  sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
  ATprotectSymbol(sym_FunCall_2);
  sym_Field_2 = ATmakeSymbol("Field", 2, ATfalse);
  ATprotectSymbol(sym_Field_2);
  sym_DerefMember_2 = ATmakeSymbol("DerefMember", 2, ATfalse);
  ATprotectSymbol(sym_DerefMember_2);
  sym_PostIncr_1 = ATmakeSymbol("PostIncr", 1, ATfalse);
  ATprotectSymbol(sym_PostIncr_1);
  sym_PostDecr_1 = ATmakeSymbol("PostDecr", 1, ATfalse);
  ATprotectSymbol(sym_PostDecr_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
  sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
  ATprotectSymbol(sym_BitFieldSize_2);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
  ATprotectSymbol(sym_Union_2);
  sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
  ATprotectSymbol(sym_UnionId_1);
  sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
  ATprotectSymbol(sym_Struct_2);
  sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
  ATprotectSymbol(sym_StructId_1);
  sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
  ATprotectSymbol(sym_EnumVal_1);
  sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
  ATprotectSymbol(sym_Enumerator_2);
  sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
  ATprotectSymbol(sym_Enum_2);
  sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
  ATprotectSymbol(sym_EnumId_1);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDeclTD_2 = ATmakeSymbol("ParamDeclTD", 2, ATfalse);
  ATprotectSymbol(sym_ParamDeclTD_2);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
  ATprotectSymbol(sym_ArrayDecl_2);
  sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
  ATprotectSymbol(sym_ParamListVarArgs_1);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
  ATprotectSymbol(sym_Pointer_2);
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_p_37;
ATerm term_h_37;
ATerm term_z_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_o_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_u_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_g_32;
ATerm term_c_32;
ATerm term_y_31;
ATerm term_n_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_k_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_o_19;
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
ATerm term_p_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
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
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_g_13;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_k_10;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_l_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Id_1, term_a_8);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_8, (ATerm) ATempty);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Id_1, term_k_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_8, (ATerm) ATempty);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_8, term_q_8);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Id_1, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Id_1, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Id_1, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Id_1, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Id_1, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Id_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Id_1, term_y_14);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Id_1, term_m_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, term_w_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Id_1, term_m_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Id_1, term_r_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_v_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Id_1, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Id_1, term_e_17);
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
  term_l_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_k_17, term_q_8);
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
  term_t_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_s_17, term_q_8);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Id_1, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_a_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_e_18, (ATerm) ATempty);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_g_18, term_q_8);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Id_1, term_d_14);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Id_1, term_p_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Id_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Id_1, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_z_18, (ATerm) ATempty);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_19, term_q_8);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Id_1, term_c_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Id_1, term_o_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Id_1, term_u_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_z_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_z_16);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_1, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_h_20, (ATerm) ATempty);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Equal_2, term_i_20, term_t_14);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_1, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATempty);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, term_z_16);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_o_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Id_1, term_u_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_f_21, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_g_21, term_t_14);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Id_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_m_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Id_1, term_q_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_k_18);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Return_1, term_z_16);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Id_1, term_b_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_z_16, term_q_8);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, term_n_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Id_1, term_b_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Id_1, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_8, (ATerm) ATempty);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_p_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Id_1, term_s_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_c_27, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_j_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_27, (ATerm) ATempty);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Some_1, term_q_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_l_8, term_r_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Op_2, term_u_28, (ATerm) ATempty);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_p_24);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_c_16);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_16);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_p_24);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_p_24);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_e_36);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, term_t_36, term_p_24);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__3, term_d_36, term_e_36, (ATerm) ATempty);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm h_116 (ATerm), ATerm i_116 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_97 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm a_95 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm e_80 (ATerm));
ATerm Real_1 (ATerm, ATerm w_2 (ATerm));
ATerm Str_1 (ATerm, ATerm v_2 (ATerm));
ATerm Int_1 (ATerm, ATerm u_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm s_2 (ATerm), ATerm t_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_2 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm w_0 (ATerm), ATerm a_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm g_109 (ATerm));
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm d_84 (ATerm));
ATerm FunCall_2 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm z_95 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_95 (ATerm));
ATerm TranslateStrat_0 (ATerm);
ATerm PlainBody_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm TracedBody_0 (ATerm);
ATerm TraceAllFuns_0 (ATerm);
ATerm TraceFun_0 (ATerm);
ATerm TranslateDef_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm c_112 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_121 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm q_0 (ATerm));
ATerm escape_1 (ATerm, ATerm y_111 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm));
ATerm length_0 (ATerm);
ATerm Arity_0 (ATerm);
ATerm DeclareConstructor_0 (ATerm);
ATerm TranslateSig_0 (ATerm);
ATerm TranslateType_0 (ATerm);
ATerm TranslateVarDec_0 (ATerm);
ATerm SDefToDeclaration_0 (ATerm);
ATerm TranslateSpec_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm h_121 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm g_121 (ATerm));
ATerm scope_2 (ATerm, ATerm i_121 (ATerm), ATerm j_121 (ATerm));
ATerm assert_1 (ATerm, ATerm k_121 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_102 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_115 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_113 (ATerm));
ATerm debug_1 (ATerm, ATerm r_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_110 (ATerm), ATerm g_110 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_108 (ATerm), ATerm r_108 (ATerm));
ATerm crush_2 (ATerm, ATerm o_107 (ATerm), ATerm p_107 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_114 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_113 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_117 (ATerm));
ATerm map_1 (ATerm, ATerm c_102 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_117 (ATerm));
ATerm Program_1 (ATerm, ATerm t_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_112 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_116 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_94 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_117 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_117 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_117 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_114 (ATerm), ATerm j_114 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,j_5 = NULL;
  u_4 = t;
  t_4 :
  if(match_cons(u_4, sym__2))
    {
      v_4 = ATgetArgument(u_4, 0);
      j_5 = ATgetArgument(u_4, 1);
      {
        ATerm w_5 = NULL;
        ATerm x_5 = NULL,c_6 = NULL;
        ATerm y_5 = NULL;
        t = not_null(v_4);
        {
          ATerm f_6 = t;
          int i_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(i_6);
            }
          else
            {
              t = f_6;
              t = (ATerm) ATempty;
            }
          {
            y_5 = t;
            if(((x_5 != NULL) && (x_5 != y_5)))
              _fail(y_5);
            else
              x_5 = y_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(j_5));
          {
            t = conc_0(t);
            {
              c_6 = t;
              if(((w_5 != NULL) && (w_5 != c_6)))
                _fail(c_6);
              else
                w_5 = c_6;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_6, not_null(v_4), not_null(w_5));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm h_116 (ATerm), ATerm i_116 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_l_6;
    return(t);
  }
  t = Option_3(t, h_116, i_116, b_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm p_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_0 (ATerm t)
      {
        ATerm m_6 = NULL;
        m_6 = t;
        g_6 :
        if(!(match_string(m_6, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        t = term_w_6;
        {
          ATerm t_0 (ATerm t)
          {
            t = term_x_6;
            return(t);
          }
          t = debug_1(t, t_0);
          {
            ATerm y_6;
            y_6 = t;
            {
              t = term_g_7;
              {
                ATerm u_0 (ATerm t)
                {
                  t = term_h_7;
                  return(t);
                }
                t = assert_1(t, u_0);
              }
            }
            t = y_6;
          }
        }
        return(t);
      }
      t = Option_2(t, f_0, s_0);
      LocalPopChoice(v_6);
    }
  else
    {
      t = p_6;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              ATerm n_6 = NULL;
              n_6 = t;
              h_6 :
              if(!(match_string(n_6, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              ATerm o_6 = NULL;
              o_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), term_o_7);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_p_7;
                    return(t);
                  }
                  t = assert_1(t, z_0);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(o_6));
              }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              t = term_q_7;
              return(t);
            }
            t = ArgOption_3(t, v_0, x_0, y_0);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm q_6 = NULL;
                q_6 = t;
                j_6 :
                if(!(match_string(q_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                ATerm t_6 = NULL;
                ATerm w_7;
                w_7 = t;
                {
                  ATerm r_6 = NULL;
                  ATerm s_6 = NULL;
                  s_6 = t;
                  if(((r_6 != NULL) && (r_6 != s_6)))
                    _fail(s_6);
                  else
                    r_6 = s_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, not_null(r_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = w_7;
                {
                  ATerm u_6 = NULL;
                  u_6 = t;
                  if(((t_6 != NULL) && (t_6 != u_6)))
                    _fail(u_6);
                  else
                    t_6 = u_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(t_6));
                }
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                t = term_y_7;
                return(t);
              }
              t = ArgOption_3(t, b_1, c_1, d_1);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym__3))
    {
      b_7 = ATgetArgument(a_7, 0);
      c_7 = ATgetArgument(a_7, 1);
      d_7 = ATgetArgument(a_7, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_7))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_7)), term_z_7, not_null(d_7))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm k_7 = NULL;
  ATerm m_7 = NULL;
  k_7 = t;
  {
    ATerm n_7 = NULL;
    t = not_null(k_7);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            n_7 = t;
            if(((m_7 != NULL) && (m_7 != n_7)))
              _fail(n_7);
            else
              m_7 = n_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_j_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_l_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_j_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_7)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym__3))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      v_7 = ATgetArgument(s_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_7)), term_q_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm e_8 = NULL,g_8 = NULL,i_8 = NULL;
    ATerm t_8;
    t_8 = t;
    {
      ATerm f_8 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        f_8 = t;
        if(((e_8 != NULL) && (e_8 != f_8)))
          _fail(f_8);
        else
          e_8 = f_8;
      }
    }
    t = t_8;
    {
      ATerm h_8 = NULL;
      t = InitTermIds_0(t);
      {
        h_8 = t;
        if(((g_8 != NULL) && (g_8 != h_8)))
          _fail(h_8);
        else
          g_8 = h_8;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), (ATerm) ATinsert(ATempty, not_null(g_8)));
        {
          t = conc_0(t);
          {
            i_8 = t;
            if(((d_8 != NULL) && (d_8 != i_8)))
              _fail(i_8);
            else
              d_8 = i_8;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(d_8));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm u_8 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_97(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = u_8;
        t = _one(t, m_8);
      }
    return(t);
  }
  t = m_8(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(y_9)), not_null(s_9));
    return(t);
  }
  ATerm y_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(y_9), not_null(z_9));
    return(t);
  }
  ATerm z_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(z_9));
    t = conc_0(t);
    return(t);
  }
  ATerm a_11 (ATerm t)
  {
    ATerm n_10 = NULL;
    ATerm o_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(b_10));
    {
      t = conc_0(t);
      {
        o_10 = t;
        if(((n_10 != NULL) && (n_10 != o_10)))
          _fail(o_10);
        else
          n_10 = o_10;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(n_10), not_null(c_10));
    return(t);
  }
  ATerm b_11 (ATerm t)
  {
    ATerm t_10 = NULL,v_10 = NULL;
    ATerm f_10;
    f_10 = t;
    {
      ATerm u_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(b_10));
      {
        t = conc_0(t);
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
      }
    }
    t = f_10;
    {
      ATerm w_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(d_10));
      {
        t = conc_0(t);
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(t_10), not_null(v_10));
    }
    return(t);
  }
  x_9 = t;
  v_8 :
  if(match_cons(x_9, sym_IfElse_3))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      s_9 = ATgetArgument(x_9, 2);
      w_8 :
      if(match_cons(s_9, sym_Compound_2))
        {
          t_9 = ATgetArgument(s_9, 0);
          u_9 = ATgetArgument(s_9, 1);
          x_8 :
          if(((ATgetType(u_9) == AT_LIST) && ATisEmpty(u_9)))
            {
              y_8 :
              if(((ATgetType(t_9) == AT_LIST) && ATisEmpty(t_9)))
                {
                  z_8 :
                  if(match_cons(z_9, sym_Compound_2))
                    {
                      a_10 = ATgetArgument(z_9, 0);
                      d_10 = ATgetArgument(z_9, 1);
                      a_9 :
                      if(((ATgetType(d_10) == AT_LIST) && ATisEmpty(d_10)))
                        {
                          b_9 :
                          if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                            {
                              {
                                ATerm g_10 = t;
                                int h_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_10(t);
                                    LocalPopChoice(h_10);
                                  }
                                else
                                  {
                                    t = g_10;
                                    t = y_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = y_10(t);
                            }
                        }
                      else
                        {
                          c_9 :
                          t = y_10(t);
                        }
                    }
                  else
                    {
                      t = y_10(t);
                    }
                }
              else
                {
                  d_9 :
                  if(match_cons(z_9, sym_Compound_2))
                    {
                      a_10 = ATgetArgument(z_9, 0);
                      d_10 = ATgetArgument(z_9, 1);
                      e_9 :
                      if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                        {
                          f_9 :
                          if(((ATgetType(d_10) == AT_LIST) && ATisEmpty(d_10)))
                            {
                              t = x_10(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              g_9 :
              h_9 :
              if(match_cons(z_9, sym_Compound_2))
                {
                  a_10 = ATgetArgument(z_9, 0);
                  d_10 = ATgetArgument(z_9, 1);
                  i_9 :
                  if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                    {
                      j_9 :
                      if(((ATgetType(d_10) == AT_LIST) && ATisEmpty(d_10)))
                        {
                          t = x_10(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          k_9 :
          if(match_cons(z_9, sym_Compound_2))
            {
              a_10 = ATgetArgument(z_9, 0);
              d_10 = ATgetArgument(z_9, 1);
              l_9 :
              if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                {
                  m_9 :
                  if(((ATgetType(d_10) == AT_LIST) && ATisEmpty(d_10)))
                    {
                      t = x_10(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATgetType(x_9) == AT_LIST) && !(ATisEmpty(x_9))))
        {
          y_9 = ATgetFirst((ATermList) x_9);
          z_9 = (ATerm) ATgetNext((ATermList) x_9);
          n_9 :
          if(match_cons(y_9, sym_Compound_2))
            {
              v_9 = ATgetArgument(y_9, 0);
              w_9 = ATgetArgument(y_9, 1);
              o_9 :
              if(((ATgetType(v_9) == AT_LIST) && ATisEmpty(v_9)))
                {
                  t = z_10(t);
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(x_9, sym_Compound_2))
            {
              y_9 = ATgetArgument(x_9, 0);
              z_9 = ATgetArgument(x_9, 1);
              p_9 :
              if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
                {
                  a_10 = ATgetFirst((ATermList) z_9);
                  d_10 = (ATerm) ATgetNext((ATermList) z_9);
                  q_9 :
                  if(match_cons(a_10, sym_Compound_2))
                    {
                      b_10 = ATgetArgument(a_10, 0);
                      c_10 = ATgetArgument(a_10, 1);
                      r_9 :
                      if(((ATgetType(d_10) == AT_LIST) && ATisEmpty(d_10)))
                        {
                          {
                            ATerm i_10 = t;
                            int j_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_11(t);
                                LocalPopChoice(j_10);
                              }
                            else
                              {
                                t = i_10;
                                t = b_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = b_11(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm a_95 (ATerm))
{
  ATerm f_11 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = a_95(t);
      t = f_11(t);
      return(t);
    }
    t = try_1(t, e_1);
    return(t);
  }
  t = f_11(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
  n_11 = t;
  {
    ATerm s_11 = NULL;
    ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
    t = not_null(n_11);
    {
      s_11 = t;
      {
        t = SSL_explode_term(not_null(s_11));
        {
          u_11 = t;
          j_11 :
          if(match_cons(u_11, sym__2))
            {
              v_11 = ATgetArgument(u_11, 0);
              w_11 = ATgetArgument(u_11, 1);
              k_11 :
              if(match_string(v_11, ""))
                {
                  l_11 :
                  if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
                    {
                      x_11 = ATgetFirst((ATermList) w_11);
                      y_11 = (ATerm) ATgetNext((ATermList) w_11);
                      m_11 :
                      if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
                        {
                          z_11 = ATgetFirst((ATermList) y_11);
                          a_12 = (ATerm) ATgetNext((ATermList) y_11);
                          {
                            if(((p_11 != NULL) && (p_11 != x_11)))
                              _fail(x_11);
                            else
                              p_11 = x_11;
                            {
                              if(((r_11 != NULL) && (r_11 != z_11)))
                                _fail(z_11);
                              else
                                r_11 = z_11;
                              if(((q_11 != NULL) && (q_11 != a_12)))
                                _fail(a_12);
                              else
                                q_11 = a_12;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(r_11);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm i_12 = NULL;
  ATerm k_12 = NULL;
  i_12 = t;
  {
    ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm f_1 (ATerm t)
      {
        t = term_k_10;
        return(t);
      }
      t = rewrite_1(t, f_1);
      {
        l_12 = t;
        g_12 :
        if(match_cons(l_12, sym_Defined_2))
          {
            m_12 = ATgetArgument(l_12, 0);
            n_12 = ATgetArgument(l_12, 1);
            h_12 :
            if(match_string(m_12, "h_0"))
              {
                if(((k_12 != NULL) && (k_12 != n_12)))
                  _fail(n_12);
                else
                  k_12 = n_12;
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(k_12);
  }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_BuildDefault_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      {
        ATerm z_12 = NULL,b_13 = NULL;
        ATerm a_13 = NULL;
        t = SSLgetAnnotations(not_null(v_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        {
          t = not_null(w_12);
          {
            ATerm d_13 = NULL;
            t = e_80(t);
            {
              b_13 = t;
              {
                ATerm e_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(b_13)), not_null(z_12));
                {
                  e_13 = t;
                  if(((d_13 != NULL) && (d_13 != e_13)))
                    _fail(e_13);
                  else
                    d_13 = e_13;
                }
                t = not_null(d_13);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Real_1 (ATerm t, ATerm w_2 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym_Real_1))
    {
      t_13 = ATgetArgument(s_13, 0);
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_13 = NULL,y_13 = NULL;
            ATerm x_13 = NULL;
            t = SSLgetAnnotations(not_null(s_13));
            {
              x_13 = t;
              if(((w_13 != NULL) && (w_13 != x_13)))
                _fail(x_13);
              else
                w_13 = x_13;
            }
            {
              t = not_null(t_13);
              {
                ATerm a_14 = NULL;
                t = w_2(t);
                {
                  y_13 = t;
                  {
                    ATerm b_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_13)), not_null(w_13));
                    {
                      b_14 = t;
                      if(((a_14 != NULL) && (a_14 != b_14)))
                        _fail(b_14);
                      else
                        a_14 = b_14;
                    }
                    t = not_null(a_14);
                  }
                }
              }
            }
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            {
              ATerm e_14 = NULL,g_14 = NULL;
              ATerm f_14 = NULL;
              t = SSLgetAnnotations(not_null(s_13));
              {
                f_14 = t;
                if(((e_14 != NULL) && (e_14 != f_14)))
                  _fail(f_14);
                else
                  e_14 = f_14;
              }
              {
                t = not_null(t_13);
                {
                  ATerm i_14 = NULL;
                  t = w_2(t);
                  {
                    g_14 = t;
                    {
                      ATerm j_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(g_14)), not_null(e_14));
                      {
                        j_14 = t;
                        if(((i_14 != NULL) && (i_14 != j_14)))
                          _fail(j_14);
                        else
                          i_14 = j_14;
                      }
                      t = not_null(i_14);
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
      _fail(t);
    }
  return(t);
}
ATerm Str_1 (ATerm t, ATerm v_2 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Str_1))
    {
      c_15 = ATgetArgument(b_15, 0);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_15 = NULL,h_15 = NULL;
            ATerm g_15 = NULL;
            t = SSLgetAnnotations(not_null(b_15));
            {
              g_15 = t;
              if(((f_15 != NULL) && (f_15 != g_15)))
                _fail(g_15);
              else
                f_15 = g_15;
            }
            {
              t = not_null(c_15);
              {
                ATerm j_15 = NULL;
                t = v_2(t);
                {
                  h_15 = t;
                  {
                    ATerm k_15 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(h_15)), not_null(f_15));
                    {
                      k_15 = t;
                      if(((j_15 != NULL) && (j_15 != k_15)))
                        _fail(k_15);
                      else
                        j_15 = k_15;
                    }
                    t = not_null(j_15);
                  }
                }
              }
            }
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            {
              ATerm n_15 = NULL,p_15 = NULL;
              ATerm o_15 = NULL;
              t = SSLgetAnnotations(not_null(b_15));
              {
                o_15 = t;
                if(((n_15 != NULL) && (n_15 != o_15)))
                  _fail(o_15);
                else
                  n_15 = o_15;
              }
              {
                t = not_null(c_15);
                {
                  ATerm r_15 = NULL;
                  t = v_2(t);
                  {
                    p_15 = t;
                    {
                      ATerm s_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(p_15)), not_null(n_15));
                      {
                        s_15 = t;
                        if(((r_15 != NULL) && (r_15 != s_15)))
                          _fail(s_15);
                        else
                          r_15 = s_15;
                      }
                      t = not_null(r_15);
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
      _fail(t);
    }
  return(t);
}
ATerm Int_1 (ATerm t, ATerm u_2 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_Int_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = NULL,q_16 = NULL;
            ATerm p_16 = NULL;
            t = SSLgetAnnotations(not_null(k_16));
            {
              p_16 = t;
              if(((o_16 != NULL) && (o_16 != p_16)))
                _fail(p_16);
              else
                o_16 = p_16;
            }
            {
              t = not_null(l_16);
              {
                ATerm s_16 = NULL;
                t = u_2(t);
                {
                  q_16 = t;
                  {
                    ATerm t_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_16)), not_null(o_16));
                    {
                      t_16 = t;
                      if(((s_16 != NULL) && (s_16 != t_16)))
                        _fail(t_16);
                      else
                        s_16 = t_16;
                    }
                    t = not_null(s_16);
                  }
                }
              }
            }
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm w_16 = NULL,y_16 = NULL;
              ATerm x_16 = NULL;
              t = SSLgetAnnotations(not_null(k_16));
              {
                x_16 = t;
                if(((w_16 != NULL) && (w_16 != x_16)))
                  _fail(x_16);
                else
                  w_16 = x_16;
              }
              {
                t = not_null(l_16);
                {
                  ATerm a_17 = NULL;
                  t = u_2(t);
                  {
                    y_16 = t;
                    {
                      ATerm b_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(y_16)), not_null(w_16));
                      {
                        b_17 = t;
                        if(((a_17 != NULL) && (a_17 != b_17)))
                          _fail(b_17);
                        else
                          a_17 = b_17;
                      }
                      t = not_null(a_17);
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
      _fail(t);
    }
  return(t);
}
ATerm Anno_2 (ATerm t, ATerm s_2 (ATerm), ATerm t_2 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_Anno_2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_18 = NULL,d_18 = NULL;
            ATerm c_18 = NULL;
            t = SSLgetAnnotations(not_null(v_17));
            {
              c_18 = t;
              if(((b_18 != NULL) && (b_18 != c_18)))
                _fail(c_18);
              else
                b_18 = c_18;
            }
            {
              t = not_null(w_17);
              {
                ATerm f_18 = NULL;
                t = s_2(t);
                {
                  d_18 = t;
                  {
                    t = not_null(x_17);
                    {
                      ATerm h_18 = NULL;
                      t = t_2(t);
                      {
                        f_18 = t;
                        {
                          ATerm i_18 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(d_18), not_null(f_18)), not_null(b_18));
                          {
                            i_18 = t;
                            if(((h_18 != NULL) && (h_18 != i_18)))
                              _fail(i_18);
                            else
                              h_18 = i_18;
                          }
                          t = not_null(h_18);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm m_18 = NULL,o_18 = NULL;
              ATerm n_18 = NULL;
              t = SSLgetAnnotations(not_null(v_17));
              {
                n_18 = t;
                if(((m_18 != NULL) && (m_18 != n_18)))
                  _fail(n_18);
                else
                  m_18 = n_18;
              }
              {
                t = not_null(w_17);
                {
                  ATerm q_18 = NULL;
                  t = s_2(t);
                  {
                    o_18 = t;
                    {
                      t = not_null(x_17);
                      {
                        ATerm s_18 = NULL;
                        t = t_2(t);
                        {
                          q_18 = t;
                          {
                            ATerm t_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(o_18), not_null(q_18)), not_null(m_18));
                            {
                              t_18 = t;
                              if(((s_18 != NULL) && (s_18 != t_18)))
                                _fail(t_18);
                              else
                                s_18 = t_18;
                            }
                            t = not_null(s_18);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm proper_list_0 (ATerm t)
{
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_19 = NULL;
        h_19 = t;
        e_19 :
        if(!(match_string(h_19, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, g_1, Nil_0);
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_19 = NULL;
              i_19 = t;
              f_19 :
              if(!(match_string(i_19, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm j_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, j_1);
              return(t);
            }
            t = Op_2(t, h_1, i_1);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm o_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_19 = NULL;
                    j_19 = t;
                    g_19 :
                    if(!(match_string(j_19, "Nil")))
                      {
                        if(!(match_string(j_19, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_11;
                  }
                return(t);
              }
              t = Op_2(t, k_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_Op_2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      {
        ATerm w_19 = NULL,y_19 = NULL;
        ATerm x_19 = NULL;
        t = SSLgetAnnotations(not_null(q_19));
        {
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
        }
        {
          t = not_null(r_19);
          {
            ATerm a_20 = NULL;
            t = j_77(t);
            {
              y_19 = t;
              {
                t = not_null(s_19);
                {
                  ATerm c_20 = NULL;
                  t = k_77(t);
                  {
                    a_20 = t;
                    {
                      ATerm d_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(y_19), not_null(a_20)), not_null(w_19));
                      {
                        d_20 = t;
                        if(((c_20 != NULL) && (c_20 != d_20)))
                          _fail(d_20);
                        else
                          c_20 = d_20;
                      }
                      t = not_null(c_20);
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
      _fail(t);
    }
  return(t);
}
ATerm CacheConstant_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
        ATerm y_20 = NULL;
        t = not_null(r_20);
        {
          ATerm t_11 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, l_1);
              t = proper_list_0(t);
              LocalPopChoice(b_12);
            }
          else
            {
              t = t_11;
              {
                ATerm c_12 = t;
                int d_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    LocalPopChoice(d_12);
                  }
                else
                  {
                    t = c_12;
                    {
                      ATerm e_12 = t;
                      int f_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          LocalPopChoice(f_12);
                        }
                      else
                        {
                          t = e_12;
                          {
                            ATerm j_12 = t;
                            int o_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Str_1(t, _id);
                                LocalPopChoice(o_12);
                              }
                            else
                              {
                                t = j_12;
                                {
                                  ATerm p_12 = t;
                                  int q_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      LocalPopChoice(q_12);
                                    }
                                  else
                                    {
                                      t = p_12;
                                      t = BuildDefault_1(t, _id);
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm z_20 = NULL,b_21 = NULL;
            t = new_0(t);
            {
              y_20 = t;
              {
                if(((v_20 != NULL) && (v_20 != y_20)))
                  _fail(y_20);
                else
                  v_20 = y_20;
                {
                  ATerm a_21 = NULL;
                  a_21 = t;
                  if(((z_20 != NULL) && (z_20 != a_21)))
                    _fail(a_21);
                  else
                    z_20 = a_21;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(z_20));
                    {
                      ATerm c_21 = NULL,e_21 = NULL;
                      t = conc_strings_0(t);
                      {
                        b_21 = t;
                        {
                          if(((w_20 != NULL) && (w_20 != b_21)))
                            _fail(b_21);
                          else
                            w_20 = b_21;
                          {
                            ATerm s_12;
                            s_12 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), (ATerm) ATmakeAppl(sym_Defined_2, term_t_12, not_null(w_20)));
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_x_12;
                                  return(t);
                                }
                                t = assert_1(t, m_1);
                              }
                            }
                            t = s_12;
                            {
                              ATerm d_21 = NULL;
                              ATerm y_12 = t;
                              int c_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(c_13);
                                }
                              else
                                {
                                  t = y_12;
                                  t = (ATerm) ATempty;
                                }
                              {
                                d_21 = t;
                                if(((c_21 != NULL) && (c_21 != d_21)))
                                  _fail(d_21);
                                else
                                  c_21 = d_21;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(c_21)), (ATerm) ATmakeAppl(sym__3, not_null(v_20), not_null(w_20), not_null(s_20)));
                                {
                                  e_21 = t;
                                  {
                                    if(((x_20 != NULL) && (x_20 != e_21)))
                                      _fail(e_21);
                                    else
                                      x_20 = e_21;
                                    {
                                      ATerm f_13;
                                      f_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, not_null(x_20)));
                                        {
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = term_k_10;
                                            return(t);
                                          }
                                          t = assert_1(t, n_1);
                                        }
                                      }
                                      t = f_13;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(w_20));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cache_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_21 = NULL;
        ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
        t = not_null(t_21);
        {
          ATerm o_1 (ATerm t)
          {
            t = term_x_12;
            return(t);
          }
          t = rewrite_1(t, o_1);
          {
            x_21 = t;
            o_21 :
            if(match_cons(x_21, sym_Defined_2))
              {
                y_21 = ATgetArgument(x_21, 0);
                z_21 = ATgetArgument(x_21, 1);
                p_21 :
                if(match_string(y_21, "e_0"))
                  {
                    if(((w_21 != NULL) && (w_21 != z_21)))
                      _fail(z_21);
                    else
                      w_21 = z_21;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(w_21));
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm c_22 = NULL;
          ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
          t = not_null(t_21);
          {
            ATerm p_1 (ATerm t)
            {
              t = term_x_12;
              return(t);
            }
            t = rewrite_1(t, p_1);
            {
              d_22 = t;
              r_21 :
              if(match_cons(d_22, sym_Defined_2))
                {
                  e_22 = ATgetArgument(d_22, 0);
                  f_22 = ATgetArgument(d_22, 1);
                  s_21 :
                  if(match_string(e_22, "c_0"))
                    {
                      if(((c_22 != NULL) && (c_22 != f_22)))
                        _fail(f_22);
                      else
                        c_22 = f_22;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          }
          t = not_null(c_22);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm m_22 = NULL,o_22 = NULL;
        ATerm l_13;
        l_13 = t;
        {
          ATerm n_22 = NULL;
          n_22 = t;
          if(((m_22 != NULL) && (m_22 != n_22)))
            _fail(n_22);
          else
            m_22 = n_22;
        }
        t = l_13;
        {
          ATerm p_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm q_1 (ATerm t)
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, q_1);
            {
              p_22 = t;
              if(((o_22 != NULL) && (o_22 != p_22)))
                _fail(p_22);
              else
                o_22 = p_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), not_null(o_22));
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  t = Snd_0(t);
                }
            }
          }
        }
      }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_2 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Var_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm q_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_23 = NULL,i_23 = NULL;
            ATerm h_23 = NULL;
            t = SSLgetAnnotations(not_null(c_23));
            {
              h_23 = t;
              if(((g_23 != NULL) && (g_23 != h_23)))
                _fail(h_23);
              else
                g_23 = h_23;
            }
            {
              t = not_null(d_23);
              {
                ATerm k_23 = NULL;
                t = r_2(t);
                {
                  i_23 = t;
                  {
                    ATerm l_23 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_23)), not_null(g_23));
                    {
                      l_23 = t;
                      if(((k_23 != NULL) && (k_23 != l_23)))
                        _fail(l_23);
                      else
                        k_23 = l_23;
                    }
                    t = not_null(k_23);
                  }
                }
              }
            }
            LocalPopChoice(u_13);
          }
        else
          {
            t = q_13;
            {
              ATerm o_23 = NULL,q_23 = NULL;
              ATerm p_23 = NULL;
              t = SSLgetAnnotations(not_null(c_23));
              {
                p_23 = t;
                if(((o_23 != NULL) && (o_23 != p_23)))
                  _fail(p_23);
                else
                  o_23 = p_23;
              }
              {
                t = not_null(d_23);
                {
                  ATerm s_23 = NULL;
                  t = r_2(t);
                  {
                    q_23 = t;
                    {
                      ATerm t_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_23)), not_null(o_23));
                      {
                        t_23 = t;
                        if(((s_23 != NULL) && (s_23 != t_23)))
                          _fail(t_23);
                        else
                          s_23 = t_23;
                      }
                      t = not_null(s_23);
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
      _fail(t);
    }
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm d_24 = NULL;
  d_24 = t;
  t = SSL_real_to_string(not_null(d_24));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  h_24 :
  if(match_cons(j_24, sym__2))
    {
      k_24 = ATgetArgument(j_24, 0);
      l_24 = ATgetArgument(j_24, 1);
      i_24 :
      if(((ATgetType(k_24) == AT_LIST) && ATisEmpty(k_24)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_24));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_T_2 (ATerm t, ATerm w_0 (ATerm), ATerm a_1 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  v_24 = t;
  t_24 :
  if(match_cons(v_24, sym__2))
    {
      w_24 = ATgetArgument(v_24, 0);
      z_24 = ATgetArgument(v_24, 1);
      u_24 :
      if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
        {
          x_24 = ATgetFirst((ATermList) w_24);
          y_24 = (ATerm) ATgetNext((ATermList) w_24);
          {
            ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(z_24));
            {
              t = w_0(t);
              {
                h_25 = t;
                s_24 :
                if(match_cons(h_25, sym__2))
                  {
                    i_25 = ATgetArgument(h_25, 0);
                    j_25 = ATgetArgument(h_25, 1);
                    {
                      ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
                      if(((f_25 != NULL) && (f_25 != i_25)))
                        _fail(i_25);
                      else
                        f_25 = i_25;
                      {
                        if(((d_25 != NULL) && (d_25 != j_25)))
                          _fail(j_25);
                        else
                          d_25 = j_25;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), not_null(d_25));
                          {
                            t = a_1(t);
                            {
                              k_25 = t;
                              r_24 :
                              if(match_cons(k_25, sym__2))
                                {
                                  l_25 = ATgetArgument(k_25, 0);
                                  m_25 = ATgetArgument(k_25, 1);
                                  {
                                    if(((g_25 != NULL) && (g_25 != l_25)))
                                      _fail(l_25);
                                    else
                                      g_25 = l_25;
                                    if(((e_25 != NULL) && (e_25 != m_25)))
                                      _fail(m_25);
                                    else
                                      e_25 = m_25;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_25)), not_null(f_25)), not_null(e_25));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm thread_map_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm q_25 (ATerm t)
  {
    ATerm v_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, g_109, q_25);
        LocalPopChoice(z_13);
      }
    else
      {
        t = v_13;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = q_25(t);
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm z_25 = NULL;
        ATerm a_26 = NULL;
        t = new_0(t);
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_25)), term_q_8), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(w_25))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(v_25), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_25)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Initialized_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm j_26 = NULL,k_26 = NULL;
    t = not_null(g_26);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_c_14;
        return(t);
      }
      t = rewrite_1(t, r_1);
      {
        j_26 = t;
        e_26 :
        if(match_cons(j_26, sym_Defined_1))
          {
            k_26 = ATgetArgument(j_26, 0);
            f_26 :
            if(!(match_string(k_26, "l_0")))
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_d_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  q_26 = t;
  o_26 :
  if(match_cons(q_26, sym__2))
    {
      r_26 = ATgetArgument(q_26, 0);
      t_26 = ATgetArgument(q_26, 1);
      p_26 :
      if(match_cons(r_26, sym_Var_1))
        {
          s_26 = ATgetArgument(r_26, 0);
          {
            ATerm w_26 = NULL;
            t = not_null(s_26);
            {
              t = Initialized_0(t);
              {
                w_26 = t;
                n_26 :
                if(!(match_string(w_26, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_26)), not_null(t_26));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  m_27 = t;
  k_27 :
  if(match_cons(m_27, sym_Anno_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      l_27 = ATgetArgument(m_27, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_27)), not_null(n_27))));
    }
  else
    {
      if(match_cons(m_27, sym_Op_2))
        {
          n_27 = ATgetArgument(m_27, 0);
          l_27 = ATgetArgument(m_27, 1);
          {
            ATerm s_27 = NULL;
            ATerm t_27 = NULL,v_27 = NULL;
            ATerm u_27 = NULL;
            t = not_null(l_27);
            {
              t = length_0(t);
              {
                u_27 = t;
                if(((t_27 != NULL) && (t_27 != u_27)))
                  _fail(u_27);
                else
                  t_27 = u_27;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(t_27));
              {
                t = ConstructorName_0(t);
                {
                  v_27 = t;
                  if(((s_27 != NULL) && (s_27 != v_27)))
                    _fail(v_27);
                  else
                    s_27 = v_27;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_14, (ATerm) ATinsert(CheckATermList(not_null(l_27)), (ATerm) ATmakeAppl(sym_Id_1, not_null(s_27)))));
          }
        }
      else
        {
          if(match_cons(m_27, sym_BuildDefault_1))
            {
              n_27 = ATgetArgument(m_27, 0);
              t = not_null(n_27);
            }
          else
            {
              if(match_cons(m_27, sym_Var_1))
                {
                  n_27 = ATgetArgument(m_27, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_27))));
                }
              else
                {
                  if(match_cons(m_27, sym_Str_1))
                    {
                      n_27 = ATgetArgument(m_27, 0);
                      {
                        ATerm z_27 = NULL;
                        ATerm a_28 = NULL;
                        t = not_null(n_27);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              a_28 = t;
                              if(((z_27 != NULL) && (z_27 != a_28)))
                                _fail(a_28);
                              else
                                z_27 = a_28;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), term_t_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(z_27))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(m_27, sym_Real_1))
                        {
                          n_27 = ATgetArgument(m_27, 0);
                          {
                            ATerm c_28 = NULL;
                            ATerm d_28 = NULL;
                            t = not_null(n_27);
                            {
                              t = real_to_string_0(t);
                              {
                                d_28 = t;
                                if(((c_28 != NULL) && (c_28 != d_28)))
                                  _fail(d_28);
                                else
                                  c_28 = d_28;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(c_28)))));
                          }
                        }
                      else
                        {
                          if(match_cons(m_27, sym_Int_1))
                            {
                              n_27 = ATgetArgument(m_27, 0);
                              {
                                ATerm f_28 = NULL;
                                ATerm g_28 = NULL;
                                t = not_null(n_27);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    g_28 = t;
                                    if(((f_28 != NULL) && (f_28 != g_28)))
                                      _fail(g_28);
                                    else
                                      f_28 = g_28;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_28)))));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Id_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym_Id_1))
    {
      z_28 = ATgetArgument(y_28, 0);
      {
        ATerm c_29 = NULL,e_29 = NULL;
        ATerm d_29 = NULL;
        t = SSLgetAnnotations(not_null(y_28));
        {
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
        }
        {
          t = not_null(z_28);
          {
            ATerm g_29 = NULL;
            t = d_84(t);
            {
              e_29 = t;
              {
                ATerm h_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(e_29)), not_null(c_29));
                {
                  h_29 = t;
                  if(((g_29 != NULL) && (g_29 != h_29)))
                    _fail(h_29);
                  else
                    g_29 = h_29;
                }
                t = not_null(g_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FunCall_2 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym_FunCall_2))
    {
      t_29 = ATgetArgument(s_29, 0);
      u_29 = ATgetArgument(s_29, 1);
      {
        ATerm y_29 = NULL,a_30 = NULL;
        ATerm z_29 = NULL;
        t = SSLgetAnnotations(not_null(s_29));
        {
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
        }
        {
          t = not_null(t_29);
          {
            ATerm c_30 = NULL;
            t = h_87(t);
            {
              a_30 = t;
              {
                t = not_null(u_29);
                {
                  ATerm e_30 = NULL;
                  t = i_87(t);
                  {
                    c_30 = t;
                    {
                      ATerm f_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(a_30), not_null(c_30)), not_null(y_29));
                      {
                        f_30 = t;
                        if(((e_30 != NULL) && (e_30 != f_30)))
                          _fail(f_30);
                        else
                          e_30 = f_30;
                      }
                      t = not_null(e_30);
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
      _fail(t);
    }
  return(t);
}
ATerm ConstructList_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  z_30 :
  if(match_cons(j_31, sym_Op_2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      a_31 :
      if(match_string(k_31, "Cons"))
        {
          b_31 :
          if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
            {
              f_31 = ATgetFirst((ATermList) l_31);
              g_31 = (ATerm) ATgetNext((ATermList) l_31);
              c_31 :
              if(((ATgetType(g_31) == AT_LIST) && !(ATisEmpty(g_31))))
                {
                  h_31 = ATgetFirst((ATermList) g_31);
                  i_31 = (ATerm) ATgetNext((ATermList) g_31);
                  d_31 :
                  if(((ATgetType(i_31) == AT_LIST) && ATisEmpty(i_31)))
                    {
                      {
                        ATerm o_31 = NULL;
                        ATerm b_32 = NULL;
                        t = not_null(h_31);
                        {
                          ATerm d_15 = t;
                          int e_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
                              p_31 = t;
                              q_30 :
                              if(match_cons(p_31, sym_TypeCast_2))
                                {
                                  q_31 = ATgetArgument(p_31, 0);
                                  x_31 = ATgetArgument(p_31, 1);
                                  r_30 :
                                  if(match_cons(q_31, sym_TypeName_2))
                                    {
                                      r_31 = ATgetArgument(q_31, 0);
                                      w_31 = ATgetArgument(q_31, 1);
                                      s_30 :
                                      if(match_cons(r_31, sym_TypeSpec_3))
                                        {
                                          s_31 = ATgetArgument(r_31, 0);
                                          t_31 = ATgetArgument(r_31, 1);
                                          v_31 = ATgetArgument(r_31, 2);
                                          t_30 :
                                          if(((ATgetType(s_31) == AT_LIST) && ATisEmpty(s_31)))
                                            {
                                              u_30 :
                                              if(match_cons(t_31, sym_TypeId_1))
                                                {
                                                  u_31 = ATgetArgument(t_31, 0);
                                                  v_30 :
                                                  if(match_string(u_31, "ATerm"))
                                                    {
                                                      w_30 :
                                                      if(((ATgetType(v_31) == AT_LIST) && ATisEmpty(v_31)))
                                                        {
                                                          x_30 :
                                                          if(match_cons(w_31, sym_None_0))
                                                            {
                                                              t = not_null(x_31);
                                                              {
                                                                ATerm i_15 = t;
                                                                int l_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_1 (ATerm t)
                                                                    {
                                                                      ATerm z_31 = NULL;
                                                                      z_31 = t;
                                                                      o_30 :
                                                                      if(!(match_string(z_31, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, s_1);
                                                                    LocalPopChoice(l_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_15;
                                                                    {
                                                                      ATerm t_1 (ATerm t)
                                                                      {
                                                                        ATerm v_1 (ATerm t)
                                                                        {
                                                                          ATerm a_32 = NULL;
                                                                          a_32 = t;
                                                                          p_30 :
                                                                          if(!(match_string(a_32, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, v_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm u_1 (ATerm t)
                                                                      {
                                                                        ATerm w_1 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, w_1);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, t_1, u_1);
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              LocalPopChoice(e_15);
                            }
                          else
                            {
                              t = d_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_q_15, (ATerm) ATinsert(ATempty, not_null(h_31)));
                            }
                          {
                            b_32 = t;
                            if(((o_31 != NULL) && (o_31 != b_32)))
                              _fail(b_32);
                            else
                              o_31 = b_32;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_31)), not_null(o_31))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(k_31, "Nil"))
            {
              e_31 :
              if(((ATgetType(l_31) == AT_LIST) && ATisEmpty(l_31)))
                {
                  t = term_x_15;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = bottomup_1(t, z_95);
    return(t);
  }
  t = _all(t, x_1);
  t = z_95(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, z_1);
    return(t);
  }
  t = bottomup_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_95 (ATerm))
{
  t = y_95(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = topdown_1(t, y_95);
      return(t);
    }
    t = _all(t, a_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  ATerm x_53 (ATerm t)
  {
    ATerm m_48 = NULL,c_49 = NULL;
    ATerm a_16;
    a_16 = t;
    {
      ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
      t = not_null(z_45);
      {
        ATerm b_16 = t;
        if((PushChoice() == 0))
          {
            ATerm n_48 = NULL;
            n_48 = t;
            k_34 :
            if(!(match_string(n_48, "Nil")))
              {
                if(!(match_string(n_48, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_16;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), term_c_16);
          {
            ATerm b_2 (ATerm t)
            {
              ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
              o_48 = t;
              p_34 :
              if(match_cons(o_48, sym__2))
                {
                  p_48 = ATgetArgument(o_48, 0);
                  q_48 = ATgetArgument(o_48, 1);
                  {
                    ATerm t_48 = NULL,x_48 = NULL;
                    ATerm d_16;
                    d_16 = t;
                    {
                      ATerm u_48 = NULL,w_48 = NULL;
                      ATerm v_48 = NULL;
                      t = not_null(q_48);
                      {
                        t = int_to_string_0(t);
                        {
                          v_48 = t;
                          if(((u_48 != NULL) && (u_48 != v_48)))
                            _fail(v_48);
                          else
                            u_48 = v_48;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_48), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_48))), not_null(y_45))));
                        {
                          ATerm g_16 = t;
                          int h_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(h_16);
                            }
                          else
                            {
                              t = g_16;
                              t = MatchArg2_0(t);
                            }
                          {
                            w_48 = t;
                            if(((t_48 != NULL) && (t_48 != w_48)))
                              _fail(w_48);
                            else
                              t_48 = w_48;
                          }
                        }
                      }
                    }
                    t = d_16;
                    {
                      ATerm y_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_48), term_i_16);
                      {
                        t = add_0(t);
                        {
                          y_48 = t;
                          if(((x_48 != NULL) && (x_48 != y_48)))
                            _fail(y_48);
                          else
                            x_48 = y_48;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_48), not_null(x_48));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, b_2);
            {
              z_48 = t;
              r_34 :
              if(match_cons(z_48, sym__2))
                {
                  a_49 = ATgetArgument(z_48, 0);
                  b_49 = ATgetArgument(z_48, 1);
                  if(((m_48 != NULL) && (m_48 != a_49)))
                    _fail(a_49);
                  else
                    m_48 = a_49;
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
      }
    }
    t = a_16;
    {
      ATerm d_49 = NULL,f_49 = NULL;
      ATerm e_49 = NULL;
      t = not_null(i_45);
      {
        t = length_0(t);
        {
          e_49 = t;
          if(((d_49 != NULL) && (d_49 != e_49)))
            _fail(e_49);
          else
            d_49 = e_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(d_49));
        {
          t = ConstructorName_0(t);
          {
            f_49 = t;
            if(((c_49 != NULL) && (c_49 != f_49)))
              _fail(f_49);
            else
              c_49 = f_49;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_49))), not_null(y_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16))));
    }
    return(t);
  }
  ATerm y_53 (ATerm t)
  {
    ATerm i_49 = NULL;
    ATerm j_49 = NULL;
    t = not_null(z_45);
    {
      t = real_to_string_0(t);
      {
        j_49 = t;
        if(((i_49 != NULL) && (i_49 != j_49)))
          _fail(j_49);
        else
          i_49 = j_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(y_45))), term_f_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_17, not_null(y_45)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(i_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16))));
    return(t);
  }
  ATerm z_53 (ATerm t)
  {
    ATerm m_49 = NULL;
    ATerm n_49 = NULL;
    t = not_null(z_45);
    {
      t = int_to_string_0(t);
      {
        n_49 = t;
        if(((m_49 != NULL) && (m_49 != n_49)))
          _fail(n_49);
        else
          m_49 = n_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(y_45))), term_n_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_t_17, not_null(y_45)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(m_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16))));
    return(t);
  }
  ATerm a_54 (ATerm t)
  {
    ATerm r_49 = NULL;
    ATerm s_49 = NULL;
    t = not_null(z_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          s_49 = t;
          if(((r_49 != NULL) && (r_49 != s_49)))
            _fail(s_49);
          else
            r_49 = s_49;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_z_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_18, not_null(y_45)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), term_t_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(r_49)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16))));
    return(t);
  }
  ATerm b_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), term_k_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), not_null(y_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, not_null(y_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), term_z_7, not_null(y_45))));
    return(t);
  }
  ATerm c_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(i_45), not_null(y_45))), (ATerm) ATmakeAppl(sym_Match_2, not_null(z_45), not_null(y_45))));
    return(t);
  }
  ATerm d_54 (ATerm t)
  {
    t = term_l_18;
    return(t);
  }
  ATerm e_54 (ATerm t)
  {
    t = term_l_18;
    return(t);
  }
  ATerm f_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(b_46), term_z_16);
    return(t);
  }
  ATerm g_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_45)), term_z_7, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_45)), term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_45)), not_null(u_45), not_null(v_45)))));
    return(t);
  }
  ATerm h_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))), term_r_18), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(t_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_45)), not_null(u_45), not_null(v_45)))));
    return(t);
  }
  ATerm i_54 (ATerm t)
  {
    ATerm x_50 = NULL,m_51 = NULL,o_51 = NULL;
    ATerm k_19;
    k_19 = t;
    {
      ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
      t = not_null(r_45);
      {
        ATerm l_19 = t;
        if((PushChoice() == 0))
          {
            ATerm y_50 = NULL;
            y_50 = t;
            x_34 :
            if(!(match_string(y_50, "Nil")))
              {
                if(!(match_string(y_50, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_45), term_c_16);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
              z_50 = t;
              o_35 :
              if(match_cons(z_50, sym__2))
                {
                  a_51 = ATgetArgument(z_50, 0);
                  c_51 = ATgetArgument(z_50, 1);
                  p_35 :
                  if(match_cons(a_51, sym_Var_1))
                    {
                      b_51 = ATgetArgument(a_51, 0);
                      {
                        ATerm f_51 = NULL,h_51 = NULL;
                        ATerm m_19;
                        m_19 = t;
                        {
                          ATerm g_51 = NULL;
                          t = not_null(c_51);
                          {
                            t = int_to_string_0(t);
                            {
                              g_51 = t;
                              if(((f_51 != NULL) && (f_51 != g_51)))
                                _fail(g_51);
                              else
                                f_51 = g_51;
                            }
                          }
                        }
                        t = m_19;
                        {
                          ATerm i_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_51), term_i_16);
                          {
                            t = add_0(t);
                            {
                              i_51 = t;
                              if(((h_51 != NULL) && (h_51 != i_51)))
                                _fail(i_51);
                              else
                                h_51 = i_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_51)), term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))))), not_null(h_51));
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, c_2);
            {
              j_51 = t;
              w_42 :
              if(match_cons(j_51, sym__2))
                {
                  k_51 = ATgetArgument(j_51, 0);
                  l_51 = ATgetArgument(j_51, 1);
                  if(((x_50 != NULL) && (x_50 != k_51)))
                    _fail(k_51);
                  else
                    x_50 = k_51;
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
      }
    }
    t = k_19;
    {
      ATerm n_19;
      n_19 = t;
      {
        ATerm n_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), not_null(p_45));
        {
          t = ConstructorName_0(t);
          {
            n_51 = t;
            if(((m_51 != NULL) && (m_51 != n_51)))
              _fail(n_51);
            else
              m_51 = n_51;
          }
        }
      }
      t = n_19;
      {
        ATerm p_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_50), (ATerm) ATinsert(ATempty, not_null(t_45)));
        {
          t = conc_0(t);
          {
            p_51 = t;
            if(((o_51 != NULL) && (o_51 != p_51)))
              _fail(p_51);
            else
              o_51 = p_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(o_51)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_45)), not_null(u_45), not_null(v_45)))));
      }
    }
    return(t);
  }
  ATerm j_54 (ATerm t)
  {
    ATerm w_51 = NULL;
    ATerm x_51 = NULL;
    t = not_null(r_45);
    {
      t = real_to_string_0(t);
      {
        x_51 = t;
        if(((w_51 != NULL) && (w_51 != x_51)))
          _fail(x_51);
        else
          w_51 = x_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_t_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(w_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_45)), not_null(u_45), not_null(v_45)))));
    return(t);
  }
  ATerm k_54 (ATerm t)
  {
    ATerm h_52 = NULL;
    ATerm i_52 = NULL;
    t = not_null(r_45);
    {
      t = int_to_string_0(t);
      {
        i_52 = t;
        if(((h_52 != NULL) && (h_52 != i_52)))
          _fail(i_52);
        else
          h_52 = i_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(h_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_45)), not_null(u_45), not_null(v_45)))));
    return(t);
  }
  ATerm l_54 (ATerm t)
  {
    ATerm p_52 = NULL;
    ATerm q_52 = NULL;
    t = not_null(r_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          q_52 = t;
          if(((p_52 != NULL) && (p_52 != q_52)))
            _fail(q_52);
          else
            p_52 = q_52;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(p_52)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(z_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_45)), not_null(u_45), not_null(v_45)))));
    return(t);
  }
  ATerm m_54 (ATerm t)
  {
    t = not_null(v_45);
    return(t);
  }
  ATerm n_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_46)), (ATerm) ATmakeAppl(sym_Case_3, not_null(y_45), not_null(v_45), not_null(w_45)));
    return(t);
  }
  ATerm o_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(b_46)));
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), term_k_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), (ATerm) ATmakeAppl(sym_Id_1, not_null(x_45)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_45))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_45)))));
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    t = not_null(y_45);
    {
      ATerm e_20 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_20;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_45))));
    return(t);
  }
  ATerm r_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), term_z_7, term_z_16));
    return(t);
  }
  ATerm s_54 (ATerm t)
  {
    ATerm e_53 = NULL;
    ATerm f_53 = NULL;
    t = not_null(b_46);
    {
      t = construct_term_caching_0(t);
      {
        f_53 = t;
        if(((e_53 != NULL) && (e_53 != f_53)))
          _fail(f_53);
        else
          e_53 = f_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, not_null(e_53)));
    return(t);
  }
  a_46 = t;
  d_43 :
  if(match_cons(a_46, sym_Let_2))
    {
      b_46 = ATgetArgument(a_46, 0);
      y_45 = ATgetArgument(a_46, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(b_46), (ATerm) ATinsert(ATempty, not_null(y_45)));
    }
  else
    {
      if(match_cons(a_46, sym_Where_1))
        {
          b_46 = ATgetArgument(a_46, 0);
          {
            ATerm f_46 = NULL;
            ATerm g_46 = NULL;
            t = new_0(t);
            {
              g_46 = t;
              if(((f_46 != NULL) && (f_46 != g_46)))
                _fail(g_46);
              else
                f_46 = g_46;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_q_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_46))))), not_null(b_46)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_46)), term_z_7, term_z_16))));
          }
        }
      else
        {
          if(match_cons(a_46, sym_Test_1))
            {
              b_46 = ATgetArgument(a_46, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(b_46));
            }
          else
            {
              if(match_cons(a_46, sym_Call_2))
                {
                  b_46 = ATgetArgument(a_46, 0);
                  y_45 = ATgetArgument(a_46, 1);
                  e_43 :
                  if(match_cons(b_46, sym_SVar_1))
                    {
                      z_45 = ATgetArgument(b_46, 0);
                      {
                        ATerm k_46 = NULL;
                        ATerm q_46 = NULL;
                        t = not_null(y_45);
                        {
                          ATerm d_2 (ATerm t)
                          {
                            ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
                            l_46 = t;
                            v_33 :
                            if(match_cons(l_46, sym_Call_2))
                              {
                                m_46 = ATgetArgument(l_46, 0);
                                o_46 = ATgetArgument(l_46, 1);
                                w_33 :
                                if(match_cons(m_46, sym_SVar_1))
                                  {
                                    n_46 = ATgetArgument(m_46, 0);
                                    x_33 :
                                    if(((ATgetType(o_46) == AT_LIST) && ATisEmpty(o_46)))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(n_46));
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = map_1(t, d_2);
                          {
                            q_46 = t;
                            if(((k_46 != NULL) && (k_46 != q_46)))
                              _fail(q_46);
                            else
                              k_46 = q_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_45)), (ATerm) ATinsert(CheckATermList(not_null(k_46)), term_z_16))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(a_46, sym_Prim_2))
                    {
                      b_46 = ATgetArgument(a_46, 0);
                      y_45 = ATgetArgument(a_46, 1);
                      {
                        ATerm t_46 = NULL;
                        ATerm u_46 = NULL;
                        t = not_null(y_45);
                        {
                          ATerm e_2 (ATerm t)
                          {
                            ATerm f_2 (ATerm t)
                            {
                              t = try_1(t, construct_term_0);
                              return(t);
                            }
                            t = topdown_1(t, f_2);
                            return(t);
                          }
                          t = map_1(t, e_2);
                          {
                            u_46 = t;
                            if(((t_46 != NULL) && (t_46 != u_46)))
                              _fail(u_46);
                            else
                              t_46 = u_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(b_46)), not_null(t_46))));
                      }
                    }
                  else
                    {
                      if(match_cons(a_46, sym_Not_1))
                        {
                          b_46 = ATgetArgument(a_46, 0);
                          {
                            ATerm w_46 = NULL;
                            ATerm x_46 = NULL;
                            t = new_0(t);
                            {
                              x_46 = t;
                              if(((w_46 != NULL) && (w_46 != x_46)))
                                _fail(x_46);
                              else
                                w_46 = x_46;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_46)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_20), term_n_20), not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_46)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(a_46, sym_LGChoice_2))
                            {
                              b_46 = ATgetArgument(a_46, 0);
                              y_45 = ATgetArgument(a_46, 1);
                              {
                                ATerm a_47 = NULL;
                                ATerm b_47 = NULL;
                                t = new_0(t);
                                {
                                  b_47 = t;
                                  if(((a_47 != NULL) && (a_47 != b_47)))
                                    _fail(b_47);
                                  else
                                    a_47 = b_47;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_47)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_h_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_47)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(a_46, sym_GChoice_2))
                                {
                                  b_46 = ATgetArgument(a_46, 0);
                                  y_45 = ATgetArgument(a_46, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(b_46), not_null(y_45));
                                }
                              else
                                {
                                  if(match_cons(a_46, sym_GuardedLChoice_3))
                                    {
                                      b_46 = ATgetArgument(a_46, 0);
                                      y_45 = ATgetArgument(a_46, 1);
                                      v_45 = ATgetArgument(a_46, 2);
                                      {
                                        ATerm h_47 = NULL,i_47 = NULL;
                                        ATerm j_47 = NULL;
                                        ATerm k_47 = NULL;
                                        t = new_0(t);
                                        {
                                          j_47 = t;
                                          {
                                            if(((h_47 != NULL) && (h_47 != j_47)))
                                              _fail(j_47);
                                            else
                                              h_47 = j_47;
                                            {
                                              t = new_0(t);
                                              {
                                                k_47 = t;
                                                if(((i_47 != NULL) && (i_47 != k_47)))
                                                  _fail(k_47);
                                                else
                                                  i_47 = k_47;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_47)), term_q_8), term_n_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_47)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_47)))))), not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_47)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(a_46, sym_LChoice_2))
                                        {
                                          b_46 = ATgetArgument(a_46, 0);
                                          y_45 = ATgetArgument(a_46, 1);
                                          {
                                            ATerm n_47 = NULL,o_47 = NULL;
                                            ATerm p_47 = NULL;
                                            ATerm q_47 = NULL;
                                            t = new_0(t);
                                            {
                                              p_47 = t;
                                              {
                                                if(((n_47 != NULL) && (n_47 != p_47)))
                                                  _fail(p_47);
                                                else
                                                  n_47 = p_47;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    q_47 = t;
                                                    if(((o_47 != NULL) && (o_47 != q_47)))
                                                      _fail(q_47);
                                                    else
                                                      o_47 = q_47;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_47)), term_q_8), term_n_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_47)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_47)))))), not_null(b_46))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_z_16, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_47)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(a_46, sym_Choice_2))
                                            {
                                              b_46 = ATgetArgument(a_46, 0);
                                              y_45 = ATgetArgument(a_46, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_46), not_null(y_45));
                                            }
                                          else
                                            {
                                              if(match_cons(a_46, sym_Seq_2))
                                                {
                                                  b_46 = ATgetArgument(a_46, 0);
                                                  y_45 = ATgetArgument(a_46, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_45)), not_null(b_46)));
                                                }
                                              else
                                                {
                                                  if(match_cons(a_46, sym_Scope_2))
                                                    {
                                                      b_46 = ATgetArgument(a_46, 0);
                                                      y_45 = ATgetArgument(a_46, 1);
                                                      {
                                                        ATerm z_47 = NULL;
                                                        ATerm v_21;
                                                        v_21 = t;
                                                        {
                                                          t = not_null(b_46);
                                                          {
                                                            ATerm g_2 (ATerm t)
                                                            {
                                                              ATerm x_47 = NULL;
                                                              x_47 = t;
                                                              {
                                                                ATerm a_22;
                                                                a_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_47), term_g_22);
                                                                  {
                                                                    ATerm h_2 (ATerm t)
                                                                    {
                                                                      t = term_c_14;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, h_2);
                                                                  }
                                                                }
                                                                t = a_22;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, g_2);
                                                          }
                                                        }
                                                        t = v_21;
                                                        {
                                                          ATerm c_48 = NULL;
                                                          t = not_null(b_46);
                                                          {
                                                            ATerm i_2 (ATerm t)
                                                            {
                                                              ATerm a_48 = NULL;
                                                              a_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_48)), term_q_8), term_h_22);
                                                              return(t);
                                                            }
                                                            t = map_1(t, i_2);
                                                            {
                                                              c_48 = t;
                                                              if(((z_47 != NULL) && (z_47 != c_48)))
                                                                _fail(c_48);
                                                              else
                                                                z_47 = c_48;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, not_null(z_47))), (ATerm) ATinsert(ATempty, not_null(y_45)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(a_46, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(a_46, sym_Id_0))
                                                            {
                                                              t = term_l_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(a_46, sym_Match_2))
                                                                {
                                                                  b_46 = ATgetArgument(a_46, 0);
                                                                  y_45 = ATgetArgument(a_46, 1);
                                                                  f_43 :
                                                                  if(match_cons(b_46, sym_Op_2))
                                                                    {
                                                                      z_45 = ATgetArgument(b_46, 0);
                                                                      i_45 = ATgetArgument(b_46, 1);
                                                                      g_43 :
                                                                      if(((ATgetType(i_45) == AT_LIST) && !(ATisEmpty(i_45))))
                                                                        {
                                                                          e_45 = ATgetFirst((ATermList) i_45);
                                                                          f_45 = (ATerm) ATgetNext((ATermList) i_45);
                                                                          h_43 :
                                                                          if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
                                                                            {
                                                                              g_45 = ATgetFirst((ATermList) f_45);
                                                                              h_45 = (ATerm) ATgetNext((ATermList) f_45);
                                                                              i_43 :
                                                                              if(((ATgetType(h_45) == AT_LIST) && ATisEmpty(h_45)))
                                                                                {
                                                                                  j_43 :
                                                                                  if(match_string(z_45, "Cons"))
                                                                                    {
                                                                                      ATerm i_22 = t;
                                                                                      int j_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm g_48 = NULL;
                                                                                          ATerm h_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(g_45), (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_d_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_19, not_null(y_45))))))), (ATerm) ATmakeAppl(sym__2, not_null(e_45), (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_b_19, not_null(y_45))))));
                                                                                          {
                                                                                            ATerm j_2 (ATerm t)
                                                                                            {
                                                                                              ATerm k_22 = t;
                                                                                              int l_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  LocalPopChoice(l_22);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = k_22;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, j_2);
                                                                                            {
                                                                                              h_48 = t;
                                                                                              if(((g_48 != NULL) && (g_48 != h_48)))
                                                                                                _fail(h_48);
                                                                                              else
                                                                                                g_48 = h_48;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(y_45))), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, not_null(y_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(g_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16))));
                                                                                          LocalPopChoice(j_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_22;
                                                                                          t = x_53(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_53(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  k_43 :
                                                                                  t = x_53(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              l_43 :
                                                                              t = x_53(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(i_45) == AT_LIST) && ATisEmpty(i_45)))
                                                                            {
                                                                              m_43 :
                                                                              if(match_string(z_45, "Nil"))
                                                                                {
                                                                                  ATerm q_22 = t;
                                                                                  int r_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(y_45))), term_r_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, not_null(y_45))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_16, (ATerm) ATinsert(ATempty, term_z_16))));
                                                                                      LocalPopChoice(r_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_22;
                                                                                      t = x_53(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_53(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              n_43 :
                                                                              t = x_53(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(b_46, sym_Real_1))
                                                                        {
                                                                          z_45 = ATgetArgument(b_46, 0);
                                                                          t = y_53(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(b_46, sym_Int_1))
                                                                            {
                                                                              z_45 = ATgetArgument(b_46, 0);
                                                                              t = z_53(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(b_46, sym_Str_1))
                                                                                {
                                                                                  z_45 = ATgetArgument(b_46, 0);
                                                                                  t = a_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(b_46, sym_Var_1))
                                                                                    {
                                                                                      z_45 = ATgetArgument(b_46, 0);
                                                                                      t = b_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(b_46, sym_As_2))
                                                                                        {
                                                                                          z_45 = ATgetArgument(b_46, 0);
                                                                                          i_45 = ATgetArgument(b_46, 1);
                                                                                          t = c_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(b_46, sym_BuildDefault_1))
                                                                                            {
                                                                                              z_45 = ATgetArgument(b_46, 0);
                                                                                              t = d_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(b_46, sym_Wld_0))
                                                                                                {
                                                                                                  t = e_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  _fail(t);
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
                                                                  if(match_cons(a_46, sym_Match_1))
                                                                    {
                                                                      b_46 = ATgetArgument(a_46, 0);
                                                                      t = f_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(a_46, sym_Case_3))
                                                                        {
                                                                          b_46 = ATgetArgument(a_46, 0);
                                                                          y_45 = ATgetArgument(a_46, 1);
                                                                          v_45 = ATgetArgument(a_46, 2);
                                                                          o_43 :
                                                                          if(match_cons(b_46, sym_Var_1))
                                                                            {
                                                                              z_45 = ATgetArgument(b_46, 0);
                                                                              p_43 :
                                                                              if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
                                                                                {
                                                                                  x_45 = ATgetFirst((ATermList) y_45);
                                                                                  u_45 = (ATerm) ATgetNext((ATermList) y_45);
                                                                                  q_43 :
                                                                                  if(match_cons(x_45, sym_Alt_3))
                                                                                    {
                                                                                      q_45 = ATgetArgument(x_45, 0);
                                                                                      s_45 = ATgetArgument(x_45, 1);
                                                                                      t_45 = ATgetArgument(x_45, 2);
                                                                                      r_43 :
                                                                                      if(match_cons(q_45, sym_Fun_2))
                                                                                        {
                                                                                          r_45 = ATgetArgument(q_45, 0);
                                                                                          p_45 = ATgetArgument(q_45, 1);
                                                                                          s_43 :
                                                                                          if(((ATgetType(s_45) == AT_LIST) && !(ATisEmpty(s_45))))
                                                                                            {
                                                                                              j_45 = ATgetFirst((ATermList) s_45);
                                                                                              l_45 = (ATerm) ATgetNext((ATermList) s_45);
                                                                                              t_43 :
                                                                                              if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
                                                                                                {
                                                                                                  m_45 = ATgetFirst((ATermList) l_45);
                                                                                                  o_45 = (ATerm) ATgetNext((ATermList) l_45);
                                                                                                  u_43 :
                                                                                                  if(((ATgetType(o_45) == AT_LIST) && ATisEmpty(o_45)))
                                                                                                    {
                                                                                                      v_43 :
                                                                                                      if(match_cons(m_45, sym_Var_1))
                                                                                                        {
                                                                                                          n_45 = ATgetArgument(m_45, 0);
                                                                                                          w_43 :
                                                                                                          if(match_cons(j_45, sym_Var_1))
                                                                                                            {
                                                                                                              k_45 = ATgetArgument(j_45, 0);
                                                                                                              x_43 :
                                                                                                              if(match_int(p_45, 2))
                                                                                                                {
                                                                                                                  y_43 :
                                                                                                                  if(match_string(r_45, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm s_22 = t;
                                                                                                                      int t_22 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = g_54(t);
                                                                                                                          LocalPopChoice(t_22);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = s_22;
                                                                                                                          t = i_54(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_54(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  z_43 :
                                                                                                                  t = i_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              a_44 :
                                                                                                              b_44 :
                                                                                                              t = i_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          c_44 :
                                                                                                          d_44 :
                                                                                                          e_44 :
                                                                                                          t = i_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      f_44 :
                                                                                                      l_44 :
                                                                                                      m_44 :
                                                                                                      n_44 :
                                                                                                      t = i_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  o_44 :
                                                                                                  p_44 :
                                                                                                  q_44 :
                                                                                                  t = i_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(s_45) == AT_LIST) && ATisEmpty(s_45)))
                                                                                                {
                                                                                                  r_44 :
                                                                                                  if(match_int(p_45, 0))
                                                                                                    {
                                                                                                      s_44 :
                                                                                                      if(match_string(r_45, "Nil"))
                                                                                                        {
                                                                                                          ATerm u_22 = t;
                                                                                                          int v_22 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = h_54(t);
                                                                                                              LocalPopChoice(v_22);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = u_22;
                                                                                                              t = i_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = i_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t_44 :
                                                                                                      t = i_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  u_44 :
                                                                                                  v_44 :
                                                                                                  t = i_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(q_45, sym_Real_1))
                                                                                            {
                                                                                              r_45 = ATgetArgument(q_45, 0);
                                                                                              t = j_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(q_45, sym_Int_1))
                                                                                                {
                                                                                                  r_45 = ATgetArgument(q_45, 0);
                                                                                                  t = k_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(q_45, sym_Str_1))
                                                                                                    {
                                                                                                      r_45 = ATgetArgument(q_45, 0);
                                                                                                      t = l_54(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(y_45) == AT_LIST) && ATisEmpty(y_45)))
                                                                                    {
                                                                                      t = m_54(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(a_46, sym_Case_4))
                                                                            {
                                                                              b_46 = ATgetArgument(a_46, 0);
                                                                              y_45 = ATgetArgument(a_46, 1);
                                                                              v_45 = ATgetArgument(a_46, 2);
                                                                              w_45 = ATgetArgument(a_46, 3);
                                                                              t = n_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(a_46, sym_Continue_1))
                                                                                {
                                                                                  b_46 = ATgetArgument(a_46, 0);
                                                                                  t = o_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(a_46, sym_Assign_2))
                                                                                    {
                                                                                      b_46 = ATgetArgument(a_46, 0);
                                                                                      y_45 = ATgetArgument(a_46, 1);
                                                                                      w_44 :
                                                                                      if(match_cons(b_46, sym_Var_1))
                                                                                        {
                                                                                          z_45 = ATgetArgument(b_46, 0);
                                                                                          x_44 :
                                                                                          if(match_cons(y_45, sym_Var_1))
                                                                                            {
                                                                                              x_45 = ATgetArgument(y_45, 0);
                                                                                              {
                                                                                                ATerm w_22 = t;
                                                                                                int x_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = p_54(t);
                                                                                                    LocalPopChoice(x_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = w_22;
                                                                                                    t = q_54(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = q_54(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(a_46, sym_Assign_1))
                                                                                        {
                                                                                          b_46 = ATgetArgument(a_46, 0);
                                                                                          y_44 :
                                                                                          if(match_cons(b_46, sym_Var_1))
                                                                                            {
                                                                                              z_45 = ATgetArgument(b_46, 0);
                                                                                              t = r_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(a_46, sym_Build_1))
                                                                                            {
                                                                                              b_46 = ATgetArgument(a_46, 0);
                                                                                              t = s_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
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
    }
  return(t);
}
ATerm PlainBody_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
  d_56 = t;
  c_56 :
  if(match_cons(d_56, sym__2))
    {
      e_56 = ATgetArgument(d_56, 0);
      f_56 = ATgetArgument(d_56, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_y_22), not_null(f_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  q_56 :
  if(((ATgetType(u_56) == AT_LIST) && !(ATisEmpty(u_56))))
    {
      v_56 = ATgetFirst((ATermList) u_56);
      w_56 = (ATerm) ATgetNext((ATermList) u_56);
      t_56 :
      if(match_int(v_56, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_56)), term_a_23), term_z_22);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  f_57 = t;
  d_57 :
  if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
    {
      g_57 = ATgetFirst((ATermList) f_57);
      h_57 = (ATerm) ATgetNext((ATermList) f_57);
      e_57 :
      if(match_int(g_57, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_57)), term_z_22), term_z_22);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  l_57 :
  if(((ATgetType(n_57) == AT_LIST) && !(ATisEmpty(n_57))))
    {
      o_57 = ATgetFirst((ATermList) n_57);
      p_57 = (ATerm) ATgetNext((ATermList) n_57);
      m_57 :
      if(match_int(o_57, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_57)), term_e_23), term_z_22);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm f_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = f_23;
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm r_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm k_2 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, k_2);
      }
      LocalPopChoice(u_23);
    }
  else
    {
      t = r_23;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  w_57 :
  if(match_cons(x_57, sym__2))
    {
      y_57 = ATgetArgument(x_57, 0);
      z_57 = ATgetArgument(x_57, 1);
      {
        ATerm c_58 = NULL,e_58 = NULL;
        ATerm x_23;
        x_23 = t;
        {
          ATerm d_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_y_23), not_null(y_57));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  d_58 = t;
                  if(((c_58 != NULL) && (c_58 != d_58)))
                    _fail(d_58);
                  else
                    c_58 = d_58;
                }
              }
            }
          }
        }
        t = x_23;
        {
          ATerm f_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_z_23), not_null(y_57));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  f_58 = t;
                  if(((e_58 != NULL) && (e_58 != f_58)))
                    _fail(f_58);
                  else
                    e_58 = f_58;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_16), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(e_58))), term_c_24)))), not_null(z_57)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_16), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(c_58))), term_c_24)))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm m_58 = NULL;
  m_58 = t;
  {
    ATerm p_58 = NULL,q_58 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm l_2 (ATerm t)
      {
        t = term_h_7;
        return(t);
      }
      t = rewrite_1(t, l_2);
      {
        p_58 = t;
        k_58 :
        if(match_cons(p_58, sym_Defined_1))
          {
            q_58 = ATgetArgument(p_58, 0);
            l_58 :
            if(!(match_string(q_58, "o_0")))
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(m_58);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  {
    ATerm c_59 = NULL,d_59 = NULL;
    t = not_null(x_58);
    {
      ATerm m_2 (ATerm t)
      {
        t = term_p_7;
        return(t);
      }
      t = rewrite_1(t, m_2);
      {
        c_59 = t;
        v_58 :
        if(match_cons(c_59, sym_Defined_1))
          {
            d_59 = ATgetArgument(c_59, 0);
            w_58 :
            if(!(match_string(d_59, "r_0")))
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(x_58);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  j_59 = t;
  i_59 :
  if(match_cons(j_59, sym_SDef_3))
    {
      k_59 = ATgetArgument(j_59, 0);
      l_59 = ATgetArgument(j_59, 1);
      m_59 = ATgetArgument(j_59, 2);
      {
        ATerm q_59 = NULL,r_59 = NULL;
        ATerm s_59 = NULL;
        t = not_null(l_59);
        {
          ATerm t_59 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            s_59 = t;
            {
              if(((q_59 != NULL) && (q_59 != s_59)))
                _fail(s_59);
              else
                q_59 = s_59;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_59), not_null(m_59));
                {
                  ATerm e_24 = t;
                  int f_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm g_24 = t;
                        int m_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(m_24);
                          }
                        else
                          {
                            t = g_24;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, n_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(f_24);
                    }
                  else
                    {
                      t = e_24;
                      t = PlainBody_0(t);
                    }
                  {
                    t_59 = t;
                    if(((r_59 != NULL) && (r_59 != t_59)))
                      _fail(t_59);
                    else
                      r_59 = t_59;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_p_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_59)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(q_59)), term_o_24)))), not_null(r_59));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  a_60 :
  if(match_cons(b_60, sym__2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_60)), not_null(c_60)), (ATerm) ATinsert(ATempty, not_null(c_60)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm j_60 = NULL;
  ATerm k_60 = NULL;
  k_60 = t;
  if(((j_60 != NULL) && (j_60 != k_60)))
    _fail(k_60);
  else
    j_60 = k_60;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_23, not_null(j_60));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm c_112 (ATerm))
{
  t = explode_string_0(t);
  {
    t = c_112(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
  p_60 = t;
  o_60 :
  if(((ATgetType(p_60) == AT_LIST) && !(ATisEmpty(p_60))))
    {
      q_60 = ATgetFirst((ATermList) p_60);
      r_60 = (ATerm) ATgetNext((ATermList) p_60);
      t = not_null(q_60);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
  y_60 = t;
  v_60 :
  if(match_cons(y_60, sym__2))
    {
      z_60 = ATgetArgument(y_60, 0);
      a_61 = ATgetArgument(y_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_60), not_null(a_61));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm m_121 (ATerm))
{
  ATerm m_61 = NULL;
  ATerm o_61 = NULL;
  m_61 = t;
  {
    ATerm p_61 = NULL;
    t = term_p_24;
    {
      t = m_121(t);
      {
        p_61 = t;
        if(((o_61 != NULL) && (o_61 != p_61)))
          _fail(p_61);
        else
          o_61 = p_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_61), not_null(m_61));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  x_61 = t;
  w_61 :
  if(match_cons(x_61, sym__2))
    {
      y_61 = ATgetArgument(x_61, 0);
      z_61 = ATgetArgument(x_61, 1);
      {
        ATerm d_62 = NULL;
        ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
        t = not_null(x_61);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_q_24;
            return(t);
          }
          t = rewrite_1(t, o_2);
          {
            e_62 = t;
            u_61 :
            if(match_cons(e_62, sym_Defined_2))
              {
                f_62 = ATgetArgument(e_62, 0);
                g_62 = ATgetArgument(e_62, 1);
                v_61 :
                if(match_string(f_62, "j_0"))
                  {
                    if(((d_62 != NULL) && (d_62 != g_62)))
                      _fail(g_62);
                    else
                      d_62 = g_62;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = not_null(d_62);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
  p_62 = t;
  o_62 :
  if(match_cons(p_62, sym_OpDecl_2))
    {
      q_62 = ATgetArgument(p_62, 0);
      r_62 = ATgetArgument(p_62, 1);
      {
        ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,a_63 = NULL;
        ATerm a_25;
        a_25 = t;
        {
          ATerm x_62 = NULL;
          t = not_null(r_62);
          {
            ATerm y_62 = NULL;
            t = Arity_0(t);
            {
              x_62 = t;
              {
                if(((v_62 != NULL) && (v_62 != x_62)))
                  _fail(x_62);
                else
                  v_62 = x_62;
                {
                  ATerm z_62 = NULL;
                  t = int_to_string_0(t);
                  {
                    y_62 = t;
                    {
                      if(((u_62 != NULL) && (u_62 != y_62)))
                        _fail(y_62);
                      else
                        u_62 = y_62;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_62), not_null(v_62));
                        {
                          t = ConstructorName_0(t);
                          {
                            z_62 = t;
                            if(((w_62 != NULL) && (w_62 != z_62)))
                              _fail(z_62);
                            else
                              w_62 = z_62;
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
        t = a_25;
        {
          ATerm b_63 = NULL;
          t = not_null(q_62);
          {
            t = double_quote_0(t);
            {
              b_63 = t;
              if(((a_63 != NULL) && (a_63 != b_63)))
                _fail(b_63);
              else
                a_63 = b_63;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_62)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_62)), term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_25), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(u_62))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(a_63))))))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm k_63 = NULL;
  ATerm m_63 = NULL;
  k_63 = t;
  {
    ATerm n_63 = NULL,p_63 = NULL;
    ATerm o_63 = NULL;
    t = not_null(k_63);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          o_63 = t;
          if(((n_63 != NULL) && (n_63 != o_63)))
            _fail(o_63);
          else
            n_63 = o_63;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_63), (ATerm) ATinsert(ATempty, term_r_25));
      {
        t = conc_0(t);
        {
          p_63 = t;
          if(((m_63 != NULL) && (m_63 != p_63)))
            _fail(p_63);
          else
            m_63 = p_63;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_j_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_x_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_j_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(m_63)));
  }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_63 = NULL;
  u_63 = t;
  t = SSL_int_to_string(not_null(u_63));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  f_64 = t;
  d_64 :
  if(((ATgetType(f_64) == AT_LIST) && !(ATisEmpty(f_64))))
    {
      g_64 = ATgetFirst((ATermList) f_64);
      h_64 = (ATerm) ATgetNext((ATermList) f_64);
      e_64 :
      if(match_int(g_64, 95))
        {
          ATerm q_64 = NULL;
          ATerm w_64 = NULL;
          t = not_null(h_64);
          {
            t = q_0(t);
            {
              w_64 = t;
              if(((q_64 != NULL) && (q_64 != w_64)))
                _fail(w_64);
              else
                q_64 = w_64;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_64)), term_y_25), term_y_25);
        }
      else
        {
          if(match_int(g_64, 45))
            {
              ATerm y_64 = NULL;
              ATerm z_64 = NULL;
              t = not_null(h_64);
              {
                t = q_0(t);
                {
                  z_64 = t;
                  if(((y_64 != NULL) && (y_64 != z_64)))
                    _fail(z_64);
                  else
                    y_64 = z_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_64)), term_y_25);
            }
          else
            {
              if(match_int(g_64, 39))
                {
                  ATerm b_65 = NULL;
                  ATerm c_65 = NULL;
                  t = not_null(h_64);
                  {
                    t = q_0(t);
                    {
                      c_65 = t;
                      if(((b_65 != NULL) && (b_65 != c_65)))
                        _fail(c_65);
                      else
                        b_65 = c_65;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_65)), term_y_25), term_b_26), term_y_25);
                }
              else
                {
                  _fail(t);
                }
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm escape_1 (ATerm t, ATerm y_111 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm n_65 (ATerm t)
    {
      ATerm c_26 = t;
      int d_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_111(t, n_65);
          LocalPopChoice(d_26);
        }
      else
        {
          t = c_26;
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, n_65);
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = n_65(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm))
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_108(t);
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
        s_65 = t;
        r_65 :
        if(((ATgetType(s_65) == AT_LIST) && !(ATisEmpty(s_65))))
          {
            t_65 = ATgetFirst((ATermList) s_65);
            u_65 = (ATerm) ATgetNext((ATermList) s_65);
            {
              ATerm x_65 = NULL,z_65 = NULL;
              ATerm u_26;
              u_26 = t;
              {
                ATerm y_65 = NULL;
                t = not_null(t_65);
                {
                  t = u_108(t);
                  {
                    y_65 = t;
                    if(((x_65 != NULL) && (x_65 != y_65)))
                      _fail(y_65);
                    else
                      x_65 = y_65;
                  }
                }
              }
              t = u_26;
              {
                ATerm a_66 = NULL;
                t = not_null(u_65);
                {
                  t = foldr_3(t, s_108, t_108, u_108);
                  {
                    a_66 = t;
                    if(((z_65 != NULL) && (z_65 != a_66)))
                      _fail(a_66);
                    else
                      z_65 = a_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_65), not_null(z_65));
                  t = t_108(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_c_16;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = foldr_3(t, p_2, add_0, q_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  j_66 = t;
  h_66 :
  if(match_cons(j_66, sym_FunType_2))
    {
      k_66 = ATgetArgument(j_66, 0);
      i_66 = ATgetArgument(j_66, 1);
      {
        t = not_null(k_66);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(j_66, sym_ConstType_1))
        {
          k_66 = ATgetArgument(j_66, 0);
          t = term_c_16;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  w_66 = t;
  v_66 :
  if(match_cons(w_66, sym_OpDecl_2))
    {
      x_66 = ATgetArgument(w_66, 0);
      y_66 = ATgetArgument(w_66, 1);
      {
        ATerm g_67 = NULL,h_67 = NULL;
        ATerm i_67 = NULL;
        t = not_null(y_66);
        {
          ATerm j_67 = NULL,n_67 = NULL,p_67 = NULL;
          t = Arity_0(t);
          {
            i_67 = t;
            {
              if(((g_67 != NULL) && (g_67 != i_67)))
                _fail(i_67);
              else
                g_67 = i_67;
              {
                ATerm v_26;
                v_26 = t;
                {
                  ATerm m_67 = NULL;
                  t = not_null(x_66);
                  {
                    t = cify_0(t);
                    {
                      m_67 = t;
                      if(((j_67 != NULL) && (j_67 != m_67)))
                        _fail(m_67);
                      else
                        j_67 = m_67;
                    }
                  }
                }
                t = v_26;
                {
                  ATerm o_67 = NULL;
                  t = not_null(g_67);
                  {
                    t = int_to_string_0(t);
                    {
                      o_67 = t;
                      if(((n_67 != NULL) && (n_67 != o_67)))
                        _fail(o_67);
                      else
                        n_67 = o_67;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_67)), term_y_26), not_null(j_67)), term_x_26);
                    {
                      t = concat_strings_0(t);
                      {
                        p_67 = t;
                        {
                          if(((h_67 != NULL) && (h_67 != p_67)))
                            _fail(p_67);
                          else
                            h_67 = p_67;
                          {
                            ATerm z_26;
                            z_26 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_66), not_null(g_67)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_27, not_null(h_67)));
                              {
                                ATerm x_2 (ATerm t)
                                {
                                  t = term_q_24;
                                  return(t);
                                }
                                t = assert_1(t, x_2);
                              }
                            }
                            t = z_26;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_d_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_67)), term_q_8)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  d_68 = t;
  z_67 :
  if(match_cons(d_68, sym_Signature_1))
    {
      e_68 = ATgetArgument(d_68, 0);
      a_68 :
      if(((ATgetType(e_68) == AT_LIST) && !(ATisEmpty(e_68))))
        {
          f_68 = ATgetFirst((ATermList) e_68);
          h_68 = (ATerm) ATgetNext((ATermList) e_68);
          b_68 :
          if(match_cons(f_68, sym_Constructors_1))
            {
              g_68 = ATgetArgument(f_68, 0);
              c_68 :
              if(((ATgetType(h_68) == AT_LIST) && ATisEmpty(h_68)))
                {
                  {
                    ATerm j_68 = NULL,k_68 = NULL,u_68 = NULL;
                    ATerm e_27;
                    e_27 = t;
                    {
                      ATerm s_68 = NULL;
                      t = not_null(g_68);
                      {
                        ATerm t_68 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          s_68 = t;
                          {
                            if(((j_68 != NULL) && (j_68 != s_68)))
                              _fail(s_68);
                            else
                              j_68 = s_68;
                            {
                              t = not_null(g_68);
                              {
                                t = InitConstructors_0(t);
                                {
                                  t_68 = t;
                                  if(((k_68 != NULL) && (k_68 != t_68)))
                                    _fail(t_68);
                                  else
                                    k_68 = t_68;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = e_27;
                    {
                      ATerm v_68 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_68), (ATerm) ATinsert(ATempty, not_null(k_68)));
                      {
                        t = conc_0(t);
                        {
                          v_68 = t;
                          if(((u_68 != NULL) && (u_68 != v_68)))
                            _fail(v_68);
                          else
                            u_68 = v_68;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(u_68));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateType_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  f_69 = t;
  d_69 :
  if(match_cons(f_69, sym_FunType_2))
    {
      g_69 = ATgetArgument(f_69, 0);
      e_69 = ATgetArgument(f_69, 1);
      {
        ATerm i_69 = NULL;
        ATerm j_69 = NULL;
        t = not_null(g_69);
        {
          t = map_1(t, TranslateType_0);
          {
            j_69 = t;
            if(((i_69 != NULL) && (i_69 != j_69)))
              _fail(j_69);
            else
              i_69 = j_69;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(i_69)));
      }
    }
  else
    {
      if(match_cons(f_69, sym_ConstType_1))
        {
          g_69 = ATgetArgument(f_69, 0);
          t = term_p_8;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
  t_69 = t;
  q_69 :
  if(match_cons(t_69, sym_VarDec_2))
    {
      u_69 = ATgetArgument(t_69, 0);
      v_69 = ATgetArgument(t_69, 1);
      r_69 :
      if(match_cons(v_69, sym_FunType_2))
        {
          w_69 = ATgetArgument(v_69, 0);
          s_69 = ATgetArgument(v_69, 1);
          {
            ATerm z_69 = NULL;
            ATerm a_70 = NULL;
            t = not_null(w_69);
            {
              t = map_1(t, TranslateType_0);
              {
                a_70 = t;
                if(((z_69 != NULL) && (z_69 != a_70)))
                  _fail(a_70);
                else
                  z_69 = a_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(z_69)))));
          }
        }
      else
        {
          if(match_cons(v_69, sym_ConstType_1))
            {
              w_69 = ATgetArgument(v_69, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(u_69)), term_q_8));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefToDeclaration_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  i_70 = t;
  h_70 :
  if(match_cons(i_70, sym_SDef_3))
    {
      j_70 = ATgetArgument(i_70, 0);
      k_70 = ATgetArgument(i_70, 1);
      l_70 = ATgetArgument(i_70, 2);
      {
        ATerm p_70 = NULL;
        ATerm q_70 = NULL;
        t = not_null(k_70);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            q_70 = t;
            if(((p_70 != NULL) && (p_70 != q_70)))
              _fail(q_70);
            else
              p_70 = q_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(j_70)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(p_70)), term_p_8))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
  f_71 = t;
  z_70 :
  if(match_cons(f_71, sym_Specification_1))
    {
      g_71 = ATgetArgument(f_71, 0);
      a_71 :
      if(((ATgetType(g_71) == AT_LIST) && !(ATisEmpty(g_71))))
        {
          h_71 = ATgetFirst((ATermList) g_71);
          j_71 = (ATerm) ATgetNext((ATermList) g_71);
          b_71 :
          if(match_cons(h_71, sym_Signature_1))
            {
              i_71 = ATgetArgument(h_71, 0);
              c_71 :
              if(((ATgetType(j_71) == AT_LIST) && !(ATisEmpty(j_71))))
                {
                  k_71 = ATgetFirst((ATermList) j_71);
                  m_71 = (ATerm) ATgetNext((ATermList) j_71);
                  d_71 :
                  if(match_cons(k_71, sym_Strategies_1))
                    {
                      l_71 = ATgetArgument(k_71, 0);
                      e_71 :
                      if(((ATgetType(m_71) == AT_LIST) && ATisEmpty(m_71)))
                        {
                          {
                            ATerm p_71 = NULL,d_72 = NULL,k_72 = NULL;
                            ATerm f_27;
                            f_27 = t;
                            {
                              ATerm e_72 = NULL;
                              t = not_null(l_71);
                              {
                                ATerm j_72 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  e_72 = t;
                                  {
                                    if(((p_71 != NULL) && (p_71 != e_72)))
                                      _fail(e_72);
                                    else
                                      p_71 = e_72;
                                    {
                                      t = term_x_7;
                                      {
                                        ATerm g_27 = t;
                                        int h_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm y_2 (ATerm t)
                                              {
                                                ATerm f_72 = NULL;
                                                ATerm g_72 = NULL,i_72 = NULL;
                                                ATerm h_72 = NULL;
                                                h_72 = t;
                                                if(((g_72 != NULL) && (g_72 != h_72)))
                                                  _fail(h_72);
                                                else
                                                  g_72 = h_72;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_i_27, not_null(g_72));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      i_72 = t;
                                                      if(((f_72 != NULL) && (f_72 != i_72)))
                                                        _fail(i_72);
                                                      else
                                                        f_72 = i_72;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(f_72));
                                                return(t);
                                              }
                                              t = map_1(t, y_2);
                                            }
                                            LocalPopChoice(h_27);
                                          }
                                        else
                                          {
                                            t = g_27;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          j_72 = t;
                                          if(((d_72 != NULL) && (d_72 != j_72)))
                                            _fail(j_72);
                                          else
                                            d_72 = j_72;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = f_27;
                            {
                              ATerm v_72 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_71)), not_null(p_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_27), (ATerm) ATmakeAppl(sym_Signature_1, not_null(i_71))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_27, (ATerm) ATinsert(ATempty, term_w_27)))), not_null(d_72));
                              {
                                t = concat_0(t);
                                {
                                  v_72 = t;
                                  if(((k_72 != NULL) && (k_72 != v_72)))
                                    _fail(v_72);
                                  else
                                    k_72 = v_72;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(k_72));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_73 = NULL,p_73 = NULL,s_73 = NULL;
  h_73 = t;
  g_73 :
  if(((ATgetType(h_73) == AT_LIST) && !(ATisEmpty(h_73))))
    {
      p_73 = ATgetFirst((ATermList) h_73);
      s_73 = (ATerm) ATgetNext((ATermList) h_73);
      t = not_null(s_73);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  x_73 :
  if(match_cons(y_73, sym__2))
    {
      z_73 = ATgetArgument(y_73, 0);
      a_74 = ATgetArgument(y_73, 1);
      {
        ATerm y_27;
        y_27 = t;
        {
          ATerm d_74 = NULL;
          ATerm e_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), not_null(a_74));
          {
            ATerm b_28 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_28);
              }
            else
              {
                t = b_28;
                t = (ATerm) ATempty;
              }
            {
              e_74 = t;
              if(((d_74 != NULL) && (d_74 != e_74)))
                _fail(e_74);
              else
                d_74 = e_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_73), not_null(a_74), not_null(d_74));
            t = table_put_0(t);
          }
        }
        t = y_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm h_121 (ATerm))
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  ATerm h_28;
  h_28 = t;
  {
    ATerm o_74 = NULL;
    ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
    t = h_121(t);
    {
      o_74 = t;
      {
        if(((n_74 != NULL) && (n_74 != o_74)))
          _fail(o_74);
        else
          n_74 = o_74;
        {
          ATerm i_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), term_k_28);
              t = table_get_0(t);
              LocalPopChoice(j_28);
            }
          else
            {
              t = i_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            p_74 = t;
            k_74 :
            if(((ATgetType(p_74) == AT_LIST) && !(ATisEmpty(p_74))))
              {
                q_74 = ATgetFirst((ATermList) p_74);
                r_74 = (ATerm) ATgetNext((ATermList) p_74);
                {
                  if(((m_74 != NULL) && (m_74 != q_74)))
                    _fail(q_74);
                  else
                    m_74 = q_74;
                  {
                    if(((l_74 != NULL) && (l_74 != r_74)))
                      _fail(r_74);
                    else
                      l_74 = r_74;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(n_74), term_k_28, not_null(l_74));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(m_74);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm s_74 = NULL;
                              s_74 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), not_null(s_74));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, z_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = h_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_94(t);
      t = u_94(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        t = u_94(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_121 (ATerm))
{
  ATerm b_75 = NULL;
  ATerm n_28;
  n_28 = t;
  {
    ATerm c_75 = NULL;
    ATerm d_75 = NULL;
    t = g_121(t);
    {
      c_75 = t;
      {
        if(((b_75 != NULL) && (b_75 != c_75)))
          _fail(c_75);
        else
          b_75 = c_75;
        {
          ATerm e_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_75), term_k_28);
          {
            ATerm o_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_28);
              }
            else
              {
                t = o_28;
                t = (ATerm) ATempty;
              }
            {
              e_75 = t;
              if(((d_75 != NULL) && (d_75 != e_75)))
                _fail(e_75);
              else
                d_75 = e_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_75), term_k_28, (ATerm) ATinsert(CheckATermList(not_null(d_75)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm i_121 (ATerm), ATerm j_121 (ATerm))
{
  t = begin_scope_1(t, i_121);
  {
    ATerm a_3 (ATerm t)
    {
      t = end_scope_1(t, i_121);
      return(t);
    }
    t = restore_always_2(t, j_121, a_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_121 (ATerm))
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  l_75 :
  if(match_cons(m_75, sym__2))
    {
      n_75 = ATgetArgument(m_75, 0);
      o_75 = ATgetArgument(m_75, 1);
      {
        ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
        ATerm q_28;
        q_28 = t;
        {
          ATerm u_75 = NULL;
          ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
          t = k_121(t);
          {
            u_75 = t;
            {
              if(((r_75 != NULL) && (r_75 != u_75)))
                _fail(u_75);
              else
                r_75 = u_75;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_75), not_null(n_75), not_null(o_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_28 = t;
                    int s_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_75), term_k_28);
                        t = table_get_0(t);
                        LocalPopChoice(s_28);
                      }
                    else
                      {
                        t = r_28;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_75 = t;
                      k_75 :
                      if(((ATgetType(v_75) == AT_LIST) && !(ATisEmpty(v_75))))
                        {
                          w_75 = ATgetFirst((ATermList) v_75);
                          x_75 = (ATerm) ATgetNext((ATermList) v_75);
                          {
                            if(((s_75 != NULL) && (s_75 != w_75)))
                              _fail(w_75);
                            else
                              s_75 = w_75;
                            {
                              if(((t_75 != NULL) && (t_75 != x_75)))
                                _fail(x_75);
                              else
                                t_75 = x_75;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_75), term_k_28, (ATerm) ATinsert(CheckATermList(not_null(t_75)), (ATerm) ATinsert(CheckATermList(not_null(s_75)), not_null(n_75))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = q_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_term_caching_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL;
  ATerm t_28;
  t_28 = t;
  {
    ATerm f_76 = NULL;
    ATerm g_76 = NULL;
    t = term_v_28;
    {
      f_76 = t;
      {
        if(((d_76 != NULL) && (d_76 != f_76)))
          _fail(f_76);
        else
          d_76 = f_76;
        {
          t = term_x_15;
          {
            g_76 = t;
            if(((e_76 != NULL) && (e_76 != g_76)))
              _fail(g_76);
            else
              e_76 = g_76;
          }
        }
      }
    }
  }
  t = t_28;
  {
    ATerm w_28;
    w_28 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_76), (ATerm) ATmakeAppl(sym_Defined_2, term_a_29, not_null(e_76)));
      {
        ATerm b_3 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = assert_1(t, b_3);
      }
    }
    t = w_28;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm m_76 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = term_c_14;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm b_29 = t;
          int f_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(f_29);
            }
          else
            {
              t = b_29;
              {
                ATerm i_29 = t;
                int j_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(j_29);
                  }
                else
                  {
                    t = i_29;
                    {
                      ATerm k_29 = t;
                      int l_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(l_29);
                        }
                      else
                        {
                          t = k_29;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, e_3);
        {
          t = _all(t, m_76);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, c_3, d_3);
      return(t);
    }
    t = m_76(t);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          ATerm l_76 = NULL;
          l_76 = t;
          k_76 :
          if(match_cons(l_76, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, g_3);
        return(t);
      }
      t = try_1(t, f_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_76 = NULL;
  ATerm m_29;
  m_29 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm r_76 = NULL,s_76 = NULL;
      r_76 = t;
      p_76 :
      if(match_cons(r_76, sym_Program_1))
        {
          s_76 = ATgetArgument(r_76, 0);
          if(((q_76 != NULL) && (q_76 != s_76)))
            _fail(s_76);
          else
            q_76 = s_76;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_29), not_null(q_76)), term_o_29));
      {
        t = printnl_0(t);
        {
          t = term_i_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_29;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
  w_76 = t;
  v_76 :
  if(match_cons(w_76, sym__2))
    {
      x_76 = ATgetArgument(w_76, 0);
      y_76 = ATgetArgument(w_76, 1);
      {
        ATerm q_29;
        q_29 = t;
        t = SSL_printnl(not_null(x_76), not_null(y_76));
        t = q_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_77 = NULL;
  d_77 = t;
  t = SSL_implode_string(not_null(d_77));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm i_77 = NULL,l_77 = NULL,m_77 = NULL;
        i_77 = t;
        h_77 :
        if(((ATgetType(i_77) == AT_LIST) && !(ATisEmpty(i_77))))
          {
            l_77 = ATgetFirst((ATermList) i_77);
            m_77 = (ATerm) ATgetNext((ATermList) i_77);
            {
              t = not_null(l_77);
              {
                ATerm i_3 (ATerm t)
                {
                  t = not_null(m_77);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_3);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm w_77 = NULL;
  ATerm y_77 = NULL;
  w_77 = t;
  {
    ATerm z_77 = NULL;
    ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
    t = not_null(w_77);
    {
      z_77 = t;
      {
        t = SSL_explode_term(not_null(z_77));
        {
          b_78 = t;
          u_77 :
          if(match_cons(b_78, sym__2))
            {
              c_78 = ATgetArgument(b_78, 0);
              d_78 = ATgetArgument(b_78, 1);
              v_77 :
              if(match_string(c_78, ""))
                {
                  if(((y_77 != NULL) && (y_77 != d_78)))
                    _fail(d_78);
                  else
                    y_77 = d_78;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_77);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_102 (ATerm))
{
  ATerm h_78 (ATerm t)
  {
    ATerm x_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_78);
        LocalPopChoice(b_30);
      }
    else
      {
        t = x_29;
        {
          t = Nil_0(t);
          t = r_102(t);
        }
      }
    return(t);
  }
  t = h_78(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
  k_78 = t;
  j_78 :
  if(match_cons(k_78, sym__2))
    {
      l_78 = ATgetArgument(k_78, 0);
      m_78 = ATgetArgument(k_78, 1);
      {
        t = not_null(l_78);
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(m_78);
            return(t);
          }
          t = at_end_1(t, j_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = d_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_78 = NULL;
  r_78 = t;
  t = SSL_explode_string(not_null(r_78));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_78 = NULL;
  v_78 = t;
  t = SSL_is_string(not_null(v_78));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_3);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            {
              ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
              e_79 = t;
              d_79 :
              if(match_cons(e_79, sym_Path_1))
                {
                  f_79 = ATgetArgument(e_79, 0);
                  t = not_null(f_79);
                }
              else
                {
                  if(match_cons(e_79, sym_Var_1))
                    {
                      f_79 = ATgetArgument(e_79, 0);
                      {
                        t = not_null(f_79);
                        {
                          ATerm l_30 = t;
                          int m_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_30);
                            }
                          else
                            {
                              t = l_30;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = term_n_30;
                                  return(t);
                                }
                                t = debug_1(t, l_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_79, sym_Prefix_2))
                        {
                          f_79 = ATgetArgument(e_79, 0);
                          g_79 = ATgetArgument(e_79, 1);
                          {
                            ATerm l_79 = NULL,n_79 = NULL;
                            ATerm y_30;
                            y_30 = t;
                            {
                              ATerm m_79 = NULL;
                              t = not_null(f_79);
                              {
                                t = eval_config_0(t);
                                {
                                  m_79 = t;
                                  if(((l_79 != NULL) && (l_79 != m_79)))
                                    _fail(m_79);
                                  else
                                    l_79 = m_79;
                                }
                              }
                            }
                            t = y_30;
                            {
                              ATerm o_79 = NULL;
                              t = not_null(g_79);
                              {
                                t = eval_config_0(t);
                                {
                                  o_79 = t;
                                  if(((n_79 != NULL) && (n_79 != o_79)))
                                    _fail(o_79);
                                  else
                                    n_79 = o_79;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_79), not_null(n_79));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm w_79 = NULL;
  w_79 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_6, not_null(w_79));
    {
      t = table_get_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_31;
            m_31 = t;
            {
              ATerm y_79 = NULL;
              ATerm z_79 = NULL;
              z_79 = t;
              if(((y_79 != NULL) && (y_79 != z_79)))
                _fail(z_79);
              else
                y_79 = z_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_6, not_null(w_79), not_null(y_79));
                t = table_put_0(t);
              }
            }
            t = m_31;
          }
          return(t);
        }
        t = try_1(t, m_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_115 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm n_31;
    n_31 = t;
    {
      ATerm d_80 = NULL;
      ATerm f_80 = NULL;
      t = term_y_31;
      {
        t = get_config_0(t);
        {
          f_80 = t;
          if(((d_80 != NULL) && (d_80 != f_80)))
            _fail(f_80);
          else
            d_80 = f_80;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_80), term_c_32);
        t = geq_0(t);
      }
    }
    t = n_31;
    t = a_115(t);
    return(t);
  }
  t = try_1(t, n_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym__2))
    {
      k_80 = ATgetArgument(j_80, 0);
      l_80 = ATgetArgument(j_80, 1);
      t = SSL_WriteToTextFile(not_null(k_80), not_null(l_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
  v_80 = t;
  u_80 :
  if(match_cons(v_80, sym__2))
    {
      w_80 = ATgetArgument(v_80, 0);
      x_80 = ATgetArgument(v_80, 1);
      {
        ATerm b_81 = NULL,d_81 = NULL;
        ATerm c_81 = NULL;
        t = SSLgetAnnotations(not_null(v_80));
        {
          c_81 = t;
          if(((b_81 != NULL) && (b_81 != c_81)))
            _fail(c_81);
          else
            b_81 = c_81;
        }
        {
          t = not_null(w_80);
          {
            ATerm f_81 = NULL;
            t = q_73(t);
            {
              d_81 = t;
              {
                t = not_null(x_80);
                {
                  ATerm h_81 = NULL;
                  t = r_73(t);
                  {
                    f_81 = t;
                    {
                      ATerm i_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_81), not_null(f_81)), not_null(b_81));
                      {
                        i_81 = t;
                        if(((h_81 != NULL) && (h_81 != i_81)))
                          _fail(i_81);
                        else
                          h_81 = i_81;
                      }
                      t = not_null(h_81);
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
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL;
  q_81 = t;
  p_81 :
  if(match_cons(q_81, sym__2))
    {
      r_81 = ATgetArgument(q_81, 0);
      s_81 = ATgetArgument(q_81, 1);
      t = SSL_WriteToBinaryFile(not_null(r_81), not_null(s_81));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_82 = NULL;
  ATerm d_32;
  d_32 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm e_32 = t;
      int f_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm d_82 = NULL,e_82 = NULL;
            d_82 = t;
            z_81 :
            if(match_cons(d_82, sym_Output_1))
              {
                e_82 = ATgetArgument(d_82, 0);
                if(((c_82 != NULL) && (c_82 != e_82)))
                  _fail(e_82);
                else
                  c_82 = e_82;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          LocalPopChoice(f_32);
        }
      else
        {
          t = e_32;
          {
            ATerm f_82 = NULL;
            t = term_g_32;
            {
              f_82 = t;
              if(((c_82 != NULL) && (c_82 != f_82)))
                _fail(f_82);
              else
                c_82 = f_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = d_32;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(c_82);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm h_32 = t;
      int i_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm g_82 = NULL;
              g_82 = t;
              b_82 :
              if(!(match_cons(g_82, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          LocalPopChoice(i_32);
        }
      else
        {
          t = h_32;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm v_113 (ATerm))
{
  ATerm m_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
  ATerm j_32;
  j_32 = t;
  t = dtime_0(t);
  t = j_32;
  {
    t = v_113(t);
    {
      ATerm k_32;
      k_32 = t;
      {
        ATerm n_82 = NULL;
        t = dtime_0(t);
        {
          n_82 = t;
          if(((m_82 != NULL) && (m_82 != n_82)))
            _fail(n_82);
          else
            m_82 = n_82;
        }
      }
      t = k_32;
      {
        o_82 = t;
        l_82 :
        if(match_cons(o_82, sym__2))
          {
            p_82 = ATgetArgument(o_82, 0);
            q_82 = ATgetArgument(o_82, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_82)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_82))), not_null(q_82));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_112 (ATerm))
{
  ATerm l_32;
  l_32 = t;
  {
    ATerm x_82 = NULL,z_82 = NULL;
    ATerm m_32;
    m_32 = t;
    {
      ATerm y_82 = NULL;
      t = r_112(t);
      {
        y_82 = t;
        if(((x_82 != NULL) && (x_82 != y_82)))
          _fail(y_82);
        else
          x_82 = y_82;
      }
    }
    t = m_32;
    {
      ATerm a_83 = NULL;
      a_83 = t;
      if(((z_82 != NULL) && (z_82 != a_83)))
        _fail(a_83);
      else
        z_82 = a_83;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_82)), not_null(x_82)));
        t = printnl_0(t);
      }
    }
  }
  t = l_32;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_83 = NULL;
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_83 = NULL;
      f_83 = t;
      {
        if(((e_83 != NULL) && (e_83 != f_83)))
          _fail(f_83);
        else
          e_83 = f_83;
        t = SSL_ReadFromFile(not_null(e_83));
      }
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      {
        ATerm u_3 (ATerm t)
        {
          t = term_p_32;
          return(t);
        }
        t = debug_1(t, u_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_110 (ATerm), ATerm g_110 (ATerm))
{
  ATerm j_83 = NULL,l_83 = NULL;
  ATerm q_32;
  q_32 = t;
  {
    ATerm k_83 = NULL;
    t = f_110(t);
    {
      k_83 = t;
      if(((j_83 != NULL) && (j_83 != k_83)))
        _fail(k_83);
      else
        j_83 = k_83;
    }
  }
  t = q_32;
  {
    ATerm m_83 = NULL;
    t = g_110(t);
    {
      m_83 = t;
      if(((l_83 != NULL) && (l_83 != m_83)))
        _fail(m_83);
      else
        l_83 = m_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_83), not_null(l_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_83 = NULL;
  ATerm r_32;
  r_32 = t;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          ATerm t_83 = NULL,u_83 = NULL;
          t_83 = t;
          q_83 :
          if(match_cons(t_83, sym_Input_1))
            {
              u_83 = ATgetArgument(t_83, 0);
              if(((s_83 != NULL) && (s_83 != u_83)))
                _fail(u_83);
              else
                s_83 = u_83;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_3);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        {
          ATerm v_83 = NULL;
          t = term_u_32;
          {
            v_83 = t;
            if(((s_83 != NULL) && (s_83 != v_83)))
              _fail(v_83);
            else
              s_83 = v_83;
          }
        }
      }
  }
  t = r_32;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(s_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm z_83 = NULL;
    z_83 = t;
    y_83 :
    if(!(match_string(z_83, "-v")))
      {
        if(!(match_string(z_83, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_w_32;
    t = set_config_0(t);
    t = term_x_32;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_y_32;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm c_84 = NULL;
    c_84 = t;
    a_84 :
    if(!(match_string(c_84, "-k")))
      {
        if(!(match_string(c_84, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm z_32;
    z_32 = t;
    {
      ATerm e_84 = NULL;
      ATerm f_84 = NULL;
      t = string_to_int_0(t);
      {
        f_84 = t;
        if(((e_84 != NULL) && (e_84 != f_84)))
          _fail(f_84);
        else
          e_84 = f_84;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_33, not_null(e_84));
        t = set_config_0(t);
      }
    }
    t = z_32;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_b_33;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  t = SSL_string_to_int(not_null(i_84));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm q_84 = NULL;
        q_84 = t;
        l_84 :
        if(!(match_string(q_84, "-S")))
          {
            if(!(match_string(q_84, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_e_33;
        t = set_config_0(t);
        t = term_f_33;
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_g_33;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm r_84 = NULL;
              r_84 = t;
              m_84 :
              if(!(match_string(r_84, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              ATerm u_84 = NULL;
              ATerm j_33;
              j_33 = t;
              {
                ATerm s_84 = NULL;
                ATerm t_84 = NULL;
                t = string_to_int_0(t);
                {
                  t_84 = t;
                  if(((s_84 != NULL) && (s_84 != t_84)))
                    _fail(t_84);
                  else
                    s_84 = t_84;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_31, not_null(s_84));
                  t = set_config_0(t);
                }
              }
              t = j_33;
              {
                ATerm v_84 = NULL;
                v_84 = t;
                if(((u_84 != NULL) && (u_84 != v_84)))
                  _fail(v_84);
                else
                  u_84 = v_84;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_84));
              }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_k_33;
              return(t);
            }
            t = ArgOption_3(t, g_4, h_4, i_4);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm j_4 (ATerm t)
              {
                ATerm w_84 = NULL;
                w_84 = t;
                p_84 :
                if(!(match_string(w_84, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_4 (ATerm t)
              {
                t = term_m_33;
                t = set_config_0(t);
                t = term_n_33;
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = term_o_33;
                return(t);
              }
              t = Option_3(t, j_4, k_4, l_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm r_33 = t;
        int s_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_33);
          }
        else
          {
            t = r_33;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm c_85 = NULL;
    c_85 = t;
    z_84 :
    if(!(match_string(c_85, "-o")))
      {
        if(!(match_string(c_85, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm f_85 = NULL;
    ATerm t_33;
    t_33 = t;
    {
      ATerm d_85 = NULL;
      ATerm e_85 = NULL;
      e_85 = t;
      if(((d_85 != NULL) && (d_85 != e_85)))
        _fail(e_85);
      else
        d_85 = e_85;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_33, not_null(d_85));
        t = set_config_0(t);
      }
    }
    t = t_33;
    {
      ATerm g_85 = NULL;
      g_85 = t;
      if(((f_85 != NULL) && (f_85 != g_85)))
        _fail(g_85);
      else
        f_85 = g_85;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_85));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  t = ArgOption_3(t, m_4, n_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm p_4 (ATerm t)
        {
          ATerm k_85 = NULL;
          k_85 = t;
          j_85 :
          if(!(match_string(k_85, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_c_34;
          t = set_config_0(t);
          t = term_d_34;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_e_34;
          return(t);
        }
        t = Option_3(t, p_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  q_85 = t;
  o_85 :
  if(match_string(q_85, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(q_85) == AT_LIST) && !(ATisEmpty(q_85))))
        {
          r_85 = ATgetFirst((ATermList) q_85);
          s_85 = (ATerm) ATgetNext((ATermList) q_85);
          p_85 :
          if(((ATgetType(s_85) == AT_LIST) && !(ATisEmpty(s_85))))
            {
              t_85 = ATgetFirst((ATermList) s_85);
              u_85 = (ATerm) ATgetNext((ATermList) s_85);
              {
                ATerm y_85 = NULL;
                ATerm f_34;
                f_34 = t;
                {
                  t = not_null(r_85);
                  t = m_0(t);
                }
                t = f_34;
                {
                  ATerm z_85 = NULL;
                  t = not_null(t_85);
                  {
                    t = n_0(t);
                    {
                      z_85 = t;
                      if(((y_85 != NULL) && (y_85 != z_85)))
                        _fail(z_85);
                      else
                        y_85 = z_85;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_85)), not_null(y_85));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm g_86 = NULL;
    g_86 = t;
    d_86 :
    if(!(match_string(g_86, "-i")))
      {
        if(!(match_string(g_86, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm j_86 = NULL;
    ATerm g_34;
    g_34 = t;
    {
      ATerm h_86 = NULL;
      ATerm i_86 = NULL;
      i_86 = t;
      if(((h_86 != NULL) && (h_86 != i_86)))
        _fail(i_86);
      else
        h_86 = i_86;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_34, not_null(h_86));
        t = set_config_0(t);
      }
    }
    t = g_34;
    {
      ATerm k_86 = NULL;
      k_86 = t;
      if(((j_86 != NULL) && (j_86 != k_86)))
        _fail(k_86);
      else
        j_86 = k_86;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_86));
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_i_34;
    return(t);
  }
  t = ArgOption_3(t, s_4, w_4, x_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(l_34);
    }
  else
    {
      t = j_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATempty, term_o_34));
  {
    t = printnl_0(t);
    {
      t = term_i_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_86 = NULL;
  o_86 = t;
  t = SSL_TicksToSeconds(not_null(o_86));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  s_86 :
  if(match_cons(t_86, sym__2))
    {
      u_86 = ATgetArgument(t_86, 0);
      v_86 = ATgetArgument(t_86, 1);
      {
        ATerm q_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_86), not_null(v_86));
            LocalPopChoice(s_34);
          }
        else
          {
            t = q_34;
            t = SSL_addr(not_null(u_86), not_null(v_86));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_108 (ATerm), ATerm r_108 (ATerm))
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_108(t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      {
        ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
        c_87 = t;
        b_87 :
        if(((ATgetType(c_87) == AT_LIST) && !(ATisEmpty(c_87))))
          {
            d_87 = ATgetFirst((ATermList) c_87);
            e_87 = (ATerm) ATgetNext((ATermList) c_87);
            {
              ATerm j_87 = NULL;
              ATerm k_87 = NULL;
              t = not_null(e_87);
              {
                t = foldr_2(t, q_108, r_108);
                {
                  k_87 = t;
                  if(((j_87 != NULL) && (j_87 != k_87)))
                    _fail(k_87);
                  else
                    j_87 = k_87;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_87), not_null(j_87));
                t = r_108(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm o_107 (ATerm), ATerm p_107 (ATerm))
{
  ATerm r_87 = NULL;
  ATerm t_87 = NULL;
  r_87 = t;
  {
    ATerm u_87 = NULL;
    ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
    t = not_null(r_87);
    {
      u_87 = t;
      {
        t = SSL_explode_term(not_null(u_87));
        {
          w_87 = t;
          q_87 :
          if(match_cons(w_87, sym__2))
            {
              x_87 = ATgetArgument(w_87, 0);
              y_87 = ATgetArgument(w_87, 1);
              if(((t_87 != NULL) && (t_87 != y_87)))
                _fail(y_87);
              else
                t_87 = y_87;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_87);
      t = foldr_2(t, o_107, p_107);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm y_4 (ATerm t)
    {
      t = term_c_16;
      return(t);
    }
    t = crush_2(t, y_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
  e_88 = t;
  d_88 :
  if(match_cons(e_88, sym__2))
    {
      f_88 = ATgetArgument(e_88, 0);
      g_88 = ATgetArgument(e_88, 1);
      {
        ATerm v_34;
        v_34 = t;
        {
          ATerm w_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_88), not_null(g_88));
              LocalPopChoice(y_34);
            }
          else
            {
              t = w_34;
              t = SSL_gtr(not_null(f_88), not_null(g_88));
            }
        }
        t = v_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm m_88 = NULL;
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
      n_88 = t;
      l_88 :
      if(match_cons(n_88, sym__2))
        {
          o_88 = ATgetArgument(n_88, 0);
          p_88 = ATgetArgument(n_88, 1);
          {
            if(((m_88 != NULL) && (m_88 != o_88)))
              _fail(o_88);
            else
              m_88 = o_88;
            if(((m_88 != NULL) && (m_88 != p_88)))
              _fail(p_88);
            else
              m_88 = p_88;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_114 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm b_35;
    b_35 = t;
    {
      ATerm s_88 = NULL;
      ATerm t_88 = NULL;
      t = term_y_31;
      {
        t = get_config_0(t);
        {
          t_88 = t;
          if(((s_88 != NULL) && (s_88 != t_88)))
            _fail(t_88);
          else
            s_88 = t_88;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_88), term_i_16);
        t = geq_0(t);
      }
    }
    t = b_35;
    t = z_114(t);
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm x_88 = NULL,z_88 = NULL;
    ATerm c_35;
    c_35 = t;
    {
      ATerm y_88 = NULL;
      t = run_time_0(t);
      {
        y_88 = t;
        if(((x_88 != NULL) && (x_88 != y_88)))
          _fail(y_88);
        else
          x_88 = y_88;
      }
    }
    t = c_35;
    {
      ATerm a_89 = NULL;
      t = term_d_35;
      {
        t = get_config_0(t);
        {
          a_89 = t;
          if(((z_88 != NULL) && (z_88 != a_89)))
            _fail(a_89);
          else
            z_88 = a_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_35), not_null(x_88)), term_e_35), not_null(z_88)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_5);
  {
    t = term_c_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_89 = NULL;
  h_89 = t;
  g_89 :
  if(match_cons(h_89, sym_Version_0))
    {
      ATerm j_89 = NULL,l_89 = NULL;
      ATerm g_35;
      g_35 = t;
      {
        ATerm k_89 = NULL;
        t = SSLgetAnnotations(not_null(h_89));
        {
          k_89 = t;
          if(((j_89 != NULL) && (j_89 != k_89)))
            _fail(k_89);
          else
            j_89 = k_89;
        }
      }
      t = g_35;
      {
        ATerm m_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_89));
        {
          m_89 = t;
          if(((l_89 != NULL) && (l_89 != m_89)))
            _fail(m_89);
          else
            l_89 = m_89;
        }
        t = not_null(l_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_113 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_5);
  t = t_113(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  t = SSL_table_create(not_null(r_89));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_89 = NULL;
  v_89 = t;
  {
    ATerm l_35;
    l_35 = t;
    {
      t = term_m_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_35, term_n_35, not_null(v_89));
          t = table_put_0(t);
        }
      }
    }
    t = l_35;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  t = SSL_table_destroy(not_null(z_89));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_90 = NULL;
  ATerm o_90 (ATerm t)
  {
    t = SSL_exit(not_null(h_90));
    return(t);
  }
  ATerm p_90 (ATerm t)
  {
    ATerm k_90 = NULL,m_90 = NULL;
    ATerm q_35;
    q_35 = t;
    {
      ATerm l_90 = NULL;
      t = SSLgetAnnotations(not_null(h_90));
      {
        l_90 = t;
        if(((k_90 != NULL) && (k_90 != l_90)))
          _fail(l_90);
        else
          k_90 = l_90;
      }
    }
    t = q_35;
    {
      ATerm n_90 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(k_90));
      {
        n_90 = t;
        if(((m_90 != NULL) && (m_90 != n_90)))
          _fail(n_90);
        else
          m_90 = n_90;
      }
      t = not_null(m_90);
    }
    return(t);
  }
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym_exit_0))
    {
      ATerm r_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_90(t);
          LocalPopChoice(s_35);
        }
      else
        {
          t = r_35;
          t = p_90(t);
        }
    }
  else
    {
      t = o_90(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  s_90 :
  if(((ATgetType(t_90) == AT_LIST) && ATisEmpty(t_90)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_90) == AT_LIST) && !(ATisEmpty(t_90))))
        {
          u_90 = ATgetFirst((ATermList) t_90);
          v_90 = (ATerm) ATgetNext((ATermList) t_90);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm t_35;
  t_35 = t;
  {
    ATerm y_90 = NULL;
    ATerm b_91 = NULL;
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        {
          ATerm z_90 = NULL;
          ATerm a_91 = NULL;
          a_91 = t;
          if(((z_90 != NULL) && (z_90 != a_91)))
            _fail(a_91);
          else
            z_90 = a_91;
          t = (ATerm) ATinsert(ATempty, not_null(z_90));
        }
      }
    {
      b_91 = t;
      if(((y_90 != NULL) && (y_90 != b_91)))
        _fail(b_91);
      else
        y_90 = b_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_32, not_null(y_90));
      t = printnl_0(t);
    }
  }
  t = t_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_117 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm e_91 (ATerm t)
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = Cons_2(t, c_102, e_91);
      }
    return(t);
  }
  t = e_91(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
  n_91 = t;
  k_91 :
  if(((ATgetType(n_91) == AT_LIST) && !(ATisEmpty(n_91))))
    {
      l_91 = ATgetFirst((ATermList) n_91);
      m_91 = (ATerm) ATgetNext((ATermList) n_91);
      {
        ATerm q_91 = NULL;
        t = not_null(m_91);
        {
          ATerm y_35;
          y_35 = t;
          {
            ATerm r_91 = NULL,t_91 = NULL,v_91 = NULL;
            ATerm z_35;
            z_35 = t;
            {
              ATerm s_91 = NULL;
              t = k_0(t);
              {
                s_91 = t;
                if(((r_91 != NULL) && (r_91 != s_91)))
                  _fail(s_91);
                else
                  r_91 = s_91;
              }
            }
            t = z_35;
            {
              ATerm u_91 = NULL;
              t = not_null(l_91);
              {
                t = i_0(t);
                {
                  u_91 = t;
                  if(((t_91 != NULL) && (t_91 != u_91)))
                    _fail(u_91);
                  else
                    t_91 = u_91;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_91)), not_null(t_91));
                {
                  v_91 = t;
                  if(((q_91 != NULL) && (q_91 != v_91)))
                    _fail(v_91);
                  else
                    q_91 = v_91;
                }
              }
            }
          }
          t = y_35;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(q_91);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_91) == AT_LIST) && ATisEmpty(n_91)))
        {
          {
            t = term_p_24;
            t = k_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_117 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm g_92 = NULL,h_92 = NULL;
  g_92 = t;
  f_92 :
  if(match_cons(g_92, sym_Program_1))
    {
      h_92 = ATgetArgument(g_92, 0);
      {
        ATerm k_92 = NULL,m_92 = NULL;
        ATerm l_92 = NULL;
        t = SSLgetAnnotations(not_null(g_92));
        {
          l_92 = t;
          if(((k_92 != NULL) && (k_92 != l_92)))
            _fail(l_92);
          else
            k_92 = l_92;
        }
        {
          t = not_null(h_92);
          {
            ATerm o_92 = NULL;
            t = t_81(t);
            {
              m_92 = t;
              {
                ATerm p_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_92)), not_null(k_92));
                {
                  p_92 = t;
                  if(((o_92 != NULL) && (o_92 != p_92)))
                    _fail(p_92);
                  else
                    o_92 = p_92;
                }
                t = not_null(o_92);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm y_92 = NULL;
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_92 = NULL;
      t = term_d_35;
      {
        t = get_config_0(t);
        {
          z_92 = t;
          if(((y_92 != NULL) && (y_92 != z_92)))
            _fail(z_92);
          else
            y_92 = z_92;
        }
      }
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm a_93 = NULL;
            a_93 = t;
            if(((y_92 != NULL) && (y_92 != a_93)))
              _fail(a_93);
            else
              y_92 = a_93;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        t = not_null(y_92);
        return(t);
      }
      t = short_description_1(t, h_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = term_c_36;
      {
        t = echo_0(t);
        {
          t = term_f_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm b_93 = NULL;
                  ATerm c_93 = NULL;
                  c_93 = t;
                  if(((b_93 != NULL) && (b_93 != c_93)))
                    _fail(c_93);
                  else
                    b_93 = c_93;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_93)), term_g_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm k_5 (ATerm t)
                  {
                    ATerm d_93 = NULL;
                    ATerm e_93 = NULL;
                    ATerm l_5 (ATerm t)
                    {
                      t = not_null(y_92);
                      return(t);
                    }
                    t = long_description_1(t, l_5);
                    {
                      e_93 = t;
                      if(((d_93 != NULL) && (d_93 != e_93)))
                        _fail(e_93);
                      else
                        d_93 = e_93;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_93)), term_h_36);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm i_36;
  i_36 = t;
  {
    ATerm k_93 = NULL;
    ATerm l_93 = NULL;
    l_93 = t;
    if(((k_93 != NULL) && (k_93 != l_93)))
      _fail(l_93);
    else
      k_93 = l_93;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATempty, not_null(k_93)));
      t = printnl_0(t);
    }
  }
  t = i_36;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm j_36;
  j_36 = t;
  {
    t = s_112(t);
    t = debug_0(t);
  }
  t = j_36;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm s_93 = NULL,t_93 = NULL;
  s_93 = t;
  r_93 :
  if(match_cons(s_93, sym_Undefined_1))
    {
      t_93 = ATgetArgument(s_93, 0);
      {
        ATerm w_93 = NULL,y_93 = NULL;
        ATerm x_93 = NULL;
        t = SSLgetAnnotations(not_null(s_93));
        {
          x_93 = t;
          if(((w_93 != NULL) && (w_93 != x_93)))
            _fail(x_93);
          else
            w_93 = x_93;
        }
        {
          t = not_null(t_93);
          {
            ATerm a_94 = NULL;
            t = u_81(t);
            {
              y_93 = t;
              {
                ATerm b_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_93)), not_null(w_93));
                {
                  b_94 = t;
                  if(((a_94 != NULL) && (a_94 != b_94)))
                    _fail(b_94);
                  else
                    a_94 = b_94;
                }
                t = not_null(a_94);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_102 (ATerm))
{
  ATerm j_94 (ATerm t)
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_102, _id);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = Cons_2(t, _id, j_94);
      }
    return(t);
  }
  t = j_94(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_116 (ATerm))
{
  t = fetch_1(t, c_116);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  n_94 :
  if(match_cons(o_94, sym_Help_0))
    {
      ATerm q_94 = NULL,s_94 = NULL;
      ATerm m_36;
      m_36 = t;
      {
        ATerm r_94 = NULL;
        t = SSLgetAnnotations(not_null(o_94));
        {
          r_94 = t;
          if(((q_94 != NULL) && (q_94 != r_94)))
            _fail(r_94);
          else
            q_94 = r_94;
        }
      }
      t = m_36;
      {
        ATerm v_94 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_94));
        {
          v_94 = t;
          if(((s_94 != NULL) && (s_94 != v_94)))
            _fail(v_94);
          else
            s_94 = v_94;
        }
        t = not_null(s_94);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_94(t);
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
  d_95 = t;
  c_95 :
  if(match_cons(d_95, sym__2))
    {
      e_95 = ATgetArgument(d_95, 0);
      f_95 = ATgetArgument(d_95, 1);
      t = SSL_table_get(not_null(e_95), not_null(f_95));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  m_95 = t;
  l_95 :
  if(match_cons(m_95, sym__3))
    {
      n_95 = ATgetArgument(m_95, 0);
      o_95 = ATgetArgument(m_95, 1);
      p_95 = ATgetArgument(m_95, 2);
      {
        ATerm p_36;
        p_36 = t;
        {
          ATerm t_95 = NULL;
          ATerm u_95 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_95), not_null(o_95));
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
                t = (ATerm) ATempty;
              }
            {
              u_95 = t;
              if(((t_95 != NULL) && (t_95 != u_95)))
                _fail(u_95);
              else
                t_95 = u_95;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_95), not_null(o_95), (ATerm) ATinsert(CheckATermList(not_null(t_95)), not_null(p_95)));
            t = table_put_0(t);
          }
        }
        t = p_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_117 (ATerm))
{
  ATerm a_96 = NULL;
  ATerm b_96 = NULL;
  t = term_p_24;
  {
    t = h_117(t);
    {
      b_96 = t;
      if(((a_96 != NULL) && (a_96 != b_96)))
        _fail(b_96);
      else
        a_96 = b_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_36, term_e_36, not_null(a_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL;
  h_96 = t;
  g_96 :
  if(match_string(h_96, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_96) == AT_LIST) && !(ATisEmpty(h_96))))
        {
          i_96 = ATgetFirst((ATermList) h_96);
          j_96 = (ATerm) ATgetNext((ATermList) h_96);
          {
            ATerm m_96 = NULL;
            ATerm s_36;
            s_36 = t;
            {
              t = not_null(i_96);
              t = a_0(t);
            }
            t = s_36;
            {
              ATerm n_96 = NULL;
              t = term_p_24;
              {
                t = d_0(t);
                {
                  n_96 = t;
                  if(((m_96 != NULL) && (m_96 != n_96)))
                    _fail(n_96);
                  else
                    m_96 = n_96;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_96)), not_null(m_96));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm s_96 = NULL;
    s_96 = t;
    r_96 :
    if(!(match_string(s_96, "--help")))
      {
        if(!(match_string(s_96, "-h")))
          {
            if(!(match_string(s_96, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_u_36;
    {
      t = set_config_0(t);
      t = term_v_36;
    }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_w_36;
    return(t);
  }
  t = Option_3(t, m_5, n_5, o_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL;
  v_96 = t;
  u_96 :
  if(((ATgetType(v_96) == AT_LIST) && !(ATisEmpty(v_96))))
    {
      w_96 = ATgetFirst((ATermList) v_96);
      x_96 = (ATerm) ATgetNext((ATermList) v_96);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_96)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_96)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm))
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL;
  h_97 = t;
  g_97 :
  if(((ATgetType(h_97) == AT_LIST) && !(ATisEmpty(h_97))))
    {
      i_97 = ATgetFirst((ATermList) h_97);
      j_97 = (ATerm) ATgetNext((ATermList) h_97);
      {
        ATerm n_97 = NULL,r_97 = NULL;
        ATerm q_97 = NULL;
        t = SSLgetAnnotations(not_null(h_97));
        {
          q_97 = t;
          if(((n_97 != NULL) && (n_97 != q_97)))
            _fail(q_97);
          else
            n_97 = q_97;
        }
        {
          t = not_null(i_97);
          {
            ATerm t_97 = NULL;
            t = z_74(t);
            {
              r_97 = t;
              {
                t = not_null(j_97);
                {
                  ATerm v_97 = NULL;
                  t = a_75(t);
                  {
                    t_97 = t;
                    {
                      ATerm w_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_97)), not_null(r_97)), not_null(n_97));
                      {
                        w_97 = t;
                        if(((v_97 != NULL) && (v_97 != w_97)))
                          _fail(w_97);
                        else
                          v_97 = w_97;
                      }
                      t = not_null(v_97);
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
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_98 = NULL;
  g_98 = t;
  f_98 :
  if(((ATgetType(g_98) == AT_LIST) && ATisEmpty(g_98)))
    {
      {
        ATerm i_98 = NULL,k_98 = NULL;
        ATerm x_36;
        x_36 = t;
        {
          ATerm j_98 = NULL;
          t = SSLgetAnnotations(not_null(g_98));
          {
            j_98 = t;
            if(((i_98 != NULL) && (i_98 != j_98)))
              _fail(j_98);
            else
              i_98 = j_98;
          }
        }
        t = x_36;
        {
          ATerm l_98 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_98));
          {
            l_98 = t;
            if(((k_98 != NULL) && (k_98 != l_98)))
              _fail(l_98);
            else
              k_98 = l_98;
          }
          t = not_null(k_98);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
  r_98 = t;
  q_98 :
  if(match_cons(r_98, sym__2))
    {
      s_98 = ATgetArgument(r_98, 0);
      t_98 = ATgetArgument(r_98, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_6, not_null(s_98), not_null(t_98));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_117 (ATerm))
{
  ATerm y_36;
  y_36 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_z_36;
      t = f_117(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = y_36;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm b_99 = NULL;
      ATerm a_37;
      a_37 = t;
      {
        ATerm z_98 = NULL;
        ATerm a_99 = NULL;
        a_99 = t;
        if(((z_98 != NULL) && (z_98 != a_99)))
          _fail(a_99);
        else
          z_98 = a_99;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_35, not_null(z_98));
          t = set_config_0(t);
        }
      }
      t = a_37;
      {
        ATerm c_99 = NULL;
        c_99 = t;
        if(((b_99 != NULL) && (b_99 != c_99)))
          _fail(c_99);
        else
          b_99 = c_99;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_99));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm b_37 = t;
      int c_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_37 = t;
          int e_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_37);
            }
          else
            {
              t = d_37;
              {
                t = f_117(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(c_37);
        }
      else
        {
          t = b_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL;
  ATerm f_37;
  f_37 = t;
  {
    ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL;
    l_99 = t;
    h_99 :
    if(match_cons(l_99, sym__3))
      {
        m_99 = ATgetArgument(l_99, 0);
        n_99 = ATgetArgument(l_99, 1);
        o_99 = ATgetArgument(l_99, 2);
        {
          if(((i_99 != NULL) && (i_99 != m_99)))
            _fail(m_99);
          else
            i_99 = m_99;
          {
            if(((j_99 != NULL) && (j_99 != n_99)))
              _fail(n_99);
            else
              j_99 = n_99;
            {
              if(((k_99 != NULL) && (k_99 != o_99)))
                _fail(o_99);
              else
                k_99 = o_99;
              t = SSL_table_put(not_null(i_99), not_null(j_99), not_null(k_99));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_117 (ATerm))
{
  ATerm r_99 = NULL;
  ATerm g_37;
  g_37 = t;
  {
    t = term_h_37;
    t = table_put_0(t);
  }
  t = g_37;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_117(t);
          LocalPopChoice(j_37);
        }
      else
        {
          t = i_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_37;
            m_37 = t;
            {
              ATerm n_37 = t;
              int o_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_36;
                  t = get_config_0(t);
                  LocalPopChoice(o_37);
                }
              else
                {
                  t = n_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_37;
            {
              t = system_usage_0(t);
              {
                t = term_c_16;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm s_99 = NULL;
                  s_99 = t;
                  if(((r_99 != NULL) && (r_99 != s_99)))
                    _fail(s_99);
                  else
                    r_99 = s_99;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_99)), term_p_37);
                  return(t);
                }
                t = say_1(t, z_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_5);
      {
        ATerm q_37;
        q_37 = t;
        {
          t = term_d_36;
          t = table_destroy_0(t);
        }
        t = q_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm))
{
  t = parse_options_1(t, z_113);
  {
    t = store_options_0(t);
    {
      t = b_114(t);
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_114);
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            {
              ATerm t_37 = t;
              int u_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_114(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_37);
                }
              else
                {
                  t = t_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_114(t);
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_114);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, a_6, s_114, t_114, b_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      ATerm x_37;
      x_37 = t;
      {
        ATerm v_99 = NULL;
        ATerm w_99 = NULL;
        t = term_d_35;
        {
          t = get_config_0(t);
          {
            w_99 = t;
            if(((v_99 != NULL) && (v_99 != w_99)))
              _fail(w_99);
            else
              v_99 = w_99;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATinsert(ATempty, not_null(v_99)));
          t = printnl_0(t);
        }
      }
      t = x_37;
      return(t);
    }
    t = if_verbose2_1(t, e_6);
    return(t);
  }
  t = iowrap_4(t, k_114, l_114, m_114, d_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_114 (ATerm), ATerm j_114 (ATerm))
{
  t = iowrap_3(t, i_114, j_114, default_usage_0);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  t = iowrap_2(t, compile_0, s2c_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = s2c_0(t);
  return(t);
}
