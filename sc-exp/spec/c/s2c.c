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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_IntConst_1;
Symbol sym_HexConst_1;
Symbol sym_OctConst_1;
Symbol sym_FloatConst_1;
Symbol sym_CharConst_1;
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
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
ATerm term_h_39;
ATerm term_u_38;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_o_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_q_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_f_32;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_n_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_u_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_h_22;
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
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_k_19;
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
ATerm term_o_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
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
ATerm term_j_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_p_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_r_8;
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
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_b_7;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_l_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Id_1, term_k_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_8, (ATerm) ATempty);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Id_1, term_o_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_TypeId_1, term_q_8);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_TypeName_2, term_b_10, term_c_10);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Id_1, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_v_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Id_1, term_a_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Id_1, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Id_1, term_j_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Id_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Id_1, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, term_z_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Id_1, term_k_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Id_1, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Id_1, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Id_1, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Id_1, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Id_1, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TypeId_1, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_m_17, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TypeName_2, term_n_17, term_c_10);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Id_1, term_p_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Id_1, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_x_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_18, (ATerm) ATempty);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_d_18, term_c_10);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Id_1, term_h_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_o_18, (ATerm) ATempty);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_r_18, term_c_10);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Id_1, term_l_14);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Id_1, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATisEmpty", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Id_1, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Id_1, term_z_18);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_i_19, (ATerm) ATempty);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_19, term_c_10);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Id_1, term_l_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Id_1, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Id_1, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Id_1, term_f_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_e_17);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Id_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_20, (ATerm) ATempty);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Equal_2, term_l_20, term_w_14);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_r_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, term_e_17);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_f_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Id_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_i_21, (ATerm) ATempty);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_j_21, term_w_14);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_TypeId_1, term_n_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Id_1, term_x_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Id_1, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_22, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_EmptyExp_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_t_18);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Return_1, term_e_17);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Id_1, term_x_24);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_17, term_c_10);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_10, term_o_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Id_1, term_z_25);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Id_1, term_e_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_FunCall_2, term_p_8, (ATerm) ATempty);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Stat_1, term_i_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Id_1, term_r_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_m_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_n_27, (ATerm) ATempty);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_10, term_c_10);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_TypeId_1, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_g_28, (ATerm) ATempty);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Some_1, term_i_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_8, term_j_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Op_2, term_k_29, (ATerm) ATempty);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_f_16);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_16);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_u_25);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_u_25);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_e_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym__2, term_w_37, term_u_25);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_z_37, term_u_25);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_o_36, term_u_25);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__3, term_d_37, term_e_37, (ATerm) ATempty);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm z_122 (ATerm), ATerm a_123 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_101 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm s_99 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm r_84 (ATerm));
ATerm Real_1 (ATerm, ATerm v_2 (ATerm));
ATerm Str_1 (ATerm, ATerm u_2 (ATerm));
ATerm Int_1 (ATerm, ATerm t_2 (ATerm));
ATerm Anno_2 (ATerm, ATerm r_2 (ATerm), ATerm s_2 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm w_81 (ATerm), ATerm x_81 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_2 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm v_0 (ATerm), ATerm z_0 (ATerm));
ATerm thread_map_1 (ATerm, ATerm w_112 (ATerm));
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm z_88 (ATerm));
ATerm FunCall_2 (ATerm, ATerm d_92 (ATerm), ATerm e_92 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm r_100 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_100 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm s_115 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_126 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm o_115 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm u_126 (ATerm));
ATerm restore_always_2 (ATerm, ATerm l_99 (ATerm), ATerm m_99 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_126 (ATerm));
ATerm scope_2 (ATerm, ATerm v_126 (ATerm), ATerm w_126 (ATerm));
ATerm assert_1 (ATerm, ATerm x_126 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_106 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_119 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm i_118 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_120 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_117 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_113 (ATerm), ATerm w_113 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_112 (ATerm), ATerm h_112 (ATerm));
ATerm crush_2 (ATerm, ATerm z_115 (ATerm), ATerm a_116 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_119 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_121 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_123 (ATerm));
ATerm map_1 (ATerm, ATerm h_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_123 (ATerm));
ATerm Program_1 (ATerm, ATerm r_86 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_86 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_106 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_122 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_98 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_123 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_123 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_123 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm l_121 (ATerm));
ATerm iowrap_4 (ATerm, ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_120 (ATerm), ATerm q_120 (ATerm));
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
          ATerm t_6 = t;
          int u_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(u_6);
            }
          else
            {
              t = t_6;
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
          t = (ATerm) ATmakeAppl(sym__3, term_v_6, not_null(f_5), not_null(w_5));
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
ATerm Option_2 (ATerm t, ATerm z_122 (ATerm), ATerm a_123 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    t = term_b_7;
    return(t);
  }
  t = Option_3(t, z_122, a_123, f_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
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
      ATerm s_0 (ATerm t)
      {
        t = term_e_7;
        {
          ATerm t_0 (ATerm t)
          {
            t = term_f_7;
            return(t);
          }
          t = debug_1(t, t_0);
          {
            ATerm g_7;
            g_7 = t;
            {
              t = term_m_7;
              {
                ATerm u_0 (ATerm t)
                {
                  t = term_n_7;
                  return(t);
                }
                t = assert_1(t, u_0);
              }
            }
            t = g_7;
          }
        }
        return(t);
      }
      t = Option_2(t, q_0, s_0);
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_w_7);
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = term_x_7;
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
              t = term_y_7;
              return(t);
            }
            t = ArgOption_3(t, w_0, x_0, y_0);
            ;
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
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
                ATerm z_7;
                z_7 = t;
                {
                  ATerm o_6 = NULL;
                  ATerm p_6 = NULL;
                  p_6 = t;
                  if(((o_6 != NULL) && (o_6 != p_6)))
                    _fail(p_6);
                  else
                    o_6 = p_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(o_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = z_7;
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
                t = term_h_8;
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
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_l_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_6))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(z_6)), term_i_8, not_null(a_7))));
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
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_p_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_n_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_7)));
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
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_7)), term_c_10)));
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
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = (ATerm) ATempty;
    }
  {
    ATerm b_8 = NULL,d_8 = NULL,f_8 = NULL;
    ATerm f_10;
    f_10 = t;
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
    t = f_10;
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
ATerm oncetd_1 (ATerm t, ATerm u_101 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_101(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
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
    ATerm i_10;
    i_10 = t;
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
    t = i_10;
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
                                ATerm j_10 = t;
                                int m_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = u_10(t);
                                    ;
                                    LocalPopChoice(m_10);
                                  }
                                else
                                  {
                                    t = j_10;
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
                            ATerm n_10 = t;
                            int o_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_10(t);
                                ;
                                LocalPopChoice(o_10);
                              }
                            else
                              {
                                t = n_10;
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
ATerm repeat_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm c_11 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      t = s_99(t);
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
        t = term_p_10;
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
ATerm BuildDefault_1 (ATerm t, ATerm r_84 (ATerm))
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
            t = r_84(t);
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
        ATerm z_10 = t;
        int a_11 = stack_ptr;
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
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
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
        ATerm b_11 = t;
        int d_11 = stack_ptr;
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
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
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
        ATerm e_11 = t;
        int f_11 = stack_ptr;
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
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
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
        ATerm l_11 = t;
        int q_11 = stack_ptr;
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
            LocalPopChoice(q_11);
          }
        else
          {
            t = l_11;
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
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
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
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
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm c_12 = t;
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
                    t = c_12;
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
ATerm Op_2 (ATerm t, ATerm w_81 (ATerm), ATerm x_81 (ATerm))
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
            t = w_81(t);
            {
              v_19 = t;
              {
                t = not_null(p_19);
                {
                  ATerm z_19 = NULL;
                  t = x_81(t);
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
          ATerm g_12 = t;
          int l_12 = stack_ptr;
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
              LocalPopChoice(l_12);
            }
          else
            {
              t = g_12;
              {
                ATerm m_12 = t;
                int n_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Anno_2(t, Cache_0, Cache_0);
                    ;
                    LocalPopChoice(n_12);
                  }
                else
                  {
                    t = m_12;
                    {
                      ATerm o_12 = t;
                      int p_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Int_1(t, _id);
                          ;
                          LocalPopChoice(p_12);
                        }
                      else
                        {
                          t = o_12;
                          {
                            ATerm q_12 = t;
                            int u_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Str_1(t, _id);
                                ;
                                LocalPopChoice(u_12);
                              }
                            else
                              {
                                t = q_12;
                                {
                                  ATerm v_12 = t;
                                  int z_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Real_1(t, _id);
                                      ;
                                      LocalPopChoice(z_12);
                                    }
                                  else
                                    {
                                      t = v_12;
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
                    t = (ATerm) ATmakeAppl(sym__2, term_c_13, not_null(w_20));
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
                            ATerm d_13;
                            d_13 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), (ATerm) ATmakeAppl(sym_Defined_2, term_e_13, not_null(t_20)));
                              {
                                ATerm m_1 (ATerm t)
                                {
                                  t = term_f_13;
                                  return(t);
                                }
                                t = assert_1(t, m_1);
                              }
                            }
                            t = d_13;
                            {
                              ATerm a_21 = NULL;
                              ATerm g_13 = t;
                              int h_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  ;
                                  LocalPopChoice(h_13);
                                }
                              else
                                {
                                  t = g_13;
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
                                      ATerm i_13;
                                      i_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_13, not_null(u_20)));
                                        {
                                          ATerm n_1 (ATerm t)
                                          {
                                            t = term_p_10;
                                            return(t);
                                          }
                                          t = assert_1(t, n_1);
                                        }
                                      }
                                      t = i_13;
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
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL;
        ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
        t = not_null(q_21);
        {
          ATerm o_1 (ATerm t)
          {
            t = term_f_13;
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
                if(match_string(v_21, "e_0"))
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
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm z_21 = NULL;
          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
          t = not_null(q_21);
          {
            ATerm p_1 (ATerm t)
            {
              t = term_f_13;
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
                  if(match_string(b_22, "c_0"))
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
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm j_22 = NULL,l_22 = NULL;
        ATerm r_13;
        r_13 = t;
        {
          ATerm k_22 = NULL;
          k_22 = t;
          if(((j_22 != NULL) && (j_22 != k_22)))
            _fail(k_22);
          else
            j_22 = k_22;
        }
        t = r_13;
        {
          ATerm m_22 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm q_1 (ATerm t)
            {
              ATerm s_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = s_13;
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
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  ;
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
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
        ATerm e_14 = t;
        int h_14 = stack_ptr;
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
            LocalPopChoice(h_14);
          }
        else
          {
            t = e_14;
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
ATerm Cons_T_2 (ATerm t, ATerm v_0 (ATerm), ATerm z_0 (ATerm))
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
              t = v_0(t);
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
ATerm thread_map_1 (ATerm t, ATerm w_112 (ATerm))
{
  ATerm n_25 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, w_112, n_25);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
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
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_25)), term_c_10), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(t_25))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Id_1, not_null(w_25)))));
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
        t = term_k_14;
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
            if(!(match_string(h_26, "l_0")))
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
    t = term_l_14;
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
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), not_null(k_27))));
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
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(CheckATermList(not_null(i_27)), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_27)))));
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
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_27))));
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
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_15), term_w_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(w_27))))))));
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
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_i_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(z_27)))));
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
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(c_28)))));
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
ATerm Id_1 (ATerm t, ATerm z_88 (ATerm))
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
            t = z_88(t);
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
ATerm FunCall_2 (ATerm t, ATerm d_92 (ATerm), ATerm e_92 (ATerm))
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
            t = d_92(t);
            {
              x_29 = t;
              {
                t = not_null(r_29);
                {
                  ATerm b_30 = NULL;
                  t = e_92(t);
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
                          ATerm q_15 = t;
                          int r_15 = stack_ptr;
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
                                                                ATerm s_15 = t;
                                                                int t_15 = stack_ptr;
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
                                                                    LocalPopChoice(t_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_15;
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
                              LocalPopChoice(r_15);
                            }
                          else
                            {
                              t = q_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_v_15, (ATerm) ATinsert(ATempty, not_null(e_31)));
                            }
                          {
                            y_31 = t;
                            if(((l_31 != NULL) && (l_31 != y_31)))
                              _fail(y_31);
                            else
                              l_31 = y_31;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_x_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_31)), not_null(l_31))));
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
                  t = term_a_16;
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
ATerm bottomup_1 (ATerm t, ATerm r_100 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = bottomup_1(t, r_100);
    return(t);
  }
  t = _all(t, x_1);
  t = r_100(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
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
ATerm topdown_1 (ATerm t, ATerm q_100 (ATerm))
{
  t = q_100(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = topdown_1(t, q_100);
      return(t);
    }
    t = _all(t, a_2);
  }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  ATerm v_53 (ATerm t)
  {
    ATerm j_48 = NULL,z_48 = NULL;
    ATerm d_16;
    d_16 = t;
    {
      ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
      t = not_null(r_45);
      {
        ATerm e_16 = t;
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
            t = e_16;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_44), term_f_16);
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
                    ATerm j_16;
                    j_16 = t;
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
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_48), (ATerm) ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(r_48))), not_null(q_45))));
                        {
                          ATerm r_16 = t;
                          int s_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              ;
                              LocalPopChoice(s_16);
                            }
                          else
                            {
                              t = r_16;
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
                    t = j_16;
                    {
                      ATerm v_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), term_w_16);
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
    t = d_16;
    {
      ATerm a_49 = NULL,c_49 = NULL;
      ATerm b_49 = NULL;
      t = not_null(v_44);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_45), not_null(a_49));
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
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(z_48))), not_null(q_45))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17))));
    }
    return(t);
  }
  ATerm w_53 (ATerm t)
  {
    ATerm f_49 = NULL;
    ATerm g_49 = NULL;
    t = not_null(r_45);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, not_null(q_45))), term_i_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_k_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_o_17, not_null(q_45)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(f_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17))));
    return(t);
  }
  ATerm x_53 (ATerm t)
  {
    ATerm j_49 = NULL;
    ATerm k_49 = NULL;
    t = not_null(r_45);
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
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, not_null(q_45))), term_q_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_w_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_g_18, not_null(q_45)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(j_49)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17))));
    return(t);
  }
  ATerm y_53 (ATerm t)
  {
    ATerm n_49 = NULL;
    ATerm o_49 = NULL;
    t = not_null(r_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          o_49 = t;
          if(((n_49 != NULL) && (n_49 != o_49)))
            _fail(o_49);
          else
            n_49 = o_49;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_i_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_18, not_null(q_45)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_15), term_w_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(n_49)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17))));
    return(t);
  }
  ATerm z_53 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), term_t_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), not_null(q_45))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, not_null(q_45)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), term_i_8, not_null(q_45))));
    return(t);
  }
  ATerm a_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(v_44), not_null(q_45))), (ATerm) ATmakeAppl(sym_Match_2, not_null(r_45), not_null(q_45))));
    return(t);
  }
  ATerm b_54 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  ATerm c_54 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  ATerm d_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(t_45), term_e_17);
    return(t);
  }
  ATerm e_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))), term_w_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_45)), term_i_8, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_44)), term_i_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_19, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_45)), not_null(m_45), not_null(n_45)))));
    return(t);
  }
  ATerm f_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))), term_w_18), (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(l_45)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_45)), not_null(m_45), not_null(n_45)))));
    return(t);
  }
  ATerm g_54 (ATerm t)
  {
    ATerm p_50 = NULL,e_51 = NULL,g_51 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
      t = not_null(j_45);
      {
        ATerm s_19 = t;
        if((PushChoice() == 0))
          {
            ATerm q_50 = NULL;
            q_50 = t;
            u_34 :
            if(!(match_string(q_50, "Nil")))
              {
                if(!(match_string(q_50, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_45), term_f_16);
          {
            ATerm c_2 (ATerm t)
            {
              ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
              r_50 = t;
              y_34 :
              if(match_cons(r_50, sym__2))
                {
                  s_50 = ATgetArgument(r_50, 0);
                  u_50 = ATgetArgument(r_50, 1);
                  z_34 :
                  if(match_cons(s_50, sym_Var_1))
                    {
                      t_50 = ATgetArgument(s_50, 0);
                      {
                        ATerm x_50 = NULL,z_50 = NULL;
                        ATerm w_19;
                        w_19 = t;
                        {
                          ATerm y_50 = NULL;
                          t = not_null(u_50);
                          {
                            t = int_to_string_0(t);
                            {
                              y_50 = t;
                              if(((x_50 != NULL) && (x_50 != y_50)))
                                _fail(y_50);
                              else
                                x_50 = y_50;
                            }
                          }
                        }
                        t = w_19;
                        {
                          ATerm a_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), term_w_16);
                          {
                            t = add_0(t);
                            {
                              a_51 = t;
                              if(((z_50 != NULL) && (z_50 != a_51)))
                                _fail(a_51);
                              else
                                z_50 = a_51;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_50)), term_i_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(x_50))), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))))), not_null(z_50));
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
              b_51 = t;
              b_35 :
              if(match_cons(b_51, sym__2))
                {
                  c_51 = ATgetArgument(b_51, 0);
                  d_51 = ATgetArgument(b_51, 1);
                  if(((p_50 != NULL) && (p_50 != c_51)))
                    _fail(c_51);
                  else
                    p_50 = c_51;
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
    t = r_19;
    {
      ATerm y_19;
      y_19 = t;
      {
        ATerm f_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_45), not_null(h_45));
        {
          t = ConstructorName_0(t);
          {
            f_51 = t;
            if(((e_51 != NULL) && (e_51 != f_51)))
              _fail(f_51);
            else
              e_51 = f_51;
          }
        }
      }
      t = y_19;
      {
        ATerm h_51 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), (ATerm) ATinsert(ATempty, not_null(l_45)));
        {
          t = conc_0(t);
          {
            h_51 = t;
            if(((g_51 != NULL) && (g_51 != h_51)))
              _fail(h_51);
            else
              g_51 = h_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(g_51)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_45)), not_null(m_45), not_null(n_45)))));
      }
    }
    return(t);
  }
  ATerm h_54 (ATerm t)
  {
    ATerm s_51 = NULL;
    ATerm t_51 = NULL;
    t = not_null(j_45);
    {
      t = real_to_string_0(t);
      {
        t_51 = t;
        if(((s_51 != NULL) && (s_51 != t_51)))
          _fail(t_51);
        else
          s_51 = t_51;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_c_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(s_51))), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_45)), not_null(m_45), not_null(n_45)))));
    return(t);
  }
  ATerm i_54 (ATerm t)
  {
    ATerm a_52 = NULL;
    ATerm b_52 = NULL;
    t = not_null(j_45);
    {
      t = int_to_string_0(t);
      {
        b_52 = t;
        if(((a_52 != NULL) && (a_52 != b_52)))
          _fail(b_52);
        else
          a_52 = b_52;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_e_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(a_52))), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_45)), not_null(m_45), not_null(n_45)))));
    return(t);
  }
  ATerm j_54 (ATerm t)
  {
    ATerm i_52 = NULL;
    ATerm j_52 = NULL;
    t = not_null(j_45);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(i_52)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(r_45)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_45)), not_null(m_45), not_null(n_45)))));
    return(t);
  }
  ATerm k_54 (ATerm t)
  {
    t = not_null(n_45);
    return(t);
  }
  ATerm l_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_45)), (ATerm) ATmakeAppl(sym_Case_3, not_null(q_45), not_null(n_45), not_null(o_45)));
    return(t);
  }
  ATerm m_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_45)));
    return(t);
  }
  ATerm n_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), term_t_18), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), (ATerm) ATmakeAppl(sym_Id_1, not_null(p_45)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_45))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), term_i_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(p_45)))));
    return(t);
  }
  ATerm o_54 (ATerm t)
  {
    t = not_null(q_45);
    {
      ATerm h_20 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_20;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_45))));
    return(t);
  }
  ATerm p_54 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), term_i_8, term_e_17));
    return(t);
  }
  ATerm q_54 (ATerm t)
  {
    ATerm c_53 = NULL;
    ATerm d_53 = NULL;
    t = not_null(t_45);
    {
      t = construct_term_caching_0(t);
      {
        d_53 = t;
        if(((c_53 != NULL) && (c_53 != d_53)))
          _fail(d_53);
        else
          c_53 = d_53;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, not_null(c_53)));
    return(t);
  }
  s_45 = t;
  i_35 :
  if(match_cons(s_45, sym_Let_2))
    {
      t_45 = ATgetArgument(s_45, 0);
      q_45 = ATgetArgument(s_45, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(t_45), (ATerm) ATinsert(ATempty, not_null(q_45)));
    }
  else
    {
      if(match_cons(s_45, sym_Where_1))
        {
          t_45 = ATgetArgument(s_45, 0);
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
            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_46)), term_c_10))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(c_46))))), not_null(t_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_46)), term_i_8, term_e_17))));
          }
        }
      else
        {
          if(match_cons(s_45, sym_Test_1))
            {
              t_45 = ATgetArgument(s_45, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(t_45));
            }
          else
            {
              if(match_cons(s_45, sym_Call_2))
                {
                  t_45 = ATgetArgument(s_45, 0);
                  q_45 = ATgetArgument(s_45, 1);
                  j_35 :
                  if(match_cons(t_45, sym_SVar_1))
                    {
                      r_45 = ATgetArgument(t_45, 0);
                      {
                        ATerm h_46 = NULL;
                        ATerm n_46 = NULL;
                        t = not_null(q_45);
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_45)), (ATerm) ATinsert(CheckATermList(not_null(h_46)), term_e_17))));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(s_45, sym_Prim_2))
                    {
                      t_45 = ATgetArgument(s_45, 0);
                      q_45 = ATgetArgument(s_45, 1);
                      {
                        ATerm q_46 = NULL;
                        ATerm r_46 = NULL;
                        t = not_null(q_45);
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
                        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_45)), not_null(q_46))));
                      }
                    }
                  else
                    {
                      if(match_cons(s_45, sym_Not_1))
                        {
                          t_45 = ATgetArgument(s_45, 0);
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
                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_46)), term_c_10), term_i_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_21), term_e_21), not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_46)))))))));
                          }
                        }
                      else
                        {
                          if(match_cons(s_45, sym_LGChoice_2))
                            {
                              t_45 = ATgetArgument(s_45, 0);
                              q_45 = ATgetArgument(s_45, 1);
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
                                t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_46)), term_c_10), term_i_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_k_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(x_46)))))))));
                              }
                            }
                          else
                            {
                              if(match_cons(s_45, sym_GChoice_2))
                                {
                                  t_45 = ATgetArgument(s_45, 0);
                                  q_45 = ATgetArgument(s_45, 1);
                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(t_45), not_null(q_45));
                                }
                              else
                                {
                                  if(match_cons(s_45, sym_GuardedLChoice_3))
                                    {
                                      t_45 = ATgetArgument(s_45, 0);
                                      q_45 = ATgetArgument(s_45, 1);
                                      n_45 = ATgetArgument(s_45, 2);
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
                                        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_s_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_47)), term_c_10), term_d_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_47)), term_c_10), term_i_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_47)))))), not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(e_47)))))))));
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(s_45, sym_LChoice_2))
                                        {
                                          t_45 = ATgetArgument(s_45, 0);
                                          q_45 = ATgetArgument(s_45, 1);
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
                                            t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_47)), term_c_10), term_d_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_47)), term_c_10), term_i_20)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_q_20, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_47)))))), term_n_22), not_null(t_45))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_45)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_e_17, term_i_8, (ATerm) ATmakeAppl(sym_Id_1, not_null(k_47)))))))));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(s_45, sym_Choice_2))
                                            {
                                              t_45 = ATgetArgument(s_45, 0);
                                              q_45 = ATgetArgument(s_45, 1);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_45), not_null(q_45));
                                            }
                                          else
                                            {
                                              if(match_cons(s_45, sym_Seq_2))
                                                {
                                                  t_45 = ATgetArgument(s_45, 0);
                                                  q_45 = ATgetArgument(s_45, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_45)), not_null(t_45)));
                                                }
                                              else
                                                {
                                                  if(match_cons(s_45, sym_Scope_2))
                                                    {
                                                      t_45 = ATgetArgument(s_45, 0);
                                                      q_45 = ATgetArgument(s_45, 1);
                                                      {
                                                        ATerm w_47 = NULL;
                                                        ATerm o_22;
                                                        o_22 = t;
                                                        {
                                                          t = not_null(t_45);
                                                          {
                                                            ATerm g_2 (ATerm t)
                                                            {
                                                              ATerm u_47 = NULL;
                                                              u_47 = t;
                                                              {
                                                                ATerm p_22;
                                                                p_22 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), term_r_22);
                                                                  {
                                                                    ATerm h_2 (ATerm t)
                                                                    {
                                                                      t = term_k_14;
                                                                      return(t);
                                                                    }
                                                                    t = assert_1(t, h_2);
                                                                  }
                                                                }
                                                                t = p_22;
                                                              }
                                                              return(t);
                                                            }
                                                            t = map_1(t, g_2);
                                                          }
                                                        }
                                                        t = o_22;
                                                        {
                                                          ATerm z_47 = NULL;
                                                          t = not_null(t_45);
                                                          {
                                                            ATerm i_2 (ATerm t)
                                                            {
                                                              ATerm x_47 = NULL;
                                                              x_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(x_47)), term_c_10), term_s_22);
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
                                                          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, not_null(w_47))), (ATerm) ATinsert(ATempty, not_null(q_45)));
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(s_45, sym_Fail_0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(s_45, sym_Id_0))
                                                            {
                                                              t = term_u_18;
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(s_45, sym_Match_2))
                                                                {
                                                                  t_45 = ATgetArgument(s_45, 0);
                                                                  q_45 = ATgetArgument(s_45, 1);
                                                                  k_35 :
                                                                  if(match_cons(t_45, sym_Op_2))
                                                                    {
                                                                      r_45 = ATgetArgument(t_45, 0);
                                                                      v_44 = ATgetArgument(t_45, 1);
                                                                      l_35 :
                                                                      if(((ATgetType(v_44) == AT_LIST) && !(ATisEmpty(v_44))))
                                                                        {
                                                                          r_44 = ATgetFirst((ATermList) v_44);
                                                                          s_44 = (ATerm) ATgetNext((ATermList) v_44);
                                                                          m_35 :
                                                                          if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
                                                                            {
                                                                              t_44 = ATgetFirst((ATermList) s_44);
                                                                              u_44 = (ATerm) ATgetNext((ATermList) s_44);
                                                                              n_35 :
                                                                              if(((ATgetType(u_44) == AT_LIST) && ATisEmpty(u_44)))
                                                                                {
                                                                                  o_35 :
                                                                                  if(match_string(r_45, "Cons"))
                                                                                    {
                                                                                      ATerm t_22 = t;
                                                                                      int u_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm d_48 = NULL;
                                                                                          ATerm e_48 = NULL;
                                                                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(t_44), (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_14, (ATerm) ATmakeAppl(sym_FunCall_2, term_q_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_19, not_null(q_45))))))), (ATerm) ATmakeAppl(sym__2, not_null(r_44), (ATerm) ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_k_19, not_null(q_45))))));
                                                                                          {
                                                                                            ATerm j_2 (ATerm t)
                                                                                            {
                                                                                              ATerm v_22 = t;
                                                                                              int w_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = MatchArg1_0(t);
                                                                                                  ;
                                                                                                  LocalPopChoice(w_22);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_22;
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
                                                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, not_null(q_45))), term_w_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, not_null(q_45))))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(d_48)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17))));
                                                                                          ;
                                                                                          LocalPopChoice(u_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_22;
                                                                                          t = v_53(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_53(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  p_35 :
                                                                                  t = v_53(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              q_35 :
                                                                              t = v_53(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(((ATgetType(v_44) == AT_LIST) && ATisEmpty(v_44)))
                                                                            {
                                                                              r_35 :
                                                                              if(match_string(r_45, "Nil"))
                                                                                {
                                                                                  ATerm x_22 = t;
                                                                                  int b_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_g_17, (ATerm) ATinsert(ATempty, not_null(q_45))), term_w_18), (ATerm) ATmakeAppl(sym_Negation_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_y_18, (ATerm) ATinsert(ATempty, not_null(q_45))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_c_17, (ATerm) ATinsert(ATempty, term_e_17))));
                                                                                      ;
                                                                                      LocalPopChoice(b_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_22;
                                                                                      t = v_53(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = v_53(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              s_35 :
                                                                              t = v_53(t);
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t_45, sym_Real_1))
                                                                        {
                                                                          r_45 = ATgetArgument(t_45, 0);
                                                                          t = w_53(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t_45, sym_Int_1))
                                                                            {
                                                                              r_45 = ATgetArgument(t_45, 0);
                                                                              t = x_53(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t_45, sym_Str_1))
                                                                                {
                                                                                  r_45 = ATgetArgument(t_45, 0);
                                                                                  t = y_53(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t_45, sym_Var_1))
                                                                                    {
                                                                                      r_45 = ATgetArgument(t_45, 0);
                                                                                      t = z_53(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t_45, sym_As_2))
                                                                                        {
                                                                                          r_45 = ATgetArgument(t_45, 0);
                                                                                          v_44 = ATgetArgument(t_45, 1);
                                                                                          t = a_54(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t_45, sym_BuildDefault_1))
                                                                                            {
                                                                                              r_45 = ATgetArgument(t_45, 0);
                                                                                              t = b_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t_45, sym_Wld_0))
                                                                                                {
                                                                                                  t = c_54(t);
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
                                                                  if(match_cons(s_45, sym_Match_1))
                                                                    {
                                                                      t_45 = ATgetArgument(s_45, 0);
                                                                      t = d_54(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(s_45, sym_Case_3))
                                                                        {
                                                                          t_45 = ATgetArgument(s_45, 0);
                                                                          q_45 = ATgetArgument(s_45, 1);
                                                                          n_45 = ATgetArgument(s_45, 2);
                                                                          t_35 :
                                                                          if(match_cons(t_45, sym_Var_1))
                                                                            {
                                                                              r_45 = ATgetArgument(t_45, 0);
                                                                              u_35 :
                                                                              if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
                                                                                {
                                                                                  p_45 = ATgetFirst((ATermList) q_45);
                                                                                  m_45 = (ATerm) ATgetNext((ATermList) q_45);
                                                                                  i_36 :
                                                                                  if(match_cons(p_45, sym_Alt_3))
                                                                                    {
                                                                                      i_45 = ATgetArgument(p_45, 0);
                                                                                      k_45 = ATgetArgument(p_45, 1);
                                                                                      l_45 = ATgetArgument(p_45, 2);
                                                                                      j_36 :
                                                                                      if(match_cons(i_45, sym_Fun_2))
                                                                                        {
                                                                                          j_45 = ATgetArgument(i_45, 0);
                                                                                          h_45 = ATgetArgument(i_45, 1);
                                                                                          k_36 :
                                                                                          if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
                                                                                            {
                                                                                              w_44 = ATgetFirst((ATermList) k_45);
                                                                                              y_44 = (ATerm) ATgetNext((ATermList) k_45);
                                                                                              q_43 :
                                                                                              if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
                                                                                                {
                                                                                                  z_44 = ATgetFirst((ATermList) y_44);
                                                                                                  g_45 = (ATerm) ATgetNext((ATermList) y_44);
                                                                                                  r_43 :
                                                                                                  if(((ATgetType(g_45) == AT_LIST) && ATisEmpty(g_45)))
                                                                                                    {
                                                                                                      s_43 :
                                                                                                      if(match_cons(z_44, sym_Var_1))
                                                                                                        {
                                                                                                          a_45 = ATgetArgument(z_44, 0);
                                                                                                          t_43 :
                                                                                                          if(match_cons(w_44, sym_Var_1))
                                                                                                            {
                                                                                                              x_44 = ATgetArgument(w_44, 0);
                                                                                                              u_43 :
                                                                                                              if(match_int(h_45, 2))
                                                                                                                {
                                                                                                                  v_43 :
                                                                                                                  if(match_string(j_45, "Cons"))
                                                                                                                    {
                                                                                                                      ATerm c_23 = t;
                                                                                                                      int g_23 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = e_54(t);
                                                                                                                          ;
                                                                                                                          LocalPopChoice(g_23);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = c_23;
                                                                                                                          t = g_54(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = g_54(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  w_43 :
                                                                                                                  t = g_54(t);
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              x_43 :
                                                                                                              y_43 :
                                                                                                              t = g_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          z_43 :
                                                                                                          a_44 :
                                                                                                          b_44 :
                                                                                                          t = g_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      c_44 :
                                                                                                      d_44 :
                                                                                                      e_44 :
                                                                                                      f_44 :
                                                                                                      t = g_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  g_44 :
                                                                                                  h_44 :
                                                                                                  i_44 :
                                                                                                  t = g_54(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(((ATgetType(k_45) == AT_LIST) && ATisEmpty(k_45)))
                                                                                                {
                                                                                                  j_44 :
                                                                                                  if(match_int(h_45, 0))
                                                                                                    {
                                                                                                      k_44 :
                                                                                                      if(match_string(j_45, "Nil"))
                                                                                                        {
                                                                                                          ATerm j_23 = t;
                                                                                                          int k_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = f_54(t);
                                                                                                              ;
                                                                                                              LocalPopChoice(k_23);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_23;
                                                                                                              t = g_54(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = g_54(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      l_44 :
                                                                                                      t = g_54(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  m_44 :
                                                                                                  n_44 :
                                                                                                  t = g_54(t);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(i_45, sym_Real_1))
                                                                                            {
                                                                                              j_45 = ATgetArgument(i_45, 0);
                                                                                              t = h_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(i_45, sym_Int_1))
                                                                                                {
                                                                                                  j_45 = ATgetArgument(i_45, 0);
                                                                                                  t = i_54(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(i_45, sym_Str_1))
                                                                                                    {
                                                                                                      j_45 = ATgetArgument(i_45, 0);
                                                                                                      t = j_54(t);
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
                                                                                  if(((ATgetType(q_45) == AT_LIST) && ATisEmpty(q_45)))
                                                                                    {
                                                                                      t = k_54(t);
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
                                                                          if(match_cons(s_45, sym_Case_4))
                                                                            {
                                                                              t_45 = ATgetArgument(s_45, 0);
                                                                              q_45 = ATgetArgument(s_45, 1);
                                                                              n_45 = ATgetArgument(s_45, 2);
                                                                              o_45 = ATgetArgument(s_45, 3);
                                                                              t = l_54(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(s_45, sym_Continue_1))
                                                                                {
                                                                                  t_45 = ATgetArgument(s_45, 0);
                                                                                  t = m_54(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(s_45, sym_Assign_2))
                                                                                    {
                                                                                      t_45 = ATgetArgument(s_45, 0);
                                                                                      q_45 = ATgetArgument(s_45, 1);
                                                                                      o_44 :
                                                                                      if(match_cons(t_45, sym_Var_1))
                                                                                        {
                                                                                          r_45 = ATgetArgument(t_45, 0);
                                                                                          p_44 :
                                                                                          if(match_cons(q_45, sym_Var_1))
                                                                                            {
                                                                                              p_45 = ATgetArgument(q_45, 0);
                                                                                              {
                                                                                                ATerm o_23 = t;
                                                                                                int r_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = n_54(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(r_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = o_23;
                                                                                                    t = o_54(t);
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_54(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(s_45, sym_Assign_1))
                                                                                        {
                                                                                          t_45 = ATgetArgument(s_45, 0);
                                                                                          q_44 :
                                                                                          if(match_cons(t_45, sym_Var_1))
                                                                                            {
                                                                                              r_45 = ATgetArgument(t_45, 0);
                                                                                              t = p_54(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              _fail(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(s_45, sym_Build_1))
                                                                                            {
                                                                                              t_45 = ATgetArgument(s_45, 0);
                                                                                              t = q_54(t);
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
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  a_56 :
  if(match_cons(b_56, sym__2))
    {
      c_56 = ATgetArgument(b_56, 0);
      d_56 = ATgetArgument(b_56, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_s_23), not_null(d_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  i_56 :
  if(((ATgetType(k_56) == AT_LIST) && !(ATisEmpty(k_56))))
    {
      l_56 = ATgetFirst((ATermList) k_56);
      m_56 = (ATerm) ATgetNext((ATermList) k_56);
      j_56 :
      if(match_int(l_56, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_56)), term_u_23), term_t_23);
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
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  q_56 :
  if(((ATgetType(s_56) == AT_LIST) && !(ATisEmpty(s_56))))
    {
      t_56 = ATgetFirst((ATermList) s_56);
      u_56 = (ATerm) ATgetNext((ATermList) s_56);
      r_56 :
      if(match_int(t_56, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_56)), term_t_23), term_t_23);
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
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  a_57 = t;
  y_56 :
  if(((ATgetType(a_57) == AT_LIST) && !(ATisEmpty(a_57))))
    {
      b_57 = ATgetFirst((ATermList) a_57);
      c_57 = (ATerm) ATgetNext((ATermList) a_57);
      z_56 :
      if(match_int(b_57, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_57)), term_v_23), term_t_23);
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
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
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
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm d_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = d_24;
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
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL;
  s_57 = t;
  r_57 :
  if(match_cons(s_57, sym__2))
    {
      t_57 = ATgetArgument(s_57, 0);
      u_57 = ATgetArgument(s_57, 1);
      {
        ATerm a_58 = NULL,d_58 = NULL;
        ATerm k_24;
        k_24 = t;
        {
          ATerm c_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_l_24), not_null(t_57));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  c_58 = t;
                  if(((a_58 != NULL) && (a_58 != c_58)))
                    _fail(c_58);
                  else
                    a_58 = c_58;
                }
              }
            }
          }
        }
        t = k_24;
        {
          ATerm e_58 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_m_24), not_null(t_57));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  e_58 = t;
                  if(((d_58 != NULL) && (d_58 != e_58)))
                    _fail(e_58);
                  else
                    d_58 = e_58;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(d_58))), term_y_24)))), not_null(u_57)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(a_58))), term_y_24)))));
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
  ATerm l_58 = NULL;
  l_58 = t;
  {
    ATerm o_58 = NULL,p_58 = NULL;
    t = (ATerm) ATempty;
    {
      ATerm l_2 (ATerm t)
      {
        t = term_n_7;
        return(t);
      }
      t = rewrite_1(t, l_2);
      {
        o_58 = t;
        j_58 :
        if(match_cons(o_58, sym_Defined_1))
          {
            p_58 = ATgetArgument(o_58, 0);
            k_58 :
            if(!(match_string(p_58, "o_0")))
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
    t = not_null(l_58);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  {
    ATerm x_58 = NULL,y_58 = NULL;
    t = not_null(u_58);
    {
      ATerm m_2 (ATerm t)
      {
        t = term_x_7;
        return(t);
      }
      t = rewrite_1(t, m_2);
      {
        x_58 = t;
        s_58 :
        if(match_cons(x_58, sym_Defined_1))
          {
            y_58 = ATgetArgument(x_58, 0);
            t_58 :
            if(!(match_string(y_58, "r_0")))
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
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  e_59 = t;
  d_59 :
  if(match_cons(e_59, sym_SDef_3))
    {
      f_59 = ATgetArgument(e_59, 0);
      g_59 = ATgetArgument(e_59, 1);
      h_59 = ATgetArgument(e_59, 2);
      {
        ATerm l_59 = NULL,m_59 = NULL;
        ATerm n_59 = NULL;
        t = not_null(g_59);
        {
          ATerm o_59 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            n_59 = t;
            {
              if(((l_59 != NULL) && (l_59 != n_59)))
                _fail(n_59);
              else
                l_59 = n_59;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_59), not_null(h_59));
                {
                  ATerm z_24 = t;
                  int k_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm l_25 = t;
                        int m_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            ;
                            LocalPopChoice(m_25);
                          }
                        else
                          {
                            t = l_25;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, n_2, _id);
                      t = TracedBody_0(t);
                      ;
                      LocalPopChoice(k_25);
                    }
                  else
                    {
                      t = z_24;
                      t = PlainBody_0(t);
                    }
                  {
                    o_59 = t;
                    if(((m_59 != NULL) && (m_59 != o_59)))
                      _fail(o_59);
                    else
                      m_59 = o_59;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_b_10, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(f_59)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(l_59)), term_p_25)))), not_null(m_59));
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
  ATerm w_59 = NULL,x_59 = NULL,a_60 = NULL;
  w_59 = t;
  v_59 :
  if(match_cons(w_59, sym__2))
    {
      x_59 = ATgetArgument(w_59, 0);
      a_60 = ATgetArgument(w_59, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_60)), not_null(x_59)), (ATerm) ATinsert(ATempty, not_null(x_59)));
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
  ATerm f_60 = NULL;
  ATerm g_60 = NULL;
  g_60 = t;
  if(((f_60 != NULL) && (f_60 != g_60)))
    _fail(g_60);
  else
    f_60 = g_60;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(f_60));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm s_115 (ATerm))
{
  t = explode_string_0(t);
  {
    t = s_115(t);
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
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
  k_60 = t;
  j_60 :
  if(((ATgetType(k_60) == AT_LIST) && !(ATisEmpty(k_60))))
    {
      l_60 = ATgetFirst((ATermList) k_60);
      m_60 = (ATerm) ATgetNext((ATermList) k_60);
      t = not_null(l_60);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
  r_60 = t;
  q_60 :
  if(match_cons(r_60, sym__2))
    {
      s_60 = ATgetArgument(r_60, 0);
      t_60 = ATgetArgument(r_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_60), not_null(t_60));
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
ATerm rewrite_1 (ATerm t, ATerm z_126 (ATerm))
{
  ATerm b_61 = NULL;
  ATerm d_61 = NULL;
  b_61 = t;
  {
    ATerm f_61 = NULL;
    t = term_u_25;
    {
      t = z_126(t);
      {
        f_61 = t;
        if(((d_61 != NULL) && (d_61 != f_61)))
          _fail(f_61);
        else
          d_61 = f_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_61), not_null(b_61));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  o_61 = t;
  n_61 :
  if(match_cons(o_61, sym__2))
    {
      p_61 = ATgetArgument(o_61, 0);
      q_61 = ATgetArgument(o_61, 1);
      {
        ATerm u_61 = NULL;
        ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
        t = not_null(o_61);
        {
          ATerm o_2 (ATerm t)
          {
            t = term_v_25;
            return(t);
          }
          t = rewrite_1(t, o_2);
          {
            v_61 = t;
            k_61 :
            if(match_cons(v_61, sym_Defined_2))
              {
                w_61 = ATgetArgument(v_61, 0);
                x_61 = ATgetArgument(v_61, 1);
                m_61 :
                if(match_string(w_61, "j_0"))
                  {
                    if(((u_61 != NULL) && (u_61 != x_61)))
                      _fail(x_61);
                    else
                      u_61 = x_61;
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
        t = not_null(u_61);
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
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
  g_62 = t;
  f_62 :
  if(match_cons(g_62, sym_OpDecl_2))
    {
      h_62 = ATgetArgument(g_62, 0);
      i_62 = ATgetArgument(g_62, 1);
      {
        ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,x_62 = NULL;
        ATerm y_25;
        y_25 = t;
        {
          ATerm u_62 = NULL;
          t = not_null(i_62);
          {
            ATerm v_62 = NULL;
            t = Arity_0(t);
            {
              u_62 = t;
              {
                if(((m_62 != NULL) && (m_62 != u_62)))
                  _fail(u_62);
                else
                  m_62 = u_62;
                {
                  ATerm w_62 = NULL;
                  t = int_to_string_0(t);
                  {
                    v_62 = t;
                    {
                      if(((l_62 != NULL) && (l_62 != v_62)))
                        _fail(v_62);
                      else
                        l_62 = v_62;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_62), not_null(m_62));
                        {
                          t = ConstructorName_0(t);
                          {
                            w_62 = t;
                            if(((n_62 != NULL) && (n_62 != w_62)))
                              _fail(w_62);
                            else
                              n_62 = w_62;
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
        t = y_25;
        {
          ATerm y_62 = NULL;
          t = not_null(h_62);
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
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_62)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_62)), term_i_8, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_26), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(l_62))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(x_62))))))));
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), (ATerm) ATinsert(ATempty, term_j_26));
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
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_n_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_s_26, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_n_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(j_63)));
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
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
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
            t = p_0(t);
            {
              h_64 = t;
              if(((g_64 != NULL) && (g_64 != h_64)))
                _fail(h_64);
              else
                g_64 = h_64;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_64)), term_u_26), term_u_26);
        }
      else
        {
          if(match_int(d_64, 45))
            {
              ATerm j_64 = NULL;
              ATerm k_64 = NULL;
              t = not_null(e_64);
              {
                t = p_0(t);
                {
                  k_64 = t;
                  if(((j_64 != NULL) && (j_64 != k_64)))
                    _fail(k_64);
                  else
                    j_64 = k_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_64)), term_u_26);
            }
          else
            {
              if(match_int(d_64, 39))
                {
                  ATerm m_64 = NULL;
                  ATerm n_64 = NULL;
                  t = not_null(e_64);
                  {
                    t = p_0(t);
                    {
                      n_64 = t;
                      if(((m_64 != NULL) && (m_64 != n_64)))
                        _fail(n_64);
                      else
                        m_64 = n_64;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_64)), term_u_26), term_v_26), term_u_26);
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
ATerm escape_1 (ATerm t, ATerm o_115 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm u_64 (ATerm t)
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_115(t, u_64);
          ;
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, u_64);
                ;
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = u_64(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm))
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_112(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
        z_64 = t;
        y_64 :
        if(((ATgetType(z_64) == AT_LIST) && !(ATisEmpty(z_64))))
          {
            a_65 = ATgetFirst((ATermList) z_64);
            b_65 = (ATerm) ATgetNext((ATermList) z_64);
            {
              ATerm e_65 = NULL,g_65 = NULL;
              ATerm c_27;
              c_27 = t;
              {
                ATerm f_65 = NULL;
                t = not_null(a_65);
                {
                  t = k_112(t);
                  {
                    f_65 = t;
                    if(((e_65 != NULL) && (e_65 != f_65)))
                      _fail(f_65);
                    else
                      e_65 = f_65;
                  }
                }
              }
              t = c_27;
              {
                ATerm h_65 = NULL;
                t = not_null(b_65);
                {
                  t = foldr_3(t, i_112, j_112, k_112);
                  {
                    h_65 = t;
                    if(((g_65 != NULL) && (g_65 != h_65)))
                      _fail(h_65);
                    else
                      g_65 = h_65;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_65), not_null(g_65));
                  t = j_112(t);
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
    t = term_f_16;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  t = foldr_3(t, p_2, add_0, w_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  p_65 = t;
  n_65 :
  if(match_cons(p_65, sym_FunType_2))
    {
      q_65 = ATgetArgument(p_65, 0);
      o_65 = ATgetArgument(p_65, 1);
      {
        t = not_null(q_65);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(p_65, sym_ConstType_1))
        {
          q_65 = ATgetArgument(p_65, 0);
          t = term_f_16;
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
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  l_66 = t;
  k_66 :
  if(match_cons(l_66, sym_OpDecl_2))
    {
      m_66 = ATgetArgument(l_66, 0);
      n_66 = ATgetArgument(l_66, 1);
      {
        ATerm q_66 = NULL,r_66 = NULL;
        ATerm s_66 = NULL;
        t = not_null(n_66);
        {
          ATerm t_66 = NULL,v_66 = NULL,x_66 = NULL;
          t = Arity_0(t);
          {
            s_66 = t;
            {
              if(((q_66 != NULL) && (q_66 != s_66)))
                _fail(s_66);
              else
                q_66 = s_66;
              {
                ATerm d_27;
                d_27 = t;
                {
                  ATerm u_66 = NULL;
                  t = not_null(m_66);
                  {
                    t = cify_0(t);
                    {
                      u_66 = t;
                      if(((t_66 != NULL) && (t_66 != u_66)))
                        _fail(u_66);
                      else
                        t_66 = u_66;
                    }
                  }
                }
                t = d_27;
                {
                  ATerm w_66 = NULL;
                  t = not_null(q_66);
                  {
                    t = int_to_string_0(t);
                    {
                      w_66 = t;
                      if(((v_66 != NULL) && (v_66 != w_66)))
                        _fail(w_66);
                      else
                        v_66 = w_66;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_66)), term_f_27), not_null(t_66)), term_e_27);
                    {
                      t = concat_strings_0(t);
                      {
                        x_66 = t;
                        {
                          if(((r_66 != NULL) && (r_66 != x_66)))
                            _fail(x_66);
                          else
                            r_66 = x_66;
                          {
                            ATerm g_27;
                            g_27 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_66), not_null(q_66)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_27, not_null(r_66)));
                              {
                                ATerm x_2 (ATerm t)
                                {
                                  t = term_v_25;
                                  return(t);
                                }
                                t = assert_1(t, x_2);
                              }
                            }
                            t = g_27;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_o_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(r_66)), term_c_10)));
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
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
  l_67 = t;
  h_67 :
  if(match_cons(l_67, sym_Signature_1))
    {
      m_67 = ATgetArgument(l_67, 0);
      i_67 :
      if(((ATgetType(m_67) == AT_LIST) && !(ATisEmpty(m_67))))
        {
          n_67 = ATgetFirst((ATermList) m_67);
          p_67 = (ATerm) ATgetNext((ATermList) m_67);
          j_67 :
          if(match_cons(n_67, sym_Constructors_1))
            {
              o_67 = ATgetArgument(n_67, 0);
              k_67 :
              if(((ATgetType(p_67) == AT_LIST) && ATisEmpty(p_67)))
                {
                  {
                    ATerm s_67 = NULL,t_67 = NULL,w_67 = NULL;
                    ATerm t_27;
                    t_27 = t;
                    {
                      ATerm u_67 = NULL;
                      t = not_null(o_67);
                      {
                        ATerm v_67 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          u_67 = t;
                          {
                            if(((s_67 != NULL) && (s_67 != u_67)))
                              _fail(u_67);
                            else
                              s_67 = u_67;
                            {
                              t = not_null(o_67);
                              {
                                t = InitConstructors_0(t);
                                {
                                  v_67 = t;
                                  if(((t_67 != NULL) && (t_67 != v_67)))
                                    _fail(v_67);
                                  else
                                    t_67 = v_67;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = t_27;
                    {
                      ATerm x_67 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_67), (ATerm) ATinsert(ATempty, not_null(t_67)));
                      {
                        t = conc_0(t);
                        {
                          x_67 = t;
                          if(((w_67 != NULL) && (w_67 != x_67)))
                            _fail(x_67);
                          else
                            w_67 = x_67;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(w_67));
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
  ATerm g_68 = NULL,n_68 = NULL,o_68 = NULL;
  n_68 = t;
  f_68 :
  if(match_cons(n_68, sym_FunType_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      g_68 = ATgetArgument(n_68, 1);
      {
        ATerm r_68 = NULL;
        ATerm s_68 = NULL;
        t = not_null(o_68);
        {
          t = map_1(t, TranslateType_0);
          {
            s_68 = t;
            if(((r_68 != NULL) && (r_68 != s_68)))
              _fail(s_68);
            else
              r_68 = s_68;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_10, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(r_68)));
      }
    }
  else
    {
      if(match_cons(n_68, sym_ConstType_1))
        {
          o_68 = ATgetArgument(n_68, 0);
          t = term_b_10;
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  c_69 = t;
  z_68 :
  if(match_cons(c_69, sym_VarDec_2))
    {
      d_69 = ATgetArgument(c_69, 0);
      e_69 = ATgetArgument(c_69, 1);
      a_69 :
      if(match_cons(e_69, sym_FunType_2))
        {
          f_69 = ATgetArgument(e_69, 0);
          b_69 = ATgetArgument(e_69, 1);
          {
            ATerm i_69 = NULL;
            ATerm j_69 = NULL;
            t = not_null(f_69);
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
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_10, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(i_69)))));
          }
        }
      else
        {
          if(match_cons(e_69, sym_ConstType_1))
            {
              f_69 = ATgetArgument(e_69, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_b_10, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(d_69)), term_c_10));
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
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL;
  r_69 = t;
  q_69 :
  if(match_cons(r_69, sym_SDef_3))
    {
      s_69 = ATgetArgument(r_69, 0);
      t_69 = ATgetArgument(r_69, 1);
      u_69 = ATgetArgument(r_69, 2);
      {
        ATerm y_69 = NULL;
        ATerm z_69 = NULL;
        t = not_null(t_69);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            z_69 = t;
            if(((y_69 != NULL) && (y_69 != z_69)))
              _fail(z_69);
            else
              y_69 = z_69;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(s_69)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(y_69)), term_u_27))))));
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
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  o_70 = t;
  i_70 :
  if(match_cons(o_70, sym_Specification_1))
    {
      p_70 = ATgetArgument(o_70, 0);
      j_70 :
      if(((ATgetType(p_70) == AT_LIST) && !(ATisEmpty(p_70))))
        {
          q_70 = ATgetFirst((ATermList) p_70);
          s_70 = (ATerm) ATgetNext((ATermList) p_70);
          k_70 :
          if(match_cons(q_70, sym_Signature_1))
            {
              r_70 = ATgetArgument(q_70, 0);
              l_70 :
              if(((ATgetType(s_70) == AT_LIST) && !(ATisEmpty(s_70))))
                {
                  t_70 = ATgetFirst((ATermList) s_70);
                  v_70 = (ATerm) ATgetNext((ATermList) s_70);
                  m_70 :
                  if(match_cons(t_70, sym_Strategies_1))
                    {
                      u_70 = ATgetArgument(t_70, 0);
                      n_70 :
                      if(((ATgetType(v_70) == AT_LIST) && ATisEmpty(v_70)))
                        {
                          {
                            ATerm d_71 = NULL,e_71 = NULL,u_71 = NULL;
                            ATerm v_27;
                            v_27 = t;
                            {
                              ATerm f_71 = NULL;
                              t = not_null(u_70);
                              {
                                ATerm t_71 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  f_71 = t;
                                  {
                                    if(((d_71 != NULL) && (d_71 != f_71)))
                                      _fail(f_71);
                                    else
                                      d_71 = f_71;
                                    {
                                      t = term_g_8;
                                      {
                                        ATerm y_27 = t;
                                        int b_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm y_2 (ATerm t)
                                              {
                                                ATerm g_71 = NULL;
                                                ATerm h_71 = NULL,j_71 = NULL;
                                                ATerm i_71 = NULL;
                                                i_71 = t;
                                                if(((h_71 != NULL) && (h_71 != i_71)))
                                                  _fail(i_71);
                                                else
                                                  h_71 = i_71;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(h_71));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      j_71 = t;
                                                      if(((g_71 != NULL) && (g_71 != j_71)))
                                                        _fail(j_71);
                                                      else
                                                        g_71 = j_71;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(g_71));
                                                return(t);
                                              }
                                              t = map_1(t, y_2);
                                            }
                                            ;
                                            LocalPopChoice(b_28);
                                          }
                                        else
                                          {
                                            t = y_27;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          t_71 = t;
                                          if(((e_71 != NULL) && (e_71 != t_71)))
                                            _fail(t_71);
                                          else
                                            e_71 = t_71;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = v_27;
                            {
                              ATerm v_71 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_70)), not_null(d_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(r_70))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_h_28, (ATerm) ATinsert(ATempty, term_k_28)))), not_null(e_71));
                              {
                                t = concat_0(t);
                                {
                                  v_71 = t;
                                  if(((u_71 != NULL) && (u_71 != v_71)))
                                    _fail(v_71);
                                  else
                                    u_71 = v_71;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(u_71));
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
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(((ATgetType(g_72) == AT_LIST) && !(ATisEmpty(g_72))))
    {
      h_72 = ATgetFirst((ATermList) g_72);
      i_72 = (ATerm) ATgetNext((ATermList) g_72);
      t = not_null(i_72);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
  o_72 = t;
  n_72 :
  if(match_cons(o_72, sym__2))
    {
      p_72 = ATgetArgument(o_72, 0);
      q_72 = ATgetArgument(o_72, 1);
      {
        ATerm m_28;
        m_28 = t;
        {
          ATerm t_72 = NULL;
          ATerm u_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_72), not_null(q_72));
          {
            ATerm n_28 = t;
            int o_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(o_28);
              }
            else
              {
                t = n_28;
                t = (ATerm) ATempty;
              }
            {
              u_72 = t;
              if(((t_72 != NULL) && (t_72 != u_72)))
                _fail(u_72);
              else
                t_72 = u_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_72), not_null(q_72), not_null(t_72));
            t = table_put_0(t);
          }
        }
        t = m_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_126 (ATerm))
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  ATerm p_28;
  p_28 = t;
  {
    ATerm l_73 = NULL;
    ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
    t = u_126(t);
    {
      l_73 = t;
      {
        if(((k_73 != NULL) && (k_73 != l_73)))
          _fail(l_73);
        else
          k_73 = l_73;
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), term_s_28);
              t = table_get_0(t);
              ;
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_73 = t;
            h_73 :
            if(((ATgetType(m_73) == AT_LIST) && !(ATisEmpty(m_73))))
              {
                n_73 = ATgetFirst((ATermList) m_73);
                o_73 = (ATerm) ATgetNext((ATermList) m_73);
                {
                  if(((j_73 != NULL) && (j_73 != n_73)))
                    _fail(n_73);
                  else
                    j_73 = n_73;
                  {
                    if(((i_73 != NULL) && (i_73 != o_73)))
                      _fail(o_73);
                    else
                      i_73 = o_73;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_73), term_s_28, not_null(i_73));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_73);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm p_73 = NULL;
                              p_73 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), not_null(p_73));
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
  t = p_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm l_99 (ATerm), ATerm m_99 (ATerm))
{
  ATerm t_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_99(t);
      t = m_99(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = t_28;
      {
        t = m_99(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_126 (ATerm))
{
  ATerm w_73 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm x_73 = NULL;
    ATerm y_73 = NULL;
    t = t_126(t);
    {
      x_73 = t;
      {
        if(((w_73 != NULL) && (w_73 != x_73)))
          _fail(x_73);
        else
          w_73 = x_73;
        {
          ATerm z_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), term_s_28);
          {
            ATerm c_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_29);
              }
            else
              {
                t = c_29;
                t = (ATerm) ATempty;
              }
            {
              z_73 = t;
              if(((y_73 != NULL) && (y_73 != z_73)))
                _fail(z_73);
              else
                y_73 = z_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_73), term_s_28, (ATerm) ATinsert(CheckATermList(not_null(y_73)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_28;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_126 (ATerm), ATerm w_126 (ATerm))
{
  t = begin_scope_1(t, v_126);
  {
    ATerm a_3 (ATerm t)
    {
      t = end_scope_1(t, v_126);
      return(t);
    }
    t = restore_always_2(t, w_126, a_3);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_126 (ATerm))
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
  h_74 = t;
  g_74 :
  if(match_cons(h_74, sym__2))
    {
      i_74 = ATgetArgument(h_74, 0);
      j_74 = ATgetArgument(h_74, 1);
      {
        ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
        ATerm g_29;
        g_29 = t;
        {
          ATerm p_74 = NULL;
          ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
          t = x_126(t);
          {
            p_74 = t;
            {
              if(((m_74 != NULL) && (m_74 != p_74)))
                _fail(p_74);
              else
                m_74 = p_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_74), not_null(i_74), not_null(j_74));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_74), term_s_28);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(i_29);
                      }
                    else
                      {
                        t = h_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      q_74 = t;
                      f_74 :
                      if(((ATgetType(q_74) == AT_LIST) && !(ATisEmpty(q_74))))
                        {
                          r_74 = ATgetFirst((ATermList) q_74);
                          s_74 = (ATerm) ATgetNext((ATermList) q_74);
                          {
                            if(((n_74 != NULL) && (n_74 != r_74)))
                              _fail(r_74);
                            else
                              n_74 = r_74;
                            {
                              if(((o_74 != NULL) && (o_74 != s_74)))
                                _fail(s_74);
                              else
                                o_74 = s_74;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_74), term_s_28, (ATerm) ATinsert(CheckATermList(not_null(o_74)), (ATerm) ATinsert(CheckATermList(not_null(n_74)), not_null(i_74))));
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
        t = g_29;
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
  ATerm y_74 = NULL,z_74 = NULL;
  ATerm j_29;
  j_29 = t;
  {
    ATerm a_75 = NULL;
    ATerm b_75 = NULL;
    t = term_l_29;
    {
      a_75 = t;
      {
        if(((y_74 != NULL) && (y_74 != a_75)))
          _fail(a_75);
        else
          y_74 = a_75;
        {
          t = term_a_16;
          {
            b_75 = t;
            if(((z_74 != NULL) && (z_74 != b_75)))
              _fail(b_75);
            else
              z_74 = b_75;
          }
        }
      }
    }
  }
  t = j_29;
  {
    ATerm m_29;
    m_29 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_74), (ATerm) ATmakeAppl(sym_Defined_2, term_n_29, not_null(z_74)));
      {
        ATerm b_3 (ATerm t)
        {
          t = term_f_13;
          return(t);
        }
        t = assert_1(t, b_3);
      }
    }
    t = m_29;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm h_75 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        t = term_k_14;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              ;
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              {
                ATerm u_29 = t;
                int y_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    ;
                    LocalPopChoice(y_29);
                  }
                else
                  {
                    t = u_29;
                    {
                      ATerm a_30 = t;
                      int d_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          ;
                          LocalPopChoice(d_30);
                        }
                      else
                        {
                          t = a_30;
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
          t = _all(t, h_75);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, c_3, d_3);
      return(t);
    }
    t = h_75(t);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm g_3 (ATerm t)
        {
          ATerm g_75 = NULL;
          g_75 = t;
          f_75 :
          if(match_cons(g_75, sym_InitCachedTerms_0))
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
  ATerm e_30;
  e_30 = t;
  {
    ATerm k_75 = NULL;
    ATerm l_75 = NULL;
    t = term_u_25;
    {
      t = whoami_0(t);
      {
        l_75 = t;
        if(((k_75 != NULL) && (k_75 != l_75)))
          _fail(l_75);
        else
          k_75 = l_75;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), not_null(k_75)), term_g_30));
      {
        t = printnl_0(t);
        {
          t = term_w_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
  p_75 = t;
  o_75 :
  if(match_cons(p_75, sym__2))
    {
      q_75 = ATgetArgument(p_75, 0);
      r_75 = ATgetArgument(p_75, 1);
      {
        ATerm i_30;
        i_30 = t;
        t = SSL_printnl(not_null(q_75), not_null(r_75));
        t = i_30;
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
  ATerm w_75 = NULL;
  w_75 = t;
  t = SSL_implode_string(not_null(w_75));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
        ATerm b_76 = NULL,c_76 = NULL,q_76 = NULL;
        b_76 = t;
        a_76 :
        if(((ATgetType(b_76) == AT_LIST) && !(ATisEmpty(b_76))))
          {
            c_76 = ATgetFirst((ATermList) b_76);
            q_76 = (ATerm) ATgetNext((ATermList) b_76);
            {
              t = not_null(c_76);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(q_76);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_3);
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
  ATerm k_77 = NULL;
  ATerm n_77 = NULL;
  k_77 = t;
  {
    ATerm q_77 = NULL;
    ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
    t = not_null(k_77);
    {
      q_77 = t;
      {
        t = SSL_explode_term(not_null(q_77));
        {
          s_77 = t;
          i_77 :
          if(match_cons(s_77, sym__2))
            {
              t_77 = ATgetArgument(s_77, 0);
              u_77 = ATgetArgument(s_77, 1);
              j_77 :
              if(match_string(t_77, ""))
                {
                  if(((n_77 != NULL) && (n_77 != u_77)))
                    _fail(u_77);
                  else
                    n_77 = u_77;
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
      t = not_null(n_77);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_106 (ATerm))
{
  ATerm h_78 (ATerm t)
  {
    ATerm v_30 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_78);
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = v_30;
        {
          t = Nil_0(t);
          t = w_106(t);
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
          ATerm i_3 (ATerm t)
          {
            t = not_null(m_78);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm k_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = k_31;
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
ATerm eval_config_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            {
              ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
              a_79 = t;
              z_78 :
              if(match_cons(a_79, sym_Path_1))
                {
                  b_79 = ATgetArgument(a_79, 0);
                  t = not_null(b_79);
                }
              else
                {
                  if(match_cons(a_79, sym_Var_1))
                    {
                      b_79 = ATgetArgument(a_79, 0);
                      {
                        t = not_null(b_79);
                        {
                          ATerm d_32 = t;
                          int e_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_32);
                            }
                          else
                            {
                              t = d_32;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_f_32;
                                  return(t);
                                }
                                t = debug_1(t, k_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_79, sym_Prefix_2))
                        {
                          b_79 = ATgetArgument(a_79, 0);
                          c_79 = ATgetArgument(a_79, 1);
                          {
                            ATerm h_79 = NULL,j_79 = NULL;
                            ATerm g_32;
                            g_32 = t;
                            {
                              ATerm i_79 = NULL;
                              t = not_null(b_79);
                              {
                                t = eval_config_0(t);
                                {
                                  i_79 = t;
                                  if(((h_79 != NULL) && (h_79 != i_79)))
                                    _fail(i_79);
                                  else
                                    h_79 = i_79;
                                }
                              }
                            }
                            t = g_32;
                            {
                              ATerm k_79 = NULL;
                              t = not_null(c_79);
                              {
                                t = eval_config_0(t);
                                {
                                  k_79 = t;
                                  if(((j_79 != NULL) && (j_79 != k_79)))
                                    _fail(k_79);
                                  else
                                    j_79 = k_79;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_79), not_null(j_79));
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
  ATerm u_79 = NULL;
  u_79 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_6, not_null(u_79));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_32;
            h_32 = t;
            {
              ATerm w_79 = NULL;
              ATerm x_79 = NULL;
              x_79 = t;
              if(((w_79 != NULL) && (w_79 != x_79)))
                _fail(x_79);
              else
                w_79 = x_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_6, not_null(u_79), not_null(w_79));
                t = table_put_0(t);
              }
            }
            t = h_32;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_119 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm i_32;
    i_32 = t;
    {
      ATerm b_80 = NULL;
      ATerm c_80 = NULL;
      t = term_j_32;
      {
        t = get_config_0(t);
        {
          c_80 = t;
          if(((b_80 != NULL) && (b_80 != c_80)))
            _fail(c_80);
          else
            b_80 = c_80;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_80), term_k_32);
        t = geq_0(t);
      }
    }
    t = i_32;
    t = m_119(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL;
  i_80 = t;
  g_80 :
  if(match_cons(i_80, sym__2))
    {
      j_80 = ATgetArgument(i_80, 0);
      k_80 = ATgetArgument(i_80, 1);
      h_80 :
      if(match_cons(k_80, sym_Stream_1))
        {
          l_80 = ATgetArgument(k_80, 0);
          {
            ATerm o_80 = NULL;
            t = SSL_fputc(not_null(j_80), not_null(l_80));
            {
              ATerm p_80 = NULL;
              p_80 = t;
              if(((o_80 != NULL) && (o_80 != p_80)))
                _fail(p_80);
              else
                o_80 = p_80;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_80));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
  w_80 = t;
  u_80 :
  if(match_cons(w_80, sym__2))
    {
      x_80 = ATgetArgument(w_80, 0);
      z_80 = ATgetArgument(w_80, 1);
      v_80 :
      if(match_cons(x_80, sym_Stream_1))
        {
          y_80 = ATgetArgument(x_80, 0);
          {
            ATerm c_81 = NULL;
            t = SSL_write_term_to_stream_text(not_null(y_80), not_null(z_80));
            {
              ATerm d_81 = NULL;
              d_81 = t;
              if(((c_81 != NULL) && (c_81 != d_81)))
                _fail(d_81);
              else
                c_81 = d_81;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_81));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm h_81 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_81 = NULL;
      i_81 = t;
      if(((h_81 != NULL) && (h_81 != i_81)))
        _fail(i_81);
      else
        h_81 = i_81;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_32, not_null(h_81));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, n_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL;
  o_81 = t;
  m_81 :
  if(match_cons(o_81, sym__2))
    {
      p_81 = ATgetArgument(o_81, 0);
      r_81 = ATgetArgument(o_81, 1);
      n_81 :
      if(match_cons(p_81, sym_Stream_1))
        {
          q_81 = ATgetArgument(p_81, 0);
          {
            ATerm u_81 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_81), not_null(r_81));
            {
              ATerm v_81 = NULL;
              v_81 = t;
              if(((u_81 != NULL) && (u_81 != v_81)))
                _fail(v_81);
              else
                u_81 = v_81;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_81));
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
ATerm WriteToFile_1 (ATerm t, ATerm i_118 (ATerm))
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL;
  e_82 = t;
  d_82 :
  if(match_cons(e_82, sym__2))
    {
      f_82 = ATgetArgument(e_82, 0);
      g_82 = ATgetArgument(e_82, 1);
      {
        ATerm j_82 = NULL,l_82 = NULL;
        t = not_null(f_82);
        {
          ATerm k_82 = NULL;
          k_82 = t;
          if(((j_82 != NULL) && (j_82 != k_82)))
            _fail(k_82);
          else
            j_82 = k_82;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_82), term_m_32);
            {
              t = open_stream_0(t);
              {
                ATerm m_82 = NULL;
                m_82 = t;
                if(((l_82 != NULL) && (l_82 != m_82)))
                  _fail(m_82);
                else
                  l_82 = m_82;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(g_82));
                  {
                    t = i_118(t);
                    {
                      t = fclose_0(t);
                      t = not_null(g_82);
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
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_82 = NULL;
  ATerm n_32;
  n_32 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm v_82 = NULL,w_82 = NULL;
            v_82 = t;
            r_82 :
            if(match_cons(v_82, sym_Output_1))
              {
                w_82 = ATgetArgument(v_82, 0);
                if(((u_82 != NULL) && (u_82 != w_82)))
                  _fail(w_82);
                else
                  u_82 = w_82;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          ;
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm x_82 = NULL;
            t = term_q_32;
            {
              x_82 = t;
              if(((u_82 != NULL) && (u_82 != x_82)))
                _fail(x_82);
              else
                u_82 = x_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = n_32;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(u_82);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm r_32 = t;
      int s_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm y_82 = NULL;
              y_82 = t;
              t_82 :
              if(!(match_cons(y_82, sym_Binary_0)))
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
          LocalPopChoice(s_32);
        }
      else
        {
          t = r_32;
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
ATerm apply_strategy_1 (ATerm t, ATerm i_120 (ATerm))
{
  ATerm e_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL;
  ATerm t_32;
  t_32 = t;
  t = dtime_0(t);
  t = t_32;
  {
    t = i_120(t);
    {
      ATerm u_32;
      u_32 = t;
      {
        ATerm f_83 = NULL;
        t = dtime_0(t);
        {
          f_83 = t;
          if(((e_83 != NULL) && (e_83 != f_83)))
            _fail(f_83);
          else
            e_83 = f_83;
        }
      }
      t = u_32;
      {
        g_83 = t;
        d_83 :
        if(match_cons(g_83, sym__2))
          {
            h_83 = ATgetArgument(g_83, 0);
            i_83 = ATgetArgument(g_83, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_83)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_83))), not_null(i_83));
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
ATerm fclose_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL;
  ATerm x_83 (ATerm t)
  {
    t = SSL_fclose(not_null(r_83));
    return(t);
  }
  r_83 = t;
  p_83 :
  if(match_cons(r_83, sym_Stream_1))
    {
      q_83 = ATgetArgument(r_83, 0);
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(q_83));
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            t = x_83(t);
          }
      }
    }
  else
    {
      t = x_83(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL;
  a_84 = t;
  z_83 :
  if(match_cons(a_84, sym_Stream_1))
    {
      b_84 = ATgetArgument(a_84, 0);
      t = SSL_read_term_from_stream(not_null(b_84));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_117 (ATerm))
{
  ATerm x_32;
  x_32 = t;
  {
    ATerm g_84 = NULL,i_84 = NULL;
    ATerm y_32;
    y_32 = t;
    {
      ATerm h_84 = NULL;
      t = u_117(t);
      {
        h_84 = t;
        if(((g_84 != NULL) && (g_84 != h_84)))
          _fail(h_84);
        else
          g_84 = h_84;
      }
    }
    t = y_32;
    {
      ATerm j_84 = NULL;
      j_84 = t;
      if(((i_84 != NULL) && (i_84 != j_84)))
        _fail(j_84);
      else
        i_84 = j_84;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_84)), not_null(g_84)));
        t = printnl_0(t);
      }
    }
  }
  t = x_32;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,s_84 = NULL;
  p_84 = t;
  o_84 :
  if(match_cons(p_84, sym__2))
    {
      q_84 = ATgetArgument(p_84, 0);
      s_84 = ATgetArgument(p_84, 1);
      {
        ATerm v_84 = NULL;
        t = SSL_fopen(not_null(q_84), not_null(s_84));
        {
          ATerm w_84 = NULL;
          w_84 = t;
          if(((v_84 != NULL) && (v_84 != w_84)))
            _fail(w_84);
          else
            v_84 = w_84;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_84));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_85 = NULL;
  a_85 = t;
  t = SSL_is_string(not_null(a_85));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(match_cons(j_85, sym__2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      {
        ATerm p_85 = NULL,r_85 = NULL;
        ATerm q_85 = NULL;
        t = SSLgetAnnotations(not_null(j_85));
        {
          q_85 = t;
          if(((p_85 != NULL) && (p_85 != q_85)))
            _fail(q_85);
          else
            p_85 = q_85;
        }
        {
          t = not_null(k_85);
          {
            ATerm t_85 = NULL;
            t = d_78(t);
            {
              r_85 = t;
              {
                t = not_null(l_85);
                {
                  ATerm v_85 = NULL;
                  t = e_78(t);
                  {
                    t_85 = t;
                    {
                      ATerm w_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_85), not_null(t_85)), not_null(p_85));
                      {
                        w_85 = t;
                        if(((v_85 != NULL) && (v_85 != w_85)))
                          _fail(w_85);
                        else
                          v_85 = w_85;
                      }
                      t = not_null(v_85);
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
ATerm stdin_stream_0 (ATerm t)
{
  ATerm d_86 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm e_86 = NULL;
    e_86 = t;
    if(((d_86 != NULL) && (d_86 != e_86)))
      _fail(e_86);
    else
      d_86 = e_86;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_86));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm h_86 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm i_86 = NULL;
    i_86 = t;
    if(((h_86 != NULL) && (h_86 != i_86)))
      _fail(i_86);
    else
      h_86 = i_86;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_86));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm l_86 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm m_86 = NULL;
    m_86 = t;
    if(((l_86 != NULL) && (l_86 != m_86)))
      _fail(m_86);
    else
      l_86 = m_86;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_86));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  t_86 :
  if(match_cons(u_86, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(u_86, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(u_86, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_87 = NULL;
  ATerm g_87 = NULL,h_87 = NULL;
  e_87 = t;
  {
    ATerm i_87 = NULL;
    ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL;
    t = not_null(e_87);
    {
      i_87 = t;
      {
        t = SSL_explode_term(not_null(i_87));
        {
          k_87 = t;
          b_87 :
          if(match_cons(k_87, sym__2))
            {
              l_87 = ATgetArgument(k_87, 0);
              m_87 = ATgetArgument(k_87, 1);
              c_87 :
              if(match_string(l_87, ""))
                {
                  d_87 :
                  if(((ATgetType(m_87) == AT_LIST) && !(ATisEmpty(m_87))))
                    {
                      n_87 = ATgetFirst((ATermList) m_87);
                      o_87 = (ATerm) ATgetNext((ATermList) m_87);
                      {
                        if(((h_87 != NULL) && (h_87 != n_87)))
                          _fail(n_87);
                        else
                          h_87 = n_87;
                        if(((g_87 != NULL) && (g_87 != o_87)))
                          _fail(o_87);
                        else
                          g_87 = o_87;
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
    t = not_null(h_87);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  w_87 = t;
  v_87 :
  if(match_cons(w_87, sym__2))
    {
      x_87 = ATgetArgument(w_87, 0);
      y_87 = ATgetArgument(w_87, 1);
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm b_33 = t;
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm z_87 = NULL,a_88 = NULL;
                    z_87 = t;
                    u_87 :
                    if(match_cons(z_87, sym_Path_1))
                      {
                        a_88 = ATgetArgument(z_87, 0);
                        t = not_null(a_88);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, u_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(c_33);
                }
              else
                {
                  t = b_33;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm i_88 = NULL;
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_88 = NULL;
      ATerm h_88 = NULL;
      h_88 = t;
      if(((g_88 != NULL) && (g_88 != h_88)))
        _fail(h_88);
      else
        g_88 = h_88;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_88), term_f_33);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm v_3 (ATerm t)
        {
          t = term_g_33;
          return(t);
        }
        t = debug_1(t, v_3);
        _fail(t);
      }
    }
  {
    ATerm h_33;
    h_33 = t;
    {
      ATerm j_88 = NULL;
      t = read_from_stream_0(t);
      {
        j_88 = t;
        if(((i_88 != NULL) && (i_88 != j_88)))
          _fail(j_88);
        else
          i_88 = j_88;
      }
    }
    t = h_33;
    {
      t = fclose_0(t);
      t = not_null(i_88);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_113 (ATerm), ATerm w_113 (ATerm))
{
  ATerm o_88 = NULL,q_88 = NULL;
  ATerm i_33;
  i_33 = t;
  {
    ATerm p_88 = NULL;
    t = v_113(t);
    {
      p_88 = t;
      if(((o_88 != NULL) && (o_88 != p_88)))
        _fail(p_88);
      else
        o_88 = p_88;
    }
  }
  t = i_33;
  {
    ATerm r_88 = NULL;
    t = w_113(t);
    {
      r_88 = t;
      if(((q_88 != NULL) && (q_88 != r_88)))
        _fail(r_88);
      else
        q_88 = r_88;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), not_null(q_88));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_88 = NULL;
  ATerm j_33;
  j_33 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm y_88 = NULL,a_89 = NULL;
          y_88 = t;
          v_88 :
          if(match_cons(y_88, sym_Input_1))
            {
              a_89 = ATgetArgument(y_88, 0);
              if(((x_88 != NULL) && (x_88 != a_89)))
                _fail(a_89);
              else
                x_88 = a_89;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        {
          ATerm b_89 = NULL;
          t = term_m_33;
          {
            b_89 = t;
            if(((x_88 != NULL) && (x_88 != b_89)))
              _fail(b_89);
            else
              x_88 = b_89;
          }
        }
      }
  }
  t = j_33;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(x_88);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm g_89 = NULL;
    g_89 = t;
    e_89 :
    if(!(match_string(g_89, "-k")))
      {
        if(!(match_string(g_89, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm n_33;
    n_33 = t;
    {
      ATerm h_89 = NULL;
      ATerm i_89 = NULL;
      t = string_to_int_0(t);
      {
        i_89 = t;
        if(((h_89 != NULL) && (h_89 != i_89)))
          _fail(i_89);
        else
          h_89 = i_89;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(h_89));
        t = set_config_0(t);
      }
    }
    t = n_33;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_p_33;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  t = SSL_string_to_int(not_null(l_89));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm t_89 = NULL;
        t_89 = t;
        o_89 :
        if(!(match_string(t_89, "-S")))
          {
            if(!(match_string(t_89, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_v_33;
        t = set_config_0(t);
        t = term_w_33;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_x_33;
        return(t);
      }
      t = Option_3(t, b_4, c_4, d_4);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm u_89 = NULL;
              u_89 = t;
              p_89 :
              if(!(match_string(u_89, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm x_89 = NULL;
              ATerm a_34;
              a_34 = t;
              {
                ATerm v_89 = NULL;
                ATerm w_89 = NULL;
                t = string_to_int_0(t);
                {
                  w_89 = t;
                  if(((v_89 != NULL) && (v_89 != w_89)))
                    _fail(w_89);
                  else
                    v_89 = w_89;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_32, not_null(v_89));
                  t = set_config_0(t);
                }
              }
              t = a_34;
              {
                ATerm y_89 = NULL;
                y_89 = t;
                if(((x_89 != NULL) && (x_89 != y_89)))
                  _fail(y_89);
                else
                  x_89 = y_89;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_89));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_b_34;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm z_89 = NULL;
                z_89 = t;
                s_89 :
                if(!(match_string(z_89, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_d_34;
                t = set_config_0(t);
                t = term_e_34;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_f_34;
                return(t);
              }
              t = Option_3(t, h_4, i_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = g_34;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm f_90 = NULL;
    f_90 = t;
    c_90 :
    if(!(match_string(f_90, "-o")))
      {
        if(!(match_string(f_90, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm i_90 = NULL;
    ATerm j_34;
    j_34 = t;
    {
      ATerm g_90 = NULL;
      ATerm h_90 = NULL;
      h_90 = t;
      if(((g_90 != NULL) && (g_90 != h_90)))
        _fail(h_90);
      else
        g_90 = h_90;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_34, not_null(g_90));
        t = set_config_0(t);
      }
    }
    t = j_34;
    {
      ATerm j_90 = NULL;
      j_90 = t;
      if(((i_90 != NULL) && (i_90 != j_90)))
        _fail(j_90);
      else
        i_90 = j_90;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_90));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_l_34;
    return(t);
  }
  t = ArgOption_3(t, k_4, l_4, m_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = n_34;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm n_90 = NULL;
          n_90 = t;
          m_90 :
          if(!(match_string(n_90, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_r_34;
          t = set_config_0(t);
          t = term_s_34;
          return(t);
        }
        ATerm p_4 (ATerm t)
        {
          t = term_t_34;
          return(t);
        }
        t = Option_3(t, n_4, o_4, p_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL;
  t_90 = t;
  r_90 :
  if(match_string(t_90, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_90) == AT_LIST) && !(ATisEmpty(t_90))))
        {
          u_90 = ATgetFirst((ATermList) t_90);
          v_90 = (ATerm) ATgetNext((ATermList) t_90);
          s_90 :
          if(((ATgetType(v_90) == AT_LIST) && !(ATisEmpty(v_90))))
            {
              w_90 = ATgetFirst((ATermList) v_90);
              x_90 = (ATerm) ATgetNext((ATermList) v_90);
              {
                ATerm b_91 = NULL;
                ATerm v_34;
                v_34 = t;
                {
                  t = not_null(u_90);
                  t = k_0(t);
                }
                t = v_34;
                {
                  ATerm c_91 = NULL;
                  t = not_null(w_90);
                  {
                    t = m_0(t);
                    {
                      c_91 = t;
                      if(((b_91 != NULL) && (b_91 != c_91)))
                        _fail(c_91);
                      else
                        b_91 = c_91;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_90)), not_null(b_91));
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
  ATerm q_4 (ATerm t)
  {
    ATerm j_91 = NULL;
    j_91 = t;
    g_91 :
    if(!(match_string(j_91, "-i")))
      {
        if(!(match_string(j_91, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm m_91 = NULL;
    ATerm w_34;
    w_34 = t;
    {
      ATerm k_91 = NULL;
      ATerm l_91 = NULL;
      l_91 = t;
      if(((k_91 != NULL) && (k_91 != l_91)))
        _fail(l_91);
      else
        k_91 = l_91;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(k_91));
        t = set_config_0(t);
      }
    }
    t = w_34;
    {
      ATerm n_91 = NULL;
      n_91 = t;
      if(((m_91 != NULL) && (m_91 != n_91)))
        _fail(n_91);
      else
        m_91 = n_91;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_91));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_a_35;
    return(t);
  }
  t = ArgOption_3(t, q_4, r_4, s_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm r_91 = NULL;
  t = report_run_time_0(t);
  {
    ATerm s_91 = NULL;
    t = term_u_25;
    {
      t = whoami_0(t);
      {
        s_91 = t;
        if(((r_91 != NULL) && (r_91 != s_91)))
          _fail(s_91);
        else
          r_91 = s_91;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, term_g_35), not_null(r_91)));
      {
        t = printnl_0(t);
        {
          t = term_w_16;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_h_35;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_91 = NULL;
  v_91 = t;
  t = SSL_TicksToSeconds(not_null(v_91));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym__2))
    {
      b_92 = ATgetArgument(a_92, 0);
      c_92 = ATgetArgument(a_92, 1);
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_92), not_null(c_92));
            ;
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            t = SSL_addr(not_null(b_92), not_null(c_92));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_112 (ATerm), ATerm h_112 (ATerm))
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_112(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
        l_92 = t;
        k_92 :
        if(((ATgetType(l_92) == AT_LIST) && !(ATisEmpty(l_92))))
          {
            m_92 = ATgetFirst((ATermList) l_92);
            n_92 = (ATerm) ATgetNext((ATermList) l_92);
            {
              ATerm q_92 = NULL;
              ATerm r_92 = NULL;
              t = not_null(n_92);
              {
                t = foldr_2(t, g_112, h_112);
                {
                  r_92 = t;
                  if(((q_92 != NULL) && (q_92 != r_92)))
                    _fail(r_92);
                  else
                    q_92 = r_92;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_92), not_null(q_92));
                t = h_112(t);
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
ATerm crush_2 (ATerm t, ATerm z_115 (ATerm), ATerm a_116 (ATerm))
{
  ATerm y_92 = NULL;
  ATerm a_93 = NULL;
  y_92 = t;
  {
    ATerm b_93 = NULL;
    ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
    t = not_null(y_92);
    {
      b_93 = t;
      {
        t = SSL_explode_term(not_null(b_93));
        {
          d_93 = t;
          x_92 :
          if(match_cons(d_93, sym__2))
            {
              e_93 = ATgetArgument(d_93, 0);
              f_93 = ATgetArgument(d_93, 1);
              if(((a_93 != NULL) && (a_93 != f_93)))
                _fail(f_93);
              else
                a_93 = f_93;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_93);
      t = foldr_2(t, z_115, a_116);
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
    ATerm t_4 (ATerm t)
    {
      t = term_f_16;
      return(t);
    }
    t = crush_2(t, t_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  l_93 = t;
  k_93 :
  if(match_cons(l_93, sym__2))
    {
      m_93 = ATgetArgument(l_93, 0);
      n_93 = ATgetArgument(l_93, 1);
      {
        ATerm z_35;
        z_35 = t;
        {
          ATerm a_36 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_93), not_null(n_93));
              ;
              LocalPopChoice(b_36);
            }
          else
            {
              t = a_36;
              t = SSL_gtr(not_null(m_93), not_null(n_93));
            }
        }
        t = z_35;
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
  ATerm t_93 = NULL;
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL;
      u_93 = t;
      s_93 :
      if(match_cons(u_93, sym__2))
        {
          v_93 = ATgetArgument(u_93, 0);
          w_93 = ATgetArgument(u_93, 1);
          {
            if(((t_93 != NULL) && (t_93 != v_93)))
              _fail(v_93);
            else
              t_93 = v_93;
            if(((t_93 != NULL) && (t_93 != w_93)))
              _fail(w_93);
            else
              t_93 = w_93;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_119 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm e_36;
    e_36 = t;
    {
      ATerm z_93 = NULL;
      ATerm a_94 = NULL;
      t = term_j_32;
      {
        t = get_config_0(t);
        {
          a_94 = t;
          if(((z_93 != NULL) && (z_93 != a_94)))
            _fail(a_94);
          else
            z_93 = a_94;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_93), term_w_16);
        t = geq_0(t);
      }
    }
    t = e_36;
    t = l_119(t);
    return(t);
  }
  t = try_1(t, u_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm e_94 = NULL,g_94 = NULL;
    ATerm f_36;
    f_36 = t;
    {
      ATerm f_94 = NULL;
      t = run_time_0(t);
      {
        f_94 = t;
        if(((e_94 != NULL) && (e_94 != f_94)))
          _fail(f_94);
        else
          e_94 = f_94;
      }
    }
    t = f_36;
    {
      ATerm h_94 = NULL;
      t = term_u_25;
      {
        t = whoami_0(t);
        {
          h_94 = t;
          if(((g_94 != NULL) && (g_94 != h_94)))
            _fail(h_94);
          else
            g_94 = h_94;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_36), not_null(e_94)), term_g_36), not_null(g_94)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_f_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  n_94 :
  if(match_cons(o_94, sym_Version_0))
    {
      ATerm q_94 = NULL,s_94 = NULL;
      ATerm l_36;
      l_36 = t;
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
      t = l_36;
      {
        ATerm t_94 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_94));
        {
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
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
ATerm need_help_1 (ATerm t, ATerm g_121 (ATerm))
{
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_36;
      t = get_config_0(t);
      ;
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              {
                ATerm r_36 = t;
                int s_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(s_36);
                  }
                else
                  {
                    t = r_36;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, w_4);
      }
    }
  t = g_121(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_94 = NULL;
  y_94 = t;
  t = SSL_table_create(not_null(y_94));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_95 = NULL;
  c_95 = t;
  {
    ATerm t_36;
    t_36 = t;
    {
      t = term_u_36;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_36, term_v_36, not_null(c_95));
          t = table_put_0(t);
        }
      }
    }
    t = t_36;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_95 = NULL;
  g_95 = t;
  t = SSL_table_destroy(not_null(g_95));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_95 = NULL;
  k_95 = t;
  t = SSL_exit(not_null(k_95));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_123 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm n_95 (ATerm t)
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = Cons_2(t, h_106, n_95);
      }
    return(t);
  }
  t = n_95(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  w_95 = t;
  t_95 :
  if(((ATgetType(w_95) == AT_LIST) && !(ATisEmpty(w_95))))
    {
      u_95 = ATgetFirst((ATermList) w_95);
      v_95 = (ATerm) ATgetNext((ATermList) w_95);
      {
        ATerm z_95 = NULL;
        t = not_null(v_95);
        {
          ATerm y_36;
          y_36 = t;
          {
            ATerm a_96 = NULL,c_96 = NULL,e_96 = NULL;
            ATerm z_36;
            z_36 = t;
            {
              ATerm b_96 = NULL;
              t = i_0(t);
              {
                b_96 = t;
                if(((a_96 != NULL) && (a_96 != b_96)))
                  _fail(b_96);
                else
                  a_96 = b_96;
              }
            }
            t = z_36;
            {
              ATerm d_96 = NULL;
              t = not_null(u_95);
              {
                t = g_0(t);
                {
                  d_96 = t;
                  if(((c_96 != NULL) && (c_96 != d_96)))
                    _fail(d_96);
                  else
                    c_96 = d_96;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_96)), not_null(c_96));
                {
                  e_96 = t;
                  if(((z_95 != NULL) && (z_95 != e_96)))
                    _fail(e_96);
                  else
                    z_95 = e_96;
                }
              }
            }
          }
          t = y_36;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(z_95);
              return(t);
            }
            t = reverse_acc_2(t, g_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_95) == AT_LIST) && ATisEmpty(w_95)))
        {
          {
            t = term_u_25;
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_123 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm p_96 = NULL,q_96 = NULL;
  p_96 = t;
  o_96 :
  if(match_cons(p_96, sym_Program_1))
    {
      q_96 = ATgetArgument(p_96, 0);
      {
        ATerm t_96 = NULL,v_96 = NULL;
        ATerm u_96 = NULL;
        t = SSLgetAnnotations(not_null(p_96));
        {
          u_96 = t;
          if(((t_96 != NULL) && (t_96 != u_96)))
            _fail(u_96);
          else
            t_96 = u_96;
        }
        {
          t = not_null(q_96);
          {
            ATerm x_96 = NULL;
            t = r_86(t);
            {
              v_96 = t;
              {
                ATerm y_96 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_96)), not_null(t_96));
                {
                  y_96 = t;
                  if(((x_96 != NULL) && (x_96 != y_96)))
                    _fail(y_96);
                  else
                    x_96 = y_96;
                }
                t = not_null(x_96);
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
ATerm default_system_usage_0 (ATerm t)
{
  ATerm h_97 = NULL;
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_97 = NULL;
      t = term_h_35;
      {
        t = get_config_0(t);
        {
          i_97 = t;
          if(((h_97 != NULL) && (h_97 != i_97)))
            _fail(i_97);
          else
            h_97 = i_97;
        }
      }
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm j_97 = NULL;
            j_97 = t;
            if(((h_97 != NULL) && (h_97 != j_97)))
              _fail(j_97);
            else
              h_97 = j_97;
            return(t);
          }
          t = Program_1(t, a_5);
          return(t);
        }
        t = option_defined_1(t, z_4);
      }
    }
  {
    ATerm b_5 (ATerm t)
    {
      ATerm c_5 (ATerm t)
      {
        t = not_null(h_97);
        return(t);
      }
      t = short_description_1(t, c_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = term_c_37;
      {
        t = echo_0(t);
        {
          t = term_f_37;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm k_97 = NULL;
                  ATerm l_97 = NULL;
                  l_97 = t;
                  if(((k_97 != NULL) && (k_97 != l_97)))
                    _fail(l_97);
                  else
                    k_97 = l_97;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_97)), term_g_37);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm m_97 = NULL;
                    ATerm n_97 = NULL;
                    ATerm i_5 (ATerm t)
                    {
                      t = not_null(h_97);
                      return(t);
                    }
                    t = long_description_1(t, i_5);
                    {
                      n_97 = t;
                      if(((m_97 != NULL) && (m_97 != n_97)))
                        _fail(n_97);
                      else
                        m_97 = n_97;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_97)), term_h_37);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_5);
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
ATerm override_system_usage_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm x_97 = NULL,y_97 = NULL;
  x_97 = t;
  w_97 :
  if(match_cons(x_97, sym_Undefined_1))
    {
      y_97 = ATgetArgument(x_97, 0);
      {
        ATerm b_98 = NULL,d_98 = NULL;
        ATerm c_98 = NULL;
        t = SSLgetAnnotations(not_null(x_97));
        {
          c_98 = t;
          if(((b_98 != NULL) && (b_98 != c_98)))
            _fail(c_98);
          else
            b_98 = c_98;
        }
        {
          t = not_null(y_97);
          {
            ATerm f_98 = NULL;
            t = s_86(t);
            {
              d_98 = t;
              {
                ATerm g_98 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_98)), not_null(b_98));
                {
                  g_98 = t;
                  if(((f_98 != NULL) && (f_98 != g_98)))
                    _fail(g_98);
                  else
                    f_98 = g_98;
                }
                t = not_null(f_98);
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
ATerm fetch_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm l_98 (ATerm t)
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_106, _id);
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = Cons_2(t, _id, l_98);
      }
    return(t);
  }
  t = l_98(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_122 (ATerm))
{
  t = fetch_1(t, u_122);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
  n_98 = t;
  m_98 :
  if(((ATgetType(n_98) == AT_LIST) && ATisEmpty(n_98)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_98) == AT_LIST) && !(ATisEmpty(n_98))))
        {
          o_98 = ATgetFirst((ATermList) n_98);
          p_98 = (ATerm) ATgetNext((ATermList) n_98);
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
  ATerm m_37;
  m_37 = t;
  {
    ATerm s_98 = NULL;
    ATerm y_98 = NULL;
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        {
          ATerm t_98 = NULL;
          ATerm x_98 = NULL;
          x_98 = t;
          if(((t_98 != NULL) && (t_98 != x_98)))
            _fail(x_98);
          else
            t_98 = x_98;
          t = (ATerm) ATinsert(ATempty, not_null(t_98));
        }
      }
    {
      y_98 = t;
      if(((s_98 != NULL) && (s_98 != y_98)))
        _fail(y_98);
      else
        s_98 = y_98;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_32, not_null(s_98));
      t = printnl_0(t);
    }
  }
  t = m_37;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_h_35;
  {
    t = get_config_0(t);
    t = echo_0(t);
  }
  return(t);
}
ATerm override_system_about_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym_Help_0))
    {
      ATerm h_99 = NULL,j_99 = NULL;
      ATerm r_37;
      r_37 = t;
      {
        ATerm i_99 = NULL;
        t = SSLgetAnnotations(not_null(f_99));
        {
          i_99 = t;
          if(((h_99 != NULL) && (h_99 != i_99)))
            _fail(i_99);
          else
            h_99 = i_99;
        }
      }
      t = r_37;
      {
        ATerm k_99 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_99));
        {
          k_99 = t;
          if(((j_99 != NULL) && (j_99 != k_99)))
            _fail(k_99);
          else
            j_99 = k_99;
        }
        t = not_null(j_99);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_98(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm u_99 = NULL;
        u_99 = t;
        q_99 :
        if(!(match_string(u_99, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_x_37;
        t = set_config_0(t);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_y_37;
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm v_99 = NULL;
          v_99 = t;
          r_99 :
          if(!(match_string(v_99, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_x_37;
          {
            t = set_config_0(t);
            {
              t = term_a_38;
              t = set_config_0(t);
            }
          }
          t = term_b_38;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_c_38;
          return(t);
        }
        t = Option_3(t, m_5, n_5, o_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL;
  y_99 = t;
  x_99 :
  if(match_cons(y_99, sym__2))
    {
      z_99 = ATgetArgument(y_99, 0);
      a_100 = ATgetArgument(y_99, 1);
      t = SSL_table_get(not_null(z_99), not_null(a_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL;
  h_100 = t;
  g_100 :
  if(match_cons(h_100, sym__3))
    {
      i_100 = ATgetArgument(h_100, 0);
      j_100 = ATgetArgument(h_100, 1);
      k_100 = ATgetArgument(h_100, 2);
      {
        ATerm d_38;
        d_38 = t;
        {
          ATerm o_100 = NULL;
          ATerm p_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_100), not_null(j_100));
          {
            ATerm e_38 = t;
            int f_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_38);
              }
            else
              {
                t = e_38;
                t = (ATerm) ATempty;
              }
            {
              p_100 = t;
              if(((o_100 != NULL) && (o_100 != p_100)))
                _fail(p_100);
              else
                o_100 = p_100;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_100), not_null(j_100), (ATerm) ATinsert(CheckATermList(not_null(o_100)), not_null(k_100)));
            t = table_put_0(t);
          }
        }
        t = d_38;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_123 (ATerm))
{
  ATerm v_100 = NULL;
  ATerm w_100 = NULL;
  t = term_u_25;
  {
    t = z_123(t);
    {
      w_100 = t;
      if(((v_100 != NULL) && (v_100 != w_100)))
        _fail(w_100);
      else
        v_100 = w_100;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_37, term_e_37, not_null(v_100));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  b_101 :
  if(match_string(c_101, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(c_101) == AT_LIST) && !(ATisEmpty(c_101))))
        {
          d_101 = ATgetFirst((ATermList) c_101);
          e_101 = (ATerm) ATgetNext((ATermList) c_101);
          {
            ATerm h_101 = NULL;
            ATerm g_38;
            g_38 = t;
            {
              t = not_null(d_101);
              t = a_0(t);
            }
            t = g_38;
            {
              ATerm i_101 = NULL;
              t = term_u_25;
              {
                t = b_0(t);
                {
                  i_101 = t;
                  if(((h_101 != NULL) && (h_101 != i_101)))
                    _fail(i_101);
                  else
                    h_101 = i_101;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_101)), not_null(h_101));
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
  ATerm p_5 (ATerm t)
  {
    ATerm n_101 = NULL;
    n_101 = t;
    m_101 :
    if(!(match_string(n_101, "--help")))
      {
        if(!(match_string(n_101, "-h")))
          {
            if(!(match_string(n_101, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_h_38;
    {
      t = set_config_0(t);
      t = term_i_38;
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_j_38;
    return(t);
  }
  t = Option_3(t, p_5, r_5, s_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL;
  q_101 = t;
  p_101 :
  if(((ATgetType(q_101) == AT_LIST) && !(ATisEmpty(q_101))))
    {
      r_101 = ATgetFirst((ATermList) q_101);
      s_101 = (ATerm) ATgetNext((ATermList) q_101);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_101)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_101)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL;
  e_102 = t;
  d_102 :
  if(((ATgetType(e_102) == AT_LIST) && !(ATisEmpty(e_102))))
    {
      f_102 = ATgetFirst((ATermList) e_102);
      g_102 = (ATerm) ATgetNext((ATermList) e_102);
      {
        ATerm k_102 = NULL,m_102 = NULL;
        ATerm l_102 = NULL;
        t = SSLgetAnnotations(not_null(e_102));
        {
          l_102 = t;
          if(((k_102 != NULL) && (k_102 != l_102)))
            _fail(l_102);
          else
            k_102 = l_102;
        }
        {
          t = not_null(f_102);
          {
            ATerm o_102 = NULL;
            t = m_79(t);
            {
              m_102 = t;
              {
                t = not_null(g_102);
                {
                  ATerm q_102 = NULL;
                  t = n_79(t);
                  {
                    o_102 = t;
                    {
                      ATerm r_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_102)), not_null(m_102)), not_null(k_102));
                      {
                        r_102 = t;
                        if(((q_102 != NULL) && (q_102 != r_102)))
                          _fail(r_102);
                        else
                          q_102 = r_102;
                      }
                      t = not_null(q_102);
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
  ATerm b_103 = NULL;
  b_103 = t;
  a_103 :
  if(((ATgetType(b_103) == AT_LIST) && ATisEmpty(b_103)))
    {
      {
        ATerm d_103 = NULL,f_103 = NULL;
        ATerm k_38;
        k_38 = t;
        {
          ATerm e_103 = NULL;
          t = SSLgetAnnotations(not_null(b_103));
          {
            e_103 = t;
            if(((d_103 != NULL) && (d_103 != e_103)))
              _fail(e_103);
            else
              d_103 = e_103;
          }
        }
        t = k_38;
        {
          ATerm g_103 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_103));
          {
            g_103 = t;
            if(((f_103 != NULL) && (f_103 != g_103)))
              _fail(g_103);
            else
              f_103 = g_103;
          }
          t = not_null(f_103);
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
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  m_103 = t;
  l_103 :
  if(match_cons(m_103, sym__2))
    {
      n_103 = ATgetArgument(m_103, 0);
      o_103 = ATgetArgument(m_103, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_6, not_null(n_103), not_null(o_103));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_123 (ATerm))
{
  ATerm l_38;
  l_38 = t;
  {
    ATerm t_5 (ATerm t)
    {
      t = term_m_38;
      t = x_123(t);
      return(t);
    }
    t = try_1(t, t_5);
  }
  t = l_38;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm w_103 = NULL;
      ATerm n_38;
      n_38 = t;
      {
        ATerm u_103 = NULL;
        ATerm v_103 = NULL;
        v_103 = t;
        if(((u_103 != NULL) && (u_103 != v_103)))
          _fail(v_103);
        else
          u_103 = v_103;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_35, not_null(u_103));
          t = set_config_0(t);
        }
      }
      t = n_38;
      {
        ATerm x_103 = NULL;
        x_103 = t;
        if(((w_103 != NULL) && (w_103 != x_103)))
          _fail(x_103);
        else
          w_103 = x_103;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_103));
      }
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm o_38 = t;
      int p_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              {
                t = x_123(t);
                t = Cons_2(t, _id, v_5);
              }
            }
          ;
          LocalPopChoice(p_38);
        }
      else
        {
          t = o_38;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_5, v_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL;
  ATerm s_38;
  s_38 = t;
  {
    ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
    g_104 = t;
    c_104 :
    if(match_cons(g_104, sym__3))
      {
        h_104 = ATgetArgument(g_104, 0);
        i_104 = ATgetArgument(g_104, 1);
        j_104 = ATgetArgument(g_104, 2);
        {
          if(((d_104 != NULL) && (d_104 != h_104)))
            _fail(h_104);
          else
            d_104 = h_104;
          {
            if(((e_104 != NULL) && (e_104 != i_104)))
              _fail(i_104);
            else
              e_104 = i_104;
            {
              if(((f_104 != NULL) && (f_104 != j_104)))
                _fail(j_104);
              else
                f_104 = j_104;
              t = SSL_table_put(not_null(d_104), not_null(e_104), not_null(f_104));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_38;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_123 (ATerm))
{
  ATerm m_104 = NULL;
  ATerm t_38;
  t_38 = t;
  {
    t = term_u_38;
    t = table_put_0(t);
  }
  t = t_38;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm v_38 = t;
      int w_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_123(t);
          ;
          LocalPopChoice(w_38);
        }
      else
        {
          t = v_38;
          {
            ATerm x_38 = t;
            int y_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(y_38);
              }
            else
              {
                t = x_38;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_39;
            b_39 = t;
            {
              ATerm c_39 = t;
              int d_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_36;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_39);
                }
              else
                {
                  t = c_39;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_39;
            {
              t = system_usage_0(t);
              {
                t = term_f_16;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            {
              ATerm e_39 = t;
              int f_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_39;
                  g_39 = t;
                  {
                    t = term_w_37;
                    t = get_config_0(t);
                  }
                  t = g_39;
                  {
                    t = system_about_0(t);
                    {
                      t = term_f_16;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(f_39);
                }
              else
                {
                  t = e_39;
                  {
                    ATerm c_6 (ATerm t)
                    {
                      ATerm f_6 (ATerm t)
                      {
                        ATerm n_104 = NULL;
                        n_104 = t;
                        if(((m_104 != NULL) && (m_104 != n_104)))
                          _fail(n_104);
                        else
                          m_104 = n_104;
                        return(t);
                      }
                      t = Undefined_1(t, f_6);
                      return(t);
                    }
                    t = option_defined_1(t, c_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_104)), term_h_39));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_w_16;
                            t = exit_0(t);
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
      t = try_1(t, b_6);
      {
        ATerm i_39;
        i_39 = t;
        {
          t = term_d_37;
          t = table_destroy_0(t);
        }
        t = i_39;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm l_121 (ATerm))
{
  t = parse_options_1(t, i_121);
  {
    t = store_options_0(t);
    {
      t = k_121(t);
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_121);
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm l_39 = t;
              int m_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_121(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_39);
                }
              else
                {
                  t = l_39;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm a_121 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_120(t);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, x_120);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_6, z_120, a_121, i_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    ATerm s_6 (ATerm t)
    {
      ATerm p_39;
      p_39 = t;
      {
        ATerm q_104 = NULL;
        ATerm r_104 = NULL;
        t = term_h_35;
        {
          t = get_config_0(t);
          {
            r_104 = t;
            if(((q_104 != NULL) && (q_104 != r_104)))
              _fail(r_104);
            else
              q_104 = r_104;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATempty, not_null(q_104)));
          t = printnl_0(t);
        }
      }
      t = p_39;
      return(t);
    }
    t = if_verbose2_1(t, s_6);
    return(t);
  }
  t = iowrap_4(t, r_120, s_120, t_120, m_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_120 (ATerm), ATerm q_120 (ATerm))
{
  t = iowrap_3(t, p_120, q_120, default_usage_0);
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
