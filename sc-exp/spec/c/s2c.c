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
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_OctConst_1;
Symbol sym_StringLit_1;
Symbol sym_PpIf_4;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_TranslationUnit_1;
Symbol sym_FunDef_3;
Symbol sym_NoTypeSpecifier_0;
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
Symbol sym_Address_1;
Symbol sym_Deref_1;
Symbol sym_Positive_1;
Symbol sym_Negative_1;
Symbol sym_Tilde_1;
Symbol sym_Negation_1;
Symbol sym_SizeofExp_1;
Symbol sym_SizeofType_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
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
Symbol sym_TypeName_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDecl2_2;
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
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
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
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
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
  sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
  ATprotectSymbol(sym_SizeofExp_1);
  sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
  ATprotectSymbol(sym_SizeofType_1);
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
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDecl2_2 = ATmakeSymbol("ParamDecl2", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl2_2);
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
ATerm term_s_37;
ATerm term_k_37;
ATerm term_c_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_l_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_c_32;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_p_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
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
ATerm term_m_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
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
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_a_15;
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
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_m_10;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_t_6;
ATerm term_s_6;
void init_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_f_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Id_1, term_g_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_8, (ATerm) ATempty);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Id_1, term_l_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_8, (ATerm) ATempty);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_p_8, term_q_8);
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
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Id_1, term_b_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Id_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Id_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, term_w_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Id_1, term_e_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Id_1, term_r_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Id_1, term_w_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Id_1, term_a_17);
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
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_v_17, (ATerm) ATempty);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_w_17, term_q_8);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_18, (ATerm) ATempty);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_18, term_q_8);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_1, term_i_14);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Id_1, term_s_18);
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
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_a_19, term_q_8);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Id_1, term_i_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_s_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_y_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Id_1, term_c_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_b_17);
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
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_l_20, (ATerm) ATempty);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Stat_1, term_q_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, term_b_17);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Id_1, term_e_21);
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
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Id_1, term_n_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_r_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Id_1, term_x_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_d_22, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_f_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_o_18);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Return_1, term_b_17);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Id_1, term_l_24);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_b_17, term_q_8);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, term_k_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Id_1, term_u_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Id_1, term_y_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_8, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_a_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Id_1, term_f_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, term_q_8);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_y_27);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_28, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Some_1, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_m_8, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Op_2, term_h_29, (ATerm) ATempty);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_m_25);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_c_16);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_16);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_m_25);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_m_25);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_g_36, term_h_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_w_36, term_m_25);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__3, term_g_36, term_h_36, (ATerm) ATempty);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm r_115 (ATerm), ATerm s_115 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm c_97 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm a_95 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm f_80 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_2 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm u_0 (ATerm), ATerm z_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm p_108 (ATerm));
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm h_84 (ATerm));
ATerm FunCall_2 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm l_111 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_120 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm h_111 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm r_120 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm q_120 (ATerm));
ATerm scope_2 (ATerm, ATerm s_120 (ATerm), ATerm t_120 (ATerm));
ATerm assert_1 (ATerm, ATerm u_120 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_102 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_114 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm r_73 (ATerm), ATerm s_73 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_113 (ATerm));
ATerm debug_1 (ATerm, ATerm a_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_109 (ATerm), ATerm p_109 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_107 (ATerm), ATerm a_108 (ATerm));
ATerm crush_2 (ATerm, ATerm x_106 (ATerm), ATerm y_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_114 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_113 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_116 (ATerm));
ATerm map_1 (ATerm, ATerm p_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_116 (ATerm));
ATerm Program_1 (ATerm, ATerm u_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_112 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_115 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_94 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_116 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_116 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_116 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_113 (ATerm), ATerm t_113 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,q_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      q_5 = ATgetArgument(e_5, 1);
      {
        ATerm w_5 = NULL;
        ATerm x_5 = NULL,z_5 = NULL;
        ATerm y_5 = NULL;
        t = not_null(f_5);
        {
          ATerm i_6 = t;
          int m_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(m_6);
            }
          else
            {
              t = i_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(q_5));
          {
            t = conc_0(t);
            {
              z_5 = t;
              if(((w_5 != NULL) && (w_5 != z_5)))
                _fail(z_5);
              else
                w_5 = z_5;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_6, not_null(f_5), not_null(w_5));
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
ATerm Option_2 (ATerm t, ATerm r_115 (ATerm), ATerm s_115 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  t = Option_3(t, r_115, s_115, e_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        ATerm j_6 = NULL;
        j_6 = t;
        d_6 :
        if(!(match_string(j_6, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        t = term_b_7;
        {
          ATerm t_0 (ATerm t)
          {
            t = term_c_7;
            return(t);
          }
          t = debug_1(t, t_0);
          {
            ATerm d_7;
            d_7 = t;
            {
              t = term_g_7;
              {
                ATerm v_0 (ATerm t)
                {
                  t = term_i_7;
                  return(t);
                }
                t = assert_1(t, v_0);
              }
            }
            t = d_7;
          }
        }
        return(t);
      }
      t = Option_2(t, q_0, r_0);
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              ATerm k_6 = NULL;
              k_6 = t;
              e_6 :
              if(!(match_string(k_6, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              ATerm l_6 = NULL;
              l_6 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_t_7);
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_u_7;
                    return(t);
                  }
                  t = assert_1(t, a_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(l_6));
              }
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              t = term_v_7;
              return(t);
            }
            t = ArgOption_3(t, w_0, x_0, y_0);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm n_6 = NULL;
                n_6 = t;
                g_6 :
                if(!(match_string(n_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                ATerm q_6 = NULL;
                ATerm w_7;
                w_7 = t;
                {
                  ATerm o_6 = NULL;
                  ATerm p_6 = NULL;
                  p_6 = t;
                  if(((o_6 != NULL) && (o_6 != p_6)))
                    _fail(p_6);
                  else
                    o_6 = p_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, not_null(o_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = w_7;
                {
                  ATerm r_6 = NULL;
                  r_6 = t;
                  if(((q_6 != NULL) && (q_6 != r_6)))
                    _fail(r_6);
                  else
                    q_6 = r_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(q_6));
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
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym__3))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      a_7 = ATgetArgument(x_6, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_6))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_6)), term_z_7, not_null(a_7))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm h_7 = NULL;
  ATerm j_7 = NULL;
  h_7 = t;
  {
    ATerm k_7 = NULL;
    t = not_null(h_7);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            k_7 = t;
            if(((j_7 != NULL) && (j_7 != k_7)))
              _fail(k_7);
            else
              j_7 = k_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_k_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_m_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_k_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_7)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym__3))
    {
      q_7 = ATgetArgument(p_7, 0);
      r_7 = ATgetArgument(p_7, 1);
      s_7 = ATgetArgument(p_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_7)), term_q_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm a_8 = NULL;
  ATerm r_8 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = r_8;
      t = (ATerm) ATempty;
    }
  {
    ATerm b_8 = NULL,d_8 = NULL,f_8 = NULL;
    ATerm c_10;
    c_10 = t;
    {
      ATerm c_8 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        c_8 = t;
        if(((b_8 != NULL) && (b_8 != c_8)))
          _fail(c_8);
        else
          b_8 = c_8;
      }
    }
    t = c_10;
    {
      ATerm e_8 = NULL;
      t = InitTermIds_0(t);
      {
        e_8 = t;
        if(((d_8 != NULL) && (d_8 != e_8)))
          _fail(e_8);
        else
          d_8 = e_8;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), (ATerm) ATinsert(ATempty, not_null(d_8)));
        {
          t = conc_0(t);
          {
            f_8 = t;
            if(((a_8 != NULL) && (a_8 != f_8)))
              _fail(f_8);
            else
              a_8 = f_8;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(a_8));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm c_97 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_97(t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = _one(t, j_8);
      }
    return(t);
  }
  t = j_8(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL;
  ATerm u_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(v_9)), not_null(p_9));
    return(t);
  }
  ATerm v_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(v_9), not_null(w_9));
    return(t);
  }
  ATerm w_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_9), not_null(w_9));
    t = conc_0(t);
    return(t);
  }
  ATerm x_10 (ATerm t)
  {
    ATerm k_10 = NULL;
    ATerm l_10 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(y_9));
    {
      t = conc_0(t);
      {
        l_10 = t;
        if(((k_10 != NULL) && (k_10 != l_10)))
          _fail(l_10);
        else
          k_10 = l_10;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(k_10), not_null(z_9));
    return(t);
  }
  ATerm y_10 (ATerm t)
  {
    ATerm q_10 = NULL,s_10 = NULL;
    ATerm f_10;
    f_10 = t;
    {
      ATerm r_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(y_9));
      {
        t = conc_0(t);
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
      }
    }
    t = f_10;
    {
      ATerm t_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(a_10));
      {
        t = conc_0(t);
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(q_10), not_null(s_10));
    }
    return(t);
  }
  u_9 = t;
  s_8 :
  if(match_cons(u_9, sym_IfElse_3))
    {
      v_9 = ATgetArgument(u_9, 0);
      w_9 = ATgetArgument(u_9, 1);
      p_9 = ATgetArgument(u_9, 2);
      t_8 :
      if(match_cons(p_9, sym_Compound_2))
        {
          q_9 = ATgetArgument(p_9, 0);
          r_9 = ATgetArgument(p_9, 1);
          u_8 :
          if(((ATgetType(r_9) == AT_LIST) && ATisEmpty(r_9)))
            {
              v_8 :
              if(((ATgetType(q_9) == AT_LIST) && ATisEmpty(q_9)))
                {
                  w_8 :
                  if(match_cons(w_9, sym_Compound_2))
                    {
                      x_9 = ATgetArgument(w_9, 0);
                      a_10 = ATgetArgument(w_9, 1);
                      x_8 :
                      if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                        {
                          y_8 :
                          if(((ATgetType(x_9) == AT_LIST) && ATisEmpty(x_9)))
                            {
                              {
                                ATerm g_10 = t;
                                int h_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = u_10(t);
                                    ;
                                    LocalPopChoice(h_10);
                                  }
                                else
                                  {
                                    t = g_10;
                                    t = v_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = v_10(t);
                            }
                        }
                      else
                        {
                          z_8 :
                          t = v_10(t);
                        }
                    }
                  else
                    {
                      t = v_10(t);
                    }
                }
              else
                {
                  a_9 :
                  if(match_cons(w_9, sym_Compound_2))
                    {
                      x_9 = ATgetArgument(w_9, 0);
                      a_10 = ATgetArgument(w_9, 1);
                      b_9 :
                      if(((ATgetType(x_9) == AT_LIST) && ATisEmpty(x_9)))
                        {
                          c_9 :
                          if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                            {
                              t = u_10(t);
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
              d_9 :
              e_9 :
              if(match_cons(w_9, sym_Compound_2))
                {
                  x_9 = ATgetArgument(w_9, 0);
                  a_10 = ATgetArgument(w_9, 1);
                  f_9 :
                  if(((ATgetType(x_9) == AT_LIST) && ATisEmpty(x_9)))
                    {
                      g_9 :
                      if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                        {
                          t = u_10(t);
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
          h_9 :
          if(match_cons(w_9, sym_Compound_2))
            {
              x_9 = ATgetArgument(w_9, 0);
              a_10 = ATgetArgument(w_9, 1);
              i_9 :
              if(((ATgetType(x_9) == AT_LIST) && ATisEmpty(x_9)))
                {
                  j_9 :
                  if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                    {
                      t = u_10(t);
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
      if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
        {
          v_9 = ATgetFirst((ATermList) u_9);
          w_9 = (ATerm) ATgetNext((ATermList) u_9);
          k_9 :
          if(match_cons(v_9, sym_Compound_2))
            {
              s_9 = ATgetArgument(v_9, 0);
              t_9 = ATgetArgument(v_9, 1);
              l_9 :
              if(((ATgetType(s_9) == AT_LIST) && ATisEmpty(s_9)))
                {
                  t = w_10(t);
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
          if(match_cons(u_9, sym_Compound_2))
            {
              v_9 = ATgetArgument(u_9, 0);
              w_9 = ATgetArgument(u_9, 1);
              m_9 :
              if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
                {
                  x_9 = ATgetFirst((ATermList) w_9);
                  a_10 = (ATerm) ATgetNext((ATermList) w_9);
                  n_9 :
                  if(match_cons(x_9, sym_Compound_2))
                    {
                      y_9 = ATgetArgument(x_9, 0);
                      z_9 = ATgetArgument(x_9, 1);
                      o_9 :
                      if(((ATgetType(a_10) == AT_LIST) && ATisEmpty(a_10)))
                        {
                          {
                            ATerm i_10 = t;
                            int j_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_10(t);
                                ;
                                LocalPopChoice(j_10);
                              }
                            else
                              {
                                t = i_10;
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
  ATerm c_11 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = a_95(t);
      t = c_11(t);
      return(t);
    }
    t = try_1(t, e_1);
    return(t);
  }
  t = c_11(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  k_11 = t;
  {
    ATerm p_11 = NULL;
    ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
    t = not_null(k_11);
    {
      p_11 = t;
      {
        t = SSL_explode_term(not_null(p_11));
        {
          r_11 = t;
          g_11 :
          if(match_cons(r_11, sym__2))
            {
              s_11 = ATgetArgument(r_11, 0);
              t_11 = ATgetArgument(r_11, 1);
              h_11 :
              if(match_string(s_11, ""))
                {
                  i_11 :
                  if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
                    {
                      u_11 = ATgetFirst((ATermList) t_11);
                      v_11 = (ATerm) ATgetNext((ATermList) t_11);
                      j_11 :
                      if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
                        {
                          w_11 = ATgetFirst((ATermList) v_11);
                          x_11 = (ATerm) ATgetNext((ATermList) v_11);
                          {
                            if(((m_11 != NULL) && (m_11 != u_11)))
                              _fail(u_11);
                            else
                              m_11 = u_11;
                            {
                              if(((o_11 != NULL) && (o_11 != w_11)))
                                _fail(w_11);
                              else
                                o_11 = w_11;
                              if(((n_11 != NULL) && (n_11 != x_11)))
                                _fail(x_11);
                              else
                                n_11 = x_11;
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
    t = not_null(o_11);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm f_12 = NULL;
  ATerm h_12 = NULL;
  f_12 = t;
  {
    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm f_1 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      t = rewrite_1(t, f_1);
      {
        i_12 = t;
        d_12 :
        if(match_cons(i_12, sym_Defined_2))
          {
            j_12 = ATgetArgument(i_12, 0);
            k_12 = ATgetArgument(i_12, 1);
            e_12 :
            if(match_string(j_12, "h_0"))
              {
                if(((h_12 != NULL) && (h_12 != k_12)))
                  _fail(k_12);
                else
                  h_12 = k_12;
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
    t = not_null(h_12);
  }
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_BuildDefault_1))
    {
      t_12 = ATgetArgument(s_12, 0);
      {
        ATerm w_12 = NULL,y_12 = NULL;
        ATerm x_12 = NULL;
        t = SSLgetAnnotations(not_null(s_12));
        {
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
        }
        {
          t = not_null(t_12);
          {
            ATerm a_13 = NULL;
            t = f_80(t);
            {
              y_12 = t;
              {
                ATerm b_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(y_12)), not_null(w_12));
                {
                  b_13 = t;
                  if(((a_13 != NULL) && (a_13 != b_13)))
                    _fail(b_13);
                  else
                    a_13 = b_13;
                }
                t = not_null(a_13);
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
ATerm Real_1 (ATerm t, ATerm v_2 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_Real_1))
    {
      q_13 = ATgetArgument(p_13, 0);
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_13 = NULL,v_13 = NULL;
            ATerm u_13 = NULL;
            t = SSLgetAnnotations(not_null(p_13));
            {
              u_13 = t;
              if(((t_13 != NULL) && (t_13 != u_13)))
                _fail(u_13);
              else
                t_13 = u_13;
            }
            {
              t = not_null(q_13);
              {
                ATerm x_13 = NULL;
                t = v_2(t);
                {
                  v_13 = t;
                  {
                    ATerm y_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(v_13)), not_null(t_13));
                    {
                      y_13 = t;
                      if(((x_13 != NULL) && (x_13 != y_13)))
                        _fail(y_13);
                      else
                        x_13 = y_13;
                    }
                    t = not_null(x_13);
                  }
                }
              }
            }
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm b_14 = NULL,d_14 = NULL;
              ATerm c_14 = NULL;
              t = SSLgetAnnotations(not_null(p_13));
              {
                c_14 = t;
                if(((b_14 != NULL) && (b_14 != c_14)))
                  _fail(c_14);
                else
                  b_14 = c_14;
              }
              {
                t = not_null(q_13);
                {
                  ATerm f_14 = NULL;
                  t = v_2(t);
                  {
                    d_14 = t;
                    {
                      ATerm g_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(d_14)), not_null(b_14));
                      {
                        g_14 = t;
                        if(((f_14 != NULL) && (f_14 != g_14)))
                          _fail(g_14);
                        else
                          f_14 = g_14;
                      }
                      t = not_null(f_14);
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
ATerm Str_1 (ATerm t, ATerm u_2 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_Str_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        ATerm p_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_15 = NULL,e_15 = NULL;
            ATerm d_15 = NULL;
            t = SSLgetAnnotations(not_null(y_14));
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
            {
              t = not_null(z_14);
              {
                ATerm g_15 = NULL;
                t = u_2(t);
                {
                  e_15 = t;
                  {
                    ATerm h_15 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(e_15)), not_null(c_15));
                    {
                      h_15 = t;
                      if(((g_15 != NULL) && (g_15 != h_15)))
                        _fail(h_15);
                      else
                        g_15 = h_15;
                    }
                    t = not_null(g_15);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = p_10;
            {
              ATerm k_15 = NULL,m_15 = NULL;
              ATerm l_15 = NULL;
              t = SSLgetAnnotations(not_null(y_14));
              {
                l_15 = t;
                if(((k_15 != NULL) && (k_15 != l_15)))
                  _fail(l_15);
                else
                  k_15 = l_15;
              }
              {
                t = not_null(z_14);
                {
                  ATerm o_15 = NULL;
                  t = u_2(t);
                  {
                    m_15 = t;
                    {
                      ATerm p_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(m_15)), not_null(k_15));
                      {
                        p_15 = t;
                        if(((o_15 != NULL) && (o_15 != p_15)))
                          _fail(p_15);
                        else
                          o_15 = p_15;
                      }
                      t = not_null(o_15);
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
ATerm Int_1 (ATerm t, ATerm t_2 (ATerm))
{
  ATerm h_16 = NULL,i_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym_Int_1))
    {
      i_16 = ATgetArgument(h_16, 0);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_16 = NULL,n_16 = NULL;
            ATerm m_16 = NULL;
            t = SSLgetAnnotations(not_null(h_16));
            {
              m_16 = t;
              if(((l_16 != NULL) && (l_16 != m_16)))
                _fail(m_16);
              else
                l_16 = m_16;
            }
            {
              t = not_null(i_16);
              {
                ATerm p_16 = NULL;
                t = t_2(t);
                {
                  n_16 = t;
                  {
                    ATerm q_16 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(n_16)), not_null(l_16));
                    {
                      q_16 = t;
                      if(((p_16 != NULL) && (p_16 != q_16)))
                        _fail(q_16);
                      else
                        p_16 = q_16;
                    }
                    t = not_null(p_16);
                  }
                }
              }
            }
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm t_16 = NULL,v_16 = NULL;
              ATerm u_16 = NULL;
              t = SSLgetAnnotations(not_null(h_16));
              {
                u_16 = t;
                if(((t_16 != NULL) && (t_16 != u_16)))
                  _fail(u_16);
                else
                  t_16 = u_16;
              }
              {
                t = not_null(i_16);
                {
                  ATerm x_16 = NULL;
                  t = t_2(t);
                  {
                    v_16 = t;
                    {
                      ATerm y_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(v_16)), not_null(t_16));
                      {
                        y_16 = t;
                        if(((x_16 != NULL) && (x_16 != y_16)))
                          _fail(y_16);
                        else
                          x_16 = y_16;
                      }
                      t = not_null(x_16);
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
ATerm Anno_2 (ATerm t, ATerm r_2 (ATerm), ATerm s_2 (ATerm))
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_Anno_2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_17 = NULL,a_18 = NULL;
            ATerm z_17 = NULL;
            t = SSLgetAnnotations(not_null(s_17));
            {
              z_17 = t;
              if(((y_17 != NULL) && (y_17 != z_17)))
                _fail(z_17);
              else
                y_17 = z_17;
            }
            {
              t = not_null(t_17);
              {
                ATerm c_18 = NULL;
                t = r_2(t);
                {
                  a_18 = t;
                  {
                    t = not_null(u_17);
                    {
                      ATerm e_18 = NULL;
                      t = s_2(t);
                      {
                        c_18 = t;
                        {
                          ATerm f_18 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(a_18), not_null(c_18)), not_null(y_17));
                          {
                            f_18 = t;
                            if(((e_18 != NULL) && (e_18 != f_18)))
                              _fail(f_18);
                            else
                              e_18 = f_18;
                          }
                          t = not_null(e_18);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm j_18 = NULL,l_18 = NULL;
              ATerm k_18 = NULL;
              t = SSLgetAnnotations(not_null(s_17));
              {
                k_18 = t;
                if(((j_18 != NULL) && (j_18 != k_18)))
                  _fail(k_18);
                else
                  j_18 = k_18;
              }
              {
                t = not_null(t_17);
                {
                  ATerm n_18 = NULL;
                  t = r_2(t);
                  {
                    l_18 = t;
                    {
                      t = not_null(u_17);
                      {
                        ATerm p_18 = NULL;
                        t = s_2(t);
                        {
                          n_18 = t;
                          {
                            ATerm q_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(l_18), not_null(n_18)), not_null(j_18));
                            {
                              q_18 = t;
                              if(((p_18 != NULL) && (p_18 != q_18)))
                                _fail(q_18);
                              else
                                p_18 = q_18;
                            }
                            t = not_null(p_18);
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
  ATerm f_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm e_19 = NULL;
        e_19 = t;
        b_19 :
        if(!(match_string(e_19, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, g_1, Nil_0);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = f_11;
      {
        ATerm q_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm f_19 = NULL;
              f_19 = t;
              c_19 :
              if(!(match_string(f_19, "Cons")))
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
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = q_11;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm z_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_19 = NULL;
                    g_19 = t;
                    d_19 :
                    if(!(match_string(g_19, "Nil")))
                      {
                        if(!(match_string(g_19, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_11;
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
ATerm Op_2 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Op_2))
    {
      o_19 = ATgetArgument(n_19, 0);
      p_19 = ATgetArgument(n_19, 1);
      {
        ATerm t_19 = NULL,v_19 = NULL;
        ATerm u_19 = NULL;
        t = SSLgetAnnotations(not_null(n_19));
        {
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
        }
        {
          t = not_null(o_19);
          {
            ATerm x_19 = NULL;
            t = k_77(t);
            {
              v_19 = t;
              {
                t = not_null(p_19);
                {
                  ATerm z_19 = NULL;
                  t = l_77(t);
                  {
                    x_19 = t;
                    {
                      ATerm a_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_19), not_null(x_19)), not_null(t_19));
                      {
                        a_20 = t;
                        if(((z_19 != NULL) && (z_19 != a_20)))
                          _fail(a_20);
                        else
                          z_19 = a_20;
                      }
                      t = not_null(z_19);
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
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      {
        ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
        ATerm v_20 = NULL;
        t = not_null(o_20);
        {
          ATerm a_12 = t;
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
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              {
                ATerm c_12 = t;
                int g_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    ;
                    LocalPopChoice(g_12);
                  }
                else
                  {
                    t = c_12;
                    {
                      ATerm l_12 = t;
                      int m_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          ;
                          LocalPopChoice(m_12);
                        }
                      else
                        {
                          t = l_12;
                          {
                            ATerm n_12 = t;
                            int o_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Str_1(t, _id);
                                ;
                                LocalPopChoice(o_12);
                              }
                            else
                              {
                                t = n_12;
                                {
                                  ATerm p_12 = t;
                                  int q_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      ;
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
            ATerm w_20 = NULL,y_20 = NULL;
            t = new_0(t);
            {
              v_20 = t;
              {
                if(((s_20 != NULL) && (s_20 != v_20)))
                  _fail(v_20);
                else
                  s_20 = v_20;
                {
                  ATerm x_20 = NULL;
                  x_20 = t;
                  if(((w_20 != NULL) && (w_20 != x_20)))
                    _fail(x_20);
                  else
                    w_20 = x_20;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(w_20));
                    {
                      ATerm z_20 = NULL,b_21 = NULL;
                      t = conc_strings_0(t);
                      {
                        y_20 = t;
                        {
                          if(((t_20 != NULL) && (t_20 != y_20)))
                            _fail(y_20);
                          else
                            t_20 = y_20;
                          {
                            ATerm v_12;
                            v_12 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, not_null(t_20)));
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_c_13;
                                  return(t);
                                }
                                t = assert_1(t, m_1);
                              }
                            }
                            t = v_12;
                            {
                              ATerm a_21 = NULL;
                              ATerm d_13 = t;
                              int e_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(e_13);
                                }
                              else
                                {
                                  t = d_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                a_21 = t;
                                if(((z_20 != NULL) && (z_20 != a_21)))
                                  _fail(a_21);
                                else
                                  z_20 = a_21;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(z_20)), (ATerm) ATmakeAppl(sym__3, not_null(s_20), not_null(t_20), not_null(p_20)));
                                {
                                  b_21 = t;
                                  {
                                    if(((u_20 != NULL) && (u_20 != b_21)))
                                      _fail(b_21);
                                    else
                                      u_20 = b_21;
                                    {
                                      ATerm f_13;
                                      f_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, not_null(u_20)));
                                        {
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = term_m_10;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(t_20));
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
  ATerm q_21 = NULL;
  q_21 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL;
        ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
        t = not_null(q_21);
        {
          ATerm o_1 (ATerm t)
          {
            t = term_c_13;
            return(t);
          }
          t = rewrite_1(t, o_1);
          {
            u_21 = t;
            l_21 :
            if(match_cons(u_21, sym_Defined_2))
              {
                v_21 = ATgetArgument(u_21, 0);
                w_21 = ATgetArgument(u_21, 1);
                m_21 :
                if(match_string(v_21, "f_0"))
                  {
                    if(((t_21 != NULL) && (t_21 != w_21)))
                      _fail(w_21);
                    else
                      t_21 = w_21;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(t_21));
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm z_21 = NULL;
          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
          t = not_null(q_21);
          {
            ATerm p_1 (ATerm t)
            {
              t = term_c_13;
              return(t);
            }
            t = rewrite_1(t, p_1);
            {
              a_22 = t;
              o_21 :
              if(match_cons(a_22, sym_Defined_2))
                {
                  b_22 = ATgetArgument(a_22, 0);
                  c_22 = ATgetArgument(a_22, 1);
                  p_21 :
                  if(match_string(b_22, "b_0"))
                    {
                      if(((z_21 != NULL) && (z_21 != c_22)))
                        _fail(c_22);
                      else
                        z_21 = c_22;
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
          t = not_null(z_21);
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
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm j_22 = NULL,l_22 = NULL;
        ATerm l_13;
        l_13 = t;
        {
          ATerm k_22 = NULL;
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
        t = l_13;
        {
          ATerm m_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm q_1 (ATerm t)
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
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
              m_22 = t;
              if(((l_22 != NULL) && (l_22 != m_22)))
                _fail(m_22);
              else
                l_22 = m_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), not_null(l_22));
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  ;
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
                  t = Snd_0(t);
                }
            }
          }
        }
      }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_2 (ATerm))
{
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym_Var_1))
    {
      a_23 = ATgetArgument(z_22, 0);
      {
        ATerm w_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_23 = NULL,f_23 = NULL;
            ATerm e_23 = NULL;
            t = SSLgetAnnotations(not_null(z_22));
            {
              e_23 = t;
              if(((d_23 != NULL) && (d_23 != e_23)))
                _fail(e_23);
              else
                d_23 = e_23;
            }
            {
              t = not_null(a_23);
              {
                ATerm h_23 = NULL;
                t = q_2(t);
                {
                  f_23 = t;
                  {
                    ATerm i_23 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_23)), not_null(d_23));
                    {
                      i_23 = t;
                      if(((h_23 != NULL) && (h_23 != i_23)))
                        _fail(i_23);
                      else
                        h_23 = i_23;
                    }
                    t = not_null(h_23);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = w_13;
            {
              ATerm l_23 = NULL,n_23 = NULL;
              ATerm m_23 = NULL;
              t = SSLgetAnnotations(not_null(z_22));
              {
                m_23 = t;
                if(((l_23 != NULL) && (l_23 != m_23)))
                  _fail(m_23);
                else
                  l_23 = m_23;
              }
              {
                t = not_null(a_23);
                {
                  ATerm p_23 = NULL;
                  t = q_2(t);
                  {
                    n_23 = t;
                    {
                      ATerm q_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_23)), not_null(l_23));
                      {
                        q_23 = t;
                        if(((p_23 != NULL) && (p_23 != q_23)))
                          _fail(q_23);
                        else
                          p_23 = q_23;
                      }
                      t = not_null(p_23);
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
  ATerm a_24 = NULL;
  a_24 = t;
  t = SSL_real_to_string(not_null(a_24));
  return(t);
}
ATerm Nil_T_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  e_24 :
  if(match_cons(g_24, sym__2))
    {
      h_24 = ATgetArgument(g_24, 0);
      i_24 = ATgetArgument(g_24, 1);
      f_24 :
      if(((ATgetType(h_24) == AT_LIST) && ATisEmpty(h_24)))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_24));
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
ATerm Cons_T_2 (ATerm t, ATerm u_0 (ATerm), ATerm z_0 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  s_24 = t;
  q_24 :
  if(match_cons(s_24, sym__2))
    {
      t_24 = ATgetArgument(s_24, 0);
      w_24 = ATgetArgument(s_24, 1);
      r_24 :
      if(((ATgetType(t_24) == AT_LIST) && !(ATisEmpty(t_24))))
        {
          u_24 = ATgetFirst((ATermList) t_24);
          v_24 = (ATerm) ATgetNext((ATermList) t_24);
          {
            ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
            ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), not_null(w_24));
            {
              t = u_0(t);
              {
                e_25 = t;
                p_24 :
                if(match_cons(e_25, sym__2))
                  {
                    f_25 = ATgetArgument(e_25, 0);
                    g_25 = ATgetArgument(e_25, 1);
                    {
                      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
                      if(((c_25 != NULL) && (c_25 != f_25)))
                        _fail(f_25);
                      else
                        c_25 = f_25;
                      {
                        if(((a_25 != NULL) && (a_25 != g_25)))
                          _fail(g_25);
                        else
                          a_25 = g_25;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), not_null(a_25));
                          {
                            t = z_0(t);
                            {
                              h_25 = t;
                              o_24 :
                              if(match_cons(h_25, sym__2))
                                {
                                  i_25 = ATgetArgument(h_25, 0);
                                  j_25 = ATgetArgument(h_25, 1);
                                  {
                                    if(((d_25 != NULL) && (d_25 != i_25)))
                                      _fail(i_25);
                                    else
                                      d_25 = i_25;
                                    if(((b_25 != NULL) && (b_25 != j_25)))
                                      _fail(j_25);
                                    else
                                      b_25 = j_25;
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_25)), not_null(c_25)), not_null(b_25));
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
ATerm thread_map_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm n_25 (ATerm t)
  {
    ATerm a_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, p_108, n_25);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = a_14;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = n_25(t);
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym__2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      {
        ATerm w_25 = NULL;
        ATerm x_25 = NULL;
        t = new_0(t);
        {
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_25)), term_q_8), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(t_25))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_25)))));
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
  ATerm d_26 = NULL;
  d_26 = t;
  {
    ATerm g_26 = NULL,h_26 = NULL;
    t = not_null(d_26);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_h_14;
        return(t);
      }
      t = rewrite_1(t, r_1);
      {
        g_26 = t;
        b_26 :
        if(match_cons(g_26, sym_Defined_1))
          {
            h_26 = ATgetArgument(g_26, 0);
            c_26 :
            if(!(match_string(h_26, "m_0")))
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
    t = term_i_14;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  n_26 = t;
  l_26 :
  if(match_cons(n_26, sym__2))
    {
      o_26 = ATgetArgument(n_26, 0);
      q_26 = ATgetArgument(n_26, 1);
      m_26 :
      if(match_cons(o_26, sym_Var_1))
        {
          p_26 = ATgetArgument(o_26, 0);
          {
            ATerm t_26 = NULL;
            t = not_null(p_26);
            {
              t = Initialized_0(t);
              {
                t_26 = t;
                k_26 :
                if(!(match_string(t_26, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_26)), not_null(q_26));
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
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  j_27 = t;
  h_27 :
  if(match_cons(j_27, sym_Anno_2))
    {
      k_27 = ATgetArgument(j_27, 0);
      i_27 = ATgetArgument(j_27, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), not_null(k_27))));
    }
  else
    {
      if(match_cons(j_27, sym_Op_2))
        {
          k_27 = ATgetArgument(j_27, 0);
          i_27 = ATgetArgument(j_27, 1);
          {
            ATerm p_27 = NULL;
            ATerm q_27 = NULL,s_27 = NULL;
            ATerm r_27 = NULL;
            t = not_null(i_27);
            {
              t = length_0(t);
              {
                r_27 = t;
                if(((q_27 != NULL) && (q_27 != r_27)))
                  _fail(r_27);
                else
                  q_27 = r_27;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(q_27));
              {
                t = ConstructorName_0(t);
                {
                  s_27 = t;
                  if(((p_27 != NULL) && (p_27 != s_27)))
                    _fail(s_27);
                  else
                    p_27 = s_27;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_14, (ATerm) ATinsert(CheckATermList(not_null(i_27)), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_27)))));
          }
        }
      else
        {
          if(match_cons(j_27, sym_BuildDefault_1))
            {
              k_27 = ATgetArgument(j_27, 0);
              t = not_null(k_27);
            }
          else
            {
              if(match_cons(j_27, sym_Var_1))
                {
                  k_27 = ATgetArgument(j_27, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_27))));
                }
              else
                {
                  if(match_cons(j_27, sym_Str_1))
                    {
                      k_27 = ATgetArgument(j_27, 0);
                      {
                        ATerm w_27 = NULL;
                        ATerm x_27 = NULL;
                        t = not_null(k_27);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              x_27 = t;
                              if(((w_27 != NULL) && (w_27 != x_27)))
                                _fail(x_27);
                              else
                                w_27 = x_27;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), term_t_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_27))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(j_27, sym_Real_1))
                        {
                          k_27 = ATgetArgument(j_27, 0);
                          {
                            ATerm z_27 = NULL;
                            ATerm a_28 = NULL;
                            t = not_null(k_27);
                            {
                              t = real_to_string_0(t);
                              {
                                a_28 = t;
                                if(((z_27 != NULL) && (z_27 != a_28)))
                                  _fail(a_28);
                                else
                                  z_27 = a_28;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(z_27)))));
                          }
                        }
                      else
                        {
                          if(match_cons(j_27, sym_Int_1))
                            {
                              k_27 = ATgetArgument(j_27, 0);
                              {
                                ATerm c_28 = NULL;
                                ATerm d_28 = NULL;
                                t = not_null(k_27);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    d_28 = t;
                                    if(((c_28 != NULL) && (c_28 != d_28)))
                                      _fail(d_28);
                                    else
                                      c_28 = d_28;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_28)))));
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
ATerm Id_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_Id_1))
    {
      w_28 = ATgetArgument(v_28, 0);
      {
        ATerm z_28 = NULL,b_29 = NULL;
        ATerm a_29 = NULL;
        t = SSLgetAnnotations(not_null(v_28));
        {
          a_29 = t;
          if(((z_28 != NULL) && (z_28 != a_29)))
            _fail(a_29);
          else
            z_28 = a_29;
        }
        {
          t = not_null(w_28);
          {
            ATerm d_29 = NULL;
            t = h_84(t);
            {
              b_29 = t;
              {
                ATerm e_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(b_29)), not_null(z_28));
                {
                  e_29 = t;
                  if(((d_29 != NULL) && (d_29 != e_29)))
                    _fail(e_29);
                  else
                    d_29 = e_29;
                }
                t = not_null(d_29);
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
ATerm FunCall_2 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  o_29 :
  if(match_cons(p_29, sym_FunCall_2))
    {
      q_29 = ATgetArgument(p_29, 0);
      r_29 = ATgetArgument(p_29, 1);
      {
        ATerm v_29 = NULL,x_29 = NULL;
        ATerm w_29 = NULL;
        t = SSLgetAnnotations(not_null(p_29));
        {
          w_29 = t;
          if(((v_29 != NULL) && (v_29 != w_29)))
            _fail(w_29);
          else
            v_29 = w_29;
        }
        {
          t = not_null(q_29);
          {
            ATerm z_29 = NULL;
            t = l_87(t);
            {
              x_29 = t;
              {
                t = not_null(r_29);
                {
                  ATerm b_30 = NULL;
                  t = m_87(t);
                  {
                    z_29 = t;
                    {
                      ATerm c_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(x_29), not_null(z_29)), not_null(v_29));
                      {
                        c_30 = t;
                        if(((b_30 != NULL) && (b_30 != c_30)))
                          _fail(c_30);
                        else
                          b_30 = c_30;
                      }
                      t = not_null(b_30);
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
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  w_30 :
  if(match_cons(g_31, sym_Op_2))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      x_30 :
      if(match_string(h_31, "Cons"))
        {
          y_30 :
          if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
            {
              c_31 = ATgetFirst((ATermList) i_31);
              d_31 = (ATerm) ATgetNext((ATermList) i_31);
              z_30 :
              if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
                {
                  e_31 = ATgetFirst((ATermList) d_31);
                  f_31 = (ATerm) ATgetNext((ATermList) d_31);
                  a_31 :
                  if(((ATgetType(f_31) == AT_LIST) && ATisEmpty(f_31)))
                    {
                      {
                        ATerm l_31 = NULL;
                        ATerm y_31 = NULL;
                        t = not_null(e_31);
                        {
                          ATerm i_15 = t;
                          int j_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
                              m_31 = t;
                              n_30 :
                              if(match_cons(m_31, sym_TypeCast_2))
                                {
                                  n_31 = ATgetArgument(m_31, 0);
                                  u_31 = ATgetArgument(m_31, 1);
                                  o_30 :
                                  if(match_cons(n_31, sym_TypeName_2))
                                    {
                                      o_31 = ATgetArgument(n_31, 0);
                                      t_31 = ATgetArgument(n_31, 1);
                                      p_30 :
                                      if(match_cons(o_31, sym_TypeSpec_3))
                                        {
                                          p_31 = ATgetArgument(o_31, 0);
                                          q_31 = ATgetArgument(o_31, 1);
                                          s_31 = ATgetArgument(o_31, 2);
                                          q_30 :
                                          if(((ATgetType(p_31) == AT_LIST) && ATisEmpty(p_31)))
                                            {
                                              r_30 :
                                              if(match_cons(q_31, sym_TypeId_1))
                                                {
                                                  r_31 = ATgetArgument(q_31, 0);
                                                  s_30 :
                                                  if(match_string(r_31, "ATerm"))
                                                    {
                                                      t_30 :
                                                      if(((ATgetType(s_31) == AT_LIST) && ATisEmpty(s_31)))
                                                        {
                                                          u_30 :
                                                          if(match_cons(t_31, sym_None_0))
                                                            {
                                                              t = not_null(u_31);
                                                              {
                                                                ATerm n_15 = t;
                                                                int q_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_1 (ATerm t)
                                                                    {
                                                                      ATerm w_31 = NULL;
                                                                      w_31 = t;
                                                                      l_30 :
                                                                      if(!(match_string(w_31, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, s_1);
                                                                    ;
                                                                    LocalPopChoice(q_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_15;
                                                                    {
                                                                      ATerm t_1 (ATerm t)
                                                                      {
                                                                        ATerm v_1 (ATerm t)
                                                                        {
                                                                          ATerm x_31 = NULL;
                                                                          x_31 = t;
                                                                          m_30 :
                                                                          if(!(match_string(x_31, "ATinsert")))
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
                              ;
                              LocalPopChoice(j_15);
                            }
                          else
                            {
                              t = i_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_15, (ATerm) ATinsert(ATempty, not_null(e_31)));
                            }
                          {
                            y_31 = t;
                            if(((l_31 != NULL) && (l_31 != y_31)))
                              _fail(y_31);
                            else
                              l_31 = y_31;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_31)), not_null(l_31))));
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
          if(match_string(h_31, "Nil"))
            {
              b_31 :
              if(((ATgetType(i_31) == AT_LIST) && ATisEmpty(i_31)))
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
          ;
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
  ATerm w_44 = NULL,x_44 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  ATerm u_53 (ATerm t)
  {
    ATerm j_48 = NULL,z_48 = NULL;
    ATerm a_16;
    a_16 = t;
    {
      ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
      t = not_null(w_45);
      {
        ATerm b_16 = t;
        if((PushChoice() == 0))
          {
            ATerm k_48 = NULL;
            k_48 = t;
            h_34 :
            if(!(match_string(k_48, "Nil")))
              {
                if(!(match_string(k_48, "Cons")))
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_45), term_c_16);
          {
            ATerm b_2 (ATerm t)
            {
              ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
              l_48 = t;
              m_34 :
              if(match_cons(l_48, sym__2))
                {
                  m_48 = ATgetArgument(l_48, 0);
                  n_48 = ATgetArgument(l_48, 1);
                  {
                    ATerm q_48 = NULL,u_48 = NULL;
                    ATerm d_16;
                    d_16 = t;
                    {
                      ATerm r_48 = NULL,t_48 = NULL;
                      ATerm s_48 = NULL;
                      t = not_null(n_48);
                      {
                        t = int_to_string_0(t);
                        {
                          s_48 = t;
                          if(((r_48 != NULL) && (r_48 != s_48)))
                            _fail(s_48);
                          else
                            r_48 = s_48;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_48), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_48))), not_null(v_45))));
                        {
                          ATerm j_16 = t;
                          int k_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(k_16);
                            }
                          else
                            {
                              t = j_16;
                              t = MatchArg2_0(t);
                            }
                          {
                            t_48 = t;
                            if(((q_48 != NULL) && (q_48 != t_48)))
                              _fail(t_48);
                            else
                              q_48 = t_48;
                          }
                        }
                      }
                    }
                    t = d_16;
                    {
                      ATerm v_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), term_o_16);
                      {
                        t = add_0(t);
                        {
                          v_48 = t;
                          if(((u_48 != NULL) && (u_48 != v_48)))
                            _fail(v_48);
                          else
                            u_48 = v_48;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_48), not_null(u_48));
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
              w_48 = t;
              o_34 :
              if(match_cons(w_48, sym__2))
                {
                  x_48 = ATgetArgument(w_48, 0);
                  y_48 = ATgetArgument(w_48, 1);
                  if(((j_48 != NULL) && (j_48 != x_48)))
                    _fail(x_48);
                  else
                    j_48 = x_48;
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
      ATerm a_49 = NULL,c_49 = NULL;
      ATerm b_49 = NULL;
      t = not_null(f_45);
      {
        t = length_0(t);
        {
          b_49 = t;
          if(((a_49 != NULL) && (a_49 != b_49)))
            _fail(b_49);
          else
            a_49 = b_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(a_49));
        {
          t = ConstructorName_0(t);
          {
            c_49 = t;
            if(((z_48 != NULL) && (z_48 != c_49)))
              _fail(c_49);
            else
              z_48 = c_49;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_48))), not_null(v_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17))));
    }
    return(t);
  }
  ATerm v_53 (ATerm t)
  {
    ATerm f_49 = NULL;
    ATerm g_49 = NULL;
    t = not_null(w_45);
    {
      t = real_to_string_0(t);
      {
        g_49 = t;
        if(((f_49 != NULL) && (f_49 != g_49)))
          _fail(g_49);
        else
          f_49 = g_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(v_45))), term_f_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_h_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_l_17, not_null(v_45)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(f_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17))));
    return(t);
  }
  ATerm w_53 (ATerm t)
  {
    ATerm j_49 = NULL;
    ATerm k_49 = NULL;
    t = not_null(w_45);
    {
      t = int_to_string_0(t);
      {
        k_49 = t;
        if(((j_49 != NULL) && (j_49 != k_49)))
          _fail(k_49);
        else
          j_49 = k_49;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(v_45))), term_n_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_p_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_x_17, not_null(v_45)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(j_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17))));
    return(t);
  }
  ATerm x_53 (ATerm t)
  {
    ATerm n_49 = NULL;
    ATerm p_49 = NULL;
    t = not_null(w_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          p_49 = t;
          if(((n_49 != NULL) && (n_49 != p_49)))
            _fail(p_49);
          else
            n_49 = p_49;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_18, not_null(v_45)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_14), term_t_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(n_49)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17))));
    return(t);
  }
  ATerm y_53 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), term_o_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), not_null(v_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, not_null(v_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), term_z_7, not_null(v_45))));
    return(t);
  }
  ATerm z_53 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(f_45), not_null(v_45))), (ATerm) ATmakeAppl(sym_Match_2, not_null(w_45), not_null(v_45))));
    return(t);
  }
  ATerm a_54 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  ATerm b_54 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  ATerm c_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(y_45), term_b_17);
    return(t);
  }
  ATerm d_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))), term_t_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_45)), term_z_7, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_45)), term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(r_45), not_null(s_45)))));
    return(t);
  }
  ATerm e_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))), term_t_18), (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(q_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(r_45), not_null(s_45)))));
    return(t);
  }
  ATerm f_54 (ATerm t)
  {
    ATerm u_50 = NULL,j_51 = NULL,l_51 = NULL;
    ATerm k_19;
    k_19 = t;
    {
      ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
      t = not_null(o_45);
      {
        ATerm l_19 = t;
        if((PushChoice() == 0))
          {
            ATerm v_50 = NULL;
            v_50 = t;
            u_34 :
            if(!(match_string(v_50, "Nil")))
              {
                if(!(match_string(v_50, "Cons")))
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_45), term_c_16);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
              w_50 = t;
              y_34 :
              if(match_cons(w_50, sym__2))
                {
                  x_50 = ATgetArgument(w_50, 0);
                  z_50 = ATgetArgument(w_50, 1);
                  m_35 :
                  if(match_cons(x_50, sym_Var_1))
                    {
                      y_50 = ATgetArgument(x_50, 0);
                      {
                        ATerm c_51 = NULL,e_51 = NULL;
                        ATerm q_19;
                        q_19 = t;
                        {
                          ATerm d_51 = NULL;
                          t = not_null(z_50);
                          {
                            t = int_to_string_0(t);
                            {
                              d_51 = t;
                              if(((c_51 != NULL) && (c_51 != d_51)))
                                _fail(d_51);
                              else
                                c_51 = d_51;
                            }
                          }
                        }
                        t = q_19;
                        {
                          ATerm f_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_50), term_o_16);
                          {
                            t = add_0(t);
                            {
                              f_51 = t;
                              if(((e_51 != NULL) && (e_51 != f_51)))
                                _fail(f_51);
                              else
                                e_51 = f_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_50)), term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))))), not_null(e_51));
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
              g_51 = t;
              o_35 :
              if(match_cons(g_51, sym__2))
                {
                  h_51 = ATgetArgument(g_51, 0);
                  i_51 = ATgetArgument(g_51, 1);
                  if(((u_50 != NULL) && (u_50 != h_51)))
                    _fail(h_51);
                  else
                    u_50 = h_51;
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
      ATerm r_19;
      r_19 = t;
      {
        ATerm k_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_45), not_null(m_45));
        {
          t = ConstructorName_0(t);
          {
            k_51 = t;
            if(((j_51 != NULL) && (j_51 != k_51)))
              _fail(k_51);
            else
              j_51 = k_51;
          }
        }
      }
      t = r_19;
      {
        ATerm m_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), (ATerm) ATinsert(ATempty, not_null(q_45)));
        {
          t = conc_0(t);
          {
            m_51 = t;
            if(((l_51 != NULL) && (l_51 != m_51)))
              _fail(m_51);
            else
              l_51 = m_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(j_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(l_51)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(r_45), not_null(s_45)))));
      }
    }
    return(t);
  }
  ATerm g_54 (ATerm t)
  {
    ATerm t_51 = NULL;
    ATerm u_51 = NULL;
    t = not_null(o_45);
    {
      t = real_to_string_0(t);
      {
        u_51 = t;
        if(((t_51 != NULL) && (t_51 != u_51)))
          _fail(u_51);
        else
          t_51 = u_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(t_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(q_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(r_45), not_null(s_45)))));
    return(t);
  }
  ATerm h_54 (ATerm t)
  {
    ATerm e_52 = NULL;
    ATerm f_52 = NULL;
    t = not_null(o_45);
    {
      t = int_to_string_0(t);
      {
        f_52 = t;
        if(((e_52 != NULL) && (e_52 != f_52)))
          _fail(f_52);
        else
          e_52 = f_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(e_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(q_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(r_45), not_null(s_45)))));
    return(t);
  }
  ATerm i_54 (ATerm t)
  {
    ATerm m_52 = NULL;
    ATerm n_52 = NULL;
    t = not_null(o_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          n_52 = t;
          if(((m_52 != NULL) && (m_52 != n_52)))
            _fail(n_52);
          else
            m_52 = n_52;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(m_52)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(q_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(r_45), not_null(s_45)))));
    return(t);
  }
  ATerm j_54 (ATerm t)
  {
    t = not_null(s_45);
    return(t);
  }
  ATerm k_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_45)), (ATerm) ATmakeAppl(sym_Case_3, not_null(v_45), not_null(s_45), not_null(t_45)));
    return(t);
  }
  ATerm l_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(y_45)));
    return(t);
  }
  ATerm m_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), term_o_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), (ATerm) ATmakeAppl(sym_Id_1, not_null(u_45)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_45))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(u_45)))));
    return(t);
  }
  ATerm n_54 (ATerm t)
  {
    t = not_null(v_45);
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
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_45))));
    return(t);
  }
  ATerm o_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), term_z_7, term_b_17));
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    ATerm b_53 = NULL;
    ATerm c_53 = NULL;
    t = not_null(y_45);
    {
      t = construct_term_caching_0(t);
      {
        c_53 = t;
        if(((b_53 != NULL) && (b_53 != c_53)))
          _fail(c_53);
        else
          b_53 = c_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, not_null(b_53)));
    return(t);
  }
  x_45 = t;
  a_43 :
  if(match_cons(x_45, sym_Let_2))
    {
      y_45 = ATgetArgument(x_45, 0);
      v_45 = ATgetArgument(x_45, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(y_45), (ATerm) ATinsert(ATempty, not_null(v_45)));
    }
  else
    {
      if(match_cons(x_45, sym_Where_1))
        {
          y_45 = ATgetArgument(x_45, 0);
          {
            ATerm c_46 = NULL;
            ATerm d_46 = NULL;
            t = new_0(t);
            {
              d_46 = t;
              if(((c_46 != NULL) && (c_46 != d_46)))
                _fail(d_46);
              else
                c_46 = d_46;
            }
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_46)), term_q_8))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_46))))), not_null(y_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_46)), term_z_7, term_b_17))));
          }
        }
      else
        {
          if(match_cons(x_45, sym_Test_1))
            {
              y_45 = ATgetArgument(x_45, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(y_45));
            }
          else
            {
              if(match_cons(x_45, sym_Call_2))
                {
                  y_45 = ATgetArgument(x_45, 0);
                  v_45 = ATgetArgument(x_45, 1);
                  b_43 :
                  if(match_cons(y_45, sym_SVar_1))
                    {
                      w_45 = ATgetArgument(y_45, 0);
                      {
                        ATerm h_46 = NULL;
                        ATerm n_46 = NULL;
                        t = not_null(v_45);
                        {
                          ATerm d_2 (ATerm t)
                          {
                            ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
                            i_46 = t;
                            s_33 :
                            if(match_cons(i_46, sym_Call_2))
                              {
                                j_46 = ATgetArgument(i_46, 0);
                                l_46 = ATgetArgument(i_46, 1);
                                t_33 :
                                if(match_cons(j_46, sym_SVar_1))
                                  {
                                    k_46 = ATgetArgument(j_46, 0);
                                    u_33 :
                                    if(((ATgetType(l_46) == AT_LIST) && ATisEmpty(l_46)))
                                      {
                                        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(k_46));
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
                            n_46 = t;
                            if(((h_46 != NULL) && (h_46 != n_46)))
                              _fail(n_46);
                            else
                              h_46 = n_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_45)), (ATerm) ATinsert(CheckATermList(not_null(h_46)), term_b_17))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(x_45, sym_Prim_2))
                    {
                      y_45 = ATgetArgument(x_45, 0);
                      v_45 = ATgetArgument(x_45, 1);
                      {
                        ATerm q_46 = NULL;
                        ATerm r_46 = NULL;
                        t = not_null(v_45);
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
                            r_46 = t;
                            if(((q_46 != NULL) && (q_46 != r_46)))
                              _fail(r_46);
                            else
                              q_46 = r_46;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_45)), not_null(q_46))));
                      }
                    }
                  else
                    {
                      if(match_cons(x_45, sym_Not_1))
                        {
                          y_45 = ATgetArgument(x_45, 0);
                          {
                            ATerm t_46 = NULL;
                            ATerm u_46 = NULL;
                            t = new_0(t);
                            {
                              u_46 = t;
                              if(((t_46 != NULL) && (t_46 != u_46)))
                                _fail(u_46);
                              else
                                t_46 = u_46;
                            }
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_46)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_21), term_r_20), not_null(y_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_46)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(x_45, sym_LGChoice_2))
                            {
                              y_45 = ATgetArgument(x_45, 0);
                              v_45 = ATgetArgument(x_45, 1);
                              {
                                ATerm x_46 = NULL;
                                ATerm y_46 = NULL;
                                t = new_0(t);
                                {
                                  y_46 = t;
                                  if(((x_46 != NULL) && (x_46 != y_46)))
                                    _fail(y_46);
                                  else
                                    x_46 = y_46;
                                }
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_46)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_h_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_46)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(x_45, sym_GChoice_2))
                                {
                                  y_45 = ATgetArgument(x_45, 0);
                                  v_45 = ATgetArgument(x_45, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(y_45), not_null(v_45));
                                }
                              else
                                {
                                  if(match_cons(x_45, sym_GuardedLChoice_3))
                                    {
                                      y_45 = ATgetArgument(x_45, 0);
                                      v_45 = ATgetArgument(x_45, 1);
                                      s_45 = ATgetArgument(x_45, 2);
                                      {
                                        ATerm e_47 = NULL,f_47 = NULL;
                                        ATerm g_47 = NULL;
                                        ATerm h_47 = NULL;
                                        t = new_0(t);
                                        {
                                          g_47 = t;
                                          {
                                            if(((e_47 != NULL) && (e_47 != g_47)))
                                              _fail(g_47);
                                            else
                                              e_47 = g_47;
                                            {
                                              t = new_0(t);
                                              {
                                                h_47 = t;
                                                if(((f_47 != NULL) && (f_47 != h_47)))
                                                  _fail(h_47);
                                                else
                                                  f_47 = h_47;
                                              }
                                            }
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_47)), term_q_8), term_s_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_47)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_47)))))), not_null(y_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_47)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(x_45, sym_LChoice_2))
                                        {
                                          y_45 = ATgetArgument(x_45, 0);
                                          v_45 = ATgetArgument(x_45, 1);
                                          {
                                            ATerm k_47 = NULL,l_47 = NULL;
                                            ATerm m_47 = NULL;
                                            ATerm n_47 = NULL;
                                            t = new_0(t);
                                            {
                                              m_47 = t;
                                              {
                                                if(((k_47 != NULL) && (k_47 != m_47)))
                                                  _fail(m_47);
                                                else
                                                  k_47 = m_47;
                                                {
                                                  t = new_0(t);
                                                  {
                                                    n_47 = t;
                                                    if(((l_47 != NULL) && (l_47 != n_47)))
                                                      _fail(n_47);
                                                    else
                                                      l_47 = n_47;
                                                  }
                                                }
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_47)), term_q_8), term_s_21)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_47)), term_q_8), term_f_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_j_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_47)))))), term_g_22), not_null(y_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_b_17, term_z_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_47)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(x_45, sym_Choice_2))
                                            {
                                              y_45 = ATgetArgument(x_45, 0);
                                              v_45 = ATgetArgument(x_45, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_45), not_null(v_45));
                                            }
                                          else
                                            {
                                              if(match_cons(x_45, sym_Seq_2))
                                                {
                                                  y_45 = ATgetArgument(x_45, 0);
                                                  v_45 = ATgetArgument(x_45, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), not_null(y_45)));
                                                }
                                              else
                                                {
                                                  if(match_cons(x_45, sym_Scope_2))
                                                    {
                                                      y_45 = ATgetArgument(x_45, 0);
                                                      v_45 = ATgetArgument(x_45, 1);
                                                      {
                                                        ATerm w_47 = NULL;
                                                        ATerm h_22;
                                                        h_22 = t;
                                                        {
                                                          t = not_null(y_45);
                                                          {
                                                            ATerm g_2 (ATerm t)
                                                            {
                                                              ATerm u_47 = NULL;
                                                              u_47 = t;
                                                              {
                                                                ATerm i_22;
                                                                i_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), term_o_22);
                                                                  {
                                                                    ATerm h_2 (ATerm t)
                                                                    {
                                                                      t = term_h_14;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, h_2);
                                                                  }
                                                                }
                                                                t = i_22;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, g_2);
                                                          }
                                                        }
                                                        t = h_22;
                                                        {
                                                          ATerm z_47 = NULL;
                                                          t = not_null(y_45);
                                                          {
                                                            ATerm i_2 (ATerm t)
                                                            {
                                                              ATerm x_47 = NULL;
                                                              x_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_47)), term_q_8), term_p_22);
                                                              return(t);
                                                            }
                                                            t = map_1(t, i_2);
                                                            {
                                                              z_47 = t;
                                                              if(((w_47 != NULL) && (w_47 != z_47)))
                                                                _fail(z_47);
                                                              else
                                                                w_47 = z_47;
                                                            }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, not_null(w_47))), (ATerm) ATinsert(ATempty, not_null(v_45)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(x_45, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(x_45, sym_Id_0))
                                                            {
                                                              t = term_r_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(x_45, sym_Match_2))
                                                                {
                                                                  y_45 = ATgetArgument(x_45, 0);
                                                                  v_45 = ATgetArgument(x_45, 1);
                                                                  c_43 :
                                                                  if(match_cons(y_45, sym_Op_2))
                                                                    {
                                                                      w_45 = ATgetArgument(y_45, 0);
                                                                      f_45 = ATgetArgument(y_45, 1);
                                                                      d_43 :
                                                                      if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
                                                                        {
                                                                          w_44 = ATgetFirst((ATermList) f_45);
                                                                          x_44 = (ATerm) ATgetNext((ATermList) f_45);
                                                                          e_43 :
                                                                          if(((ATgetType(x_44) == AT_LIST) && !(ATisEmpty(x_44))))
                                                                            {
                                                                              d_45 = ATgetFirst((ATermList) x_44);
                                                                              e_45 = (ATerm) ATgetNext((ATermList) x_44);
                                                                              f_43 :
                                                                              if(((ATgetType(e_45) == AT_LIST) && ATisEmpty(e_45)))
                                                                                {
                                                                                  g_43 :
                                                                                  if(match_string(w_45, "Cons"))
                                                                                    {
                                                                                      ATerm q_22 = t;
                                                                                      int r_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm d_48 = NULL;
                                                                                          ATerm e_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(d_45), (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_j_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_19, not_null(v_45))))))), (ATerm) ATmakeAppl(sym__2, not_null(w_44), (ATerm) ATmakeAppl(sym_FunCall_2, term_x_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_h_19, not_null(v_45))))));
                                                                                          {
                                                                                            ATerm j_2 (ATerm t)
                                                                                            {
                                                                                              ATerm s_22 = t;
                                                                                              int t_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(t_22);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = s_22;
                                                                                                  t = MatchArg2_0(t);
                                                                                                }
                                                                                              return(t);
                                                                                            }
                                                                                            t = map_1(t, j_2);
                                                                                            {
                                                                                              e_48 = t;
                                                                                              if(((d_48 != NULL) && (d_48 != e_48)))
                                                                                                _fail(e_48);
                                                                                              else
                                                                                                d_48 = e_48;
                                                                                            }
                                                                                          }
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(v_45))), term_t_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, not_null(v_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(d_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17))));
                                                                                          ;
                                                                                          LocalPopChoice(r_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_22;
                                                                                          t = u_53(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_53(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  h_43 :
                                                                                  t = u_53(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              i_43 :
                                                                              t = u_53(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(f_45) == AT_LIST) && ATisEmpty(f_45)))
                                                                            {
                                                                              j_43 :
                                                                              if(match_string(w_45, "Nil"))
                                                                                {
                                                                                  ATerm u_22 = t;
                                                                                  int v_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_d_17, (ATerm) ATinsert(ATempty, not_null(v_45))), term_t_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_v_18, (ATerm) ATinsert(ATempty, not_null(v_45))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_16, (ATerm) ATinsert(ATempty, term_b_17))));
                                                                                      ;
                                                                                      LocalPopChoice(v_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_22;
                                                                                      t = u_53(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_53(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              k_43 :
                                                                              t = u_53(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(y_45, sym_Real_1))
                                                                        {
                                                                          w_45 = ATgetArgument(y_45, 0);
                                                                          t = v_53(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(y_45, sym_Int_1))
                                                                            {
                                                                              w_45 = ATgetArgument(y_45, 0);
                                                                              t = w_53(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(y_45, sym_Str_1))
                                                                                {
                                                                                  w_45 = ATgetArgument(y_45, 0);
                                                                                  t = x_53(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(y_45, sym_Var_1))
                                                                                    {
                                                                                      w_45 = ATgetArgument(y_45, 0);
                                                                                      t = y_53(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(y_45, sym_As_2))
                                                                                        {
                                                                                          w_45 = ATgetArgument(y_45, 0);
                                                                                          f_45 = ATgetArgument(y_45, 1);
                                                                                          t = z_53(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(y_45, sym_BuildDefault_1))
                                                                                            {
                                                                                              w_45 = ATgetArgument(y_45, 0);
                                                                                              t = a_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(y_45, sym_Wld_0))
                                                                                                {
                                                                                                  t = b_54(t);
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
                                                                  if(match_cons(x_45, sym_Match_1))
                                                                    {
                                                                      y_45 = ATgetArgument(x_45, 0);
                                                                      t = c_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(x_45, sym_Case_3))
                                                                        {
                                                                          y_45 = ATgetArgument(x_45, 0);
                                                                          v_45 = ATgetArgument(x_45, 1);
                                                                          s_45 = ATgetArgument(x_45, 2);
                                                                          l_43 :
                                                                          if(match_cons(y_45, sym_Var_1))
                                                                            {
                                                                              w_45 = ATgetArgument(y_45, 0);
                                                                              m_43 :
                                                                              if(((ATgetType(v_45) == AT_LIST) && !(ATisEmpty(v_45))))
                                                                                {
                                                                                  u_45 = ATgetFirst((ATermList) v_45);
                                                                                  r_45 = (ATerm) ATgetNext((ATermList) v_45);
                                                                                  n_43 :
                                                                                  if(match_cons(u_45, sym_Alt_3))
                                                                                    {
                                                                                      n_45 = ATgetArgument(u_45, 0);
                                                                                      p_45 = ATgetArgument(u_45, 1);
                                                                                      q_45 = ATgetArgument(u_45, 2);
                                                                                      o_43 :
                                                                                      if(match_cons(n_45, sym_Fun_2))
                                                                                        {
                                                                                          o_45 = ATgetArgument(n_45, 0);
                                                                                          m_45 = ATgetArgument(n_45, 1);
                                                                                          p_43 :
                                                                                          if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
                                                                                            {
                                                                                              g_45 = ATgetFirst((ATermList) p_45);
                                                                                              i_45 = (ATerm) ATgetNext((ATermList) p_45);
                                                                                              q_43 :
                                                                                              if(((ATgetType(i_45) == AT_LIST) && !(ATisEmpty(i_45))))
                                                                                                {
                                                                                                  j_45 = ATgetFirst((ATermList) i_45);
                                                                                                  l_45 = (ATerm) ATgetNext((ATermList) i_45);
                                                                                                  r_43 :
                                                                                                  if(((ATgetType(l_45) == AT_LIST) && ATisEmpty(l_45)))
                                                                                                    {
                                                                                                      s_43 :
                                                                                                      if(match_cons(j_45, sym_Var_1))
                                                                                                        {
                                                                                                          k_45 = ATgetArgument(j_45, 0);
                                                                                                          t_43 :
                                                                                                          if(match_cons(g_45, sym_Var_1))
                                                                                                            {
                                                                                                              h_45 = ATgetArgument(g_45, 0);
                                                                                                              u_43 :
                                                                                                              if(match_int(m_45, 2))
                                                                                                                {
                                                                                                                  v_43 :
                                                                                                                  if(match_string(o_45, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm w_22 = t;
                                                                                                                      int x_22 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = d_54(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(x_22);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = w_22;
                                                                                                                          t = f_54(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = f_54(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  w_43 :
                                                                                                                  t = f_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              x_43 :
                                                                                                              y_43 :
                                                                                                              t = f_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          z_43 :
                                                                                                          a_44 :
                                                                                                          b_44 :
                                                                                                          t = f_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      c_44 :
                                                                                                      d_44 :
                                                                                                      e_44 :
                                                                                                      k_44 :
                                                                                                      t = f_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  l_44 :
                                                                                                  m_44 :
                                                                                                  n_44 :
                                                                                                  t = f_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(p_45) == AT_LIST) && ATisEmpty(p_45)))
                                                                                                {
                                                                                                  o_44 :
                                                                                                  if(match_int(m_45, 0))
                                                                                                    {
                                                                                                      p_44 :
                                                                                                      if(match_string(o_45, "Nil"))
                                                                                                        {
                                                                                                          ATerm b_23 = t;
                                                                                                          int c_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = e_54(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(c_23);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_23;
                                                                                                              t = f_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = f_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      q_44 :
                                                                                                      t = f_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  r_44 :
                                                                                                  s_44 :
                                                                                                  t = f_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(n_45, sym_Real_1))
                                                                                            {
                                                                                              o_45 = ATgetArgument(n_45, 0);
                                                                                              t = g_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(n_45, sym_Int_1))
                                                                                                {
                                                                                                  o_45 = ATgetArgument(n_45, 0);
                                                                                                  t = h_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(n_45, sym_Str_1))
                                                                                                    {
                                                                                                      o_45 = ATgetArgument(n_45, 0);
                                                                                                      t = i_54(t);
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
                                                                                  if(((ATgetType(v_45) == AT_LIST) && ATisEmpty(v_45)))
                                                                                    {
                                                                                      t = j_54(t);
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
                                                                          if(match_cons(x_45, sym_Case_4))
                                                                            {
                                                                              y_45 = ATgetArgument(x_45, 0);
                                                                              v_45 = ATgetArgument(x_45, 1);
                                                                              s_45 = ATgetArgument(x_45, 2);
                                                                              t_45 = ATgetArgument(x_45, 3);
                                                                              t = k_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(x_45, sym_Continue_1))
                                                                                {
                                                                                  y_45 = ATgetArgument(x_45, 0);
                                                                                  t = l_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(x_45, sym_Assign_2))
                                                                                    {
                                                                                      y_45 = ATgetArgument(x_45, 0);
                                                                                      v_45 = ATgetArgument(x_45, 1);
                                                                                      t_44 :
                                                                                      if(match_cons(y_45, sym_Var_1))
                                                                                        {
                                                                                          w_45 = ATgetArgument(y_45, 0);
                                                                                          u_44 :
                                                                                          if(match_cons(v_45, sym_Var_1))
                                                                                            {
                                                                                              u_45 = ATgetArgument(v_45, 0);
                                                                                              {
                                                                                                ATerm g_23 = t;
                                                                                                int j_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = m_54(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(j_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_23;
                                                                                                    t = n_54(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_54(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(x_45, sym_Assign_1))
                                                                                        {
                                                                                          y_45 = ATgetArgument(x_45, 0);
                                                                                          v_44 :
                                                                                          if(match_cons(y_45, sym_Var_1))
                                                                                            {
                                                                                              w_45 = ATgetArgument(y_45, 0);
                                                                                              t = o_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(x_45, sym_Build_1))
                                                                                            {
                                                                                              y_45 = ATgetArgument(x_45, 0);
                                                                                              t = p_54(t);
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
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
  a_56 = t;
  z_55 :
  if(match_cons(a_56, sym__2))
    {
      b_56 = ATgetArgument(a_56, 0);
      c_56 = ATgetArgument(a_56, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), not_null(c_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm p_56 = NULL,s_56 = NULL,t_56 = NULL;
  p_56 = t;
  h_56 :
  if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
    {
      s_56 = ATgetFirst((ATermList) p_56);
      t_56 = (ATerm) ATgetNext((ATermList) p_56);
      i_56 :
      if(match_int(s_56, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_56)), term_r_23), term_o_23);
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
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  c_57 = t;
  x_56 :
  if(((ATgetType(c_57) == AT_LIST) && !(ATisEmpty(c_57))))
    {
      d_57 = ATgetFirst((ATermList) c_57);
      e_57 = (ATerm) ATgetNext((ATermList) c_57);
      y_56 :
      if(match_int(d_57, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_57)), term_o_23), term_o_23);
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
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  i_57 :
  if(((ATgetType(k_57) == AT_LIST) && !(ATisEmpty(k_57))))
    {
      l_57 = ATgetFirst((ATermList) k_57);
      m_57 = (ATerm) ATgetNext((ATermList) k_57);
      j_57 :
      if(match_int(l_57, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_57)), term_s_23), term_o_23);
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
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
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
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm z_23 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = z_23;
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
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym__2))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      {
        ATerm z_57 = NULL,b_58 = NULL;
        ATerm c_24;
        c_24 = t;
        {
          ATerm a_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_d_24), not_null(v_57));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  a_58 = t;
                  if(((z_57 != NULL) && (z_57 != a_58)))
                    _fail(a_58);
                  else
                    z_57 = a_58;
                }
              }
            }
          }
        }
        t = c_24;
        {
          ATerm c_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_j_24), not_null(v_57));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  c_58 = t;
                  if(((b_58 != NULL) && (b_58 != c_58)))
                    _fail(c_58);
                  else
                    b_58 = c_58;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(b_58))), term_m_24)))), not_null(w_57)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(z_57))), term_m_24)))));
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
  ATerm j_58 = NULL;
  j_58 = t;
  {
    ATerm m_58 = NULL,n_58 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm l_2 (ATerm t)
      {
        t = term_i_7;
        return(t);
      }
      t = rewrite_1(t, l_2);
      {
        m_58 = t;
        h_58 :
        if(match_cons(m_58, sym_Defined_1))
          {
            n_58 = ATgetArgument(m_58, 0);
            i_58 :
            if(!(match_string(n_58, "p_0")))
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
    t = not_null(j_58);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  {
    ATerm z_58 = NULL,a_59 = NULL;
    t = not_null(u_58);
    {
      ATerm m_2 (ATerm t)
      {
        t = term_u_7;
        return(t);
      }
      t = rewrite_1(t, m_2);
      {
        z_58 = t;
        q_58 :
        if(match_cons(z_58, sym_Defined_1))
          {
            a_59 = ATgetArgument(z_58, 0);
            t_58 :
            if(!(match_string(a_59, "s_0")))
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
    t = not_null(u_58);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
  g_59 = t;
  f_59 :
  if(match_cons(g_59, sym_SDef_3))
    {
      h_59 = ATgetArgument(g_59, 0);
      i_59 = ATgetArgument(g_59, 1);
      j_59 = ATgetArgument(g_59, 2);
      {
        ATerm n_59 = NULL,o_59 = NULL;
        ATerm p_59 = NULL;
        t = not_null(i_59);
        {
          ATerm q_59 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            p_59 = t;
            {
              if(((n_59 != NULL) && (n_59 != p_59)))
                _fail(p_59);
              else
                n_59 = p_59;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), not_null(j_59));
                {
                  ATerm n_24 = t;
                  int x_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm y_24 = t;
                        int z_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            ;
                            LocalPopChoice(z_24);
                          }
                        else
                          {
                            t = y_24;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, n_2, _id);
                      t = TracedBody_0(t);
                      ;
                      LocalPopChoice(x_24);
                    }
                  else
                    {
                      t = n_24;
                      t = PlainBody_0(t);
                    }
                  {
                    q_59 = t;
                    if(((o_59 != NULL) && (o_59 != q_59)))
                      _fail(q_59);
                    else
                      o_59 = q_59;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_p_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_59)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(n_59)), term_l_25)))), not_null(o_59));
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
  ATerm w_59 = NULL,z_59 = NULL,a_60 = NULL;
  w_59 = t;
  v_59 :
  if(match_cons(w_59, sym__2))
    {
      z_59 = ATgetArgument(w_59, 0);
      a_60 = ATgetArgument(w_59, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_60)), not_null(z_59)), (ATerm) ATinsert(ATempty, not_null(z_59)));
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
  ATerm g_60 = NULL;
  ATerm h_60 = NULL;
  h_60 = t;
  if(((g_60 != NULL) && (g_60 != h_60)))
    _fail(h_60);
  else
    g_60 = h_60;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_23, not_null(g_60));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm l_111 (ATerm))
{
  t = explode_string_0(t);
  {
    t = l_111(t);
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
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
  m_60 = t;
  l_60 :
  if(((ATgetType(m_60) == AT_LIST) && !(ATisEmpty(m_60))))
    {
      n_60 = ATgetFirst((ATermList) m_60);
      o_60 = (ATerm) ATgetNext((ATermList) m_60);
      t = not_null(n_60);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,x_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym__2))
    {
      u_60 = ATgetArgument(t_60, 0);
      x_60 = ATgetArgument(t_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_60), not_null(x_60));
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
ATerm rewrite_1 (ATerm t, ATerm w_120 (ATerm))
{
  ATerm j_61 = NULL;
  ATerm l_61 = NULL;
  j_61 = t;
  {
    ATerm m_61 = NULL;
    t = term_m_25;
    {
      t = w_120(t);
      {
        m_61 = t;
        if(((l_61 != NULL) && (l_61 != m_61)))
          _fail(m_61);
        else
          l_61 = m_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_61), not_null(j_61));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t_61 :
  if(match_cons(u_61, sym__2))
    {
      v_61 = ATgetArgument(u_61, 0);
      w_61 = ATgetArgument(u_61, 1);
      {
        ATerm a_62 = NULL;
        ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
        t = not_null(u_61);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_o_25;
            return(t);
          }
          t = rewrite_1(t, o_2);
          {
            b_62 = t;
            r_61 :
            if(match_cons(b_62, sym_Defined_2))
              {
                c_62 = ATgetArgument(b_62, 0);
                d_62 = ATgetArgument(b_62, 1);
                s_61 :
                if(match_string(c_62, "j_0"))
                  {
                    if(((a_62 != NULL) && (a_62 != d_62)))
                      _fail(d_62);
                    else
                      a_62 = d_62;
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
        t = not_null(a_62);
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
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  m_62 = t;
  l_62 :
  if(match_cons(m_62, sym_OpDecl_2))
    {
      n_62 = ATgetArgument(m_62, 0);
      o_62 = ATgetArgument(m_62, 1);
      {
        ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,x_62 = NULL;
        ATerm p_25;
        p_25 = t;
        {
          ATerm u_62 = NULL;
          t = not_null(o_62);
          {
            ATerm v_62 = NULL;
            t = Arity_0(t);
            {
              u_62 = t;
              {
                if(((s_62 != NULL) && (s_62 != u_62)))
                  _fail(u_62);
                else
                  s_62 = u_62;
                {
                  ATerm w_62 = NULL;
                  t = int_to_string_0(t);
                  {
                    v_62 = t;
                    {
                      if(((r_62 != NULL) && (r_62 != v_62)))
                        _fail(v_62);
                      else
                        r_62 = v_62;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_62), not_null(s_62));
                        {
                          t = ConstructorName_0(t);
                          {
                            w_62 = t;
                            if(((t_62 != NULL) && (t_62 != w_62)))
                              _fail(w_62);
                            else
                              t_62 = w_62;
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
        t = p_25;
        {
          ATerm y_62 = NULL;
          t = not_null(n_62);
          {
            t = double_quote_0(t);
            {
              y_62 = t;
              if(((x_62 != NULL) && (x_62 != y_62)))
                _fail(y_62);
              else
                x_62 = y_62;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_62)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_62)), term_z_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_25), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_62))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(x_62))))))));
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
  ATerm h_63 = NULL;
  ATerm j_63 = NULL;
  h_63 = t;
  {
    ATerm k_63 = NULL,m_63 = NULL;
    ATerm l_63 = NULL;
    t = not_null(h_63);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          l_63 = t;
          if(((k_63 != NULL) && (k_63 != l_63)))
            _fail(l_63);
          else
            k_63 = l_63;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), (ATerm) ATinsert(ATempty, term_e_26));
      {
        t = conc_0(t);
        {
          m_63 = t;
          if(((j_63 != NULL) && (j_63 != m_63)))
            _fail(m_63);
          else
            j_63 = m_63;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_k_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_i_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_k_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_63)));
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
  ATerm r_63 = NULL;
  r_63 = t;
  t = SSL_int_to_string(not_null(r_63));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  a_64 :
  if(((ATgetType(c_64) == AT_LIST) && !(ATisEmpty(c_64))))
    {
      d_64 = ATgetFirst((ATermList) c_64);
      e_64 = (ATerm) ATgetNext((ATermList) c_64);
      b_64 :
      if(match_int(d_64, 95))
        {
          ATerm g_64 = NULL;
          ATerm h_64 = NULL;
          t = not_null(e_64);
          {
            t = o_0(t);
            {
              h_64 = t;
              if(((g_64 != NULL) && (g_64 != h_64)))
                _fail(h_64);
              else
                g_64 = h_64;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_64)), term_j_26), term_j_26);
        }
      else
        {
          if(match_int(d_64, 45))
            {
              ATerm q_64 = NULL;
              ATerm r_64 = NULL;
              t = not_null(e_64);
              {
                t = o_0(t);
                {
                  r_64 = t;
                  if(((q_64 != NULL) && (q_64 != r_64)))
                    _fail(r_64);
                  else
                    q_64 = r_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_64)), term_j_26);
            }
          else
            {
              if(match_int(d_64, 39))
                {
                  ATerm y_64 = NULL;
                  ATerm z_64 = NULL;
                  t = not_null(e_64);
                  {
                    t = o_0(t);
                    {
                      z_64 = t;
                      if(((y_64 != NULL) && (y_64 != z_64)))
                        _fail(z_64);
                      else
                        y_64 = z_64;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_64)), term_j_26), term_r_26), term_j_26);
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
ATerm escape_1 (ATerm t, ATerm h_111 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm k_65 (ATerm t)
    {
      ATerm s_26 = t;
      int u_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_111(t, k_65);
          ;
          LocalPopChoice(u_26);
        }
      else
        {
          t = s_26;
          {
            ATerm v_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, k_65);
                ;
                LocalPopChoice(w_26);
              }
            else
              {
                t = v_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = k_65(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm))
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_108(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
        p_65 = t;
        o_65 :
        if(((ATgetType(p_65) == AT_LIST) && !(ATisEmpty(p_65))))
          {
            q_65 = ATgetFirst((ATermList) p_65);
            r_65 = (ATerm) ATgetNext((ATermList) p_65);
            {
              ATerm u_65 = NULL,w_65 = NULL;
              ATerm z_26;
              z_26 = t;
              {
                ATerm v_65 = NULL;
                t = not_null(q_65);
                {
                  t = d_108(t);
                  {
                    v_65 = t;
                    if(((u_65 != NULL) && (u_65 != v_65)))
                      _fail(v_65);
                    else
                      u_65 = v_65;
                  }
                }
              }
              t = z_26;
              {
                ATerm x_65 = NULL;
                t = not_null(r_65);
                {
                  t = foldr_3(t, b_108, c_108, d_108);
                  {
                    x_65 = t;
                    if(((w_65 != NULL) && (w_65 != x_65)))
                      _fail(x_65);
                    else
                      w_65 = x_65;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_65), not_null(w_65));
                  t = c_108(t);
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
  ATerm w_2 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = foldr_3(t, p_2, add_0, w_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  g_66 = t;
  e_66 :
  if(match_cons(g_66, sym_FunType_2))
    {
      h_66 = ATgetArgument(g_66, 0);
      f_66 = ATgetArgument(g_66, 1);
      {
        t = not_null(h_66);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(g_66, sym_ConstType_1))
        {
          h_66 = ATgetArgument(g_66, 0);
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
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  s_66 :
  if(match_cons(t_66, sym_OpDecl_2))
    {
      u_66 = ATgetArgument(t_66, 0);
      v_66 = ATgetArgument(t_66, 1);
      {
        ATerm y_66 = NULL,z_66 = NULL;
        ATerm a_67 = NULL;
        t = not_null(v_66);
        {
          ATerm b_67 = NULL,i_67 = NULL,k_67 = NULL;
          t = Arity_0(t);
          {
            a_67 = t;
            {
              if(((y_66 != NULL) && (y_66 != a_67)))
                _fail(a_67);
              else
                y_66 = a_67;
              {
                ATerm a_27;
                a_27 = t;
                {
                  ATerm h_67 = NULL;
                  t = not_null(u_66);
                  {
                    t = cify_0(t);
                    {
                      h_67 = t;
                      if(((b_67 != NULL) && (b_67 != h_67)))
                        _fail(h_67);
                      else
                        b_67 = h_67;
                    }
                  }
                }
                t = a_27;
                {
                  ATerm j_67 = NULL;
                  t = not_null(y_66);
                  {
                    t = int_to_string_0(t);
                    {
                      j_67 = t;
                      if(((i_67 != NULL) && (i_67 != j_67)))
                        _fail(j_67);
                      else
                        i_67 = j_67;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_67)), term_c_27), not_null(b_67)), term_b_27);
                    {
                      t = concat_strings_0(t);
                      {
                        k_67 = t;
                        {
                          if(((z_66 != NULL) && (z_66 != k_67)))
                            _fail(k_67);
                          else
                            z_66 = k_67;
                          {
                            ATerm d_27;
                            d_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_66), not_null(y_66)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_27, not_null(z_66)));
                              {
                                ATerm x_2 (ATerm t)
                                {
                                  t = term_o_25;
                                  return(t);
                                }
                                t = assert_1(t, x_2);
                              }
                            }
                            t = d_27;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_l_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_66)), term_q_8)));
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
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  a_68 = t;
  w_67 :
  if(match_cons(a_68, sym_Signature_1))
    {
      b_68 = ATgetArgument(a_68, 0);
      x_67 :
      if(((ATgetType(b_68) == AT_LIST) && !(ATisEmpty(b_68))))
        {
          c_68 = ATgetFirst((ATermList) b_68);
          e_68 = (ATerm) ATgetNext((ATermList) b_68);
          y_67 :
          if(match_cons(c_68, sym_Constructors_1))
            {
              d_68 = ATgetArgument(c_68, 0);
              z_67 :
              if(((ATgetType(e_68) == AT_LIST) && ATisEmpty(e_68)))
                {
                  {
                    ATerm g_68 = NULL,h_68 = NULL,k_68 = NULL;
                    ATerm m_27;
                    m_27 = t;
                    {
                      ATerm i_68 = NULL;
                      t = not_null(d_68);
                      {
                        ATerm j_68 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          i_68 = t;
                          {
                            if(((g_68 != NULL) && (g_68 != i_68)))
                              _fail(i_68);
                            else
                              g_68 = i_68;
                            {
                              t = not_null(d_68);
                              {
                                t = InitConstructors_0(t);
                                {
                                  j_68 = t;
                                  if(((h_68 != NULL) && (h_68 != j_68)))
                                    _fail(j_68);
                                  else
                                    h_68 = j_68;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = m_27;
                    {
                      ATerm l_68 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_68), (ATerm) ATinsert(ATempty, not_null(h_68)));
                      {
                        t = conc_0(t);
                        {
                          l_68 = t;
                          if(((k_68 != NULL) && (k_68 != l_68)))
                            _fail(l_68);
                          else
                            k_68 = l_68;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(k_68));
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  c_69 = t;
  a_69 :
  if(match_cons(c_69, sym_FunType_2))
    {
      d_69 = ATgetArgument(c_69, 0);
      b_69 = ATgetArgument(c_69, 1);
      {
        ATerm f_69 = NULL;
        ATerm g_69 = NULL;
        t = not_null(d_69);
        {
          t = map_1(t, TranslateType_0);
          {
            g_69 = t;
            if(((f_69 != NULL) && (f_69 != g_69)))
              _fail(g_69);
            else
              f_69 = g_69;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(f_69)));
      }
    }
  else
    {
      if(match_cons(c_69, sym_ConstType_1))
        {
          d_69 = ATgetArgument(c_69, 0);
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
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  q_69 = t;
  n_69 :
  if(match_cons(q_69, sym_VarDec_2))
    {
      r_69 = ATgetArgument(q_69, 0);
      s_69 = ATgetArgument(q_69, 1);
      o_69 :
      if(match_cons(s_69, sym_FunType_2))
        {
          t_69 = ATgetArgument(s_69, 0);
          p_69 = ATgetArgument(s_69, 1);
          {
            ATerm w_69 = NULL;
            ATerm x_69 = NULL;
            t = not_null(t_69);
            {
              t = map_1(t, TranslateType_0);
              {
                x_69 = t;
                if(((w_69 != NULL) && (w_69 != x_69)))
                  _fail(x_69);
                else
                  w_69 = x_69;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(w_69)))));
          }
        }
      else
        {
          if(match_cons(s_69, sym_ConstType_1))
            {
              t_69 = ATgetArgument(s_69, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_p_8, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_69)), term_q_8));
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
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  f_70 = t;
  e_70 :
  if(match_cons(f_70, sym_SDef_3))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      i_70 = ATgetArgument(f_70, 2);
      {
        ATerm m_70 = NULL;
        ATerm n_70 = NULL;
        t = not_null(h_70);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            n_70 = t;
            if(((m_70 != NULL) && (m_70 != n_70)))
              _fail(n_70);
            else
              m_70 = n_70;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_p_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_70)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(m_70)), term_n_27))))));
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
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
  c_71 = t;
  w_70 :
  if(match_cons(c_71, sym_Specification_1))
    {
      d_71 = ATgetArgument(c_71, 0);
      x_70 :
      if(((ATgetType(d_71) == AT_LIST) && !(ATisEmpty(d_71))))
        {
          e_71 = ATgetFirst((ATermList) d_71);
          g_71 = (ATerm) ATgetNext((ATermList) d_71);
          y_70 :
          if(match_cons(e_71, sym_Signature_1))
            {
              f_71 = ATgetArgument(e_71, 0);
              z_70 :
              if(((ATgetType(g_71) == AT_LIST) && !(ATisEmpty(g_71))))
                {
                  h_71 = ATgetFirst((ATermList) g_71);
                  j_71 = (ATerm) ATgetNext((ATermList) g_71);
                  a_71 :
                  if(match_cons(h_71, sym_Strategies_1))
                    {
                      i_71 = ATgetArgument(h_71, 0);
                      b_71 :
                      if(((ATgetType(j_71) == AT_LIST) && ATisEmpty(j_71)))
                        {
                          {
                            ATerm m_71 = NULL,n_71 = NULL,h_72 = NULL;
                            ATerm o_27;
                            o_27 = t;
                            {
                              ATerm o_71 = NULL;
                              t = not_null(i_71);
                              {
                                ATerm g_72 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  o_71 = t;
                                  {
                                    if(((m_71 != NULL) && (m_71 != o_71)))
                                      _fail(o_71);
                                    else
                                      m_71 = o_71;
                                    {
                                      t = term_x_7;
                                      {
                                        ATerm t_27 = t;
                                        int u_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm y_2 (ATerm t)
                                              {
                                                ATerm p_71 = NULL;
                                                ATerm q_71 = NULL,f_72 = NULL;
                                                ATerm e_72 = NULL;
                                                e_72 = t;
                                                if(((q_71 != NULL) && (q_71 != e_72)))
                                                  _fail(e_72);
                                                else
                                                  q_71 = e_72;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_v_27, not_null(q_71));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      f_72 = t;
                                                      if(((p_71 != NULL) && (p_71 != f_72)))
                                                        _fail(f_72);
                                                      else
                                                        p_71 = f_72;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(p_71));
                                                return(t);
                                              }
                                              t = map_1(t, y_2);
                                            }
                                            ;
                                            LocalPopChoice(u_27);
                                          }
                                        else
                                          {
                                            t = t_27;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          g_72 = t;
                                          if(((n_71 != NULL) && (n_71 != g_72)))
                                            _fail(g_72);
                                          else
                                            n_71 = g_72;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = o_27;
                            {
                              ATerm i_72 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_71)), not_null(m_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(f_71))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_e_28, (ATerm) ATinsert(ATempty, term_h_28)))), not_null(n_71));
                              {
                                t = concat_0(t);
                                {
                                  i_72 = t;
                                  if(((h_72 != NULL) && (h_72 != i_72)))
                                    _fail(i_72);
                                  else
                                    h_72 = i_72;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(h_72));
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
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
  e_73 = t;
  b_73 :
  if(((ATgetType(e_73) == AT_LIST) && !(ATisEmpty(e_73))))
    {
      f_73 = ATgetFirst((ATermList) e_73);
      g_73 = (ATerm) ATgetNext((ATermList) e_73);
      t = not_null(g_73);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
  v_73 = t;
  u_73 :
  if(match_cons(v_73, sym__2))
    {
      w_73 = ATgetArgument(v_73, 0);
      x_73 = ATgetArgument(v_73, 1);
      {
        ATerm j_28;
        j_28 = t;
        {
          ATerm a_74 = NULL;
          ATerm b_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), not_null(x_73));
          {
            ATerm k_28 = t;
            int l_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(l_28);
              }
            else
              {
                t = k_28;
                t = (ATerm) ATempty;
              }
            {
              b_74 = t;
              if(((a_74 != NULL) && (a_74 != b_74)))
                _fail(b_74);
              else
                a_74 = b_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_73), not_null(x_73), not_null(a_74));
            t = table_put_0(t);
          }
        }
        t = j_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm r_120 (ATerm))
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
  ATerm m_28;
  m_28 = t;
  {
    ATerm l_74 = NULL;
    ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
    t = r_120(t);
    {
      l_74 = t;
      {
        if(((k_74 != NULL) && (k_74 != l_74)))
          _fail(l_74);
        else
          k_74 = l_74;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_74), term_p_28);
              t = table_get_0(t);
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_74 = t;
            h_74 :
            if(((ATgetType(m_74) == AT_LIST) && !(ATisEmpty(m_74))))
              {
                n_74 = ATgetFirst((ATermList) m_74);
                o_74 = (ATerm) ATgetNext((ATermList) m_74);
                {
                  if(((j_74 != NULL) && (j_74 != n_74)))
                    _fail(n_74);
                  else
                    j_74 = n_74;
                  {
                    if(((i_74 != NULL) && (i_74 != o_74)))
                      _fail(o_74);
                    else
                      i_74 = o_74;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_74), term_p_28, not_null(i_74));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_74);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm p_74 = NULL;
                              p_74 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_74), not_null(p_74));
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
  t = m_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_94(t);
      t = u_94(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        t = u_94(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm q_120 (ATerm))
{
  ATerm w_74 = NULL;
  ATerm s_28;
  s_28 = t;
  {
    ATerm x_74 = NULL;
    ATerm y_74 = NULL;
    t = q_120(t);
    {
      x_74 = t;
      {
        if(((w_74 != NULL) && (w_74 != x_74)))
          _fail(x_74);
        else
          w_74 = x_74;
        {
          ATerm z_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), term_p_28);
          {
            ATerm t_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_28);
              }
            else
              {
                t = t_28;
                t = (ATerm) ATempty;
              }
            {
              z_74 = t;
              if(((y_74 != NULL) && (y_74 != z_74)))
                _fail(z_74);
              else
                y_74 = z_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_74), term_p_28, (ATerm) ATinsert(CheckATermList(not_null(y_74)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm s_120 (ATerm), ATerm t_120 (ATerm))
{
  t = begin_scope_1(t, s_120);
  {
    ATerm a_3 (ATerm t)
    {
      t = end_scope_1(t, s_120);
      return(t);
    }
    t = restore_always_2(t, t_120, a_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_120 (ATerm))
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  j_75 = t;
  i_75 :
  if(match_cons(j_75, sym__2))
    {
      k_75 = ATgetArgument(j_75, 0);
      l_75 = ATgetArgument(j_75, 1);
      {
        ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
        ATerm y_28;
        y_28 = t;
        {
          ATerm r_75 = NULL;
          ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
          t = u_120(t);
          {
            r_75 = t;
            {
              if(((o_75 != NULL) && (o_75 != r_75)))
                _fail(r_75);
              else
                o_75 = r_75;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_75), not_null(k_75), not_null(l_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_29 = t;
                    int f_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_75), term_p_28);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(f_29);
                      }
                    else
                      {
                        t = c_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_75 = t;
                      h_75 :
                      if(((ATgetType(s_75) == AT_LIST) && !(ATisEmpty(s_75))))
                        {
                          t_75 = ATgetFirst((ATermList) s_75);
                          u_75 = (ATerm) ATgetNext((ATermList) s_75);
                          {
                            if(((p_75 != NULL) && (p_75 != t_75)))
                              _fail(t_75);
                            else
                              p_75 = t_75;
                            {
                              if(((q_75 != NULL) && (q_75 != u_75)))
                                _fail(u_75);
                              else
                                q_75 = u_75;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_75), term_p_28, (ATerm) ATinsert(CheckATermList(not_null(q_75)), (ATerm) ATinsert(CheckATermList(not_null(p_75)), not_null(k_75))));
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
        t = y_28;
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
  ATerm a_76 = NULL,b_76 = NULL;
  ATerm g_29;
  g_29 = t;
  {
    ATerm c_76 = NULL;
    ATerm d_76 = NULL;
    t = term_i_29;
    {
      c_76 = t;
      {
        if(((a_76 != NULL) && (a_76 != c_76)))
          _fail(c_76);
        else
          a_76 = c_76;
        {
          t = term_x_15;
          {
            d_76 = t;
            if(((b_76 != NULL) && (b_76 != d_76)))
              _fail(d_76);
            else
              b_76 = d_76;
          }
        }
      }
    }
  }
  t = g_29;
  {
    ATerm j_29;
    j_29 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_76), (ATerm) ATmakeAppl(sym_Defined_2, term_k_29, not_null(b_76)));
      {
        ATerm b_3 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = assert_1(t, b_3);
      }
    }
    t = j_29;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm j_76 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = term_h_14;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                ATerm n_29 = t;
                int s_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    ;
                    LocalPopChoice(s_29);
                  }
                else
                  {
                    t = n_29;
                    {
                      ATerm t_29 = t;
                      int u_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          ;
                          LocalPopChoice(u_29);
                        }
                      else
                        {
                          t = t_29;
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
          t = _all(t, j_76);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, c_3, d_3);
      return(t);
    }
    t = j_76(t);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          ATerm i_76 = NULL;
          i_76 = t;
          h_76 :
          if(match_cons(i_76, sym_InitCachedTerms_0))
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
  ATerm n_76 = NULL;
  ATerm y_29;
  y_29 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm o_76 = NULL,p_76 = NULL;
      o_76 = t;
      m_76 :
      if(match_cons(o_76, sym_Program_1))
        {
          p_76 = ATgetArgument(o_76, 0);
          if(((n_76 != NULL) && (n_76 != p_76)))
            _fail(p_76);
          else
            n_76 = p_76;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_30), not_null(n_76)), term_d_30));
      {
        t = printnl_0(t);
        {
          t = term_o_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_29;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
  t_76 = t;
  s_76 :
  if(match_cons(t_76, sym__2))
    {
      u_76 = ATgetArgument(t_76, 0);
      v_76 = ATgetArgument(t_76, 1);
      {
        ATerm f_30;
        f_30 = t;
        t = SSL_printnl(not_null(u_76), not_null(v_76));
        t = f_30;
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
  ATerm a_77 = NULL;
  a_77 = t;
  t = SSL_implode_string(not_null(a_77));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      {
        ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
        f_77 = t;
        e_77 :
        if(((ATgetType(f_77) == AT_LIST) && !(ATisEmpty(f_77))))
          {
            g_77 = ATgetFirst((ATermList) f_77);
            h_77 = (ATerm) ATgetNext((ATermList) f_77);
            {
              t = not_null(g_77);
              {
                ATerm i_3 (ATerm t)
                {
                  t = not_null(h_77);
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
  ATerm t_77 = NULL;
  ATerm v_77 = NULL;
  t_77 = t;
  {
    ATerm w_77 = NULL;
    ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
    t = not_null(t_77);
    {
      w_77 = t;
      {
        t = SSL_explode_term(not_null(w_77));
        {
          y_77 = t;
          r_77 :
          if(match_cons(y_77, sym__2))
            {
              z_77 = ATgetArgument(y_77, 0);
              a_78 = ATgetArgument(y_77, 1);
              s_77 :
              if(match_string(z_77, ""))
                {
                  if(((v_77 != NULL) && (v_77 != a_78)))
                    _fail(a_78);
                  else
                    v_77 = a_78;
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
      t = not_null(v_77);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_102 (ATerm))
{
  ATerm e_78 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_78);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          t = Nil_0(t);
          t = e_102(t);
        }
      }
    return(t);
  }
  t = e_78(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  g_78 :
  if(match_cons(h_78, sym__2))
    {
      i_78 = ATgetArgument(h_78, 0);
      j_78 = ATgetArgument(h_78, 1);
      {
        t = not_null(i_78);
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(j_78);
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
  ATerm k_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = k_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_78 = NULL;
  o_78 = t;
  t = SSL_explode_string(not_null(o_78));
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
  ATerm s_78 = NULL;
  s_78 = t;
  t = SSL_is_string(not_null(s_78));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      {
        ATerm v_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_3);
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = v_31;
            {
              ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
              b_79 = t;
              a_79 :
              if(match_cons(b_79, sym_Path_1))
                {
                  c_79 = ATgetArgument(b_79, 0);
                  t = not_null(c_79);
                }
              else
                {
                  if(match_cons(b_79, sym_Var_1))
                    {
                      c_79 = ATgetArgument(b_79, 0);
                      {
                        t = not_null(c_79);
                        {
                          ATerm a_32 = t;
                          int b_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(b_32);
                            }
                          else
                            {
                              t = a_32;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = term_c_32;
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
                      if(match_cons(b_79, sym_Prefix_2))
                        {
                          c_79 = ATgetArgument(b_79, 0);
                          d_79 = ATgetArgument(b_79, 1);
                          {
                            ATerm i_79 = NULL,k_79 = NULL;
                            ATerm d_32;
                            d_32 = t;
                            {
                              ATerm j_79 = NULL;
                              t = not_null(c_79);
                              {
                                t = eval_config_0(t);
                                {
                                  j_79 = t;
                                  if(((i_79 != NULL) && (i_79 != j_79)))
                                    _fail(j_79);
                                  else
                                    i_79 = j_79;
                                }
                              }
                            }
                            t = d_32;
                            {
                              ATerm l_79 = NULL;
                              t = not_null(d_79);
                              {
                                t = eval_config_0(t);
                                {
                                  l_79 = t;
                                  if(((k_79 != NULL) && (k_79 != l_79)))
                                    _fail(l_79);
                                  else
                                    k_79 = l_79;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_79), not_null(k_79));
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
  ATerm t_79 = NULL;
  t_79 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_6, not_null(t_79));
    {
      t = table_get_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_32;
            e_32 = t;
            {
              ATerm v_79 = NULL;
              ATerm w_79 = NULL;
              w_79 = t;
              if(((v_79 != NULL) && (v_79 != w_79)))
                _fail(w_79);
              else
                v_79 = w_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_6, not_null(t_79), not_null(v_79));
                t = table_put_0(t);
              }
            }
            t = e_32;
          }
          return(t);
        }
        t = try_1(t, m_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_114 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm f_32;
    f_32 = t;
    {
      ATerm a_80 = NULL;
      ATerm b_80 = NULL;
      t = term_g_32;
      {
        t = get_config_0(t);
        {
          b_80 = t;
          if(((a_80 != NULL) && (a_80 != b_80)))
            _fail(b_80);
          else
            a_80 = b_80;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), term_h_32);
        t = geq_0(t);
      }
    }
    t = f_32;
    t = k_114(t);
    return(t);
  }
  t = try_1(t, n_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL;
  g_80 = t;
  e_80 :
  if(match_cons(g_80, sym__2))
    {
      h_80 = ATgetArgument(g_80, 0);
      i_80 = ATgetArgument(g_80, 1);
      t = SSL_WriteToTextFile(not_null(h_80), not_null(i_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_73 (ATerm), ATerm s_73 (ATerm))
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
  s_80 = t;
  r_80 :
  if(match_cons(s_80, sym__2))
    {
      t_80 = ATgetArgument(s_80, 0);
      u_80 = ATgetArgument(s_80, 1);
      {
        ATerm y_80 = NULL,a_81 = NULL;
        ATerm z_80 = NULL;
        t = SSLgetAnnotations(not_null(s_80));
        {
          z_80 = t;
          if(((y_80 != NULL) && (y_80 != z_80)))
            _fail(z_80);
          else
            y_80 = z_80;
        }
        {
          t = not_null(t_80);
          {
            ATerm c_81 = NULL;
            t = r_73(t);
            {
              a_81 = t;
              {
                t = not_null(u_80);
                {
                  ATerm e_81 = NULL;
                  t = s_73(t);
                  {
                    c_81 = t;
                    {
                      ATerm f_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_81), not_null(c_81)), not_null(y_80));
                      {
                        f_81 = t;
                        if(((e_81 != NULL) && (e_81 != f_81)))
                          _fail(f_81);
                        else
                          e_81 = f_81;
                      }
                      t = not_null(e_81);
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
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  n_81 = t;
  m_81 :
  if(match_cons(n_81, sym__2))
    {
      o_81 = ATgetArgument(n_81, 0);
      p_81 = ATgetArgument(n_81, 1);
      t = SSL_WriteToBinaryFile(not_null(o_81), not_null(p_81));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_81 = NULL;
  ATerm i_32;
  i_32 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm a_82 = NULL,b_82 = NULL;
            a_82 = t;
            w_81 :
            if(match_cons(a_82, sym_Output_1))
              {
                b_82 = ATgetArgument(a_82, 0);
                if(((z_81 != NULL) && (z_81 != b_82)))
                  _fail(b_82);
                else
                  z_81 = b_82;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          ;
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          {
            ATerm c_82 = NULL;
            t = term_l_32;
            {
              c_82 = t;
              if(((z_81 != NULL) && (z_81 != c_82)))
                _fail(c_82);
              else
                z_81 = c_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = i_32;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(z_81);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm d_82 = NULL;
              d_82 = t;
              y_81 :
              if(!(match_cons(d_82, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_113 (ATerm))
{
  ATerm j_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  ATerm o_32;
  o_32 = t;
  t = dtime_0(t);
  t = o_32;
  {
    t = f_113(t);
    {
      ATerm p_32;
      p_32 = t;
      {
        ATerm k_82 = NULL;
        t = dtime_0(t);
        {
          k_82 = t;
          if(((j_82 != NULL) && (j_82 != k_82)))
            _fail(k_82);
          else
            j_82 = k_82;
        }
      }
      t = p_32;
      {
        l_82 = t;
        i_82 :
        if(match_cons(l_82, sym__2))
          {
            m_82 = ATgetArgument(l_82, 0);
            n_82 = ATgetArgument(l_82, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_82)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_82))), not_null(n_82));
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
ATerm debug_1 (ATerm t, ATerm a_112 (ATerm))
{
  ATerm q_32;
  q_32 = t;
  {
    ATerm u_82 = NULL,w_82 = NULL;
    ATerm r_32;
    r_32 = t;
    {
      ATerm v_82 = NULL;
      t = a_112(t);
      {
        v_82 = t;
        if(((u_82 != NULL) && (u_82 != v_82)))
          _fail(v_82);
        else
          u_82 = v_82;
      }
    }
    t = r_32;
    {
      ATerm x_82 = NULL;
      x_82 = t;
      if(((w_82 != NULL) && (w_82 != x_82)))
        _fail(x_82);
      else
        w_82 = x_82;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_82)), not_null(u_82)));
        t = printnl_0(t);
      }
    }
  }
  t = q_32;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_83 = NULL;
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_83 = NULL;
      c_83 = t;
      {
        if(((b_83 != NULL) && (b_83 != c_83)))
          _fail(c_83);
        else
          b_83 = c_83;
        t = SSL_ReadFromFile(not_null(b_83));
      }
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_3 (ATerm t)
        {
          t = term_u_32;
          return(t);
        }
        t = debug_1(t, u_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_109 (ATerm), ATerm p_109 (ATerm))
{
  ATerm g_83 = NULL,i_83 = NULL;
  ATerm v_32;
  v_32 = t;
  {
    ATerm h_83 = NULL;
    t = o_109(t);
    {
      h_83 = t;
      if(((g_83 != NULL) && (g_83 != h_83)))
        _fail(h_83);
      else
        g_83 = h_83;
    }
  }
  t = v_32;
  {
    ATerm j_83 = NULL;
    t = p_109(t);
    {
      j_83 = t;
      if(((i_83 != NULL) && (i_83 != j_83)))
        _fail(j_83);
      else
        i_83 = j_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_83), not_null(i_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_83 = NULL;
  ATerm w_32;
  w_32 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          ATerm q_83 = NULL,r_83 = NULL;
          q_83 = t;
          n_83 :
          if(match_cons(q_83, sym_Input_1))
            {
              r_83 = ATgetArgument(q_83, 0);
              if(((p_83 != NULL) && (p_83 != r_83)))
                _fail(r_83);
              else
                p_83 = r_83;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_3);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        {
          ATerm s_83 = NULL;
          t = term_z_32;
          {
            s_83 = t;
            if(((p_83 != NULL) && (p_83 != s_83)))
              _fail(s_83);
            else
              p_83 = s_83;
          }
        }
      }
  }
  t = w_32;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(p_83);
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
    ATerm w_83 = NULL;
    w_83 = t;
    v_83 :
    if(!(match_string(w_83, "-v")))
      {
        if(!(match_string(w_83, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_b_33;
    t = set_config_0(t);
    t = term_c_33;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_d_33;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm z_83 = NULL;
    z_83 = t;
    x_83 :
    if(!(match_string(z_83, "-k")))
      {
        if(!(match_string(z_83, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm e_33;
    e_33 = t;
    {
      ATerm a_84 = NULL;
      ATerm b_84 = NULL;
      t = string_to_int_0(t);
      {
        b_84 = t;
        if(((a_84 != NULL) && (a_84 != b_84)))
          _fail(b_84);
        else
          a_84 = b_84;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_33, not_null(a_84));
        t = set_config_0(t);
      }
    }
    t = e_33;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_g_33;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_84 = NULL;
  e_84 = t;
  t = SSL_string_to_int(not_null(e_84));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm n_84 = NULL;
        n_84 = t;
        i_84 :
        if(!(match_string(n_84, "-S")))
          {
            if(!(match_string(n_84, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_j_33;
        t = set_config_0(t);
        t = term_k_33;
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_l_33;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm o_84 = NULL;
              o_84 = t;
              j_84 :
              if(!(match_string(o_84, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              ATerm r_84 = NULL;
              ATerm o_33;
              o_33 = t;
              {
                ATerm p_84 = NULL;
                ATerm q_84 = NULL;
                t = string_to_int_0(t);
                {
                  q_84 = t;
                  if(((p_84 != NULL) && (p_84 != q_84)))
                    _fail(q_84);
                  else
                    p_84 = q_84;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_32, not_null(p_84));
                  t = set_config_0(t);
                }
              }
              t = o_33;
              {
                ATerm s_84 = NULL;
                s_84 = t;
                if(((r_84 != NULL) && (r_84 != s_84)))
                  _fail(s_84);
                else
                  r_84 = s_84;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_84));
              }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_p_33;
              return(t);
            }
            t = ArgOption_3(t, g_4, h_4, i_4);
            ;
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            {
              ATerm j_4 (ATerm t)
              {
                ATerm t_84 = NULL;
                t_84 = t;
                m_84 :
                if(!(match_string(t_84, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_4 (ATerm t)
              {
                t = term_r_33;
                t = set_config_0(t);
                t = term_v_33;
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = term_w_33;
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
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
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
    ATerm z_84 = NULL;
    z_84 = t;
    w_84 :
    if(!(match_string(z_84, "-o")))
      {
        if(!(match_string(z_84, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm c_85 = NULL;
    ATerm b_34;
    b_34 = t;
    {
      ATerm a_85 = NULL;
      ATerm b_85 = NULL;
      b_85 = t;
      if(((a_85 != NULL) && (a_85 != b_85)))
        _fail(b_85);
      else
        a_85 = b_85;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_34, not_null(a_85));
        t = set_config_0(t);
      }
    }
    t = b_34;
    {
      ATerm d_85 = NULL;
      d_85 = t;
      if(((c_85 != NULL) && (c_85 != d_85)))
        _fail(d_85);
      else
        c_85 = d_85;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_85));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_d_34;
    return(t);
  }
  t = ArgOption_3(t, m_4, n_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm p_4 (ATerm t)
        {
          ATerm h_85 = NULL;
          h_85 = t;
          g_85 :
          if(!(match_string(h_85, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_i_34;
          t = set_config_0(t);
          t = term_j_34;
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_k_34;
          return(t);
        }
        t = Option_3(t, p_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL;
  n_85 = t;
  l_85 :
  if(match_string(n_85, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(n_85) == AT_LIST) && !(ATisEmpty(n_85))))
        {
          o_85 = ATgetFirst((ATermList) n_85);
          p_85 = (ATerm) ATgetNext((ATermList) n_85);
          m_85 :
          if(((ATgetType(p_85) == AT_LIST) && !(ATisEmpty(p_85))))
            {
              q_85 = ATgetFirst((ATermList) p_85);
              r_85 = (ATerm) ATgetNext((ATermList) p_85);
              {
                ATerm v_85 = NULL;
                ATerm l_34;
                l_34 = t;
                {
                  t = not_null(o_85);
                  t = k_0(t);
                }
                t = l_34;
                {
                  ATerm w_85 = NULL;
                  t = not_null(q_85);
                  {
                    t = l_0(t);
                    {
                      w_85 = t;
                      if(((v_85 != NULL) && (v_85 != w_85)))
                        _fail(w_85);
                      else
                        v_85 = w_85;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_85)), not_null(v_85));
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
    ATerm d_86 = NULL;
    d_86 = t;
    a_86 :
    if(!(match_string(d_86, "-i")))
      {
        if(!(match_string(d_86, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm g_86 = NULL;
    ATerm n_34;
    n_34 = t;
    {
      ATerm e_86 = NULL;
      ATerm f_86 = NULL;
      f_86 = t;
      if(((e_86 != NULL) && (e_86 != f_86)))
        _fail(f_86);
      else
        e_86 = f_86;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_34, not_null(e_86));
        t = set_config_0(t);
      }
    }
    t = n_34;
    {
      ATerm h_86 = NULL;
      h_86 = t;
      if(((g_86 != NULL) && (g_86 != h_86)))
        _fail(h_86);
      else
        g_86 = h_86;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_86));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_q_34;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm t_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_34);
          }
        else
          {
            t = t_34;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATempty, term_w_34));
  {
    t = printnl_0(t);
    {
      t = term_o_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_86 = NULL;
  l_86 = t;
  t = SSL_TicksToSeconds(not_null(l_86));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
  q_86 = t;
  p_86 :
  if(match_cons(q_86, sym__2))
    {
      r_86 = ATgetArgument(q_86, 0);
      s_86 = ATgetArgument(q_86, 1);
      {
        ATerm x_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_86), not_null(s_86));
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = x_34;
            t = SSL_addr(not_null(r_86), not_null(s_86));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_107 (ATerm), ATerm a_108 (ATerm))
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_107(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
        ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
        z_86 = t;
        y_86 :
        if(((ATgetType(z_86) == AT_LIST) && !(ATisEmpty(z_86))))
          {
            a_87 = ATgetFirst((ATermList) z_86);
            b_87 = (ATerm) ATgetNext((ATermList) z_86);
            {
              ATerm e_87 = NULL;
              ATerm f_87 = NULL;
              t = not_null(b_87);
              {
                t = foldr_2(t, z_107, a_108);
                {
                  f_87 = t;
                  if(((e_87 != NULL) && (e_87 != f_87)))
                    _fail(f_87);
                  else
                    e_87 = f_87;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_87), not_null(e_87));
                t = a_108(t);
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
ATerm crush_2 (ATerm t, ATerm x_106 (ATerm), ATerm y_106 (ATerm))
{
  ATerm o_87 = NULL;
  ATerm q_87 = NULL;
  o_87 = t;
  {
    ATerm r_87 = NULL;
    ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
    t = not_null(o_87);
    {
      r_87 = t;
      {
        t = SSL_explode_term(not_null(r_87));
        {
          t_87 = t;
          n_87 :
          if(match_cons(t_87, sym__2))
            {
              u_87 = ATgetArgument(t_87, 0);
              v_87 = ATgetArgument(t_87, 1);
              if(((q_87 != NULL) && (q_87 != v_87)))
                _fail(v_87);
              else
                q_87 = v_87;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_87);
      t = foldr_2(t, x_106, y_106);
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
    ATerm v_4 (ATerm t)
    {
      t = term_c_16;
      return(t);
    }
    t = crush_2(t, v_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  a_88 :
  if(match_cons(b_88, sym__2))
    {
      c_88 = ATgetArgument(b_88, 0);
      d_88 = ATgetArgument(b_88, 1);
      {
        ATerm c_35;
        c_35 = t;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_88), not_null(d_88));
              ;
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              t = SSL_gtr(not_null(c_88), not_null(d_88));
            }
        }
        t = c_35;
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
  ATerm j_88 = NULL;
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
      k_88 = t;
      i_88 :
      if(match_cons(k_88, sym__2))
        {
          l_88 = ATgetArgument(k_88, 0);
          m_88 = ATgetArgument(k_88, 1);
          {
            if(((j_88 != NULL) && (j_88 != l_88)))
              _fail(l_88);
            else
              j_88 = l_88;
            if(((j_88 != NULL) && (j_88 != m_88)))
              _fail(m_88);
            else
              j_88 = m_88;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_114 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm h_35;
    h_35 = t;
    {
      ATerm p_88 = NULL;
      ATerm q_88 = NULL;
      t = term_g_32;
      {
        t = get_config_0(t);
        {
          q_88 = t;
          if(((p_88 != NULL) && (p_88 != q_88)))
            _fail(q_88);
          else
            p_88 = q_88;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_88), term_o_16);
        t = geq_0(t);
      }
    }
    t = h_35;
    t = j_114(t);
    return(t);
  }
  t = try_1(t, w_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm u_88 = NULL,w_88 = NULL;
    ATerm i_35;
    i_35 = t;
    {
      ATerm v_88 = NULL;
      t = run_time_0(t);
      {
        v_88 = t;
        if(((u_88 != NULL) && (u_88 != v_88)))
          _fail(v_88);
        else
          u_88 = v_88;
      }
    }
    t = i_35;
    {
      ATerm x_88 = NULL;
      t = term_j_35;
      {
        t = get_config_0(t);
        {
          x_88 = t;
          if(((w_88 != NULL) && (w_88 != x_88)))
            _fail(x_88);
          else
            w_88 = x_88;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_35), not_null(u_88)), term_k_35), not_null(w_88)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_4);
  {
    t = term_c_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_89 = NULL;
  e_89 = t;
  d_89 :
  if(match_cons(e_89, sym_Version_0))
    {
      ATerm g_89 = NULL,i_89 = NULL;
      ATerm n_35;
      n_35 = t;
      {
        ATerm h_89 = NULL;
        t = SSLgetAnnotations(not_null(e_89));
        {
          h_89 = t;
          if(((g_89 != NULL) && (g_89 != h_89)))
            _fail(h_89);
          else
            g_89 = h_89;
        }
      }
      t = n_35;
      {
        ATerm j_89 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_89));
        {
          j_89 = t;
          if(((i_89 != NULL) && (i_89 != j_89)))
            _fail(j_89);
          else
            i_89 = j_89;
        }
        t = not_null(i_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_113 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        {
          ATerm r_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(s_35);
            }
          else
            {
              t = r_35;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_4);
  t = d_113(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_89 = NULL;
  o_89 = t;
  t = SSL_table_create(not_null(o_89));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_89 = NULL;
  s_89 = t;
  {
    ATerm t_35;
    t_35 = t;
    {
      t = term_u_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_35, term_v_35, not_null(s_89));
          t = table_put_0(t);
        }
      }
    }
    t = t_35;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_89 = NULL;
  w_89 = t;
  t = SSL_table_destroy(not_null(w_89));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_90 = NULL;
  a_90 = t;
  t = SSL_exit(not_null(a_90));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL;
  e_90 = t;
  d_90 :
  if(((ATgetType(e_90) == AT_LIST) && ATisEmpty(e_90)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_90) == AT_LIST) && !(ATisEmpty(e_90))))
        {
          f_90 = ATgetFirst((ATermList) e_90);
          g_90 = (ATerm) ATgetNext((ATermList) e_90);
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
  ATerm w_35;
  w_35 = t;
  {
    ATerm j_90 = NULL;
    ATerm m_90 = NULL;
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        {
          ATerm k_90 = NULL;
          ATerm l_90 = NULL;
          l_90 = t;
          if(((k_90 != NULL) && (k_90 != l_90)))
            _fail(l_90);
          else
            k_90 = l_90;
          t = (ATerm) ATinsert(ATempty, not_null(k_90));
        }
      }
    {
      m_90 = t;
      if(((j_90 != NULL) && (j_90 != m_90)))
        _fail(m_90);
      else
        j_90 = m_90;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_32, not_null(j_90));
      t = printnl_0(t);
    }
  }
  t = w_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_101 (ATerm))
{
  ATerm p_90 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = Cons_2(t, p_101, p_90);
      }
    return(t);
  }
  t = p_90(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
  y_90 = t;
  v_90 :
  if(((ATgetType(y_90) == AT_LIST) && !(ATisEmpty(y_90))))
    {
      w_90 = ATgetFirst((ATermList) y_90);
      x_90 = (ATerm) ATgetNext((ATermList) y_90);
      {
        ATerm b_91 = NULL;
        t = not_null(x_90);
        {
          ATerm b_36;
          b_36 = t;
          {
            ATerm c_91 = NULL,e_91 = NULL,g_91 = NULL;
            ATerm c_36;
            c_36 = t;
            {
              ATerm d_91 = NULL;
              t = i_0(t);
              {
                d_91 = t;
                if(((c_91 != NULL) && (c_91 != d_91)))
                  _fail(d_91);
                else
                  c_91 = d_91;
              }
            }
            t = c_36;
            {
              ATerm f_91 = NULL;
              t = not_null(w_90);
              {
                t = g_0(t);
                {
                  f_91 = t;
                  if(((e_91 != NULL) && (e_91 != f_91)))
                    _fail(f_91);
                  else
                    e_91 = f_91;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_91)), not_null(e_91));
                {
                  g_91 = t;
                  if(((b_91 != NULL) && (b_91 != g_91)))
                    _fail(g_91);
                  else
                    b_91 = g_91;
                }
              }
            }
          }
          t = b_36;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(b_91);
              return(t);
            }
            t = reverse_acc_2(t, g_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_90) == AT_LIST) && ATisEmpty(y_90)))
        {
          {
            t = term_m_25;
            t = i_0(t);
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
  ATerm a_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm r_91 = NULL,s_91 = NULL;
  r_91 = t;
  q_91 :
  if(match_cons(r_91, sym_Program_1))
    {
      s_91 = ATgetArgument(r_91, 0);
      {
        ATerm v_91 = NULL,x_91 = NULL;
        ATerm w_91 = NULL;
        t = SSLgetAnnotations(not_null(r_91));
        {
          w_91 = t;
          if(((v_91 != NULL) && (v_91 != w_91)))
            _fail(w_91);
          else
            v_91 = w_91;
        }
        {
          t = not_null(s_91);
          {
            ATerm z_91 = NULL;
            t = u_81(t);
            {
              x_91 = t;
              {
                ATerm a_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_91)), not_null(v_91));
                {
                  a_92 = t;
                  if(((z_91 != NULL) && (z_91 != a_92)))
                    _fail(a_92);
                  else
                    z_91 = a_92;
                }
                t = not_null(z_91);
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
  ATerm j_92 = NULL;
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_92 = NULL;
      t = term_j_35;
      {
        t = get_config_0(t);
        {
          k_92 = t;
          if(((j_92 != NULL) && (j_92 != k_92)))
            _fail(k_92);
          else
            j_92 = k_92;
        }
      }
      ;
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm l_92 = NULL;
            l_92 = t;
            if(((j_92 != NULL) && (j_92 != l_92)))
              _fail(l_92);
            else
              j_92 = l_92;
            return(t);
          }
          t = Program_1(t, c_5);
          return(t);
        }
        t = option_defined_1(t, b_5);
      }
    }
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        t = not_null(j_92);
        return(t);
      }
      t = short_description_1(t, h_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = term_f_36;
      {
        t = echo_0(t);
        {
          t = term_i_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm m_92 = NULL;
                  ATerm n_92 = NULL;
                  n_92 = t;
                  if(((m_92 != NULL) && (m_92 != n_92)))
                    _fail(n_92);
                  else
                    m_92 = n_92;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_92)), term_j_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm o_92 = NULL;
                    ATerm p_92 = NULL;
                    ATerm k_5 (ATerm t)
                    {
                      t = not_null(j_92);
                      return(t);
                    }
                    t = long_description_1(t, k_5);
                    {
                      p_92 = t;
                      if(((o_92 != NULL) && (o_92 != p_92)))
                        _fail(p_92);
                      else
                        o_92 = p_92;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_92)), term_k_36);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_5);
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
  ATerm l_36;
  l_36 = t;
  {
    ATerm v_92 = NULL;
    ATerm w_92 = NULL;
    w_92 = t;
    if(((v_92 != NULL) && (v_92 != w_92)))
      _fail(w_92);
    else
      v_92 = w_92;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATempty, not_null(v_92)));
      t = printnl_0(t);
    }
  }
  t = l_36;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_112 (ATerm))
{
  ATerm m_36;
  m_36 = t;
  {
    t = b_112(t);
    t = debug_0(t);
  }
  t = m_36;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm d_93 = NULL,e_93 = NULL;
  d_93 = t;
  c_93 :
  if(match_cons(d_93, sym_Undefined_1))
    {
      e_93 = ATgetArgument(d_93, 0);
      {
        ATerm h_93 = NULL,j_93 = NULL;
        ATerm i_93 = NULL;
        t = SSLgetAnnotations(not_null(d_93));
        {
          i_93 = t;
          if(((h_93 != NULL) && (h_93 != i_93)))
            _fail(i_93);
          else
            h_93 = i_93;
        }
        {
          t = not_null(e_93);
          {
            ATerm l_93 = NULL;
            t = v_81(t);
            {
              j_93 = t;
              {
                ATerm m_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_93)), not_null(h_93));
                {
                  m_93 = t;
                  if(((l_93 != NULL) && (l_93 != m_93)))
                    _fail(m_93);
                  else
                    l_93 = m_93;
                }
                t = not_null(l_93);
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
ATerm fetch_1 (ATerm t, ATerm y_101 (ATerm))
{
  ATerm r_93 (ATerm t)
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_101, _id);
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        t = Cons_2(t, _id, r_93);
      }
    return(t);
  }
  t = r_93(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_115 (ATerm))
{
  t = fetch_1(t, m_115);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_93 = NULL;
  w_93 = t;
  v_93 :
  if(match_cons(w_93, sym_Help_0))
    {
      ATerm y_93 = NULL,a_94 = NULL;
      ATerm p_36;
      p_36 = t;
      {
        ATerm z_93 = NULL;
        t = SSLgetAnnotations(not_null(w_93));
        {
          z_93 = t;
          if(((y_93 != NULL) && (y_93 != z_93)))
            _fail(z_93);
          else
            y_93 = z_93;
        }
      }
      t = p_36;
      {
        ATerm b_94 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_93));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_94(t);
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL;
  k_94 = t;
  j_94 :
  if(match_cons(k_94, sym__2))
    {
      l_94 = ATgetArgument(k_94, 0);
      m_94 = ATgetArgument(k_94, 1);
      t = SSL_table_get(not_null(l_94), not_null(m_94));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
  v_94 = t;
  s_94 :
  if(match_cons(v_94, sym__3))
    {
      w_94 = ATgetArgument(v_94, 0);
      x_94 = ATgetArgument(v_94, 1);
      y_94 = ATgetArgument(v_94, 2);
      {
        ATerm s_36;
        s_36 = t;
        {
          ATerm e_95 = NULL;
          ATerm f_95 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_94), not_null(x_94));
          {
            ATerm t_36 = t;
            int u_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_36);
              }
            else
              {
                t = t_36;
                t = (ATerm) ATempty;
              }
            {
              f_95 = t;
              if(((e_95 != NULL) && (e_95 != f_95)))
                _fail(f_95);
              else
                e_95 = f_95;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_94), not_null(x_94), (ATerm) ATinsert(CheckATermList(not_null(e_95)), not_null(y_94)));
            t = table_put_0(t);
          }
        }
        t = s_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_116 (ATerm))
{
  ATerm j_95 = NULL;
  ATerm k_95 = NULL;
  t = term_m_25;
  {
    t = r_116(t);
    {
      k_95 = t;
      if(((j_95 != NULL) && (j_95 != k_95)))
        _fail(k_95);
      else
        j_95 = k_95;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_36, term_h_36, not_null(j_95));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL;
  q_95 = t;
  p_95 :
  if(match_string(q_95, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_95) == AT_LIST) && !(ATisEmpty(q_95))))
        {
          r_95 = ATgetFirst((ATermList) q_95);
          s_95 = (ATerm) ATgetNext((ATermList) q_95);
          {
            ATerm v_95 = NULL;
            ATerm v_36;
            v_36 = t;
            {
              t = not_null(r_95);
              t = a_0(t);
            }
            t = v_36;
            {
              ATerm w_95 = NULL;
              t = term_m_25;
              {
                t = c_0(t);
                {
                  w_95 = t;
                  if(((v_95 != NULL) && (v_95 != w_95)))
                    _fail(w_95);
                  else
                    v_95 = w_95;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_95)), not_null(v_95));
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
  ATerm l_5 (ATerm t)
  {
    ATerm d_96 = NULL;
    d_96 = t;
    c_96 :
    if(!(match_string(d_96, "--help")))
      {
        if(!(match_string(d_96, "-h")))
          {
            if(!(match_string(d_96, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_x_36;
    {
      t = set_config_0(t);
      t = term_y_36;
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_z_36;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL,i_96 = NULL;
  g_96 = t;
  f_96 :
  if(((ATgetType(g_96) == AT_LIST) && !(ATisEmpty(g_96))))
    {
      h_96 = ATgetFirst((ATermList) g_96);
      i_96 = (ATerm) ATgetNext((ATermList) g_96);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_96)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_96)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  s_96 = t;
  r_96 :
  if(((ATgetType(s_96) == AT_LIST) && !(ATisEmpty(s_96))))
    {
      t_96 = ATgetFirst((ATermList) s_96);
      u_96 = (ATerm) ATgetNext((ATermList) s_96);
      {
        ATerm y_96 = NULL,a_97 = NULL;
        ATerm z_96 = NULL;
        t = SSLgetAnnotations(not_null(s_96));
        {
          z_96 = t;
          if(((y_96 != NULL) && (y_96 != z_96)))
            _fail(z_96);
          else
            y_96 = z_96;
        }
        {
          t = not_null(t_96);
          {
            ATerm e_97 = NULL;
            t = a_75(t);
            {
              a_97 = t;
              {
                t = not_null(u_96);
                {
                  ATerm g_97 = NULL;
                  t = b_75(t);
                  {
                    e_97 = t;
                    {
                      ATerm h_97 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_97)), not_null(a_97)), not_null(y_96));
                      {
                        h_97 = t;
                        if(((g_97 != NULL) && (g_97 != h_97)))
                          _fail(h_97);
                        else
                          g_97 = h_97;
                      }
                      t = not_null(g_97);
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
  ATerm r_97 = NULL;
  r_97 = t;
  q_97 :
  if(((ATgetType(r_97) == AT_LIST) && ATisEmpty(r_97)))
    {
      {
        ATerm t_97 = NULL,v_97 = NULL;
        ATerm a_37;
        a_37 = t;
        {
          ATerm u_97 = NULL;
          t = SSLgetAnnotations(not_null(r_97));
          {
            u_97 = t;
            if(((t_97 != NULL) && (t_97 != u_97)))
              _fail(u_97);
            else
              t_97 = u_97;
          }
        }
        t = a_37;
        {
          ATerm w_97 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_97));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
  c_98 = t;
  b_98 :
  if(match_cons(c_98, sym__2))
    {
      d_98 = ATgetArgument(c_98, 0);
      e_98 = ATgetArgument(c_98, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_6, not_null(d_98), not_null(e_98));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_116 (ATerm))
{
  ATerm b_37;
  b_37 = t;
  {
    ATerm o_5 (ATerm t)
    {
      t = term_c_37;
      t = p_116(t);
      return(t);
    }
    t = try_1(t, o_5);
  }
  t = b_37;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm m_98 = NULL;
      ATerm d_37;
      d_37 = t;
      {
        ATerm k_98 = NULL;
        ATerm l_98 = NULL;
        l_98 = t;
        if(((k_98 != NULL) && (k_98 != l_98)))
          _fail(l_98);
        else
          k_98 = l_98;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_35, not_null(k_98));
          t = set_config_0(t);
        }
      }
      t = d_37;
      {
        ATerm n_98 = NULL;
        n_98 = t;
        if(((m_98 != NULL) && (m_98 != n_98)))
          _fail(n_98);
        else
          m_98 = n_98;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_98));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_37 = t;
          int h_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(h_37);
            }
          else
            {
              t = g_37;
              {
                t = p_116(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          ;
          LocalPopChoice(f_37);
        }
      else
        {
          t = e_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
  ATerm i_37;
  i_37 = t;
  {
    ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL;
    w_98 = t;
    s_98 :
    if(match_cons(w_98, sym__3))
      {
        x_98 = ATgetArgument(w_98, 0);
        y_98 = ATgetArgument(w_98, 1);
        z_98 = ATgetArgument(w_98, 2);
        {
          if(((t_98 != NULL) && (t_98 != x_98)))
            _fail(x_98);
          else
            t_98 = x_98;
          {
            if(((u_98 != NULL) && (u_98 != y_98)))
              _fail(y_98);
            else
              u_98 = y_98;
            {
              if(((v_98 != NULL) && (v_98 != z_98)))
                _fail(z_98);
              else
                v_98 = z_98;
              t = SSL_table_put(not_null(t_98), not_null(u_98), not_null(v_98));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_116 (ATerm))
{
  ATerm c_99 = NULL;
  ATerm j_37;
  j_37 = t;
  {
    t = term_k_37;
    t = table_put_0(t);
  }
  t = j_37;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm l_37 = t;
      int m_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_116(t);
          ;
          LocalPopChoice(m_37);
        }
      else
        {
          t = l_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_37;
            p_37 = t;
            {
              ATerm q_37 = t;
              int r_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_36;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(r_37);
                }
              else
                {
                  t = q_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = p_37;
            {
              t = system_usage_0(t);
              {
                t = term_c_16;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm d_99 = NULL;
                  d_99 = t;
                  if(((c_99 != NULL) && (c_99 != d_99)))
                    _fail(d_99);
                  else
                    c_99 = d_99;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm a_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_99)), term_s_37);
                  return(t);
                }
                t = say_1(t, a_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_o_16;
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
        ATerm t_37;
        t_37 = t;
        {
          t = term_g_36;
          t = table_destroy_0(t);
        }
        t = t_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm))
{
  t = parse_options_1(t, j_113);
  {
    t = store_options_0(t);
    {
      t = l_113(t);
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_113);
            ;
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
                  t = m_113(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_114(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, a_114);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_6, c_114, d_114, c_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm a_38;
      a_38 = t;
      {
        ATerm g_99 = NULL;
        ATerm h_99 = NULL;
        t = term_j_35;
        {
          t = get_config_0(t);
          {
            h_99 = t;
            if(((g_99 != NULL) && (g_99 != h_99)))
              _fail(h_99);
            else
              g_99 = h_99;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATempty, not_null(g_99)));
          t = printnl_0(t);
        }
      }
      t = a_38;
      return(t);
    }
    t = if_verbose2_1(t, h_6);
    return(t);
  }
  t = iowrap_4(t, u_113, v_113, w_113, f_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_113 (ATerm), ATerm t_113 (ATerm))
{
  t = iowrap_3(t, s_113, t_113, default_usage_0);
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
